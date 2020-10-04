#include <line_detector.h>
#include <motor.h>
#include <reg52.h>
// int line_detection = 1;

sbit test = P2 ^ 4;
sbit motor1_pin_1 = P1 ^ 0;
sbit motor1_pin_2 = P1 ^ 1;
sbit motor2_pin_1 = P1 ^ 2;
sbit motor2_pin_2 = P1 ^ 3;
void handle_line_detection(void) interrupt 0 {
    
    motor1_pin_1 = ~motor1_pin_1;
    motor1_pin_2 = ~motor1_pin_2;
    motor2_pin_1 = ~motor2_pin_1;
    motor2_pin_2 = ~motor2_pin_2;
    test = ~test;
}
