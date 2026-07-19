
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::DoneMainMenu */

void __thiscall MainMenuTy::DoneMainMenu(MainMenuTy *this)

{
  MMsgTy *this_00;
  code *pcVar1;
  MainMenuTy *pMVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_8;
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
    DarkScreen(DAT_0080759c,10,2);
    if (*(uint *)(DAT_0081176c + 0x2c) != 0) {
      cMf32::RecMemFree(DAT_00806780,(uint *)(DAT_0081176c + 0x2c));
    }
    this_00 = *(MMsgTy **)(pMVar2->field_1A5B + 0x2e6);
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(pMVar2->field_1A5B + 0x2e6) + 0x1cab) = 0;
    }
    puVar5 = &pMVar2->field_1AA7;
    iVar3 = 10;
    do {
      if ((undefined4 *)*puVar5 != (undefined4 *)0x0) {
        FUN_006c4a70((undefined4 *)*puVar5);
        *puVar5 = 0;
      }
      if (puVar5[-10] != 0) {
        cMf32::RecMemFree(DAT_00806780,puVar5 + -10);
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pMVar2->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pMVar2->field_0x3d);
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

