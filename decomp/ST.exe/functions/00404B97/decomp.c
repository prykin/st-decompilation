
uint thunk_FUN_004455c0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar6;
  undefined4 extraout_EDX_02;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  undefined4 uStack_14;
  int iStack_c;
  void *pvStack_8;
  
  uStack_14 = 0xffffffff;
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  iVar2 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_58;
    iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x27df,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_006a5e40(iVar2,0,0x7a6004,0x27e0);
    return CONCAT22(extraout_var,(undefined2)uStack_14);
  }
  uVar6 = extraout_EDX;
  uVar5 = extraout_var_00;
  if (7 < (uint)param_1[1]) {
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x27b5,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_006a5e40(-0x5001fffe,DAT_007ed77c,0x7a6004,0x27b6);
    uVar6 = extraout_EDX_00;
    uVar5 = extraout_var_01;
  }
  if ((7 < (uint)param_1[5]) && (param_1[5] != 0xffffffff)) {
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x27c2,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_006a5e40(-0x5001fffe,DAT_007ed77c,0x7a6004,0x27c3);
    uVar6 = extraout_EDX_01;
    uVar5 = extraout_var_02;
  }
  if ((((*(short *)(param_1 + 7) < 0) || (DAT_007fb240 <= *(short *)(param_1 + 7))) ||
      (*(short *)((int)param_1 + 0x1e) < 0)) ||
     (((DAT_007fb242 <= *(short *)((int)param_1 + 0x1e) || (*(short *)(param_1 + 8) < 0)) ||
      (DAT_007fb244 <= *(short *)(param_1 + 8))))) {
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x27c8,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_006a5e40(-0x5001fff5,DAT_007ed77c,0x7a6004,0x27c9);
    uVar6 = extraout_EDX_02;
    uVar5 = extraout_var_03;
  }
  *param_1 = 0x14;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_1[5] == -1) {
    param_1[5] = param_1[1];
  }
  pvStack_8 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar6 >> 8),
                                                  *(undefined1 *)(param_1 + 1)),
                                         CONCAT22(uVar5,*(undefined2 *)(param_1 + 9)));
  if (pvStack_8 == (void *)0x0) {
    uVar3 = thunk_FUN_00435850(CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)(param_1 + 1)
                                       ),0,(int *)&pvStack_8);
    *(short *)(param_1 + 9) = (short)uVar3;
    if (pvStack_8 == (void *)0x0) {
      FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a6004,0x27d8);
    }
  }
  thunk_FUN_0054cc20(0x14,0,&iStack_c,param_1,0);
  iVar2 = iStack_c;
  if (iStack_c == 0) {
    iVar2 = FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a6004,0x27db);
  }
  uVar3 = thunk_FUN_00423850(pvStack_8,
                             CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(iStack_c + 0x32))
                             ,0);
  DAT_00858df8 = (undefined4 *)uStack_58;
  return CONCAT22((short)(uVar3 >> 0x10),*(undefined2 *)(iStack_c + 0x32));
}

