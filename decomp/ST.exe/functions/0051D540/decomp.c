#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::TipProc */

void __thiscall HelpPanelTy::TipProc(HelpPanelTy *this,void *param_1,int param_2,char param_3)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  int iVar8;
  char *pcVar4_mg0;
  int uVar10;
  LPSTR pCVar4;
  char *pcVar4_mg2;
  int iVar9;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar11;
  int *piVar12;
  int iVar13;
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
  iVar8 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  this_00 = local_10;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x973,0,iVar8,"%s"
                               ,"HelpPanelTy::TipProc");
    if (iVar9 == 0) {
      RaiseInternalException(iVar8,0,"E:\\__titans\\Andrey\\helppan.cpp",0x973);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_3 != '\0') goto LAB_0051d689;
  HVar2 = local_10->field_01A1;
  if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
    local_10->field_01A2 = HVar2;
    local_10->field_01AB = local_10->field_01A3;
  }
  else {
    local_10->field_01A2 = 0;
    local_10->field_01AB = nullptr;
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
    if (g_cursorClass_00802A30 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)g_cursorClass_00802A30->field_0000)(&local_10->field_0x18);
    }
  }
  bVar5 = (byte)param_1;
  if (param_2 == 1) {
    DAT_00807352 = DAT_00807352 | 1 << (bVar5 & 0x1f);
LAB_0051d650:
    DAT_00807356 = DAT_00807356 | 1 << (bVar5 & 0x1f);
LAB_0051d665:
    DAT_0080735a = DAT_0080735a | 1 << (bVar5 & 0x1f);
  }
  else {
    if (param_2 == 2) goto LAB_0051d650;
    if (param_2 == 3) goto LAB_0051d665;
  }
  DAT_0080734e = DAT_0080734e | 1 << (bVar5 & 0x1f);
LAB_0051d689:
  DrawTitle(this_00,0x55f2,0,0);
  uVar10 = local_c;
  if (local_14 != 10000) {
    pcVar4_mg0 = LoadResourceString(local_14,g_hINSTANCE_00807618);
    uVar7 = 0xffffffff;
    do {
      pcVar9 = pcVar4_mg0;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar9 = pcVar4_mg0 + 1;
      cVar1 = *pcVar4_mg0;
      pcVar4_mg0 = pcVar9;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar9 + -uVar7;
    pcVar11 = (char *)&DAT_0080f33a;
    memmove(pcVar11, pcVar9, uVar7); /* compiler REP MOVS byte copy */
    ccFntTy::FormIndentText
              (this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a," ,.;:!?/\\()[]{}",
               (uint *)&DAT_007c21ec,0x19c,&DAT_007c2198,1);
    uVar10 = FUN_007113e0(this_00->field_01E0,&DAT_0080f33a);
    local_c = uVar10;
    CheckBkView(this_00,0,(ushort)uVar10);
    ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,0,0x19c,uVar10 + 2);
    ccFntTy::WrTxt(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,
                   -1,-1);
  }
  CheckBkView(this_00,uVar10,0x1e);
  iVar13 = 1;
  piVar12 = nullptr;
  uVar7 = (uint)(DAT_0080734d != '\0');
  iVar6 = 1;
  pCVar4 = thunk_FUN_00571240("BUT_HLPTDAY",0);
  pCVar4 = FUN_006f2c00(pCVar4,iVar6,uVar7);
  local_8 = cMf32::RecGet(g_cMf32_00806790,1,pCVar4,piVar12,iVar13);
  uVar7 = uVar10 + 10;
  DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x50,uVar7,'\x01',(byte *)local_8);
  local_18 = *(int *)(local_8 + 2);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,local_18 + 0x5f,uVar7,
                   0x13d - local_18,0xf);
  uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar13 = -1;
  iVar6 = 1;
  pcVar4_mg2 = LoadResourceString(0x5c93,g_hINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,pcVar4_mg2,iVar6,iVar13,uVar8);
  local_34[0] = 0x50;
  local_34[2] = local_18;
  local_34[3] = *(uint *)(local_8 + 4);
  local_34[1] = uVar7;
  Library::DKW::TBL::DArrayAppend(this_00->field_01D7,local_34);
  cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);
  CheckBkView(this_00,uVar10 + 0x1e,10);
  local_c = ((uint)uVar10 / 10 + 1) * 10;
  iVar6 = ((ushort)this_00->field_01AF - 0x118) + local_c;
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 / (int)(uint)(ushort)this_00->field_01B1 + 1;
  }
  CreateSlider(this_00,iVar6);
  Library::DKW::WGR::FUN_006b5110
            ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
             (BITMAPINFO *)this_00->field_0218,0,0,0,0x19c,0x117 - (uint)(ushort)this_00->field_01AF
             ,0xff);
  Library::DKW::DDX::FUN_006b3640
            ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
             this_00->field_0044);
  g_currentExceptionFrame = local_78.previous;
  return;
}

