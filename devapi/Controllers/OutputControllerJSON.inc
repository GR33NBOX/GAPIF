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

/*@FileName: OutputControllerJSON.inc
 *@FileCreator: Green Box Admin
 *@Comments: Output controller JSON file
 */
//START//
header('Content-Type: application/json');
$OutputArray["ApiStatus"] = array("ApiName" =>$ApiName,
								  "ApiAuthor" =>$ApiAuthor,
								  "ApiVersion" =>$ApiVersion,
								  "ApiFrameWork" =>$ApiFrameWork);
$OutputArray["OperationalStatus"] = array("OperationalName" =>$ReqController,
										  "OperationalStatus" =>$OperationalStatus,
										  "OperationalMessage" =>$OperationalMessage,
										  "RequestDateTime" =>$RequestDateTime,
										  "ExecutionTime" =>$ExecutionTime);
$OutputArray["OutputDatas"] = $GAPIF_OutputDatas;
echo json_encode($OutputArray);
