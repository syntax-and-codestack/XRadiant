#include "Alien.hpp"

#define ALIEN 000
#define MALLOC_ALIEN (Alien*) ( sizeof(*Alien)malloc( std::size_t alien (*size += sizeof(*alien) ) ) )

//---globals---
int e_tAlienId = 0;
qboolean Rigged;

/*
 *!alloc alien!*
*/
Alien * AllocAlien(){
  Alien * alien = (Alien*)qmalloc(sizeof(*alien));
  return alien;
};
