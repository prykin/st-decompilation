
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::KeyRecGet */

longlong __thiscall cMf32::KeyRecGet(cMf32 *this,undefined1 param_1,char *param_2,ushort *param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  uint extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar8;
  ushort *puVar9;
  longlong lVar10;
  InternalExceptionFrame local_4c;
  cMf32 *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage(s_E__Ourlib_Mf32int_cpp_007efaa4,0x37e,0,iVar3,&DAT_007a4ccc,
                               s_cMf32__KeyRecGet_007efd28);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      lVar10 = (*pcVar2)();
      return lVar10;
    }
    RaiseInternalException(iVar3,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x380);
    return (ulonglong)extraout_EDX << 0x20;
  }
  if (param_3 == (ushort *)0x0) {
    param_3 = (ushort *)&local_8->field_0018;
  }
  puVar9 = param_3;
  for (iVar3 = 0x86; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar9[0] = 0;
    puVar9[1] = 0;
    puVar9 = puVar9 + 2;
  }
  *(undefined1 *)puVar9 = 0;
  *(undefined1 *)param_3 = param_1;
  iVar3 = -1;
  pcVar8 = param_2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~(ushort)iVar3 - 1;
  param_3[0xb] = uVar6;
  puVar9 = param_3 + 0xc;
  for (uVar7 = (uint)(int)(short)uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)puVar9 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    puVar9 = puVar9 + 2;
  }
  for (uVar7 = (int)(short)uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)puVar9 = *param_2;
    param_2 = param_2 + 1;
    puVar9 = (ushort *)((int)puVar9 + 1);
  }
  DVar4 = FUN_00751980((int *)local_8->field_0000,param_3,(undefined4 *)0x0,0);
  if (DVar4 == 0xfffffffc) {
    g_currentExceptionFrame = local_4c.previous;
    return ZEXT48(local_4c.previous) << 0x20;
  }
  g_currentExceptionFrame = local_4c.previous;
  uVar6 = param_3[0xb];
  *(undefined1 *)((short)uVar6 + 0x18 + (int)param_3) = 0;
  return CONCAT44((short)uVar6 + 0x18 + (int)param_3,param_3);
}

