
uint FUN_006364b0(int param_1)

{
  ushort *puVar1;
  char *pcVar2;
  uint local_8;
  
  local_8 = 0xffffffff;
  if (param_1 == 0) {
    puVar1 = mfRLoad(DAT_00806764,CASE_1D,(byte *)s_blast_p_007d1c14,0xffffffff,0,0,0,
                     (undefined4 *)0x0);
    if ((puVar1 != (ushort *)0x0) && (DAT_00807598 != (void *)0x0)) {
      FUN_006e8660(DAT_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar1 + 9),
                   *(uint *)((int)puVar1 + 0xd),(int)*(uint *)((int)puVar1 + 9) / 2,
                   (int)*(uint *)((int)puVar1 + 0xd) / 2,0);
      FUN_006e98e0(DAT_00807598,local_8,0,*(undefined4 *)puVar1,*(int *)((int)puVar1 + 0x21),1);
      FUN_006ea270(DAT_00807598,local_8,0,0);
    }
  }
  else if ((0 < param_1) && (param_1 < 3)) {
    if (param_1 == 1) {
      pcVar2 = s_shapeM_007d1c1c;
    }
    else {
      pcVar2 = s_shapeB_007d1c24;
    }
    puVar1 = mfRLoad(DAT_00806774,CASE_1D,(byte *)pcVar2,0xffffffff,0,1,0,(undefined4 *)0x0);
    if ((puVar1 != (ushort *)0x0) && (DAT_00807598 != (void *)0x0)) {
      FUN_006e8660(DAT_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar1 + 9),
                   *(uint *)((int)puVar1 + 0xd),(int)*(uint *)((int)puVar1 + 9) / 2,
                   (int)*(uint *)((int)puVar1 + 0xd) / 2,0);
      FUN_006e98e0(DAT_00807598,local_8,0,*(undefined4 *)puVar1,*(int *)((int)puVar1 + 0x21),1);
      FUN_006ea270(DAT_00807598,local_8,0,0);
      if (param_1 == 1) {
        FUN_006ea8a0(DAT_00807598,local_8,0,2,0);
        return local_8;
      }
      FUN_006ea8a0(DAT_00807598,local_8,0,2,DAT_008032b8);
      return local_8;
    }
  }
  return local_8;
}

