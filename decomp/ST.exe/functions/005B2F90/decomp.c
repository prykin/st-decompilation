
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::DoneMainMenu */

void __thiscall MainMenuTy::DoneMainMenu(MainMenuTy *this)

{
  code *pcVar1;
  MMObjTy *pMVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  MMObjTy *pMVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (MMObjTy *)this;
  iVar3 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
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
    thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    if (*(uint *)(DAT_0081176c + 0x2c) != 0) {
      cMf32::RecMemFree(DAT_00806780,(uint *)(DAT_0081176c + 0x2c));
    }
    if (*(MMsgTy **)(*(int *)(pMVar2 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::HideSprites(*(MMsgTy **)(*(int *)(pMVar2 + 0x1a5b) + 0x2e6));
      *(undefined4 *)(*(int *)(*(int *)(pMVar2 + 0x1a5b) + 0x2e6) + 0x1cab) = 0;
    }
    pMVar5 = pMVar2 + 0x1aa7;
    iVar3 = 10;
    do {
      if (*(undefined4 **)pMVar5 != (undefined4 *)0x0) {
        FUN_006c4a70(*(undefined4 **)pMVar5);
        *(undefined4 *)pMVar5 = 0;
      }
      if (*(int *)(pMVar5 + -0x28) != 0) {
        cMf32::RecMemFree(DAT_00806780,(uint *)(pMVar5 + -0x28));
      }
      pMVar5 = pMVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)(pMVar2 + 0x4d) != 0) {
      FUN_006e3b50((undefined4 *)(pMVar2 + 0x3d));
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,99,0,iVar3,&DAT_007a4ccc,
                             s_MainMenuTy__DoneMainMenu_007cc940);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_main_obj_cpp_007cc8e8,99);
  return;
}

