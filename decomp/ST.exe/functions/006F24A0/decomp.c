
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::RecGetLen */

int __thiscall cMf32::RecGetLen(cMf32 *this,byte param_1,char *param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  cMf32 *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar7;
  byte local_370;
  int local_36f;
  short local_35a;
  char local_358 [516];
  CHAR local_154 [260];
  InternalExceptionFrame local_50;
  undefined4 local_c;
  cMf32 *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    if ((param_3 == 0) && (iVar4 == -4)) {
      return -4;
    }
    wsprintfA(local_154,s_cMf32__RecGetLen_File___s__Sect__007efc5c,local_8 + 0x231,
              s_M_ANY_007ef0a4 + (uint)param_1 * 10,param_2);
    iVar5 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x2bd,0,iVar4,&DAT_007a4ccc,
                               local_154);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    RaiseInternalException(iVar4,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x2bf);
    if (iVar4 < 0) {
      return iVar4;
    }
    return -1;
  }
  local_370 = param_1;
  iVar4 = -1;
  pcVar7 = param_2;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_35a = ~(ushort)iVar4 - 1;
  pcVar7 = local_358;
  for (uVar6 = (uint)(int)local_35a >> 2; pcVar3 = local_8, uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar6 = (int)local_35a & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar7 = *param_2;
    param_2 = param_2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  iVar4 = Library::DKW::DB::FUN_00751b60(**(int **)pcVar3,(ushort *)&local_370,&local_c);
  if (iVar4 == -4) {
    RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_Mf32int_cpp_007efaa4,0x2b6);
  }
  g_currentExceptionFrame = local_50.previous;
  return local_36f;
}

