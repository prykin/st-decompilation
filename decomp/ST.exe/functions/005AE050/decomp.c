
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::ShowDescription */

void __thiscall ChooseMapTy::ShowDescription(ChooseMapTy *this,uint param_1)

{
  char cVar1;
  ChooseMapTy_field_1A5FState CVar2;
  ccFntTy *pcVar3;
  StartSystemTy *pSVar4;
  code *pcVar5;
  int iVar6;
  ushort *puVar7;
  uint *puVar8;
  char *pcVar9;
  cMf32 *pcVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  cMf32 *this_00;
  cMf32 *this_01;
  int iVar14;
  ChooseMapTy *pCVar15;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined4 *puVar19;
  short *psVar20;
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
  iVar6 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar14 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x2c0,0,iVar6,
                                &DAT_007a4ccc,s_ChooseMapTy__ShowDescription_007cc830);
    if (iVar14 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Start_load_obj_cpp_007cc728,0x2c0);
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar7 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,s_MM_MAPB_007cc790,0,1);
  DibPut((undefined4 *)DAT_0081176c->field_02F0,0,0,'\x01',(byte *)puVar7);
  iVar6 = DAT_0081176c->field_0544;
  FUN_006b4170(iVar6,0,0,0,*(int *)(iVar6 + 4),*(int *)(iVar6 + 8),0xff);
  if ((byte *)DAT_0081176c->field_0548 != (byte *)0x0) {
    FUN_006b5570((byte *)DAT_0081176c->field_0548);
  }
  puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  pCVar15 = local_10;
  DAT_0081176c->field_0548 = puVar8;
  uVar12 = *(uint *)(local_10->field_1C9F + 8);
  if ((0 < (int)(*(int *)(local_10->field_1C97 + 8) + uVar12)) && (uVar12 <= param_1)) {
    uVar12 = 0xffffffff;
    local_18 = &local_10->field_0x1faf;
    pcVar9 = &local_10->field_1DA7;
    do {
      pcVar16 = pcVar9;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar16 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar16;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    pcVar9 = pcVar16 + -uVar12;
    pcVar16 = local_18;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar16 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar16 = pcVar16 + 1;
    }
    CVar2 = local_10->field_1A5F;
    if ((8 < CVar2) && ((CVar2 < (CASE_C|CASE_1) || ((CVar2 == CASE_13 && (DAT_00803400 == '\f')))))
       ) {
      uVar12 = 0xffffffff;
      pcVar9 = PTR_DAT_0079c06c;
      do {
        pcVar16 = pcVar9;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar16 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar16;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      iVar6 = -1;
      pcVar9 = local_18;
      do {
        pcVar18 = pcVar9;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar18 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar18;
      } while (cVar1 != '\0');
      pcVar9 = pcVar16 + -uVar12;
      pcVar16 = pcVar18 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar16 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar16 = pcVar16 + 1;
      }
    }
    iVar6 = param_1 - *(int *)(local_10->field_1C9F + 8);
    if (iVar6 < *(int *)(local_10->field_1C97 + 8)) {
      pcVar9 = *(char **)(*(int *)(local_10->field_1C97 + 0x14) + iVar6 * 4);
    }
    else {
      pcVar9 = (char *)0x0;
    }
    uVar12 = 0xffffffff;
    do {
      pcVar16 = pcVar9;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar16 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar16;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    iVar6 = -1;
    pcVar9 = local_18;
    do {
      pcVar18 = pcVar9;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar18 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar18;
    } while (cVar1 != '\0');
    pcVar9 = pcVar16 + -uVar12;
    pcVar16 = pcVar18 + -1;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar16 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar16 = pcVar16 + 1;
    }
    local_bc.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_bc;
    iVar6 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pCVar15 = local_10;
    if (iVar6 == 0) {
      local_14 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                    (0x345,&local_10->field_0x1faf,0,0,0);
    }
    pcVar10 = local_14;
    g_currentExceptionFrame = local_bc.previous;
    if (local_14 != (cMf32 *)0x0) {
      StartSystemTy::LoadMapData(DAT_0081176c,(int)local_14,pCVar15->field_1A5F);
      cMf32::delete(this_00,pcVar10);
    }
    goto LAB_005ae602;
  }
  uVar12 = 0xffffffff;
  DAT_008087be = 0xffffffff;
  if ((local_10->field_1A5F == (CASE_2|CASE_1)) &&
     (0 < *(int *)(local_10->field_1C97 + 8) + *(int *)(local_10->field_1C9F + 8))) {
    pcVar9 = &local_10->field_1DA7;
    do {
      pcVar16 = pcVar9;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar16 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar16;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    local_18 = &local_10->field_0x1faf;
    pcVar9 = pcVar16 + -uVar12;
    pcVar16 = local_18;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar16 = pcVar16 + 4;
    }
    local_c = 1;
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar16 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar16 = pcVar16 + 1;
    }
    FUN_006b8280(local_18,local_18);
    pcVar9 = local_18;
    if ((int)param_1 < *(int *)(pCVar15->field_1C9F + 8)) {
      pcVar16 = *(char **)(*(int *)(pCVar15->field_1C9F + 0x14) + param_1 * 4);
    }
    else {
      pcVar16 = (char *)0x0;
    }
    uVar12 = 0xffffffff;
    do {
      pcVar18 = pcVar16;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar18 = pcVar16 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar18;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    iVar6 = -1;
    pcVar16 = local_18;
    do {
      pcVar17 = pcVar16;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar17 = pcVar16 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar17;
    } while (cVar1 != '\0');
    pcVar16 = pcVar18 + -uVar12;
    pcVar18 = pcVar17 + -1;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar18 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar18 = pcVar18 + 1;
    }
    FUN_006b8280(local_18,local_18);
    uVar12 = 0xffffffff;
    pcVar16 = PTR_s_ADDON_0079c060;
    do {
      pcVar18 = pcVar16;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar18 = pcVar16 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar18;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    iVar6 = -1;
    do {
      pcVar16 = pcVar9;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar16;
    } while (cVar1 != '\0');
    pcVar9 = pcVar18 + -uVar12;
    pcVar16 = pcVar16 + -1;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar16 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar16 = pcVar16 + 1;
    }
    local_100.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_100;
    iVar6 = Library::MSVCRT::__setjmp3(local_100.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pCVar15 = local_10;
    if (iVar6 == 0) {
      pcVar10 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_10->field_0x1faf,0,0,0)
      ;
      local_14 = pcVar10;
      if (DAT_0080c4cb != (uint *)0x0) {
        FUN_006b5570((byte *)DAT_0080c4cb);
      }
      DAT_0080c4cb = Library::Ourlib::MFSARR::mfSarLoad(pcVar10,PTR_s_OBJECTIVES_0079c074,0);
      puVar19 = (undefined4 *)&DAT_0080ed16;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar19 = 0;
        puVar19 = puVar19 + 1;
      }
      local_8 = &DAT_0080ed16;
      puVar7 = cMf32::RecGet(pcVar10,0xc,PTR_s_MISSION_0079c064,(int *)&local_8,0);
      pcVar10 = local_14;
      if (puVar7 == (ushort *)0x0) {
        local_c = 0;
      }
      iVar6 = local_c;
      local_8 = &DAT_0080874e;
      cMf32::RecGet(local_14,0xc,PTR_DAT_0079c068,(int *)&local_8,0);
      cMf32::delete(this_01,pcVar10);
      if ((byte *)DAT_0081176c->field_0548 != (byte *)0x0) {
        FUN_006b5570((byte *)DAT_0081176c->field_0548);
      }
      if (DAT_0080c4cb == (uint *)0x0) {
        DAT_0080c4cb = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        DAT_0081176c->field_0548 = puVar8;
      }
      else {
        pcVar3 = DAT_0081176c->field_0034;
        pcVar3->field_007E = 1;
        puVar11 = &pcVar3->field_0x9e;
        *(undefined2 *)puVar11 = 0;
        *puVar11 = DAT_007cc854;
        puVar8 = ccFntTy::FormIndentSarr
                           (DAT_0081176c->field_0034,DAT_0080c4cb,s________________007c21d8,
                            (uint *)&DAT_007c21ec,*(int *)(DAT_0081176c->field_0544 + 4) + -0x14,0,
                            0xffffffff,(char *)0x0,1);
        DAT_0081176c->field_0548 = puVar8;
        if (DAT_0081176c->field_0548 == 0) {
          puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
          DAT_0081176c->field_0548 = puVar8;
          g_currentExceptionFrame = local_100.previous;
          goto LAB_005ae53a;
        }
      }
      g_currentExceptionFrame = local_100.previous;
    }
    else {
      iVar6 = 0;
      g_currentExceptionFrame = local_100.previous;
      local_c = 0;
    }
  }
  else {
    iVar6 = 0;
    local_c = 0;
  }
