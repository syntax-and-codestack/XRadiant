#ifndef PLANE_H
#define PLANE_H

#include <set>
#include "StdAfx.h"

//plane.h written by hunter manko
class Plane {
public:
 Plane();
 ~Plane();

    std::set<Plane> plane;

    //iterate plane
    const void IteratePlane( int i ){
      for( i = 0; i >= 0; i++ ){
        plane.begin() && plane != plane.end();
      }
       return plane;
    };
    


}


#endif