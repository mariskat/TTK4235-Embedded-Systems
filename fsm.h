#include "elev.h"
#include "queue.h"
#include "timer.h"

#include <stdio.h>


void fsm_event_stop_pressed();
void fsm_event_stop_released();
void fsm_event_order_button_pressed();
void fsm_event_arrived_at_floor(int new_floor);
void fsm_event_door_closed();
