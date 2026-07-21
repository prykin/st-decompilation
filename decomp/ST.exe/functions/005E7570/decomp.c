#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::DoneWait */

void __thiscall WaitTy::DoneWait(WaitTy *this)

{
  MMsgTy *this_00;
  code *pcVar1;
  MMObjTy *pMVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (MMObjTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    MMObjTy::DoneMMObj(local_8);
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      if (PTR_00802a30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
      }
      else if (PTR_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
      }
    }
    if (*(int *)&pMVar2->field_0x4d == 0x6105) {
      if (DAT_00811768 == '\x02') {
        *(undefined4 *)&pMVar2->field_0x4d = 0x6102;
        DarkScreen(DAT_0080759c,10,2);
      }
      thunk_FUN_005dac60();
    }
    if (*(int *)&pMVar2->field_0x4d == 0x610a) {
      DarkScreen(DAT_0080759c,10,2);
      thunk_FUN_005dac60();
    }
    if (PTR_0081176c->field_002C != 0) {
      cMf32::RecMemFree(g_cMf32_00806780,&PTR_0081176c->field_002C);
    }
    if (*(HoloTy **)&pMVar2[0x1e].field_0x5e != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar2[0x1e].field_0x5e);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&pMVar2[0x1e].field_0x5e);
      *(undefined4 *)&pMVar2[0x1e].field_0x5e = 0;
    }
    puVar5 = (uint *)&pMVar2[0x1d].field_0xdd;
    iVar3 = 0x16;
    do {
      if (*puVar5 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*puVar5);
        *puVar5 = 0xffffffff;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if ((HoloTy *)pMVar2[0x1e].field_0066 != (HoloTy *)0x0) {
      HoloTy::Done((HoloTy *)pMVar2[0x1e].field_0066);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)pMVar2[0x1e].field_0066);
      pMVar2[0x1e].field_0066 = 0;
    }
    if (*(int *)&pMVar2[0x1d].field_0xad == 0) {
      if (PTR_0081176c->field_0391 != 0xffffffff) {
        FUN_006b3af0((int *)PTR_0081176c->field_03D5,PTR_0081176c->field_0391);
      }
      if (PTR_0081176c->field_0422 != 0xffffffff) {
        FUN_006b3af0((int *)PTR_0081176c->field_0466,PTR_0081176c->field_0422);
      }
      if (PTR_0081176c->field_04B3 != 0xffffffff) {
        FUN_006b3af0((int *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3);
      }
      if (-1 < (int)PTR_0081176c->field_0540) {
        FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0540);
      }
    }
    if (*(HoloTy **)&pMVar2[0x1e].field_0x62 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar2[0x1e].field_0x62);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&pMVar2[0x1e].field_0x62);
      *(undefined4 *)&pMVar2[0x1e].field_0x62 = 0;
    }
    if (*(int *)&pMVar2[0x1d].field_0xad == 0) {
      if (PTR_0081176c->field_0560 != 0xffffffff) {
        FUN_006b3af0((int *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560);
      }
      if (PTR_0081176c->field_05F1 != 0xffffffff) {
        FUN_006b3af0((int *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1);
      }
      if (-1 < (int)PTR_0081176c->field_0558) {
        FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0558);
      }
      if (-1 < (int)PTR_0081176c->field_0554) {
        FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0554);
      }
    }
    if (*(AnonShape_006B5570_4D68B99C **)&pMVar2[0x1e].field_0x56 !=
        (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570(*(AnonShape_006B5570_4D68B99C **)&pMVar2[0x1e].field_0x56);
    }
    *(undefined4 *)&pMVar2[0x1e].field_0x56 = 0;
    if (*(int *)&pMVar2[0x1e].field_0x52 != 0) {
      FreeAndNull((void **)&pMVar2[0x1e].field_0x52);
    }
    if (*(int *)&pMVar2[0x1d].field_0xcc != 0) {
      FreeAndNull((void **)&pMVar2[0x1d].field_0xcc);
    }
    if ((*(int *)&pMVar2->field_0x4d == 0x6102) &&
       (this_00 = *(MMsgTy **)(*(int *)&pMVar2[0x1d].field_0xa4 + 0x2e6), this_00 != (MMsgTy *)0x0))
    {
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(*(int *)&pMVar2[0x1d].field_0xa4 + 0x2e6) + 0x1cab) = 0;
    }
    if (*(int *)&pMVar2->field_0x4d != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pMVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0xd5,0,iVar3,&DAT_007a4ccc,
                             s_WaitTy__DoneWait_007cdd98);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0xd5);
  return;
}

