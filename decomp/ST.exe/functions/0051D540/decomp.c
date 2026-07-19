
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::TipProc */

void __thiscall HelpPanelTy::TipProc(HelpPanelTy *this,void *param_1,int param_2,char param_3)

{
  char cVar1;
  HelpPanelTy HVar2;
  code *pcVar3;
  HelpPanelTy *this_00;
  int iVar4;
  char *pcVar5;
  LPSTR pCVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  void *pvVar13;
  int *piVar14;
  int iVar15;
  InternalExceptionFrame local_78;
  int local_34 [7];
  int local_18;
  UINT local_14;
  HelpPanelTy *local_10;
  uint local_c;
  ushort *local_8;
  
  pvVar13 = param_1;
  iVar4 = param_2;
  local_10 = this;
  local_14 = thunk_FUN_00529d80(param_1,param_2);
  piVar14 = local_34;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar14 = 0;
    piVar14 = piVar14 + 1;
  }
  *(undefined1 *)piVar14 = 0;
  local_c = 0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar4 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,pvVar13,iVar4);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x973,0,iVar4,&DAT_007a4ccc
                               ,s_HelpPanelTy__TipProc_007c3d8c);
    if (iVar9 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x973);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3 != '\0') goto LAB_0051d689;
  HVar2 = local_10[0x1a1];
  if (((HVar2 == (HelpPanelTy)0x0) || (HVar2 == (HelpPanelTy)0x6)) || (HVar2 == (HelpPanelTy)0xa)) {
    local_10[0x1a2] = HVar2;
    *(undefined4 *)(local_10 + 0x1ab) = *(undefined4 *)(local_10 + 0x1a3);
  }
  else {
    local_10[0x1a2] = (HelpPanelTy)0x0;
    *(undefined4 *)(local_10 + 0x1ab) = 0;
  }
  local_10[0x1a1] = (HelpPanelTy)0x8;
  *(void **)(local_10 + 0x1a3) = param_1;
  *(int *)(local_10 + 0x1a7) = param_2;
  *(undefined2 *)(local_10 + 0x1af) = 0x14;
  *(undefined2 *)(local_10 + 0x1b1) = 5;
  if (*(int *)(local_10 + 0x178) != 0) {
    *(undefined4 *)(local_10 + 0x28) = 0x4202;
    *(undefined2 *)(local_10 + 0x2c) = 0;
    *(undefined2 *)(local_10 + 0x2e) = 2;
    *(int *)(local_10 + 0x30) = *(int *)(local_10 + 0x178);
    if (DAT_00802a30 != (undefined4 *)0x0) {
      (**(code **)*DAT_00802a30)(local_10 + 0x18);
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
    pcVar5 = (char *)FUN_006b0140(local_14,DAT_00807618);
    uVar10 = 0xffffffff;
    do {
      pcVar12 = pcVar5;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar12 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar12;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar5 = pcVar12 + -uVar10;
    pcVar12 = (char *)&DAT_0080f33a;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar12 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar12 = pcVar12 + 1;
    }
    ccFntTy::FormIndentText
              (*(ccFntTy **)(this_00 + 0x1e0),(char *)&DAT_0080f33a,&DAT_0080f33a,
               (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,0x19c,&DAT_007c2198,1);
    uVar10 = FUN_007113e0(*(void **)(this_00 + 0x1e0),&DAT_0080f33a);
    local_c = uVar10;
    CheckBkView(this_00,0,uVar10);
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,0,0,0x19c,uVar10 + 2
                    );
    ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1e0),&DAT_0080f33a,1,-1,
                   (DAT_0080874e != '\x03') - 1 & 5,-1,-1);
  }
  CheckBkView(this_00,uVar10,0x1e);
  iVar9 = 1;
  piVar14 = (int *)0x0;
  uVar11 = (uint)(DAT_0080734d != '\0');
  iVar4 = 1;
  pCVar6 = thunk_FUN_00571240(s_BUT_HLPTDAY_007c3da8,0);
  pCVar6 = FUN_006f2c00(pCVar6,iVar4,uVar11);
  local_8 = cMf32::RecGet(DAT_00806790,1,pCVar6,piVar14,iVar9);
  iVar4 = uVar10 + 10;
  thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0x50,iVar4,'\x01',(byte *)local_8);
  local_18 = *(int *)(local_8 + 2);
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x218),0,local_18 + 0x5f,iVar4,
                   0x13d - local_18,0xf);
  uVar11 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar15 = -1;
  iVar9 = 1;
  puVar7 = (uint *)FUN_006b0140(0x5c93,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar7,iVar9,iVar15,uVar11);
  local_34[0] = 0x50;
  local_34[2] = local_18;
  local_34[3] = *(int *)(local_8 + 4);
  local_34[1] = iVar4;
  Library::DKW::TBL::FUN_006ae1c0(*(uint **)(this_00 + 0x1d7),local_34);
  cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
  CheckBkView(this_00,uVar10 + 0x1e,10);
  local_c = (uVar10 / 10 + 1) * 10;
  iVar4 = (*(ushort *)(this_00 + 0x1af) - 0x118) + local_c;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 / (int)(uint)*(ushort *)(this_00 + 0x1b1) + 1;
  }
  CreateSlider(this_00,iVar4);
  Library::DKW::WGR::FUN_006b5110
            (*(int *)(this_00 + 0x68),0,0x21,*(ushort *)(this_00 + 0x1af) + 0x16,
             *(int *)(this_00 + 0x218),0,0,0,0x19c,0x117 - (uint)*(ushort *)(this_00 + 0x1af),0xff);
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
             *(uint *)(this_00 + 0x44));
  g_currentExceptionFrame = local_78.previous;
  return;
}

