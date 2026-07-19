
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
    if (*(int *)&pWVar2->field_0x4d == 0x6105) {
      if (DAT_00811768 == '\x02') {
        *(undefined4 *)&pWVar2->field_0x4d = 0x6102;
        thunk_FUN_0055dbf0(DAT_0080759c,10,2);
      }
      thunk_FUN_005dac60();
    }
    if (*(int *)&pWVar2->field_0x4d == 0x610a) {
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
      thunk_FUN_005dac60();
    }
    if (*(int *)(DAT_0081176c + 0x2c) != 0) {
      cMf32::RecMemFree(DAT_00806780,(uint *)(DAT_0081176c + 0x2c));
    }
    if (*(HoloTy **)&pWVar2[0x44].field_0x24 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pWVar2[0x44].field_0x24);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pWVar2[0x44].field_0x24);
      *(undefined4 *)&pWVar2[0x44].field_0x24 = 0;
    }
    puVar5 = (uint *)&pWVar2[0x43].field_0x25;
    iVar3 = 0x16;
    do {
      if (*puVar5 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*puVar5);
        *puVar5 = 0xffffffff;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(HoloTy **)&pWVar2[0x44].field_0x2c != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pWVar2[0x44].field_0x2c);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pWVar2[0x44].field_0x2c);
      *(undefined4 *)&pWVar2[0x44].field_0x2c = 0;
    }
    if (*(int *)&pWVar2[0x42].field_0x5a == 0) {
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
    if (*(HoloTy **)&pWVar2[0x44].field_0x28 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pWVar2[0x44].field_0x28);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pWVar2[0x44].field_0x28);
      *(undefined4 *)&pWVar2[0x44].field_0x28 = 0;
    }
    if (*(int *)&pWVar2[0x42].field_0x5a == 0) {
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
    if (*(byte **)&pWVar2[0x44].field_0x1c != (byte *)0x0) {
      FUN_006b5570(*(byte **)&pWVar2[0x44].field_0x1c);
    }
    *(undefined4 *)&pWVar2[0x44].field_0x1c = 0;
    if (*(int *)&pWVar2[0x44].field_0x18 != 0) {
      FUN_006ab060((undefined4 *)&pWVar2[0x44].field_0x18);
    }
    if (*(int *)&pWVar2[0x43].field_0x14 != 0) {
      FUN_006ab060((undefined4 *)&pWVar2[0x43].field_0x14);
    }
    if ((*(int *)&pWVar2->field_0x4d == 0x6102) &&
       (this_00 = *(MMsgTy **)(*(int *)&pWVar2[0x42].field_0x51 + 0x2e6), this_00 != (MMsgTy *)0x0))
    {
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(*(int *)&pWVar2[0x42].field_0x51 + 0x2e6) + 0x1cab) = 0;
    }
    if (*(int *)&pWVar2->field_0x4d != 0) {
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

