
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::RecNameGetNext */

undefined4 * __thiscall cMf32::RecNameGetNext(cMf32 *this)

{
  code *pcVar1;
  cMf32 *pcVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  cMf32 *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pcVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x302,0,iVar3,&DAT_007a4ccc,
                               s_cMf32__RecNameGetNext_007efcc8);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar6 = (undefined4 *)(*pcVar1)();
      return puVar6;
    }
    RaiseInternalException(iVar3,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x304);
    return (undefined4 *)0x0;
  }
  puVar6 = (undefined4 *)&local_8->field_0018;
  for (iVar3 = 0x86; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)puVar6 = 0;
  DVar4 = FUN_00751ba0((int *)local_8->field_0000,(undefined4 *)&local_8->field_0018,
                       (undefined4 *)0x0,0);
  if (DVar4 == 0xfffffffc) {
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)0x0;
  }
  g_currentExceptionFrame = local_4c.previous;
  *(undefined1 *)((int)&pcVar2[1].field_0000 + (int)(short)pcVar2->field_002E) = 0;
  return &pcVar2[1].field_0000;
}

