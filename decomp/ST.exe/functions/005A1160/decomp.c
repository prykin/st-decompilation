#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CheckUpdate */

void __thiscall FSGSTy::CheckUpdate(FSGSTy *this)

{
  char cVar1;
  ushort *puVar2;
  MMsgTy *this_00;
  FSGSTy *this_01;
  int iVar4;
  char *pcVar4;
  uint *puVar5;
  int iVar11;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  STMessage *pSVar9;
  dword *pdVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
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
    iVar11 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x935,0,iVar4,
                                "%s","FSGSTy::CheckUpdate");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x935);
    return;
  }
  /* ST_CALLSITE[005A11BD]: CALL dword ptr [0x0085bde8] */
  wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&CHAR_00h_00807680,PTR_s_UPDATES__0079c020,
            PTR_s_ST_INF_0079c024);
  pcVar4 = (char *)thunk_FUN_00649ff0(&DAT_0080f33a,&local_8,nullptr,nullptr);
  this_01 = local_c;
  if (pcVar4 == nullptr) {
    /* ST_CALLSITE[005A1337]: CALL 0x00402ced; direct=00402CED FSGSTy::DoLogon */
    DoLogon(local_c);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar8 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar4 = pcVar8 + -uVar6;
  pcVar8 = (char *)&DAT_0080f126;
  memmove(pcVar8, pcVar4, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  puVar2 = local_c->field_1AC0;
  uVar6 = *(uint *)(puVar2 + 10);
  if (uVar6 == 0) {
    uVar6 = ((uint)puVar2[7] * *(int *)(puVar2 + 2) + 0x1f >> 3 & 0x1ffffffc) * *(int *)(puVar2 + 4);
  }
  puVar5 = (undefined4 *)FUN_006b4fa0((int *)puVar2);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar5 = 0xff;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  ccFntTy::SetSurf(this_01->array_00BC[0xc].field_01F3,(int)this_01->field_1AC0,0,0,0x16,0x1b8,0xf0);
  iVar15 = -1;
  iVar14 = -1;
  uVar6 = 2;
  iVar13 = -1;
  iVar12 = -2;
  pcVar4 = LoadResourceString(0x25bd,g_hINSTANCE_00807618);
  ccFntTy::WrTxt(this_01->array_00BC[0xc].field_01F3,pcVar4,iVar12,iVar13,uVar6,iVar14,iVar15);
  FUN_006b35d0((int *)g_ddxContext_008075A8,this_01->field_1ABC);
  pSVar9 = &local_2c;
  for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
    pSVar9->unknown_00 = 0;
    pSVar9 = (STMessage *)&pSVar9->unknown_04;
  }
  memset(local_4c, 0, 0x20); /* compiler bulk-zero initialization */
  local_4c[2] = this_01->field_0008;
  local_2c.unknown_0c = 2;
  local_2c.id = MESS_FSGSTY_6957;
  local_4c[3] = 2;
  local_4c[4] = 0x6956;
  this_00 = (this_01->array_00BC[0xc].field_01DB)->field_02E6;
  local_2c.unknown_08 = local_4c[2];
  if (this_00 != nullptr) {
    /* ST_CALLSITE[005A12FF]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
    MMsgTy::SetMessage(this_00,0x25b7,'\x01',&local_2c.unknown_00,local_4c,nullptr,local_8
                       ,0x25b8);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  /* ST_CALLSITE[005A131F]: CALL dword ptr [EAX] */
  this_01->GetMessage(&local_2c);
  g_currentExceptionFrame = local_90.previous;
  return;
}