LAB_005ae53a:
  pCVar15->field_002D = 0x28;
  *(undefined2 *)&pCVar15->field_0x31 = 1;
  puVar11 = &pCVar15->field_0x1d;
  pCVar15->field_0033 = *(undefined2 *)(DAT_0081176c->field_0548 + 8);
  FUN_006e6080(pCVar15,2,DAT_0081176c->field_0389,(undefined4 *)puVar11);
  pCVar15->field_002D = 0x22;
  *(undefined2 *)&pCVar15->field_0x31 = 0;
  pCVar15->field_0033 = 0;
  FUN_006e6080(pCVar15,2,DAT_0081176c->field_0389,(undefined4 *)puVar11);
  pCVar15->field_002D = 0x20;
  *(uint *)&pCVar15->field_0x31 = (uint)(iVar6 != 0);
  FUN_006e6080(pCVar15,2,DAT_0081176c->field_0389,(undefined4 *)puVar11);
  pSVar4 = pCVar15->field_1A5B;
  if (pSVar4->field_02E6 != (MMsgTy *)0x0) {
    psVar20 = local_34;
    for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
      psVar20[0] = 0;
      psVar20[1] = 0;
      psVar20 = psVar20 + 2;
    }
    *psVar20 = 0;
    local_34[0] = (-(ushort)(iVar6 != 0) & 2) - 1;
    local_34[1] = local_34[0];
    MMsgTy::StatePanel(pSVar4->field_02E6,(int)local_34);
  }
LAB_005ae602:
  if ((pCVar15->field_1A5F != (CASE_2|CASE_1)) && (-1 < (int)DAT_0081176c->field_02EC)) {
    FUN_006b35d0(DAT_008075a8,DAT_0081176c->field_02EC);
  }
  if (-1 < (int)DAT_0081176c->field_0540) {
    FUN_006b35d0(DAT_008075a8,DAT_0081176c->field_0540);
  }
  g_currentExceptionFrame = local_78.previous;
  return;
}

