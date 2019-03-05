#ifndef HEAD_ACTIONS_H
#define HEAD_ACTIONS_H

#include "global.h"

void move_head(double lower, double upper);

void body_stop(void);
void head_search(void);
void head_chase(void);
void head_round_yaw(void);
void head_search_goal(void);
void head_adjust_ball(void);
void head_round_goal(void);
void head_approach_ball(void);
void head_kick(void);


#endif // HEAD_ACTIONS_H
