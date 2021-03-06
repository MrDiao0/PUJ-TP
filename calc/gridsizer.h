#include <wx/wx.h>
#include <string.h>
#include <iostream>
using namespace std;

class GridSizer : public wxFrame
{
public:
  GridSizer(const wxString& title);

  wxBoxSizer *sizer;
  wxGridSizer *gs;
  wxTextCtrl *display;
  
  void onCls (wxCommandEvent&);
  void onBt0 (wxCommandEvent&);
  void onBt1 (wxCommandEvent&);
  void onBt2 (wxCommandEvent&);
  void onBt3 (wxCommandEvent&);
  void onBt4 (wxCommandEvent&);
  void onBt5 (wxCommandEvent&);
  void onBt6 (wxCommandEvent&);
  void onBt7 (wxCommandEvent&);
  void onBt8 (wxCommandEvent&);
  void onBt9 (wxCommandEvent&);
  void onBtRes (wxCommandEvent&);
  void onBtSum (wxCommandEvent&);
  void onBtMul (wxCommandEvent&);
  void onBtDiv (wxCommandEvent&);
  void onBtClose (wxCommandEvent&);
  void onBtTot (wxCommandEvent&);
  void onBtBck (wxCommandEvent&);
  void onBtDot (wxCommandEvent&);
  
private:
  string a;
  string b;
  float valor1;
  float valor2;
  string operando;
  float operando1;
  float operando2;
  float nClicks;
  float total;
  DECLARE_EVENT_TABLE()
};
