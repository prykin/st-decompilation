
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::TipProc */

void __thiscall HelpPanelTy::TipProc(HelpPanelTy *this,void *param_1,int param_2,char param_3)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  code *pcVar3;
  HelpPanelTy *this_00;
  int iVar4;
  char *pcVar5;
  LPSTR pCVar6;
  uint uVar7;
  uint *puVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  void *pvVar14;
  int *piVar15;
  InternalExceptionFrame local_78;
  uint local_34 [7];
  int local_18;
  UINT local_14;
  HelpPanelTy *local_10;
  uint local_c;
  ushort *local_8;
  
  pvVar14 = param_1;
  iVar4 = param_2;
  local_10 = this;
  local_14 = thunk_FUN_00529d80((Global_sub_00529D80_param_1Enum)param_1,param_2);
  puVar8 = local_34;
  for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)puVar8 = 0;
  local_c = 0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar4 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,pvVar14,iVar4);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x973,0,iVar4,
                                &DAT_007a4ccc,s_HelpPanelTy__TipProc_007c3d8c);
    if (iVar10 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x973);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3 != '\0') goto LAB_0051d689;
  HVar2 = local_10->field_01A1;
  if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == (CASE_8|CASE_2))) {
    local_10->field_01A2 = HVar2;
    local_10->field_01AB = local_10->field_01A3;
  }
  else {
    local_10->field_01A2 = 0;
    local_10->field_01AB = 0;
  }
  local_10->field_01A1 = CASE_8;
  local_10->field_01A3 = param_1;
  local_10->field_01A7 = param_2;
  local_10->field_01AF = 0x14;
  local_10->field_01B1 = 5;
  if (local_10->field_0178 != 0) {
    local_10->field_0028 = 0x4202;
    *(undefined2 *)&local_10->field_0x2c = 0;
    local_10->field_002E = 2;
    *(undefined4 *)&local_10->field_0x30 = local_10->field_0178;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      (*(code *)**(undefined4 **)PTR_00802a30)(&local_10->field_0x18);
    }
  }
  bVar9 = (byte)param_1;
  if (param_2 == 1) {
    DAT_00807352 = DAT_00807352 | 1 << (bVar9 & 0x1f);
LAB_0051d650:
    DAT_00807356 = DAT_00807356 | 1 << (bVar9 & 0x1f);
LAB_0051d665:
    DAT_0080735a = DAT_0080735a | 1 << (bVar9 & 0x1f);
  }
  else {
    if (param_2 == 2) goto LAB_0051d650;
    if (param_2 == 3) goto LAB_0051d665;
  }
  DAT_0080734e = DAT_0080734e | 1 << (bVar9 & 0x1f);
LAB_0051d689:
  DrawTitle(this_00,0x55f2,0,0);
  uVar11 = local_c;
  if (local_14 != 10000) {
    pcVar5 = (char *)FUN_006b0140(local_14,HINSTANCE_00807618);
    uVar11 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    pcVar5 = pcVar13 + -uVar11;
    pcVar13 = (char *)&DAT_0080f33a;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    ccFntTy::FormIndentText
              (this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a,s________________007c21d8,
               (uint *)&DAT_007c21ec,0x19c,&DAT_007c2198,1);
    uVar11 = FUN_007113e0(this_00->field_01E0,&DAT_0080f33a);
    local_c = uVar11;
    CheckBkView(this_00,0,uVar11);
    ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,0,0x19c,uVar11 + 2);
    ccFntTy::WrTxt(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
  }
  CheckBkView(this_00,uVar11,0x1e);
  iVar10 = 1;
  piVar15 = (int *)0x0;
  uVar12 = (uint)(DAT_0080734d != '\0');
  iVar4 = 1;
  pCVar6 = thunk_FUN_00571240(s_BUT_HLPTDAY_007c3da8,0);
  pCVar6 = FUN_006f2c00(pCVar6,iVar4,uVar12);
  local_8 = cMf32::RecGet(DAT_00806790,1,pCVar6,piVar15,iVar10);
  uVar12 = uVar11 + 10;
  DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0218,0x50,uVar12,'\x01',(byte *)local_8);
  local_18 = *(int *)(local_8 + 2);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,local_18 + 0x5f,uVar12,
                   0x13d - local_18,0xf);
  uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar10 = -1;
  iVar4 = 1;
  puVar8 = (uint *)FUN_006b0140(0x5c93,HINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,puVar8,iVar4,iVar10,uVar7);
  local_34[0] = 0x50;
  local_34[2] = local_18;
  local_34[3] = *(uint *)(local_8 + 4);
  local_34[1] = uVar12;
  Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,local_34);
  cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
  CheckBkView(this_00,uVar11 + 0x1e,10);
  local_c = (uVar11 / 10 + 1) * 10;
  iVar4 = ((ushort)this_00->field_01AF - 0x118) + local_c;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 / (int)(uint)(ushort)this_00->field_01B1 + 1;
  }
  CreateSlider(this_00,iVar4);
  Library::DKW::WGR::FUN_006b5110
            ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
             (int)this_00->field_0218,0,0,0,0x19c,0x117 - (uint)(ushort)this_00->field_01AF,0xff);
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,this_00->field_0044);
  g_currentExceptionFrame = local_78.previous;
  return;
}

