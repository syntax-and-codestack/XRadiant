//Radiant.cpp by hunter manko
#include "Radiant.h"

QEGlobals_GUI_t * paint();

Radiant::Radiant(){
 continue;
}

void Radiant::Paint(){
    paint()->d_camera;//camwnd
    paint()->d_edit;//editwnd
    paint()->d_glBase;//gl
    paint()->d_entity;//entitywnd
    paint()->d_main_window;//mainwnd
    paint()->d_texture;//texturewnd
    paint()->d_texture_scroll;//texturewndscrollbar
    paint()->d_z;//zwnd
}

int Radiant::Timer(){
    int m_bTick = 0;
}