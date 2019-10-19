/***************************************************************
 * Name:      MPlayerMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2019-10-19
 * Copyright:  ()
 * License:
 **************************************************************/

#include "MPlayerMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(MPlayerDialog)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(MPlayerDialog)
const long MPlayerDialog::ID_STATICTEXT1 = wxNewId();
const long MPlayerDialog::ID_STATICLINE1 = wxNewId();
const long MPlayerDialog::ID_BUTTON2 = wxNewId();
const long MPlayerDialog::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(MPlayerDialog,wxDialog)
    //(*EventTable(MPlayerDialog)
    //*)
END_EVENT_TABLE()

MPlayerDialog::MPlayerDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(MPlayerDialog)
    Create(parent, wxID_ANY, _("wxWidgets app"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(295,127));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Welcome to\nwxWidgets"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    if ( !StaticText1Font.Ok() ) StaticText1Font = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    StaticText1Font.SetPointSize(20);
    StaticText1->SetFont(StaticText1Font);
    BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
    BoxSizer2 = new wxBoxSizer(wxVERTICAL);
    StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
    BoxSizer2->Add(StaticLine1, 0, wxALL|wxEXPAND, 4);
    Button2 = new wxButton(this, ID_BUTTON2, _("Quit"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer2->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
    Button1 = new wxButton(this, ID_BUTTON1, _("Siema"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer2->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer2, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
    SetSizer(BoxSizer1);
    SetSizer(BoxSizer1);
    Layout();

    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&MPlayerDialog::OnQuit);
    //*)
}

MPlayerDialog::~MPlayerDialog()
{
    //(*Destroy(MPlayerDialog)
    //*)
}

void MPlayerDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}

void MPlayerDialog::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
