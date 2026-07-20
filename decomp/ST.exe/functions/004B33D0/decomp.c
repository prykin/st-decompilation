
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_ai_fnd.cpp
   Diagnostic line evidence: 93 | 961 | 962 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int FUN_004b33d0(uint param_1,int *param_2)

{
  uint uVar1;
  DArrayTy **ppDVar2;
  byte bVar3;
  char cVar4;
  STWorldObject *this;
  code *pcVar5;
  DArrayTy *pDVar6;
  AnonShape_006B0CD0_C8D121FA *pAVar7;
  STFishC *pSVar8;
  DArrayTy *pDVar9;
  short sVar10;
  int iVar11;
  uint *puVar12;
  AnonShape_006B0C70_7C4FE646 *pAVar13;
  byte *pbVar14;
  DArrayTy *pDVar15;
  int iVar16;
  int iVar17;
  AnonShape_006ACC70_C8641025 *pAVar18;
  Global_sub_004B1120_param_2Enum GVar19;
  int *piVar20;
  short sVar21;
  uint uVar22;
  short sVar23;
  int iVar24;
  uint uVar25;
  AnonShape_006B0C70_7C4FE646 *pAVar26;
  byte *pbVar27;
  byte *pbVar28;
  undefined4 *puVar29;
  int iVar30;
  undefined1 *puVar31;
  bool bVar32;
  byte bVar33;
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
  AnonShape_006B0CD0_C8D121FA *local_a4;
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
  iVar11 = Library::MSVCRT::__setjmp3
                     (local_2c0.jumpBuffer,2,Library::MSVCRT::FUN_0072da21,0xffffffff);
  local_1c = &stack0xfffffc94;
  if (iVar11 != 0) {
    g_currentExceptionFrame = local_2c0.previous;
    iVar30 = ReportDebugMessage(s_E____titans_Artem_TLO_ai_fnd_cpp_007ac7c8,0x3c1,0,iVar11,
                                &DAT_007a4ccc,s_TLOAiBldPlacesFind_error___007ac7a8);
    if (iVar30 == 0) {
      RaiseInternalException(iVar11,0,s_E____titans_Artem_TLO_ai_fnd_cpp_007ac7c8,0x3c2);
      ExceptionList = local_14;
      return iVar11;
    }
    pcVar5 = (code *)swi(3);
    iVar11 = (*pcVar5)();
    return iVar11;
  }
  local_1c = &stack0xfffffc94;
  if (param_2 == (int *)0x0) {
    local_1c = &stack0xfffffc94;
    RaiseInternalException
              (-5,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_ai_fnd_cpp_007ac7c8,0x5d);
  }
  if (param_2[3] == 0) {
    puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
    param_2[3] = (int)puVar12;
  }
  if (param_2[5] == 0) {
    puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
    param_2[5] = (int)puVar12;
  }
  puVar29 = local_24c;
  for (iVar11 = 0x42; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar29 = 0;
    puVar29 = puVar29 + 1;
  }
  piVar20 = local_4c;
  for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar20 = 0;
    piVar20 = piVar20 + 1;
  }
  iVar30 = 0;
  local_10c = 0;
  *(undefined4 *)(param_2[3] + 4) = 0;
  iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
  if (-1 < iVar11) {
    do {
      local_4c[*(int *)(&DAT_00790888 + local_108[0] * 4)] =
           local_4c[*(int *)(&DAT_00790888 + local_108[0] * 4)] + 1;
      if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
        iVar30 = iVar30 + 1;
      }
      iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
    } while (-1 < iVar11);
    local_10c = iVar30;
  }
  uVar25 = 0;
  pAVar18 = (AnonShape_006ACC70_C8641025 *)param_2[5];
  if (0 < (int)pAVar18->field_000C) {
    do {
      FUN_006acc70(pAVar18,uVar25,&local_a0);
      iVar11 = thunk_FUN_004ae0b0(local_9c,local_98,local_94,local_a0,param_1,(undefined4 *)0x0,
                                  (int *)0x0,(int *)0x0,0,(int *)0x0);
      if (iVar11 == 0) {
        local_304[0] = local_a0;
        local_2f4 = local_90;
        if (param_2[3] == 0) {
          puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
          param_2[3] = (int)puVar12;
        }
        Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[3],local_304);
        FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[5],uVar25);
      }
      else {
        bVar32 = true;
        *(undefined4 *)(param_2[4] + 4) = 0;
        iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[4],&local_70);
        while (-1 < iVar11) {
          if (((local_70 == local_9c) && (local_6c == local_98)) && (local_68 == local_94)) {
            bVar32 = false;
          }
          iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[4],&local_70);
        }
        if (bVar32) {
          uVar25 = uVar25 + 1;
        }
        else {
          if (param_2[3] == 0) {
            puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
            param_2[3] = (int)puVar12;
          }
          Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[3],local_320);
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[5],uVar25);
        }
      }
      pAVar18 = (AnonShape_006ACC70_C8641025 *)param_2[5];
    } while ((int)uVar25 < (int)pAVar18->field_000C);
  }
  bVar33 = (byte)param_1;
  if (((local_4c[0] != 0) || (local_4c[1] != 0)) && (PTR_007fa150 != (DArrayTy *)0x0)) {
    pAVar13 = (AnonShape_006B0C70_7C4FE646 *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x1d,10)
    ;
    PTR_007fa150->iteratorIndex = 0;
    local_a4 = (AnonShape_006B0CD0_C8D121FA *)pAVar13;
    iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_58);
    while (-1 < iVar11) {
      if (local_58 != (STFishC *)0x0) {
        STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
        this = g_worldCells
               [(int)local_8c[0] * (int)SHORT_007fb240 + (int)SHORT_007fb246 * (int)local_a8[0] +
                (int)local_7c[0]].objects[0];
        local_110 = this;
        if (this == (STWorldObject *)0x0) {
          pbVar28 = &local_2ec;
          for (iVar11 = 7; iVar11 != 0; iVar11 = iVar11 + -1) {
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28 = pbVar28 + 4;
          }
          *pbVar28 = 0;
          local_2ec = 1;
          local_2e7 = (*local_58->vtable->vfunc_2C)();
          local_2e3 = (int)local_7c[0];
          local_2df = (int)local_8c[0];
          local_2db = (int)local_a8[0];
          local_2d7 = FUN_006aced8(*param_2,param_2[1],local_2e3,local_2df);
          local_2d3 = 0xffffffff;
          if (param_2[4] != 0) {
            *(undefined4 *)(param_2[4] + 4) = 0;
            iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[4],&local_70);
            while (-1 < iVar11) {
              if (((local_70 == local_2e3) && (local_6c == local_2df)) && (local_68 == local_2db)) {
                local_2ec = local_2ec | 0x20;
                break;
              }
              iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[4],&local_70);
            }
          }
        }
        else {
          if ((this[1].vtable != (STWorldObjectVTable *)param_1) ||
             (((this->value_20 != 1000 ||
               (iVar11 = (*this->vtable->GetObjectTypeId)(this),
               *(int *)(&DAT_00790888 + iVar11 * 4) != 0)) &&
              ((this->value_20 != 0x3e9 ||
               (*(int *)(&DAT_00790888 + *(int *)&local_110[0x10].field_0x19 * 4) != 0))))))
          goto LAB_004b3895;
          pbVar28 = &local_2ec;
          for (iVar11 = 7; iVar11 != 0; iVar11 = iVar11 + -1) {
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28 = pbVar28 + 4;
          }
          *pbVar28 = 0;
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
        Library::DKW::TBL::FUN_006ae1c0((uint *)pAVar13,(undefined4 *)&local_2ec);
      }
