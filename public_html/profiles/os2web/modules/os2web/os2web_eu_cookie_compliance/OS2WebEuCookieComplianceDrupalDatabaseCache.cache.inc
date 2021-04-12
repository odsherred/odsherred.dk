<?php
/**
 * Overrides DrupalDatabaseCache.
 */
class OS2WebEuCookieComplianceDrupalDatabaseCache extends DrupalDatabaseCache {

  /**
   * Constructs a OS2WebEuCookieComplianceDrupalDatabaseCache object.
   *
   * @param $bin
   *   The cache bin for which the object is created.
   */
  function __construct($bin) {
    parent::__construct($bin);
  }

  /**
   * {@inheritdoc }
   */
  function get($cid) {
    $cid = empty($_COOKIE['cookie-agreed']) ? ('no-cookies-' . $cid) : $cid;
    return parent::get($cid);
  }

  /**
   * {@inheritdoc }
   */
  function set($cid, $data, $expire = CACHE_PERMANENT) {
    $cid = empty($_COOKIE['cookie-agreed']) ? ('no-cookies-' . $cid) : $cid;
    parent::set($cid, $data);
  }

}
