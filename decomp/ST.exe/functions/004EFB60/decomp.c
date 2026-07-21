#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::InitBldLabPanel */

void __thiscall BldLabPanelTy::InitBldLabPanel(BldLabPanelTy *this)

{
  code *pcVar1;
  BldLabPanelTy *this_00;
  int errorCode;
  DArrayTy *pDVar2;
  ushort *puVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  BldLabPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    g_prodPanel_00801680 = (ProdPanelTy *)local_8;
    pDVar2 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x28,0x30,10);
    this_00->field_027A = pDVar2;
    this_00->field_003C = this_00->field_003C + (g_nWidth_00806730 + -800) / 2;
    puVar3 = cMf32::RecGet(DAT_00806790,1,"BKG_BUILDLABW",(int *)0x0,1);
    this_00->field_0184 = puVar3;
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_0188 = puVar3;
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,"OBJSD",0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_018C = puVar3;
    ProdPanelTy::InitProdPanel
              ((ProdPanelTy *)this_00,0x2726,0x3f,2,0xc1,0xc,0x81,99,100,0xc0,99,0x25,0x14,0x31,
               "OBJS_0");
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\bldlab.cpp",0x1d,0,errorCode,"%s"
                             ,"BldLabPanelTy::InitBldLabPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\bldlab.cpp",0x1d);
  return;
}

