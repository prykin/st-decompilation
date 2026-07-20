
undefined4 FUN_004eb300(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = (char)param_1;
  iVar1 = thunk_FUN_004406c0(cVar3);
  if ((char)iVar1 == '\x03') {
    if (param_2 == 0xdd) {
      iVar1 = g_playerRuntime[param_1].field2255_0x9aa;
      iVar2 = thunk_FUN_004d89b0(cVar3);
      if (iVar2 < param_4) goto cf_common_exit_004EB53A;
      thunk_FUN_004d8940(cVar3,param_4);
      param_4 = iVar1 * param_4;
    }
    else if (param_2 == 0xe2) {
      iVar1 = *(int *)&g_playerRuntime[param_1].field_0x9ba;
      iVar2 = thunk_FUN_004d8af0(cVar3);
      if (iVar2 < param_4) goto cf_common_exit_004EB53A;
      thunk_FUN_004e43c0(param_1,param_4);
      param_4 = param_4 / iVar1;
    }
    else {
      if ((param_2 != 0xe3) || (iVar1 = thunk_FUN_004e41c0(param_1), iVar1 < param_4))
      goto cf_common_exit_004EB53A;
      thunk_FUN_004e4330(param_1,param_4);
    }
    if (param_4 == 0) goto cf_common_exit_004EB53A;
    if (param_3 != 0xdd) {
      if (param_3 == 0xe2) {
        thunk_FUN_004e4380(param_1,*(int *)&g_playerRuntime[param_1].field_0x9b2 * param_4);
      }
      else if (param_3 == 0xe3) {
        thunk_FUN_004e4230(param_1,param_4);
      }
      goto cf_common_exit_004EB53A;
    }
    iVar1 = param_4 / (int)g_playerRuntime[param_1].field2253_0x9a2;
  }
  else {
    if (param_2 == 0xdc) {
      iVar1 = thunk_FUN_004d8870(cVar3);
      if (iVar1 < param_4) goto cf_common_exit_004EB53A;
      thunk_FUN_004d8800(cVar3,param_4);
    }
    else if (param_2 == 0xdd) {
      iVar1 = g_playerRuntime[param_1].field2255_0x9aa;
      iVar2 = thunk_FUN_004d89b0(cVar3);
      if (iVar2 < param_4) goto cf_common_exit_004EB53A;
      thunk_FUN_004d8940(cVar3,param_4);
      param_4 = param_4 / iVar1;
    }
    else {
      if (param_2 != 0xde) goto cf_common_exit_004EB53A;
      iVar1 = *(int *)&g_playerRuntime[param_1].field_0x9ba;
      iVar2 = thunk_FUN_004d8af0(cVar3);
      if (iVar2 < param_4) goto cf_common_exit_004EB53A;
      thunk_FUN_004d8a80(cVar3,param_4);
      param_4 = param_4 / iVar1;
    }
    if (param_4 == 0) goto cf_common_exit_004EB53A;
    if (param_3 == 0xdc) {
      thunk_FUN_004d87b0(cVar3,param_4);
      goto cf_common_exit_004EB53A;
    }
    if (param_3 != 0xdd) {
      if (param_3 == 0xde) {
        thunk_FUN_004d8a30(cVar3,*(int *)&g_playerRuntime[param_1].field_0x9b2 * param_4);
      }
      goto cf_common_exit_004EB53A;
    }
    iVar1 = g_playerRuntime[param_1].field2253_0x9a2 * param_4;
  }
  thunk_FUN_004d88f0(cVar3,iVar1);
cf_common_exit_004EB53A:
  thunk_FUN_004d78e0(cVar3);
  if (param_1 == DAT_0080874d) {
    thunk_FUN_004d8b70(cVar3);
  }
  return 0;
}

