
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * thunk_FUN_00630c50(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  int iStack_14;
  int iStack_10;
  ushort *puStack_c;
  undefined **ppuStack_8;
  
  puStack_c = (ushort *)0x0;
  if (param_2 == 1) {
    if (param_5 == 3) {
      ppuStack_8 = &PTR_s_ruin_s10_007d1850;
    }
    else {
      ppuStack_8 = &PTR_s_ruin_10_007d1818;
    }
  }
  else {
    ppuStack_8 = &PTR_s_ruin_s40_007d186c;
    if (param_5 != 3) {
      ppuStack_8 = &PTR_s_ruin_40_007d1834;
    }
  }
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  iVar2 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_58;
    return puStack_c;
  }
  puVar3 = FUN_00709af0(DAT_00806774,0x1d,ppuStack_8[*(int *)(iStack_10 + 0x40)],0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  if (param_3 == 0) {
    if (param_2 == 1) {
      puStack_c = (ushort *)
                  FUN_006e9000(DAT_00807598,**(undefined4 **)((int)puVar3 + 0x21),0x5a,0x45,
                               (float)*(int *)(iStack_10 + 0x54) * _DAT_007904f8 * _DAT_007904f0,
                               (float)*(int *)(iStack_10 + 0x58) * _DAT_007904f8 * _DAT_007904f0,
                               (float)*(int *)(iStack_10 + 0x5c) * _DAT_007904f8 * _DAT_007904f0 +
                               _DAT_007904fc,0);
    }
    if (param_2 == 4) {
      iStack_14 = *(int *)(iStack_10 + 0x54) + 100;
      puStack_c = (ushort *)
                  FUN_006e9000(DAT_00807598,**(undefined4 **)((int)puVar3 + 0x21),0x78,0x56,
                               (float)iStack_14 * _DAT_007904f8 * _DAT_007904f0,
                               (float)(*(int *)(iStack_10 + 0x58) + 100) * _DAT_007904f8 *
                               _DAT_007904f0,
                               (float)*(int *)(iStack_10 + 0x5c) * _DAT_007904f8 * _DAT_007904f0 +
                               _DAT_0079d1a0,0);
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    return puStack_c;
  }
  puVar1 = (uint *)(iStack_10 + 0x61);
  if (param_2 == 1) {
    uVar6 = *(uint *)((int)puVar3 + 0xd);
    uVar5 = *(uint *)((int)puVar3 + 9);
    uVar8 = 0x45;
    uVar7 = 0x5a;
  }
  else {
    uVar6 = *(uint *)((int)puVar3 + 0xd);
    uVar5 = *(uint *)((int)puVar3 + 9);
    uVar8 = 100;
    uVar7 = 0x78;
  }
  FUN_006e8660(DAT_00807598,(int *)puVar1,1,0,uVar5,uVar6,uVar7,uVar8,0);
  FUN_006e98e0(DAT_00807598,*puVar1,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
  FUN_006ea270(DAT_00807598,*puVar1,0,0);
  FUN_006ea3e0(DAT_00807598,*puVar1,-1);
  FUN_006e9210(DAT_00807598,*puVar1);
  if (param_2 == 1) {
    iVar2 = *(int *)(iStack_10 + 0x58);
    iVar4 = *(int *)(iStack_10 + 0x54);
  }
  else {
    iVar2 = *(int *)(iStack_10 + 0x58) + 100;
    iVar4 = *(int *)(iStack_10 + 0x54) + 100;
    iStack_14 = iVar4;
  }
  FUN_006ea960(DAT_00807598,*puVar1,(float)iVar4 * _DAT_007904f8 * _DAT_007904f0,
               (float)iVar2 * _DAT_007904f8 * _DAT_007904f0,
               (float)*(int *)(iStack_10 + 0x5c) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  if (param_4 != 0) {
    FUN_006eaaa0(DAT_00807598,*puVar1,0);
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  return puVar3;
}

