#ifndef _api_H_
#define _api_H_

//////

//==========================================================
//                    FOR START
//==========================================================
extern volatile int SM_Step;
extern volatile int SM_Half_Step;
extern volatile int StepperDelay;
extern volatile unsigned int first_byte_MSG;  // UART RX
//------------------------------------------------
// state 10
extern void stepper_motor_calibration(void);

//==========================================================
//                 GLOBAL VARIABLES
//==========================================================
extern volatile unsigned int state;
extern volatile int sum_up_value;                           // state 2
extern volatile int sum_down_value;                         // state 3
extern volatile char POT[5];
//================================================
//        SERVICE FUNCTIONS
//================================================
extern void RGBBlink(int delay);                           // state 1
//------------------------------------------------
extern void UpCounter(int delay);                          // state 2
//------------------------------------------------
extern void DownCounter(int delay);                        // state 3
//------------------------------------------------
extern void Potentiometer(void);                           // state 5
//------------------------------------------------
extern void clear_and_initialize(void);                    // state 6
//------------------------------------------------
extern void Transmit_menu(void);                           // state 8

#endif

