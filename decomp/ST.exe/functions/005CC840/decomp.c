#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::DeleteCtrls */

void __thiscall SettMapMTy::DeleteCtrls(SettMapMTy *this)

{
  SettMapMTy *this_00;
  int iVar2;
  HoloTy *pHVar2;
  int iVar3;
  uint uVar7;
  int iVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    this_00 = local_8;
    /* ST_CALLSITE[005CC8BF]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
    SetAccelerator(0,local_8->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
    if (this_00->field_21FC != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_21FC);
      this_00->field_21FC = 0;
    }
    if (-1 < (int)this_00->field_2200) {
      FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_2200);
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
      if (this_00->field_21F8 != nullptr) {
        /* ST_CALLSITE[005CC955]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_00->field_21F8);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_21F8);
        this_00->field_21F8 = nullptr;
      }
      pHVar2 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar2 == nullptr) {
        pHVar2 = nullptr;
      }
      else {
        pHVar2->field_0002 = 1;
        pHVar2->field_0000 = 0;
        *(undefined4 *)&pHVar2->field_0x3 = 0xffffffff;
        pHVar2->field_0001 = CASE_2;
        pHVar2->field_0007 = nullptr;
        pHVar2->field_000B = nullptr;
        pHVar2->field_000F = 0;
        *(undefined4 *)&pHVar2->field_0x1b = 1;
        pHVar2->field_0013 = 1;
        pHVar2->field_0017 = -1;
        pHVar2->field_0027 = 0;
        pHVar2->field_0023 = 0;
        pHVar2->field_002F = 1;
        pHVar2->field_002B = 1;
      }
      this_00->field_21F8 = pHVar2;
      if (pHVar2 != nullptr) {
        uVar8 = 0;
        cVar7 = '\x01';
        bVar6 = 0x10;
        iVar5 = 1;
        iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
        /* ST_CALLSITE[005CCA08]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
        uVar7 = HoloTy::Init(this_00->field_21F8,CASE_1,200,0x1f1,iVar3,iVar5,bVar6,cVar7,uVar8);
        if (uVar7 != 0) {
          pHVar2 = this_00->field_21F8;
          pHVar2->field_0002 = 0;
          pHVar2->field_0017 = -1;
          uVar8 = *(uint *)&this_00->field_21F8->field_0x3;
          if (-1 < (int)uVar8) {
            Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar8);
          }
          /* ST_CALLSITE[005CCA41]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
          HoloTy::NextFas(this_00->field_21F8);
        }
        FUN_006b5f80((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
        /* ST_CALLSITE[005CCA89]: CALL 0x00402298; direct=00402298 PutDDXClip */
        PutDDXClip(200,0x1f1,200,0x1f1,400,(byte *)0x62,'\x01',
                   (BITMAPINFO *)g_startSystem_0081176C->field_002C);
      }
      FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
      FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
        FUN_006b3af0((int *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560);
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
        FUN_006b3af0((int *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1);
      }
    }
    /* ST_CALLSITE[005CCAFF]: CALL 0x00404e94; direct=00404E94 SettMapTy::DeleteCtrls */
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

