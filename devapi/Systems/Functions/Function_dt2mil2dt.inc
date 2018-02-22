<?php

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

function dt2mil2dt($DT, $Mil, $DTFormat, $timezone) {
	if($DT == '' && $Mil != '') {
		// Returm Datetime
		if($DTFormat == '') {
			$DTFormat = 'Y/m/d H:i:s';
		}
		//
		if($timezone != '' && is_numeric($timezone)) {
			$timezone = $timezone;
		} else {
			$timezone = 0;
		}
		$Millis =($Mil +($timezone * 3600000))/ 1000;
		return date($DTFormat, $Millis);
	} elseif($DT != '' && $Mil == '') {
		// Done
		return strtotime($DT)* 1000;
	}
}
