/*
 * global.c
 *
 *  Created on: Oct 9, 2022
 *      Author: Hong Phat
 */
#include "global.h"
int status;
int status2;
// status of road1, road2
int timer_red = 5000;
int timer_yellow = 3000;
int timer_green = 2000;
// set timer for each led

int timerred_counter = 5;
int timeryellow_counter = 3;
int timergreen_counter = 2;
// Use display to 7segment of road1

int timerred2_counter = 5;
int timeryellow2_counter = 3;
int timergreen2_counter = 2;
// Use display to 7segment of road2

int set_timer = 0;
// time duration value when modify
