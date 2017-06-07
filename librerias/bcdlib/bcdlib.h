#ifndef bcdlib_h
#define bcdlib_h

#include <Arduino.h>


class bcdlib {
public:
    static byte bcd2dec(byte data);
    static byte dec2bcd(byte data);
};

#endif
