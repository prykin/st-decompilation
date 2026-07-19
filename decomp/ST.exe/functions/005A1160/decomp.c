
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CheckUpdate */

void __thiscall FSGSTy::CheckUpdate(FSGSTy *this)

{
  char cVar1;
  MMsgTy *this_00;
  code *pcVar2;
  FSGSTy *pFVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_90.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x935,0,iVar4,
                                &DAT_007a4ccc,s_FSGSTy__CheckUpdate_007cc408);
    if (iVar11 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x935);
    return;
  }
  wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_UPDATES__0079c020,
            PTR_s_ST_INF_0079c024);
  pcVar5 = (char *)thunk_FUN_00649ff0(&DAT_0080f33a,&local_8,(undefined4 *)0x0,(int *)0x0);
  pFVar3 = local_c;
  if (pcVar5 == (char *)0x0) {
    DoLogon(local_c);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  uVar8 = 0xffffffff;
  do {
    pcVar10 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar10 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar10 + -uVar8;
  pcVar10 = (char *)&DAT_0080f126;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar10 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar10 = pcVar10 + 1;
  }
  iVar4 = local_c->field_1AC0;
  uVar8 = *(uint *)(iVar4 + 0x14);
  if (uVar8 == 0) {
    uVar8 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
            *(int *)(iVar4 + 8);
  }
  puVar6 = (undefined4 *)FUN_006b4fa0(iVar4);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar6 = 0xff;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  ccFntTy::SetSurf(*(ccFntTy **)&pFVar3->field_0x1a73,pFVar3->field_1AC0,0,0,0x16,0x1b8,0xf0);
  iVar14 = -1;
  iVar13 = -1;
  uVar12 = 2;
  iVar11 = -1;
  iVar4 = -2;
  puVar7 = (uint *)FUN_006b0140(0x25bd,DAT_00807618);
  ccFntTy::WrTxt(*(ccFntTy **)&pFVar3->field_0x1a73,puVar7,iVar4,iVar11,uVar12,iVar13,iVar14);
  FUN_006b35d0(DAT_008075a8,pFVar3->field_1ABC);
  puVar6 = local_2c;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_4c;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_4c[2] = *(undefined4 *)&pFVar3->field_0x8;
  local_2c[3] = 2;
  local_2c[4] = 0x6957;
  local_4c[3] = 2;
  local_4c[4] = 0x6956;
  this_00 = *(MMsgTy **)(*(int *)&pFVar3->field_0x1a5b + 0x2e6);
  local_2c[2] = local_4c[2];
  if (this_00 != (MMsgTy *)0x0) {
    MMsgTy::SetMessage(this_00,0x25b7,'\x01',local_2c,local_4c,(undefined4 *)0x0,local_8,0x25b8);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  (*(code *)**(undefined4 **)pFVar3)(local_2c);
  g_currentExceptionFrame = local_90.previous;
  return;
}

