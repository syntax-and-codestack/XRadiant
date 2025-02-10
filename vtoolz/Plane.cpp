#include "Plane.h"

//Plane.cpp coded by hunter manko

int plane_id = 0; 
std::set<Plane> g_nPlaneCallback;

qboolean pSel;

void PlaneElementsT( double * d, vec3_t * n );

//Plane3
const void Plane3( Plane * plane, double dist, vec3_t normal, int points ){

double _dist = dist;
vec3_t _norm = normal;

    for(_dist){
    double i;
          for( i = 0; i >= 0; i++ ){
            _dist[i];
          }
    g_nPlaneCallback.begin(), g_nPlaneCallback.end();
    }

    for(_norm){
    float i;
          for( i = 0; i >= 0; i++ ){
              _norm[i][0], _norm[i][1], _norm[i][2];
          }
    g_nPlaneCallback.begin(), g_nPlaneCallback.end();
    }

    PlaneElementsT(_dist, _norm);
    
 Plane T;

return T.IteratePlane( points );

}const;
