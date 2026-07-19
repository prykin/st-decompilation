
void FUN_00756200(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  if (param_2 != 0x3d) {
    RaiseInternalException(10,DAT_007ed77c,s_E__DKW_JPG_C_jdapimin_c_007f2d38,0x27);
  }
  if (param_3 != 0x1be) {
    RaiseInternalException(0x13,DAT_007ed77c,s_E__DKW_JPG_C_jdapimin_c_007f2d38,0x2a);
  }
  puVar1 = param_1;
  for (iVar2 = 0x6f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = 0;
  param_1[2] = 1;
  FUN_007591d0(param_1);
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  puVar1 = param_1 + 0x2f;
  param_1[0x29] = 0;
  iVar2 = 4;
  param_1[0x2a] = 0;
  do {
    puVar1[-4] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00757e60(param_1);
  FUN_007576c0(param_1);
  param_1[3] = 200;
  return;
}

