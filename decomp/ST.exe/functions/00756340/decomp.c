
int FUN_00756340(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1[3] != 200) && (param_1[3] != 0xc9)) {
    RaiseInternalException(0x12,DAT_007ed77c,s_E__DKW_JPG_C_jdapimin_c_007f2d38,0x102);
  }
  iVar1 = FUN_007563c0((int)param_1);
  if (iVar1 == 1) {
    iVar1 = 1;
  }
  else if (iVar1 == 2) {
    if (param_2 != 0) {
      RaiseInternalException(0x32,DAT_007ed77c,s_E__DKW_JPG_C_jdapimin_c_007f2d38,0x10c);
    }
    FUN_00759dd0(param_1);
    return 2;
  }
  return iVar1;
}

