
undefined4 FUN_00756a80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (((iVar1 == 0xcd) || (iVar1 == 0xce)) && (*(int *)(param_1 + 0x38) != 0)) {
    (**(code **)(*(int *)(param_1 + 0x192) + 4))(param_1);
    *(undefined4 *)(param_1 + 0xc) = 0xd0;
  }
  else if (iVar1 != 0xd0) {
    RaiseInternalException(0x12,DAT_007ed77c,s_E__DKW_JPG_C_jdapistd_c_007f2d50,0x109);
  }
  if (*(int *)(param_1 + 0x88) <= *(int *)(param_1 + 0x90)) {
    do {
      if ((*(undefined4 **)(param_1 + 0x1a2))[5] != 0) break;
      iVar1 = (*(code *)**(undefined4 **)(param_1 + 0x1a2))(param_1);
      if (iVar1 == 0) {
        return 0;
      }
    } while (*(int *)(param_1 + 0x88) <= *(int *)(param_1 + 0x90));
  }
  *(undefined4 *)(param_1 + 0xc) = 0xcf;
  return 1;
}

