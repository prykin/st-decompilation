
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall STTmMineC::LoadImagSpr(STTmMineC *this,uint param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  STTmMineC *pSVar8;
  void *unaff_EDI;
  InternalExceptionFrame IStack_58;
  undefined4 uStack_14;
  STTmMineC *pSStack_10;
  int *piStack_c;
  uint uStack_8;
  
  iVar4 = *(int *)(this + 0x336);
  uStack_14 = 0;
  if (iVar4 == 0) {
    return 0;
  }
  if (param_1 < *(uint *)(iVar4 + 0xc)) {
    piStack_c = (int *)(*(int *)(iVar4 + 8) * param_1 + *(int *)(iVar4 + 0x1c));
  }
  else {
    piStack_c = (int *)0x0;
  }
  if (piStack_c != (int *)0x0) {
    if ((param_2 != 0) && (-1 < piStack_c[0xe])) {
      return 0xffffffff;
    }
    IStack_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_58;
    pSStack_10 = this;
    iVar4 = __setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    piVar3 = piStack_c;
    if (iVar4 != 0) {
      g_currentExceptionFrame = IStack_58.previous;
      iVar6 = ReportDebugMessage(s_E____titans_nick_to_TmMin_cpp_007d209c,0x603,0,iVar4,
                                 &DAT_007a4ccc,s_STTmMineC__LoadImagSpr_007d20fc);
      if (iVar6 != 0) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      RaiseInternalException(iVar4,0,s_E____titans_nick_to_TmMin_cpp_007d209c,0x605);
      return 0xffff;
    }
    puVar5 = FUN_00709af0(DAT_00806764,0x1d,(&PTR_s_blast_p_007d1f68)[*piStack_c],0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    pSVar8 = pSStack_10;
    uVar1 = piVar3[0xe];
    if ((int)uVar1 < 0) {
      FUN_006e8660(*(void **)(pSStack_10 + 0x211),(int *)&uStack_8,1,0,*(uint *)((int)puVar5 + 9),
                   *(uint *)((int)puVar5 + 0xd),*(int *)((int)puVar5 + 9) / 2,
                   (int)*(uint *)((int)puVar5 + 0xd) / 2 - 0xe,0);
    }
    else {
      uStack_8 = uVar1;
      FUN_006e9830(*(void **)(pSStack_10 + 0x211),uVar1,*(int *)((int)puVar5 + 9) / 2,
                   *(int *)((int)puVar5 + 0xd) / 2 - 0xe);
    }
    pSVar8 = pSVar8 + 0x211;
    FUN_006e98e0(*(void **)pSVar8,uStack_8,0,*(undefined4 *)puVar5,*(int *)((int)puVar5 + 0x21),1);
    FUN_006ea270(*(void **)pSVar8,uStack_8,0,piVar3[8]);
    FUN_006ea5e0(*(void **)pSVar8,uStack_8,0,0);
    FUN_006ea960(*(void **)pSVar8,uStack_8,(float)piVar3[2] * _DAT_007904f8 * _DAT_007904f0,
                 (float)piVar3[3] * _DAT_007904f8 * _DAT_007904f0,(float)piVar3[4] + _DAT_007904fc);
    FUN_006eaaa0(*(void **)pSVar8,uStack_8,0);
    if (piVar3[1] != 0) {
      FUN_006eab60(*(void **)pSVar8,uStack_8);
    }
    piVar3[0xe] = uStack_8;
    g_currentExceptionFrame = IStack_58.previous;
  }
  return uStack_14;
}

