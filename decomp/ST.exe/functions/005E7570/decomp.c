
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::DoneWait */

void __thiscall WaitTy::DoneWait(WaitTy *this)

{
  MMsgTy *this_00;
  code *pcVar1;
  WaitTy *pWVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  WaitTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pWVar2 = local_8;
  if (iVar3 == 0) {
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    if (pWVar2->field_004D == 0x6105) {
      if (DAT_00811768 == '\x02') {
        pWVar2->field_004D = 0x6102;
        DarkScreen(DAT_0080759c,10,2);
      }
      thunk_FUN_005dac60();
    }
    if (pWVar2->field_004D == 0x610a) {
      DarkScreen(DAT_0080759c,10,2);
      thunk_FUN_005dac60();
    }
    if (*(int *)(DAT_0081176c + 0x2c) != 0) {
      cMf32::RecMemFree(DAT_00806780,(uint *)(DAT_0081176c + 0x2c));
    }
    if (pWVar2->field_1AF8 != (HoloTy *)0x0) {
      HoloTy::Done(pWVar2->field_1AF8);
      Library::MSVCRT::FUN_0072e2b0((undefined4 *)pWVar2->field_1AF8);
      pWVar2->field_1AF8 = (HoloTy *)0x0;
    }
    puVar5 = &pWVar2->field_1A94;
    iVar3 = 0x16;
    do {
      if (*puVar5 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*puVar5);
        *puVar5 = 0xffffffff;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pWVar2->field_1B00 != (HoloTy *)0x0) {
      HoloTy::Done(pWVar2->field_1B00);
      Library::MSVCRT::FUN_0072e2b0((undefined4 *)pWVar2->field_1B00);
      pWVar2->field_1B00 = (HoloTy *)0x0;
    }
    if (pWVar2->field_1A64 == 0) {
      if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391));
      }
      if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422));
      }
      if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3));
      }
      if (-1 < (int)*(uint *)(DAT_0081176c + 0x540)) {
        FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
      }
    }
    if (pWVar2->field_1AFC != (HoloTy *)0x0) {
      HoloTy::Done(pWVar2->field_1AFC);
      Library::MSVCRT::FUN_0072e2b0((undefined4 *)pWVar2->field_1AFC);
      pWVar2->field_1AFC = (HoloTy *)0x0;
    }
    if (pWVar2->field_1A64 == 0) {
      if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560));
      }
      if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1));
      }
      if (-1 < (int)*(uint *)(DAT_0081176c + 0x558)) {
        FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
      }
      if (-1 < (int)*(uint *)(DAT_0081176c + 0x554)) {
        FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
      }
    }
    if ((byte *)pWVar2->field_1AF0 != (byte *)0x0) {
      FUN_006b5570((byte *)pWVar2->field_1AF0);
    }
    pWVar2->field_1AF0 = 0;
    if (pWVar2->field_1AEC != 0) {
      FUN_006ab060(&pWVar2->field_1AEC);
    }
    if (pWVar2->field_1A83 != 0) {
      FUN_006ab060(&pWVar2->field_1A83);
    }
    if ((pWVar2->field_004D == 0x6102) &&
       (this_00 = pWVar2->field_1A5B->field_02E6, this_00 != (MMsgTy *)0x0)) {
      MMsgTy::HideSprites(this_00);
      pWVar2->field_1A5B->field_02E6->field_1CAB = 0;
    }
    if (pWVar2->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pWVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0xd5,0,iVar3,&DAT_007a4ccc,
                             s_WaitTy__DoneWait_007cdd98);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0xd5);
  return;
}

