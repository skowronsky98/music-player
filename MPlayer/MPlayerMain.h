/***************************************************************
 * Name:      MPlayerMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2019-10-19
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef MPLAYERMAIN_H
#define MPLAYERMAIN_H

//(*Headers(MPlayerDialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
//*)

class MPlayerDialog: public wxDialog
{
    public:

        MPlayerDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~MPlayerDialog();

    private:

        //(*Handlers(MPlayerDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(MPlayerDialog)
        static const long ID_STATICTEXT1;
        static const long ID_STATICLINE1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON1;
        //*)

        //(*Declarations(MPlayerDialog)
        wxBoxSizer* BoxSizer1;
        wxBoxSizer* BoxSizer2;
        wxButton* Button1;
        wxButton* Button2;
        wxStaticLine* StaticLine1;
        wxStaticText* StaticText1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // MPLAYERMAIN_H
