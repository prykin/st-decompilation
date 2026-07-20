
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawTitle */

void __thiscall HelpPanelTy::DrawTitle(HelpPanelTy *this,UINT param_1,int param_2,UINT param_3)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *pHVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  UINT uID;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  uint local_8;
  
  local_8 = 0x16;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pHVar3 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x3d3,0,iVar4,
                                &DAT_007a4ccc,s_HelpPanelTy__DrawTitle_007c3b6c);
    if (iVar11 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x3d3);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_c->field_019C != 0) {
    StartSystemTy::sub_006E56B0(local_c->field_000C,local_c->field_019C);
  }
  *(undefined4 *)(pHVar3->field_01D7 + 0xc) = 0;
  pHVar3->field_01DB = 0;
  Library::DKW::WGR::FUN_006b55f0
            ((undefined4 *)pHVar3->field_0068,0,0x21,0x16,(byte *)pHVar3->field_01DC,0,0x21,0x16,
             0x1b8,0x118);
  uVar8 = local_8;
  ccFntTy::SetSurf(pHVar3->field_01E4,pHVar3->field_0068,0,0x21,local_8,0x19c,0x14);
  if (DAT_0080874e == '\x03') {
    iVar4 = 5;
  }
  else {
    iVar4 = (-(uint)(DAT_0080874e != '\x01') & 6) + 1;
  }
  iVar12 = -1;
  iVar11 = -1;
  puVar5 = (uint *)FUN_006b0140(param_1,HINSTANCE_00807618);
  ccFntTy::WrStr(pHVar3->field_01E4,puVar5,iVar11,iVar12,iVar4);
  local_8 = uVar8 + 0x14;
  if (param_2 != 0) {
    if (param_2 == 1) {
      uID = 0x5604;
    }
    else if (param_2 == 2) {
      uID = 0x5605;
    }
    else {
      uID = 0x5606;
    }
    ccFntTy::SetSurf(pHVar3->field_01E0,pHVar3->field_0068,0,0x21,local_8,0x19c,0xf);
    uVar13 = 3;
    iVar11 = -1;
    iVar4 = -1;
    puVar5 = (uint *)FUN_006b0140(uID,HINSTANCE_00807618);
    ccFntTy::WrStr(pHVar3->field_01E0,puVar5,iVar4,iVar11,uVar13);
    local_8 = uVar8 + 0x23;
  }
  if (param_3 != 0) {
    ccFntTy::SetSurf(pHVar3->field_01E0,pHVar3->field_0068,0,0x21,local_8,0x19c,0xf);
    pcVar6 = (char *)FUN_006b0140(param_3,HINSTANCE_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar10 = pcVar6;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar10 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar6 = pcVar10 + -uVar8;
    pcVar10 = (char *)&DAT_0080f33a;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar10 = pcVar10 + 1;
    }
    for (puVar5 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar5 != (uint *)0x0;
        puVar5 = Library::MSVCRT::FUN_0072e560(puVar5,'\n')) {
      *(undefined1 *)puVar5 = 0x20;
    }
    ccFntTy::WrStr(pHVar3->field_01E0,&DAT_0080f33a,-1,-1,(DAT_0080874e != '\x03') - 1 & 5);
    local_8 = local_8 + 0xf;
  }
  iVar4 = pHVar3->field_0218;
  uVar8 = *(uint *)(iVar4 + 0x14);
  if (uVar8 == 0) {
    uVar8 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
            *(int *)(iVar4 + 8);
  }
  puVar7 = (undefined4 *)FUN_006b4fa0(iVar4);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar7 = 0xff;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

