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
  DArrayTy *pDVar9;
  char *pcVar10;
  cMf32 *pcVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  cMf32 *this_00;
  cMf32 *this_01;
  int iVar16;
  ChooseMapTy *pCVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  short *psVar22;
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
    iVar16 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x2c0,0,iVar7,
                                "%s","ChooseMapTy::ShowDescription");
    if (iVar16 == 0) {
      RaiseInternalException(iVar7,0,"E:\\__titans\\Start\\load_obj.cpp",0x2c0);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  puVar8 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,"MM_MAPB",0,1);
  DibPut((AnonShape_006B5B10_E0D06CF1 *)g_startSystem_0081176C->field_02F0,0,0,'\x01',(byte *)puVar8
        );
  pAVar3 = (AnonShape_006B5B10_E0D06CF1 *)g_startSystem_0081176C->field_0544;
  FUN_006b4170(pAVar3,0,0,0,pAVar3->field_0004,pAVar3->field_0008,0xff);
  if ((DArrayTy *)g_startSystem_0081176C->field_0548 != (DArrayTy *)0x0) {
    FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
  }
  pDVar9 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
  pCVar17 = local_10;
  g_startSystem_0081176C->field_0548 = &pDVar9->flags;
  uVar14 = local_10->field_1C9F->elementSize;
  if ((0 < (int)(local_10->field_1C97->elementSize + uVar14)) && (uVar14 <= param_1)) {
    uVar14 = 0xffffffff;
    local_18 = &local_10->field_0x1faf;
    pcVar10 = &local_10->field_1DA7;
    do {
      pcVar18 = pcVar10;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar18 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar18;
    } while (cVar1 != '\0');
    uVar14 = ~uVar14;
    pcVar10 = pcVar18 + -uVar14;
    pcVar18 = local_18;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar18 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar18 = pcVar18 + 1;
    }
    CVar2 = local_10->field_1A5F;
    if ((8 < CVar2) && ((CVar2 < (CASE_C|CASE_1) || ((CVar2 == CASE_13 && (DAT_00803400 == '\f')))))
       ) {
      uVar14 = 0xffffffff;
      pcVar10 = PTR_DAT_0079c06c;
      do {
        pcVar18 = pcVar10;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar18;
      } while (cVar1 != '\0');
      uVar14 = ~uVar14;
      iVar7 = -1;
      pcVar10 = local_18;
      do {
        pcVar20 = pcVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar20 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar20;
      } while (cVar1 != '\0');
      pcVar10 = pcVar18 + -uVar14;
      pcVar18 = pcVar20 + -1;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar18 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar18 = pcVar18 + 1;
      }
    }
    iVar7 = param_1 - local_10->field_1C9F->elementSize;
    if (iVar7 < (int)local_10->field_1C97->elementSize) {
      pcVar10 = *(char **)(local_10->field_1C97->growCapacity + iVar7 * 4);
    }
    else {
      pcVar10 = (char *)0x0;
    }
    uVar14 = 0xffffffff;
    do {
      pcVar18 = pcVar10;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar18 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar18;
    } while (cVar1 != '\0');
    uVar14 = ~uVar14;
    iVar7 = -1;
    pcVar10 = local_18;
    do {
      pcVar20 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar20 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar20;
    } while (cVar1 != '\0');
    pcVar10 = pcVar18 + -uVar14;
    pcVar18 = pcVar20 + -1;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar18 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar18 = pcVar18 + 1;
    }
    local_bc.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_bc;
    iVar7 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0);
    pCVar17 = local_10;
    if (iVar7 == 0) {
      local_14 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                    (0x345,&local_10->field_0x1faf,0,0,0);
    }
    pcVar11 = local_14;
    g_currentExceptionFrame = local_bc.previous;
    if (local_14 != (cMf32 *)0x0) {
      StartSystemTy::LoadMapData(g_startSystem_0081176C,local_14,pCVar17->field_1A5F);
      cMf32::delete(this_00,pcVar11);
    }
    goto LAB_005ae602;
  }
  uVar14 = 0xffffffff;
  DAT_008087be = 0xffffffff;
  if ((local_10->field_1A5F == CASE_3) &&
     (0 < (int)(local_10->field_1C97->elementSize + local_10->field_1C9F->elementSize))) {
    pcVar10 = &local_10->field_1DA7;
    do {
      pcVar18 = pcVar10;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar18 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar18;
    } while (cVar1 != '\0');
    uVar14 = ~uVar14;
    local_18 = &local_10->field_0x1faf;
    pcVar10 = pcVar18 + -uVar14;
    pcVar18 = local_18;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar18 = pcVar18 + 4;
    }
    local_c = 1;
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar18 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar18 = pcVar18 + 1;
    }
    FUN_006b8280(local_18,local_18);
    pcVar10 = local_18;
    if ((int)param_1 < (int)pCVar17->field_1C9F->elementSize) {
      pcVar18 = *(char **)(pCVar17->field_1C9F->growCapacity + param_1 * 4);
    }
    else {
      pcVar18 = (char *)0x0;
    }
    uVar14 = 0xffffffff;
    do {
      pcVar20 = pcVar18;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar20 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar20;
    } while (cVar1 != '\0');
    uVar14 = ~uVar14;
    iVar7 = -1;
    pcVar18 = local_18;
    do {
      pcVar19 = pcVar18;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar19 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar19;
    } while (cVar1 != '\0');
    pcVar18 = pcVar20 + -uVar14;
    pcVar20 = pcVar19 + -1;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar20 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar20 = pcVar20 + 1;
    }
    FUN_006b8280(local_18,local_18);
    uVar14 = 0xffffffff;
    pcVar18 = PTR_s_ADDON_0079c060;
    do {
      pcVar20 = pcVar18;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar20 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar20;
    } while (cVar1 != '\0');
    uVar14 = ~uVar14;
    iVar7 = -1;
    do {
      pcVar18 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar18 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar18;
    } while (cVar1 != '\0');
    pcVar10 = pcVar20 + -uVar14;
    pcVar18 = pcVar18 + -1;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar18 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar18 = pcVar18 + 1;
    }
    local_100.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_100;
    iVar7 = Library::MSVCRT::__setjmp3(local_100.jumpBuffer,0);
    pCVar17 = local_10;
    if (iVar7 == 0) {
      pcVar11 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_10->field_0x1faf,0,0,0)
      ;
      local_14 = pcVar11;
      if (g_dArray_0080C4CB != (DArrayTy *)0x0) {
        FUN_006b5570(g_dArray_0080C4CB);
      }
      g_dArray_0080C4CB =
           (DArrayTy *)Library::Ourlib::MFSARR::mfSarLoad(pcVar11,PTR_s_OBJECTIVES_0079c074,0);
      memset(&DAT_0080ed16, 0, 0x104); /* compiler bulk-zero initialization */
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
      if ((DArrayTy *)g_startSystem_0081176C->field_0548 != (DArrayTy *)0x0) {
        FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
      }
      if (g_dArray_0080C4CB == (DArrayTy *)0x0) {
        g_dArray_0080C4CB = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
        pDVar9 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
        g_startSystem_0081176C->field_0548 = &pDVar9->flags;
      }
      else {
        pcVar4 = g_startSystem_0081176C->field_0034;
        pcVar4->field_007E = 1;
        puVar12 = &pcVar4->field_0x9e;
        *(undefined2 *)puVar12 = 0;
        *puVar12 = DAT_007cc854;
        puVar13 = ccFntTy::FormIndentSarr
                            (g_startSystem_0081176C->field_0034,g_dArray_0080C4CB,
                             " ,.;:!?/\\()[]{}",(uint *)&DAT_007c21ec,
                             g_startSystem_0081176C->field_0544->field_0004 + -0x14,0,0xffffffff,
                             (char *)0x0,1);
        g_startSystem_0081176C->field_0548 = puVar13;
        if (g_startSystem_0081176C->field_0548 == (uint *)0x0) {
          pDVar9 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
          g_startSystem_0081176C->field_0548 = &pDVar9->flags;
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
  pCVar17->field_002D = 0x28;
  *(undefined2 *)&pCVar17->field_0x31 = 1;
  puVar12 = &pCVar17->field_0x1d;
  *(short *)&pCVar17->field_0x33 = (short)g_startSystem_0081176C->field_0548[2];
  FUN_006e6080(pCVar17,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar12);
  pCVar17->field_002D = 0x22;
  *(undefined2 *)&pCVar17->field_0x31 = 0;
  *(undefined2 *)&pCVar17->field_0x33 = 0;
  FUN_006e6080(pCVar17,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar12);
  pCVar17->field_002D = 0x20;
  *(uint *)&pCVar17->field_0x31 = (uint)(iVar7 != 0);
  FUN_006e6080(pCVar17,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar12);
  pSVar5 = pCVar17->field_1A5B;
  if (pSVar5->field_02E6 != (MMsgTy *)0x0) {
    psVar22 = local_34;
    for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
      psVar22[0] = 0;
      psVar22[1] = 0;
      psVar22 = psVar22 + 2;
    }
    *psVar22 = 0;
    local_34[0] = (-(ushort)(iVar7 != 0) & 2) - 1;
    local_34[1] = local_34[0];
    MMsgTy::StatePanel(pSVar5->field_02E6,(int)local_34);
  }
LAB_005ae602:
  if ((pCVar17->field_1A5F != CASE_3) && (-1 < g_startSystem_0081176C->field_02EC)) {
    FUN_006b35d0((int *)PTR_008075a8,g_startSystem_0081176C->field_02EC);
  }
  if (-1 < g_startSystem_0081176C->field_0540) {
    FUN_006b35d0((int *)PTR_008075a8,g_startSystem_0081176C->field_0540);
  }
  g_currentExceptionFrame = local_78.previous;
  return;
}

