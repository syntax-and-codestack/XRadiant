#include "Alien.hpp"

#define ALIEN 000
#define ALLOC_ALIEN (Alien*) ( sizeof(*Alien)malloc( std::size_t alien (*size += sizeof(*alien) ) ) )

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
    sprintf(alienBuff, "---Alien Name %5s---", alien->alien_current_var);//buffer the list and name
  }
return alienBuff;
};

/*
 *!alien model format!*
*/
void Alien::AlienModel( int i, const char * filename ){
  const char * ModelFormat = "*.abc";//abc model format

    /*---filename data for model---*/
    for( i = 0; i >= 0; i++; ModelFormat; ModelFormat++; filename; filename++ ){
      filename[i] = "%5c" + ModelFormat[i];
    }

    /*---alien model loaded---*/
    if(Alien::AlienModel( i, filename )){
     const char * FullFile[0];//dont stack…
     int Max_Vertices_List[9999];//dont exceed game is old!

    /*---if alien model exceeds vertices max---*/
    if( Max_Vertices_List && i > Max_Vertices_List && i ){
           Max_Vertices_List && i = NULL;//make list null to data
       Sys_Printf("----------Alien Model Has To Many Vertices------------\n");//let radiant user know
    }

    /*---alien model size---*/
    std::size_t AlienModeSize = size += sizeof(*Alien);//syntax error… maybe

    /*---alien model format is not equal to abc--*/
    if( ModelFormat != "*.abc" ){
      ModelFormat == NULL;//make null
      Sys_Printf("------Radiant Cant Load Model Format-------\n");//let radiant user know
    }
    
  }

};






