#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::DeleteCtrls */

void __thiscall SettMapMTy::DeleteCtrls(SettMapMTy *this)

{
  code *pcVar1;
  SettMapMTy *this_00;
  int iVar2;
  HoloTy *pHVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                     (uint)g_cursorClass_00802A30->field_001C);
      }
    }
    this_00 = local_8;
    SetAccelerator(0,local_8->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
    if (this_00->field_21FC != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_21FC);
      this_00->field_21FC = 0;
    }
    if (-1 < this_00->field_2200) {
      FUN_006b3af0((int *)PTR_008075a8,this_00->field_2200);
    }
    if (this_00->field_21E6 != '\0') {
      if (g_startSystem_0081176C->field_054C != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_054C);
        g_startSystem_0081176C->field_054C = 0;
      }
      if (g_startSystem_0081176C->field_0550 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_0550);
        g_startSystem_0081176C->field_0550 = 0;
      }
      if (this_00->field_21F8 != (HoloTy *)0x0) {
        HoloTy::Done(this_00->field_21F8);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_21F8);
        this_00->field_21F8 = (HoloTy *)0x0;
      }
      pHVar3 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar3 == (HoloTy *)0x0) {
        pHVar3 = (HoloTy *)0x0;
      }
      else {
        pHVar3->field_0002 = 1;
        pHVar3->field_0000 = 0;
        pHVar3->field_0003 = -1;
        pHVar3->field_0001 = CASE_2;
        pHVar3->field_0007 = 0;
        pHVar3->field_000B = (void *)0x0;
        *(undefined4 *)&pHVar3->field_0xf = 0;
        *(undefined4 *)&pHVar3->field_0x1b = 1;
        pHVar3->field_0013 = 1;
        pHVar3->field_0017 = -1;
        pHVar3->field_0027 = 0;
        pHVar3->field_0023 = 0;
        pHVar3->field_002F = 1;
        pHVar3->field_002B = 1;
      }
      this_00->field_21F8 = pHVar3;
      if (pHVar3 != (HoloTy *)0x0) {
        uVar7 = 0;
        cVar6 = '\x01';
        uVar5 = 0x10;
        iVar4 = 1;
        iVar2 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,200,0x1f1,400,0x62);
        uVar5 = HoloTy::Init(this_00->field_21F8,CASE_1,200,0x1f1,iVar2,iVar4,uVar5,cVar6,uVar7);
        if (uVar5 != 0) {
          pHVar3 = this_00->field_21F8;
          pHVar3->field_0002 = 0;
          pHVar3->field_0017 = -1;
          uVar5 = this_00->field_21F8->field_0003;
          if (-1 < (int)uVar5) {
            Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,uVar5);
          }
          HoloTy::NextFas(this_00->field_21F8);
        }
        FUN_006b5f80((int *)PTR_008075a8,200,0x1f1,400,0x62);
        PutDDXClip(200,0x1f1,200,0x1f1,400,(byte *)0x62,'\x01',
                   (BITMAPINFO *)g_startSystem_0081176C->field_002C);
      }
      FUN_006b3af0((int *)PTR_008075a8,g_startSystem_0081176C->field_0554);
      FUN_006b3af0((int *)PTR_008075a8,g_startSystem_0081176C->field_0558);
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
        FUN_006b3af0((int *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560);
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
        FUN_006b3af0((int *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1);
      }
    }
    SettMapTy::DeleteCtrls((SettMapTy *)this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0xc0,0,iVar2,"%s",
                             "SettMapMTy::DeleteCtrls");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\settmobj.cpp",0xc0);
  return;
}

