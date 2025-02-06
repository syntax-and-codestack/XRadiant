#include "stdafx.h"
#include "StdAfx.h"

//globals 
int g_nMenuId = 0;
qboolean g_nFlushCommands;

/*--------------------------
    GridMenu.cpp written 
      by hunter manko
--------------------------*/

#define GTK_GRID_MENU (GtkWidget*)
#define GRID_MENU_COMMAND (const char * MenuCommand)

struct{
    void begin();
    void end();
}MenuIterator;//iterate...

void GridMenu_CommandStream(GtkWidget * menu, int * i, const char * cmd);//create menu parent
void GridSubMenu_CommandStream(GtkWidget * menu, int * i, const char * mparent, const char * cmd);//create sub menu command

XYWnd * XYMenuView( int i , GtkWidget * menu ){
MenuIterator& j;

    if( i = XYMenuView( i, menu )->Active == true ){
                for( i = 0; i >= 0; i++ ){
                    GridMenu_CommandStream( menu, i++, "Grid Add" );
                    GridSubMenu_CommandStream(menu, i++, "%Grid Add", "Alien");
                    GridSubMenu_CommandStream(menu, i++, "%Grid Add", "Predator");
                    GridSubMenu_CommandStream(menu, i++, "%Grid Add", "Marine");
                    GridSubMenu_CommandStream(menu, i++, "%Grid Add", "Model");
                }
        j.begin();  j.end();
    }

 return XYMenuView( i, menu );

};

ZWnd * YZMenuView( int i, GtkWidget * menu ){
ZWnd * panel();
MenuIterator& j;

    if( i = YZMenuView( i, menu ); i = YZ; menu = panel()->CreateContext(); i++ ){
                for( i = 0; i >= 0; i++ ){
                    GridMenu_CommandStream( menu, i++, "Grid Add" );
                    GridSubMenu_CommandStream(menu, i++, "%Grid Add", "Alien");
                    GridSubMenu_CommandStream(menu, i++, "%Grid Add", "Predator");
                    GridSubMenu_CommandStream(menu, i++, "%Grid Add", "Marine");
                    GridSubMenu_CommandStream(menu, i++, "%Grid Add", "Model");
                }
        j.begin();  j.end();
    }

 return YZMenuView( i, menu );

}

XYWnd * YZMenuView( int i, GtkWidget * menu ){
XYWnd * YZPanelWnd();
MenuIterator& j;

    if( i = YZMenuView( i, menu ); i = YZ; YZPanelWnd()->Active == true; i++ ){
                for( i = 0; i >= 0; i++ ){
                    GridMenu_CommandStream( menu, i++, "Grid Add" );
                    GridSubMenu_CommandStream(menu, i++, "%Grid Add", "Alien");
                    GridSubMenu_CommandStream(menu, i++, "%Grid Add", "Predator");
                    GridSubMenu_CommandStream(menu, i++, "%Grid Add", "Marine");
                    GridSubMenu_CommandStream(menu, i++, "%Grid Add", "Model");
                }
        j.begin();  j.end();
    }

 return YZMenuView( i, menu );

}

