
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_ai_fnd.cpp
   Diagnostic line evidence: 93 | 961 | 962 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

int FUN_004b33d0(uint param_1,int *param_2)

{
  uint uVar1;
  DArrayTy **ppDVar2;
  byte bVar3;
  char cVar4;
  STWorldObject *this;
  code *pcVar5;
  AnonShape_00413AF0_B6B4EE9A *pAVar6;
  STFishC *pSVar7;
  DArrayTy *pDVar8;
  short sVar9;
  int iVar10;
  uint *puVar11;
  DArrayTy *pDVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  Global_sub_004B1120_param_2Enum GVar16;
  int *piVar17;
  short sVar18;
  uint uVar19;
  short sVar20;
  int iVar21;
  uint uVar22;
  DArrayTy *pDVar23;
  byte *pbVar24;
  byte *pbVar25;
  undefined4 *puVar26;
  int iVar27;
  undefined1 *puVar28;
  bool bVar29;
  byte playerId;
  int local_35c;
  int local_358;
  int local_354;
  int local_34c;
  undefined4 local_320 [3];
  int aiStack_314 [4];
  Global_sub_004B1120_param_2Enum local_304 [4];
  undefined4 local_2f4;
  byte local_2ec;
  int local_2eb;
  undefined4 local_2e7;
  int local_2e3;
  int local_2df;
  int local_2db;
  undefined4 local_2d7;
  undefined4 local_2d3;
  InternalExceptionFrame local_2c0;
  undefined1 *local_27c;
  int local_274;
  int local_270;
  int local_26c;
  uint local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254 [2];
  undefined4 local_24c [8];
  DArrayTy *local_22c;
  DArrayTy *local_184;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  Global_sub_004B1120_param_2Enum local_134;
  int local_12c;
  uint local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  STWorldObject *local_110;
  int local_10c;
  Global_sub_004B1120_param_2Enum local_108 [4];
  undefined4 local_f8;
  int local_f4 [18];
  int local_ac;
  short local_a8 [2];
  AnonShape_00413AF0_B6B4EE9A *local_a4;
  Global_sub_004B1120_param_2Enum local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 local_90;
  short local_8c [2];
  int local_88;
  undefined4 local_80;
  short local_7c [2];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  STFishC *local_58;
  int local_54;
  int local_50;
  int local_4c [11];
  DArrayTy *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00790a90;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffc94;
  local_2c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_2c0;
  ExceptionList = &local_14;
  iVar10 = Library::MSVCRT::__setjmp3
                     (local_2c0.jumpBuffer,2,Library::MSVCRT::FUN_0072da21,0xffffffff);
  local_1c = &stack0xfffffc94;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_2c0.previous;
    iVar27 = ReportDebugMessage(s_E____titans_Artem_TLO_ai_fnd_cpp_007ac7c8,0x3c1,0,iVar10,
                                &DAT_007a4ccc,s_TLOAiBldPlacesFind_error___007ac7a8);
    if (iVar27 == 0) {
      RaiseInternalException(iVar10,0,s_E____titans_Artem_TLO_ai_fnd_cpp_007ac7c8,0x3c2);
      ExceptionList = local_14;
      return iVar10;
    }
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  local_1c = &stack0xfffffc94;
  if (param_2 == (int *)0x0) {
    local_1c = &stack0xfffffc94;
    RaiseInternalException
              (-5,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_ai_fnd_cpp_007ac7c8,0x5d);
  }
  if (param_2[3] == 0) {
    puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
    param_2[3] = (int)puVar11;
  }
  if (param_2[5] == 0) {
    puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
    param_2[5] = (int)puVar11;
  }
  puVar26 = local_24c;
  for (iVar10 = 0x42; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar26 = 0;
    puVar26 = puVar26 + 1;
  }
  piVar17 = local_4c;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar17 = 0;
    piVar17 = piVar17 + 1;
  }
  iVar27 = 0;
  local_10c = 0;
  *(undefined4 *)(param_2[3] + 4) = 0;
  iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
  if (-1 < iVar10) {
    do {
      local_4c[*(int *)(&DAT_00790888 + local_108[0] * 4)] =
           local_4c[*(int *)(&DAT_00790888 + local_108[0] * 4)] + 1;
      if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
        iVar27 = iVar27 + 1;
      }
      iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
    } while (-1 < iVar10);
    local_10c = iVar27;
  }
  uVar22 = 0;
  pDVar12 = (DArrayTy *)param_2[5];
  if (0 < (int)pDVar12->count) {
    do {
      DArrayGetElement(pDVar12,uVar22,&local_a0);
      iVar10 = thunk_FUN_004ae0b0(local_9c,local_98,local_94,local_a0,param_1,(undefined4 *)0x0,
                                  (int *)0x0,(int *)0x0,0,(int *)0x0);
      if (iVar10 == 0) {
        local_304[0] = local_a0;
        local_2f4 = local_90;
        if (param_2[3] == 0) {
          puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
          param_2[3] = (int)puVar11;
        }
        Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[3],local_304);
        FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[5],uVar22);
      }
      else {
        bVar29 = true;
        *(undefined4 *)(param_2[4] + 4) = 0;
        iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[4],&local_70);
        while (-1 < iVar10) {
          if (((local_70 == local_9c) && (local_6c == local_98)) && (local_68 == local_94)) {
            bVar29 = false;
          }
          iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[4],&local_70);
        }
        if (bVar29) {
          uVar22 = uVar22 + 1;
        }
        else {
          if (param_2[3] == 0) {
            puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
            param_2[3] = (int)puVar11;
          }
          Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[3],local_320);
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[5],uVar22);
        }
      }
      pDVar12 = (DArrayTy *)param_2[5];
    } while ((int)uVar22 < (int)pDVar12->count);
  }
  playerId = (byte)param_1;
  if (((local_4c[0] != 0) || (local_4c[1] != 0)) && (PTR_007fa150 != (DArrayTy *)0x0)) {
    pDVar12 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x1d,10);
    PTR_007fa150->iteratorIndex = 0;
    local_a4 = (AnonShape_00413AF0_B6B4EE9A *)pDVar12;
    iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_58);
    while (-1 < iVar10) {
      if (local_58 != (STFishC *)0x0) {
        STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
        this = g_worldGrid.cells
               [(int)local_8c[0] * (int)g_worldGrid.sizeX +
                (int)g_worldGrid.planeStride * (int)local_a8[0] + (int)local_7c[0]].objects[0];
        local_110 = this;
        if (this == (STWorldObject *)0x0) {
          pbVar25 = &local_2ec;
          for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
            pbVar25[0] = 0;
            pbVar25[1] = 0;
            pbVar25[2] = 0;
            pbVar25[3] = 0;
            pbVar25 = pbVar25 + 4;
          }
          *pbVar25 = 0;
          local_2ec = 1;
          local_2e7 = (*local_58->vtable->vfunc_2C)();
          local_2e3 = (int)local_7c[0];
          local_2df = (int)local_8c[0];
          local_2db = (int)local_a8[0];
          local_2d7 = FUN_006aced8(*param_2,param_2[1],local_2e3,local_2df);
          local_2d3 = 0xffffffff;
          if (param_2[4] != 0) {
            *(undefined4 *)(param_2[4] + 4) = 0;
            iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[4],&local_70);
            while (-1 < iVar10) {
              if (((local_70 == local_2e3) && (local_6c == local_2df)) && (local_68 == local_2db)) {
                local_2ec = local_2ec | 0x20;
                break;
              }
              iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[4],&local_70);
            }
          }
        }
        else {
          if ((this[1].vtable != (STWorldObjectVTable *)param_1) ||
             (((this->value_20 != 1000 ||
               (iVar10 = (*this->vtable->GetObjectTypeId)(this),
               *(int *)(&DAT_00790888 + iVar10 * 4) != 0)) &&
              ((this->value_20 != 0x3e9 ||
               (*(int *)(&DAT_00790888 + *(int *)&local_110[0x10].field_0x19 * 4) != 0))))))
          goto LAB_004b3895;
          pbVar25 = &local_2ec;
          for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
            pbVar25[0] = 0;
            pbVar25[1] = 0;
            pbVar25[2] = 0;
            pbVar25[3] = 0;
            pbVar25 = pbVar25 + 4;
          }
          *pbVar25 = 0;
          local_2ec = 2;
          local_2eb = (*local_110->vtable->GetObjectTypeId)(local_110);
          if (local_2eb == 0x61) {
            local_2ec = local_2ec | 8;
          }
          local_2e7 = (*local_58->vtable->vfunc_2C)();
          local_2e3 = (int)local_7c[0];
          local_2df = (int)local_8c[0];
          local_2db = (int)local_a8[0];
          local_2d3 = 0xffffffff;
        }
        Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar12,(undefined4 *)&local_2ec);
      }
