#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DoneFSGS */

void __thiscall FSGSTy::DoneFSGS(FSGSTy *this)

{
  DArrayTy *pDVar1;
  MMsgTy *this_00;
  code *pcVar2;
  MMObjTy *this_01;
  int iVar3;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_02;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (MMObjTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar3 == 0) {
    CFsgsConnection::StopBanners((CFsgsConnection *)&DAT_00802a90);
    this_01 = local_8;
    MMObjTy::DoneMMObj(local_8);
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                     (uint)g_cursorClass_00802A30->field_001C);
      }
    }
    DarkScreen(DAT_0080759c,10,2);
    if (g_startSystem_0081176C->field_002C != (ushort *)0x0) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    sub_005A0590((FSGSTy *)this_01);
    sub_005A07F0((FSGSTy *)this_01);
    sub_005A0A50((FSGSTy *)this_01);
    sub_005A0AF0((FSGSTy *)this_01);
    sub_005A0C80((FSGSTy *)this_01);
    if (*(DArrayTy **)&this_01[0x1e].field_0x6e != (DArrayTy *)0x0) {
      FUN_006b5570(*(DArrayTy **)&this_01[0x1e].field_0x6e);
    }
    pDVar1 = *(DArrayTy **)&this_01[0x22].field_0x78;
    *(undefined4 *)&this_01[0x1e].field_0x6e = 0;
    if (pDVar1 != (DArrayTy *)0x0) {
      FUN_006b5570(pDVar1);
    }
    iVar3 = *(int *)&this_01[0x1e].field_0x72;
    *(undefined4 *)&this_01[0x22].field_0x78 = 0;
    if (iVar3 != 0) {
      FreeAndNull((void **)&this_01[0x1e].field_0x72);
    }
    if (*(HoloTy **)&this_01[0x23].field_0x1a != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&this_01[0x23].field_0x1a);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_01[0x23].field_0x1a);
      *(undefined4 *)&this_01[0x23].field_0x1a = 0;
    }
    if (*(HoloTy **)&this_01[0x23].field_0x1e != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&this_01[0x23].field_0x1e);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_01[0x23].field_0x1e);
      *(undefined4 *)&this_01[0x23].field_0x1e = 0;
    }
    if (*(HoloTy **)&this_01[0x23].field_0x22 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&this_01[0x23].field_0x22);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_01[0x23].field_0x22);
      *(undefined4 *)&this_01[0x23].field_0x22 = 0;
    }
    if (*(HoloTy **)&this_01[0x23].field_0x26 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&this_01[0x23].field_0x26);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_01[0x23].field_0x26);
      *(undefined4 *)&this_01[0x23].field_0x26 = 0;
    }
    if (*(int *)((int)&this_01[0x22].field_0066 + 2) != 0) {
      FreeAndNull((void **)((int)&this_01[0x22].field_0066 + 2));
    }
    if (*(int *)&this_01[0x22].field_0x6c != 0) {
      FreeAndNull((void **)&this_01[0x22].field_0x6c);
    }
    if (*(int *)&this_01[0x22].field_0x70 != 0) {
      FreeAndNull((void **)&this_01[0x22].field_0x70);
    }
    if (*(int *)&this_01[0x22].field_0x74 != 0) {
      FreeAndNull((void **)&this_01[0x22].field_0x74);
    }
    if (-1 < (int)*(uint *)&this_01[0x1e].field_0x22) {
      FUN_006b3bb0((int *)PTR_008075a8,*(uint *)&this_01[0x1e].field_0x22);
    }
    *(undefined4 *)&this_01[0x1e].field_0x22 = 0xffffffff;
    if (*(int *)&this_01[0x1e].field_0x26 != 0) {
      FreeAndNull((void **)&this_01[0x1e].field_0x26);
    }
    if (*(uint *)&this_01[0x1e].field_0x19 != 0) {
      StartSystemTy::sub_006E56B0(this_01->field_000C,*(uint *)&this_01[0x1e].field_0x19);
    }
    *(undefined4 *)&this_01[0x1e].field_0x19 = 0;
    if (*(int *)&this_01[0x1e].field_0x11 != 0) {
      FreeAndNull((void **)&this_01[0x1e].field_0x11);
    }
    if (*(AnonShape_006C6FC0_B2C34C14 **)&this_01[0x1e].field_0x5 !=
        (AnonShape_006C6FC0_B2C34C14 *)0x0) {
      FUN_006c6fc0(*(AnonShape_006C6FC0_B2C34C14 **)&this_01[0x1e].field_0x5);
    }
    iVar3 = *(int *)((int)&this_01[0x1e].vtable + 1);
    *(undefined4 *)&this_01[0x1e].field_0x5 = 0;
    if (iVar3 != 0) {
      FreeAndNull((void **)((int)&this_01[0x1e].vtable + 1));
    }
    if (-1 < (int)*(uint *)&this_01[0x1d].field_0xd8) {
      FUN_006b3bb0((int *)PTR_008075a8,*(uint *)&this_01[0x1d].field_0xd8);
    }
    *(undefined4 *)&this_01[0x1d].field_0xd8 = 0xffffffff;
    this_02 = (ccFntTy *)0x0;
    if (*(int *)&this_01[0x1d].field_0xe0 != 0) {
      FreeAndNull((void **)&this_01[0x1d].field_0xe0);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_02 = extraout_ECX;
    }
    if (*(uint **)&this_01[0x1d].field_0xc0 != (uint *)0x0) {
      ccFntTy::operator(this_02,*(uint **)&this_01[0x1d].field_0xc0);
      *(undefined4 *)&this_01[0x1d].field_0xc0 = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_02 = extraout_ECX_00;
    }
    if (*(uint **)&this_01[0x1d].field_0xc4 != (uint *)0x0) {
      ccFntTy::operator(this_02,*(uint **)&this_01[0x1d].field_0xc4);
      *(undefined4 *)&this_01[0x1d].field_0xc4 = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_02 = extraout_ECX_01;
    }
    if (*(uint **)&this_01[0x1d].field_0xc8 != (uint *)0x0) {
      ccFntTy::operator(this_02,*(uint **)&this_01[0x1d].field_0xc8);
      *(undefined4 *)&this_01[0x1d].field_0xc8 = 0;
    }
    if (*(HGDIOBJ *)&this_01[0x1d].field_0xb0 != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)&this_01[0x1d].field_0xb0);
    }
    pDVar1 = *(DArrayTy **)&this_01[0x23].field_0xaa;
    *(undefined4 *)&this_01[0x1d].field_0xb0 = 0;
    if (pDVar1 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar1);
    }
    iVar3 = *(int *)&this_01->field_0x4d;
    *(undefined4 *)&this_01[0x23].field_0xaa = 0;
    if (iVar3 != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&this_01->field_0x3d);
    }
    this_00 = *(MMsgTy **)(*(int *)&this_01[0x1d].field_0xa4 + 0x2e6);
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(*(int *)&this_01[0x1d].field_0xa4 + 0x2e6) + 0x1cab) = 0;
    }
    g_fSGS_0081174C = (FSGSTy *)0x0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x197,0,iVar3,"%s",
                             "FSGSTy::DoneFSGS");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x197);
  return;
}

