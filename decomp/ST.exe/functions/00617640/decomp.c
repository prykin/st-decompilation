
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jbomb_m.Cpp
   JumpManagC::GetMessage */

undefined4 __thiscall JumpManagC::GetMessage(JumpManagC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  void *unaff_EDI;
  JumpManagC *pJVar6;
  InternalExceptionFrame local_54;
  byte *local_10;
  uint local_c;
  JumpManagC *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pJVar6 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar3 = ReportDebugMessage(s_E____titans_nick_to_jbomb_m_Cpp_007d005c,0x4b,0,iVar2,&DAT_007a4ccc
                               ,s_JumpManagC__GetMessage_007d0084);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    RaiseInternalException(iVar2,0,s_E____titans_nick_to_jbomb_m_Cpp_007d005c,0x4d);
    return 0xffff;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 2) {
    puVar5 = *(undefined4 **)(param_1 + 0x14);
    if (puVar5[3] != 2) {
      pJVar6 = local_8 + 0x1c;
      for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pJVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        pJVar6 = pJVar6 + 4;
      }
      *(undefined2 *)pJVar6 = *(undefined2 *)puVar5;
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_00618170(local_8,puVar5);
    thunk_FUN_006179d0((int)pJVar6);
  }
  else if (iVar2 == 3) {
    thunk_FUN_00618ad0((int)local_8);
    if (*(byte **)(pJVar6 + 0x5e) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pJVar6 + 0x5e));
      *(undefined4 *)(pJVar6 + 0x5e) = 0;
    }
    if (*(byte **)(pJVar6 + 0x62) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pJVar6 + 0x62));
      *(undefined4 *)(pJVar6 + 0x62) = 0;
    }
    if (*(byte **)(pJVar6 + 0x66) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pJVar6 + 0x66));
      *(undefined4 *)(pJVar6 + 0x66) = 0;
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (iVar2 == 0x10f) {
    local_10 = (byte *)thunk_FUN_00617fb0(local_8,(int *)&local_c);
    STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)(pJVar6 + 0x18),local_10,local_c);
    FUN_006ab060(&local_10);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

