#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\research.cpp
   ResearchPanelTy::InitResearchPanel */

void __thiscall ResearchPanelTy::InitResearchPanel(ResearchPanelTy *this)

{
  code *pcVar1;
  ResearchPanelTy *this_00;
  int iVar2;
  uint *puVar3;
  LPSTR text;
  ushort *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 local_1fc [84];
  InternalExceptionFrame local_ac;
  undefined4 local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ResearchPanelTy *local_10;
  int local_c;
  int local_8;

  puVar5 = local_68;
  local_10 = this;
  for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_1fc;
  for (iVar6 = 0x54; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ac;
  iVar6 = Library::MSVCRT::__setjmp3(local_ac.jumpBuffer,0);
  this_00 = local_10;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_ac.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Andrey_research_cpp_007c76c8,0x39,0,iVar6,&DAT_007a4ccc
                               ,s_ResearchPanelTy__InitResearchPan_007c76f0);
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,s_E____titans_Andrey_research_cpp_007c76c8,0x39);
    return;
  }
  iVar6 = 2;
  g_prodPanel_008016E8 = (ProdPanelTy *)local_10;
  puVar5 = &local_10->field_027A;
  do {
    puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x28,0x30,10);
    *puVar5 = puVar3;
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 1;
  piVar10 = (int *)0x0;
  this_00->field_003C = this_00->field_003C + (g_nWidth_00806730 + -800) / 2;
  text = thunk_FUN_00571240(s_BKG_RESEARCHW_007c7724,0);
  puVar4 = cMf32::RecGet(DAT_00806790,1,text,piVar10,iVar6);
  this_00->field_0184 = puVar4;
  puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0188 = puVar4;
  puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,&DAT_007c38c8,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_018C = puVar4;
  ProdPanelTy::InitProdPanel
            ((ProdPanelTy *)this_00,0x2722,0x3f,2,0xc1,0xc,0x85,0x4f,0x68,0xc4,0x4f,0x20,0x13,0x33,
             s_UPG_00_007c771c);
  if (DAT_0080874e != '\x03') {
    local_c = this_00->field_005C;
    puVar5 = local_1fc + 1;
    iVar8 = this_00->field_003C + 0x70;
    local_8 = 2;
    iVar6 = 0;
    do {
      iVar2 = local_c;
      puVar5[-1] = iVar6 + 1;
      *puVar5 = 0;
      puVar5[2] = iVar8;
      puVar5[4] = 0x2e;
      iVar9 = DAT_00806734;
      if (iVar2 != 0) {
        iVar9 = this_00->field_0044;
      }
      puVar5[3] = iVar9 + 0x34;
      puVar5[5] = 0x10;
      puVar5[0x11] = 0;
      puVar5[0x15] = 0x101;
      puVar5[10] = 0x101;
      puVar5[0x16] = 3;
      puVar5[0xb] = 3;
      puVar5[0xc] = 0x4201;
      puVar5[0x17] = 0x4202;
      *(undefined2 *)(puVar5 + 0x18) = 0;
      *(undefined2 *)(puVar5 + 0xd) = 0;
      *(undefined2 *)((int)puVar5 + 0x62) = 2;
      *(undefined2 *)((int)puVar5 + 0x36) = 2;
      if (iVar6 == 0) {
        uVar7 = 0x3aab;
LAB_0053c30d:
        puVar5[0x19] = uVar7;
        puVar5[0xe] = uVar7;
      }
      else if (iVar6 == 1) {
        uVar7 = 0x3aac;
        goto LAB_0053c30d;
      }
      iVar8 = iVar8 + 0x31;
      puVar5 = puVar5 + 0x1c;
      local_8 = local_8 + -1;
      iVar6 = iVar6 + 1;
    } while (local_8 != 0);
    local_20 = local_1fc;
    local_58 = this_00->field_0008;
    local_1c = (byte)this_00->field_0278 + 1;
    local_68[0] = 1;
    local_68[1] = 1;
    local_18 = 1;
    local_14 = 1;
    local_54 = 2;
    local_50 = 0xb207;
    local_34 = 2;
    local_30 = 0xc0b4;
    local_38 = local_58;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this_00->field_000C + 8))(5,&this_00[1].field_0x4,0,local_68,0);
  }
  g_currentExceptionFrame = local_ac.previous;
  return;
}

