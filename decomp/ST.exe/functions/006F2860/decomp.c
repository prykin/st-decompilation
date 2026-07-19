
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::RecKeyGetNext */

undefined4 * __thiscall cMf32::RecKeyGetNext(cMf32 *this,undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  cMf32 *pcVar6;
  InternalExceptionFrame local_4c;
  cMf32 *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x321,0,iVar2,&DAT_007a4ccc,
                               s_cMf32__RecKeyGetNext_007efce0);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      puVar5 = (undefined4 *)(*pcVar1)();
      return puVar5;
    }
    RaiseInternalException(iVar2,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x323);
    return (undefined4 *)0x0;
  }
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)(local_8 + 0x18);
  }
  pcVar6 = (cMf32 *)param_1;
  for (iVar2 = 0x86; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar6 = 0;
    pcVar6 = pcVar6 + 4;
  }
  *pcVar6 = (cMf32)0x0;
  DVar3 = FUN_00751ba0(*(int **)local_8,param_1,(undefined4 *)0x0,0);
  if (DVar3 == 0xfffffffc) {
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)0x0;
  }
  g_currentExceptionFrame = local_4c.previous;
  *(cMf32 *)((int)param_1 + *(short *)((int)param_1 + 0x16) + 0x18) = (cMf32)0x0;
  return (undefined4 *)(cMf32 *)param_1;
}