LAB_004b3895:
      iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_58);
    }
    if (local_4c[0] != 0) {
      *(undefined4 *)(param_2[3] + 4) = 0;
      iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
      while (-1 < iVar10) {
        switch(local_108[0]) {
        case CASE_39:
        case CASE_5E:
          iVar10 = 0xdd;
          pDVar12->iteratorIndex = 0;
          pbVar25 = (byte *)0x0;
          break;
        default:
          goto switchD_004b38f0_caseD_3a;
        case CASE_4F:
        case CASE_61:
          iVar10 = 0xde;
          pDVar12->iteratorIndex = 0;
          pbVar25 = (byte *)0x0;
        }
        while( true ) {
          pbVar24 = pbVar25;
          uVar22 = pDVar12->iteratorIndex;
          if (uVar22 < pDVar12->count) {
            pbVar13 = (byte *)(pDVar12->elementSize * uVar22 + (int)pDVar12->data);
            pDVar12->iteratorIndex = uVar22 + 1;
          }
          else {
            pbVar13 = (byte *)0x0;
          }
          if (pbVar13 == (byte *)0x0) break;
          bVar3 = *pbVar13;
          pbVar25 = pbVar24;
          if ((((((bVar3 & 1) != 0) && ((bVar3 & 4) == 0)) && (*(int *)(pbVar13 + 5) == iVar10)) &&
              (pbVar25 = pbVar13, pbVar24 != (byte *)0x0)) &&
             ((pDVar12 = (DArrayTy *)local_a4, (bVar3 & 0x20) < (*pbVar24 & 0x20) ||
              ((pbVar25 = pbVar24, ((*pbVar24 ^ *pbVar13) & 0x20) == 0 &&
               (*(int *)(pbVar13 + 0x15) < *(int *)(pbVar24 + 0x15))))))) {
            pbVar25 = pbVar13;
          }
        }
        if (pbVar24 != (byte *)0x0) {
          *pbVar24 = *pbVar24 | 4;
          if (local_108[0] == CASE_61) {
            *pbVar24 = *pbVar24 | 8;
          }
          local_9c = *(int *)(pbVar24 + 9);
          local_98 = *(int *)(pbVar24 + 0xd);
          local_94 = *(int *)(pbVar24 + 0x11);
          local_a0 = local_108[0];
          local_90 = local_f8;
          Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
          local_4c[0] = local_4c[0] + -1;
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[3],
                       ((AnonShape_006B0C70_7C4FE646 *)param_2[3])->field_0004 - 1);
        }
        if (local_4c[0] == 0) break;
switchD_004b38f0_caseD_3a:
        iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
      }
    }
    ppDVar2 = &g_playerRuntime[param_1].field2171_0x9ea;
    if (*ppDVar2 != (DArrayTy *)0x0) {
      (*ppDVar2)->iteratorIndex = 0;
      iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)*ppDVar2,&local_58);
      while (iVar10 != 0) {
        STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
        local_88 = -1;
        pDVar12->iteratorIndex = 0;
        pbVar25 = (byte *)0x0;
        while( true ) {
          uVar22 = pDVar12->iteratorIndex;
          if (uVar22 < pDVar12->count) {
            pbVar24 = (byte *)(pDVar12->elementSize * uVar22 + (int)pDVar12->data);
            pDVar12->iteratorIndex = uVar22 + 1;
          }
          else {
            pbVar24 = (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) break;
          if ((((*pbVar24 & 6) != 0) && ((*pbVar24 & 0x18) == 0)) &&
             ((iVar10 = FUN_006aced8((int)local_7c[0],(int)local_8c[0],*(int *)(pbVar24 + 9),
                                     *(int *)(pbVar24 + 0xd)), pbVar25 == (byte *)0x0 ||
              (iVar10 < local_88)))) {
            pbVar25 = pbVar24;
            local_88 = iVar10;
          }
        }
        if (pbVar25 != (byte *)0x0) {
          if (local_88 < 0xf) {
            *pbVar25 = *pbVar25 | 0x10;
          }
          else if ((*(int *)(pbVar25 + 0x19) < 0) || (local_88 < *(int *)(pbVar25 + 0x19))) {
            *(int *)(pbVar25 + 0x19) = local_88;
          }
        }
        iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)*ppDVar2,&local_58);
      }
    }
    if (local_4c[1] != 0) {
      uVar22 = 0;
      if (0 < (int)pDVar12->count) {
        do {
          DArrayGetElement(pDVar12,uVar22,&local_2ec);
          if (((local_2ec & 0x18) == 0) && (((local_2ec & 1) == 0 || ((local_2ec & 4) != 0)))) {
            uVar22 = uVar22 + 1;
          }
          else {
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)pDVar12,uVar22);
          }
        } while ((int)uVar22 < (int)pDVar12->count);
      }
      uVar22 = pDVar12->count;
      if (local_4c[1] < (int)uVar22) {
        do {
          local_50 = 0;
          pDVar23 = pDVar12;
          uVar19 = 0;
          if (uVar22 != 1 && -1 < (int)(uVar22 - 1)) {
            do {
              pDVar12 = (DArrayTy *)local_a4;
              if (uVar19 < uVar22) {
                pbVar25 = (byte *)(pDVar23->elementSize * uVar19 + (int)pDVar23->data);
              }
              else {
                pbVar25 = (byte *)0x0;
              }
              uVar1 = uVar19 + 1;
              if (uVar1 < uVar22) {
                pbVar24 = (byte *)(pDVar23->elementSize * uVar1 + (int)pDVar23->data);
              }
              else {
                pbVar24 = (byte *)0x0;
              }
              if (((*pbVar24 & 0x20) < (*pbVar25 & 0x20)) ||
                 ((((*pbVar25 ^ *pbVar24) & 0x20) == 0 &&
                  (*(int *)(pbVar24 + 0x15) < *(int *)(pbVar25 + 0x15))))) {
                FUN_006b0cd0(local_a4,uVar19,uVar1);
                local_50 = 1;
              }
              uVar22 = ((AnonShape_00413AF0_B6B4EE9A *)pDVar12)->field_000C;
              pDVar23 = pDVar12;
              uVar19 = uVar1;
            } while ((int)uVar1 < (int)(uVar22 - 1));
          }
        } while (local_50 != 0);
      }
      pDVar12->iteratorIndex = 0;
      iVar10 = GetPlayerRaceId(playerId);
      local_134 = (-(uint)((char)iVar10 != '\x03') & 0xffffffdb) + 0x60;
      *(undefined4 *)(param_2[3] + 4) = 0;
      iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
      while (-1 < iVar10) {
        if (local_108[0] == local_134) {
          uVar22 = pDVar12->iteratorIndex;
          if (uVar22 < pDVar12->count) {
            pbVar25 = (byte *)(pDVar12->elementSize * uVar22 + (int)pDVar12->data);
            pDVar12->iteratorIndex = uVar22 + 1;
          }
          else {
            pbVar25 = (byte *)0x0;
          }
          if (pbVar25 == (byte *)0x0) break;
          local_11c = *(int *)(pbVar25 + 9);
          local_138 = *(int *)(pbVar25 + 0xd);
          local_254[0] = *(int *)(pbVar25 + 0x11);
          iVar10 = thunk_FUN_004b1120(param_1,local_134,&local_11c,&local_138,local_254,0,1);
          if ((iVar10 != 0) &&
             ((*(int *)(pbVar25 + 0x19) < 0 ||
              (iVar10 = FUN_006aced8(local_11c,local_138,*(int *)(pbVar25 + 9),
                                     *(int *)(pbVar25 + 0xd)), iVar10 < *(int *)(pbVar25 + 0x19)))))
          {
            *pbVar25 = *pbVar25 | 0x10;
            local_a0 = local_108[0];
            local_90 = local_f8;
            local_9c = local_11c;
            local_98 = local_138;
            local_94 = local_254[0];
            Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
            local_4c[1] = local_4c[1] + -1;
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[3],
                         ((AnonShape_006B0C70_7C4FE646 *)param_2[3])->field_0004 - 1);
          }
          if (local_4c[1] == 0) break;
        }
        iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
      }
    }
    DArrayDestroy(pDVar12);
  }
  iVar10 = 0;