LAB_004b3895:
      iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_58);
    }
    if (local_4c[0] != 0) {
      *(undefined4 *)(param_2[3] + 4) = 0;
      iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
      while (-1 < iVar11) {
        switch(local_108[0]) {
        case CASE_39:
        case CASE_5E:
          iVar11 = 0xdd;
          pAVar13->field_0004 = 0;
          pbVar28 = (byte *)0x0;
          break;
        default:
          goto switchD_004b38f0_caseD_3a;
        case CASE_4F:
        case CASE_61:
          iVar11 = 0xde;
          pAVar13->field_0004 = 0;
          pbVar28 = (byte *)0x0;
        }
        while( true ) {
          pbVar27 = pbVar28;
          uVar25 = pAVar13->field_0004;
          if (uVar25 < (uint)pAVar13->field_000C) {
            pbVar14 = (byte *)(pAVar13->field_0008 * uVar25 + pAVar13->field_001C);
            pAVar13->field_0004 = uVar25 + 1;
          }
          else {
            pbVar14 = (byte *)0x0;
          }
          if (pbVar14 == (byte *)0x0) break;
          bVar3 = *pbVar14;
          pbVar28 = pbVar27;
          if ((((((bVar3 & 1) != 0) && ((bVar3 & 4) == 0)) && (*(int *)(pbVar14 + 5) == iVar11)) &&
              (pbVar28 = pbVar14, pbVar27 != (byte *)0x0)) &&
             ((pAVar13 = (AnonShape_006B0C70_7C4FE646 *)local_a4, (bVar3 & 0x20) < (*pbVar27 & 0x20)
              || ((pbVar28 = pbVar27, ((*pbVar27 ^ *pbVar14) & 0x20) == 0 &&
                  (*(int *)(pbVar14 + 0x15) < *(int *)(pbVar27 + 0x15))))))) {
            pbVar28 = pbVar14;
          }
        }
        if (pbVar27 != (byte *)0x0) {
          *pbVar27 = *pbVar27 | 4;
          if (local_108[0] == CASE_61) {
            *pbVar27 = *pbVar27 | 8;
          }
          local_9c = *(int *)(pbVar27 + 9);
          local_98 = *(int *)(pbVar27 + 0xd);
          local_94 = *(int *)(pbVar27 + 0x11);
          local_a0 = local_108[0];
          local_90 = local_f8;
          Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
          local_4c[0] = local_4c[0] + -1;
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[3],
                       ((AnonShape_006B0C70_7C4FE646 *)param_2[3])->field_0004 - 1);
        }
        if (local_4c[0] == 0) break;
switchD_004b38f0_caseD_3a:
        iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
      }
    }
    ppDVar2 = &g_playerRuntime[param_1].field2171_0x9ea;
    if (*ppDVar2 != (DArrayTy *)0x0) {
      (*ppDVar2)->iteratorIndex = 0;
      iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)*ppDVar2,&local_58);
      while (iVar11 != 0) {
        STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
        local_88 = -1;
        pAVar13->field_0004 = 0;
        pbVar28 = (byte *)0x0;
        while( true ) {
          uVar25 = pAVar13->field_0004;
          if (uVar25 < (uint)pAVar13->field_000C) {
            pbVar27 = (byte *)(pAVar13->field_0008 * uVar25 + pAVar13->field_001C);
            pAVar13->field_0004 = uVar25 + 1;
          }
          else {
            pbVar27 = (byte *)0x0;
          }
          if (pbVar27 == (byte *)0x0) break;
          if ((((*pbVar27 & 6) != 0) && ((*pbVar27 & 0x18) == 0)) &&
             ((iVar11 = FUN_006aced8((int)local_7c[0],(int)local_8c[0],*(int *)(pbVar27 + 9),
                                     *(int *)(pbVar27 + 0xd)), pbVar28 == (byte *)0x0 ||
              (iVar11 < local_88)))) {
            pbVar28 = pbVar27;
            local_88 = iVar11;
          }
        }
        if (pbVar28 != (byte *)0x0) {
          if (local_88 < 0xf) {
            *pbVar28 = *pbVar28 | 0x10;
          }
          else if ((*(int *)(pbVar28 + 0x19) < 0) || (local_88 < *(int *)(pbVar28 + 0x19))) {
            *(int *)(pbVar28 + 0x19) = local_88;
          }
        }
        iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)*ppDVar2,&local_58);
      }
    }
    if (local_4c[1] != 0) {
      uVar25 = 0;
      if (0 < (int)pAVar13->field_000C) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pAVar13,uVar25,(undefined4 *)&local_2ec);
          if (((local_2ec & 0x18) == 0) && (((local_2ec & 1) == 0 || ((local_2ec & 4) != 0)))) {
            uVar25 = uVar25 + 1;
          }
          else {
            FUN_006b0c70(pAVar13,uVar25);
          }
        } while ((int)uVar25 < (int)pAVar13->field_000C);
      }
      uVar25 = pAVar13->field_000C;
      if (local_4c[1] < (int)uVar25) {
        do {
          local_50 = 0;
          pAVar26 = pAVar13;
          uVar22 = 0;
          if (uVar25 != 1 && -1 < (int)(uVar25 - 1)) {
            do {
              pAVar13 = (AnonShape_006B0C70_7C4FE646 *)local_a4;
              if (uVar22 < uVar25) {
                pbVar28 = (byte *)(pAVar26->field_0008 * uVar22 + pAVar26->field_001C);
              }
              else {
                pbVar28 = (byte *)0x0;
              }
              uVar1 = uVar22 + 1;
              if (uVar1 < uVar25) {
                pbVar27 = (byte *)(pAVar26->field_0008 * uVar1 + pAVar26->field_001C);
              }
              else {
                pbVar27 = (byte *)0x0;
              }
              if (((*pbVar27 & 0x20) < (*pbVar28 & 0x20)) ||
                 ((((*pbVar28 ^ *pbVar27) & 0x20) == 0 &&
                  (*(int *)(pbVar27 + 0x15) < *(int *)(pbVar28 + 0x15))))) {
                FUN_006b0cd0(local_a4,uVar22,uVar1);
                local_50 = 1;
              }
              uVar25 = ((AnonShape_006B0CD0_C8D121FA *)pAVar13)->field_000C;
              pAVar26 = pAVar13;
              uVar22 = uVar1;
            } while ((int)uVar1 < (int)(uVar25 - 1));
          }
        } while (local_50 != 0);
      }
      pAVar13->field_0004 = 0;
      iVar11 = thunk_FUN_004406c0(bVar33);
      local_134 = (-(uint)((char)iVar11 != '\x03') & 0xffffffdb) + 0x60;
      *(undefined4 *)(param_2[3] + 4) = 0;
      iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
      while (-1 < iVar11) {
        if (local_108[0] == local_134) {
          uVar25 = pAVar13->field_0004;
          if (uVar25 < (uint)pAVar13->field_000C) {
            pbVar28 = (byte *)(pAVar13->field_0008 * uVar25 + pAVar13->field_001C);
            pAVar13->field_0004 = uVar25 + 1;
          }
          else {
            pbVar28 = (byte *)0x0;
          }
          if (pbVar28 == (byte *)0x0) break;
          local_11c = *(int *)(pbVar28 + 9);
          local_138 = *(int *)(pbVar28 + 0xd);
          local_254[0] = *(int *)(pbVar28 + 0x11);
          iVar11 = thunk_FUN_004b1120(param_1,local_134,&local_11c,&local_138,local_254,0,1);
          if ((iVar11 != 0) &&
             ((*(int *)(pbVar28 + 0x19) < 0 ||
              (iVar11 = FUN_006aced8(local_11c,local_138,*(int *)(pbVar28 + 9),
                                     *(int *)(pbVar28 + 0xd)), iVar11 < *(int *)(pbVar28 + 0x19)))))
          {
            *pbVar28 = *pbVar28 | 0x10;
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
        iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
      }
    }
    FUN_006ae110((byte *)pAVar13);
  }
  iVar11 = 0;
