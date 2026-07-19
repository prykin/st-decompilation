
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::GetMessage */

undefined4 __thiscall STManRub3C::GetMessage(STManRub3C *this,int param_1)

{
  code *pcVar1;
  STManRub3C *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar6;
  undefined4 local_54 [16];
  byte *local_14;
  uint local_10;
  STManRub3C *local_c;
  ushort *local_8;
  
  pIVar6 = g_currentExceptionFrame;
  local_8 = (ushort *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa8;
  local_c = this;
  iVar3 = __setjmp3(local_54,0,unaff_ESI,pIVar6);
  pSVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = pIVar6;
    iVar4 = ReportDebugMessage(s_E____titans_nick_to_rab3m_cpp_007d13ec,0x4e,0,iVar3,&DAT_007a4ccc,
                               s_STManRub3C__GetMessage_007d1410);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_nick_to_rab3m_cpp_007d13ec,0x50);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 2) {
    if (DAT_00806754 != (cMf32 *)0x0) {
      local_8 = FUN_006f2d90(DAT_00806754,PTR_s_RUBBISH_3_0079d080,0,0);
    }
    if ((local_8 == (ushort *)0x0) || (*(int *)(local_8 + 6) != 2)) {
      *(undefined4 *)(local_c + 0x1c) = 0;
      *(undefined4 *)(local_c + 0x28) = 1;
      *(undefined4 *)(local_c + 0x24) = 1;
      *(undefined4 *)(local_c + 0x20) = 0xff;
      *(undefined4 *)(local_c + 0xb4) = DAT_00808754;
    }
    else {
      thunk_FUN_0062d840(local_c,(undefined4 *)local_8);
    }
    if ((local_8 != (ushort *)0x0) && (DAT_00806754 != (cMf32 *)0x0)) {
      cMf32::RecMemFree(DAT_00806754,(uint *)&local_8);
    }
  }
  else {
    if (iVar3 == 3) {
      thunk_FUN_0062cf50((int)local_c);
      thunk_FUN_0062dd40((int)pSVar2);
      thunk_FUN_0062e130((int)pSVar2);
      DAT_008117a4 = 0;
      g_currentExceptionFrame = pIVar6;
      return 0;
    }
    if (iVar3 == 0x10f) {
      local_14 = (byte *)thunk_FUN_0062d670(local_c,&local_10);
      STPlaySystemC::SaveObjData(DAT_00802a38,PTR_s_RUBBISH_3_0079d080,local_14,local_10,0xc);
      FUN_006ab060(&local_14);
      g_currentExceptionFrame = pIVar6;
      return 0;
    }
  }
  g_currentExceptionFrame = pIVar6;
  return 0;
}

