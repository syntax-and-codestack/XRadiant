//Radiant.h by hunter manko
#ifndef RADIANT_H
#define RADIANT_H

#include "stdafx.h"

class Radiant{
public:
    Radiant();
    //timer
    virtual int Timer() = 0;
    //paint
    virtual void Paint() = 0;
    //open
    virtual void Open( const char * pFilename ) = 0; 
    //close
    virtual void Close( const char * pFilename ) = 0;

};

#endif