LAB_004b3d9a:
  if (10 < iVar11) {
cf_break_loop_004B60CD:
    if (local_20 != (DArrayTy *)0x0) {
      FUN_006ae110((byte *)local_20);
    }
    puVar29 = local_24c;
    iVar11 = 0x42;
    do {
      if ((byte *)*puVar29 != (byte *)0x0) {
        FUN_006ae110((byte *)*puVar29);
      }
      puVar29 = puVar29 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    g_currentExceptionFrame = local_2c0.previous;
    ExceptionList = local_14;
    return 0;
  }
  if (local_4c[iVar11] == 0) {
    iVar11 = iVar11 + 1;
    goto LAB_004b3d9a;
  }
  local_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  puVar29 = (undefined4 *)&stack0xfffffc94;
  for (uVar25 = ((int)SHORT_007fb244 * (int)SHORT_007fb246 & 0x7fffffffU) >> 1; uVar25 != 0;
      uVar25 = uVar25 - 1) {
    *puVar29 = 0xffffffff;
    puVar29 = puVar29 + 1;
  }
  for (uVar25 = (int)SHORT_007fb244 * (int)SHORT_007fb246 * 2 & 3; uVar25 != 0; uVar25 = uVar25 - 1)
  {
    *(undefined1 *)puVar29 = 0xff;
    puVar29 = (undefined4 *)((int)puVar29 + 1);
  }
  local_27c = &stack0xfffffc94;
  iVar11 = local_144;
  iVar30 = local_140;
  iVar24 = local_13c;
  local_1c = &stack0xfffffc94;
  if (local_4c[2] != 0) {
    local_27c = &stack0xfffffc94;
    local_1c = &stack0xfffffc94;
    pDVar15 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
    local_22c = pDVar15;
    if ((PTR_007fa16c != (DArrayTy *)0x0) && (uVar25 = 0, 0 < (int)PTR_007fa16c->count)) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)PTR_007fa16c,uVar25,&local_58);
        STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
        local_144 = (int)local_7c[0];
        local_140 = (int)local_8c[0];
        local_13c = (int)local_a8[0];
        Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar15,&local_144);
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < (int)PTR_007fa16c->count);
    }
    iVar16 = param_2[5];
    iVar11 = local_144;
    iVar30 = local_140;
    iVar24 = local_13c;
    if ((iVar16 != 0) && (*(int *)(iVar16 + 0xc) != 0)) {
      *(undefined4 *)(iVar16 + 4) = 0;
      iVar16 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
      iVar11 = local_144;
      iVar30 = local_140;
      iVar24 = local_13c;
      local_144 = local_9c;
      local_140 = local_98;
      local_13c = local_94;
      while (local_9c = local_144, local_98 = local_140, local_94 = local_13c, -1 < iVar16) {
        if (local_a0 == 0x3a) {
          Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar15,&local_144);
          iVar11 = local_144;
          iVar30 = local_140;
          iVar24 = local_13c;
        }
        local_13c = iVar24;
        local_140 = iVar30;
        local_144 = iVar11;
        iVar16 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
        iVar11 = local_144;
        iVar30 = local_140;
        iVar24 = local_13c;
        local_144 = local_9c;
        local_140 = local_98;
        local_13c = local_94;
      }
    }
  }
  local_13c = iVar24;
  local_140 = iVar30;
  local_144 = iVar11;
  iVar11 = local_144;
  iVar30 = local_140;
  iVar24 = local_13c;
  if (local_4c[3] != 0) {
    local_184 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
    pDVar15 = g_playerRuntime[param_1].field2166_0x9d6;
    if ((pDVar15 != (DArrayTy *)0x0) && (uVar25 = 0, 0 < (int)pDVar15->count)) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar15,uVar25,&local_58);
        STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
        local_144 = (int)local_7c[0];
        local_140 = (int)local_8c[0];
        local_13c = (int)local_a8[0];
        Library::DKW::TBL::FUN_006ae1c0(&local_184->flags,&local_144);
        uVar25 = uVar25 + 1;
        pDVar15 = g_playerRuntime[param_1].field2166_0x9d6;
      } while ((int)uVar25 < (int)pDVar15->count);
    }
    iVar16 = param_2[5];
    iVar11 = local_144;
    iVar30 = local_140;
    iVar24 = local_13c;
    if ((iVar16 != 0) && (*(int *)(iVar16 + 0xc) != 0)) {
      *(undefined4 *)(iVar16 + 4) = 0;
      iVar16 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
      iVar11 = local_144;
      iVar30 = local_140;
      iVar24 = local_13c;
      local_144 = local_9c;
      local_140 = local_98;
      local_13c = local_94;
      while (local_9c = local_144, local_98 = local_140, local_94 = local_13c, -1 < iVar16) {
        if (local_a0 == 100) {
          Library::DKW::TBL::FUN_006ae1c0(&local_184->flags,&local_144);
          iVar11 = local_144;
          iVar30 = local_140;
          iVar24 = local_13c;
        }
        local_13c = iVar24;
        local_140 = iVar30;
        local_144 = iVar11;
        iVar16 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
        iVar11 = local_144;
        iVar30 = local_140;
        iVar24 = local_13c;
        local_144 = local_9c;
        local_140 = local_98;
        local_13c = local_94;
      }
    }
  }
  local_13c = iVar24;
  local_140 = iVar30;
  local_144 = iVar11;
  local_54 = local_4c[10] + local_4c[8] + local_4c[9] + local_4c[7] + local_4c[4] + 5 + local_4c[6];
  local_20 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x30,10);
  local_64 = 0;
  local_114 = 0;
