#include "p24fj128ga010.h"
#include "digital.h"

void pinMode(int tris, int mode)
{
    tris = mode;
}

void digitalWrite(int port, int value)
{
    port = value;
}



int digitalRead(int port)
{
    int status= 0;
    status = port;
    return status;
}
