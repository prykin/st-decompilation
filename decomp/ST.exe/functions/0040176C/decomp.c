
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_006474e0(int param_1)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_18 = 0;
  uStack_5c = DAT_00858df8;
  DAT_00858df8 = &uStack_5c;
  iVar2 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_1 == 0) || (param_1 == 2)) {
      puVar3 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_expl_vol_007d26b0,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(DAT_00807598,(int *)&uStack_8,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x2f,0);
      FUN_006e98e0(DAT_00807598,uStack_8,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,uStack_8,0,*(uint *)(iStack_14 + 0x71));
      FUN_006e92c0(DAT_00807598,uStack_8,9.950249);
      FUN_006ea960(DAT_00807598,uStack_8,
                   (float)*(int *)(iStack_14 + 0x65) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(iStack_14 + 0x69) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(iStack_14 + 0x6d) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc
                  );
      FUN_006eaaa0(DAT_00807598,uStack_8,0);
      *(ushort **)(iStack_14 + 0x61) = puVar3;
      *(uint *)(iStack_14 + 0x5d) = uStack_8;
      puVar3 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_expl_vob_007d26c8,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(DAT_00807598,(int *)&uStack_c,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x40,0x6a,0);
      FUN_006e98e0(DAT_00807598,uStack_c,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,uStack_c,0,*(uint *)(iStack_14 + 0x8a));
      FUN_006ea960(DAT_00807598,uStack_c,
                   (float)*(int *)(iStack_14 + 0x65) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(iStack_14 + 0x69) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(iStack_14 + 0x6d) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc
                  );
      FUN_006eaaa0(DAT_00807598,uStack_c,0);
      FUN_006ea460(DAT_00807598,uStack_c,uStack_8);
      *(uint *)(iStack_14 + 0x86) = uStack_c;
    }
    if ((param_1 != 0) && (*(int *)(iStack_14 + 0x7a) < 0)) {
      puVar3 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_expl_vop_007d26bc,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(DAT_00807598,(int *)&uStack_10,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x4b,0x7e,0);
      FUN_006e98e0(DAT_00807598,uStack_10,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,uStack_10,0,*(uint *)(iStack_14 + 0x7e));
      FUN_006ea960(DAT_00807598,uStack_10,
                   (float)*(int *)(iStack_14 + 0x65) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(iStack_14 + 0x69) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(iStack_14 + 0x6d) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc
                  );
      FUN_006eaaa0(DAT_00807598,uStack_10,0);
      FUN_006ea460(DAT_00807598,uStack_10,*(int *)(iStack_14 + 0x5d));
      *(uint *)(iStack_14 + 0x7a) = uStack_10;
    }
    DAT_00858df8 = (undefined4 *)uStack_5c;
    return uStack_18;
  }
  DAT_00858df8 = (undefined4 *)uStack_5c;
  iVar4 = FUN_006ad4d0(s_E____titans_nick_to_volc_cpp_007d26e4,0x214,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar2,0,0x7d26e4,0x216);
  return 0xffff;
}

