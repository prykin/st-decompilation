
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_005f35f0(int param_1)

{
  uint *puVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  undefined4 uStack_10;
  undefined **ppuStack_c;
  uint uStack_8;
  
  uStack_10 = 0;
  ppuStack_c = &PTR_s_adcbo_007ce5a0;
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  iVar2 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 == 1) {
      puVar3 = FUN_00709af0(DAT_00806774,0x1d,ppuStack_c[*(int *)(uStack_8 + 0x87)],0xffffffff,0,1,0
                            ,(undefined4 *)0x0);
      puVar1 = (uint *)(uStack_8 + 0x8f);
      FUN_006e8660(DAT_00807598,(int *)puVar1,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(DAT_00807598,*puVar1,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,*puVar1,0,*(uint *)(uStack_8 + 0xab));
      *(ushort **)(uStack_8 + 0x171) = puVar3;
      if (DAT_00807326 != '\0') {
        FUN_006e9520(DAT_00807598,*puVar1,0,0x403170,uStack_8);
      }
    }
    else {
      puVar1 = (uint *)(uStack_8 + 0x8f);
      if (-1 < (int)*(uint *)(uStack_8 + 0x8f)) {
        FUN_006e9520(DAT_00807598,*(uint *)(uStack_8 + 0x8f),0,0,uStack_8);
        FUN_006e8ba0(DAT_00807598,*puVar1);
      }
      puVar3 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_i13_007ce618,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(DAT_00807598,(int *)puVar1,3,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(DAT_00807598,*puVar1,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,*puVar1,0,*(uint *)(uStack_8 + 0xab));
      puVar3 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_expl_s0_007ce610,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e98e0(DAT_00807598,*puVar1,2,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,*puVar1,2,*(uint *)(uStack_8 + 0xc0));
      FUN_006e9d40(DAT_00807598,(uint *)*puVar1,2);
    }
    FUN_006ea960(DAT_00807598,*(uint *)(uStack_8 + 0x8f),
                 (float)*(int *)(uStack_8 + 0x93) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(uStack_8 + 0x97) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(uStack_8 + 0x9b) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006eaaa0(DAT_00807598,*(uint *)(uStack_8 + 0x8f),0);
    *(undefined1 *)(uStack_8 + 0xc4) = 1;
    DAT_00858df8 = (undefined4 *)uStack_54;
    return 1;
  }
  DAT_00858df8 = (undefined4 *)uStack_54;
  return uStack_10;
}

