
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_005f4a30(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  ushort *puStack_14;
  undefined **ppuStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  iStack_c = param_1;
  uStack_8 = 0;
  ppuStack_10 = &PTR_s_pics_g_007ce5f8;
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  iVar3 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  iVar2 = iStack_c;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_58;
    return uStack_8;
  }
  if (iStack_c != 0) {
    uVar4 = param_2 & 0xff;
    puStack_14 = FUN_00709af0(DAT_00806764,0x1d,ppuStack_10[uVar4],0xffffffff,0,1,0,
                              (undefined4 *)0x0);
    puVar1 = (uint *)(iVar2 + 0x1f);
    FUN_006e8660(DAT_00807598,(int *)puVar1,1,0,*(uint *)((int)puStack_14 + 9),
                 *(uint *)((int)puStack_14 + 0xd),*(int *)(&DAT_007ce5b0 + uVar4 * 8) / 2,
                 *(int *)(&DAT_007ce5b4 + uVar4 * 8) / 2 - 0xe,0);
    FUN_006e98e0(DAT_00807598,*puVar1,0,*(undefined4 *)puStack_14,*(int *)((int)puStack_14 + 0x21),1
                );
    FUN_006ea270(DAT_00807598,*puVar1,0,*(uint *)(iVar2 + 0xe));
    FUN_006ea960(DAT_00807598,*puVar1,(float)*(int *)(iVar2 + 2) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar2 + 6) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar2 + 10) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006eaaa0(DAT_00807598,*puVar1,0);
    *(undefined1 *)(iVar2 + 0x1e) = 1;
    if (param_3 != 0) {
      FUN_006eab60(DAT_00807598,*puVar1);
      *(undefined1 *)(iVar2 + 0x1e) = 0;
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    return 1;
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  return uStack_8;
}

