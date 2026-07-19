
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawTitle */

void __thiscall HelpPanelTy::DrawTitle(HelpPanelTy *this,UINT param_1,int param_2,UINT param_3)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *pHVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  UINT UVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  int local_8;
  
  local_8 = 0x16;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pHVar3 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x3d3,0,iVar4,&DAT_007a4ccc
                               ,s_HelpPanelTy__DrawTitle_007c3b6c);
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x3d3);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_c->field_019C != 0) {
    FUN_006e56b0((void *)local_c->field_000C,local_c->field_019C);
  }
  *(undefined4 *)(pHVar3->field_01D7 + 0xc) = 0;
  pHVar3->field_01DB = 0;
  Library::DKW::WGR::FUN_006b55f0
            ((undefined4 *)pHVar3->field_0068,0,0x21,0x16,(int)pHVar3->field_01DC,0,0x21,0x16,0x1b8,
             0x118);
  iVar4 = local_8;
  ccFntTy::SetSurf(pHVar3->field_01E4,pHVar3->field_0068,0,0x21,local_8,0x19c,0x14);
  if (DAT_0080874e == '\x03') {
    iVar5 = 5;
  }
  else {
    iVar5 = (-(uint)(DAT_0080874e != '\x01') & 6) + 1;
  }
  iVar14 = -1;
  iVar13 = -1;
  puVar6 = (uint *)FUN_006b0140(param_1,DAT_00807618);
  ccFntTy::WrStr(pHVar3->field_01E4,puVar6,iVar13,iVar14,iVar5);
  local_8 = iVar4 + 0x14;
  if (param_2 != 0) {
    if (param_2 == 1) {
      UVar11 = 0x5604;
    }
    else if (param_2 == 2) {
      UVar11 = 0x5605;
    }
    else {
      UVar11 = 0x5606;
    }
    ccFntTy::SetSurf(pHVar3->field_01E0,pHVar3->field_0068,0,0x21,local_8,0x19c,0xf);
    uVar15 = 3;
    iVar13 = -1;
    iVar5 = -1;
    puVar6 = (uint *)FUN_006b0140(UVar11,DAT_00807618);
    ccFntTy::WrStr(pHVar3->field_01E0,puVar6,iVar5,iVar13,uVar15);
    local_8 = iVar4 + 0x23;
  }
  if (param_3 != 0) {
    ccFntTy::SetSurf(pHVar3->field_01E0,pHVar3->field_0068,0,0x21,local_8,0x19c,0xf);
    pcVar7 = (char *)FUN_006b0140(param_3,DAT_00807618);
    uVar9 = 0xffffffff;
    do {
      pcVar12 = pcVar7;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar12 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar12;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar7 = pcVar12 + -uVar9;
    pcVar12 = (char *)&DAT_0080f33a;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar12 = pcVar12 + 1;
    }
    for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
        puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
      *(undefined1 *)puVar6 = 0x20;
    }
    ccFntTy::WrStr(pHVar3->field_01E0,&DAT_0080f33a,-1,-1,(DAT_0080874e != '\x03') - 1 & 5);
    local_8 = local_8 + 0xf;
  }
  iVar4 = pHVar3->field_0218;
  uVar9 = *(uint *)(iVar4 + 0x14);
  if (uVar9 == 0) {
    uVar9 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
            *(int *)(iVar4 + 8);
  }
  puVar8 = (undefined4 *)FUN_006b4fa0(iVar4);
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar8 = 0xff;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