LAB_004b40f9:
  do {
    sVar21 = (short)_SHORT_007fb240;
    if ((short)_SHORT_007fb240 <= SHORT_007fb242) {
      sVar21 = SHORT_007fb242;
    }
    if (sVar21 <= local_64) {
LAB_004b4689:
      *(undefined4 *)(param_2[5] + 4) = 0;
      iVar16 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
      puVar31 = local_27c;
      pDVar15 = local_22c;
      pDVar6 = local_184;
      pAVar7 = local_a4;
      GVar19 = local_a0;
      iVar11 = local_9c;
      iVar30 = local_98;
      iVar24 = local_94;
      pSVar8 = local_58;
      pDVar9 = local_20;
      while (local_27c = puVar31, local_22c = pDVar15, local_184 = pDVar6, local_a4 = pAVar7,
            local_a0 = GVar19, local_9c = iVar11, local_98 = iVar30, local_94 = iVar24,
            local_58 = pSVar8, local_20 = pDVar9, -1 < iVar16) {
        if (*(int *)(&DAT_00791d68 + GVar19 * 4) == 1) {
          uVar25 = 0;
          do {
            uVar22 = uVar25 & 0x80000001;
            if ((int)uVar22 < 0) {
              uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
            }
            iVar16 = (int)uVar25 / 2 + iVar30;
            *(ushort *)
             (puVar31 + (SHORT_007fb240 * iVar16 + uVar22 + iVar11 + SHORT_007fb246 * iVar24) * 2) =
                 *(ushort *)(&DAT_00790888 + GVar19 * 4) | 0x200;
            uVar25 = uVar25 + 1;
            local_138 = iVar16;
            local_11c = uVar22 + iVar11;
          } while ((int)uVar25 < 4);
        }
        else {
          *(ushort *)(puVar31 + (SHORT_007fb246 * iVar24 + iVar11 + SHORT_007fb240 * iVar30) * 2) =
               *(ushort *)(&DAT_00790888 + GVar19 * 4) | 0x200;
          local_138 = iVar30;
          local_11c = iVar11;
        }
        local_254[0] = iVar24;
        iVar16 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
        puVar31 = local_27c;
        pDVar15 = local_22c;
        pDVar6 = local_184;
        pAVar7 = local_a4;
        GVar19 = local_a0;
        iVar11 = local_9c;
        iVar30 = local_98;
        iVar24 = local_94;
        pSVar8 = local_58;
        pDVar9 = local_20;
      }
      iVar30 = 0;
      PTR_007fa150->iteratorIndex = 0;
      iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_58);
      puVar31 = local_27c;
      while (-1 < iVar11) {
        if (local_58 != (STFishC *)0x0) {
          STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
          iVar11 = (int)local_8c[0] * (int)SHORT_007fb240 + (int)SHORT_007fb246 * (int)local_a8[0] +
                   (int)local_7c[0];
          sVar21 = *(short *)(puVar31 + iVar11 * 2);
          if ((sVar21 == 0) || (sVar21 == -1)) {
            *(undefined2 *)(puVar31 + iVar11 * 2) = 0x80;
          }
        }
        iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_58);
      }
      if ((local_4c[4] != 0) || (local_4c[5] != 0)) {
        *(undefined4 *)(param_2[3] + 4) = 0;
        iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
        while (-1 < iVar11) {
          if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 4) {
            piVar20 = local_f4;
            for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
              *piVar20 = 0;
              piVar20 = piVar20 + 1;
            }
            local_f4[0] = 0;
            Library::DKW::TBL::FUN_006ae1c0(&local_20->flags,local_f4);
          }
          iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
        }
      }
      local_5c = 0;
      local_26c = 0;
      local_274 = 0;
      local_60 = 0;
      while( true ) {
        local_64 = iVar30;
        sVar21 = (short)_SHORT_007fb240;
        if ((short)_SHORT_007fb240 <= SHORT_007fb242) {
          sVar21 = SHORT_007fb242;
        }
        if (sVar21 <= iVar30) break;
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
          if ((((-1 < local_11c) && (local_11c < SHORT_007fb240)) && (-1 < local_138)) &&
             (local_138 < SHORT_007fb242)) {
            local_254[0] = 0;
            if (SHORT_007fb244 != 1 && -1 < SHORT_007fb244 + -1) {
LAB_004b49b4:
              iVar24 = (int)SHORT_007fb246;
              iVar16 = iVar24 * local_254[0];
              iVar11 = SHORT_007fb240 * local_138;
              iVar30 = iVar11 + iVar16 + local_11c;
              if (*(short *)(local_27c + iVar30 * 2) != -1) {
                if ((*(short *)(local_27c + iVar30 * 2) == 0) &&
                   (*(short *)(local_27c + ((local_254[0] + 1) * iVar24 + iVar11 + local_11c) * 2)
                    == 0)) {
                  local_124 = 0;
                  if ((local_10c != 0) &&
                     (local_118 = iVar30 + 1, *(short *)(local_27c + local_118 * 2) == 0)) {
                    iVar30 = (local_138 + 1) * (int)SHORT_007fb240 + iVar16 + local_11c;
                    local_118 = iVar30;
                    if ((*(short *)(local_27c + iVar30 * 2) == 0) &&
                       (local_118 = iVar30 + 1, *(short *)(local_27c + (iVar30 + 1) * 2) == 0)) {
                      local_124 = 1;
                    }
                  }
                  if (local_254[0] < 1) {
                    bVar32 = true;
                  }
                  else {
                    iVar24 = (local_254[0] + -1) * iVar24;
                    iVar11 = iVar24 + iVar11 + local_11c;
                    local_118 = iVar11;
                    bVar32 = *(short *)(local_27c + iVar11 * 2) == 0x20;
                    if (!bVar32) goto cf_continue_loop_004B5FB6;
                    if ((local_10c != 0) && (local_124 != 0)) {
                      local_124 = 0;
                      local_118 = iVar11 + 1;
                      if (*(short *)(local_27c + (iVar11 + 1) * 2) == 0x20) {
                        iVar11 = (local_138 + 1) * (int)SHORT_007fb240 + iVar24 + local_11c;
                        local_118 = iVar11;
                        if ((*(short *)(local_27c + iVar11 * 2) == 0x20) &&
                           (local_118 = iVar11 + 1, *(short *)(local_27c + (iVar11 + 1) * 2) == 0x20
                           )) {
                          local_124 = 1;
                        }
                      }
                    }
                  }
                  iVar11 = local_118;
                  if (bVar32) {
                    local_80 = 1;
                    iVar30 = 0;
                    do {
                      if (iVar30 != 4) {
                        iVar24 = iVar30 / 3 + -1 + local_138;
                        iVar17 = iVar30 % 3 + -1 + local_11c;
                        if ((((-1 < iVar24) && (iVar24 < SHORT_007fb242)) && (-1 < iVar17)) &&
                           (((iVar17 < SHORT_007fb240 &&
                             (sVar21 = *(short *)(local_27c +
                                                 (iVar24 * SHORT_007fb240 + iVar17 + iVar16) * 2),
                             sVar21 != 0)) && ((sVar21 != 0x10 && (sVar21 != 0x20)))))) {
                          bVar32 = false;
                          goto LAB_004b4bd1;
                        }
                      }
                      iVar30 = iVar30 + 1;
                    } while (iVar30 < 9);
                    bVar32 = true;
LAB_004b4bd1:
                    if (bVar32) {
                      iVar30 = thunk_FUN_004406c0(bVar33);
                      pDVar6 = local_184;
                      pDVar15 = local_22c;
                      local_270 = 0;
                      if ((char)iVar30 == '\x03') {
                        if (local_4c[3] != 0) {
                          if ((local_184 == (DArrayTy *)0x0) || (local_184->count == 0)) {
                            local_270 = 1;
                          }
                          else {
                            local_270 = 1;
                            uVar25 = 0;
                            if (0 < (int)local_184->count) {
                              do {
                                FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar6,uVar25,&local_144
                                            );
                                uVar22 = local_144 - local_11c >> 0x1f;
                                if (((int)((local_144 - local_11c ^ uVar22) - uVar22) < 0x10) ||
                                   (uVar22 = local_140 - local_138 >> 0x1f,
                                   (int)((local_140 - local_138 ^ uVar22) - uVar22) < 0x10)) {
                                  local_270 = 0;
                                  break;
                                }
                                uVar25 = uVar25 + 1;
                              } while ((int)uVar25 < (int)pDVar6->count);
                            }
                          }
                        }
                      }
                      else if (local_4c[2] != 0) {
                        if ((local_22c != (DArrayTy *)0x0) && (local_22c->count != 0)) {
                          iVar30 = -1;
                          uVar25 = 0;
                          if (0 < (int)local_22c->count) {
                            do {
                              FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar15,uVar25,&local_144)
                              ;
                              iVar11 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                              if ((iVar30 < 0) || (iVar11 < iVar30)) {
                                iVar30 = iVar11;
                              }
                              uVar25 = uVar25 + 1;
                            } while ((int)uVar25 < (int)pDVar15->count);
                          }
                          if ((-1 < iVar30) && (iVar11 = local_118, iVar30 < 0xe))
                          goto LAB_004b4c78;
                        }
                        local_270 = 1;
                        iVar11 = local_118;
                      }
LAB_004b4c78:
                      if (((local_270 == 0) ||
                          (iVar30 = thunk_FUN_004406c0(bVar33), (char)iVar30 == '\x03')) &&
                         (local_10c != 0)) {
                        if (local_124 != 0) {
                          uVar25 = 0;
                          do {
                            if (((uVar25 != 4) && (uVar25 != 5)) && ((uVar25 != 8 && (uVar25 != 9)))
                               ) {
                              iVar30 = ((int)(uVar25 + ((int)uVar25 >> 0x1f & 3U)) >> 2) + -1 +
                                       local_138;
                              uVar22 = uVar25 & 0x80000003;
                              if ((int)uVar22 < 0) {
                                uVar22 = (uVar22 - 1 | 0xfffffffc) + 1;
                              }
                              iVar24 = (uVar22 - 1) + local_11c;
                              if (((-1 < iVar30) && (iVar30 < SHORT_007fb242)) && (-1 < iVar24)) {
                                if ((((iVar24 < SHORT_007fb240) &&
                                     (sVar21 = *(short *)(local_27c +
                                                         (iVar30 * SHORT_007fb240 +
                                                         iVar24 + SHORT_007fb246 * local_254[0]) * 2
                                                         ), sVar21 != 0)) && (sVar21 != 0x10)) &&
                                   (sVar21 != 0x20)) {
                                  local_124 = 0;
                                  break;
                                }
                              }
                            }
                            uVar25 = uVar25 + 1;
                          } while ((int)uVar25 < 0x10);
                          goto LAB_004b4e09;
                        }
LAB_004b4f55:
                        uVar25 = 0;
                      }
                      else {
LAB_004b4e09:
                        if ((local_124 == 0) || (local_4c[4] == 0)) goto LAB_004b4f55;
                        iVar30 = 0;
                        local_12c = 0;
                        do {
                          iVar24 = iVar30 / 6;
                          if (((iVar24 == 0) || (iVar24 == 5)) ||
                             ((iVar30 % 6 == 0 || (iVar30 % 6 == 5)))) {
                            iVar24 = iVar24 + -2 + local_138;
                            iVar16 = iVar30 % 6 + -2 + local_11c;
                            if (((-1 < iVar24) && (iVar24 < SHORT_007fb242)) && (-1 < iVar16)) {
                              if (iVar16 < SHORT_007fb240) {
                                iVar24 = iVar24 * SHORT_007fb240;
                                iVar17 = SHORT_007fb246 * local_254[0] + iVar24 + iVar16;
                                if (0 < local_254[0]) {
                                  iVar11 = (local_254[0] + -1) * (int)SHORT_007fb246 + iVar24 +
                                           iVar16;
                                  local_118 = iVar11;
                                }
                                if ((*(short *)(local_27c + iVar17 * 2) == 0) &&
                                   ((local_254[0] == 0 ||
                                    (*(short *)(local_27c + iVar11 * 2) == 0x20)))) {
LAB_004b4f35:
                                  local_12c = local_12c + 1;
                                }
                                else if (*(short *)(local_27c + iVar17 * 2) == 0x205) {
                                  local_58 = (STFishC *)g_worldCells[iVar17].objects[0];
                                  if (((local_58 != (STFishC *)0x0) &&
                                      (iVar24 = (*local_58->vtable->vfunc_2C)
                                                          ((STWorldObject *)local_58), 0x53 < iVar24
                                      )) && ((iVar24 = (*local_58->vtable->vfunc_2C)(),
                                             iVar24 < 0x5b && (*(int *)&local_58[2].field_0xfd == 0)
                                             ))) goto LAB_004b4f35;
                                }
                              }
                            }
                          }
                          iVar30 = iVar30 + 1;
                        } while (iVar30 < 0x24);
                        uVar25 = (uint)(6 < local_12c);
                      }
                      local_268 = uVar25;
                      if ((local_4c[4] == 0) || (uVar25 != 0)) {
                        if ((local_124 == 0) || (local_10c == 0)) {
                          iVar11 = 0;
                        }
                        else {
                          iVar11 = 1;
                        }
                        *(undefined4 *)(param_2[3] + 4) = 0;
                        local_ac = iVar11;
                        iVar30 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
                        pDVar15 = local_20;
                        while (local_20 = pDVar15, -1 < iVar30) {
                          iVar30 = *(int *)(&DAT_00790888 + local_108[0] * 4);
                          if (iVar30 == 4) {
                            if ((uVar25 == 0) ||
                               (*(int *)(&DAT_00791d68 + local_108[0] * 4) != iVar11))
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
                            pDVar15->iteratorIndex = 0;
                            goto LAB_004b56e4;
                          }
                          if (local_4c[4] != 0) goto cf_common_join_004B5648;
                          if (((iVar30 == 1) || (iVar30 == 6)) || ((iVar30 == 2 || (iVar30 == 3))))
                          {
                            iVar30 = thunk_FUN_004406c0(bVar33);
                            GVar19 = (-(uint)((char)iVar30 != '\x03') & 0xffffffd6) + 100;
                            if (local_270 == 0) {
                              if (local_108[0] == GVar19) goto cf_common_join_004B5648;
LAB_004b5614:
                              if (((local_270 != 0) &&
                                  (iVar30 = thunk_FUN_004406c0(bVar33), (char)iVar30 != '\x03')) ||
                                 (*(int *)(&DAT_00791d68 + local_108[0] * 4) == iVar11)) {
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
                                  uVar25 = 0;
                                  do {
                                    uVar22 = uVar25 & 0x80000001;
                                    if ((int)uVar22 < 0) {
                                      uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
                                    }
                                    *(ushort *)
                                     (local_27c +
                                     (uVar22 + SHORT_007fb246 * local_254[0] + local_11c +
                                               ((int)uVar25 / 2 + local_138) * (int)SHORT_007fb240)
                                     * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                    uVar25 = uVar25 + 1;
                                  } while ((int)uVar25 < 4);
                                  break;
                                }
LAB_004b5f7b:
                                *(ushort *)
                                 (local_27c +
                                 (SHORT_007fb240 * local_138 +
                                 local_11c + SHORT_007fb246 * local_254[0]) * 2) =
                                     *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                break;
                              }
                            }
                            else if (local_108[0] == GVar19) goto LAB_004b5614;
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
                            if (iVar30 == 7) {
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != iVar11)
                              goto cf_common_join_004B5648;
                              pAVar18 = (AnonShape_006ACC70_C8641025 *)aiStack_314[local_108[0]];
                              if ((pAVar18 == (AnonShape_006ACC70_C8641025 *)0x0) ||
                                 (pAVar18->field_000C == 0)) {
LAB_004b50f4:
                                bVar32 = true;
                              }
                              else {
                                bVar32 = false;
                                iVar11 = -1;
                                uVar25 = 0;
                                if (0 < (int)pAVar18->field_000C) {
                                  do {
                                    FUN_006acc70(pAVar18,uVar25,&local_144);
                                    iVar30 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar11 < 0) || (iVar30 < iVar11)) {
                                      iVar11 = iVar30;
                                    }
                                    uVar25 = uVar25 + 1;
                                    pAVar18 = (AnonShape_006ACC70_C8641025 *)
                                              aiStack_314[local_108[0]];
                                  } while ((int)uVar25 < (int)pAVar18->field_000C);
                                }
                                if ((iVar11 < 0) ||
                                   ((*(int *)(&DAT_00794fe4 + local_108[0] * 4) * 3) / 0x192 <
                                    iVar11)) goto LAB_004b50f4;
                              }
                              if (!bVar32) goto LAB_004b5101;
                              local_90 = local_f8;
                              local_9c = local_11c;
                              local_98 = local_138;
                              local_94 = local_254[0];
                              local_a0 = local_108[0];
                              Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                              FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[3],
                                           ((AnonShape_006B0C70_7C4FE646 *)param_2[3])->field_0004 -
                                           1);
                              piVar20 = aiStack_314 + local_108[0];
                              if (*piVar20 == 0) {
                                piVar20 = aiStack_314 + local_108[0];
                                puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                *piVar20 = (int)puVar12;
                              }
                              local_144 = local_11c;
                              local_140 = local_138;
                              local_13c = local_254[0];
                              Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar20,&local_144);
                              local_4c[7] = local_4c[7] + -1;
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                              goto LAB_004b5f7b;
                              local_10c = local_10c + -1;
                              uVar25 = 0;
                              do {
                                uVar22 = uVar25 & 0x80000001;
                                if ((int)uVar22 < 0) {
                                  uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
                                }
                                *(ushort *)
                                 (local_27c +
                                 (uVar22 + SHORT_007fb246 * local_254[0] + local_11c +
                                           ((int)uVar25 / 2 + local_138) * (int)SHORT_007fb240) * 2)
                                     = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                uVar25 = uVar25 + 1;
                              } while ((int)uVar25 < 4);
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
                              pAVar18 = (AnonShape_006ACC70_C8641025 *)aiStack_314[local_108[0]];
                              if ((pAVar18 == (AnonShape_006ACC70_C8641025 *)0x0) ||
                                 (pAVar18->field_000C == 0)) {
LAB_004b51da:
                                bVar32 = true;
                              }
                              else {
                                bVar32 = false;
                                iVar11 = -1;
                                uVar25 = 0;
                                if (0 < (int)pAVar18->field_000C) {
                                  do {
                                    FUN_006acc70(pAVar18,uVar25,&local_144);
                                    iVar30 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar11 < 0) || (iVar30 < iVar11)) {
                                      iVar11 = iVar30;
                                    }
                                    uVar25 = uVar25 + 1;
                                    pAVar18 = (AnonShape_006ACC70_C8641025 *)
                                              aiStack_314[local_108[0]];
                                  } while ((int)uVar25 < (int)pAVar18->field_000C);
                                }
                                if ((iVar11 < 0) ||
                                   ((*(int *)(&DAT_00794fe4 + local_108[0] * 4) * 3) / 0x192 <
                                    iVar11)) goto LAB_004b51da;
                              }
                              if (bVar32) {
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                local_a0 = local_108[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[3],
                                             ((AnonShape_006B0C70_7C4FE646 *)param_2[3])->field_0004
                                             - 1);
                                piVar20 = aiStack_314 + local_108[0];
                                if (*piVar20 == 0) {
                                  piVar20 = aiStack_314 + local_108[0];
                                  puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                  *piVar20 = (int)puVar12;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar20,&local_144);
                                local_4c[8] = local_4c[8] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                                goto LAB_004b5f7b;
                                local_10c = local_10c + -1;
                                uVar25 = 0;
                                do {
                                  uVar22 = uVar25 & 0x80000001;
                                  if ((int)uVar22 < 0) {
                                    uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
                                  }
                                  *(ushort *)
                                   (local_27c +
                                   (uVar22 + SHORT_007fb246 * local_254[0] + local_11c +
                                             ((int)uVar25 / 2 + local_138) * (int)SHORT_007fb240) *
                                   2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                  uVar25 = uVar25 + 1;
                                } while ((int)uVar25 < 4);
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
                              pAVar18 = (AnonShape_006ACC70_C8641025 *)aiStack_314[local_108[0]];
                              if ((pAVar18 == (AnonShape_006ACC70_C8641025 *)0x0) ||
                                 (pAVar18->field_000C == 0)) {
LAB_004b52b6:
                                bVar32 = true;
                              }
                              else {
                                bVar32 = false;
                                iVar11 = -1;
                                uVar25 = 0;
                                if (0 < (int)pAVar18->field_000C) {
                                  do {
                                    FUN_006acc70(pAVar18,uVar25,&local_144);
                                    iVar30 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar11 < 0) || (iVar30 < iVar11)) {
                                      iVar11 = iVar30;
                                    }
                                    uVar25 = uVar25 + 1;
                                    pAVar18 = (AnonShape_006ACC70_C8641025 *)
                                              aiStack_314[local_108[0]];
                                  } while ((int)uVar25 < (int)pAVar18->field_000C);
                                }
                                if ((local_108[0] == 0x69) || (local_108[0] == 0x6a)) {
                                  iVar30 = 10;
                                }
                                else {
                                  iVar30 = 0;
                                }
                                if ((iVar11 < 0) || ((int)((uint)(iVar30 * 3) / 2) < iVar11))
                                goto LAB_004b52b6;
                              }
                              if (bVar32) {
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                local_a0 = local_108[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[3],
                                             ((AnonShape_006B0C70_7C4FE646 *)param_2[3])->field_0004
                                             - 1);
                                piVar20 = aiStack_314 + local_108[0];
                                if (*piVar20 == 0) {
                                  piVar20 = aiStack_314 + local_108[0];
                                  puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                  *piVar20 = (int)puVar12;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar20,&local_144);
                                local_4c[9] = local_4c[9] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                                goto LAB_004b5f7b;
                                local_10c = local_10c + -1;
                                uVar25 = 0;
                                do {
                                  uVar22 = uVar25 & 0x80000001;
                                  if ((int)uVar22 < 0) {
                                    uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
                                  }
                                  *(ushort *)
                                   (local_27c +
                                   (uVar22 + SHORT_007fb246 * local_254[0] + local_11c +
                                             ((int)uVar25 / 2 + local_138) * (int)SHORT_007fb240) *
                                   2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                  uVar25 = uVar25 + 1;
                                } while ((int)uVar25 < 4);
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
                              iVar11 = -1;
                              local_354 = 0;
                              GVar19 = local_108[0];
                              do {
                                if (((*(int *)(&DAT_00790950 + local_354) == 10) &&
                                    (pAVar18 = *(AnonShape_006ACC70_C8641025 **)
                                                ((int)local_24c + local_354),
                                    pAVar18 != (AnonShape_006ACC70_C8641025 *)0x0)) &&
                                   (uVar25 = 0, 0 < (int)pAVar18->field_000C)) {
                                  do {
                                    FUN_006acc70(pAVar18,uVar25,&local_144);
                                    iVar30 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar11 < 0) || (iVar30 < iVar11)) {
                                      iVar11 = iVar30;
                                    }
                                    uVar25 = uVar25 + 1;
                                    GVar19 = local_108[0];
                                  } while ((int)uVar25 < (int)pAVar18->field_000C);
                                }
                                local_354 = local_354 + 4;
                              } while (local_354 < 0x108);
                              local_78 = thunk_FUN_004e81b0(param_1,GVar19 - 0x32,0);
                              puVar31 = local_27c;
                              if ((iVar11 < 0) || (uVar25 = local_128, local_78 < iVar11)) {
                                local_258 = 0;
                                local_264 = 0;
                                local_260 = 0;
                                local_25c = 0;
                                local_12c = 0;
                                local_120 = 1;
                                if (local_78 < 1) {
                                  uVar25 = (uint)(local_78 * 2 < 1);
                                }
                                else {
                                  local_35c = local_138;
                                  local_358 = local_138;
                                  do {
                                    local_358 = local_358 + 1;
                                    local_35c = local_35c + -1;
                                    if ((local_264 == 0) &&
                                       ((local_11c - local_138) + local_358 < SHORT_007fb240 + -1))
                                    {
                                      if (*(short *)(local_27c +
                                                    (SHORT_007fb240 * local_138 +
                                                     local_11c + SHORT_007fb246 * local_254[0] +
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
                                                    (((SHORT_007fb246 * local_254[0] +
                                                      SHORT_007fb240 * local_138) - local_120) +
                                                    local_11c) * 2) == 0) {
                                        local_12c = local_12c + 1;
                                      }
                                      else {
                                        local_260 = 1;
                                      }
                                    }
                                    if ((local_25c == 0) && (local_358 < SHORT_007fb242 + -1)) {
                                      if (*(short *)(local_27c +
                                                    (SHORT_007fb246 * local_254[0] +
                                                    local_11c + SHORT_007fb240 * local_358) * 2) ==
                                          0) {
                                        local_12c = local_12c + 1;
                                      }
                                      else {
                                        local_25c = 1;
                                      }
                                    }
                                    if ((local_258 == 0) && (0 < local_358)) {
                                      if (*(short *)(local_27c +
                                                    (SHORT_007fb246 * local_254[0] +
                                                    local_11c + SHORT_007fb240 * local_35c) * 2) ==
                                          0) {
                                        local_12c = local_12c + 1;
                                      }
                                      else {
                                        local_258 = 1;
                                      }
                                    }
                                    local_120 = local_120 + 1;
                                  } while (local_120 <= local_78);
                                  uVar25 = (uint)(local_78 * 2 <= local_12c);
                                }
                              }
                              if (uVar25 != 0) {
                                local_a0 = local_108[0];
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2[3],
                                             ((AnonShape_006B0C70_7C4FE646 *)param_2[3])->field_0004
                                             - 1);
                                piVar20 = aiStack_314 + local_108[0];
                                if (*piVar20 == 0) {
                                  piVar20 = aiStack_314 + local_108[0];
                                  puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                  *piVar20 = (int)puVar12;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar20,&local_144);
                                local_4c[10] = local_4c[10] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
                                  local_10c = local_10c + -1;
                                  uVar25 = 0;
                                  do {
                                    uVar22 = uVar25 & 0x80000001;
                                    if ((int)uVar22 < 0) {
                                      uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
                                    }
                                    *(ushort *)
                                     (local_27c +
                                     (uVar22 + SHORT_007fb246 * local_254[0] + local_11c +
                                               ((int)uVar25 / 2 + local_138) * (int)SHORT_007fb240)
                                     * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                    uVar25 = uVar25 + 1;
                                  } while ((int)uVar25 < 4);
                                }
                                else {
                                  *(ushort *)
                                   (puVar31 +
                                   (SHORT_007fb240 * local_138 +
                                   local_11c + SHORT_007fb246 * local_254[0]) * 2) =
                                       *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                }
                                break;
                              }
                            }
                          }
