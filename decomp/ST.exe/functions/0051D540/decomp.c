#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::TipProc */

void __thiscall HelpPanelTy::TipProc(HelpPanelTy *this,void *param_1,int param_2,char param_3)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  code *pcVar3;
  HelpPanelTy *this_00;
  char *pcVar4;
  LPSTR pCVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  int *piVar13;
  int iVar14;
  InternalExceptionFrame local_78;
  uint local_34 [7];
  int local_18;
  UINT local_14;
  HelpPanelTy *local_10;
  uint local_c;
  ushort *local_8;

  local_10 = this;
  local_14 = thunk_FUN_00529d80((Global_sub_00529D80_param_1Enum)param_1,param_2);
  memset(local_34, 0, 0x19); /* compiler bulk-zero initialization */
  local_c = 0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar9 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  this_00 = local_10;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar14 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x973,0,iVar9,
                                "%s","HelpPanelTy::TipProc");
    if (iVar14 == 0) {
      RaiseInternalException(iVar9,0,"E:\\__titans\\Andrey\\helppan.cpp",0x973);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
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
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)g_cursorClass_00802A30->field_0000)(&local_10->field_0x18);
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
    pcVar4 = LoadResourceString(local_14,g_module_00807618);
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
              (this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a," ,.;:!?/\\()[]{}",
               (uint *)&DAT_007c21ec,0x19c,&DAT_007c2198,1);
    uVar10 = FUN_007113e0(this_00->field_01E0,&DAT_0080f33a);
    local_c = uVar10;
    CheckBkView(this_00,0,uVar10);
    ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,0,0x19c,uVar10 + 2);
    ccFntTy::WrTxt(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
  }
  CheckBkView(this_00,uVar10,0x1e);
  iVar14 = 1;
  piVar13 = (int *)0x0;
  uVar11 = (uint)(DAT_0080734d != '\0');
  iVar9 = 1;
  pCVar5 = thunk_FUN_00571240("BUT_HLPTDAY",0);
  pCVar5 = FUN_006f2c00(pCVar5,iVar9,uVar11);
  local_8 = cMf32::RecGet(DAT_00806790,1,pCVar5,piVar13,iVar14);
  uVar11 = uVar10 + 10;
  DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0x50,uVar11,'\x01',(byte *)local_8);
  local_18 = *(int *)(local_8 + 2);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,local_18 + 0x5f,uVar11,
                   0x13d - local_18,0xf);
  uVar6 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar14 = -1;
  iVar9 = 1;
  puVar7 = (uint *)LoadResourceString(0x5c93,g_module_00807618);
  ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar9,iVar14,uVar6);
  local_34[0] = 0x50;
  local_34[2] = local_18;
  local_34[3] = *(uint *)(local_8 + 4);
  local_34[1] = uVar11;
  Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01D7,local_34);
  cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
  CheckBkView(this_00,uVar10 + 0x1e,10);
  local_c = (uVar10 / 10 + 1) * 10;
  iVar9 = ((ushort)this_00->field_01AF - 0x118) + local_c;
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar9 / (int)(uint)(ushort)this_00->field_01B1 + 1;
  }
  CreateSlider(this_00,iVar9);
  Library::DKW::WGR::FUN_006b5110
            ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
             (int)this_00->field_0218,0,0,0,0x19c,0x117 - (uint)(ushort)this_00->field_01AF,0xff);
  Library::DKW::DDX::FUN_006b3640
            ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
             this_00->field_0044);
  g_currentExceptionFrame = local_78.previous;
  return;
}

