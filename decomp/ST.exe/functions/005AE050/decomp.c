#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::ShowDescription */

void __thiscall ChooseMapTy::ShowDescription(ChooseMapTy *this,uint param_1)

{
  char cVar1;
  ChooseMapTy_field_1A5FState CVar2;
  AnonShape_006B5B10_E0D06CF1 *pAVar3;
  ccFntTy *pcVar4;
  StartSystemTy *pSVar5;
  code *pcVar6;
  int iVar7;
  ushort *puVar8;
  uint *puVar9;
  char *pcVar10;
  cMf32 *pcVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  cMf32 *this_00;
  cMf32 *this_01;
  int iVar15;
  ChooseMapTy *pCVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  undefined4 *puVar20;
  short *psVar21;
  InternalExceptionFrame local_100;
  InternalExceptionFrame local_bc;
  InternalExceptionFrame local_78;
  short local_34 [14];
  char *local_18;
  cMf32 *local_14;
  ChooseMapTy *local_10;
  int local_c;
  undefined1 *local_8;

  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_10 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar15 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x2c0,0,iVar7,
                                &DAT_007a4ccc,s_ChooseMapTy__ShowDescription_007cc830);
    if (iVar15 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Start_load_obj_cpp_007cc728,0x2c0);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  puVar8 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,s_MM_MAPB_007cc790,0,1);
  DibPut((AnonShape_006B5B10_E0D06CF1 *)PTR_0081176c->field_02F0,0,0,'\x01',(byte *)puVar8);
  pAVar3 = (AnonShape_006B5B10_E0D06CF1 *)PTR_0081176c->field_0544;
  FUN_006b4170(pAVar3,0,0,0,pAVar3->field_0004,pAVar3->field_0008,0xff);
  if ((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548 != (AnonShape_006B5570_4D68B99C *)0x0)
  {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548);
  }
  puVar9 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  pCVar16 = local_10;
  PTR_0081176c->field_0548 = puVar9;
  uVar13 = local_10->field_1C9F->field_0008;
  if ((0 < (int)(local_10->field_1C97->field_0008 + uVar13)) && (uVar13 <= param_1)) {
    uVar13 = 0xffffffff;
    local_18 = &local_10->field_0x1faf;
    pcVar10 = &local_10->field_1DA7;
    do {
      pcVar17 = pcVar10;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar17 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar17;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    pcVar10 = pcVar17 + -uVar13;
    pcVar17 = local_18;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar17 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar17 = pcVar17 + 1;
    }
    CVar2 = local_10->field_1A5F;
    if ((8 < CVar2) && ((CVar2 < (CASE_C|CASE_1) || ((CVar2 == CASE_13 && (DAT_00803400 == '\f')))))
       ) {
      uVar13 = 0xffffffff;
      pcVar10 = PTR_DAT_0079c06c;
      do {
        pcVar17 = pcVar10;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar17 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar17;
      } while (cVar1 != '\0');
      uVar13 = ~uVar13;
      iVar7 = -1;
      pcVar10 = local_18;
      do {
        pcVar19 = pcVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar19 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar19;
      } while (cVar1 != '\0');
      pcVar10 = pcVar17 + -uVar13;
      pcVar17 = pcVar19 + -1;
      for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar17 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar17 = pcVar17 + 1;
      }
    }
    iVar7 = param_1 - local_10->field_1C9F->field_0008;
    if (iVar7 < (int)local_10->field_1C97->field_0008) {
      pcVar10 = *(char **)(local_10->field_1C97->field_0014 + iVar7 * 4);
    }
    else {
      pcVar10 = (char *)0x0;
    }
    uVar13 = 0xffffffff;
    do {
      pcVar17 = pcVar10;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar17 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar17;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    iVar7 = -1;
    pcVar10 = local_18;
    do {
      pcVar19 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar19 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar19;
    } while (cVar1 != '\0');
    pcVar10 = pcVar17 + -uVar13;
    pcVar17 = pcVar19 + -1;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar17 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar17 = pcVar17 + 1;
    }
    local_bc.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_bc;
    iVar7 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0);
    pCVar16 = local_10;
    if (iVar7 == 0) {
      local_14 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                    (0x345,&local_10->field_0x1faf,0,0,0);
    }
    pcVar11 = local_14;
    g_currentExceptionFrame = local_bc.previous;
    if (local_14 != (cMf32 *)0x0) {
      StartSystemTy::LoadMapData(PTR_0081176c,local_14,pCVar16->field_1A5F);
      cMf32::delete(this_00,pcVar11);
    }
    goto LAB_005ae602;
  }
  uVar13 = 0xffffffff;
  DAT_008087be = 0xffffffff;
  if ((local_10->field_1A5F == CASE_3) &&
     (0 < (int)(local_10->field_1C97->field_0008 + local_10->field_1C9F->field_0008))) {
    pcVar10 = &local_10->field_1DA7;
    do {
      pcVar17 = pcVar10;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar17 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar17;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    local_18 = &local_10->field_0x1faf;
    pcVar10 = pcVar17 + -uVar13;
    pcVar17 = local_18;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar17 = pcVar17 + 4;
    }
    local_c = 1;
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar17 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar17 = pcVar17 + 1;
    }
    FUN_006b8280(local_18,local_18);
    pcVar10 = local_18;
    if ((int)param_1 < (int)pCVar16->field_1C9F->field_0008) {
      pcVar17 = *(char **)(pCVar16->field_1C9F->field_0014 + param_1 * 4);
    }
    else {
      pcVar17 = (char *)0x0;
    }
    uVar13 = 0xffffffff;
    do {
      pcVar19 = pcVar17;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar19 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar19;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    iVar7 = -1;
    pcVar17 = local_18;
    do {
      pcVar18 = pcVar17;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar18 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar18;
    } while (cVar1 != '\0');
    pcVar17 = pcVar19 + -uVar13;
    pcVar19 = pcVar18 + -1;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar19 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar19 = pcVar19 + 1;
    }
    FUN_006b8280(local_18,local_18);
    uVar13 = 0xffffffff;
    pcVar17 = PTR_s_ADDON_0079c060;
    do {
      pcVar19 = pcVar17;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar19 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar19;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    iVar7 = -1;
    do {
      pcVar17 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar17 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar17;
    } while (cVar1 != '\0');
    pcVar10 = pcVar19 + -uVar13;
    pcVar17 = pcVar17 + -1;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar17 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar17 = pcVar17 + 1;
    }
    local_100.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_100;
    iVar7 = Library::MSVCRT::__setjmp3(local_100.jumpBuffer,0);
    pCVar16 = local_10;
    if (iVar7 == 0) {
      pcVar11 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_10->field_0x1faf,0,0,0)
      ;
      local_14 = pcVar11;
      if (PTR_0080c4cb != (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
        FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4cb);
      }
      PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                     Library::Ourlib::MFSARR::mfSarLoad(pcVar11,PTR_s_OBJECTIVES_0079c074,0);
      puVar20 = (undefined4 *)&DAT_0080ed16;
      for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar20 = 0;
        puVar20 = puVar20 + 1;
      }
      local_8 = &DAT_0080ed16;
      puVar8 = cMf32::RecGet(pcVar11,0xc,PTR_s_MISSION_0079c064,(int *)&local_8,0);
      pcVar11 = local_14;
      if (puVar8 == (ushort *)0x0) {
        local_c = 0;
      }
      iVar7 = local_c;
      local_8 = &DAT_0080874e;
      cMf32::RecGet(local_14,0xc,PTR_DAT_0079c068,(int *)&local_8,0);
      cMf32::delete(this_01,pcVar11);
      if ((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548 !=
          (AnonShape_006B5570_4D68B99C *)0x0) {
        FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548);
      }
      if (PTR_0080c4cb == (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
        PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                       Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        puVar9 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        PTR_0081176c->field_0548 = puVar9;
      }
      else {
        pcVar4 = PTR_0081176c->field_0034;
        pcVar4->field_007E = 1;
        puVar12 = &pcVar4->field_0x9e;
        *(undefined2 *)puVar12 = 0;
        *puVar12 = DAT_007cc854;
        puVar9 = ccFntTy::FormIndentSarr
                           (PTR_0081176c->field_0034,(uint *)PTR_0080c4cb,s________________007c21d8,
                            (uint *)&DAT_007c21ec,PTR_0081176c->field_0544->field_0004 + -0x14,0,
                            0xffffffff,(char *)0x0,1);
        PTR_0081176c->field_0548 = puVar9;
        if (PTR_0081176c->field_0548 == 0) {
          puVar9 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
          PTR_0081176c->field_0548 = puVar9;
          g_currentExceptionFrame = local_100.previous;
          goto LAB_005ae53a;
        }
      }
      g_currentExceptionFrame = local_100.previous;
    }
    else {
      iVar7 = 0;
      g_currentExceptionFrame = local_100.previous;
      local_c = 0;
    }
  }
  else {
    iVar7 = 0;
    local_c = 0;
  }