cf_common_join_004B5648:
                          iVar30 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108)
                          ;
                          iVar11 = local_ac;
                          uVar25 = local_268;
                          pDVar15 = local_20;
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
        iVar30 = local_64 + 1;
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
        if ((((-1 < local_11c) && (local_11c < SHORT_007fb240)) && (-1 < local_138)) &&
           ((local_138 < SHORT_007fb242 &&
            (local_254[0] = 0, puVar31 = local_27c, 0 < SHORT_007fb244)))) {
          do {
            iVar11 = SHORT_007fb240 * local_138 + local_11c + SHORT_007fb246 * local_254[0];
            local_58 = (STFishC *)g_worldCells[iVar11].objects[0];
            if (local_58 == (STFishC *)0x0) {
              sVar21 = (short)local_11c;
              if (((((sVar21 < 0) || (SHORT_007fb240 <= sVar21)) ||
                   (sVar10 = (short)local_138, sVar10 < 0)) ||
                  ((SHORT_007fb242 <= sVar10 || (sVar23 = (short)local_254[0], sVar23 < 0)))) ||
                 (SHORT_007fb244 <= sVar23)) {
                sVar21 = -1;
              }
              else {
                sVar21 = *(short *)(DAT_007fb280 +
                                   ((int)sVar10 * (int)SHORT_007fb278 +
                                    (int)sVar23 * (int)SHORT_007fb27e + (int)sVar21) * 2);
              }
              if (sVar21 == 0) {
                local_58 = (STFishC *)g_worldCells[iVar11].objects[1];
                if ((local_58 == (STFishC *)0x0) ||
                   (((iVar30 = (*local_58->vtable->vfunc_2C)((STWorldObject *)local_58),
                     iVar30 != 0xa6 && (iVar30 = (*local_58->vtable->vfunc_2C)(), iVar30 != 0xbd))
                    && ((iVar30 = (*local_58->vtable->vfunc_2C)(), iVar30 != 0xa7 &&
                        (iVar30 = (*local_58->vtable->vfunc_2C)(), iVar30 != 0xaf)))))) {
LAB_004b432d:
                  *(undefined2 *)(puVar31 + iVar11 * 2) = 0;
                }
                else {
                  *(undefined2 *)(puVar31 + iVar11 * 2) = 0x40;
                }
              }
              else {
                if (sVar21 != -1) goto LAB_004b4634;
                *(undefined2 *)(puVar31 + iVar11 * 2) = 0x20;
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
              uVar25 = *(uint *)&local_58->field_0x24;
              if (uVar25 == param_1) {
                *(ushort *)(puVar31 + iVar11 * 2) =
                     *(ushort *)(&DAT_00790888 + local_34c * 4) | 0x200;
                local_114 = local_64;
                iVar11 = *(int *)(&DAT_00790888 + local_34c * 4);
                if (((iVar11 == 7) || (iVar11 == 8)) || (iVar11 == 9)) {
                  STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
                  if (((local_7c[0] == local_11c) && (local_8c[0] == local_138)) &&
                     (local_a8[0] == local_254[0])) {
                    piVar20 = aiStack_314 + local_34c;
                    if (*piVar20 == 0) {
                      puVar12 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                      *piVar20 = (int)puVar12;
                    }
                    local_144 = (int)local_7c[0];
                    local_140 = (int)local_8c[0];
                    local_13c = (int)local_a8[0];
                    Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar20,&local_144);
                  }
                }
                else if (iVar11 == 4) {
                  STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
                  iVar11 = (int)local_7c[0];
                  if (((iVar11 == local_11c) && (iVar30 = (int)local_8c[0], iVar30 == local_138)) &&
                     (iVar24 = (int)local_a8[0], iVar24 == local_254[0])) {
                    piVar20 = local_f4;
                    for (iVar16 = 0xc; iVar16 != 0; iVar16 = iVar16 + -1) {
                      *piVar20 = 0;
                      piVar20 = piVar20 + 1;
                    }
                    local_f4[0] = 1;
                    local_f4[1] = iVar11;
                    local_f4[2] = iVar30;
                    local_f4[3] = iVar24;
                    Library::DKW::TBL::FUN_006ae1c0(&local_20->flags,local_f4);
                    puVar31 = local_27c;
                  }
                }
              }
              else {
                if ((uVar25 < 8) &&
                   ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                    ((byte)(&DAT_008087e9)[uVar25 * 0x51] < 8)))) {
                  bVar3 = local_58->field_0x24;
                  if (*(char *)((int)&g_appClass_00806728[0x5d].field_0014 + 3) == '\0') {
                    if (bVar3 == bVar33) {
                      iVar30 = 0;
                    }
                    else {
                      uVar25 = (uint)bVar3;
                      uVar22 = param_1 & 0xff;
                      cVar4 = *(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                       uVar22 + uVar25 * 8 + 3);
                      puVar31 = local_27c;
                      if ((cVar4 == '\0') &&
                         (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                   uVar25 + uVar22 * 8 + 3) == '\0')) {
                        iVar30 = -2;
                      }
                      else if ((cVar4 == '\x01') &&
                              (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                        uVar25 + uVar22 * 8 + 3) == '\0')) {
                        iVar30 = -1;
                      }
                      else if ((cVar4 == '\0') &&
                              (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                        uVar25 + uVar22 * 8 + 3) == '\x01')) {
                        iVar30 = 1;
                      }
                      else if ((cVar4 == '\x01') &&
                              (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                        uVar25 + uVar22 * 8 + 3) == '\x01')) {
                        iVar30 = 2;
                      }
                      else {
                        iVar30 = 0;
                      }
                    }
                    bVar32 = iVar30 < 0;
                  }
                  else {
                    bVar32 = *(char *)((param_1 & 0xff) * 0x51 + 0x11ca + (int)g_appClass_00806728)
                             != *(char *)((uint)bVar3 * 0x51 + 0x11ca + (int)g_appClass_00806728);
                  }
                  if (bVar32) {
                    *(ushort *)(puVar31 + iVar11 * 2) =
                         *(ushort *)(&DAT_00790888 + local_34c * 4) | 0x100;
                    goto LAB_004b463a;
                  }
                }
