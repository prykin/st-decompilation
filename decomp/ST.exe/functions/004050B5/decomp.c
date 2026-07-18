
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall STTmMineC::LoadImagVacuum(STTmMineC *this,int param_1)

{
  STTmMineC *pSVar1;
  code *pcVar2;
  STTmMineC *pSVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  undefined4 uStack_10;
  STTmMineC *pSStack_c;
  uint uStack_8;
  
  uStack_10 = 0;
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  pSStack_c = this;
  iVar4 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  pSVar3 = pSStack_c;
  if (iVar4 == 0) {
    if (*(int *)(pSStack_c + 0x33a) == -1) {
      puVar5 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_vc0_007d201c,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(*(void **)(pSVar3 + 0x211),(int *)&uStack_8,1,0,*(uint *)((int)puVar5 + 9),
                   *(uint *)((int)puVar5 + 0xd),(int)*(uint *)((int)puVar5 + 9) / 2,0xa9,0);
      FUN_006e98e0(*(void **)(pSVar3 + 0x211),uStack_8,0,*(undefined4 *)puVar5,
                   *(int *)((int)puVar5 + 0x21),1);
      FUN_006ea270(*(void **)(pSVar3 + 0x211),uStack_8,0,*(uint *)(pSVar3 + 0x33e));
      FUN_006ea960(*(void **)(pSVar3 + 0x211),uStack_8,
                   (float)*(int *)(pSVar3 + 0x266) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar3 + 0x26a) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar3 + 0x26e) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006eaaa0(*(void **)(pSVar3 + 0x211),uStack_8,0);
      FUN_006eab60(*(void **)(pSVar3 + 0x211),uStack_8);
      *(uint *)(pSVar3 + 0x33a) = uStack_8;
      *(undefined4 *)(pSVar3 + 0x342) = *(undefined4 *)puVar5;
    }
    if ((*(int *)(pSVar3 + 0x353) == -1) && (param_1 != 0)) {
      puVar5 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_fla_007d1f5c,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      *(ushort **)(pSVar3 + 0x34b) = puVar5;
      *(undefined4 *)(pSVar3 + 0x34f) = 0;
    }
    pSVar1 = pSVar3 + 0x363;
    if ((*(int *)(pSVar3 + 0x363) == -1) && (param_1 != 0)) {
      puVar5 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_vc1_007d2028,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      *(ushort **)(pSVar3 + 0x35f) = puVar5;
      FUN_006e8660(*(void **)(pSVar3 + 0x211),(int *)pSVar1,1,0,*(uint *)((int)puVar5 + 9),
                   *(uint *)((int)puVar5 + 0xd),0xa8,0x43,0);
      FUN_006e98e0(*(void **)(pSVar3 + 0x211),*(uint *)pSVar1,0,*(undefined4 *)puVar5,
                   *(int *)((int)puVar5 + 0x21),1);
      FUN_006ea270(*(void **)(pSVar3 + 0x211),*(uint *)pSVar1,0,*(uint *)(pSVar3 + 0x367));
      FUN_006ea960(*(void **)(pSVar3 + 0x211),*(uint *)pSVar1,
                   (float)*(int *)(pSVar3 + 0x266) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar3 + 0x26a) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar3 + 0x26e) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006eaaa0(*(void **)(pSVar3 + 0x211),*(uint *)pSVar1,0);
      *(undefined4 *)(pSVar3 + 0x36b) = *(undefined4 *)puVar5;
    }
    DAT_00858df8 = (undefined4 *)uStack_54;
    return uStack_10;
  }
  DAT_00858df8 = (undefined4 *)uStack_54;
  iVar6 = FUN_006ad4d0(s_E____titans_nick_to_TmMin_cpp_007d209c,0x794,0,iVar4,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return uVar7;
  }
  FUN_006a5e40(iVar4,0,0x7d209c,0x796);
  return 0xffff;
}

