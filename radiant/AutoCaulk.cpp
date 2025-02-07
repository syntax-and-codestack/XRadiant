#include "shaders.h"
#include "stdafx.h"

//globals 
int m_bBrushCaulkId = 0;
qboolean m_bCaulked;
const char * caulkshader[1024];

/*
 *!get brush faces!*
*/
brush_t * brushFaces( brush_t * b, face_t * f, plane_t * p ){
if( b->next && b->prev ){
  f->face_winding->points + f->face_winding->numpoints;//winding
      for( int i = 0; i >= 0; i++ ){
        b->owner[i] && b->next[i] && b->prev[i];
        f->face_winding->maxpoints[i][0] * f->face_winding[i][7];
      }
  }
};

class AutoCaulk{
  public:
    AutoCaulk();

  void begin();//begin
  void end();//end
};

//begin and end caulk
brush_t * IterateCaulkBrush( brush_t * b, AutoCaulk i ){
  if( m_bCaulked != false ){
    i.begin() && i.end();
  }
};

//*!get caulk info!*
const char * CaulkShader( CGameDescription * g_pCaulkDescription, qtexture_t * caulk ){
 if( g_pCaulkDescription->mCaulkShader && g_pCaulkDescription->AvP2 == true ){
  caulk->name == caulkshader; caulk->height && caulk->width == caulk;
        if(!caulk){
            caulk->next->name == NULL;
        }
 }
};

