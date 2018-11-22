<?php

	// Defining settings for panels
	$plugin = array(
		'title' => t('Citizen Proposals'),
		'description' => t('This custom pane provides Citizen Proposals.'),
		'category' => t('Custom'),
		'single' => TRUE,
		'render callback' => 'citizen_proposals_content_type_render',
		'content type' => '[content_type]',
		'edit form' => 'citizen_proposals_edit_form',
		'admin info' => 'citizen_proposals_admin_info',
	);


	function citizen_proposals_content_type_render($subtype, $conf, $panel_args, $context) {
		$block = new stdClass();
		$block->title = null;
		$block->content = '';

		// Form: Add new proposal
		$block->content .= '
			<form id="create_proposal" method="post">
				<div class="_headline">Opret nyt forslag</div><br />
				<br />
				Forslag overskrift *<br />
				<input type="text" name="proposal_title" placeholder="Forslag overskrift" required autofocus /><br />
				<br />
				Forslag *<br />
				<textarea name="proposal_body" required placeholder="Skriv forslag"></textarea><br />
				<br />
				Dit navn *<br />
				<input type="text" name="name" placeholder="Navn" required /><br />
				<br />
				Adresse *<br />
				<input type="text" name="address" placeholder="Adresse" required /><br />
				<br />
				Postnummer *<br />
				<input type="text" name="zip_code" placeholder="Postnummer" pattern="\d{4}" required maxlength="4" /><br />
				<br />
				By *<br />
				<input type="text" name="city" placeholder="By" required /><br />
				<br />
				Din e-mail *<br />
				<input type="email" name="email" placeholder="E-mail" required /><br />
				<br />
				<button class="_submit">Indsend forslag</button>
			</form>
		';

		// Get nodes
		$query = db_select('node', 'n');
		$query->join('field_data_body', 'body', 'n.nid = body.entity_id');
		$query->join('field_data_field_navn', 'name', 'n.nid = name.entity_id');
		$query->leftJoin('citizen_proposals_votes', 'votes', 'n.nid = votes.vote_for_nid');
		$query
			->fields('n', array('nid', 'title', 'created'))
			->fields('body', array('body_value'))
			->fields('name', array('field_navn_value'))
			->condition('n.type', 'borgerdrevne_forslag')
			->condition('n.status', '1')
			->groupBy('n.nid')
			->orderBy('n.created', 'DESC');
		$query->addExpression('COUNT(votes.id)', 'vote_count');
		$result = $query->execute();

		setlocale(LC_ALL, 'da_DK.utf-8');

		$block->content .= '<div id="citizen_proposals">';
		foreach ($result as $row) {
			$block->content .= '
				<div class="proposal_wrapper" data-nid="' . $row->nid . '">
					<a class="proposal">
			 			<div class="_date">' . strftime('%d %b %Y', $row->created) . '</div>
			 			<div class="_title">' . $row->title . '</div>
			 			<div class="_votes">' . $row->vote_count . '</div>
			 		</a>
			 		<div class="_body">
			 			' . $row->body_value . '
			 			<div class="_author">Oprettet af ' . $row->field_navn_value . '</div>
			 			<hr />
			 			<!-- <a href="#" class="_vote_link">+ Stem på dette forslag</a> -->
			 			<div class="_vote_headline">Stem på dette forslag</div>
			 			<form class="_vote_form" method="post">
			 				Dit navn *<br />
			 				<input type="text" name="name" placeholder="Navn" required /><br />
			 				<br />
			 				Adresse *<br />
			 				<input type="text" name="address" placeholder="Adresse" 23" required /><br />
			 				<br />
			 				Postnummer *<br />
			 				<input type="text" name="zip_code" placeholder="Postnummer" pattern="\d{4}" required maxlength="4" /><br />
			 				<br />
			 				By *<br />
			 				<input type="text" name="city" placeholder="By" required /><br />
			 				<br />
			 				Din e-mail *<br />
			 				<input type="email" name="email" placeholder="E-mail" required /><br />
			 				<br />
			 				<button class="_vote_submit">Indsend stemme</button>
			 			</form>
			 		</div>
			 	</div>
			 ';
		}

		$block->content .= '</div>';
		return $block;
	}


	// Giving the users posibility of changing the title of the pane.
	function citizen_proposals_admin_info($subtype, $conf, $contexts) {
		if (!empty($conf)) {
			$block = new stdClass;
			$block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
			return $block;
		}
	}

	function citizen_proposals_edit_form($form, &$form_state) {
		return $form;
	}

	//Saving new inputs to the pane if any.
	function citizen_proposals_edit_form_submit($form, &$form_state) {
			foreach (array_keys($form_state['plugin']['defaults']) as $key) {
					if (isset($form_state['values'][$key])) {
							 $form_state['conf'][$key] = $form_state['values'][$key];
					}
			}
	}

	function citizen_proposals_special_users_permissions($node, $user) {
		// Lets check that the user viewing this file is allowed to edit.
		foreach ($node->field_brugere['und'][0] as $uid) {
			if($user->uid == $uid || $node->uid == $user->uid) {
				return true;
			} else {
				return false;
			}
		}
	}
