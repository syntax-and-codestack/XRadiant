//BuildBrush.cpp programmed by hunter manko

#include "stdafx.h"

//variables
int nBuild;
qboolean build(brush_t * b);
typedef brush_t Brush;

#include <set>

std::set<Brush> g_nBrushBuildCallback;

/*---build brush---*/
void BuildBrush( Brush * b ){
    if( g_qeglobals.m_bBrushPrimitMode == true && b->maxs = -16 && b->mins = +16 ){
        Brush_Build( b );
    }
 Sys_Printf("---------------Brush Built %i------------------\n");
};

/*---signal brush build---*/
Brush * SignalBrush_Build( Brush * b ){
    for( b->numberId = 0; b->numberId >= 0; b->numberId++ ){
        g_nBrushBuildCallback.begin(), g_nBrushBuildCallback.end();
    }
   free(*Brush);//free the brush
 return SignalBrush_Build( b );
};