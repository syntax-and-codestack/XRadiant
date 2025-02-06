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

/*
 *!alien name!*
*/
const char * AlienName(Alien * alien){
static char alienBuff[1024];
alien->alien_current_var = e_tAlienId++;
  for(alien; alien++){
    Sys_Printf("------------------Alien Entity %5i--------------------");
    sprintf(alienBuff, "---Alien Name %5s---", alien->alien_current_var);
  }
return alienBuff;
};

/*
 *!alien model format!*
*/
void Alien::AlienModel( int i, const char * filename ){
  

};






