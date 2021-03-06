
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

class CTaskRow;
class CTskTimer;
class CTskTimerMgr;
class CNewTaskFrame;

class CTaskTable:public Fl_Group
{ 
protected:
  void draw();
 
public:
  CTaskTable(int x, int y, int w, int h, const char *l=0);
  ~CTaskTable();
  CLongVector  vtRows;

  int GetSelRow();
  Fl_Image *rowImg;
  CTaskRow* BuildTskRow(int& yOffset, CTskTimer* pTskTimer);
  void HighLight(int n);
  CTaskRow* AddRow(CNewTaskFrame*  pNewTskFrm, CTskTimer* pTskTimer, int nLine);
  static void OnAddRow(Fl_Widget *w, void *);
  static void OnMoveUpDown(Fl_Widget *w, void *);
  static void OnEditRow(Fl_Widget*,void*);  
  static void OnDelRow(Fl_Widget*,void*);
  static void OnTskPause(Fl_Widget*,void*);
  
  CTskTimerMgr* m_pTskTimerMgr;
  int m_nRowsHeightTotal;
  void swapRow(CTaskRow*& a, CTaskRow*& b);  

};

    struct CBtnStruc{
        XPoint pt;
        const char* tips;
        Fl_Callback_p pfn;
    };