LAB_004b3d9a:
  if (10 < iVar10) {
cf_break_loop_004B60CD:
    if (local_20 != (DArrayTy *)0x0) {
      DArrayDestroy(local_20);
    }
    puVar26 = local_24c;
    iVar10 = 0x42;
    do {
      if ((DArrayTy *)*puVar26 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)*puVar26);
      }
      puVar26 = puVar26 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    g_currentExceptionFrame = local_2c0.previous;
    ExceptionList = local_14;
    return 0;
  }
  if (local_4c[iVar10] == 0) {
    iVar10 = iVar10 + 1;
    goto LAB_004b3d9a;
  }
  local_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  puVar26 = (undefined4 *)&stack0xfffffc94;
  for (uVar22 = ((int)g_worldGrid.sizeZ * (int)g_worldGrid.planeStride & 0x7fffffffU) >> 1;
      uVar22 != 0; uVar22 = uVar22 - 1) {
    *puVar26 = 0xffffffff;
    puVar26 = puVar26 + 1;
  }
  for (uVar22 = (int)g_worldGrid.sizeZ * (int)g_worldGrid.planeStride * 2 & 3; uVar22 != 0;
      uVar22 = uVar22 - 1) {
    *(undefined1 *)puVar26 = 0xff;
    puVar26 = (undefined4 *)((int)puVar26 + 1);
  }
  local_27c = &stack0xfffffc94;
  iVar10 = local_144;
  iVar27 = local_140;
  iVar21 = local_13c;
  local_1c = &stack0xfffffc94;
  if (local_4c[2] != 0) {
    local_27c = &stack0xfffffc94;
    local_1c = &stack0xfffffc94;
    pDVar12 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
    local_22c = pDVar12;
    if ((PTR_007fa16c != (DArrayTy *)0x0) && (uVar22 = 0, 0 < (int)PTR_007fa16c->count)) {
      do {
        DArrayGetElement(PTR_007fa16c,uVar22,&local_58);
        STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
        local_144 = (int)local_7c[0];
        local_140 = (int)local_8c[0];
        local_13c = (int)local_a8[0];
        Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar12,&local_144);
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)PTR_007fa16c->count);
    }
    iVar14 = param_2[5];
    iVar10 = local_144;
    iVar27 = local_140;
    iVar21 = local_13c;
    if ((iVar14 != 0) && (*(int *)(iVar14 + 0xc) != 0)) {
      *(undefined4 *)(iVar14 + 4) = 0;
      iVar14 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
      iVar10 = local_144;
      iVar27 = local_140;
      iVar21 = local_13c;
      local_144 = local_9c;
      local_140 = local_98;
      local_13c = local_94;
      while (local_9c = local_144, local_98 = local_140, local_94 = local_13c, -1 < iVar14) {
        if (local_a0 == 0x3a) {
          Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar12,&local_144);
          iVar10 = local_144;
          iVar27 = local_140;
          iVar21 = local_13c;
        }
        local_13c = iVar21;
        local_140 = iVar27;
        local_144 = iVar10;
        iVar14 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
        iVar10 = local_144;
        iVar27 = local_140;
        iVar21 = local_13c;
        local_144 = local_9c;
        local_140 = local_98;
        local_13c = local_94;
      }
    }
  }
  local_13c = iVar21;
  local_140 = iVar27;
  local_144 = iVar10;
  iVar10 = local_144;
  iVar27 = local_140;
  iVar21 = local_13c;
  if (local_4c[3] != 0) {
    local_184 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
    pDVar12 = g_playerRuntime[param_1].field2166_0x9d6;
    if ((pDVar12 != (DArrayTy *)0x0) && (uVar22 = 0, 0 < (int)pDVar12->count)) {
      do {
        DArrayGetElement(pDVar12,uVar22,&local_58);
        STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
        local_144 = (int)local_7c[0];
        local_140 = (int)local_8c[0];
        local_13c = (int)local_a8[0];
        Library::DKW::TBL::FUN_006ae1c0(&local_184->flags,&local_144);
        uVar22 = uVar22 + 1;
        pDVar12 = g_playerRuntime[param_1].field2166_0x9d6;
      } while ((int)uVar22 < (int)pDVar12->count);
    }
    iVar14 = param_2[5];
    iVar10 = local_144;
    iVar27 = local_140;
    iVar21 = local_13c;
    if ((iVar14 != 0) && (*(int *)(iVar14 + 0xc) != 0)) {
      *(undefined4 *)(iVar14 + 4) = 0;
      iVar14 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
      iVar10 = local_144;
      iVar27 = local_140;
      iVar21 = local_13c;
      local_144 = local_9c;
      local_140 = local_98;
      local_13c = local_94;
      while (local_9c = local_144, local_98 = local_140, local_94 = local_13c, -1 < iVar14) {
        if (local_a0 == 100) {
          Library::DKW::TBL::FUN_006ae1c0(&local_184->flags,&local_144);
          iVar10 = local_144;
          iVar27 = local_140;
          iVar21 = local_13c;
        }
        local_13c = iVar21;
        local_140 = iVar27;
        local_144 = iVar10;
        iVar14 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
        iVar10 = local_144;
        iVar27 = local_140;
        iVar21 = local_13c;
        local_144 = local_9c;
        local_140 = local_98;
        local_13c = local_94;
      }
    }
  }
  local_13c = iVar21;
  local_140 = iVar27;
  local_144 = iVar10;
  local_54 = local_4c[10] + local_4c[8] + local_4c[9] + local_4c[7] + local_4c[4] + 5 + local_4c[6];
  local_20 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x30,10);
  local_64 = 0;
  local_114 = 0;
