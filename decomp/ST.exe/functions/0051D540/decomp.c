
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::TipProc */

void __thiscall HelpPanelTy::TipProc(HelpPanelTy *this,void *param_1,int param_2,char param_3)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  char *pcVar4;
  LPSTR pCVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  void *pvVar13;
  int *piVar14;
  InternalExceptionFrame local_78;
  uint local_34 [7];
  int local_18;
  UINT local_14;
  HelpPanelTy *local_10;
  uint local_c;
  ushort *local_8;
  
  pvVar13 = param_1;
  iVar3 = param_2;
  local_10 = this;
  local_14 = thunk_FUN_00529d80((Global_sub_00529D80_param_1Enum)param_1,param_2);
  puVar7 = local_34;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)puVar7 = 0;
  local_c = 0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,pvVar13,iVar3);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x973,0,iVar3,&DAT_007a4ccc
                               ,s_HelpPanelTy__TipProc_007c3d8c);
    if (iVar9 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x973);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 != '\0') goto LAB_0051d689;
  cVar1 = local_10->field_01A1;
  if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\n')) {
    local_10->field_01A2 = cVar1;
    local_10->field_01AB = local_10->field_01A3;
  }
  else {
    local_10->field_01A2 = 0;
    local_10->field_01AB = 0;
  }
  local_10->field_01A1 = 8;
  local_10->field_01A3 = param_1;
  local_10->field_01A7 = param_2;
  local_10->field_01AF = 0x14;
  local_10->field_01B1 = 5;
  if (local_10->field_0178 != 0) {
    local_10->field_0028 = 0x4202;
    *(undefined2 *)&local_10->field_0x2c = 0;
    local_10->field_002E = 2;
    *(undefined4 *)&local_10->field_0x30 = local_10->field_0178;
    if (DAT_00802a30 != (undefined4 *)0x0) {
      (**(code **)*DAT_00802a30)(&local_10->field_0x18);
    }
  }
  bVar8 = (byte)param_1;
  if (param_2 == 1) {
    DAT_00807352 = DAT_00807352 | 1 << (bVar8 & 0x1f);
LAB_0051d650:
    DAT_00807356 = DAT_00807356 | 1 << (bVar8 & 0x1f);
LAB_0051d665:
    DAT_0080735a = DAT_0080735a | 1 << (bVar8 & 0x1f);
  }
  else {
    if (param_2 == 2) goto LAB_0051d650;
    if (param_2 == 3) goto LAB_0051d665;
  }
  DAT_0080734e = DAT_0080734e | 1 << (bVar8 & 0x1f);
LAB_0051d689:
  DrawTitle(this_00,0x55f2,0,0);
  uVar10 = local_c;
  if (local_14 != 10000) {
    pcVar4 = (char *)FUN_006b0140(local_14,HINSTANCE_00807618);
    uVar10 = 0xffffffff;
    do {
      pcVar12 = pcVar4;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar12 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar12;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar4 = pcVar12 + -uVar10;
    pcVar12 = (char *)&DAT_0080f33a;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar12 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar12 = pcVar12 + 1;
    }
    ccFntTy::FormIndentText
              (this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a,s________________007c21d8,
               (uint *)&DAT_007c21ec,0x19c,&DAT_007c2198,1);
    uVar10 = FUN_007113e0(this_00->field_01E0,&DAT_0080f33a);
    local_c = uVar10;
    CheckBkView(this_00,0,uVar10);
    ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,0,0,0x19c,uVar10 + 2);
    ccFntTy::WrTxt(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
  }
  CheckBkView(this_00,uVar10,0x1e);
  iVar9 = 1;
  piVar14 = (int *)0x0;
  uVar11 = (uint)(DAT_0080734d != '\0');
  iVar3 = 1;
  pCVar5 = thunk_FUN_00571240(s_BUT_HLPTDAY_007c3da8,0);
  pCVar5 = FUN_006f2c00(pCVar5,iVar3,uVar11);
  local_8 = cMf32::RecGet(DAT_00806790,1,pCVar5,piVar14,iVar9);
  uVar11 = uVar10 + 10;
  DibPut((undefined4 *)this_00->field_0218,0x50,uVar11,'\x01',(byte *)local_8);
  local_18 = *(int *)(local_8 + 2);
  ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0218,0,local_18 + 0x5f,uVar11,0x13d - local_18
                   ,0xf);
  uVar6 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar9 = -1;
  iVar3 = 1;
  puVar7 = (uint *)FUN_006b0140(0x5c93,HINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar3,iVar9,uVar6);
  local_34[0] = 0x50;
  local_34[2] = local_18;
  local_34[3] = *(uint *)(local_8 + 4);
  local_34[1] = uVar11;
  Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,local_34);
  cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
  CheckBkView(this_00,uVar10 + 0x1e,10);
  local_c = (uVar10 / 10 + 1) * 10;
  iVar3 = ((ushort)this_00->field_01AF - 0x118) + local_c;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 / (int)(uint)(ushort)this_00->field_01B1 + 1;
  }
  CreateSlider(this_00,iVar3);
  Library::DKW::WGR::FUN_006b5110
            (this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,this_00->field_0218,0,0,0
             ,0x19c,0x117 - (uint)(ushort)this_00->field_01AF,0xff);
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,this_00->field_0044);
  g_currentExceptionFrame = local_78.previous;
  return;
}

