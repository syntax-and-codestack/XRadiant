#include "stdafx.h"
#include <set>

int texdefId = 0;

std::set<qtexture_t> g_nBrushTexture_Callback;

void TexdefBuild( brush_t * b, qtexture_t * qTexdef, const char * pTextureName ){
    if( b->brush_faces && qTexdef->name == pTextureName ){
        g_nBrushTexture_Callback.begin(), g_nBrushTexture_Callback.end();
    }
}


