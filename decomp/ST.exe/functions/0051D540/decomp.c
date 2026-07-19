
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
  uint *puVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  void *pvVar12;
  int *piVar13;
  int iVar14;
  InternalExceptionFrame local_78;
  int local_34 [7];
  int local_18;
  UINT local_14;
  HelpPanelTy *local_10;
  uint local_c;
  ushort *local_8;
  
  pvVar12 = param_1;
  iVar3 = param_2;
  local_10 = this;
  local_14 = thunk_FUN_00529d80((Global_sub_00529D80_param_1Enum)param_1,param_2);
  piVar13 = local_34;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar13 = 0;
    piVar13 = piVar13 + 1;
  }
  *(undefined1 *)piVar13 = 0;
  local_c = 0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,pvVar12,iVar3);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x973,0,iVar3,&DAT_007a4ccc
                               ,s_HelpPanelTy__TipProc_007c3d8c);
    if (iVar8 == 0) {
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
    *(undefined4 *)&local_10->field_0x1ab = local_10->field_01A3;
  }
  else {
    local_10->field_01A2 = 0;
    *(undefined4 *)&local_10->field_0x1ab = 0;
  }
  local_10->field_01A1 = 8;
  local_10->field_01A3 = param_1;
  local_10->field_01A7 = param_2;
  *(undefined2 *)&local_10->field_0x1af = 0x14;
  *(undefined2 *)&local_10->field_0x1b1 = 5;
  if (*(int *)&local_10->field_0x178 != 0) {
    local_10->field_0028 = 0x4202;
    *(undefined2 *)&local_10->field_0x2c = 0;
    local_10->field_002E = 2;
    *(int *)&local_10->field_0x30 = *(int *)&local_10->field_0x178;
    if (DAT_00802a30 != (undefined4 *)0x0) {
      (**(code **)*DAT_00802a30)(&local_10->field_0x18);
    }
  }
  bVar7 = (byte)param_1;
  if (param_2 == 1) {
    DAT_00807352 = DAT_00807352 | 1 << (bVar7 & 0x1f);
LAB_0051d650:
    DAT_00807356 = DAT_00807356 | 1 << (bVar7 & 0x1f);
LAB_0051d665:
    DAT_0080735a = DAT_0080735a | 1 << (bVar7 & 0x1f);
  }
  else {
    if (param_2 == 2) goto LAB_0051d650;
    if (param_2 == 3) goto LAB_0051d665;
  }
  DAT_0080734e = DAT_0080734e | 1 << (bVar7 & 0x1f);
LAB_0051d689:
  DrawTitle(this_00,0x55f2,0,0);
  uVar9 = local_c;
  if (local_14 != 10000) {
    pcVar4 = (char *)FUN_006b0140(local_14,DAT_00807618);
    uVar9 = 0xffffffff;
    do {
      pcVar11 = pcVar4;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar11 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar11;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar4 = pcVar11 + -uVar9;
    pcVar11 = (char *)&DAT_0080f33a;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar11 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar11 = pcVar11 + 1;
    }
    ccFntTy::FormIndentText
              (*(ccFntTy **)&this_00->field_0x1e0,(char *)&DAT_0080f33a,&DAT_0080f33a,
               (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,0x19c,&DAT_007c2198,1);
    uVar9 = FUN_007113e0(*(void **)&this_00->field_0x1e0,&DAT_0080f33a);
    local_c = uVar9;
    CheckBkView(this_00,0,uVar9);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,0,0,0x19c,uVar9 + 2);
    ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1e0,&DAT_0080f33a,1,-1,
                   (DAT_0080874e != '\x03') - 1 & 5,-1,-1);
  }
  CheckBkView(this_00,uVar9,0x1e);
  iVar8 = 1;
  piVar13 = (int *)0x0;
  uVar10 = (uint)(DAT_0080734d != '\0');
  iVar3 = 1;
  pCVar5 = thunk_FUN_00571240(s_BUT_HLPTDAY_007c3da8,0);
  pCVar5 = FUN_006f2c00(pCVar5,iVar3,uVar10);
  local_8 = cMf32::RecGet(DAT_00806790,1,pCVar5,piVar13,iVar8);
  iVar3 = uVar9 + 10;
  thunk_FUN_00540760((undefined4 *)this_00->field_0218,0x50,iVar3,'\x01',(byte *)local_8);
  local_18 = *(int *)(local_8 + 2);
  ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1e0,this_00->field_0218,0,local_18 + 0x5f,iVar3,
                   0x13d - local_18,0xf);
  uVar10 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar14 = -1;
  iVar8 = 1;
  puVar6 = (uint *)FUN_006b0140(0x5c93,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1e0,puVar6,iVar8,iVar14,uVar10);
  local_34[0] = 0x50;
  local_34[2] = local_18;
  local_34[3] = *(int *)(local_8 + 4);
  local_34[1] = iVar3;
  Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00->field_0x1d7,local_34);
  cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
  CheckBkView(this_00,uVar9 + 0x1e,10);
  local_c = (uVar9 / 10 + 1) * 10;
  iVar3 = (*(ushort *)&this_00->field_0x1af - 0x118) + local_c;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 / (int)(uint)*(ushort *)&this_00->field_0x1b1 + 1;
  }
  CreateSlider(this_00,iVar3);
  Library::DKW::WGR::FUN_006b5110
            (*(int *)&this_00->field_0x68,0,0x21,*(ushort *)&this_00->field_0x1af + 0x16,
             this_00->field_0218,0,0,0,0x19c,0x117 - (uint)*(ushort *)&this_00->field_0x1af,0xff);
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,*(uint *)&this_00->field_0x60,0xffffffff,*(uint *)&this_00->field_0x3c,
             *(uint *)&this_00->field_0x44);
  g_currentExceptionFrame = local_78.previous;
  return;
}

