#include <reg52.h>
#include <init.h>

void init_timer_0() {
    TMOD &= 0xF0;
    TMOD |= 0x08;
    TR0 = 0;
}