<?php

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

function gmt2gmt0mil($mil, $timezone, $mil_plus_minus) {
	return($mil -(1 *($timezone *(3600000))))+ $mil_plus_minus;
}
