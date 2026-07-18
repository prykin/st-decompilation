
int FUN_007446a0(void)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  for (local_c = 3; local_c < DAT_0085a180; local_c = local_c + 1) {
    if (*(int *)(DAT_00858e40 + local_c * 4) != 0) {
      if ((*(uint *)(*(int *)(DAT_00858e40 + local_c * 4) + 0xc) & 0x83) != 0) {
        iVar1 = FUN_0072ea90(*(int **)(DAT_00858e40 + local_c * 4));
        if (iVar1 != -1) {
          local_8 = local_8 + 1;
        }
      }
      if (0x13 < local_c) {
        thunk_FUN_006a49c0(*(undefined4 **)(DAT_00858e40 + local_c * 4),2);
        *(undefined4 *)(DAT_00858e40 + local_c * 4) = 0;
      }
    }
  }
  return local_8;
}

