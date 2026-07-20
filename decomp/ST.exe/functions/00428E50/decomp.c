
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tload.cpp
   Diagnostic line evidence: 589 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl FUN_00428e50(short *param_1)

{
  double dVar1;
  undefined2 uVar2;
  int iVar3;
  double dVar4;
  uint *groupContent;
  undefined4 *puVar5;
  HoloTy *pHVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  bool bVar15;
  float10 fVar16;
  longlong lVar17;
  undefined4 local_114;
  int local_110;
  undefined4 local_10c;
  uint local_108 [4];
  int local_f8;
  int local_f4;
  uint local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  uint local_c4;
  undefined8 local_c0;
  int local_b8;
  undefined8 local_b4;
  uint local_ac;
  int local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int *local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  byte local_50;
  undefined3 uStack_4f;
  int local_4c;
  int *local_48;
  uint *local_44;
  int *local_40;
  int local_3c;
  int local_38;
  uint local_34;
  HoloTy *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  byte local_9;
  int *local_8;
  
  puVar5 = FUN_006b04d0(0x4f2);
  if (puVar5 == (undefined4 *)0x0) {
    local_30 = (HoloTy *)0x0;
  }
  else {
    pHVar6 = (HoloTy *)FUN_006dbca0((int)puVar5);
    local_30 = pHVar6;
    if (pHVar6 != (HoloTy *)0x0) goto LAB_00428e95;
  }
  pHVar6 = local_30;
  RaiseInternalException(-2,g_overwriteContext_007ED77C,s_E____titans_tload_cpp_007a5fdc,0x24d);
LAB_00428e95:
  dVar1 = ((double)DAT_00807570 * _DAT_00790590) / (double)_DAT_007ac580 + _DAT_007901c0;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar17 = Library::MSVCRT::__ftol();
  iVar11 = (int)lVar17;
  uVar10 = iVar11 + 3U & 0xfffffffc;
  dVar1 = (double)(_DAT_007904f8 / (_DAT_007ac580 / (float)DAT_00807570) + (float)_DAT_007901c0);
  local_e8 = uVar10;
  local_14 = iVar11;
  fVar16 = Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  local_b4 = (double)((float10)_DAT_00790580 / fVar16);
  dVar1 = _DAT_00790570 / local_b4 + _DAT_007901c0;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar17 = Library::MSVCRT::__ftol();
  local_c4 = (uint)lVar17;
  dVar1 = (double)(int)local_c4 * local_b4 - _DAT_00790580;
  dVar4 = ((double)(int)(uVar10 - iVar11) * (_DAT_00790590 / (double)local_14) + _DAT_00790590) -
          _DAT_00790560;
  local_14 = uVar10 - iVar11;
  FUN_006dc050(pHVar6,0,0,0,uVar10,local_c4,0x1f08a9,0xc02c48c6,SUB84(dVar4,0),
               (int)((ulonglong)dVar4 >> 0x20),0,0xc0240000,SUB84(dVar1,0),
               (int)((ulonglong)dVar1 >> 0x20),0x4024000000000000,0x4023ee97865e3540,0);
  *(undefined4 *)((int)&pHVar6[5].field_0027 + 2) = 0xff;
  *(undefined4 *)((int)&pHVar6[5].field_0023 + 2) = 6;
  iVar11 = 0;
  if (0 < *(int *)((int)param_1 + 0x455)) {
    local_40 = (int *)((int)param_1 + 0x459);
    do {
      iVar9 = *local_40;
      if (iVar9 != 0) {
        puVar5 = Library::DKW::LIB::FUN_006aac10(*(uint *)(iVar9 + 0x24));
        *(undefined4 **)(iVar9 + 0x3c) = puVar5;
      }
      iVar11 = iVar11 + 1;
      local_40 = local_40 + 1;
    } while (iVar11 < *(int *)((int)param_1 + 0x455));
  }
  FUN_006dd610(pHVar6,0,0,0x40240000,0,0x40240000);
  local_d4 = 0x41200000;
  local_d0 = 0x41200000;
  local_cc = 0;
  FUN_006e25d0(pHVar6,&local_f8);
  FUN_006e25d0(pHVar6,&local_e4);
  pHVar6 = local_30;
  local_c8 = (local_f8 >> 0x10) - (local_e4 >> 0x10);
  local_48 = (int *)0xfffffffb;
  do {
    piVar12 = local_48;
    FUN_006e25d0(pHVar6,&local_e4);
    *(int *)(PTR_DAT_007a5250 + (int)piVar12 * 4) = (local_e0 >> 0x10) - (local_f4 >> 0x10);
    local_48 = (int *)((int)piVar12 + 1);
  } while ((int)local_48 < 6);
  local_2c = 2;
  piVar12 = &DAT_007f4db8;
  do {
    local_14 = local_2c + -2;
    local_c0 = (double)((float)local_2c * _DAT_007904f8);
    local_b4 = (double)((float)local_14 * _DAT_007904f8);
    FUN_006e25d0(pHVar6,&local_e4);
    piVar12[-1] = (local_e0 >> 0x10) - (local_f4 >> 0x10);
    FUN_006e25d0(pHVar6,&local_e4);
    *piVar12 = (local_e0 >> 0x10) - (local_f4 >> 0x10);
    FUN_006e25d0(pHVar6,&local_e4);
    piVar12[1] = (local_e0 >> 0x10) - (local_f4 >> 0x10);
    piVar12 = piVar12 + 3;
    local_2c = local_2c + 2;
  } while ((int)piVar12 < 0x7f4dc5);
  local_2c._1_3_ = (undefined3)((uint)local_2c >> 8);
  local_2c = CONCAT31(local_2c._1_3_,2);
  local_a4 = 0;
  local_9 = 1;
  local_40 = (int *)0x0;
  do {
    _local_50 = CONCAT31(uStack_4f,(byte)local_2c >> 1);
    FUN_006dd610(pHVar6,(uint)local_40,0,0x40240000,0,0x40240000);
    local_44 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x1c,10);
    DAT_007f4dd0 = 0;
    local_90 = 0;
    if (0 < *(int *)((int)param_1 + 0x455)) {
      local_28 = (int *)((int)param_1 + 0x459);
      do {
        puVar5 = (undefined4 *)*local_28;
        if (puVar5 != (undefined4 *)0x0) {
          if (DAT_00802a58 != (cLoadingTy *)0x0) {
            local_a4 = local_a4 + 1;
            uVar10 = local_a4 & 0x8000000f;
            bVar15 = uVar10 == 0;
            if ((int)uVar10 < 0) {
              bVar15 = (uVar10 - 1 | 0xfffffff0) == 0xffffffff;
            }
            if (bVar15) {
              cLoadingTy::SetState
                        (DAT_00802a58,CASE_1,(int)(local_a4 + ((int)local_a4 >> 0x1f & 0xfU)) >> 4,
                         (char *)0x0);
            }
          }
          uVar10 = 0;
          while( true ) {
            if ((local_44[3] <= uVar10) ||
               (piVar12 = (int *)(local_44[2] * uVar10 + local_44[7]), piVar12 == (int *)0x0))
            goto LAB_004292e2;
            if (puVar5[10] == *piVar12) break;
            uVar10 = uVar10 + 1;
          }
          if (piVar12 != (int *)0x0) {
            puVar5[6] = uVar10;
            iVar11 = 0;
            if (0 < (int)puVar5[9]) {
              do {
                if ((*(byte *)(piVar12[2] + iVar11) & local_50) != 0) {
                  *(byte *)(puVar5[0xf] + iVar11) = *(byte *)(puVar5[0xf] + iVar11) | local_50;
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < (int)puVar5[9]);
            }
            goto LAB_004293c6;
          }
LAB_004292e2:
          local_14 = (int)*(short *)((int)puVar5 + 6);
          uVar2 = *(undefined2 *)(puVar5 + 1);
          local_48 = (int *)(int)*(short *)(puVar5 + 2);
          *(undefined2 *)(puVar5 + 1) = 0;
          *(undefined2 *)((int)puVar5 + 6) = 0;
          *(ushort *)(puVar5 + 2) = (ushort)*(byte *)(puVar5 + 0x12);
          *puVar5 = *(undefined4 *)((int)&pHVar6[6].field_000B + 3);
          *(undefined4 **)((int)&pHVar6[6].field_000B + 3) = puVar5;
          *(int *)((int)&pHVar6[6].field_0007 + 3) = *(int *)((int)&pHVar6[6].field_0007 + 3) + 1;
          FUN_006ddbe0((int)pHVar6);
          FUN_006ddd50(pHVar6);
          *(undefined4 *)((int)&pHVar6[6].field_000B + 3) = 0;
          *(undefined4 *)((int)&pHVar6[6].field_0007 + 3) = 0;
          *(undefined2 *)((int)puVar5 + 6) = (undefined2)local_14;
          *(undefined2 *)(puVar5 + 2) = local_48._0_2_;
          *(undefined2 *)(puVar5 + 1) = uVar2;
          local_110 = thunk_FUN_00428b20(*(int **)((int)&pHVar6->field_000B + 1),local_e8,local_c4,
                                         local_108);
          local_114 = puVar5[10];
          local_10c = puVar5[0xf];
          uVar10 = Library::DKW::TBL::FUN_006ae1c0(local_44,&local_114);
          puVar5[6] = uVar10;
        }
LAB_004293c6:
        local_28 = local_28 + 1;
        local_90 = local_90 + 1;
      } while (local_90 < *(int *)((int)param_1 + 0x455));
    }
    local_38 = (int)*param_1 / 2;
    if (local_40 == (int *)0x0) {
      local_7c = 1;
      local_a8 = 1;
      local_6c = 1;
      local_74 = 1;
LAB_00429475:
      local_8c = 0;
      local_84 = 0;
    }
    else if (local_40 == (int *)0x1) {
      local_7c = 0;
      local_8c = -1;
      local_a8 = -1;
      local_6c = 1;
      local_74 = 0;
      local_84 = 1;
    }
    else {
      if (local_40 == (int *)0x2) {
        local_7c = -1;
        local_a8 = -1;
        local_6c = -1;
        local_74 = -1;
        goto LAB_00429475;
      }
      local_8c = 1;
      local_7c = 0;
      local_a8 = 1;
      local_6c = -1;
      local_74 = 0;
      local_84 = -1;
    }
    local_80 = local_38 * local_38;
    local_90 = 0;
    if (0 < *(int *)((int)param_1 + 0x455)) {
      local_48 = (int *)((int)param_1 + 0x459);
      do {
        iVar11 = *local_48;
        local_10 = iVar11;
        if (iVar11 != 0) {
          if (DAT_00802a58 != (cLoadingTy *)0x0) {
            local_a4 = local_a4 + 1;
            uVar10 = local_a4 & 0x8000000f;
            bVar15 = uVar10 == 0;
            if ((int)uVar10 < 0) {
              bVar15 = (uVar10 - 1 | 0xfffffff0) == 0xffffffff;
            }
            if (bVar15) {
              cLoadingTy::SetState
                        (DAT_00802a58,CASE_1,(int)(local_a4 + ((int)local_a4 >> 0x1f & 0xfU)) >> 4,
                         (char *)0x0);
            }
          }
          if (*(uint *)(iVar11 + 0x18) < local_44[3]) {
            iVar9 = local_44[2] * *(uint *)(iVar11 + 0x18) + local_44[7];
          }
          else {
            iVar9 = 0;
          }
          local_64 = (int)*(short *)(iVar11 + 4) / 2;
          iVar7 = (int)*(short *)(iVar11 + 8);
          local_24 = iVar7 - (uint)*(byte *)(iVar11 + 0x48);
          iVar13 = (int)*(short *)(iVar11 + 6) / 2;
          if (((*(ushort *)(iVar11 + 0x4e) & 0x2000) == 0) ||
             (local_ac = 0, (*(ushort *)(iVar11 + 0x4e) & 0xf) != 0)) {
            local_ac = (uint)*(byte *)(iVar11 + 0x48);
          }
          local_28 = (int *)(iVar13 * local_38);
          local_b8 = local_80 * 5;
          local_3c = 1;
          local_8 = (int *)((int)param_1 + ((int)local_28 + local_64 + local_b8) * 4 + 0x459);
          local_34 = 0;
          local_1c = 5;
          local_14 = iVar13;
          if (iVar7 < 5) {
LAB_0042958f:
            iVar11 = *local_8;
            if ((iVar11 == 0) ||
               (iVar13 = (int)*(short *)(iVar11 + 8) - (uint)*(byte *)(iVar11 + 0x48),
               iVar7 + 3 < iVar13)) goto cf_continue_loop_004296CF;
            if (*(uint *)(iVar11 + 0x18) < local_44[3]) {
              iVar11 = local_44[2] * *(uint *)(iVar11 + 0x18) + local_44[7];
            }
            else {
              iVar11 = 0;
            }
            local_60 = *(int *)(iVar11 + 0xc);
            local_5c = *(int *)(iVar11 + 0x10) +
                       *(int *)(PTR_DAT_007a5250 + (iVar13 - local_24) * 4);
            local_58 = *(int *)(iVar11 + 0x14);
            local_54 = *(undefined4 *)(iVar11 + 0x18);
            local_18 = iVar11;
            iVar13 = FUN_006b0460(&local_a0,(int *)(iVar9 + 0xc),&local_60);
            if (iVar13 == 0) goto cf_continue_loop_004296CF;
            if (2 < *(int *)(local_10 + 0x24)) {
              iVar13 = *(int *)(iVar9 + 0x14);
              local_20 = *(undefined4 **)((int)&local_30->field_000B + 1);
              iVar7 = *(int *)(iVar9 + 0x10);
              iVar3 = *(int *)(iVar9 + 0xc);
              local_4c = (((local_9c - local_5c) * local_58 + *(int *)(iVar11 + 4)) - local_60) +
                         local_a0;
              if (local_3c != 0) {
                uVar8 = *(int *)(iVar9 + 0x18) * iVar13;
                puVar5 = *(undefined4 **)(iVar9 + 4);
                puVar14 = local_20;
                for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *puVar14 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar14 = puVar14 + 1;
                }
                local_3c = 0;
                for (uVar8 = uVar8 & 3; iVar11 = local_18, uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(undefined1 *)puVar14 = *(undefined1 *)puVar5;
                  puVar5 = (undefined4 *)((int)puVar5 + 1);
                  puVar14 = (undefined4 *)((int)puVar14 + 1);
                }
              }
              uVar10 = thunk_FUN_00428ce0((int)((int)local_20 +
                                               local_a0 + ((local_9c - iVar7) * iVar13 - iVar3)),
                                          *(int *)(iVar9 + 0x14),local_4c,*(int *)(iVar11 + 0x14),
                                          local_98,local_94,*(int *)(local_10 + 0x3c),local_50);
              local_34 = local_34 | uVar10;
              goto cf_continue_loop_004296CF;
            }
            if (local_94 < 3) goto cf_continue_loop_004296CF;
            **(byte **)(local_10 + 0x3c) = **(byte **)(local_10 + 0x3c) | local_50;
            iVar11 = *(int *)(local_10 + 0x3c);
LAB_00429d7a:
            *(byte *)(iVar11 + 1) = *(byte *)(iVar11 + 1) | local_50;
            iVar11 = local_64;
            goto LAB_00429d7d;
          }
LAB_00429715:
          local_c0 = (double)CONCAT44(local_84 * local_38,(undefined4)local_c0);
          local_14 = local_6c * local_38;
          local_88 = &DAT_007a5248;
          iVar11 = (local_7c + iVar13) * local_38 + local_b8;
          local_70 = &DAT_007f4db8;
          do {
            local_78 = iVar13;
            local_68 = local_64;
            if ((((local_64 < 0) || (local_38 <= local_64)) || (iVar13 < 0)) || (local_38 <= iVar13)
               ) break;
            if (((-1 < local_64 + local_8c) && (local_64 + local_8c < local_38)) &&
               ((-1 < local_7c + iVar13 &&
                ((local_7c + iVar13 < local_38 &&
                 (local_8 = (int *)((int)param_1 + (local_8c + iVar11 + local_64) * 4 + 0x459),
                 local_24 < 5)))))) {
              local_1c = 5 - local_24;
              local_64 = iVar11;
              do {
                iVar11 = *local_8;
                if ((iVar11 != 0) &&
                   ((int)(((int)*(short *)(local_10 + 8) - local_ac) + *local_88) <
                    (int)*(short *)(iVar11 + 8))) {
                  if (*(uint *)(iVar11 + 0x18) < local_44[3]) {
                    iVar13 = local_44[2] * *(uint *)(iVar11 + 0x18) + local_44[7];
                  }
                  else {
                    iVar13 = 0;
                  }
                  local_60 = *(int *)(iVar13 + 0xc) - local_c8;
                  local_5c = *(int *)(iVar13 + 0x10) +
                             *(int *)(PTR_DAT_007a5250 +
                                     (((int)*(short *)(iVar11 + 8) - (uint)*(byte *)(iVar11 + 0x48))
                                     - local_24) * 4) + local_70[-1];
                  local_58 = *(int *)(iVar13 + 0x14);
                  local_54 = *(undefined4 *)(iVar13 + 0x18);
                  local_18 = iVar13;
                  iVar11 = FUN_006b0460(&local_a0,(int *)(iVar9 + 0xc),&local_60);
                  if (iVar11 != 0) {
                    iVar11 = *(int *)(iVar9 + 0x10);
                    iVar7 = *(int *)(iVar9 + 0x14);
                    local_20 = *(undefined4 **)((int)&local_30->field_000B + 1);
                    iVar3 = *(int *)(iVar9 + 0xc);
                    local_4c = (((local_9c - local_5c) * local_58 + *(int *)(iVar13 + 4)) - local_60
                               ) + local_a0;
                    if (local_3c != 0) {
                      uVar8 = *(int *)(iVar9 + 0x18) * iVar7;
                      puVar5 = *(undefined4 **)(iVar9 + 4);
                      puVar14 = local_20;
                      for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                        *puVar14 = *puVar5;
                        puVar5 = puVar5 + 1;
                        puVar14 = puVar14 + 1;
                      }
                      local_3c = 0;
                      for (uVar8 = uVar8 & 3; iVar13 = local_18, uVar8 != 0; uVar8 = uVar8 - 1) {
                        *(undefined1 *)puVar14 = *(undefined1 *)puVar5;
                        puVar5 = (undefined4 *)((int)puVar5 + 1);
                        puVar14 = (undefined4 *)((int)puVar14 + 1);
                      }
                    }
                    uVar10 = thunk_FUN_00428ce0((int)((int)local_20 +
                                                     local_a0 +
                                                     ((local_9c - iVar11) * iVar7 - iVar3)),
                                                *(int *)(iVar9 + 0x14),local_4c,
                                                *(int *)(iVar13 + 0x14),local_98,local_94,
                                                *(int *)(local_10 + 0x3c),(byte)_local_50);
                    local_34 = local_34 | uVar10;
                  }
                }
                local_8 = local_8 + -local_80;
                local_1c = local_1c + -1;
              } while (local_1c != 0);
              local_1c = 0;
              iVar11 = local_64;
            }
            local_64 = iVar11;
            iVar11 = local_a8 + local_68;
            local_b4 = (double)CONCAT44(iVar11,(undefined4)local_b4);
            if ((((-1 < iVar11) && (iVar11 < local_38)) && (-1 < local_6c + local_78)) &&
               (local_6c + local_78 < local_38)) {
              local_8 = (int *)((int)param_1 +
                               ((int)local_28 + local_b8 + local_a8 + local_68 + local_14) * 4 +
                               0x459);
              local_1c = 5;
              if (local_24 < 5) {
                do {
                  iVar11 = *local_8;
                  if ((iVar11 != 0) &&
                     ((int)(((int)*(short *)(local_10 + 8) - local_ac) + *local_88) <
                      (int)*(short *)(iVar11 + 8))) {
                    if (*(uint *)(iVar11 + 0x18) < local_44[3]) {
                      iVar13 = local_44[2] * *(uint *)(iVar11 + 0x18) + local_44[7];
                    }
                    else {
                      iVar13 = 0;
                    }
                    local_60 = *(int *)(iVar13 + 0xc);
                    local_5c = *(int *)(iVar13 + 0x10) +
                               *(int *)(PTR_DAT_007a5250 +
                                       (((int)*(short *)(iVar11 + 8) -
                                        (uint)*(byte *)(iVar11 + 0x48)) - local_24) * 4) + *local_70
                    ;
                    local_58 = *(int *)(iVar13 + 0x14);
                    local_54 = *(undefined4 *)(iVar13 + 0x18);
                    local_18 = iVar13;
                    iVar11 = FUN_006b0460(&local_a0,(int *)(iVar9 + 0xc),&local_60);
                    if (iVar11 != 0) {
                      if (*(int *)(local_10 + 0x24) < 3) {
                        if (2 < local_94) {
                          **(byte **)(local_10 + 0x3c) = **(byte **)(local_10 + 0x3c) | local_50;
                          iVar11 = *(int *)(local_10 + 0x3c);
                          goto LAB_00429d7a;
                        }
                      }
                      else {
                        iVar11 = *(int *)(iVar9 + 0x10);
                        iVar7 = *(int *)(iVar9 + 0x14);
                        local_20 = *(undefined4 **)((int)&local_30->field_000B + 1);
                        iVar3 = *(int *)(iVar9 + 0xc);
                        local_4c = (((local_9c - local_5c) * local_58 + *(int *)(iVar13 + 4)) -
                                   local_60) + local_a0;
                        if (local_3c != 0) {
                          uVar8 = *(int *)(iVar9 + 0x18) * iVar7;
                          puVar5 = *(undefined4 **)(iVar9 + 4);
                          puVar14 = local_20;
                          for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                            *puVar14 = *puVar5;
                            puVar5 = puVar5 + 1;
                            puVar14 = puVar14 + 1;
                          }
                          local_3c = 0;
                          for (uVar8 = uVar8 & 3; iVar13 = local_18, uVar8 != 0; uVar8 = uVar8 - 1)
                          {
                            *(undefined1 *)puVar14 = *(undefined1 *)puVar5;
                            puVar5 = (undefined4 *)((int)puVar5 + 1);
                            puVar14 = (undefined4 *)((int)puVar14 + 1);
                          }
                        }
                        uVar10 = thunk_FUN_00428ce0((int)((int)local_20 +
                                                         local_a0 +
                                                         ((local_9c - iVar11) * iVar7 - iVar3)),
                                                    *(int *)(iVar9 + 0x14),local_4c,
                                                    *(int *)(iVar13 + 0x14),local_98,local_94,
                                                    *(int *)(local_10 + 0x3c),local_50);
                        local_34 = local_34 | uVar10;
                      }
                    }
                  }
                  local_8 = local_8 + -local_80;
                  local_1c = local_1c + -1;
                } while (local_24 < local_1c);
              }
            }
            if (((-1 < local_74 + local_68) && (local_74 + local_68 < local_38)) &&
               ((-1 < local_84 + local_78 && (local_84 + local_78 < local_38)))) {
              local_8 = (int *)((int)param_1 +
                               ((int)local_28 + local_68 + local_74 + local_b8 + local_c0._4_4_) * 4
                               + 0x459);
              if (local_24 < 5) {
                local_1c = 5 - local_24;
                do {
                  iVar11 = *local_8;
                  if ((iVar11 != 0) &&
                     ((int)(((int)*(short *)(local_10 + 8) - local_ac) + *local_88) <
                      (int)*(short *)(iVar11 + 8))) {
                    if (*(uint *)(iVar11 + 0x18) < local_44[3]) {
                      iVar13 = local_44[2] * *(uint *)(iVar11 + 0x18) + local_44[7];
                    }
                    else {
                      iVar13 = 0;
                    }
                    local_60 = *(int *)(iVar13 + 0xc) + local_c8;
                    local_5c = *(int *)(iVar13 + 0x10) +
                               *(int *)(PTR_DAT_007a5250 +
                                       (((int)*(short *)(iVar11 + 8) -
                                        (uint)*(byte *)(iVar11 + 0x48)) - local_24) * 4) +
                               local_70[1];
                    local_58 = *(int *)(iVar13 + 0x14);
                    local_54 = *(undefined4 *)(iVar13 + 0x18);
                    local_18 = iVar13;
                    iVar11 = FUN_006b0460(&local_a0,(int *)(iVar9 + 0xc),&local_60);
                    if (iVar11 != 0) {
                      iVar11 = *(int *)(iVar9 + 0x10);
                      iVar7 = *(int *)(iVar9 + 0x14);
                      local_20 = *(undefined4 **)((int)&local_30->field_000B + 1);
                      iVar3 = *(int *)(iVar9 + 0xc);
                      local_4c = (((local_9c - local_5c) * local_58 + *(int *)(iVar13 + 4)) -
                                 local_60) + local_a0;
                      if (local_3c != 0) {
                        uVar8 = *(int *)(iVar9 + 0x18) * iVar7;
                        puVar5 = *(undefined4 **)(iVar9 + 4);
                        puVar14 = local_20;
                        for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                          *puVar14 = *puVar5;
                          puVar5 = puVar5 + 1;
                          puVar14 = puVar14 + 1;
                        }
                        local_3c = 0;
                        for (uVar8 = uVar8 & 3; iVar13 = local_18, uVar8 != 0; uVar8 = uVar8 - 1) {
                          *(undefined1 *)puVar14 = *(undefined1 *)puVar5;
                          puVar5 = (undefined4 *)((int)puVar5 + 1);
                          puVar14 = (undefined4 *)((int)puVar14 + 1);
                        }
                      }
                      uVar10 = thunk_FUN_00428ce0((int)((int)local_20 +
                                                       local_a0 +
                                                       ((local_9c - iVar11) * iVar7 - iVar3)),
                                                  *(int *)(iVar9 + 0x14),local_4c,
                                                  *(int *)(iVar13 + 0x14),local_98,local_94,
                                                  *(int *)(local_10 + 0x3c),(byte)_local_50);
                      local_34 = local_34 | uVar10;
                    }
                  }
                  local_8 = local_8 + -local_80;
                  local_1c = local_1c + -1;
                } while (local_1c != 0);
              }
            }
            local_68 = local_b4._4_4_;
            local_28 = (int *)((int)local_28 + local_14);
            iVar11 = local_64 + local_14;
            iVar13 = local_78 + local_6c;
            local_70 = local_70 + 3;
            local_88 = local_88 + 1;
            local_64 = local_b4._4_4_;
            local_78 = iVar13;
          } while ((int)local_88 < 0x7a524d);
LAB_00429d7d:
          local_64 = iVar11;
          pHVar6 = local_30;
          if (local_34 == 0) {
            iVar11 = 0;
            if (0 < *(int *)(local_10 + 0x24)) {
              iVar9 = 0;
              do {
                if ((*(byte *)(*(int *)(local_10 + 0x28) + iVar9) & local_9) != 0) {
                  *(byte *)(*(int *)(local_10 + 0x3c) + iVar11) =
                       *(byte *)(*(int *)(local_10 + 0x3c) + iVar11) | (byte)local_2c;
                }
                iVar11 = iVar11 + 1;
                iVar9 = iVar9 + 0x1c;
              } while (iVar11 < *(int *)(local_10 + 0x24));
            }
          }
          else {
            thunk_FUN_00428dc0(*(uint **)((int)&local_30->field_000B + 1),*(int *)(iVar9 + 0x14),
                               *(int *)(iVar9 + 0x18),*(int *)(local_10 + 0x3c),
                               *(undefined4 *)(local_10 + 0x24),(byte)local_2c);
          }
        }
        local_90 = local_90 + 1;
        local_48 = local_48 + 1;
      } while (local_90 < *(int *)((int)param_1 + 0x455));
    }
    groupContent = local_44;
    local_44[1] = 0;
    while (uVar10 = groupContent[1], uVar10 < groupContent[3]) {
      iVar11 = groupContent[2] * uVar10 + groupContent[7];
      groupContent[1] = uVar10 + 1;
      if (iVar11 == 0) break;
      FUN_006a5e90(*(short **)(iVar11 + 4));
    }
    FUN_006ae110((byte *)groupContent);
    local_9 = local_9 << 1;
    local_40 = (int *)((int)local_40 + 1);
    local_2c = CONCAT31(local_2c._1_3_,(byte)local_2c << 2);
    if (3 < (int)local_40) {
      if (pHVar6 != (HoloTy *)0x0) {
        FUN_006dbcf0((int *)pHVar6);
        Library::MSVCRT::FUN_0072e2b0(pHVar6);
      }
      return;
    }
  } while( true );
cf_continue_loop_004296CF:
  local_8 = local_8 + -local_80;
  iVar7 = (int)*(short *)(local_10 + 8);
  local_1c = local_1c + -1;
  iVar13 = local_14;
  if (local_1c <= iVar7) goto LAB_00429715;
  goto LAB_0042958f;
}

