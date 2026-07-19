
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::RecGetParam */

undefined4 * __thiscall
cMf32::RecGetParam(cMf32 *this,byte param_1,char *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  cMf32 *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar8;
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
  cMf32 *local_c;
  int local_8;
  
  local_8 = 0;
  local_14 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    if ((local_8 != 0) && (local_14 != 0)) {
      FUN_006ab060(&local_8);
    }
    if ((param_4 != 0) || (iVar4 != -4)) {
      wsprintfA(local_378,s_cMf32__RecGetParam_File___s__Sec_007efc28,local_c + 0x231,
                s_M_ANY_007ef0a4 + (uint)param_1 * 10,param_2);
      iVar5 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x296,0,iVar4,&DAT_007a4ccc,
                                 local_378);
      if (iVar5 != 0) {
        pcVar2 = (code *)swi(3);
        puVar6 = (undefined4 *)(*pcVar2)();
        return puVar6;
      }
      RaiseInternalException(iVar4,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x298);
    }
    return (undefined4 *)0x0;
  }
  local_274[0] = param_1;
  iVar4 = -1;
  pcVar8 = param_2;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_25e = ~(ushort)iVar4 - 1;
  pcVar8 = local_25c;
  for (uVar7 = (uint)(int)local_25e >> 2; pcVar3 = local_c, uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar7 = (int)local_25e & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar8 = *param_2;
    param_2 = param_2 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar4 = Library::DKW::DB::FUN_00751b60(**(int **)pcVar3,(ushort *)local_274,&local_10);
  if (iVar4 == -4) {
    RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_Mf32int_cpp_007efaa4,0x284);
  }
  if (param_3 == (undefined4 *)0x0) {
    param_3 = Library::DKW::LIB::FUN_006aac10(0xc);
  }
  *param_3 = local_26a;
  param_3[1] = local_266;
  param_3[2] = local_262;
  g_currentExceptionFrame = local_58.previous;
  return param_3;
}

