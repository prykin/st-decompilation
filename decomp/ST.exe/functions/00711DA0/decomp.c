
int FUN_00711da0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar6;
  undefined4 local_5c;
  undefined4 local_58 [16];
  int local_18;
  void *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar3 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    iVar3 = FUN_00711530(local_14,param_1);
    local_18 = iVar3;
    iVar4 = FUN_00711580(local_14,param_1);
    if ((((param_2 < 0) && (param_2 != -3)) && (param_2 != -2)) &&
       (*(int *)((int)local_14 + 0x68) < iVar3)) {
      param_2 = 0;
    }
    if ((param_3 < 0) && (*(int *)((int)local_14 + 0x6c) < iVar4)) {
      param_3 = 0;
    }
    local_c = param_2;
    if (((param_2 < 0) && (param_2 != -3)) && ((param_2 != -2 && (param_2 != -4)))) {
      local_c = (*(int *)((int)local_14 + 0x68) - iVar3) / 2;
    }
    if (param_3 < 0) {
      param_3 = (*(int *)((int)local_14 + 0x6c) - iVar4) / 2;
    }
    iVar4 = 0;
    *(undefined4 *)((int)local_14 + 0x44) = param_4;
    *(undefined4 *)((int)local_14 + 0x48) = param_4;
    *(undefined4 *)((int)local_14 + 0x4c) = 0;
    iVar3 = *param_1;
    local_10 = param_1;
    local_8 = param_3;
    while (iVar3 != 0) {
      puVar1 = (uint *)*local_10;
      if (param_2 == -4) {
        uVar6 = *(undefined4 *)((int)local_14 + 0x44);
        iVar5 = local_8 + iVar4;
        iVar3 = FUN_00711110(local_14,puVar1);
        iVar3 = (*(int *)((int)local_14 + 0x68) + local_18) / 2 - iVar3;
      }
      else {
        uVar6 = *(undefined4 *)((int)local_14 + 0x44);
        if (param_2 == -2) {
          iVar5 = local_8 + iVar4;
          iVar3 = -1;
        }
        else {
          iVar5 = local_8 + iVar4;
          iVar3 = local_c;
        }
      }
      FUN_007119c0(puVar1,iVar3,iVar5,uVar6);
      iVar3 = FUN_007111c0(local_14,puVar1);
      iVar4 = iVar4 + iVar3 + *(int *)((int)local_14 + 0x5c);
      local_10 = local_10 + 1;
      iVar3 = *local_10;
    }
    *(undefined4 *)((int)local_14 + 0x4c) = 1;
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x71c,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  *(undefined4 *)((int)local_14 + 0x4c) = 1;
  FUN_006a5e40(iVar3,0,0x7f0190,0x720);
  return iVar3;
}

