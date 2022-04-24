#include "p24fj128ga010.h"
#include "digital.h"

void pinsMode(unsigned* tris, int mode)
{
    *tris = mode;
}

void digitalWrite(unsigned* port, int value)
{
    *port = value;
}



int digitalRead(unsigned* port)
{
    int status= 0;
    status = *port;
    return  port;
}
