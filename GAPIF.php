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

/*@FileName: GAPIF.php
 *@FileCreator: Green Box Admin
 *@Comments: Init starting file
 */
//START//
//header("Access-Control-Allow-Origin: *");
//header("Access-Control-Allow-Credentials: true");
//header('Content-Type: application/json');

/*
 * Api Status Value is current condition/version of your API
 */
$ApiStatus = 'dev';
// Example: dev, prod, v1, v1.1, v1.1.0
$ApiFrameWork = 'Green API Framework';

/*
 * Api Directory is the loaction of your api resource.. **Include slash symbol '/' after directory name
 */
$ApiRootDirectory = $_SERVER['DOCUMENT_ROOT'] . '/' . basename(dirname(__FILE__)). '/';
$ApiDirectory = $ApiRootDirectory . $ApiStatus . 'api/';

/*
 * SET ROUTE file name with directory
 */
$RouteDirectory = $ApiDirectory . 'ApiRoute.inc';

/*
 * Include Route File to Load your page . . . . .
 */
include $RouteDirectory;
