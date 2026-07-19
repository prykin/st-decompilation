
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintWeap */

void __thiscall CPanelTy::PaintWeap(CPanelTy *this,int param_1)

{
  char cVar1;
  ushort uVar2;
  Global_sub_005259B0_param_1Enum GVar3;
  code *pcVar4;
  CPanelTy *pCVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 unaff_ESI;
  char *pcVar13;
  undefined1 *puVar14;
  void *unaff_EDI;
  undefined4 *puVar15;
  char *pcVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  InternalExceptionFrame local_7c;
  CPanelTy *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  undefined4 *local_20;
  uint local_1c;
  undefined1 *local_18;
  int local_14;
  byte *local_10;
  uint local_c;
  char local_5;
  
  local_18 = &this->field_0B63;
  if (param_1 == 0) {
    local_20 = (undefined4 *)this->field_019C;
    local_18 = &this->field_0C51;
    local_28 = this->field_0058;
    local_2c = this->field_00B0;
  }
  else {
    local_20 = (undefined4 *)this->field_0184;
    local_28 = this->field_0040;
    local_2c = this->field_0098;
  }
  local_30 = 5;
  local_14 = 0x2f;
  local_1c = 0;
  if (param_1 == 0) {
    local_24 = &this->field_0x664;
  }
  else {
    local_24 = &this->field_0x31c;
  }
  local_c = local_c & 0xffffff00;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_38 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  puVar14 = local_18;
  pCVar5 = local_38;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x146,0,iVar6,&DAT_007a4ccc,
                               s_CPanelTy__PaintWeap_007c1ae8);
    if (iVar8 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x146);
    return;
  }
  puVar15 = (undefined4 *)&local_38->field_0x31c;
  for (iVar6 = 0x46; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  iVar6 = local_30;
  if (*(Global_sub_005259B0_param_1Enum *)(local_18 + 0x20) != 0) {
    uVar7 = thunk_FUN_005259b0(*(Global_sub_005259B0_param_1Enum *)(local_18 + 0x20),
                               *(ushort *)(local_18 + 0x24),'\0');
    local_10 = (byte *)FUN_0070b3a0(pCVar5->field_028E,uVar7);
    iVar6 = local_30;
    local_1c = -(uint)(puVar14[7] != '\x03') & 5;
    local_34 = local_1c + local_14;
    DibPut(local_20,local_30,local_34,'\x06',local_10);
    uVar2 = *(ushort *)(puVar14 + 0x28);
    if (uVar2 != 0xffff) {
      wsprintfA(&pCVar5->field_0x1e1,&DAT_007c1890,(uint)uVar2);
      ccFntTy::SetSurf(pCVar5->field_01B8,(int)local_20,0,iVar6 + 0x2f,
                       (*(int *)(local_10 + 8) + -0xc) / 2 + local_1c + local_14,0x11,0xc);
      ccFntTy::WrTxt(pCVar5->field_01B8,(uint *)&pCVar5->field_0x1e1,-3,-1,0,-1,-1);
      piVar12 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
      *piVar12 = iVar6 + 0x2f + local_28;
      piVar12[1] = local_34 + local_2c;
      piVar12[2] = 0x11;
      piVar12[3] = 0xc;
      iVar8 = thunk_FUN_00524fe0(*(Global_sub_00524FE0_param_1Enum *)(local_18 + 0x20));
      piVar12[6] = iVar8;
      local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
    }
    piVar12 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar12 = iVar6 + local_28;
    piVar12[1] = local_34 + local_2c;
    piVar12[2] = *(int *)(local_10 + 4);
    piVar12[3] = *(int *)(local_10 + 8);
    iVar8 = thunk_FUN_00524fe0(*(Global_sub_00524FE0_param_1Enum *)(local_18 + 0x20));
    piVar12[6] = iVar8;
    local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
  }
  puVar14 = local_18;
  GVar3 = *(Global_sub_005259B0_param_1Enum *)(local_18 + 0x1e);
  if (GVar3 == 0) {
    g_currentExceptionFrame = local_7c.previous;
    return;
  }
  if (GVar3 == 0xdd) {
    iVar8 = pCVar5->field_02D6;
    iVar11 = 0;
  }
  else {
    if (GVar3 != 0xde) {
      uVar7 = thunk_FUN_005259b0(GVar3,*(ushort *)(local_18 + 0x22),'\0');
      local_10 = (byte *)FUN_0070b3a0(pCVar5->field_028E,uVar7);
      goto LAB_004f27ff;
    }
    iVar8 = pCVar5->field_02D6;
    iVar11 = 1;
  }
  local_10 = (byte *)FUN_0070b3a0(iVar8,iVar11);
LAB_004f27ff:
  switch(*(undefined2 *)(puVar14 + 0x1e)) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    iVar11 = local_14 + 2;
    iVar8 = iVar6 + 1;
    break;
  default:
    if (*(short *)(puVar14 + 0x20) == 0) {
      local_1c = (0x24 - *(int *)(local_10 + 8)) / 2;
    }
    else {
      local_1c = ((-(uint)(puVar14[7] != '\x03') & 0xfffffffa) + 0x22) - *(int *)(local_10 + 8);
    }
    iVar11 = local_1c + local_14;
    iVar8 = iVar6;
  }
  DibPut(local_20,iVar8,iVar11,'\x06',local_10);
  if (*(short *)(puVar14 + 0x1e) == 0xff) {
    ccFntTy::SetSurf(pCVar5->field_01B8,(int)local_20,0,iVar6 + 1,local_14 + 2,
                     *(int *)(local_10 + 4),*(int *)(local_10 + 8));
    iVar19 = -1;
    iVar18 = -1;
    uVar17 = 1;
    iVar11 = -1;
    iVar8 = -2;
    puVar9 = (uint *)FUN_006b0140(0x2715,DAT_00807618);
    ccFntTy::WrTxt(pCVar5->field_01B8,puVar9,iVar8,iVar11,uVar17,iVar18,iVar19);
  }
  local_5 = '\x01';
  if (*(short *)(puVar14 + 0x26) == -1) {
    switch(*(undefined2 *)(puVar14 + 0x1e)) {
    case 0xa3:
    case 0xa8:
    case 0xb2:
    case 0xbe:
    case 0xff:
      local_5 = '\0';
      break;
    default:
      uVar7 = 0xffffffff;
      pcVar13 = &DAT_007c1b00;
      do {
        pcVar16 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar13 = pcVar16 + -uVar7;
      pcVar16 = &pCVar5->field_0x1e1;
      for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar7 = uVar7 & 3; puVar14 = local_18, iVar6 = local_30, uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar16 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar16 = pcVar16 + 1;
      }
    }
  }
  else {
    wsprintfA(&pCVar5->field_0x1e1,&DAT_007c1890,*(short *)(puVar14 + 0x26));
  }
  if (local_5 != '\0') {
    local_34 = 0;
    if ((0x9b < *(ushort *)(puVar14 + 0x1e)) && (*(ushort *)(puVar14 + 0x1e) < 0x9f)) {
      local_34 = 4;
    }
    ccFntTy::SetSurf(pCVar5->field_01B8,(int)local_20,0,iVar6 + 0x2f,
                     (*(int *)(local_10 + 8) + -0xc) / 2 + local_34 + local_1c + local_14,0x11,0xc);
    ccFntTy::WrTxt(pCVar5->field_01B8,(uint *)&pCVar5->field_0x1e1,-3,-1,0,-1,-1);
    piVar12 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar12 = iVar6 + 0x2f + local_28;
    piVar12[1] = (*(int *)(local_10 + 8) + -0xc) / 2 + local_34 + local_1c + local_14 + local_2c;
    piVar12[2] = 0x11;
    piVar12[3] = 0xc;
    iVar8 = thunk_FUN_00524fe0(*(Global_sub_00524FE0_param_1Enum *)(local_18 + 0x1e));
    piVar12[6] = iVar8;
    local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
    puVar14 = local_18;
  }
  switch(*(undefined2 *)(puVar14 + 0x1e)) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    piVar12 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar12 = iVar6 + 1 + local_28;
    piVar12[1] = local_14 + 2 + local_2c;
    break;
  default:
    piVar12 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar12 = iVar6 + local_28;
    piVar12[1] = local_1c + local_14 + local_2c;
  }
  piVar12[2] = *(int *)(local_10 + 4);
  piVar12[3] = *(int *)(local_10 + 8);
  iVar6 = thunk_FUN_00524fe0(*(Global_sub_00524FE0_param_1Enum *)(puVar14 + 0x1e));
  piVar12[6] = iVar6;
  g_currentExceptionFrame = local_7c.previous;
  return;
}

