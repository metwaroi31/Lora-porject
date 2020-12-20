#include <reg52.h>
#include <init.h>

sbit motor1_pin_1 = P1 ^ 0;
sbit motor1_pin_2 = P1 ^ 1;
sbit motor2_pin_1 = P1 ^ 2;
sbit motor2_pin_2 = P1 ^ 3;

void init_timer_0() {
    TMOD &= 0xF0;
    TMOD |= 0x09;
    TR0 = 0;
}

void init_external_interrupt_0() {
    EX0 = 1;
    IT0 = 1; 
}

void init_motor () {
    // P0 = 0xFA;
    motor1_pin_1 = 0;
    motor1_pin_2 = 1;
    motor2_pin_1 = 0;
    motor2_pin_2 = 1;
}