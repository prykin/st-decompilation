
undefined4 * __cdecl FUN_0067d3b0(undefined4 *param_1,undefined4 *param_2,int param_3,uint *param_4)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  undefined4 unaff_ESI;
  uint *puVar11;
  int *piVar12;
  void *unaff_EDI;
  uint uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  bool bVar16;
  InternalExceptionFrame local_5c;
  int *local_18;
  uint local_14;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  uVar13 = 0;
  local_8 = (undefined4 *)0x0;
  local_10 = 0;
  local_c = (undefined4 *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  piVar3 = (int *)Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  local_18 = piVar3;
  if (piVar3 == (int *)0x0) {
    local_10 = param_3;
    if (((*(char *)(param_1 + 6) == '\x02') && (*(int *)((int)param_1 + 0xc2) != 0)) &&
       (iVar7 = *(int *)(*(int *)((int)param_1 + 0xc2) + 0xc), iVar7 != 0)) {
      local_c = Library::DKW::LIB::FUN_006aac10(iVar7 << 2);
      iVar7 = *(int *)((int)param_1 + 0xc2);
      uVar13 = 0;
      if (0 < *(int *)(iVar7 + 0xc)) {
        bVar16 = *(int *)(iVar7 + 0xc) != 0;
        do {
          if (bVar16) {
            piVar3 = (int *)(*(int *)(iVar7 + 8) * uVar13 + *(int *)(iVar7 + 0x1c));
          }
          else {
            piVar3 = (int *)0x0;
          }
          iVar7 = *piVar3;
          if ((iVar7 != 0) && (*(char *)(iVar7 + 0x18) == '\x02')) {
            local_c[uVar13] = iVar7;
            puVar4 = thunk_FUN_00691190((undefined4 *)local_c[uVar13],(uint *)(piVar3 + 3));
            *piVar3 = (int)puVar4;
          }
          uVar13 = uVar13 + 1;
          iVar7 = *(int *)((int)param_1 + 0xc2);
          bVar16 = uVar13 < *(uint *)(iVar7 + 0xc);
        } while ((int)uVar13 < (int)*(uint *)(iVar7 + 0xc));
      }
    }
    iVar7 = *(int *)((int)param_1 + 0xc2);
    local_18 = (int *)((int)param_1 + 0xc2);
    iVar9 = local_10;
    if (iVar7 != 0) {
      uVar13 = 0;
      if (0 < *(int *)(iVar7 + 0xc)) {
        bVar16 = *(int *)(iVar7 + 0xc) != 0;
        do {
          if (bVar16) {
            piVar3 = (int *)(*(int *)(iVar7 + 8) * uVar13 + *(int *)(iVar7 + 0x1c));
          }
          else {
            piVar3 = (int *)0x0;
          }
          if ((*piVar3 != 0) && (*(char *)(*piVar3 + 0x18) == '\0')) {
            iVar9 = iVar9 + piVar3[3];
            local_10 = iVar9;
          }
          uVar13 = uVar13 + 1;
          bVar16 = uVar13 < *(uint *)(iVar7 + 0xc);
        } while ((int)uVar13 < (int)*(uint *)(iVar7 + 0xc));
      }
    }
    iVar7 = 5;
    piVar3 = local_18;
    do {
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8) + 0x1c;
        iVar9 = iVar9 + iVar1;
        piVar3[2] = iVar1;
        local_10 = iVar9;
      }
      piVar3 = piVar3 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *param_4 = iVar9 + 299U;
    puVar4 = Library::DKW::LIB::FUN_006aac10(iVar9 + 299U);
    puVar8 = param_1;
    puVar14 = puVar4;
    for (iVar7 = 0x4a; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar14 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar14 = puVar14 + 1;
    }
    *(undefined2 *)puVar14 = *(undefined2 *)puVar8;
    *(undefined1 *)((int)puVar14 + 2) = *(undefined1 *)((int)puVar8 + 2);
    *(undefined1 *)(puVar4 + 6) = 0;
    puVar4[5] = *param_4;
    *(int *)((int)puVar4 + 0x102) = param_3;
    uVar13 = *(uint *)((int)puVar4 + 0x102);
    puVar8 = (undefined4 *)((int)puVar4 + 0x12a);
    puVar14 = puVar8;
    for (uVar5 = uVar13 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar14 = *param_2;
      param_2 = param_2 + 1;
      puVar14 = puVar14 + 1;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined1 *)puVar14 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
    *(undefined1 **)((int)puVar4 + 0xfe) = (undefined1 *)((int)puVar8 + (-0x12a - (int)puVar4));
    iVar7 = *(int *)((int)puVar4 + 0xc2);
    puVar10 = (uint *)((int)puVar8 + *(int *)((int)puVar4 + 0x102));
    local_14 = 0;
    if (0 < *(int *)(iVar7 + 0xc)) {
      bVar16 = *(int *)(iVar7 + 0xc) != 0;
      do {
        if (bVar16) {
          puVar8 = (undefined4 *)(*(int *)(iVar7 + 8) * local_14 + *(int *)(iVar7 + 0x1c));
        }
        else {
          puVar8 = (undefined4 *)0x0;
        }
        puVar11 = (uint *)*puVar8;
        if ((puVar11 != (uint *)0x0) && ((char)puVar11[6] == '\0')) {
          uVar13 = puVar8[3];
          puVar15 = puVar10;
          for (uVar5 = uVar13 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar15 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar15 = puVar15 + 1;
          }
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(char *)puVar15 = (char)*puVar11;
            puVar11 = (uint *)((int)puVar11 + 1);
            puVar15 = (uint *)((int)puVar15 + 1);
          }
          puVar6 = (undefined1 *)((int)puVar10 + (-0x12a - (int)puVar4));
          puVar10 = (uint *)((int)puVar10 + puVar8[3]);
          puVar8[2] = puVar6;
        }
        iVar7 = *(int *)((int)puVar4 + 0xc2);
        local_14 = local_14 + 1;
        bVar16 = local_14 < *(uint *)(iVar7 + 0xc);
      } while ((int)local_14 < (int)*(uint *)(iVar7 + 0xc));
    }
    iVar7 = 0;
    local_8 = puVar4;
    do {
      puVar11 = *(uint **)(iVar7 + 0xc2 + (int)puVar4);
      if (puVar11 != (uint *)0x0) {
        FUN_006affc0(puVar11,puVar10,&local_10);
        *(int *)(iVar7 + 0xc6 + (int)local_8) = (int)puVar10 + (-0x12a - (int)local_8);
        puVar10 = (uint *)((int)puVar10 + *(int *)(iVar7 + 0xca + (int)local_8));
        puVar4 = local_8;
      }
      piVar3 = local_18;
      iVar7 = iVar7 + 0xc;
    } while (iVar7 < 0x3c);
    if ((((*(char *)(param_1 + 6) == '\x02') && (iVar7 = *local_18, iVar7 != 0)) &&
        (iVar9 = *(int *)(iVar7 + 0xc), iVar9 != 0)) && (local_c != (undefined4 *)0x0)) {
      uVar13 = 0;
      if (0 < iVar9) {
        bVar16 = iVar9 != 0;
        do {
          if (bVar16) {
            piVar12 = (int *)(*(int *)(iVar7 + 8) * uVar13 + *(int *)(iVar7 + 0x1c));
          }
          else {
            piVar12 = (int *)0x0;
          }
          if (((*piVar12 != 0) && (*(char *)(*piVar12 + 0x18) == '\0')) &&
             ((local_c[uVar13] != 0 && (*(char *)(local_c[uVar13] + 0x18) == '\x02')))) {
            FUN_006ab060(piVar12);
            *piVar12 = local_c[uVar13];
          }
          iVar7 = *piVar3;
          uVar13 = uVar13 + 1;
          bVar16 = uVar13 < *(uint *)(iVar7 + 0xc);
        } while ((int)uVar13 < (int)*(uint *)(iVar7 + 0xc));
      }
      FUN_006ab060(&local_c);
      puVar4 = local_8;
    }
    g_currentExceptionFrame = local_5c.previous;
    return puVar4;
  }
  g_currentExceptionFrame = local_5c.previous;
  if (((*(char *)(param_1 + 6) == '\x02') && (iVar7 = *(int *)((int)param_1 + 0xc2), iVar7 != 0)) &&
     ((iVar9 = *(int *)(iVar7 + 0xc), iVar9 != 0 && (local_c != (undefined4 *)0x0)))) {
    if (0 < iVar9) {
      bVar16 = iVar9 != 0;
      do {
        if (bVar16) {
          piVar3 = (int *)(*(int *)(iVar7 + 8) * uVar13 + *(int *)(iVar7 + 0x1c));
        }
        else {
          piVar3 = (int *)0x0;
        }
        if ((((*piVar3 != 0) && (*(char *)(*piVar3 + 0x18) == '\0')) && (local_c[uVar13] != 0)) &&
           (*(char *)(local_c[uVar13] + 0x18) == '\x02')) {
          FUN_006ab060(piVar3);
          *piVar3 = local_c[uVar13];
        }
        iVar7 = *(int *)((int)param_1 + 0xc2);
        uVar13 = uVar13 + 1;
        bVar16 = uVar13 < *(uint *)(iVar7 + 0xc);
      } while ((int)uVar13 < (int)*(uint *)(iVar7 + 0xc));
    }
    piVar3 = local_18;
    FUN_006ab060(&local_c);
  }
  if (local_c != (undefined4 *)0x0) {
    FUN_006ab060(&local_c);
  }
  if (local_8 != (undefined4 *)0x0) {
    FUN_006ab060(&local_8);
  }
  iVar7 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0xda,0,(int)piVar3,&DAT_007a4ccc
                             ,s_PlrDataPack_007d2fc8);
  if (iVar7 == 0) {
    RaiseInternalException((int)piVar3,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0xdb);
    return (undefined4 *)0x0;
  }
  pcVar2 = (code *)swi(3);
  puVar4 = (undefined4 *)(*pcVar2)();
  return puVar4;
}

