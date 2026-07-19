
int FUN_007568d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0xc) != 0xcd) {
    RaiseInternalException(0x12,DAT_007ed77c,s_E__DKW_JPG_C_jdapistd_c_007f2d50,0xa0);
  }
  if (*(uint *)(iVar1 + 0x6c) <= *(uint *)(iVar1 + 0x84)) {
    return 0;
  }
  if (*(int *)(iVar1 + 4) != 0) {
    *(uint *)(*(int *)(iVar1 + 4) + 4) = *(uint *)(iVar1 + 0x84);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = *(undefined4 *)(iVar1 + 0x6c);
    (*(code *)**(undefined4 **)(iVar1 + 4))(iVar1);
  }
  param_1 = 0;
  (**(code **)(*(int *)(iVar1 + 0x196) + 4))(iVar1,param_2,&param_1,param_3);
  *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + param_1;
  return param_1;
}

