
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall STVolcanoC::LoadImagVolcano(STVolcanoC *this,int param_1)

{
  code *pcVar1;
  STVolcanoC *pSVar2;
  int errorCode;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_5c;
  undefined4 uStack_18;
  STVolcanoC *pSStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_18 = 0;
  IStack_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_5c;
  pSStack_14 = this;
  errorCode = __setjmp3(IStack_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_14;
  if (errorCode == 0) {
    if ((param_1 == 0) || (param_1 == 2)) {
      puVar3 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_expl_vol_007d26b0,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(DAT_00807598,(int *)&uStack_8,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x2f,0);
      FUN_006e98e0(DAT_00807598,uStack_8,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,uStack_8,0,*(uint *)(pSVar2 + 0x71));
      FUN_006e92c0(DAT_00807598,uStack_8,9.950249);
      FUN_006ea960(DAT_00807598,uStack_8,
                   (float)*(int *)(pSVar2 + 0x65) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar2 + 0x69) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar2 + 0x6d) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006eaaa0(DAT_00807598,uStack_8,0);
      *(ushort **)(pSVar2 + 0x61) = puVar3;
      *(uint *)(pSVar2 + 0x5d) = uStack_8;
      puVar3 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_expl_vob_007d26c8,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(DAT_00807598,(int *)&uStack_c,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x40,0x6a,0);
      FUN_006e98e0(DAT_00807598,uStack_c,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,uStack_c,0,*(uint *)(pSVar2 + 0x8a));
      FUN_006ea960(DAT_00807598,uStack_c,
                   (float)*(int *)(pSVar2 + 0x65) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar2 + 0x69) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar2 + 0x6d) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006eaaa0(DAT_00807598,uStack_c,0);
      FUN_006ea460(DAT_00807598,uStack_c,uStack_8);
      *(uint *)(pSVar2 + 0x86) = uStack_c;
    }
    if ((param_1 != 0) && (*(int *)(pSVar2 + 0x7a) < 0)) {
      puVar3 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_expl_vop_007d26bc,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      FUN_006e8660(DAT_00807598,(int *)&uStack_10,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x4b,0x7e,0);
      FUN_006e98e0(DAT_00807598,uStack_10,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,uStack_10,0,*(uint *)(pSVar2 + 0x7e));
      FUN_006ea960(DAT_00807598,uStack_10,
                   (float)*(int *)(pSVar2 + 0x65) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar2 + 0x69) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(pSVar2 + 0x6d) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006eaaa0(DAT_00807598,uStack_10,0);
      FUN_006ea460(DAT_00807598,uStack_10,*(int *)(pSVar2 + 0x5d));
      *(uint *)(pSVar2 + 0x7a) = uStack_10;
    }
    g_currentExceptionFrame = IStack_5c.previous;
    return uStack_18;
  }
  g_currentExceptionFrame = IStack_5c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_nick_to_volc_cpp_007d26e4,0x214,0,errorCode,&DAT_007a4ccc
                             ,s_STVolcanoC__LoadImagVolcano_007d2724);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  RaiseInternalException(errorCode,0,s_E____titans_nick_to_volc_cpp_007d26e4,0x216);
  return 0xffff;
}

