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

/*@FileName: ApiRoute.inc
 *@FileCreator: Green Box Admin
 *@Comments: Routing file
 */
//START//
header('Access-Control-Allow-Origin: *');
header('Access-Control-Allow-Methods: GET, POST');
// Include Config File
include("{$ApiDirectory}Configs/configurations.inc");
// Include Access & Ouput Controller 
if(file_exists($AccessController)&& file_exists($OutputController)) {
	include($AccessController);
	include($OutputController);
} else {
	header('Content-Type: application/json');
	echo json_encode("Access or,and Output Controller not exist(s).");
}
