
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::vmAddrRecGet */

DWORD __thiscall cMf32::vmAddrRecGet(cMf32 *this,byte param_1,char *param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar7;
  byte local_36c [22];
  short local_356;
  char local_354 [516];
  CHAR local_150 [260];
  InternalExceptionFrame local_4c;
  cMf32 *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    if ((param_3 != 0) || (iVar3 != -4)) {
      wsprintfA(local_150,s_cMf32__vmAddrRecGet_File___s__Se_007efb80,local_8 + 0x231,
                s_M_ANY_007ef0a4 + (uint)param_1 * 10,param_2);
      iVar5 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x1aa,0,iVar3,&DAT_007a4ccc,
                                 local_150);
      if (iVar5 != 0) {
        pcVar2 = (code *)swi(3);
        DVar4 = (*pcVar2)();
        return DVar4;
      }
      RaiseInternalException(iVar3,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x1ac);
    }
    return 0;
  }
  local_36c[0] = param_1;
  iVar3 = -1;
  pcVar7 = param_2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_356 = ~(ushort)iVar3 - 1;
  pcVar7 = local_354;
  for (uVar6 = (uint)(int)local_356 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar6 = (int)local_356 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar7 = *param_2;
    param_2 = param_2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  DVar4 = FUN_00751980(*(int **)local_8,(ushort *)local_36c,(undefined4 *)0x0,0);
  if (DVar4 == 0xfffffffc) {
    RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_Mf32int_cpp_007efaa4,0x1a4);
  }
  g_currentExceptionFrame = local_4c.previous;
  return DVar4;
}

