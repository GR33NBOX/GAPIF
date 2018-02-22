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

/*@FileName: configurations.inc
 *@FileCreator: Green Box Admin
 *@Comments: Config file
 */
//START//
// API Properties
$ApiName = 'Test API By GAPIF';
$ApiAuthor = 'Green Box';
$ApiVersion = $ApiStatus;
$BaseURL = "http://127.0.0.1/gapif/";
//Shared variable here 
$PassSalt = '';
$GMAPAPI = '';
// Get Mods
$getmods = filter_input(INPUT_GET, 'mods');
$mods = explode('/', $getmods);
if(count($mods)< 2) {
	// Load error JSON    
	exit('Something is wrong! You have No Access!');
} else {
	$ApiSecureKey = $mods[0];
	//
	$OutputType = $mods[1];
	// JSON/XML
	if($mods[2] != '') {
		$ReqController = $mods[2];
	} else {
		$ReqController = $mods[2] = 'GAPIF';
	}
}
// Set Controllers Location (As Root Index)
$ControllerLocation = $ApiDirectory . "Controllers/";
// Config Diretory
$ConfigDir = $ApiDirectory . "Configs/";
// System Library Directory
$LibsDir = $ApiDirectory . 'Systems/';
// Request/Action Controller file
$ActionControllerLocation = $ControllerLocation . 'ActionController/';
// Default Access Controller file
$AccessController = $ControllerLocation . 'AccessController.inc';
// Default Output Controller file
$OutputController = $ControllerLocation . 'OutputController' . $OutputType . '.inc';
// Request/Action Controller file
$ActionController = $ActionControllerLocation . $ReqController . 'Controller.inc';
// Call universal resource
// Include Liberary for override the php ini propertise
include("{$ConfigDir}phpiniconfig.inc");
// Include System Liberary Diretory File
include("{$ConfigDir}systems_dir.inc");
include Function_gmtDateTime;
include Function_dt2mil2dt;
//END//