LAB_004b40f9:
  do {
    sVar18 = g_worldGrid.sizeX;
    if (g_worldGrid.sizeX <= g_worldGrid.sizeY) {
      sVar18 = g_worldGrid.sizeY;
    }
    if (sVar18 <= local_64) {
LAB_004b4689:
      *(undefined4 *)(param_2[5] + 4) = 0;
      iVar14 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
      puVar28 = local_27c;
      pDVar12 = local_22c;
      pDVar23 = local_184;
      pAVar6 = local_a4;
      GVar16 = local_a0;
      iVar10 = local_9c;
      iVar27 = local_98;
      iVar21 = local_94;
      pSVar7 = local_58;
      pDVar8 = local_20;
      while (local_27c = puVar28, local_22c = pDVar12, local_184 = pDVar23, local_a4 = pAVar6,
            local_a0 = GVar16, local_9c = iVar10, local_98 = iVar27, local_94 = iVar21,
            local_58 = pSVar7, local_20 = pDVar8, -1 < iVar14) {
        if (*(int *)(&DAT_00791d68 + GVar16 * 4) == 1) {
          uVar22 = 0;
          do {
            uVar19 = uVar22 & 0x80000001;
            if ((int)uVar19 < 0) {
              uVar19 = (uVar19 - 1 | 0xfffffffe) + 1;
            }
            iVar14 = (int)uVar22 / 2 + iVar27;
            *(ushort *)
             (puVar28 +
             (g_worldGrid.sizeX * iVar14 + uVar19 + iVar10 + g_worldGrid.planeStride * iVar21) * 2)
                 = *(ushort *)(&DAT_00790888 + GVar16 * 4) | 0x200;
            uVar22 = uVar22 + 1;
            local_138 = iVar14;
            local_11c = uVar19 + iVar10;
          } while ((int)uVar22 < 4);
        }
        else {
          *(ushort *)
           (puVar28 + (g_worldGrid.planeStride * iVar21 + iVar10 + g_worldGrid.sizeX * iVar27) * 2)
               = *(ushort *)(&DAT_00790888 + GVar16 * 4) | 0x200;
          local_138 = iVar27;
          local_11c = iVar10;
        }
        local_254[0] = iVar21;
        iVar14 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
        puVar28 = local_27c;
        pDVar12 = local_22c;
        pDVar23 = local_184;
        pAVar6 = local_a4;
        GVar16 = local_a0;
        iVar10 = local_9c;
        iVar27 = local_98;
        iVar21 = local_94;
        pSVar7 = local_58;
        pDVar8 = local_20;
      }
      iVar27 = 0;
      PTR_007fa150->iteratorIndex = 0;
      iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_58);
      puVar28 = local_27c;
      while (-1 < iVar10) {
        if (local_58 != (STFishC *)0x0) {
          STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
          iVar10 = (int)local_8c[0] * (int)g_worldGrid.sizeX +
                   (int)g_worldGrid.planeStride * (int)local_a8[0] + (int)local_7c[0];
          sVar18 = *(short *)(puVar28 + iVar10 * 2);
          if ((sVar18 == 0) || (sVar18 == -1)) {
            *(undefined2 *)(puVar28 + iVar10 * 2) = 0x80;
          }
        }
        iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_58);
      }
      if ((local_4c[4] != 0) || (local_4c[5] != 0)) {
        *(undefined4 *)(param_2[3] + 4) = 0;
        iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
        while (-1 < iVar10) {
          if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 4) {
            piVar17 = local_f4;
            for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
              *piVar17 = 0;
              piVar17 = piVar17 + 1;
            }
            local_f4[0] = 0;
            Library::DKW::TBL::FUN_006ae1c0(&local_20->flags,local_f4);
          }
          iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
        }
      }
      local_5c = 0;
      local_26c = 0;
      local_274 = 0;
      local_60 = 0;
      while( true ) {
        local_64 = iVar27;
        sVar18 = g_worldGrid.sizeX;
        if (g_worldGrid.sizeX <= g_worldGrid.sizeY) {
          sVar18 = g_worldGrid.sizeY;
        }
        if (sVar18 <= iVar27) break;
cf_continue_loop_004B48CC:
        for (local_74 = 0; local_74 < local_64 * 8; local_74 = local_74 + 1) {
          if (local_74 < local_64 * 2) {
            local_11c = (*param_2 - local_64) + local_74;
            local_138 = param_2[1] - local_64;
LAB_004b4958:
          }
          else {
            if (local_64 * 4 <= local_74) {
              if (local_74 < local_64 * 6) {
                local_11c = (local_64 * 5 - local_74) + *param_2;
                local_138 = param_2[1] + local_64;
              }
              else {
                local_11c = *param_2 - local_64;
                local_138 = (local_64 * 7 + param_2[1]) - local_74;
              }
              goto LAB_004b4958;
            }
            local_11c = local_64 + *param_2;
            local_138 = param_2[1] + local_64 * -3 + local_74;
          }
          if ((((-1 < local_11c) && (local_11c < g_worldGrid.sizeX)) && (-1 < local_138)) &&
             (local_138 < g_worldGrid.sizeY)) {
            local_254[0] = 0;
            if (g_worldGrid.sizeZ != 1 && -1 < g_worldGrid.sizeZ + -1) {
LAB_004b49b4:
              iVar21 = (int)g_worldGrid.planeStride;
              iVar14 = iVar21 * local_254[0];
              iVar10 = g_worldGrid.sizeX * local_138;
              iVar27 = iVar10 + iVar14 + local_11c;
              if (*(short *)(local_27c + iVar27 * 2) != -1) {
                if ((*(short *)(local_27c + iVar27 * 2) == 0) &&
                   (*(short *)(local_27c + ((local_254[0] + 1) * iVar21 + iVar10 + local_11c) * 2)
                    == 0)) {
                  local_124 = 0;
                  if ((local_10c != 0) &&
                     (local_118 = iVar27 + 1, *(short *)(local_27c + local_118 * 2) == 0)) {
                    iVar27 = (local_138 + 1) * (int)g_worldGrid.sizeX + iVar14 + local_11c;
                    local_118 = iVar27;
                    if ((*(short *)(local_27c + iVar27 * 2) == 0) &&
                       (local_118 = iVar27 + 1, *(short *)(local_27c + (iVar27 + 1) * 2) == 0)) {
                      local_124 = 1;
                    }
                  }
                  if (local_254[0] < 1) {
                    bVar29 = true;
                  }
                  else {
                    iVar21 = (local_254[0] + -1) * iVar21;
                    iVar10 = iVar21 + iVar10 + local_11c;
                    local_118 = iVar10;
                    bVar29 = *(short *)(local_27c + iVar10 * 2) == 0x20;
                    if (!bVar29) goto cf_continue_loop_004B5FB6;
                    if ((local_10c != 0) && (local_124 != 0)) {
                      local_124 = 0;
                      local_118 = iVar10 + 1;
                      if (*(short *)(local_27c + (iVar10 + 1) * 2) == 0x20) {
                        iVar10 = (local_138 + 1) * (int)g_worldGrid.sizeX + iVar21 + local_11c;
                        local_118 = iVar10;
                        if ((*(short *)(local_27c + iVar10 * 2) == 0x20) &&
                           (local_118 = iVar10 + 1, *(short *)(local_27c + (iVar10 + 1) * 2) == 0x20
                           )) {
                          local_124 = 1;
                        }
                      }
                    }
                  }
                  iVar10 = local_118;
                  if (bVar29) {
                    local_80 = 1;
                    iVar27 = 0;
                    do {
                      if (iVar27 != 4) {
                        iVar21 = iVar27 / 3 + -1 + local_138;
                        iVar15 = iVar27 % 3 + -1 + local_11c;
                        if ((((-1 < iVar21) && (iVar21 < g_worldGrid.sizeY)) && (-1 < iVar15)) &&
                           (((iVar15 < g_worldGrid.sizeX &&
                             (sVar18 = *(short *)(local_27c +
                                                 (iVar21 * g_worldGrid.sizeX + iVar15 + iVar14) * 2)
                             , sVar18 != 0)) && ((sVar18 != 0x10 && (sVar18 != 0x20)))))) {
                          bVar29 = false;
                          goto LAB_004b4bd1;
                        }
                      }
                      iVar27 = iVar27 + 1;
                    } while (iVar27 < 9);
                    bVar29 = true;
LAB_004b4bd1:
                    if (bVar29) {
                      iVar27 = GetPlayerRaceId(playerId);
                      pDVar23 = local_184;
                      pDVar12 = local_22c;
                      local_270 = 0;
                      if ((char)iVar27 == '\x03') {
                        if (local_4c[3] != 0) {
                          if ((local_184 == (DArrayTy *)0x0) || (local_184->count == 0)) {
                            local_270 = 1;
                          }
                          else {
                            local_270 = 1;
                            uVar22 = 0;
                            if (0 < (int)local_184->count) {
                              do {
                                DArrayGetElement(pDVar23,uVar22,&local_144);
                                uVar19 = local_144 - local_11c >> 0x1f;
                                if (((int)((local_144 - local_11c ^ uVar19) - uVar19) < 0x10) ||
                                   (uVar19 = local_140 - local_138 >> 0x1f,
                                   (int)((local_140 - local_138 ^ uVar19) - uVar19) < 0x10)) {
                                  local_270 = 0;
                                  break;
                                }
                                uVar22 = uVar22 + 1;
                              } while ((int)uVar22 < (int)pDVar23->count);
                            }
                          }
                        }
                      }
                      else if (local_4c[2] != 0) {
                        if ((local_22c != (DArrayTy *)0x0) && (local_22c->count != 0)) {
                          iVar27 = -1;
                          uVar22 = 0;
                          if (0 < (int)local_22c->count) {
                            do {
                              DArrayGetElement(pDVar12,uVar22,&local_144);
                              iVar10 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                              if ((iVar27 < 0) || (iVar10 < iVar27)) {
                                iVar27 = iVar10;
                              }
                              uVar22 = uVar22 + 1;
                            } while ((int)uVar22 < (int)pDVar12->count);
                          }
                          if ((-1 < iVar27) && (iVar10 = local_118, iVar27 < 0xe))
                          goto LAB_004b4c78;
                        }
                        local_270 = 1;
                        iVar10 = local_118;
                      }
LAB_004b4c78:
                      if (((local_270 == 0) ||
                          (iVar27 = GetPlayerRaceId(playerId), (char)iVar27 == '\x03')) &&
                         (local_10c != 0)) {
                        if (local_124 != 0) {
                          uVar22 = 0;
                          do {
                            if (((uVar22 != 4) && (uVar22 != 5)) && ((uVar22 != 8 && (uVar22 != 9)))
                               ) {
                              iVar27 = ((int)(uVar22 + ((int)uVar22 >> 0x1f & 3U)) >> 2) + -1 +
                                       local_138;
                              uVar19 = uVar22 & 0x80000003;
                              if ((int)uVar19 < 0) {
                                uVar19 = (uVar19 - 1 | 0xfffffffc) + 1;
                              }
                              iVar21 = (uVar19 - 1) + local_11c;
                              if (((-1 < iVar27) && (iVar27 < g_worldGrid.sizeY)) && (-1 < iVar21))
                              {
                                if ((((iVar21 < g_worldGrid.sizeX) &&
                                     (sVar18 = *(short *)(local_27c +
                                                         (iVar27 * g_worldGrid.sizeX +
                                                         iVar21 + g_worldGrid.planeStride *
                                                                  local_254[0]) * 2), sVar18 != 0))
                                    && (sVar18 != 0x10)) && (sVar18 != 0x20)) {
                                  local_124 = 0;
                                  break;
                                }
                              }
                            }
                            uVar22 = uVar22 + 1;
                          } while ((int)uVar22 < 0x10);
                          goto LAB_004b4e09;
                        }
LAB_004b4f55:
                        uVar22 = 0;
                      }
                      else {
LAB_004b4e09:
                        if ((local_124 == 0) || (local_4c[4] == 0)) goto LAB_004b4f55;
                        iVar27 = 0;
                        local_12c = 0;
                        do {
                          iVar21 = iVar27 / 6;
                          if (((iVar21 == 0) || (iVar21 == 5)) ||
                             ((iVar27 % 6 == 0 || (iVar27 % 6 == 5)))) {
                            iVar21 = iVar21 + -2 + local_138;
                            iVar14 = iVar27 % 6 + -2 + local_11c;
                            if (((-1 < iVar21) && (iVar21 < g_worldGrid.sizeY)) && (-1 < iVar14)) {
                              if (iVar14 < g_worldGrid.sizeX) {
                                iVar21 = iVar21 * g_worldGrid.sizeX;
                                iVar15 = g_worldGrid.planeStride * local_254[0] + iVar21 + iVar14;
                                if (0 < local_254[0]) {
                                  iVar10 = (local_254[0] + -1) * (int)g_worldGrid.planeStride +
                                           iVar21 + iVar14;
                                  local_118 = iVar10;
                                }
                                if ((*(short *)(local_27c + iVar15 * 2) == 0) &&
                                   ((local_254[0] == 0 ||
                                    (*(short *)(local_27c + iVar10 * 2) == 0x20)))) {
LAB_004b4f35:
                                  local_12c = local_12c + 1;
                                }
                                else if (*(short *)(local_27c + iVar15 * 2) == 0x205) {
                                  local_58 = (STFishC *)g_worldGrid.cells[iVar15].objects[0];
                                  if (((local_58 != (STFishC *)0x0) &&
                                      (iVar21 = (*local_58->vtable->vfunc_2C)
                                                          ((STWorldObject *)local_58), 0x53 < iVar21
                                      )) && ((iVar21 = (*local_58->vtable->vfunc_2C)(),
                                             iVar21 < 0x5b && (*(int *)&local_58[2].field_0xfd == 0)
                                             ))) goto LAB_004b4f35;
                                }
                              }
                            }
                          }
                          iVar27 = iVar27 + 1;
                        } while (iVar27 < 0x24);
                        uVar22 = (uint)(6 < local_12c);
                      }
                      local_268 = uVar22;
                      if ((local_4c[4] == 0) || (uVar22 != 0)) {
                        if ((local_124 == 0) || (local_10c == 0)) {
                          iVar10 = 0;
                        }
                        else {
                          iVar10 = 1;
                        }
                        *(undefined4 *)(param_2[3] + 4) = 0;
                        local_ac = iVar10;
                        iVar27 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
                        pDVar12 = local_20;
                        while (local_20 = pDVar12, -1 < iVar27) {
                          iVar27 = *(int *)(&DAT_00790888 + local_108[0] * 4);
                          if (iVar27 == 4) {
                            if ((uVar22 == 0) ||
                               (*(int *)(&DAT_00791d68 + local_108[0] * 4) != iVar10))
                            goto cf_common_join_004B5648;
                            local_a0 = local_108[0];
                            local_9c = local_11c;
                            local_98 = local_138;
                            local_94 = local_254[0];
                            local_90 = local_f8;
                            Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[3],
                                         ((AnonShape_006B0C70_7C4FE646 *)param_2[3])->field_0004 - 1
                                        );
                            pDVar12->iteratorIndex = 0;
                            goto LAB_004b56e4;
                          }
                          if (local_4c[4] != 0) goto cf_common_join_004B5648;
                          if (((iVar27 == 1) || (iVar27 == 6)) || ((iVar27 == 2 || (iVar27 == 3))))
                          {
                            iVar27 = GetPlayerRaceId(playerId);
                            GVar16 = (-(uint)((char)iVar27 != '\x03') & 0xffffffd6) + 100;
                            if (local_270 == 0) {
                              if (local_108[0] == GVar16) goto cf_common_join_004B5648;
LAB_004b5614:
                              if (((local_270 != 0) &&
                                  (iVar27 = GetPlayerRaceId(playerId), (char)iVar27 != '\x03')) ||
                                 (*(int *)(&DAT_00791d68 + local_108[0] * 4) == iVar10)) {
                                local_a0 = local_108[0];
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[3],
                                             ((AnonShape_006B0C70_7C4FE646 *)param_2[3])->field_0004
                                             - 1);
                                if (local_108[0] == 0x3a) {
                                  local_4c[2] = local_4c[2] + -1;
                                  local_144 = local_11c;
                                  local_140 = local_138;
                                  local_13c = local_254[0];
                                  Library::DKW::TBL::FUN_006ae1c0(&local_22c->flags,&local_144);
                                }
                                else if (local_108[0] == 100) {
                                  local_4c[3] = local_4c[3] + -1;
                                  local_144 = local_11c;
                                  local_140 = local_138;
                                  local_13c = local_254[0];
                                  Library::DKW::TBL::FUN_006ae1c0(&local_184->flags,&local_144);
                                }
                                else if ((*(int *)(&DAT_00790888 + local_108[0] * 4) == 1) &&
                                        (local_4c[1] != 0)) {
                                  local_4c[1] = local_4c[1] + -1;
                                }
                                else {
                                  local_4c[6] = local_4c[6] + -1;
                                }
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
                                  local_10c = local_10c + -1;
                                  uVar22 = 0;
                                  do {
                                    uVar19 = uVar22 & 0x80000001;
                                    if ((int)uVar19 < 0) {
                                      uVar19 = (uVar19 - 1 | 0xfffffffe) + 1;
                                    }
                                    *(ushort *)
                                     (local_27c +
                                     (uVar19 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                               ((int)uVar22 / 2 + local_138) *
                                               (int)g_worldGrid.sizeX) * 2) =
                                         *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                    uVar22 = uVar22 + 1;
                                  } while ((int)uVar22 < 4);
                                  break;
                                }
LAB_004b5f7b:
                                *(ushort *)
                                 (local_27c +
                                 (g_worldGrid.sizeX * local_138 +
                                 local_11c + g_worldGrid.planeStride * local_254[0]) * 2) =
                                     *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                break;
                              }
                            }
                            else if (local_108[0] == GVar16) goto LAB_004b5614;
                          }
                          else {
                            if ((local_4c[6] != 0) || (local_4c[1] != 0))
                            goto cf_common_join_004B5648;
                            if (local_60 == 0) {
                              local_64 = local_64 + -5;
                              if (local_64 < 0) {
                                local_64 = 0;
                              }
                              local_60 = 1;
                              goto cf_continue_loop_004B48CC;
                            }
                            if (iVar27 == 7) {
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != iVar10)
                              goto cf_common_join_004B5648;
                              pDVar12 = (DArrayTy *)aiStack_314[local_108[0]];
                              if ((pDVar12 == (DArrayTy *)0x0) || (pDVar12->count == 0)) {
LAB_004b50f4:
                                bVar29 = true;
                              }
                              else {
                                bVar29 = false;
                                iVar10 = -1;
                                uVar22 = 0;
                                if (0 < (int)pDVar12->count) {
                                  do {
                                    DArrayGetElement(pDVar12,uVar22,&local_144);
                                    iVar27 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar10 < 0) || (iVar27 < iVar10)) {
                                      iVar10 = iVar27;
                                    }
                                    uVar22 = uVar22 + 1;
                                    pDVar12 = (DArrayTy *)aiStack_314[local_108[0]];
                                  } while ((int)uVar22 < (int)pDVar12->count);
                                }
                                if ((iVar10 < 0) ||
                                   ((*(int *)(&DAT_00794fe4 + local_108[0] * 4) * 3) / 0x192 <
                                    iVar10)) goto LAB_004b50f4;
                              }
                              if (!bVar29) goto LAB_004b5101;
                              local_90 = local_f8;
                              local_9c = local_11c;
                              local_98 = local_138;
                              local_94 = local_254[0];
                              local_a0 = local_108[0];
                              Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                              FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[3],
                                           ((AnonShape_006B0C70_7C4FE646 *)param_2[3])->field_0004 -
                                           1);
                              piVar17 = aiStack_314 + local_108[0];
                              if (*piVar17 == 0) {
                                piVar17 = aiStack_314 + local_108[0];
                                puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                *piVar17 = (int)puVar11;
                              }
                              local_144 = local_11c;
                              local_140 = local_138;
                              local_13c = local_254[0];
                              Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar17,&local_144);
                              local_4c[7] = local_4c[7] + -1;
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                              goto LAB_004b5f7b;
                              local_10c = local_10c + -1;
                              uVar22 = 0;
                              do {
                                uVar19 = uVar22 & 0x80000001;
                                if ((int)uVar19 < 0) {
                                  uVar19 = (uVar19 - 1 | 0xfffffffe) + 1;
                                }
                                *(ushort *)
                                 (local_27c +
                                 (uVar19 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                           ((int)uVar22 / 2 + local_138) * (int)g_worldGrid.sizeX) *
                                 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                uVar22 = uVar22 + 1;
                              } while ((int)uVar22 < 4);
                              break;
                            }
LAB_004b5101:
                            if (local_4c[7] != 0) goto cf_common_join_004B5648;
                            if (local_274 == 0) {
                              local_64 = local_64 + -2;
                              if (local_64 < 0) {
                                local_64 = 0;
                              }
                              local_274 = 1;
                              goto cf_continue_loop_004B48CC;
                            }
                            if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 8) {
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != local_ac)
                              goto cf_common_join_004B5648;
                              pDVar12 = (DArrayTy *)aiStack_314[local_108[0]];
                              if ((pDVar12 == (DArrayTy *)0x0) || (pDVar12->count == 0)) {
LAB_004b51da:
                                bVar29 = true;
                              }
                              else {
                                bVar29 = false;
                                iVar10 = -1;
                                uVar22 = 0;
                                if (0 < (int)pDVar12->count) {
                                  do {
                                    DArrayGetElement(pDVar12,uVar22,&local_144);
                                    iVar27 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar10 < 0) || (iVar27 < iVar10)) {
                                      iVar10 = iVar27;
                                    }
                                    uVar22 = uVar22 + 1;
                                    pDVar12 = (DArrayTy *)aiStack_314[local_108[0]];
                                  } while ((int)uVar22 < (int)pDVar12->count);
                                }
                                if ((iVar10 < 0) ||
                                   ((*(int *)(&DAT_00794fe4 + local_108[0] * 4) * 3) / 0x192 <
                                    iVar10)) goto LAB_004b51da;
                              }
                              if (bVar29) {
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                local_a0 = local_108[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[3],
                                             ((AnonShape_006B0C70_7C4FE646 *)param_2[3])->field_0004
                                             - 1);
                                piVar17 = aiStack_314 + local_108[0];
                                if (*piVar17 == 0) {
                                  piVar17 = aiStack_314 + local_108[0];
                                  puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                  *piVar17 = (int)puVar11;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar17,&local_144);
                                local_4c[8] = local_4c[8] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                                goto LAB_004b5f7b;
                                local_10c = local_10c + -1;
                                uVar22 = 0;
                                do {
                                  uVar19 = uVar22 & 0x80000001;
                                  if ((int)uVar19 < 0) {
                                    uVar19 = (uVar19 - 1 | 0xfffffffe) + 1;
                                  }
                                  *(ushort *)
                                   (local_27c +
                                   (uVar19 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                             ((int)uVar22 / 2 + local_138) * (int)g_worldGrid.sizeX)
                                   * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                  uVar22 = uVar22 + 1;
                                } while ((int)uVar22 < 4);
                                break;
                              }
                            }
                            if (local_4c[8] != 0) goto cf_common_join_004B5648;
                            if (local_26c == 0) {
                              local_64 = local_64 + -2;
                              if (local_64 < 0) {
                                local_64 = 0;
                              }
                              local_26c = 1;
                              goto cf_continue_loop_004B48CC;
                            }
                            if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 9) {
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != local_ac)
                              goto cf_common_join_004B5648;
                              pDVar12 = (DArrayTy *)aiStack_314[local_108[0]];
                              if ((pDVar12 == (DArrayTy *)0x0) || (pDVar12->count == 0)) {
LAB_004b52b6:
                                bVar29 = true;
                              }
                              else {
                                bVar29 = false;
                                iVar10 = -1;
                                uVar22 = 0;
                                if (0 < (int)pDVar12->count) {
                                  do {
                                    DArrayGetElement(pDVar12,uVar22,&local_144);
                                    iVar27 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar10 < 0) || (iVar27 < iVar10)) {
                                      iVar10 = iVar27;
                                    }
                                    uVar22 = uVar22 + 1;
                                    pDVar12 = (DArrayTy *)aiStack_314[local_108[0]];
                                  } while ((int)uVar22 < (int)pDVar12->count);
                                }
                                if ((local_108[0] == 0x69) || (local_108[0] == 0x6a)) {
                                  iVar27 = 10;
                                }
                                else {
                                  iVar27 = 0;
                                }
                                if ((iVar10 < 0) || ((int)((uint)(iVar27 * 3) / 2) < iVar10))
                                goto LAB_004b52b6;
                              }
                              if (bVar29) {
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                local_a0 = local_108[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[3],
                                             ((AnonShape_006B0C70_7C4FE646 *)param_2[3])->field_0004
                                             - 1);
                                piVar17 = aiStack_314 + local_108[0];
                                if (*piVar17 == 0) {
                                  piVar17 = aiStack_314 + local_108[0];
                                  puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                  *piVar17 = (int)puVar11;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar17,&local_144);
                                local_4c[9] = local_4c[9] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                                goto LAB_004b5f7b;
                                local_10c = local_10c + -1;
                                uVar22 = 0;
                                do {
                                  uVar19 = uVar22 & 0x80000001;
                                  if ((int)uVar19 < 0) {
                                    uVar19 = (uVar19 - 1 | 0xfffffffe) + 1;
                                  }
                                  *(ushort *)
                                   (local_27c +
                                   (uVar19 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                             ((int)uVar22 / 2 + local_138) * (int)g_worldGrid.sizeX)
                                   * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                  uVar22 = uVar22 + 1;
                                } while ((int)uVar22 < 4);
                                break;
                              }
                            }
                            if (local_4c[9] != 0) goto cf_common_join_004B5648;
                            if (local_5c == 0) {
                              local_64 = local_64 + -1;
                              if (local_64 < 0) {
                                local_64 = 0;
                              }
                              local_5c = 1;
                              goto cf_continue_loop_004B48CC;
                            }
                            if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 10) {
                              local_128 = 0;
                              iVar10 = -1;
                              local_354 = 0;
                              GVar16 = local_108[0];
                              do {
                                if (((*(int *)(&DAT_00790950 + local_354) == 10) &&
                                    (pDVar12 = *(DArrayTy **)((int)local_24c + local_354),
                                    pDVar12 != (DArrayTy *)0x0)) &&
                                   (uVar22 = 0, 0 < (int)pDVar12->count)) {
                                  do {
                                    DArrayGetElement(pDVar12,uVar22,&local_144);
                                    iVar27 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar10 < 0) || (iVar27 < iVar10)) {
                                      iVar10 = iVar27;
                                    }
                                    uVar22 = uVar22 + 1;
                                    GVar16 = local_108[0];
                                  } while ((int)uVar22 < (int)pDVar12->count);
                                }
                                local_354 = local_354 + 4;
                              } while (local_354 < 0x108);
                              local_78 = thunk_FUN_004e81b0(param_1,GVar16 - 0x32,0);
                              puVar28 = local_27c;
                              if ((iVar10 < 0) || (uVar22 = local_128, local_78 < iVar10)) {
                                local_258 = 0;
                                local_264 = 0;
                                local_260 = 0;
                                local_25c = 0;
                                local_12c = 0;
                                local_120 = 1;
                                if (local_78 < 1) {
                                  uVar22 = (uint)(local_78 * 2 < 1);
                                }
                                else {
                                  local_35c = local_138;
                                  local_358 = local_138;
                                  do {
                                    local_358 = local_358 + 1;
                                    local_35c = local_35c + -1;
                                    if ((local_264 == 0) &&
                                       ((local_11c - local_138) + local_358 < g_worldGrid.sizeX + -1
                                       )) {
                                      if (*(short *)(local_27c +
                                                    (g_worldGrid.sizeX * local_138 +
                                                     local_11c +
                                                     g_worldGrid.planeStride * local_254[0] +
                                                    local_120) * 2) == 0) {
                                        local_12c = local_12c + 1;
                                      }
                                      else {
                                        local_264 = 1;
                                      }
                                    }
                                    if ((local_260 == 0) &&
                                       (0 < (local_11c - local_138) + local_358)) {
                                      if (*(short *)(local_27c +
                                                    (((g_worldGrid.planeStride * local_254[0] +
                                                      g_worldGrid.sizeX * local_138) - local_120) +
                                                    local_11c) * 2) == 0) {
                                        local_12c = local_12c + 1;
                                      }
                                      else {
                                        local_260 = 1;
                                      }
                                    }
                                    if ((local_25c == 0) && (local_358 < g_worldGrid.sizeY + -1)) {
                                      if (*(short *)(local_27c +
                                                    (g_worldGrid.planeStride * local_254[0] +
                                                    local_11c + g_worldGrid.sizeX * local_358) * 2)
                                          == 0) {
                                        local_12c = local_12c + 1;
                                      }
                                      else {
                                        local_25c = 1;
                                      }
                                    }
                                    if ((local_258 == 0) && (0 < local_358)) {
                                      if (*(short *)(local_27c +
                                                    (g_worldGrid.planeStride * local_254[0] +
                                                    local_11c + g_worldGrid.sizeX * local_35c) * 2)
                                          == 0) {
                                        local_12c = local_12c + 1;
                                      }
                                      else {
                                        local_258 = 1;
                                      }
                                    }
                                    local_120 = local_120 + 1;
                                  } while (local_120 <= local_78);
                                  uVar22 = (uint)(local_78 * 2 <= local_12c);
                                }
                              }
                              if (uVar22 != 0) {
                                local_a0 = local_108[0];
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[3],
                                             ((AnonShape_006B0C70_7C4FE646 *)param_2[3])->field_0004
                                             - 1);
                                piVar17 = aiStack_314 + local_108[0];
                                if (*piVar17 == 0) {
                                  piVar17 = aiStack_314 + local_108[0];
                                  puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                  *piVar17 = (int)puVar11;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar17,&local_144);
                                local_4c[10] = local_4c[10] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
                                  local_10c = local_10c + -1;
                                  uVar22 = 0;
                                  do {
                                    uVar19 = uVar22 & 0x80000001;
                                    if ((int)uVar19 < 0) {
                                      uVar19 = (uVar19 - 1 | 0xfffffffe) + 1;
                                    }
                                    *(ushort *)
                                     (local_27c +
                                     (uVar19 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                               ((int)uVar22 / 2 + local_138) *
                                               (int)g_worldGrid.sizeX) * 2) =
                                         *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                    uVar22 = uVar22 + 1;
                                  } while ((int)uVar22 < 4);
                                }
                                else {
                                  *(ushort *)
                                   (puVar28 +
                                   (g_worldGrid.sizeX * local_138 +
                                   local_11c + g_worldGrid.planeStride * local_254[0]) * 2) =
                                       *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                }
                                break;
                              }
                            }
                          }
