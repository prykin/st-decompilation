#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldboat.cpp
   BldBoatPanelTy::InitBldBoatPanel */

void __thiscall BldBoatPanelTy::InitBldBoatPanel(BldBoatPanelTy *this)

{
  undefined1 *text;
  code *pcVar1;
  BldBoatPanelTy *this_00;
  byte bVar2;
  uint *puVar3;
  ccFntTy *pcVar4;
  LPSTR pCVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  bool bVar12;
  int *piVar13;
  int local_2e8 [11];
  undefined4 auStack_2bc [3];
  undefined4 auStack_2b0 [4];
  undefined4 auStack_2a0 [4];
  undefined4 auStack_290 [3];
  undefined4 auStack_284 [115];
  InternalExceptionFrame local_b8;
  undefined4 local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  BldBoatPanelTy *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;

  puVar11 = local_74;
  local_1c = this;
  for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  piVar13 = local_2e8;
  for (iVar8 = 0x8c; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar13 = 0;
    piVar13 = piVar13 + 1;
  }
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  iVar8 = Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_b8.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_bldboat_cpp_007c17b4,0x3f,0,iVar8,&DAT_007a4ccc,
                               s_BldBoatPanelTy__InitBldBoatPanel_007c17dc);
    if (iVar7 == 0) {
      RaiseInternalException(iVar8,0,s_E____titans_Andrey_bldboat_cpp_007c17b4,0x3f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar8 = 4;
  g_prodPanel_0080167C = (ProdPanelTy *)local_1c;
  puVar11 = &local_1c->field_027A;
  do {
    puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x30,5);
    *puVar11 = puVar3;
    puVar11 = puVar11 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  this_00->field_003C = this_00->field_003C + (g_nWidth_00806730 + -800) / 2;
  pcVar4 = (ccFntTy *)
           ccFntTy::operator(DAT_00806790,0x19d,(cMf32 *)DAT_00806790,s_HOLD_FONT_007c1844,0);
  this_00->field_028A = pcVar4;
  pcVar4->field_0058 = 1;
  pcVar4->field_005C = 0;
  iVar8 = 1;
  piVar13 = (int *)0x0;
  pCVar5 = thunk_FUN_00571240(s_BKG_BLDBOATW_007c1834,0);
  puVar6 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar5,piVar13,iVar8);
  this_00->field_0184 = puVar6;
  text = &this_00->field_0x6c;
  pCVar5 = thunk_FUN_00571240(s_BKG_BLDBOATBUT_007c1820,0);
  wsprintfA(text,&DAT_007c181c,pCVar5);
  puVar6 = cMf32::RecGet((cMf32 *)DAT_00806790,1,text,(int *)0x0,1);
  this_00->field_028E = puVar6;
  if (DAT_0080874d == 0xff) {
    iVar8 = 1;
  }
  else {
    iVar8 = DAT_0080874d + 1;
  }
  wsprintfA(text,s_BOATS__d_007c1810,iVar8);
  puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,text,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0188 = puVar6;
  puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,s_BOATS_D_007c1804,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_018C = puVar6;
  pCVar5 = thunk_FUN_00571240(s_BKG_BLDBOATBUT_007c1820,0);
  ProdPanelTy::InitProdPanel
            ((ProdPanelTy *)this_00,0x2723,0x3f,2,0xc1,0xc,0x85,99,0x68,0xc4,99,0x20,0x13,0x33,
             pCVar5);
  local_8 = local_8 & 0xffffff00;
  local_10 = (DAT_0080874e != '\x03') + 3;
  if (local_10 != 0) {
    local_18 = this_00->field_003C;
    local_14 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffea) + 0x5e;
    uVar9 = 0;
    local_c = this_00->field_005C;
    do {
      iVar8 = local_14;
      local_2e8[uVar9 * 0x1c] = uVar9 + 1;
      local_2e8[uVar9 * 0x1c + 1] = 0;
      local_2e8[uVar9 * 0x1c + 3] = iVar8 + uVar9 * 0x2c + local_18;
      bVar12 = local_c != 0;
      local_2e8[uVar9 * 0x1c + 5] = 0x2b;
      iVar8 = DAT_00806734;
      if (bVar12) {
        iVar8 = this_00->field_0044;
      }
      local_2e8[uVar9 * 0x1c + 4] = iVar8 + 0x3d;
      local_2e8[uVar9 * 0x1c + 6] = 0x1b;
      auStack_2a0[uVar9 * 0x1c] = 0;
      auStack_290[uVar9 * 0x1c] = 0x101;
      auStack_2bc[uVar9 * 0x1c] = 0x101;
      auStack_290[uVar9 * 0x1c + 1] = 3;
      auStack_2bc[uVar9 * 0x1c + 1] = 3;
      auStack_2bc[uVar9 * 0x1c + 2] = 0x4201;
      auStack_290[uVar9 * 0x1c + 2] = 0x4202;
      *(undefined2 *)(auStack_284 + uVar9 * 0x1c) = 0;
      *(undefined2 *)(auStack_2b0 + uVar9 * 0x1c) = 0;
      *(undefined2 *)((int)auStack_284 + (uVar9 * 0x38 + 1) * 2) = 2;
      *(undefined2 *)((int)auStack_2b0 + (uVar9 * 0x38 + 1) * 2) = 2;
      switch(uVar9) {
      case 0:
        uVar10 = 0x3a9f;
        break;
      case 1:
        uVar10 = 0x3aa0;
        break;
      case 2:
        uVar10 = 0x3aa2;
        break;
      case 3:
        uVar10 = 0x3aa1;
        break;
      default:
        goto switchD_004eed0b_default;
      }
      auStack_284[uVar9 * 0x1c + 1] = uVar10;
      auStack_2b0[uVar9 * 0x1c + 1] = uVar10;
switchD_004eed0b_default:
      bVar2 = (char)local_8 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT31(local_8._1_3_,bVar2);
      uVar9 = (uint)bVar2;
    } while ((int)uVar9 < local_10);
  }
  local_2c = local_2e8;
  local_28 = (byte)this_00->field_0278 + 1;
  local_64 = this_00->field_0008;
  local_60 = 2;
  local_40 = 2;
  local_74[0] = 1;
  local_74[1] = 1;
  local_5c = 0xb201;
  local_3c = 0xb202;
  local_24 = 1;
  local_20 = 1;
  local_44 = local_64;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this_00->field_000C + 8))(5,this_00 + 1,0,local_74,0);
  g_currentExceptionFrame = local_b8.previous;
  return;
}

