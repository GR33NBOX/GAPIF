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

/*@FileName: array_to_xml_function.inc
 *@FileCreator: Green Box Admin
 *@Comments: Array to xml
 */
//START//
function array_to_xml($array, $wrap = 'OutputXML', $upper = true) {
	// set initial value for XML string
	$xml = '';
	// wrap XML with $wrap TAG
	if($wrap != null) {
		$xml .= "<$wrap>\n";
	}
	// main loop

	foreach($array as $key => $value) {
		// set tags in uppercase if needed
		if($upper == true) {
			$key = strtoupper($key);
		}
		// append to XML string
		$xml .= "<$key>" . htmlspecialchars(trim($value)). "</$key>";
	}
	// close wrap TAG if needed
	if($wrap != null) {
		$xml .= "\n</$wrap>\n";
	}
	// return prepared XML string
	return $xml;
}
