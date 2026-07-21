#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CheckUpdate */

void __thiscall FSGSTy::CheckUpdate(FSGSTy *this)

{
  char cVar1;
  AnonPointee_FSGSTy_1AC0 *pAVar2;
  MMsgTy *this_00;
  code *pcVar3;
  FSGSTy *pFVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  InternalExceptionFrame local_90;
  undefined4 local_4c [8];
  undefined4 local_2c [8];
  FSGSTy *local_c;
  int local_8;

  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_90.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x935,0,iVar5,
                                "%s","FSGSTy::CheckUpdate");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x935);
    return;
  }
  wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&DAT_00807680,PTR_s_UPDATES__0079c020,
            PTR_s_ST_INF_0079c024);
  pcVar6 = (char *)thunk_FUN_00649ff0(&DAT_0080f33a,&local_8,(undefined4 *)0x0,(int *)0x0);
  pFVar4 = local_c;
  if (pcVar6 == (char *)0x0) {
    DoLogon(local_c);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  uVar9 = 0xffffffff;
  do {
    pcVar11 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar11 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar11;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar6 = pcVar11 + -uVar9;
  pcVar11 = (char *)&DAT_0080f126;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar11 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar11 = pcVar11 + 1;
  }
  pAVar2 = local_c->field_1AC0;
  uVar9 = pAVar2->field_0014;
  if (uVar9 == 0) {
    uVar9 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
            pAVar2->field_0008;
  }
  puVar7 = (undefined4 *)FUN_006b4fa0((int)pAVar2);
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar7 = 0xff;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  ccFntTy::SetSurf(pFVar4->field_1A73,(int)pFVar4->field_1AC0,0,0,0x16,0x1b8,0xf0);
  iVar14 = -1;
  iVar13 = -1;
  uVar9 = 2;
  iVar12 = -1;
  iVar5 = -2;
  puVar8 = (uint *)LoadResourceString(0x25bd,HINSTANCE_00807618);
  ccFntTy::WrTxt(pFVar4->field_1A73,puVar8,iVar5,iVar12,uVar9,iVar13,iVar14);
  FUN_006b35d0(DAT_008075a8,pFVar4->field_1ABC);
  puVar7 = local_2c;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = local_4c;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_4c[2] = pFVar4->field_0008;
  local_2c[3] = 2;
  local_2c[4] = 0x6957;
  local_4c[3] = 2;
  local_4c[4] = 0x6956;
  this_00 = pFVar4->field_1A5B->field_02E6;
  local_2c[2] = local_4c[2];
  if (this_00 != (MMsgTy *)0x0) {
    MMsgTy::SetMessage(this_00,0x25b7,'\x01',local_2c,local_4c,(undefined4 *)0x0,local_8,0x25b8);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)pFVar4->field_0000->field_0000)(local_2c);
  g_currentExceptionFrame = local_90.previous;
  return;
}

