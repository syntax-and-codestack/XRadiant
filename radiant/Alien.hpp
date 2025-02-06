#pragma once
#ifndef ALIEN_HPP
#define ALIEN_HPP

#include "stdafx.h"

/*---------------------------
        Alien.hpp 
    Alien Entity In AvP

  Writen by hunter manko
---------------------------*/
typedef struct Alien{

int current_alien_var;
Alien& avp_eAlien;
bool alien_static;//no path nodes

void SpawnAlien();
float AlienHealth;
void AlienModel();
void begin(); void end();

vec3_t AlienPosition;

};

#endif
