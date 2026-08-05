#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CheckUpdate */

void __thiscall FSGSTy::CheckUpdate(FSGSTy *this)

{
  char cVar1;
  ushort *puVar2;
  MMsgTy *this_00;
  code *pcVar3;
  FSGSTy *this_01;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint *resourceString;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  STMessage *pSVar10;
  dword *pdVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  InternalExceptionFrame local_90;
  dword local_4c [8];
  STMessage local_2c;
  FSGSTy *local_c;
  int local_8;

  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_90.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x935,0,iVar4,
                                "%s","FSGSTy::CheckUpdate");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x935);
    return;
  }
  wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&DAT_00807680,PTR_s_UPDATES__0079c020,
            PTR_s_ST_INF_0079c024);
  pcVar5 = (char *)thunk_FUN_00649ff0(&DAT_0080f33a,&local_8,nullptr,nullptr);
  this_01 = local_c;
  if (pcVar5 == nullptr) {
    DoLogon(local_c);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  uVar7 = 0xffffffff;
  do {
    pcVar9 = pcVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar9 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar9;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar5 = pcVar9 + -uVar7;
  pcVar9 = (char *)&DAT_0080f126;
  memmove(pcVar9, pcVar5, uVar7); /* compiler REP MOVS byte copy */
  uVar8 = 0;
  puVar2 = local_c->field_1AC0;
  uVar7 = *(uint *)(puVar2 + 10);
  if (uVar7 == 0) {
    uVar7 = ((uint)puVar2[7] * *(int *)(puVar2 + 2) + 0x1f >> 3 & 0x1ffffffc) * *(int *)(puVar2 + 4);
  }
  puVar6 = (undefined4 *)FUN_006b4fa0((int *)puVar2);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar6 = 0xff;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  ccFntTy::SetSurf(this_01->field_1A73,(int)this_01->field_1AC0,0,0,0x16,0x1b8,0xf0);
  iVar14 = -1;
  iVar13 = -1;
  uVar7 = 2;
  iVar12 = -1;
  iVar4 = -2;
  resourceString = (uint *)LoadResourceString(0x25bd,g_module_00807618);
  ccFntTy::WrTxt(this_01->field_1A73,resourceString,iVar4,iVar12,uVar7,iVar13,iVar14);
  FUN_006b35d0((int *)g_ddxContext_008075A8,this_01->field_1ABC);
  pSVar10 = &local_2c;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    pSVar10->unknown_00 = 0;
    pSVar10 = (STMessage *)&pSVar10->unknown_04;
  }
  memset(local_4c, 0, 0x20); /* compiler bulk-zero initialization */
  local_4c[2] = this_01->field_0008;
  local_2c.unknown_0c = 2;
  local_2c.id = MESS_FSGSTY_6957;
  local_4c[3] = 2;
  local_4c[4] = 0x6956;
  this_00 = this_01->field_1A5B->field_02E6;
  local_2c.unknown_08 = local_4c[2];
  if (this_00 != nullptr) {
    MMsgTy::SetMessage(this_00,0x25b7,'\x01',&local_2c.unknown_00,local_4c,nullptr,local_8
                       ,0x25b8);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  this_01->GetMessage(&local_2c);
  g_currentExceptionFrame = local_90.previous;
  return;
}