cf_common_join_004B5648:
                          iVar27 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108)
                          ;
                          iVar10 = local_ac;
                          uVar22 = local_268;
                          pDVar12 = local_20;
                        }
                      }
                    }
                  }
                }
                goto cf_continue_loop_004B5FB6;
              }
              local_114 = local_54;
              local_64 = local_54;
              local_54 = local_54 * 2;
              goto LAB_004b40f9;
            }
LAB_004b5fd6:
            if ((((((local_4c[1] == 0) && (local_4c[6] == 0)) && (local_4c[2] == 0)) &&
                 ((local_4c[3] == 0 && (local_4c[7] == 0)))) && (local_4c[8] == 0)) &&
               ((local_4c[9] == 0 && (local_4c[10] == 0)))) goto cf_break_loop_004B60CD;
          }
        }
        iVar27 = local_64 + 1;
      }
      goto cf_break_loop_004B60CD;
    }
    local_74 = 0;
    if (0 < local_64 << 3) {
      do {
        if (local_74 < local_64 * 2) {
          local_11c = (*param_2 - local_64) + local_74;
          local_138 = param_2[1] - local_64;
        }
        else if (local_74 < local_64 * 4) {
          local_11c = local_64 + *param_2;
          local_138 = param_2[1] + local_64 * -3 + local_74;
        }
        else if (local_74 < local_64 * 6) {
          local_11c = (local_64 * 5 - local_74) + *param_2;
          local_138 = param_2[1] + local_64;
        }
        else {
          local_11c = *param_2 - local_64;
          local_138 = (local_64 * 7 + param_2[1]) - local_74;
        }
        if ((((-1 < local_11c) && (local_11c < g_worldGrid.sizeX)) && (-1 < local_138)) &&
           ((local_138 < g_worldGrid.sizeY &&
            (local_254[0] = 0, puVar28 = local_27c, 0 < g_worldGrid.sizeZ)))) {
          do {
            iVar10 = g_worldGrid.sizeX * local_138 +
                     local_11c + g_worldGrid.planeStride * local_254[0];
            local_58 = (STFishC *)g_worldGrid.cells[iVar10].objects[0];
            if (local_58 == (STFishC *)0x0) {
              sVar18 = (short)local_11c;
              if (((((sVar18 < 0) || (g_worldGrid.sizeX <= sVar18)) ||
                   (sVar9 = (short)local_138, sVar9 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar9 || (sVar20 = (short)local_254[0], sVar20 < 0)))) ||
                 (g_worldGrid.sizeZ <= sVar20)) {
                sVar18 = -1;
              }
              else {
                sVar18 = g_pathingGrid.cells
                         [(int)sVar9 * (int)g_pathingGrid.sizeX +
                          (int)sVar20 * (int)g_pathingGrid.planeStride + (int)sVar18];
              }
              if (sVar18 == 0) {
                local_58 = (STFishC *)g_worldGrid.cells[iVar10].objects[1];
                if ((local_58 == (STFishC *)0x0) ||
                   (((iVar27 = (*local_58->vtable->vfunc_2C)((STWorldObject *)local_58),
                     iVar27 != 0xa6 && (iVar27 = (*local_58->vtable->vfunc_2C)(), iVar27 != 0xbd))
                    && ((iVar27 = (*local_58->vtable->vfunc_2C)(), iVar27 != 0xa7 &&
                        (iVar27 = (*local_58->vtable->vfunc_2C)(), iVar27 != 0xaf)))))) {
LAB_004b432d:
                  *(undefined2 *)(puVar28 + iVar10 * 2) = 0;
                }
                else {
                  *(undefined2 *)(puVar28 + iVar10 * 2) = 0x40;
                }
              }
              else {
                if (sVar18 != -1) goto LAB_004b4634;
                *(undefined2 *)(puVar28 + iVar10 * 2) = 0x20;
              }
            }
            else {
              if (*(int *)&local_58->field_0x20 == 1000) {
                local_34c = (*local_58->vtable->vfunc_2C)((STWorldObject *)local_58);
              }
              else {
                if (*(int *)&local_58->field_0x20 != 0x3e9) goto LAB_004b432d;
                local_34c = *(int *)&local_58->field_0x259;
              }
              uVar22 = *(uint *)&local_58->field_0x24;
              if (uVar22 == param_1) {
                *(ushort *)(puVar28 + iVar10 * 2) =
                     *(ushort *)(&DAT_00790888 + local_34c * 4) | 0x200;
                local_114 = local_64;
                iVar10 = *(int *)(&DAT_00790888 + local_34c * 4);
                if (((iVar10 == 7) || (iVar10 == 8)) || (iVar10 == 9)) {
                  STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
                  if (((local_7c[0] == local_11c) && (local_8c[0] == local_138)) &&
                     (local_a8[0] == local_254[0])) {
                    piVar17 = aiStack_314 + local_34c;
                    if (*piVar17 == 0) {
                      puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                      *piVar17 = (int)puVar11;
                    }
                    local_144 = (int)local_7c[0];
                    local_140 = (int)local_8c[0];
                    local_13c = (int)local_a8[0];
                    Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar17,&local_144);
                  }
                }
                else if (iVar10 == 4) {
                  STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
                  iVar10 = (int)local_7c[0];
                  if (((iVar10 == local_11c) && (iVar27 = (int)local_8c[0], iVar27 == local_138)) &&
                     (iVar21 = (int)local_a8[0], iVar21 == local_254[0])) {
                    piVar17 = local_f4;
                    for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                      *piVar17 = 0;
                      piVar17 = piVar17 + 1;
                    }
                    local_f4[0] = 1;
                    local_f4[1] = iVar10;
                    local_f4[2] = iVar27;
                    local_f4[3] = iVar21;
                    Library::DKW::TBL::FUN_006ae1c0(&local_20->flags,local_f4);
                    puVar28 = local_27c;
                  }
                }
              }
              else {
                if ((uVar22 < 8) &&
                   ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                    ((byte)(&DAT_008087e9)[uVar22 * 0x51] < 8)))) {
                  bVar3 = local_58->field_0x24;
                  if (*(char *)((int)&g_appClass_00806728[0x5d].field_0014 + 3) == '\0') {
                    if (bVar3 == playerId) {
                      iVar27 = 0;
                    }
                    else {
                      uVar22 = (uint)bVar3;
                      uVar19 = param_1 & 0xff;
                      cVar4 = *(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                       uVar19 + uVar22 * 8 + 3);
                      puVar28 = local_27c;
                      if ((cVar4 == '\0') &&
                         (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                   uVar22 + uVar19 * 8 + 3) == '\0')) {
                        iVar27 = -2;
                      }
                      else if ((cVar4 == '\x01') &&
                              (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                        uVar22 + uVar19 * 8 + 3) == '\0')) {
                        iVar27 = -1;
                      }
                      else if ((cVar4 == '\0') &&
                              (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                        uVar22 + uVar19 * 8 + 3) == '\x01')) {
                        iVar27 = 1;
                      }
                      else if ((cVar4 == '\x01') &&
                              (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                        uVar22 + uVar19 * 8 + 3) == '\x01')) {
                        iVar27 = 2;
                      }
                      else {
                        iVar27 = 0;
                      }
                    }
                    bVar29 = iVar27 < 0;
                  }
                  else {
                    bVar29 = *(char *)((param_1 & 0xff) * 0x51 + 0x11ca + (int)g_appClass_00806728)
                             != *(char *)((uint)bVar3 * 0x51 + 0x11ca + (int)g_appClass_00806728);
                  }
                  if (bVar29) {
                    *(ushort *)(puVar28 + iVar10 * 2) =
                         *(ushort *)(&DAT_00790888 + local_34c * 4) | 0x100;
                    goto LAB_004b463a;
                  }
                }
