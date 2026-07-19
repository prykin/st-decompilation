
short * __cdecl FUN_00726a80(undefined4 param_1,char *param_2,byte param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  short local_14;
  short local_12;
  short local_a;
  short *local_8;
  
  local_8 = (short *)0x0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar2 = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar3 = FUN_006f2310(6,param_2,(undefined4 *)&local_14,param_4);
    if (puVar3 == (undefined4 *)0x0) {
      RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mfspr_cpp_007f0c8c,0x1c2);
    }
    local_8 = (short *)FUN_006aac10(local_a * 4 + 0xe);
    *(undefined4 *)(local_8 + 1) = param_1;
    *local_8 = local_a;
    local_8[3] = local_14;
    local_8[4] = local_12;
    uVar4 = FUN_0070aa50(param_1,param_2,param_3,1);
    iVar2 = 1;
    *(undefined4 *)(local_8 + 5) = uVar4;
    piVar7 = *(int **)(local_8 + 5);
    if (1 < *local_8) {
      do {
        *(int *)(local_8 + iVar2 * 2 + 5) = (int)piVar7 + *piVar7;
        piVar7 = *(int **)(local_8 + iVar2 * 2 + 5);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *local_8);
    }
    g_currentExceptionFrame = local_58.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_58.previous;
  FUN_00726bd0((int *)&local_8);
  if ((param_4 != 0) || (iVar2 != -4)) {
    iVar5 = ReportDebugMessage(s_E__Ourlib_mfspr_cpp_007f0c8c,0x1d8,0,iVar2,&DAT_007a4ccc,
                               s_mfQSprLoad_007f0d2c);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      psVar6 = (short *)(*pcVar1)();
      return psVar6;
    }
    RaiseInternalException(iVar2,0,s_E__Ourlib_mfspr_cpp_007f0c8c,0x1da);
  }
  return (short *)0x0;
}