LAB_005ae53a:
  pCVar16->field_002D = 0x28;
  *(undefined2 *)&pCVar16->field_0x31 = 1;
  puVar12 = &pCVar16->field_0x1d;
  pCVar16->field_0033 = *(undefined2 *)(PTR_0081176c->field_0548 + 8);
  FUN_006e6080(pCVar16,2,PTR_0081176c->field_0389,(undefined4 *)puVar12);
  pCVar16->field_002D = 0x22;
  *(undefined2 *)&pCVar16->field_0x31 = 0;
  pCVar16->field_0033 = 0;
  FUN_006e6080(pCVar16,2,PTR_0081176c->field_0389,(undefined4 *)puVar12);
  pCVar16->field_002D = 0x20;
  *(uint *)&pCVar16->field_0x31 = (uint)(iVar7 != 0);
  FUN_006e6080(pCVar16,2,PTR_0081176c->field_0389,(undefined4 *)puVar12);
  pSVar5 = pCVar16->field_1A5B;
  if (pSVar5->field_02E6 != (MMsgTy *)0x0) {
    psVar21 = local_34;
    for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
      psVar21[0] = 0;
      psVar21[1] = 0;
      psVar21 = psVar21 + 2;
    }
    *psVar21 = 0;
    local_34[0] = (-(ushort)(iVar7 != 0) & 2) - 1;
    local_34[1] = local_34[0];
    MMsgTy::StatePanel(pSVar5->field_02E6,(int)local_34);
  }
LAB_005ae602:
  if ((pCVar16->field_1A5F != CASE_3) && (-1 < (int)PTR_0081176c->field_02EC)) {
    FUN_006b35d0(DAT_008075a8,PTR_0081176c->field_02EC);
  }
  if (-1 < (int)PTR_0081176c->field_0540) {
    FUN_006b35d0(DAT_008075a8,PTR_0081176c->field_0540);
  }
  g_currentExceptionFrame = local_78.previous;
  return;
}

