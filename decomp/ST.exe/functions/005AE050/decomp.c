
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::ShowDescription */

void __thiscall ChooseMapTy::ShowDescription(ChooseMapTy *this,uint param_1)

{
  ChooseMapTy CVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  ushort *puVar5;
  uint *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  cMf32 *this_00;
  cMf32 *this_01;
  int iVar13;
  ChooseMapTy *pCVar14;
  undefined4 unaff_ESI;
  ChooseMapTy *pCVar15;
  void *unaff_EDI;
  ChooseMapTy *pCVar16;
  char *pcVar17;
  short *psVar18;
  InternalExceptionFrame local_100;
  InternalExceptionFrame local_bc;
  InternalExceptionFrame local_78;
  short local_34 [14];
  ChooseMapTy *local_18;
  undefined4 *local_14;
  ChooseMapTy *local_10;
  int local_c;
  undefined1 *local_8;
  
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_10 = this;
  iVar4 = __setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x2c0,0,iVar4,
                                &DAT_007a4ccc,s_ChooseMapTy__ShowDescription_007cc830);
    if (iVar10 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Start_load_obj_cpp_007cc728,0x2c0);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar5 = FUN_0070a5a0(DAT_00806780,1,s_MM_MAPB_007cc790,0,1);
  thunk_FUN_00540760(*(undefined4 **)(DAT_0081176c + 0x2f0),0,0,'\x01',(byte *)puVar5);
  iVar4 = *(int *)(DAT_0081176c + 0x544);
  FUN_006b4170(iVar4,0,0,0,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8),0xff);
  if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
  }
  puVar6 = FUN_006b54f0((uint *)0x0,10,10);
  pCVar14 = local_10;
  *(uint **)(DAT_0081176c + 0x548) = puVar6;
  if ((0 < (int)(*(int *)(*(int *)(local_10 + 0x1c97) + 8) +
                *(uint *)(*(int *)(local_10 + 0x1c9f) + 8))) &&
     (*(uint *)(*(int *)(local_10 + 0x1c9f) + 8) <= param_1)) {
    uVar11 = 0xffffffff;
    local_18 = local_10 + 0x1faf;
    pCVar14 = local_10 + 0x1da7;
    do {
      pCVar15 = pCVar14;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pCVar15 = pCVar14 + 1;
      CVar1 = *pCVar14;
      pCVar14 = pCVar15;
    } while (CVar1 != (ChooseMapTy)0x0);
    uVar11 = ~uVar11;
    pCVar14 = pCVar15 + -uVar11;
    pCVar15 = local_18;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pCVar15 = *(undefined4 *)pCVar14;
      pCVar14 = pCVar14 + 4;
      pCVar15 = pCVar15 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pCVar15 = *pCVar14;
      pCVar14 = pCVar14 + 1;
      pCVar15 = pCVar15 + 1;
    }
    CVar1 = local_10[0x1a5f];
    if ((8 < (byte)CVar1) &&
       (((byte)CVar1 < 0xd || ((CVar1 == (ChooseMapTy)0x13 && (DAT_00803400 == '\f')))))) {
      uVar11 = 0xffffffff;
      pcVar7 = PTR_DAT_0079c06c;
      do {
        pcVar17 = pcVar7;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar17 = pcVar7 + 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar17;
      } while (cVar2 != '\0');
      uVar11 = ~uVar11;
      iVar4 = -1;
      pCVar14 = local_18;
      do {
        pCVar15 = pCVar14;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pCVar15 = pCVar14 + 1;
        CVar1 = *pCVar14;
        pCVar14 = pCVar15;
      } while (CVar1 != (ChooseMapTy)0x0);
      pCVar14 = (ChooseMapTy *)(pcVar17 + -uVar11);
      pCVar15 = pCVar15 + -1;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pCVar15 = *(undefined4 *)pCVar14;
        pCVar14 = pCVar14 + 4;
        pCVar15 = pCVar15 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pCVar15 = *pCVar14;
        pCVar14 = pCVar14 + 1;
        pCVar15 = pCVar15 + 1;
      }
    }
    iVar4 = param_1 - *(int *)(*(int *)(local_10 + 0x1c9f) + 8);
    if (iVar4 < *(int *)(*(int *)(local_10 + 0x1c97) + 8)) {
      pcVar7 = *(char **)(*(int *)(*(int *)(local_10 + 0x1c97) + 0x14) + iVar4 * 4);
    }
    else {
      pcVar7 = (char *)0x0;
    }
    uVar11 = 0xffffffff;
    do {
      pcVar17 = pcVar7;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar17 = pcVar7 + 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar17;
    } while (cVar2 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pCVar14 = local_18;
    do {
      pCVar15 = pCVar14;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pCVar15 = pCVar14 + 1;
      CVar1 = *pCVar14;
      pCVar14 = pCVar15;
    } while (CVar1 != (ChooseMapTy)0x0);
    pCVar14 = (ChooseMapTy *)(pcVar17 + -uVar11);
    pCVar15 = pCVar15 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pCVar15 = *(undefined4 *)pCVar14;
      pCVar14 = pCVar14 + 4;
      pCVar15 = pCVar15 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pCVar15 = *pCVar14;
      pCVar14 = pCVar14 + 1;
      pCVar15 = pCVar15 + 1;
    }
    local_bc.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_bc;
    iVar4 = __setjmp3(local_bc.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pCVar14 = local_10;
    if (iVar4 == 0) {
      local_14 = FUN_006f0ec0(0x345,(byte *)(local_10 + 0x1faf),0,0,0);
    }
    puVar8 = local_14;
    g_currentExceptionFrame = local_bc.previous;
    if (local_14 != (undefined4 *)0x0) {
      StartSystemTy::LoadMapData(DAT_0081176c,(int)local_14,(char)pCVar14[0x1a5f]);
      cMf32::delete(this_00,puVar8);
    }
    goto LAB_005ae602;
  }
  uVar11 = 0xffffffff;
  DAT_008087be = 0xffffffff;
  if ((local_10[0x1a5f] == (ChooseMapTy)0x3) &&
     (0 < *(int *)(*(int *)(local_10 + 0x1c97) + 8) + *(int *)(*(int *)(local_10 + 0x1c9f) + 8))) {
    pCVar15 = local_10 + 0x1da7;
    do {
      pCVar16 = pCVar15;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pCVar16 = pCVar15 + 1;
      CVar1 = *pCVar15;
      pCVar15 = pCVar16;
    } while (CVar1 != (ChooseMapTy)0x0);
    uVar11 = ~uVar11;
    local_18 = local_10 + 0x1faf;
    pCVar15 = pCVar16 + -uVar11;
    pCVar16 = local_18;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pCVar16 = *(undefined4 *)pCVar15;
      pCVar15 = pCVar15 + 4;
      pCVar16 = pCVar16 + 4;
    }
    local_c = 1;
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pCVar16 = *pCVar15;
      pCVar15 = pCVar15 + 1;
      pCVar16 = pCVar16 + 1;
    }
    FUN_006b8280((char *)local_18,(char *)local_18);
    pCVar15 = local_18;
    if ((int)param_1 < *(int *)(*(int *)(pCVar14 + 0x1c9f) + 8)) {
      pcVar7 = *(char **)(*(int *)(*(int *)(pCVar14 + 0x1c9f) + 0x14) + param_1 * 4);
    }
    else {
      pcVar7 = (char *)0x0;
    }
    uVar11 = 0xffffffff;
    do {
      pcVar17 = pcVar7;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar17 = pcVar7 + 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar17;
    } while (cVar2 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pCVar14 = local_18;
    do {
      pCVar16 = pCVar14;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pCVar16 = pCVar14 + 1;
      CVar1 = *pCVar14;
      pCVar14 = pCVar16;
    } while (CVar1 != (ChooseMapTy)0x0);
    pCVar14 = (ChooseMapTy *)(pcVar17 + -uVar11);
    pCVar16 = pCVar16 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pCVar16 = *(undefined4 *)pCVar14;
      pCVar14 = pCVar14 + 4;
      pCVar16 = pCVar16 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pCVar16 = *pCVar14;
      pCVar14 = pCVar14 + 1;
      pCVar16 = pCVar16 + 1;
    }
    FUN_006b8280((char *)local_18,(char *)local_18);
    uVar11 = 0xffffffff;
    pcVar7 = PTR_s_ADDON_0079c060;
    do {
      pcVar17 = pcVar7;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar17 = pcVar7 + 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar17;
    } while (cVar2 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    do {
      pCVar14 = pCVar15;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pCVar14 = pCVar15 + 1;
      CVar1 = *pCVar15;
      pCVar15 = pCVar14;
    } while (CVar1 != (ChooseMapTy)0x0);
    pCVar15 = (ChooseMapTy *)(pcVar17 + -uVar11);
    pCVar14 = pCVar14 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pCVar14 = *(undefined4 *)pCVar15;
      pCVar15 = pCVar15 + 4;
      pCVar14 = pCVar14 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pCVar14 = *pCVar15;
      pCVar15 = pCVar15 + 1;
      pCVar14 = pCVar14 + 1;
    }
    local_100.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_100;
    iVar4 = __setjmp3(local_100.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pCVar14 = local_10;
    if (iVar4 == 0) {
      puVar8 = FUN_006f0ec0(0x345,(byte *)(local_10 + 0x1faf),0,0,0);
      local_14 = puVar8;
      if (DAT_0080c4cb != (uint *)0x0) {
        FUN_006b5570((byte *)DAT_0080c4cb);
      }
      DAT_0080c4cb = FUN_0071aa10((int)puVar8,PTR_s_OBJECTIVES_0079c074,0);
      puVar8 = (undefined4 *)&DAT_0080ed16;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      local_8 = &DAT_0080ed16;
      puVar5 = FUN_006f1ce0(0xc,PTR_s_MISSION_0079c064,(int *)&local_8,0);
      puVar8 = local_14;
      if (puVar5 == (ushort *)0x0) {
        local_c = 0;
      }
      iVar4 = local_c;
      local_8 = &DAT_0080874e;
      FUN_006f1ce0(0xc,PTR_DAT_0079c068,(int *)&local_8,0);
      cMf32::delete(this_01,puVar8);
      if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
        FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
      }
      if (DAT_0080c4cb == (uint *)0x0) {
        DAT_0080c4cb = FUN_006b54f0((uint *)0x0,10,10);
        puVar6 = FUN_006b54f0((uint *)0x0,10,10);
        *(uint **)(DAT_0081176c + 0x548) = puVar6;
      }
      else {
        iVar10 = *(int *)(DAT_0081176c + 0x34);
        *(undefined4 *)(iVar10 + 0x7e) = 1;
        puVar9 = (undefined2 *)(iVar10 + 0x9e);
        *puVar9 = 0;
        *(undefined1 *)puVar9 = DAT_007cc854;
        puVar6 = ccFntTy::FormIndentSarr
                           (*(ccFntTy **)(DAT_0081176c + 0x34),(int)DAT_0080c4cb,
                            (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,
                            *(int *)(*(int *)(DAT_0081176c + 0x544) + 4) + -0x14,0,0xffffffff,
                            (char *)0x0,1);
        *(uint **)(DAT_0081176c + 0x548) = puVar6;
        if (*(int *)(DAT_0081176c + 0x548) == 0) {
          puVar6 = FUN_006b54f0((uint *)0x0,10,10);
          *(uint **)(DAT_0081176c + 0x548) = puVar6;
          g_currentExceptionFrame = local_100.previous;
          goto LAB_005ae53a;
        }
      }
      g_currentExceptionFrame = local_100.previous;
    }
    else {
      iVar4 = 0;
      g_currentExceptionFrame = local_100.previous;
      local_c = 0;
    }
  }
  else {
    iVar4 = 0;
    local_c = 0;
  }
