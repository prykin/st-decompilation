
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::ShowDescription */

void __thiscall ChooseMapTy::ShowDescription(ChooseMapTy *this,uint param_1)

{
  undefined1 *puVar1;
  char cVar2;
  ChooseMapTy_field_1A5FState CVar3;
  code *pcVar4;
  int iVar5;
  ushort *puVar6;
  uint *puVar7;
  char *pcVar8;
  cMf32 *pcVar9;
  undefined2 *puVar10;
  int iVar11;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x2c0,0,iVar5,
                                &DAT_007a4ccc,s_ChooseMapTy__ShowDescription_007cc830);
    if (iVar11 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Start_load_obj_cpp_007cc728,0x2c0);
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar6 = FUN_0070a5a0(DAT_00806780,1,s_MM_MAPB_007cc790,0,1);
  thunk_FUN_00540760((undefined4 *)DAT_0081176c->field_02F0,0,0,'\x01',(byte *)puVar6);
  iVar5 = DAT_0081176c->field_0544;
  FUN_006b4170(iVar5,0,0,0,*(int *)(iVar5 + 4),*(int *)(iVar5 + 8),0xff);
  if ((byte *)DAT_0081176c->field_0548 != (byte *)0x0) {
    FUN_006b5570((byte *)DAT_0081176c->field_0548);
  }
  puVar7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  pCVar15 = local_10;
  DAT_0081176c->field_0548 = puVar7;
  uVar12 = *(uint *)(*(int *)&local_10[1].field_0x23f + 8);
  if ((0 < (int)(*(int *)(*(int *)&local_10[1].field_0x237 + 8) + uVar12)) && (uVar12 <= param_1)) {
    uVar12 = 0xffffffff;
    local_18 = &local_10[1].field_0x54f;
    pcVar8 = &local_10[1].field_0x347;
    do {
      pcVar16 = pcVar8;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    pcVar8 = pcVar16 + -uVar12;
    pcVar16 = local_18;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    CVar3 = local_10->field_1A5F;
    if ((8 < CVar3) && ((CVar3 < (CASE_C|CASE_1) || ((CVar3 == CASE_13 && (DAT_00803400 == '\f')))))
       ) {
      uVar12 = 0xffffffff;
      pcVar8 = PTR_DAT_0079c06c;
      do {
        pcVar16 = pcVar8;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar16 = pcVar8 + 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar16;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      iVar5 = -1;
      pcVar8 = local_18;
      do {
        pcVar18 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar18 = pcVar8 + 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar18;
      } while (cVar2 != '\0');
      pcVar8 = pcVar16 + -uVar12;
      pcVar16 = pcVar18 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar16 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar16 = pcVar16 + 1;
      }
    }
    iVar5 = param_1 - *(int *)(*(int *)&local_10[1].field_0x23f + 8);
    if (iVar5 < *(int *)(*(int *)&local_10[1].field_0x237 + 8)) {
      pcVar8 = *(char **)(*(int *)(*(int *)&local_10[1].field_0x237 + 0x14) + iVar5 * 4);
    }
    else {
      pcVar8 = (char *)0x0;
    }
    uVar12 = 0xffffffff;
    do {
      pcVar16 = pcVar8;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    iVar5 = -1;
    pcVar8 = local_18;
    do {
      pcVar18 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar18 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar18;
    } while (cVar2 != '\0');
    pcVar8 = pcVar16 + -uVar12;
    pcVar16 = pcVar18 + -1;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    local_bc.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_bc;
    iVar5 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pCVar15 = local_10;
    if (iVar5 == 0) {
      local_14 = (cMf32 *)FUN_006f0ec0(0x345,&local_10[1].field_0x54f,0,0,0);
    }
    pcVar9 = local_14;
    g_currentExceptionFrame = local_bc.previous;
    if (local_14 != (cMf32 *)0x0) {
      StartSystemTy::LoadMapData(DAT_0081176c,(int)local_14,pCVar15->field_1A5F);
      cMf32::delete(this_00,(undefined4 *)pcVar9);
    }
    goto LAB_005ae602;
  }
  uVar12 = 0xffffffff;
  DAT_008087be = 0xffffffff;
  if ((local_10->field_1A5F == (CASE_2|CASE_1)) &&
     (0 < *(int *)(*(int *)&local_10[1].field_0x237 + 8) +
          *(int *)(*(int *)&local_10[1].field_0x23f + 8))) {
    pcVar8 = &local_10[1].field_0x347;
    do {
      pcVar16 = pcVar8;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    local_18 = &local_10[1].field_0x54f;
    pcVar8 = pcVar16 + -uVar12;
    pcVar16 = local_18;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    local_c = 1;
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    FUN_006b8280(local_18,local_18);
    pcVar8 = local_18;
    if ((int)param_1 < *(int *)(*(int *)&pCVar15[1].field_0x23f + 8)) {
      pcVar16 = *(char **)(*(int *)(*(int *)&pCVar15[1].field_0x23f + 0x14) + param_1 * 4);
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
      cVar2 = *pcVar16;
      pcVar16 = pcVar18;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    iVar5 = -1;
    pcVar16 = local_18;
    do {
      pcVar17 = pcVar16;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar17 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar17;
    } while (cVar2 != '\0');
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
      cVar2 = *pcVar16;
      pcVar16 = pcVar18;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    iVar5 = -1;
    do {
      pcVar16 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    pcVar8 = pcVar18 + -uVar12;
    pcVar16 = pcVar16 + -1;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    local_100.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_100;
    iVar5 = Library::MSVCRT::__setjmp3(local_100.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pCVar15 = local_10;
    if (iVar5 == 0) {
      pcVar9 = (cMf32 *)FUN_006f0ec0(0x345,&local_10[1].field_0x54f,0,0,0);
      local_14 = pcVar9;
      if (DAT_0080c4cb != (uint *)0x0) {
        FUN_006b5570((byte *)DAT_0080c4cb);
      }
      DAT_0080c4cb = FUN_0071aa10((int)pcVar9,PTR_s_OBJECTIVES_0079c074,0);
      puVar19 = (undefined4 *)&DAT_0080ed16;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar19 = 0;
        puVar19 = puVar19 + 1;
      }
      local_8 = &DAT_0080ed16;
      puVar6 = cMf32::RecGet(pcVar9,0xc,PTR_s_MISSION_0079c064,(int *)&local_8,0);
      pcVar9 = local_14;
      if (puVar6 == (ushort *)0x0) {
        local_c = 0;
      }
      iVar5 = local_c;
      local_8 = &DAT_0080874e;
      cMf32::RecGet(local_14,0xc,PTR_DAT_0079c068,(int *)&local_8,0);
      cMf32::delete(this_01,(undefined4 *)pcVar9);
      if ((byte *)DAT_0081176c->field_0548 != (byte *)0x0) {
        FUN_006b5570((byte *)DAT_0081176c->field_0548);
      }
      if (DAT_0080c4cb == (uint *)0x0) {
        DAT_0080c4cb = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        puVar7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        DAT_0081176c->field_0548 = puVar7;
      }
      else {
        iVar11 = DAT_0081176c->field_0034;
        *(undefined4 *)(iVar11 + 0x7e) = 1;
        puVar10 = (undefined2 *)(iVar11 + 0x9e);
        *puVar10 = 0;
        *(undefined1 *)puVar10 = DAT_007cc854;
        puVar7 = ccFntTy::FormIndentSarr
                           ((ccFntTy *)DAT_0081176c->field_0034,(int)DAT_0080c4cb,
                            (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,
                            *(int *)(DAT_0081176c->field_0544 + 4) + -0x14,0,0xffffffff,(char *)0x0,
                            1);
        DAT_0081176c->field_0548 = puVar7;
        if (DAT_0081176c->field_0548 == 0) {
          puVar7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
          DAT_0081176c->field_0548 = puVar7;
          g_currentExceptionFrame = local_100.previous;
          goto LAB_005ae53a;
        }
      }
      g_currentExceptionFrame = local_100.previous;
    }
    else {
      iVar5 = 0;
      g_currentExceptionFrame = local_100.previous;
      local_c = 0;
    }
  }
  else {
    iVar5 = 0;
    local_c = 0;
  }
LAB_005ae53a:
  *(undefined4 *)&pCVar15->field_0x2d = 0x28;
  *(undefined2 *)&pCVar15->field_0x31 = 1;
  puVar1 = &pCVar15->field_0x1d;
  *(undefined2 *)&pCVar15->field_0x33 = *(undefined2 *)(DAT_0081176c->field_0548 + 8);
  FUN_006e6080(pCVar15,2,DAT_0081176c->field_0389,(undefined4 *)puVar1);
  *(undefined4 *)&pCVar15->field_0x2d = 0x22;
  *(undefined2 *)&pCVar15->field_0x31 = 0;
  *(undefined2 *)&pCVar15->field_0x33 = 0;
  FUN_006e6080(pCVar15,2,DAT_0081176c->field_0389,(undefined4 *)puVar1);
  *(undefined4 *)&pCVar15->field_0x2d = 0x20;
  *(uint *)&pCVar15->field_0x31 = (uint)(iVar5 != 0);
  FUN_006e6080(pCVar15,2,DAT_0081176c->field_0389,(undefined4 *)puVar1);
  iVar11 = *(int *)&pCVar15->field_0x1a5b;
  if (*(int *)(iVar11 + 0x2e6) != 0) {
    psVar20 = local_34;
    for (iVar14 = 6; iVar14 != 0; iVar14 = iVar14 + -1) {
      psVar20[0] = 0;
      psVar20[1] = 0;
      psVar20 = psVar20 + 2;
    }
    *psVar20 = 0;
    local_34[0] = (-(ushort)(iVar5 != 0) & 2) - 1;
    local_34[1] = local_34[0];
    MMsgTy::StatePanel(*(MMsgTy **)(iVar11 + 0x2e6),(int)local_34);
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

