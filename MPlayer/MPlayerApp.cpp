/***************************************************************
 * Name:      MPlayerApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2019-10-19
 * Copyright:  ()
 * License:
 **************************************************************/

#include "MPlayerApp.h"

//(*AppHeaders
#include "MPlayerMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(MPlayerApp);

bool MPlayerApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	MPlayerDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
