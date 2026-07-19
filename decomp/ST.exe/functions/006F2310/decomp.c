
undefined4 * FUN_006f2310(byte param_1,char *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar7;
  CHAR local_378 [260];
  byte local_274 [10];
  undefined4 local_26a;
  undefined4 local_266;
  undefined4 local_262;
  short local_25e;
  char local_25c [516];
  InternalExceptionFrame local_58;
  int local_14;
  undefined4 local_10;
  undefined4 *local_c;
  int local_8;
  
  local_8 = 0;
  local_14 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar3 = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    if ((local_8 != 0) && (local_14 != 0)) {
      FUN_006ab060(&local_8);
    }
    if ((param_4 != 0) || (iVar3 != -4)) {
      wsprintfA(local_378,s_cMf32__RecGetParam_File___s__Sec_007efc28,(int)local_c + 0x231,
                s_M_ANY_007ef0a4 + (uint)param_1 * 10,param_2);
      iVar4 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x296,0,iVar3,&DAT_007a4ccc,
                                 local_378);
      if (iVar4 != 0) {
        pcVar2 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar2)();
        return puVar5;
      }
      RaiseInternalException(iVar3,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x298);
    }
    return (undefined4 *)0x0;
  }
  local_274[0] = param_1;
  iVar3 = -1;
  pcVar7 = param_2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_25e = ~(ushort)iVar3 - 1;
  pcVar7 = local_25c;
  for (uVar6 = (uint)(int)local_25e >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar6 = (int)local_25e & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar7 = *param_2;
    param_2 = param_2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  iVar3 = FUN_00751b60(*(int *)*local_c,(ushort *)local_274,&local_10);
  if (iVar3 == -4) {
    RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_Mf32int_cpp_007efaa4,0x284);
  }
  if (param_3 == (undefined4 *)0x0) {
    param_3 = FUN_006aac10(0xc);
  }
  *param_3 = local_26a;
  param_3[1] = local_266;
  param_3[2] = local_262;
  g_currentExceptionFrame = local_58.previous;
  return param_3;
}

