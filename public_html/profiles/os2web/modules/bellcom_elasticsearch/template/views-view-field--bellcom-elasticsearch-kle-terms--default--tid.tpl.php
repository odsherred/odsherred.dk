<?php
if ($output) {
  $tid = $output;

  $kle = bellcom_elasticsearch_get_kle_by_tid($tid);

  if ($kle) {
    $weight = $kle->weight;
    if ($kle->from_date) {
      $from_date = date_create_from_format('Y-m-d H:i:s', $kle->from_date);
      $from_date = date(DATE_FORMAT, date_timestamp_get($from_date));
    }
    if ($kle->until_date) {
      $until_date = date_create_from_format('Y-m-d H:i:s', $kle->until_date);
      $until_date = date(DATE_FORMAT, date_timestamp_get($until_date));
    }
  }
  else {
    $weight = 1;
    $from_date = '';
    $until_date = '';
  }
  ?>

  <div class="row_kle">
    <input type="hidden" class="tid_id" value="<?php print $tid; ?>">
    From&nbsp;&nbsp;&nbsp;
    <input type="text" class="form-text datepicker from locked" size="10" value="<?php print $$from_date; ?>" disabled>
    Until&nbsp;&nbsp;&nbsp;
    <input type="text" class="form-text datepicker until locked" size="10" value="<?php print $until_date; ?>" disabled>
    Weight&nbsp;&nbsp;&nbsp;
    <input type="text" class="weight form-text locked" size="5" value="<?php print $weight; ?>" disabled>&nbsp;&nbsp;&nbsp;
    <a class="edit-link" href="#">Edit</a>
    <a class="submit-link" style="display: none;" href="#">Submit</a><span class="submitted"
                                                                           style="display: none;">OK</span>
  </div>

<?php } ?>