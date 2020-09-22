#include <util.h>
#include <reg52.h>
void delay (unsigned int mili_second) {
    float time_of_one_cyle = 0.001085;
    unsigned long number_of_cycle = mili_second / time_of_one_cyle;
    unsigned char number_of_loops = number_of_cycle / 65536;
    unsigned char i;
    put_value_timer(number_of_cycle % 65536);
    for (i = 0; i < number_of_loops;i++) {
        put_value_timer (65536);
        number_of_cycle -= 65536;
    }
}

void put_value_timer (unsigned int number_of_machine_cycles) {
    //unsigned char left_over_cycles;
    //unsigned char number_of_loops;
    TL0 = number_of_machine_cycles;
    number_of_machine_cycles = number_of_machine_cycles >> 8;
    TH0 = number_of_machine_cycles;
}