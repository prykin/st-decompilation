
undefined4 * FUN_00737020(void)

{
  undefined4 uVar1;
  undefined4 *local_c;
  int local_8;
  
  local_c = (undefined4 *)0x0;
  local_8 = 0;
  do {
    if (DAT_0085a180 <= local_8) {
LAB_007370c6:
      if (local_c != (undefined4 *)0x0) {
        local_c[1] = 0;
        local_c[3] = 0;
        local_c[2] = 0;
        *local_c = 0;
        local_c[7] = 0;
        local_c[4] = 0xffffffff;
      }
      return local_c;
    }
    if (*(int *)(DAT_00858e40 + local_8 * 4) == 0) {
      uVar1 = thunk_FUN_006a3c10(0x20,2,"stream.c",0x55);
      *(undefined4 *)(DAT_00858e40 + local_8 * 4) = uVar1;
      if (*(int *)(DAT_00858e40 + local_8 * 4) != 0) {
        local_c = *(undefined4 **)(DAT_00858e40 + local_8 * 4);
      }
      goto LAB_007370c6;
    }
    if ((*(uint *)(*(int *)(DAT_00858e40 + local_8 * 4) + 0xc) & 0x83) == 0) {
      local_c = *(undefined4 **)(DAT_00858e40 + local_8 * 4);
      goto LAB_007370c6;
    }
    local_8 = local_8 + 1;
  } while( true );
}