LAB_004b4634:
                *(undefined2 *)(puVar31 + iVar11 * 2) = 0x10;
              }
            }
LAB_004b463a:
            local_254[0] = local_254[0] + 1;
          } while (local_254[0] < SHORT_007fb244);
        }
        local_74 = local_74 + 1;
      } while (local_74 < local_64 * 8);
    }
    if (local_54 < local_64 - local_114) goto LAB_004b4689;
    local_64 = local_64 + 1;
  } while( true );
  while (*piVar20 != 0) {
LAB_004b56e4:
    uVar25 = pDVar15->iteratorIndex;
    if (uVar25 < pDVar15->count) {
      piVar20 = (int *)(pDVar15->elementSize * uVar25 + (int)pDVar15->data);
      pDVar15->iteratorIndex = uVar25 + 1;
    }
    else {
      piVar20 = (int *)0x0;
    }
    if (piVar20 == (int *)0x0) goto LAB_004b5727;
  }
  *piVar20 = 1;
  piVar20[1] = local_11c;
  piVar20[2] = local_138;
  piVar20[3] = local_254[0];
LAB_004b5727:
  iVar11 = local_4c[4] + -1;
  local_4c[4] = iVar11;
  local_10c = local_10c + -1;
  iVar30 = 0;
  do {
    iVar24 = iVar30 / 6 + -2 + local_138;
    iVar16 = iVar30 % 6 + -2 + local_11c;
    if (((-1 < iVar24) && (iVar24 < SHORT_007fb242)) && (-1 < iVar16)) {
      if ((iVar16 < SHORT_007fb240) &&
         (iVar24 = iVar24 * SHORT_007fb240 + iVar16 + SHORT_007fb246 * local_254[0],
         *(short *)(local_27c + iVar24 * 2) == 0)) {
        *(ushort *)(local_27c + iVar24 * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
      }
    }
    iVar30 = iVar30 + 1;
  } while (iVar30 < 0x24);
  if (iVar11 == 0) {
    local_64 = 0;
    goto cf_continue_loop_004B48CC;
  }
cf_continue_loop_004B5FB6:
  local_254[0] = local_254[0] + 1;
  if (SHORT_007fb244 + -1 <= local_254[0]) goto LAB_004b5fd6;
  goto LAB_004b49b4;
}

