#include "channels.h"
#include "elev.h"
#include "io.h"


#include <assert.h>
#include <stdlib.h>

//FUNKSJONER FRA ELEV.C


//Variable: 
int orders[][];

//Funksjoner:

//elev_button_type_t er en enum: BUTTON_CALL_UP=0, BUTTON_CALL_DOWN=1, BUTTON_COMMAND=2
void add_to_queue(floor,elev_button_type_t buttons);

bool check_floor_orders();

void clear_orders_at_floor();

void clear_all_orders();

bool get_new_direction();
