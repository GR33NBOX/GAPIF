<?php

/*@Green Api Framework [An Open Source API Framework Based On PHP]
 *@Developer Agency: Green Box
 *@Publisher Agency: Open Source Solver
 *@Author: Green Box & Open Source Solver
 *@Copyright: Green Box & Open Source Solver
 *@Copyright Under: http://creativecommons.org/licenses/by-nc-sa/4.0/
 *@Contact: gr33nbox.work@gmail.com, www.gr33nbox.work
 *@Address: Dhaka, Bangladesh
 */

/*@FileName: AccessController.inc
 *@FileCreator: Green Box Admin
 *@Comments: Access controller file
 */
//START//
$RequestDateTime = date('Y-m-d H:i:s');
$TimeStart = microtime(true);
$OutputArray = array();
$OutputArray["ApiStatus"] = null;
$OutputArray["OperationalStatus"] = null;
$OutputArray["OutputDatas"] = $OutputDatas = null;
if($ApiSecureKey == '1234') {
	// Load your controller here    
	if(file_exists($ActionController)) {
		include $ActionController;
		$OperationalStatus = 'Success';
		$OperationalMessage = "Your {$ReqController}'s action executed!";
	} else {
		$OperationalStatus = 'Failed';
		$OperationalMessage = "Your {$ReqController}'s action controller not found";
	}
} else {
	$OperationalStatus = 'Failed';
	$OperationalMessage = "Your API Secure Key is invalid";
}
$TimeEnd = microtime(true);
$ExecutionTime = number_format((float)($TimeEnd - $TimeStart), 4, '.', ''). ' second(s)';
