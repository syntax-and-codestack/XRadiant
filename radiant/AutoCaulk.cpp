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
