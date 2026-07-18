
int FUN_00712e60(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  void *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  if (param_1 == 0) {
    return 0;
  }
  local_10 = *(int *)(param_1 + 8);
  if (param_2 < local_10) {
    local_58 = DAT_00858df8;
    DAT_00858df8 = &local_58;
    iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
    if (iVar2 != 0) {
      DAT_00858df8 = (undefined4 *)local_58;
      iVar4 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x8b3,0,iVar2,&DAT_007a4ccc);
      if (iVar4 != 0) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      FUN_006a5e40(iVar2,0,0x7f0190,0x8b5);
      if (-1 < iVar2) {
        iVar2 = -6;
      }
      return iVar2;
    }
    if (param_2 < local_10) {
      do {
        iVar2 = local_8;
        if (param_2 < *(int *)(param_1 + 8)) {
          puVar3 = *(uint **)(*(int *)(param_1 + 0x14) + param_2 * 4);
        }
        else {
          puVar3 = (uint *)0x0;
        }
        local_8 = FUN_007111c0(local_14,puVar3);
        local_8 = iVar2 + local_8;
        if (0 < param_2) {
          local_8 = local_8 + *(int *)((int)local_14 + 0x5c);
        }
        if (*(int *)((int)local_14 + 0x6c) < local_8) {
          DAT_00858df8 = (undefined4 *)local_58;
          return local_c;
        }
        local_c = local_c + 1;
        param_2 = param_2 + 1;
      } while (param_2 < local_10);
    }
    DAT_00858df8 = (undefined4 *)local_58;
    return local_c;
  }
  return 0;
}

