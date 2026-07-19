
int __cdecl FUN_0067d9c0(int param_1,char *param_2,undefined4 *param_3,char param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  uint local_14;
  uint local_10;
  undefined4 *local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  local_c = (undefined4 *)0x0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar2 = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*(char *)(param_3 + 6) != '\x02')) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x10b);
    }
    local_c = thunk_FUN_0065cd10(*(undefined4 **)((int)param_3 + 0x106),&local_14);
    local_8 = (byte *)thunk_FUN_0067d3b0(param_3,local_c,local_14,&local_10);
    thunk_FUN_0065d0f0((int *)&local_c);
    FUN_006f3110(param_1,param_2,local_8,local_10,param_4);
    thunk_FUN_0067d160((int *)&local_8);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar3 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x112,0,iVar2,&DAT_007a4ccc,
                             s_SavePlrEdit_007d2fe8);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  thunk_FUN_0065d0f0((int *)&local_c);
  thunk_FUN_0067d160((int *)&local_8);
  RaiseInternalException(iVar2,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x115);
  return iVar2;
}

