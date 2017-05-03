#ifndef GENERAL_H_
#define GENERAL_H_	1

#include "cpu.h"

typedef enum {
	STRAIGHT,
	STOP
} motor_state;

motor_state motorState;

int right_triggered;
int front_triggered;
int left_triggered;

#endif