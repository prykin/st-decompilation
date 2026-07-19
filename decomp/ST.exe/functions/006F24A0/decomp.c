
int FUN_006f24a0(byte param_1,char *param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar6;
  byte local_370;
  int local_36f;
  short local_35a;
  char local_358 [516];
  CHAR local_154 [260];
  InternalExceptionFrame local_50;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    if ((param_3 == 0) && (iVar3 == -4)) {
      return -4;
    }
    wsprintfA(local_154,s_cMf32__RecGetLen_File___s__Sect__007efc5c,(int)local_8 + 0x231,
              s_M_ANY_007ef0a4 + (uint)param_1 * 10,param_2);
    iVar4 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x2bd,0,iVar3,&DAT_007a4ccc,
                               local_154);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x2bf);
    if (iVar3 < 0) {
      return iVar3;
    }
    return -1;
  }
  local_370 = param_1;
  iVar3 = -1;
  pcVar6 = param_2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_35a = ~(ushort)iVar3 - 1;
  pcVar6 = local_358;
  for (uVar5 = (uint)(int)local_35a >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar5 = (int)local_35a & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar6 = *param_2;
    param_2 = param_2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  iVar3 = FUN_00751b60(*(int *)*local_8,(ushort *)&local_370,&local_c);
  if (iVar3 == -4) {
    RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_Mf32int_cpp_007efaa4,0x2b6);
  }
  g_currentExceptionFrame = local_50.previous;
  return local_36f;
}

