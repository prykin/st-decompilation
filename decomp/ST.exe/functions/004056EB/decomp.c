
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_006195e0(int param_1)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  uint *puVar6;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  uint uStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 == 1) {
      puVar3 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_jmpmine_007d00d4,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      puVar6 = (uint *)(uStack_8 + 0x97);
      FUN_006e8660(DAT_00807598,(int *)puVar6,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(DAT_00807598,*puVar6,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,*puVar6,0,*(uint *)(uStack_8 + 0xab));
      uVar5 = *(undefined4 *)puVar3;
      *(ushort **)(uStack_8 + 0x9b) = puVar3;
      *(undefined4 *)(uStack_8 + 0xaf) = uVar5;
      if (DAT_00807326 != '\0') {
        FUN_006e9520(DAT_00807598,*puVar6,0,0x401109,uStack_8 + 0x4d);
      }
    }
    else {
      puVar6 = (uint *)(uStack_8 + 0x97);
      if (-1 < (int)*(uint *)(uStack_8 + 0x97)) {
        FUN_006e9520(DAT_00807598,*(uint *)(uStack_8 + 0x97),0,0,uStack_8);
        FUN_006e8ba0(DAT_00807598,*puVar6);
      }
      puVar3 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_exptme_007d00dc,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(DAT_00807598,(int *)puVar6,3,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(DAT_00807598,*puVar6,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,*puVar6,0,*(uint *)(uStack_8 + 0xab));
      *(undefined4 *)(uStack_8 + 0xaf) = *(undefined4 *)puVar3;
      puVar3 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expmask2_007d00e4,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e98e0(DAT_00807598,*puVar6,1,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,*puVar6,1,*(uint *)(uStack_8 + 0xbc));
      FUN_006ea800(DAT_00807598,*puVar6,1,1);
      FUN_006ea790(DAT_00807598,*puVar6,DAT_008032b8,0x10);
      *(undefined4 *)(uStack_8 + 0xc0) = *(undefined4 *)puVar3;
      *(undefined1 *)(uStack_8 + 0xbb) = 1;
      puVar3 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_bulb_n4_007d00f0,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e98e0(DAT_00807598,*puVar6,2,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,*puVar6,2,*(uint *)(uStack_8 + 0xb7));
      FUN_006e9d40(DAT_00807598,(uint *)*puVar6,2);
      *(undefined4 *)(uStack_8 + 0xb3) = *(undefined4 *)puVar3;
    }
    FUN_006ea960(DAT_00807598,*puVar6,
                 (float)*(int *)(uStack_8 + 0x9f) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(uStack_8 + 0xa3) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(uStack_8 + 0xa7) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006eaaa0(DAT_00807598,*puVar6,0);
    *(undefined1 *)(uStack_8 + 0xc4) = 1;
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return 1;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_nick_to_jump_mine_cp_007d0100,0x151,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar2,0,0x7d0100,0x153);
  return 0xffff;
}