LAB_005ae53a:
  *(undefined4 *)(pCVar14 + 0x2d) = 0x28;
  *(undefined2 *)(pCVar14 + 0x31) = 1;
  pCVar15 = pCVar14 + 0x1d;
  *(undefined2 *)(pCVar14 + 0x33) = *(undefined2 *)(*(int *)(DAT_0081176c + 0x548) + 8);
  FUN_006e6080(pCVar14,2,*(undefined4 *)(DAT_0081176c + 0x389),(undefined4 *)pCVar15);
  *(undefined4 *)(pCVar14 + 0x2d) = 0x22;
  *(undefined2 *)(pCVar14 + 0x31) = 0;
  *(undefined2 *)(pCVar14 + 0x33) = 0;
  FUN_006e6080(pCVar14,2,*(undefined4 *)(DAT_0081176c + 0x389),(undefined4 *)pCVar15);
  *(undefined4 *)(pCVar14 + 0x2d) = 0x20;
  *(uint *)(pCVar14 + 0x31) = (uint)(iVar4 != 0);
  FUN_006e6080(pCVar14,2,*(undefined4 *)(DAT_0081176c + 0x389),(undefined4 *)pCVar15);
  iVar10 = *(int *)(pCVar14 + 0x1a5b);
  if (*(int *)(iVar10 + 0x2e6) != 0) {
    psVar18 = local_34;
    for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
      psVar18[0] = 0;
      psVar18[1] = 0;
      psVar18 = psVar18 + 2;
    }
    *psVar18 = 0;
    local_34[0] = (-(ushort)(iVar4 != 0) & 2) - 1;
    local_34[1] = local_34[0];
    MMsgTy::StatePanel(*(MMsgTy **)(iVar10 + 0x2e6),(int)local_34);
  }
LAB_005ae602:
  if ((pCVar14[0x1a5f] != (ChooseMapTy)0x3) && (-1 < (int)*(uint *)(DAT_0081176c + 0x2ec))) {
    FUN_006b35d0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
  }
  if (-1 < (int)*(uint *)(DAT_0081176c + 0x540)) {
    FUN_006b35d0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
  }
  g_currentExceptionFrame = local_78.previous;
  return;
}

