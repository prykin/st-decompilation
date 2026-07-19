
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jbomb_m.Cpp
   JumpManagC::GetMessage */

undefined4 __thiscall JumpManagC::GetMessage(JumpManagC *this,int param_1)

{
  code *pcVar1;
  JumpManagC *pJVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  void *unaff_EDI;
  undefined4 *puVar7;
  InternalExceptionFrame local_54;
  byte *local_10;
  uint local_c;
  JumpManagC *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pJVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = ReportDebugMessage(s_E____titans_nick_to_jbomb_m_Cpp_007d005c,0x4b,0,iVar3,&DAT_007a4ccc
                               ,s_JumpManagC__GetMessage_007d0084);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    RaiseInternalException(iVar3,0,s_E____titans_nick_to_jbomb_m_Cpp_007d005c,0x4d);
    return 0xffff;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 2) {
    puVar6 = *(undefined4 **)(param_1 + 0x14);
    if (puVar6[3] != 2) {
      puVar7 = (undefined4 *)&local_8->field_0x1c;
      for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_00618170(local_8,puVar6);
    thunk_FUN_006179d0((int)pJVar2);
  }
  else if (iVar3 == 3) {
    thunk_FUN_00618ad0((int)local_8);
    if ((byte *)pJVar2->field_005E != (byte *)0x0) {
      FUN_006ae110((byte *)pJVar2->field_005E);
      pJVar2->field_005E = 0;
    }
    if ((byte *)pJVar2->field_0062 != (byte *)0x0) {
      FUN_006ae110((byte *)pJVar2->field_0062);
      pJVar2->field_0062 = 0;
    }
    if ((byte *)pJVar2->field_0066 != (byte *)0x0) {
      FUN_006ae110((byte *)pJVar2->field_0066);
      pJVar2->field_0066 = 0;
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (iVar3 == 0x10f) {
    local_10 = (byte *)thunk_FUN_00617fb0(local_8,(int *)&local_c);
    STPlaySystemC::SaveObjData(DAT_00802a38,pJVar2->field_0018,local_10,local_c);
    FUN_006ab060(&local_10);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

