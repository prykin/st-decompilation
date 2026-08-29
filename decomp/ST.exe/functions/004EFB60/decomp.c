#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::InitBldLabPanel */

void __thiscall BldLabPanelTy::InitBldLabPanel(BldLabPanelTy *this)

{
  BldLabPanelTy *this_00;
  int errorCode;
  DArrayTy *pBVar2;
  ushort *puVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  BldLabPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    g_bldLabPanel_00801680 = (ProdPanelTy *)local_8;
    /* ST_CALLSITE[004EFBA3]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/BldLabPanelTy_field_027ADArray; source view only; no Ghidra override */
    pBVar2 = Library::DKW::TBL::DArrayCreate(nullptr,0x28,0x30,10);
    this_00->field_027A = (BldLabPanelTy_field_027ADArray *)pBVar2;
    this_00->field_003C = this_00->field_003C + (g_nWidth_00806730 + -800) / 2;
    puVar2 = cMf32::RecGet(g_cMf32_00806790,1,"BKG_BUILDLABW",nullptr,1);
    this_00->field_0184 = puVar2;
    puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,nullptr);
    this_00->field_0188 = puVar2;
    puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,"OBJSD",0xffffffff,0,1,0,nullptr);
    this_00->field_018C = puVar2;
    /* ST_CALLSITE[004EFC57]: CALL 0x00404241; direct=00404241 ProdPanelTy::InitProdPanel */
    ProdPanelTy::InitProdPanel
              ((ProdPanelTy *)this_00,0x2726,0x3f,2,0xc1,0xc,0x81,99,100,0xc0,99,0x25,0x14,0x31,
               "OBJS_0");
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\bldlab.cpp",0x1d,0,errorCode,"%s"
                             ,"BldLabPanelTy::InitBldLabPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\bldlab.cpp",0x1d);
  return;
}

