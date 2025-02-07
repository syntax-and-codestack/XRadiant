#include "stdafx.h"
#include <limits>

//globals
int desc_WndId = 0;
char maxpath_t[2048];
qboolean flush_descWnd;

GtkWindow * DescriptorWindow;//descriptor window
GtkWidget * DescSearchBar;//search bar for descriptors
GtkWidget * DescPanel;//panel to display descriptor info
const char * DescPanelText;//panel text for descriptors
//