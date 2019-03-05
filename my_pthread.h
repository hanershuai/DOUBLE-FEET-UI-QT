#ifndef MY_PTHREAD_H
#define MY_PTHREAD_H

#include "global.h"

void image_search(void);
void image_chase(void);
void image_approach(void);
void image_round(void);
void image_kick(void);
void image_stand_up(void);

extern int flag_begin;

void *mcu(void *arg);
void *image(void *arg);
void *network(void *arg);
void *process_body(void *arg);
void *process_head(void *arg);
void *process_game_master(void *arg);
void *serial(void *arg);
void *fsm_change(void *arg);
void *location(void *arg);

#endif // MY_PTHREAD_H
