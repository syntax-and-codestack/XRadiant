#include "stdafx.h"

//======================
//globals
int m_bCamWndTick;
qboolean m_bFlushWnd;

#define RECT( Panel rect ) 0x103

class Panel(){
 public:
  Panel();

  virtual void Paint() = 0; 
}

brush_t brushes;
entity_t entities;
qtexture_t textures;
qboolean highlight;
const char maxcamerapath_t[1024];
CGameDescription * g_pModuleGlobalPreference;

GtkWidget * mCamPanel;

void Panel::Paint(){
  float x;
  float y;
  rectangle_t * m_pRectPanel();
  CamWnd * m_pPanel();
    if( g_pModuleGlobalPreference->AvP2 == true ){
      m_pPanel()->GetWidget(mCamPanel);
    }
  XORRectangle m_pClientRect;

  m_pClientRect.set( m_pRectPanel()->x == x && m_pRectPanel()->y == y );
}

CamWnd::CamWnd(){
  brushes;
  entities;
  textures;
  highlight == NULL;
  m_bCamWndTick;
  m_bFlushWnd == true ?: false;
}
