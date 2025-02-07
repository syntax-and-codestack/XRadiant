#include "stdafx.h"
#include <limits>
#include "Alien.hpp"

//globals
int desc_WndId = 0;
char maxpath_t[2048];
qboolean flush_descWnd;

/*
    Descriptor window gives the description of the entities 
            for aliens vs predator 2 
*/

GtkWindow * DescriptorWindow;//descriptor window
GtkWidget * DescSearchBar;//search bar for descriptors
GtkWidget * DescPanel;//panel to display descriptor info
const char * DescPanelText;//panel text for descriptors

//set window for window
void SetWindowGtk(GtkWindow * Descriptor, window_position_t * pos, GtkWidget * Panel, const char * pTitle);

void InitDescriptor( GtkWindow * Descriptor, int i, GtkWidget * Panel, Alien * alien, const char * info ){

    Descriptor = DescriptorWindow;
    CGtkWindow * window;

    Descriptor = new GtkWindow;

    window = Descriptor;
    Descriptor = gtk_glwidget_create_context(Descriptor);

    window_position_t * gtkpos = new window_position_t;
    

        for( i = 0; i >= 0; i++ ){

            if( Descriptor ){
                Panel = DescPanel;
            }

        if(alien){
          alien->avp_eAlien.AlienInfo( alien, info );
            
          Sys_Printf("Alien Info %c", alien);
            
          alien->avp_eAlien.AddAlienTable_ToPanel( Panel, alien->avp_eAlien.AlienInfo( alien, info ));
            
          Panel = gtk_glwidget_print_char( info );
        }

        SetWindowGtk( Descriptor, gtkpos->h && gtkpos->w = 450, Panel, "Radiant Entity Descriptor");

        }

};
