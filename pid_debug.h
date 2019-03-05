#ifndef PID_DEBUG_H_
#define PID_DEBUG_H_
#include "global.h"

void pid_debug_init(void);
double pid_calc_lower(PID *pid);
double pid_calc_upper(PID *pid);
void save_pid(void);
void read_pid(void);
void pid_reset(void);

void T_debug_init(void);



#endif /* PID_DEBUG_H_ */
