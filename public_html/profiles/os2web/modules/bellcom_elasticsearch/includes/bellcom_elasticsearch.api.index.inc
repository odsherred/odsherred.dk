<?php


function bellcom_elasticsearch_api_index_close($client, $index_id) {
  $params = array(
    'index' => $index_id
  );

  $client->indices()->close($params);
}

function bellcom_elasticsearch_api_index_open($client, $index_id) {
  $params = array(
    'index' => $index_id
  );

  $client->indices()->open($params);
}

function bellcom_elasticsearch_api_add_analyzer($client, $index_id, $synonyms_file_path) {
  $params = [
    'index' => $index_id,
    'body' => [
      'settings' => [
        'analysis' => [
          'analyzer' => [
            'bellcom_elasticsearch_analyser' => [
              'tokenizer' => 'whitespace',
              'filter' => ['synonym', 'lowercase', 'stopwords']
            ]
          ],
          'filter' => [
            'synonym' => [
              'type' => 'synonym',
              'synonyms_path' => $synonyms_file_path,
              'ignore_case' => TRUE
            ],
            'lowercase' => [
              'type' => 'lowercase',
            ],
            'stopwords' => [
              'type' => 'stop',
              'stopwords' => '_danish_'
            ],
          ]
        ]
      ]
    ]
  ];

  $client->indices()->putSettings($params);
}
