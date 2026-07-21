
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawTitle */

void __thiscall HelpPanelTy::DrawTitle(HelpPanelTy *this,UINT param_1,int param_2,UINT param_3)

{
  char cVar1;
  AnonPointee_HelpPanelTy_0218 *pAVar2;
  code *pcVar3;
  HelpPanelTy *pHVar4;
  int iVar5;
  uint *extraout_EAX;
  uint *extraout_EAX_00;
  char *extraout_EAX_01;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  char *pcVar10;
  void *unaff_EDI;
  UINT resourceId;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  uint local_8;
  
  local_8 = 0x16;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pHVar4 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x3d3,0,iVar5,
                                &DAT_007a4ccc,s_HelpPanelTy__DrawTitle_007c3b6c);
    if (iVar12 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x3d3);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_c->field_019C != 0) {
    StartSystemTy::sub_006E56B0(local_c->field_000C,local_c->field_019C);
  }
  *(undefined4 *)(pHVar4->field_01D7 + 0xc) = 0;
  pHVar4->field_01DB = 0;
  Library::DKW::WGR::FUN_006b55f0
            ((AnonShape_006B84D0_7C7D97C6 *)pHVar4->field_0068,0,0x21,0x16,
             (byte *)pHVar4->field_01DC,0,0x21,0x16,0x1b8,0x118);
  uVar8 = local_8;
  ccFntTy::SetSurf(pHVar4->field_01E4,(int)pHVar4->field_0068,0,0x21,local_8,0x19c,0x14);
  if (DAT_0080874e == '\x03') {
    iVar5 = 5;
  }
  else {
    iVar5 = (-(uint)(DAT_0080874e != '\x01') & 6) + 1;
  }
  iVar13 = -1;
  iVar12 = -1;
  LoadResourceString(param_1,HINSTANCE_00807618);
  ccFntTy::WrStr(pHVar4->field_01E4,extraout_EAX,iVar12,iVar13,iVar5);
  local_8 = uVar8 + 0x14;
  if (param_2 != 0) {
    if (param_2 == 1) {
      resourceId = 0x5604;
    }
    else if (param_2 == 2) {
      resourceId = 0x5605;
    }
    else {
      resourceId = 0x5606;
    }
    ccFntTy::SetSurf(pHVar4->field_01E0,(int)pHVar4->field_0068,0,0x21,local_8,0x19c,0xf);
    uVar14 = 3;
    iVar12 = -1;
    iVar5 = -1;
    LoadResourceString(resourceId,HINSTANCE_00807618);
    ccFntTy::WrStr(pHVar4->field_01E0,extraout_EAX_00,iVar5,iVar12,uVar14);
    local_8 = uVar8 + 0x23;
  }
  if (param_3 != 0) {
    ccFntTy::SetSurf(pHVar4->field_01E0,(int)pHVar4->field_0068,0,0x21,local_8,0x19c,0xf);
    LoadResourceString(param_3,HINSTANCE_00807618);
    uVar8 = 0xffffffff;
    pcVar10 = extraout_EAX_01;
    do {
      pcVar11 = pcVar10;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar10 = pcVar11 + -uVar8;
    pcVar11 = (char *)&DAT_0080f33a;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
        puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
      *(undefined1 *)puVar6 = 0x20;
    }
    ccFntTy::WrStr(pHVar4->field_01E0,&DAT_0080f33a,-1,-1,(DAT_0080874e != '\x03') - 1 & 5);
    local_8 = local_8 + 0xf;
  }
  pAVar2 = pHVar4->field_0218;
  uVar8 = pAVar2->field_0014;
  if (uVar8 == 0) {
    uVar8 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
            pAVar2->field_0008;
  }
  puVar7 = (undefined4 *)FUN_006b4fa0((int)pAVar2);
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

