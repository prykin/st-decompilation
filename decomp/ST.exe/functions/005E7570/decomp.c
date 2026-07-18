
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::DoneWait */

void __thiscall WaitTy::DoneWait(WaitTy *this)

{
  code *pcVar1;
  MMObjTy *pMVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  MMObjTy *pMVar5;
  undefined4 local_4c;
  undefined4 local_48 [16];
  MMObjTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = (MMObjTy *)this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    MMObjTy::DoneMMObj(local_8);
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    if (*(int *)(pMVar2 + 0x4d) == 0x6105) {
      if (DAT_00811768 == '\x02') {
        *(undefined4 *)(pMVar2 + 0x4d) = 0x6102;
        thunk_FUN_0055dbf0(DAT_0080759c,10,2);
      }
      thunk_FUN_005dac60();
    }
    if (*(int *)(pMVar2 + 0x4d) == 0x610a) {
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
      thunk_FUN_005dac60();
    }
    if (*(int *)(DAT_0081176c + 0x2c) != 0) {
      cMf32::RecMemFree(DAT_00806780,(uint *)(DAT_0081176c + 0x2c));
    }
    if (*(HoloTy **)(pMVar2 + 0x1af8) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pMVar2 + 0x1af8));
      FUN_0072e2b0(*(undefined4 **)(pMVar2 + 0x1af8));
      *(undefined4 *)(pMVar2 + 0x1af8) = 0;
    }
    pMVar5 = pMVar2 + 0x1a94;
    iVar3 = 0x16;
    do {
      if (*(uint *)pMVar5 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*(uint *)pMVar5);
        *(uint *)pMVar5 = 0xffffffff;
      }
      pMVar5 = pMVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(HoloTy **)(pMVar2 + 0x1b00) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pMVar2 + 0x1b00));
      FUN_0072e2b0(*(undefined4 **)(pMVar2 + 0x1b00));
      *(undefined4 *)(pMVar2 + 0x1b00) = 0;
    }
    if (*(int *)(pMVar2 + 0x1a64) == 0) {
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
    if (*(HoloTy **)(pMVar2 + 0x1afc) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pMVar2 + 0x1afc));
      FUN_0072e2b0(*(undefined4 **)(pMVar2 + 0x1afc));
      *(undefined4 *)(pMVar2 + 0x1afc) = 0;
    }
    if (*(int *)(pMVar2 + 0x1a64) == 0) {
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
    if (*(byte **)(pMVar2 + 0x1af0) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pMVar2 + 0x1af0));
    }
    *(undefined4 *)(pMVar2 + 0x1af0) = 0;
    if (*(int *)(pMVar2 + 0x1aec) != 0) {
      FUN_006ab060((undefined4 *)(pMVar2 + 0x1aec));
    }
    if (*(int *)(pMVar2 + 0x1a83) != 0) {
      FUN_006ab060((undefined4 *)(pMVar2 + 0x1a83));
    }
    if ((*(int *)(pMVar2 + 0x4d) == 0x6102) &&
       (*(MMsgTy **)(*(int *)(pMVar2 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0)) {
      MMsgTy::HideSprites(*(MMsgTy **)(*(int *)(pMVar2 + 0x1a5b) + 0x2e6));
      *(undefined4 *)(*(int *)(*(int *)(pMVar2 + 0x1a5b) + 0x2e6) + 0x1cab) = 0;
    }
    if (*(int *)(pMVar2 + 0x4d) != 0) {
      FUN_006e3b50((undefined4 *)(pMVar2 + 0x3d));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_wait_obj_cpp_007cdd5c,0xd5,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cdd5c,0xd5);
  return;
}

