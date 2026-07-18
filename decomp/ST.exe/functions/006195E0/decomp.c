
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jump_mine.cpp
   STJumpMineC::LoadImagJMine */

undefined4 __thiscall STJumpMineC::LoadImagJMine(STJumpMineC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  STJumpMineC *pSVar6;
  void *unaff_EDI;
  STJumpMineC *pSVar7;
  undefined4 local_4c;
  undefined4 local_48 [16];
  STJumpMineC *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pSVar7 = local_8;
  if (iVar2 == 0) {
    if (param_1 == 1) {
      puVar3 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_jmpmine_007d00d4,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      pSVar7 = local_8;
      pSVar6 = local_8 + 0x97;
      FUN_006e8660(DAT_00807598,(int *)pSVar6,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(DAT_00807598,*(uint *)pSVar6,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21)
                   ,1);
      FUN_006ea270(DAT_00807598,*(uint *)pSVar6,0,*(uint *)(pSVar7 + 0xab));
      uVar5 = *(undefined4 *)puVar3;
      *(ushort **)(pSVar7 + 0x9b) = puVar3;
      *(undefined4 *)(pSVar7 + 0xaf) = uVar5;
      if (DAT_00807326 != '\0') {
        FUN_006e9520(DAT_00807598,*(uint *)pSVar6,0,0x401109,(uint)(pSVar7 + 0x4d));
      }
    }
    else {
      pSVar6 = local_8 + 0x97;
      if (-1 < (int)*(uint *)(local_8 + 0x97)) {
        FUN_006e9520(DAT_00807598,*(uint *)(local_8 + 0x97),0,0,(uint)local_8);
        FUN_006e8ba0(DAT_00807598,*(uint *)pSVar6);
      }
      puVar3 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_exptme_007d00dc,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(DAT_00807598,(int *)pSVar6,3,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(DAT_00807598,*(uint *)pSVar6,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21)
                   ,1);
      FUN_006ea270(DAT_00807598,*(uint *)pSVar6,0,*(uint *)(pSVar7 + 0xab));
      *(undefined4 *)(pSVar7 + 0xaf) = *(undefined4 *)puVar3;
      puVar3 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expmask2_007d00e4,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e98e0(DAT_00807598,*(uint *)pSVar6,1,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21)
                   ,1);
      FUN_006ea270(DAT_00807598,*(uint *)pSVar6,1,*(uint *)(pSVar7 + 0xbc));
      FUN_006ea800(DAT_00807598,*(uint *)pSVar6,1,1);
      FUN_006ea790(DAT_00807598,*(uint *)pSVar6,DAT_008032b8,0x10);
      *(undefined4 *)(pSVar7 + 0xc0) = *(undefined4 *)puVar3;
      pSVar7[0xbb] = (STJumpMineC)0x1;
      puVar3 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_bulb_n4_007d00f0,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e98e0(DAT_00807598,*(uint *)pSVar6,2,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21)
                   ,1);
      FUN_006ea270(DAT_00807598,*(uint *)pSVar6,2,*(uint *)(pSVar7 + 0xb7));
      FUN_006e9d40(DAT_00807598,*(uint **)pSVar6,2);
      *(undefined4 *)(pSVar7 + 0xb3) = *(undefined4 *)puVar3;
    }
    FUN_006ea960(DAT_00807598,*(uint *)pSVar6,
                 (float)*(int *)(pSVar7 + 0x9f) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(pSVar7 + 0xa3) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(pSVar7 + 0xa7) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006eaaa0(DAT_00807598,*(uint *)pSVar6,0);
    pSVar7[0xc4] = (STJumpMineC)0x1;
    DAT_00858df8 = (undefined4 *)local_4c;
    return 1;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_nick_to_jump_mine_cp_007d0100,0x151,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar2,0,0x7d0100,0x153);
  return 0xffff;
}

