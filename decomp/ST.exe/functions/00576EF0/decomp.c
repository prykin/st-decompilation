
undefined4 FUN_00576ef0(void)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  void *unaff_ESI;
  char *pcVar8;
  undefined4 in_stack_ffffff70;
  undefined4 local_8c [16];
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,in_stack_ffffff70);
  if (iVar3 == 0) {
    DAT_00806750 = thunk_FUN_0042a290(DAT_00806754,s_3D_MAP_007ca1e4);
    puVar4 = FUN_006b04d0(0x4f2);
    if (puVar4 == (undefined4 *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)FUN_006dbca0((int)puVar4);
    }
    psVar2 = DAT_00806750;
    DAT_00807598 = pvVar5;
    *(short **)((int)pvVar5 + 0x280) = DAT_00806750;
    iVar3 = (int)*psVar2 / 2;
    *(int *)((int)pvVar5 + 0x284) = iVar3;
    *(int *)((int)pvVar5 + 0x288) = iVar3 * iVar3;
    FUN_006e51f0();
    FUN_006e8580(DAT_00807598,DAT_008075a8);
    pcVar8 = s_scmask_007cac10;
    pvVar5 = DAT_00806770;
    DAT_00806724 = FUN_0070ae60(DAT_00806770,s_scmask_007cac10,0,0,(undefined4 *)0x0,1);
    DAT_00858df8 = (undefined4 *)&stack0xffffff70;
    iVar3 = __setjmp3(local_8c,0,pvVar5,pcVar8);
    if (iVar3 == 0) {
      puVar4 = FUN_00725550(DAT_00806760,PTR_s_ANIM_PALETTE_0079b1a8,0);
      *(undefined4 **)(local_8 + 0x431) = puVar4;
    }
    *(undefined4 *)(local_8 + 0x42c) = DAT_00808784;
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar6 = FUN_006ad4d0(s_E____titans_tsystem_cpp_007cab5c,0x86,0,iVar3,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  FUN_006a5e40(iVar3,0,0x7cab5c,0x86);
  return 0xfffffffc;
}

