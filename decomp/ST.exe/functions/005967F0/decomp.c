#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DoneFSGS */

void __thiscall FSGSTy::DoneFSGS(FSGSTy *this)

{
  AnonShape_006B5570_4D68B99C *pAVar1;
  DArrayTy *array;
  MMsgTy *this_00;
  code *pcVar2;
  MMObjTy *pMVar3;
  int iVar4;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_01;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (MMObjTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    CFsgsConnection::StopBanners((CFsgsConnection *)&DAT_00802a90);
    pMVar3 = local_8;
    MMObjTy::DoneMMObj(local_8);
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      if (PTR_00802a30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
      }
      else if (PTR_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
      }
    }
    DarkScreen(DAT_0080759c,10,2);
    if (PTR_0081176c->field_002C != 0) {
      cMf32::RecMemFree(g_cMf32_00806780,&PTR_0081176c->field_002C);
    }
    thunk_FUN_005a0590((int)pMVar3);
    thunk_FUN_005a07f0((AnonShape_005A07F0_323FD806 *)pMVar3);
    thunk_FUN_005a0a50((int)pMVar3);
    thunk_FUN_005a0af0((int)pMVar3);
    thunk_FUN_005a0c80((int)pMVar3);
    if (*(AnonShape_006B5570_4D68B99C **)&pMVar3[0x1e].field_0x6e !=
        (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570(*(AnonShape_006B5570_4D68B99C **)&pMVar3[0x1e].field_0x6e);
    }
    pAVar1 = *(AnonShape_006B5570_4D68B99C **)&pMVar3[0x22].field_0x78;
    *(undefined4 *)&pMVar3[0x1e].field_0x6e = 0;
    if (pAVar1 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570(pAVar1);
    }
    iVar4 = *(int *)&pMVar3[0x1e].field_0x72;
    *(undefined4 *)&pMVar3[0x22].field_0x78 = 0;
    if (iVar4 != 0) {
      FreeAndNull((void **)&pMVar3[0x1e].field_0x72);
    }
    if (*(HoloTy **)&pMVar3[0x23].field_0x1a != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar3[0x23].field_0x1a);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&pMVar3[0x23].field_0x1a);
      *(undefined4 *)&pMVar3[0x23].field_0x1a = 0;
    }
    if (*(HoloTy **)&pMVar3[0x23].field_0x1e != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar3[0x23].field_0x1e);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&pMVar3[0x23].field_0x1e);
      *(undefined4 *)&pMVar3[0x23].field_0x1e = 0;
    }
    if (*(HoloTy **)&pMVar3[0x23].field_0x22 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar3[0x23].field_0x22);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&pMVar3[0x23].field_0x22);
      *(undefined4 *)&pMVar3[0x23].field_0x22 = 0;
    }
    if (*(HoloTy **)&pMVar3[0x23].field_0x26 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar3[0x23].field_0x26);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&pMVar3[0x23].field_0x26);
      *(undefined4 *)&pMVar3[0x23].field_0x26 = 0;
    }
    if (*(int *)((int)&pMVar3[0x22].field_0066 + 2) != 0) {
      FreeAndNull((void **)((int)&pMVar3[0x22].field_0066 + 2));
    }
    if (*(int *)&pMVar3[0x22].field_0x6c != 0) {
      FreeAndNull((void **)&pMVar3[0x22].field_0x6c);
    }
    if (*(int *)&pMVar3[0x22].field_0x70 != 0) {
      FreeAndNull((void **)&pMVar3[0x22].field_0x70);
    }
    if (*(int *)&pMVar3[0x22].field_0x74 != 0) {
      FreeAndNull((void **)&pMVar3[0x22].field_0x74);
    }
    if (-1 < (int)*(uint *)&pMVar3[0x1e].field_0x22) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)&pMVar3[0x1e].field_0x22);
    }
    *(undefined4 *)&pMVar3[0x1e].field_0x22 = 0xffffffff;
    if (*(int *)&pMVar3[0x1e].field_0x26 != 0) {
      FreeAndNull((void **)&pMVar3[0x1e].field_0x26);
    }
    if (*(uint *)&pMVar3[0x1e].field_0x19 != 0) {
      StartSystemTy::sub_006E56B0(pMVar3->field_000C,*(uint *)&pMVar3[0x1e].field_0x19);
    }
    *(undefined4 *)&pMVar3[0x1e].field_0x19 = 0;
    if (*(int *)&pMVar3[0x1e].field_0x11 != 0) {
      FreeAndNull((void **)&pMVar3[0x1e].field_0x11);
    }
    if (*(AnonShape_006C6FC0_B2C34C14 **)&pMVar3[0x1e].field_0x5 !=
        (AnonShape_006C6FC0_B2C34C14 *)0x0) {
      FUN_006c6fc0(*(AnonShape_006C6FC0_B2C34C14 **)&pMVar3[0x1e].field_0x5);
    }
    iVar4 = *(int *)((int)&pMVar3[0x1e].vtable + 1);
    *(undefined4 *)&pMVar3[0x1e].field_0x5 = 0;
    if (iVar4 != 0) {
      FreeAndNull((void **)((int)&pMVar3[0x1e].vtable + 1));
    }
    if (-1 < (int)*(uint *)&pMVar3[0x1d].field_0xd8) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)&pMVar3[0x1d].field_0xd8);
    }
    *(undefined4 *)&pMVar3[0x1d].field_0xd8 = 0xffffffff;
    this_01 = (ccFntTy *)0x0;
    if (*(int *)&pMVar3[0x1d].field_0xe0 != 0) {
      FreeAndNull((void **)&pMVar3[0x1d].field_0xe0);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_01 = extraout_ECX;
    }
    if (*(uint **)&pMVar3[0x1d].field_0xc0 != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)&pMVar3[0x1d].field_0xc0);
      *(undefined4 *)&pMVar3[0x1d].field_0xc0 = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_01 = extraout_ECX_00;
    }
    if (*(uint **)&pMVar3[0x1d].field_0xc4 != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)&pMVar3[0x1d].field_0xc4);
      *(undefined4 *)&pMVar3[0x1d].field_0xc4 = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_01 = extraout_ECX_01;
    }
    if (*(uint **)&pMVar3[0x1d].field_0xc8 != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)&pMVar3[0x1d].field_0xc8);
      *(undefined4 *)&pMVar3[0x1d].field_0xc8 = 0;
    }
    if (*(HGDIOBJ *)&pMVar3[0x1d].field_0xb0 != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)&pMVar3[0x1d].field_0xb0);
    }
    array = *(DArrayTy **)&pMVar3[0x23].field_0xaa;
    *(undefined4 *)&pMVar3[0x1d].field_0xb0 = 0;
    if (array != (DArrayTy *)0x0) {
      DArrayDestroy(array);
    }
    iVar4 = *(int *)&pMVar3->field_0x4d;
    *(undefined4 *)&pMVar3[0x23].field_0xaa = 0;
    if (iVar4 != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pMVar3->field_0x3d);
    }
    this_00 = *(MMsgTy **)(*(int *)&pMVar3[0x1d].field_0xa4 + 0x2e6);
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(*(int *)&pMVar3[0x1d].field_0xa4 + 0x2e6) + 0x1cab) = 0;
    }
    g_fSGS_0081174C = (FSGSTy *)0x0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x197,0,iVar4,&DAT_007a4ccc,
                             s_FSGSTy__DoneFSGS_007cc0a8);
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x197);
  return;
}