LAB_004b4634:
                *(undefined2 *)(puVar28 + iVar10 * 2) = 0x10;
              }
            }
LAB_004b463a:
            local_254[0] = local_254[0] + 1;
          } while (local_254[0] < g_worldGrid.sizeZ);
        }
        local_74 = local_74 + 1;
      } while (local_74 < local_64 * 8);
    }
    if (local_54 < local_64 - local_114) goto LAB_004b4689;
    local_64 = local_64 + 1;
  } while( true );
  while (*piVar17 != 0) {
LAB_004b56e4:
    uVar22 = pDVar12->iteratorIndex;
    if (uVar22 < pDVar12->count) {
      piVar17 = (int *)(pDVar12->elementSize * uVar22 + (int)pDVar12->data);
      pDVar12->iteratorIndex = uVar22 + 1;
    }
    else {
      piVar17 = (int *)0x0;
    }
    if (piVar17 == (int *)0x0) goto LAB_004b5727;
  }
  *piVar17 = 1;
  piVar17[1] = local_11c;
  piVar17[2] = local_138;
  piVar17[3] = local_254[0];
LAB_004b5727:
  iVar10 = local_4c[4] + -1;
  local_4c[4] = iVar10;
  local_10c = local_10c + -1;
  iVar27 = 0;
  do {
    iVar21 = iVar27 / 6 + -2 + local_138;
    iVar14 = iVar27 % 6 + -2 + local_11c;
    if (((-1 < iVar21) && (iVar21 < g_worldGrid.sizeY)) && (-1 < iVar14)) {
      if ((iVar14 < g_worldGrid.sizeX) &&
         (iVar21 = iVar21 * g_worldGrid.sizeX + iVar14 + g_worldGrid.planeStride * local_254[0],
         *(short *)(local_27c + iVar21 * 2) == 0)) {
        *(ushort *)(local_27c + iVar21 * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
      }
    }
    iVar27 = iVar27 + 1;
  } while (iVar27 < 0x24);
  if (iVar10 == 0) {
    local_64 = 0;
    goto cf_continue_loop_004B48CC;
  }
cf_continue_loop_004B5FB6:
  local_254[0] = local_254[0] + 1;
  if (g_worldGrid.sizeZ + -1 <= local_254[0]) goto LAB_004b5fd6;
  goto LAB_004b49b4;
}

