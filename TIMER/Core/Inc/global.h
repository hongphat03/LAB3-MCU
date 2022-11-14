/*
 * global.h
 *
 *  Created on: Oct 9, 2022
 *      Author: Hong Phat
 */
#include "software_timer.h"
#include "button.h"

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

//#define INIT0			1
//#define INIT9			2
//#define NORMAL			3
//#define INC				4
//#define DEC				5
#define INIT 				0
#define AUTO_RED 			1
#define AUTO_YELLOW 		2
#define AUTO_GREEN 			3
extern int counter;
extern int status;
extern int status2;
extern int timer_red;
extern int timer_yellow;
extern int timer_green;
extern int set_timer;
extern int timerred_counter;
extern int timeryellow_counter;
extern int timergreen_counter;
extern int timerred2_counter;
extern int timeryellow2_counter;
extern int timergreen2_counter;
#define MODIFY_RED 12
#define MODIFY_GREEN 13
#define MODIFY_YELLOW 14


#endif /* INC_GLOBAL_H_ */
