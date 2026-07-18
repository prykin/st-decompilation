
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall STTmMineC::LoadImagNuclear(STTmMineC *this,int param_1)

{
  code *pcVar1;
  STTmMineC *pSVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
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
  iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_c;
  if (iVar3 == 0) {
    if (*(int *)(pSStack_c + 0x33a) == -1) {
      puVar4 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_nb0_007d1f50,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(*(void **)(pSVar2 + 0x211),(int *)&uStack_8,1,0,*(uint *)((int)puVar4 + 9),
                   *(uint *)((int)puVar4 + 0xd),0x6f,0xf0,0);
      FUN_006e98e0(*(void **)(pSVar2 + 0x211),uStack_8,0,*(undefined4 *)puVar4,
                   *(int *)((int)puVar4 + 0x21),1);
      FUN_006ea270(*(void **)(pSVar2 + 0x211),uStack_8,0,*(uint *)(pSVar2 + 0x33e));
      FUN_006ea960(*(void **)(pSVar2 + 0x211),uStack_8,
                   (float)*(int *)(pSVar2 + 0x266) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar2 + 0x26a) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar2 + 0x26e) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006eaaa0(*(void **)(pSVar2 + 0x211),uStack_8,0);
      FUN_006eab60(*(void **)(pSVar2 + 0x211),uStack_8);
      pSVar2[0x346] = (STTmMineC)0x0;
      *(uint *)(pSVar2 + 0x33a) = uStack_8;
      *(undefined4 *)(pSVar2 + 0x342) = *(undefined4 *)puVar4;
    }
    if ((*(int *)(pSVar2 + 0x353) == -1) && (param_1 != 0)) {
      puVar4 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_expl_fla_007d1f5c,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      *(ushort **)(pSVar2 + 0x34b) = puVar4;
      *(undefined4 *)(pSVar2 + 0x34f) = 0;
    }
    DAT_00858df8 = (undefined4 *)uStack_54;
    return uStack_10;
  }
  DAT_00858df8 = (undefined4 *)uStack_54;
  iVar5 = FUN_006ad4d0(s_E____titans_nick_to_TmMin_cpp_007d209c,0x5d3,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  FUN_006a5e40(iVar3,0,0x7d209c,0x5d5);
  return 0xffff;
}

