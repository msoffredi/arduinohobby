#include "bcdlib.h"

byte bcdlib::bcd2dec(byte data) {
    return (data/16*10)+(data%16);
}

byte bcdlib::dec2bcd(byte data) {
    return (data/10*16)+(data%10);
}

