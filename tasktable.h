
#pragma once

#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Input.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Table.H>
#include "utils/intvec.h"
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_Image.H>



class CTaskTable:public Fl_Group
{ 
protected:
    void draw();
 
public:
  CTaskTable(int x, int y, int w, int h, const char *l=0);
  ~CTaskTable();
  CLongVector  vtRows;

  void SetSize(int newrows);
  int nDims;
  Fl_Image *rowImg;
  static void OnAddRow(Fl_Widget *w, void *);
  static void OnDelRow(Fl_Widget*,void*);
  
private:
  //int BuildRow(int nRow);

};

    struct CBtnStruc{
        XPoint pt;
        const char* tips;
        Fl_Callback_p pfn;
    };
