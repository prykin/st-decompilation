
undefined4 FUN_00756650(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[3];
  if (((iVar2 == 0xcd) || (iVar2 == 0xce)) && (param_1[0xe] == 0)) {
    if ((uint)param_1[0x21] < (uint)param_1[0x1b]) {
      RaiseInternalException(0x42,DAT_007ed77c,s_E__DKW_JPG_C_jdapimin_c_007f2d38,0x182);
    }
    (**(code **)(*(int *)((int)param_1 + 0x192) + 4))(param_1);
    param_1[3] = 0xd2;
  }
  else if (iVar2 == 0xcf) {
    param_1[3] = 0xd2;
  }
  else if (iVar2 != 0xd2) {
    RaiseInternalException(0x12,DAT_007ed77c,s_E__DKW_JPG_C_jdapimin_c_007f2d38,0x18a);
  }
  puVar1 = *(undefined4 **)((int)param_1 + 0x1a2);
  iVar2 = puVar1[5];
  while( true ) {
    if (iVar2 != 0) {
      (**(code **)(param_1[4] + 0x18))(param_1);
      FUN_00759dd0(param_1);
      return 1;
    }
    iVar2 = (*(code *)*puVar1)(param_1);
    if (iVar2 == 0) break;
    puVar1 = *(undefined4 **)((int)param_1 + 0x1a2);
    iVar2 = puVar1[5];
  }
  return 0;
}

