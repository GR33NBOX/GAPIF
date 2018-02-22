<?php

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

function gmtDateTime($timezone, $format) {
	if($timezone == '') {
		$timezone = 0;
	}
	$zone = 3600 * $timezone;
	if($format == '') {
		$format = 'Y/m/d H:i:s';
	}
	$GMTDateTime = gmdate($format, time()+ $zone);
	return $GMTDateTime;
}
