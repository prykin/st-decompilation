
void __thiscall MainMenuTy::LightPalette(MainMenuTy *this)

{
  MainMenuTy *pMVar1;
  code *pcVar2;
  MainMenuTy *pMVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  MainMenuTy *pMStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pMStack_8 = this;
  iVar4 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar3 = pMStack_8;
  if (iVar4 == 0) {
    if (*(int *)(pMStack_8 + 0x1ad3) != 0) {
      pMVar1 = pMStack_8 + 0x1adf;
      iVar4 = FUN_00718f40(DAT_0080759c,(undefined4 *)pMVar1,0,0x100,5,(int *)(pMStack_8 + 0x1adb),1
                           ,*(uint *)(pMStack_8 + 0x61),(uint *)(pMStack_8 + 0x1ad7));
      if (iVar4 == -4) {
        FUN_006b0a20(DAT_0080759c,(int)pMVar1,0,0x100,0);
        *(undefined4 *)(pMVar3 + 0x1ad3) = 0;
      }
    }
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,0xe8,0,iVar4,&DAT_007a4ccc,
                             s_MainMenuTy__LightPalette_007cc9a0);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_main_obj_cpp_007cc8e8,0xe8);
  return;
}

