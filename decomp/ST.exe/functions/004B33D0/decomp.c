#include "../../pseudocode_runtime.h"


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
  dword dVar15;
  int iVar16;
  Global_sub_004B1120_param_2Enum GVar17;
  int *piVar18;
  short sVar19;
  uint uVar20;
  short sVar21;
  int iVar22;
  uint uVar23;
  DArrayTy *pDVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined4 *puVar27;
  int iVar28;
  undefined1 *puVar29;
  bool bVar30;
  byte playerId;
  int local_35c;
  int local_358;
  int local_354;
  dword local_34c;
  undefined4 local_320 [3];
  int aiStack_314 [4];
  Global_sub_004B1120_param_2Enum local_304 [4];
  undefined4 local_2f4;
  byte local_2ec;
  int local_2eb;
  dword local_2e7;
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
    iVar28 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_ai_fnd.cpp",0x3c1,0,iVar10,
                                "%s","TLOAiBldPlacesFind error !");
    if (iVar28 == 0) {
      RaiseInternalException(iVar10,0,"E:\\__titans\\Artem\\TLO_ai_fnd.cpp",0x3c2);
      ExceptionList = local_14;
      return iVar10;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_1c = &stack0xfffffc94;
  if (param_2 == (int *)0x0) {
    local_1c = &stack0xfffffc94;
    RaiseInternalException
              (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_ai_fnd.cpp",0x5d);
  }
  if (param_2[3] == 0) {
    puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
    param_2[3] = (int)puVar11;
  }
  if (param_2[5] == 0) {
    puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
    param_2[5] = (int)puVar11;
  }
  puVar27 = local_24c;
  for (iVar10 = 0x42; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar27 = 0;
    puVar27 = puVar27 + 1;
  }
  piVar18 = local_4c;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar18 = 0;
    piVar18 = piVar18 + 1;
  }
  iVar28 = 0;
  local_10c = 0;
  *(undefined4 *)(param_2[3] + 4) = 0;
  iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
  if (-1 < iVar10) {
    do {
      local_4c[*(int *)(&DAT_00790888 + local_108[0] * 4)] =
           local_4c[*(int *)(&DAT_00790888 + local_108[0] * 4)] + 1;
      if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
        iVar28 = iVar28 + 1;
      }
      iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
    } while (-1 < iVar10);
    local_10c = iVar28;
  }
  uVar23 = 0;
  pDVar12 = (DArrayTy *)param_2[5];
  if (0 < (int)pDVar12->count) {
    do {
      DArrayGetElement(pDVar12,uVar23,&local_a0);
      iVar10 = thunk_FUN_004ae0b0((short)local_9c,local_98,local_94,local_a0,param_1,
                                  (undefined4 *)0x0,(int *)0x0,(int *)0x0,0,(int *)0x0);
      if (iVar10 == 0) {
        local_304[0] = local_a0;
        local_2f4 = local_90;
        if (param_2[3] == 0) {
          puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
          param_2[3] = (int)puVar11;
        }
        Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[3],local_304);
        FUN_006b0c70((DArrayTy *)param_2[5],uVar23);
      }
      else {
        bVar30 = true;
        *(undefined4 *)(param_2[4] + 4) = 0;
        iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[4],&local_70);
        while (-1 < iVar10) {
          if (((local_70 == local_9c) && (local_6c == local_98)) && (local_68 == local_94)) {
            bVar30 = false;
          }
          iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[4],&local_70);
        }
        if (bVar30) {
          uVar23 = uVar23 + 1;
        }
        else {
          if (param_2[3] == 0) {
            puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x14,10);
            param_2[3] = (int)puVar11;
          }
          Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[3],local_320);
          FUN_006b0c70((DArrayTy *)param_2[5],uVar23);
        }
      }
      pDVar12 = (DArrayTy *)param_2[5];
    } while ((int)uVar23 < (int)pDVar12->count);
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
          pbVar26 = &local_2ec;
          for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
            pbVar26[0] = 0;
            pbVar26[1] = 0;
            pbVar26[2] = 0;
            pbVar26[3] = 0;
            pbVar26 = pbVar26 + 4;
          }
          *pbVar26 = 0;
          local_2ec = 1;
          local_2e7 = (*local_58->vtable->slot_2C)(local_58);
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
          pbVar26 = &local_2ec;
          for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
            pbVar26[0] = 0;
            pbVar26[1] = 0;
            pbVar26[2] = 0;
            pbVar26[3] = 0;
            pbVar26 = pbVar26 + 4;
          }
          *pbVar26 = 0;
          local_2ec = 2;
          local_2eb = (*local_110->vtable->GetObjectTypeId)(local_110);
          if (local_2eb == 0x61) {
            local_2ec = local_2ec | 8;
          }
          local_2e7 = (*local_58->vtable->slot_2C)(local_58);
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
          pbVar26 = (byte *)0x0;
          break;
        default:
          goto switchD_004b38f0_caseD_3a;
        case CASE_4F:
        case CASE_61:
          iVar10 = 0xde;
          pDVar12->iteratorIndex = 0;
          pbVar26 = (byte *)0x0;
        }
        while( true ) {
          pbVar25 = pbVar26;
          uVar23 = pDVar12->iteratorIndex;
          if (uVar23 < pDVar12->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar12, uVar23) (runtime stride) */
            pbVar13 = (byte *)(pDVar12->elementSize * uVar23 + (int)pDVar12->data);
            pDVar12->iteratorIndex = uVar23 + 1;
          }
          else {
            pbVar13 = (byte *)0x0;
          }
          if (pbVar13 == (byte *)0x0) break;
          bVar3 = *pbVar13;
          pbVar26 = pbVar25;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((((((bVar3 & 1) != 0) && ((bVar3 & 4) == 0)) && (*(int *)(pbVar13 + 5) == iVar10)) &&
              (pbVar26 = pbVar13, pbVar25 != (byte *)0x0)) &&
             ((pDVar12 = (DArrayTy *)local_a4, (bVar3 & 0x20) < (*pbVar25 & 0x20) ||
              ((pbVar26 = pbVar25, ((*pbVar25 ^ *pbVar13) & 0x20) == 0 &&
               (*(int *)(pbVar13 + 0x15) < *(int *)(pbVar25 + 0x15))))))) {
            pbVar26 = pbVar13;
          }
        }
        if (pbVar25 != (byte *)0x0) {
          *pbVar25 = *pbVar25 | 4;
          if (local_108[0] == CASE_61) {
            *pbVar25 = *pbVar25 | 8;
          }
          local_9c = *(int *)(pbVar25 + 9);
          local_98 = *(int *)(pbVar25 + 0xd);
          local_94 = *(int *)(pbVar25 + 0x11);
          local_a0 = local_108[0];
          local_90 = local_f8;
          Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
          local_4c[0] = local_4c[0] + -1;
          FUN_006b0c70((DArrayTy *)param_2[3],((DArrayTy *)param_2[3])->iteratorIndex - 1);
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
        pbVar26 = (byte *)0x0;
        while( true ) {
          uVar23 = pDVar12->iteratorIndex;
          if (uVar23 < pDVar12->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar12, uVar23) (runtime stride) */
            pbVar25 = (byte *)(pDVar12->elementSize * uVar23 + (int)pDVar12->data);
            pDVar12->iteratorIndex = uVar23 + 1;
          }
          else {
            pbVar25 = (byte *)0x0;
          }
          if (pbVar25 == (byte *)0x0) break;
          if ((((*pbVar25 & 6) != 0) && ((*pbVar25 & 0x18) == 0)) &&
             ((iVar10 = FUN_006aced8((int)local_7c[0],(int)local_8c[0],*(int *)(pbVar25 + 9),
                                     *(int *)(pbVar25 + 0xd)), pbVar26 == (byte *)0x0 ||
              (iVar10 < local_88)))) {
            pbVar26 = pbVar25;
            local_88 = iVar10;
          }
        }
        if (pbVar26 != (byte *)0x0) {
          if (local_88 < 0xf) {
            *pbVar26 = *pbVar26 | 0x10;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          else if ((*(int *)(pbVar26 + 0x19) < 0) || (local_88 < *(int *)(pbVar26 + 0x19))) {
            *(int *)(pbVar26 + 0x19) = local_88;
          }
        }
        iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)*ppDVar2,&local_58);
      }
    }
    if (local_4c[1] != 0) {
      uVar23 = 0;
      if (0 < (int)pDVar12->count) {
        do {
          DArrayGetElement(pDVar12,uVar23,&local_2ec);
          if (((local_2ec & 0x18) == 0) && (((local_2ec & 1) == 0 || ((local_2ec & 4) != 0)))) {
            uVar23 = uVar23 + 1;
          }
          else {
            FUN_006b0c70(pDVar12,uVar23);
          }
        } while ((int)uVar23 < (int)pDVar12->count);
      }
      uVar23 = pDVar12->count;
      if (local_4c[1] < (int)uVar23) {
        do {
          local_50 = 0;
          pDVar24 = pDVar12;
          uVar20 = 0;
          if (uVar23 != 1 && -1 < (int)(uVar23 - 1)) {
            do {
              pDVar12 = (DArrayTy *)local_a4;
              if (uVar20 < uVar23) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar24, uVar20) (runtime stride) */
                pbVar26 = (byte *)(pDVar24->elementSize * uVar20 + (int)pDVar24->data);
              }
              else {
                pbVar26 = (byte *)0x0;
              }
              uVar1 = uVar20 + 1;
              if (uVar1 < uVar23) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar24, uVar1) (runtime stride) */
                pbVar25 = (byte *)(pDVar24->elementSize * uVar1 + (int)pDVar24->data);
              }
              else {
                pbVar25 = (byte *)0x0;
              }
              if (((*pbVar25 & 0x20) < (*pbVar26 & 0x20)) ||
                 ((((*pbVar26 ^ *pbVar25) & 0x20) == 0 &&
                  (*(int *)(pbVar25 + 0x15) < *(int *)(pbVar26 + 0x15))))) {
                FUN_006b0cd0(local_a4,uVar20,uVar1);
                local_50 = 1;
              }
              uVar23 = ((AnonShape_00413AF0_B6B4EE9A *)pDVar12)->field_000C;
              pDVar24 = pDVar12;
              uVar20 = uVar1;
            } while ((int)uVar1 < (int)(uVar23 - 1));
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
          uVar23 = pDVar12->iteratorIndex;
          if (uVar23 < pDVar12->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar12, uVar23) (runtime stride) */
            pbVar26 = (byte *)(pDVar12->elementSize * uVar23 + (int)pDVar12->data);
            pDVar12->iteratorIndex = uVar23 + 1;
          }
          else {
            pbVar26 = (byte *)0x0;
          }
          if (pbVar26 == (byte *)0x0) break;
          local_11c = *(int *)(pbVar26 + 9);
          local_138 = *(int *)(pbVar26 + 0xd);
          local_254[0] = *(int *)(pbVar26 + 0x11);
          iVar10 = thunk_FUN_004b1120(param_1,local_134,&local_11c,&local_138,local_254,0,1);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((iVar10 != 0) &&
             ((*(int *)(pbVar26 + 0x19) < 0 ||
              (iVar10 = FUN_006aced8(local_11c,local_138,*(int *)(pbVar26 + 9),
                                     *(int *)(pbVar26 + 0xd)), iVar10 < *(int *)(pbVar26 + 0x19)))))
          {
            *pbVar26 = *pbVar26 | 0x10;
            local_a0 = local_108[0];
            local_90 = local_f8;
            local_9c = local_11c;
            local_98 = local_138;
            local_94 = local_254[0];
            Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
            local_4c[1] = local_4c[1] + -1;
            FUN_006b0c70((DArrayTy *)param_2[3],((DArrayTy *)param_2[3])->iteratorIndex - 1);
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
    puVar27 = local_24c;
    iVar10 = 0x42;
    do {
      if ((DArrayTy *)*puVar27 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)*puVar27);
      }
      puVar27 = puVar27 + 1;
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
  puVar27 = (undefined4 *)&stack0xfffffc94;
  for (uVar23 = ((int)g_worldGrid.sizeZ * (int)g_worldGrid.planeStride & 0x7fffffffU) >> 1;
      uVar23 != 0; uVar23 = uVar23 - 1) {
    *puVar27 = 0xffffffff;
    puVar27 = puVar27 + 1;
  }
  for (uVar23 = (int)g_worldGrid.sizeZ * (int)g_worldGrid.planeStride * 2 & 3; uVar23 != 0;
      uVar23 = uVar23 - 1) {
    *(undefined1 *)puVar27 = 0xff;
    puVar27 = (undefined4 *)((int)puVar27 + 1);
  }
  local_27c = &stack0xfffffc94;
  iVar10 = local_144;
  iVar28 = local_140;
  iVar22 = local_13c;
  local_1c = &stack0xfffffc94;
  if (local_4c[2] != 0) {
    local_27c = &stack0xfffffc94;
    local_1c = &stack0xfffffc94;
    pDVar12 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
    local_22c = pDVar12;
    if ((PTR_007fa16c != (DArrayTy *)0x0) && (uVar23 = 0, 0 < (int)PTR_007fa16c->count)) {
      do {
        DArrayGetElement(PTR_007fa16c,uVar23,&local_58);
        STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
        local_144 = (int)local_7c[0];
        local_140 = (int)local_8c[0];
        local_13c = (int)local_a8[0];
        Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar12,&local_144);
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < (int)PTR_007fa16c->count);
    }
    iVar14 = param_2[5];
    iVar10 = local_144;
    iVar28 = local_140;
    iVar22 = local_13c;
    if ((iVar14 != 0) && (*(int *)(iVar14 + 0xc) != 0)) {
      *(undefined4 *)(iVar14 + 4) = 0;
      iVar14 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
      iVar10 = local_144;
      iVar28 = local_140;
      iVar22 = local_13c;
      local_144 = local_9c;
      local_140 = local_98;
      local_13c = local_94;
      while (local_9c = local_144, local_98 = local_140, local_94 = local_13c, -1 < iVar14) {
        if (local_a0 == 0x3a) {
          Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar12,&local_144);
          iVar10 = local_144;
          iVar28 = local_140;
          iVar22 = local_13c;
        }
        local_13c = iVar22;
        local_140 = iVar28;
        local_144 = iVar10;
        iVar14 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
        iVar10 = local_144;
        iVar28 = local_140;
        iVar22 = local_13c;
        local_144 = local_9c;
        local_140 = local_98;
        local_13c = local_94;
      }
    }
  }
  local_13c = iVar22;
  local_140 = iVar28;
  local_144 = iVar10;
  iVar10 = local_144;
  iVar28 = local_140;
  iVar22 = local_13c;
  if (local_4c[3] != 0) {
    local_184 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
    pDVar12 = g_playerRuntime[param_1].field2166_0x9d6;
    if ((pDVar12 != (DArrayTy *)0x0) && (uVar23 = 0, 0 < (int)pDVar12->count)) {
      do {
        DArrayGetElement(pDVar12,uVar23,&local_58);
        STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
        local_144 = (int)local_7c[0];
        local_140 = (int)local_8c[0];
        local_13c = (int)local_a8[0];
        Library::DKW::TBL::FUN_006ae1c0(&local_184->flags,&local_144);
        uVar23 = uVar23 + 1;
        pDVar12 = g_playerRuntime[param_1].field2166_0x9d6;
      } while ((int)uVar23 < (int)pDVar12->count);
    }
    iVar14 = param_2[5];
    iVar10 = local_144;
    iVar28 = local_140;
    iVar22 = local_13c;
    if ((iVar14 != 0) && (*(int *)(iVar14 + 0xc) != 0)) {
      *(undefined4 *)(iVar14 + 4) = 0;
      iVar14 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
      iVar10 = local_144;
      iVar28 = local_140;
      iVar22 = local_13c;
      local_144 = local_9c;
      local_140 = local_98;
      local_13c = local_94;
      while (local_9c = local_144, local_98 = local_140, local_94 = local_13c, -1 < iVar14) {
        if (local_a0 == 100) {
          Library::DKW::TBL::FUN_006ae1c0(&local_184->flags,&local_144);
          iVar10 = local_144;
          iVar28 = local_140;
          iVar22 = local_13c;
        }
        local_13c = iVar22;
        local_140 = iVar28;
        local_144 = iVar10;
        iVar14 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
        iVar10 = local_144;
        iVar28 = local_140;
        iVar22 = local_13c;
        local_144 = local_9c;
        local_140 = local_98;
        local_13c = local_94;
      }
    }
  }
  local_13c = iVar22;
  local_140 = iVar28;
  local_144 = iVar10;
  local_54 = local_4c[10] + local_4c[8] + local_4c[9] + local_4c[7] + local_4c[4] + 5 + local_4c[6];
  local_20 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x30,10);
  local_64 = 0;
  local_114 = 0;
LAB_004b40f9:
  do {
    sVar19 = g_worldGrid.sizeX;
    if (g_worldGrid.sizeX <= g_worldGrid.sizeY) {
      sVar19 = g_worldGrid.sizeY;
    }
    if (sVar19 <= local_64) {
LAB_004b4689:
      *(undefined4 *)(param_2[5] + 4) = 0;
      iVar14 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
      puVar29 = local_27c;
      pDVar12 = local_22c;
      pDVar24 = local_184;
      pAVar6 = local_a4;
      GVar17 = local_a0;
      iVar10 = local_9c;
      iVar28 = local_98;
      iVar22 = local_94;
      pSVar7 = local_58;
      pDVar8 = local_20;
      while (local_27c = puVar29, local_22c = pDVar12, local_184 = pDVar24, local_a4 = pAVar6,
            local_a0 = GVar17, local_9c = iVar10, local_98 = iVar28, local_94 = iVar22,
            local_58 = pSVar7, local_20 = pDVar8, -1 < iVar14) {
        if (*(int *)(&DAT_00791d68 + GVar17 * 4) == 1) {
          uVar23 = 0;
          do {
            uVar20 = uVar23 & 0x80000001;
            if ((int)uVar20 < 0) {
              uVar20 = (uVar20 - 1 | 0xfffffffe) + 1;
            }
            iVar14 = (int)uVar23 / 2 + iVar28;
            *(ushort *)
             (puVar29 +
             (g_worldGrid.sizeX * iVar14 + uVar20 + iVar10 + g_worldGrid.planeStride * iVar22) * 2)
                 = *(ushort *)(&DAT_00790888 + GVar17 * 4) | 0x200;
            uVar23 = uVar23 + 1;
            local_138 = iVar14;
            local_11c = uVar20 + iVar10;
          } while ((int)uVar23 < 4);
        }
        else {
          *(ushort *)
           (puVar29 + (g_worldGrid.planeStride * iVar22 + iVar10 + g_worldGrid.sizeX * iVar28) * 2)
               = *(ushort *)(&DAT_00790888 + GVar17 * 4) | 0x200;
          local_138 = iVar28;
          local_11c = iVar10;
        }
        local_254[0] = iVar22;
        iVar14 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[5],&local_a0);
        puVar29 = local_27c;
        pDVar12 = local_22c;
        pDVar24 = local_184;
        pAVar6 = local_a4;
        GVar17 = local_a0;
        iVar10 = local_9c;
        iVar28 = local_98;
        iVar22 = local_94;
        pSVar7 = local_58;
        pDVar8 = local_20;
      }
      iVar28 = 0;
      PTR_007fa150->iteratorIndex = 0;
      iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_58);
      puVar29 = local_27c;
      while (-1 < iVar10) {
        if (local_58 != (STFishC *)0x0) {
          STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
          iVar10 = (int)local_8c[0] * (int)g_worldGrid.sizeX +
                   (int)g_worldGrid.planeStride * (int)local_a8[0] + (int)local_7c[0];
          sVar19 = *(short *)(puVar29 + iVar10 * 2);
          if ((sVar19 == 0) || (sVar19 == -1)) {
            *(undefined2 *)(puVar29 + iVar10 * 2) = 0x80;
          }
        }
        iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_58);
      }
      if ((local_4c[4] != 0) || (local_4c[5] != 0)) {
        *(undefined4 *)(param_2[3] + 4) = 0;
        iVar10 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
        while (-1 < iVar10) {
          if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 4) {
            piVar18 = local_f4;
            for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
              *piVar18 = 0;
              piVar18 = piVar18 + 1;
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
        local_64 = iVar28;
        sVar19 = g_worldGrid.sizeX;
        if (g_worldGrid.sizeX <= g_worldGrid.sizeY) {
          sVar19 = g_worldGrid.sizeY;
        }
        if (sVar19 <= iVar28) break;
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
              iVar22 = (int)g_worldGrid.planeStride;
              iVar14 = iVar22 * local_254[0];
              iVar10 = g_worldGrid.sizeX * local_138;
              iVar28 = iVar10 + iVar14 + local_11c;
              if (*(short *)(local_27c + iVar28 * 2) != -1) {
                if ((*(short *)(local_27c + iVar28 * 2) == 0) &&
                   (*(short *)(local_27c + ((local_254[0] + 1) * iVar22 + iVar10 + local_11c) * 2)
                    == 0)) {
                  local_124 = 0;
                  if ((local_10c != 0) &&
                     (local_118 = iVar28 + 1, *(short *)(local_27c + local_118 * 2) == 0)) {
                    iVar28 = (local_138 + 1) * (int)g_worldGrid.sizeX + iVar14 + local_11c;
                    local_118 = iVar28;
                    if ((*(short *)(local_27c + iVar28 * 2) == 0) &&
                       (local_118 = iVar28 + 1, *(short *)(local_27c + (iVar28 + 1) * 2) == 0)) {
                      local_124 = 1;
                    }
                  }
                  if (local_254[0] < 1) {
                    bVar30 = true;
                  }
                  else {
                    iVar22 = (local_254[0] + -1) * iVar22;
                    iVar10 = iVar22 + iVar10 + local_11c;
                    local_118 = iVar10;
                    bVar30 = *(short *)(local_27c + iVar10 * 2) == 0x20;
                    if (!bVar30) goto cf_continue_loop_004B5FB6;
                    if ((local_10c != 0) && (local_124 != 0)) {
                      local_124 = 0;
                      local_118 = iVar10 + 1;
                      if (*(short *)(local_27c + (iVar10 + 1) * 2) == 0x20) {
                        iVar10 = (local_138 + 1) * (int)g_worldGrid.sizeX + iVar22 + local_11c;
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
                  if (bVar30) {
                    local_80 = 1;
                    iVar28 = 0;
                    do {
                      if (iVar28 != 4) {
                        iVar22 = iVar28 / 3 + -1 + local_138;
                        iVar16 = iVar28 % 3 + -1 + local_11c;
                        if ((((-1 < iVar22) && (iVar22 < g_worldGrid.sizeY)) && (-1 < iVar16)) &&
                           (((iVar16 < g_worldGrid.sizeX &&
                             (sVar19 = *(short *)(local_27c +
                                                 (iVar22 * g_worldGrid.sizeX + iVar16 + iVar14) * 2)
                             , sVar19 != 0)) && ((sVar19 != 0x10 && (sVar19 != 0x20)))))) {
                          bVar30 = false;
                          goto LAB_004b4bd1;
                        }
                      }
                      iVar28 = iVar28 + 1;
                    } while (iVar28 < 9);
                    bVar30 = true;
LAB_004b4bd1:
                    if (bVar30) {
                      iVar28 = GetPlayerRaceId(playerId);
                      pDVar24 = local_184;
                      pDVar12 = local_22c;
                      local_270 = 0;
                      if ((char)iVar28 == '\x03') {
                        if (local_4c[3] != 0) {
                          if ((local_184 == (DArrayTy *)0x0) || (local_184->count == 0)) {
                            local_270 = 1;
                          }
                          else {
                            local_270 = 1;
                            uVar23 = 0;
                            if (0 < (int)local_184->count) {
                              do {
                                DArrayGetElement(pDVar24,uVar23,&local_144);
                                uVar20 = local_144 - local_11c >> 0x1f;
                                if (((int)((local_144 - local_11c ^ uVar20) - uVar20) < 0x10) ||
                                   (uVar20 = local_140 - local_138 >> 0x1f,
                                   (int)((local_140 - local_138 ^ uVar20) - uVar20) < 0x10)) {
                                  local_270 = 0;
                                  break;
                                }
                                uVar23 = uVar23 + 1;
                              } while ((int)uVar23 < (int)pDVar24->count);
                            }
                          }
                        }
                      }
                      else if (local_4c[2] != 0) {
                        if ((local_22c != (DArrayTy *)0x0) && (local_22c->count != 0)) {
                          iVar28 = -1;
                          uVar23 = 0;
                          if (0 < (int)local_22c->count) {
                            do {
                              DArrayGetElement(pDVar12,uVar23,&local_144);
                              iVar10 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                              if ((iVar28 < 0) || (iVar10 < iVar28)) {
                                iVar28 = iVar10;
                              }
                              uVar23 = uVar23 + 1;
                            } while ((int)uVar23 < (int)pDVar12->count);
                          }
                          if ((-1 < iVar28) && (iVar10 = local_118, iVar28 < 0xe))
                          goto LAB_004b4c78;
                        }
                        local_270 = 1;
                        iVar10 = local_118;
                      }
LAB_004b4c78:
                      if (((local_270 == 0) ||
                          (iVar28 = GetPlayerRaceId(playerId), (char)iVar28 == '\x03')) &&
                         (local_10c != 0)) {
                        if (local_124 != 0) {
                          uVar23 = 0;
                          do {
                            if (((uVar23 != 4) && (uVar23 != 5)) && ((uVar23 != 8 && (uVar23 != 9)))
                               ) {
                              iVar28 = ((int)(uVar23 + ((int)uVar23 >> 0x1f & 3U)) >> 2) + -1 +
                                       local_138;
                              uVar20 = uVar23 & 0x80000003;
                              if ((int)uVar20 < 0) {
                                uVar20 = (uVar20 - 1 | 0xfffffffc) + 1;
                              }
                              iVar22 = (uVar20 - 1) + local_11c;
                              if (((-1 < iVar28) && (iVar28 < g_worldGrid.sizeY)) && (-1 < iVar22))
                              {
                                if ((((iVar22 < g_worldGrid.sizeX) &&
                                     (sVar19 = *(short *)(local_27c +
                                                         (iVar28 * g_worldGrid.sizeX +
                                                         iVar22 + g_worldGrid.planeStride *
                                                                  local_254[0]) * 2), sVar19 != 0))
                                    && (sVar19 != 0x10)) && (sVar19 != 0x20)) {
                                  local_124 = 0;
                                  break;
                                }
                              }
                            }
                            uVar23 = uVar23 + 1;
                          } while ((int)uVar23 < 0x10);
                          goto LAB_004b4e09;
                        }
LAB_004b4f55:
                        uVar23 = 0;
                      }
                      else {
LAB_004b4e09:
                        if ((local_124 == 0) || (local_4c[4] == 0)) goto LAB_004b4f55;
                        iVar28 = 0;
                        local_12c = 0;
                        do {
                          iVar22 = iVar28 / 6;
                          if (((iVar22 == 0) || (iVar22 == 5)) ||
                             ((iVar28 % 6 == 0 || (iVar28 % 6 == 5)))) {
                            iVar22 = iVar22 + -2 + local_138;
                            iVar14 = iVar28 % 6 + -2 + local_11c;
                            if (((-1 < iVar22) && (iVar22 < g_worldGrid.sizeY)) && (-1 < iVar14)) {
                              if (iVar14 < g_worldGrid.sizeX) {
                                iVar22 = iVar22 * g_worldGrid.sizeX;
                                iVar16 = g_worldGrid.planeStride * local_254[0] + iVar22 + iVar14;
                                if (0 < local_254[0]) {
                                  iVar10 = (local_254[0] + -1) * (int)g_worldGrid.planeStride +
                                           iVar22 + iVar14;
                                  local_118 = iVar10;
                                }
                                if ((*(short *)(local_27c + iVar16 * 2) == 0) &&
                                   ((local_254[0] == 0 ||
                                    (*(short *)(local_27c + iVar10 * 2) == 0x20)))) {
LAB_004b4f35:
                                  local_12c = local_12c + 1;
                                }
                                else if (*(short *)(local_27c + iVar16 * 2) == 0x205) {
                                  local_58 = (STFishC *)g_worldGrid.cells[iVar16].objects[0];
                                  if (((local_58 != (STFishC *)0x0) &&
                                      (dVar15 = (*local_58->vtable->slot_2C)(local_58),
                                      0x53 < (int)dVar15)) &&
                                     ((dVar15 = (*local_58->vtable->slot_2C)(local_58),
                                      (int)dVar15 < 0x5b && (*(int *)&local_58[2].field_0xfd == 0)))
                                     ) goto LAB_004b4f35;
                                }
                              }
                            }
                          }
                          iVar28 = iVar28 + 1;
                        } while (iVar28 < 0x24);
                        uVar23 = (uint)(6 < local_12c);
                      }
                      local_268 = uVar23;
                      if ((local_4c[4] == 0) || (uVar23 != 0)) {
                        if ((local_124 == 0) || (local_10c == 0)) {
                          iVar10 = 0;
                        }
                        else {
                          iVar10 = 1;
                        }
                        *(undefined4 *)(param_2[3] + 4) = 0;
                        local_ac = iVar10;
                        iVar28 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108);
                        pDVar12 = local_20;
                        while (local_20 = pDVar12, -1 < iVar28) {
                          iVar28 = *(int *)(&DAT_00790888 + local_108[0] * 4);
                          if (iVar28 == 4) {
                            if ((uVar23 == 0) ||
                               (*(int *)(&DAT_00791d68 + local_108[0] * 4) != iVar10))
                            goto cf_common_join_004B5648;
                            local_a0 = local_108[0];
                            local_9c = local_11c;
                            local_98 = local_138;
                            local_94 = local_254[0];
                            local_90 = local_f8;
                            Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                            FUN_006b0c70((DArrayTy *)param_2[3],
                                         ((DArrayTy *)param_2[3])->iteratorIndex - 1);
                            pDVar12->iteratorIndex = 0;
                            goto LAB_004b56e4;
                          }
                          if (local_4c[4] != 0) goto cf_common_join_004B5648;
                          if (((iVar28 == 1) || (iVar28 == 6)) || ((iVar28 == 2 || (iVar28 == 3))))
                          {
                            iVar28 = GetPlayerRaceId(playerId);
                            GVar17 = (-(uint)((char)iVar28 != '\x03') & 0xffffffd6) + 100;
                            if (local_270 == 0) {
                              if (local_108[0] == GVar17) goto cf_common_join_004B5648;
LAB_004b5614:
                              if (((local_270 != 0) &&
                                  (iVar28 = GetPlayerRaceId(playerId), (char)iVar28 != '\x03')) ||
                                 (*(int *)(&DAT_00791d68 + local_108[0] * 4) == iVar10)) {
                                local_a0 = local_108[0];
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70((DArrayTy *)param_2[3],
                                             ((DArrayTy *)param_2[3])->iteratorIndex - 1);
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
                                  uVar23 = 0;
                                  do {
                                    uVar20 = uVar23 & 0x80000001;
                                    if ((int)uVar20 < 0) {
                                      uVar20 = (uVar20 - 1 | 0xfffffffe) + 1;
                                    }
                                    *(ushort *)
                                     (local_27c +
                                     (uVar20 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                               ((int)uVar23 / 2 + local_138) *
                                               (int)g_worldGrid.sizeX) * 2) =
                                         *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                    uVar23 = uVar23 + 1;
                                  } while ((int)uVar23 < 4);
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
                            else if (local_108[0] == GVar17) goto LAB_004b5614;
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
                            if (iVar28 == 7) {
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != iVar10)
                              goto cf_common_join_004B5648;
                              pDVar12 = (DArrayTy *)aiStack_314[local_108[0]];
                              if ((pDVar12 == (DArrayTy *)0x0) || (pDVar12->count == 0)) {
LAB_004b50f4:
                                bVar30 = true;
                              }
                              else {
                                bVar30 = false;
                                iVar10 = -1;
                                uVar23 = 0;
                                if (0 < (int)pDVar12->count) {
                                  do {
                                    DArrayGetElement(pDVar12,uVar23,&local_144);
                                    iVar28 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar10 < 0) || (iVar28 < iVar10)) {
                                      iVar10 = iVar28;
                                    }
                                    uVar23 = uVar23 + 1;
                                    pDVar12 = (DArrayTy *)aiStack_314[local_108[0]];
                                  } while ((int)uVar23 < (int)pDVar12->count);
                                }
                                if ((iVar10 < 0) ||
                                   ((*(int *)(&DAT_00794fe4 + local_108[0] * 4) * 3) / 0x192 <
                                    iVar10)) goto LAB_004b50f4;
                              }
                              if (!bVar30) goto LAB_004b5101;
                              local_90 = local_f8;
                              local_9c = local_11c;
                              local_98 = local_138;
                              local_94 = local_254[0];
                              local_a0 = local_108[0];
                              Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                              FUN_006b0c70((DArrayTy *)param_2[3],
                                           ((DArrayTy *)param_2[3])->iteratorIndex - 1);
                              piVar18 = aiStack_314 + local_108[0];
                              if (*piVar18 == 0) {
                                piVar18 = aiStack_314 + local_108[0];
                                puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                *piVar18 = (int)puVar11;
                              }
                              local_144 = local_11c;
                              local_140 = local_138;
                              local_13c = local_254[0];
                              Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar18,&local_144);
                              local_4c[7] = local_4c[7] + -1;
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                              goto LAB_004b5f7b;
                              local_10c = local_10c + -1;
                              uVar23 = 0;
                              do {
                                uVar20 = uVar23 & 0x80000001;
                                if ((int)uVar20 < 0) {
                                  uVar20 = (uVar20 - 1 | 0xfffffffe) + 1;
                                }
                                *(ushort *)
                                 (local_27c +
                                 (uVar20 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                           ((int)uVar23 / 2 + local_138) * (int)g_worldGrid.sizeX) *
                                 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                uVar23 = uVar23 + 1;
                              } while ((int)uVar23 < 4);
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
                                bVar30 = true;
                              }
                              else {
                                bVar30 = false;
                                iVar10 = -1;
                                uVar23 = 0;
                                if (0 < (int)pDVar12->count) {
                                  do {
                                    DArrayGetElement(pDVar12,uVar23,&local_144);
                                    iVar28 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar10 < 0) || (iVar28 < iVar10)) {
                                      iVar10 = iVar28;
                                    }
                                    uVar23 = uVar23 + 1;
                                    pDVar12 = (DArrayTy *)aiStack_314[local_108[0]];
                                  } while ((int)uVar23 < (int)pDVar12->count);
                                }
                                if ((iVar10 < 0) ||
                                   ((*(int *)(&DAT_00794fe4 + local_108[0] * 4) * 3) / 0x192 <
                                    iVar10)) goto LAB_004b51da;
                              }
                              if (bVar30) {
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                local_a0 = local_108[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70((DArrayTy *)param_2[3],
                                             ((DArrayTy *)param_2[3])->iteratorIndex - 1);
                                piVar18 = aiStack_314 + local_108[0];
                                if (*piVar18 == 0) {
                                  piVar18 = aiStack_314 + local_108[0];
                                  puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                  *piVar18 = (int)puVar11;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar18,&local_144);
                                local_4c[8] = local_4c[8] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                                goto LAB_004b5f7b;
                                local_10c = local_10c + -1;
                                uVar23 = 0;
                                do {
                                  uVar20 = uVar23 & 0x80000001;
                                  if ((int)uVar20 < 0) {
                                    uVar20 = (uVar20 - 1 | 0xfffffffe) + 1;
                                  }
                                  *(ushort *)
                                   (local_27c +
                                   (uVar20 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                             ((int)uVar23 / 2 + local_138) * (int)g_worldGrid.sizeX)
                                   * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                  uVar23 = uVar23 + 1;
                                } while ((int)uVar23 < 4);
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
                                bVar30 = true;
                              }
                              else {
                                bVar30 = false;
                                iVar10 = -1;
                                uVar23 = 0;
                                if (0 < (int)pDVar12->count) {
                                  do {
                                    DArrayGetElement(pDVar12,uVar23,&local_144);
                                    iVar28 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar10 < 0) || (iVar28 < iVar10)) {
                                      iVar10 = iVar28;
                                    }
                                    uVar23 = uVar23 + 1;
                                    pDVar12 = (DArrayTy *)aiStack_314[local_108[0]];
                                  } while ((int)uVar23 < (int)pDVar12->count);
                                }
                                if ((local_108[0] == 0x69) || (local_108[0] == 0x6a)) {
                                  iVar28 = 10;
                                }
                                else {
                                  iVar28 = 0;
                                }
                                if ((iVar10 < 0) || ((int)((uint)(iVar28 * 3) / 2) < iVar10))
                                goto LAB_004b52b6;
                              }
                              if (bVar30) {
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                local_a0 = local_108[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70((DArrayTy *)param_2[3],
                                             ((DArrayTy *)param_2[3])->iteratorIndex - 1);
                                piVar18 = aiStack_314 + local_108[0];
                                if (*piVar18 == 0) {
                                  piVar18 = aiStack_314 + local_108[0];
                                  puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                  *piVar18 = (int)puVar11;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar18,&local_144);
                                local_4c[9] = local_4c[9] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                                goto LAB_004b5f7b;
                                local_10c = local_10c + -1;
                                uVar23 = 0;
                                do {
                                  uVar20 = uVar23 & 0x80000001;
                                  if ((int)uVar20 < 0) {
                                    uVar20 = (uVar20 - 1 | 0xfffffffe) + 1;
                                  }
                                  *(ushort *)
                                   (local_27c +
                                   (uVar20 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                             ((int)uVar23 / 2 + local_138) * (int)g_worldGrid.sizeX)
                                   * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                  uVar23 = uVar23 + 1;
                                } while ((int)uVar23 < 4);
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
                              GVar17 = local_108[0];
                              do {
                                if (((*(int *)(&DAT_00790950 + local_354) == 10) &&
                                    (pDVar12 = *(DArrayTy **)((int)local_24c + local_354),
                                    pDVar12 != (DArrayTy *)0x0)) &&
                                   (uVar23 = 0, 0 < (int)pDVar12->count)) {
                                  do {
                                    DArrayGetElement(pDVar12,uVar23,&local_144);
                                    iVar28 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar10 < 0) || (iVar28 < iVar10)) {
                                      iVar10 = iVar28;
                                    }
                                    uVar23 = uVar23 + 1;
                                    GVar17 = local_108[0];
                                  } while ((int)uVar23 < (int)pDVar12->count);
                                }
                                local_354 = local_354 + 4;
                              } while (local_354 < 0x108);
                              local_78 = thunk_FUN_004e81b0(param_1,GVar17 - 0x32,0);
                              puVar29 = local_27c;
                              if ((iVar10 < 0) || (uVar23 = local_128, local_78 < iVar10)) {
                                local_258 = 0;
                                local_264 = 0;
                                local_260 = 0;
                                local_25c = 0;
                                local_12c = 0;
                                local_120 = 1;
                                if (local_78 < 1) {
                                  uVar23 = (uint)(local_78 * 2 < 1);
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
                                  uVar23 = (uint)(local_78 * 2 <= local_12c);
                                }
                              }
                              if (uVar23 != 0) {
                                local_a0 = local_108[0];
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)param_2[5],&local_a0);
                                FUN_006b0c70((DArrayTy *)param_2[3],
                                             ((DArrayTy *)param_2[3])->iteratorIndex - 1);
                                piVar18 = aiStack_314 + local_108[0];
                                if (*piVar18 == 0) {
                                  piVar18 = aiStack_314 + local_108[0];
                                  puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                                  *piVar18 = (int)puVar11;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar18,&local_144);
                                local_4c[10] = local_4c[10] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
                                  local_10c = local_10c + -1;
                                  uVar23 = 0;
                                  do {
                                    uVar20 = uVar23 & 0x80000001;
                                    if ((int)uVar20 < 0) {
                                      uVar20 = (uVar20 - 1 | 0xfffffffe) + 1;
                                    }
                                    *(ushort *)
                                     (local_27c +
                                     (uVar20 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                               ((int)uVar23 / 2 + local_138) *
                                               (int)g_worldGrid.sizeX) * 2) =
                                         *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                    uVar23 = uVar23 + 1;
                                  } while ((int)uVar23 < 4);
                                }
                                else {
                                  *(ushort *)
                                   (puVar29 +
                                   (g_worldGrid.sizeX * local_138 +
                                   local_11c + g_worldGrid.planeStride * local_254[0]) * 2) =
                                       *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                }
                                break;
                              }
                            }
                          }
cf_common_join_004B5648:
                          iVar28 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2[3],local_108)
                          ;
                          iVar10 = local_ac;
                          uVar23 = local_268;
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
        iVar28 = local_64 + 1;
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
            (local_254[0] = 0, puVar29 = local_27c, 0 < g_worldGrid.sizeZ)))) {
          do {
            iVar10 = g_worldGrid.sizeX * local_138 +
                     local_11c + g_worldGrid.planeStride * local_254[0];
            local_58 = (STFishC *)g_worldGrid.cells[iVar10].objects[0];
            if (local_58 == (STFishC *)0x0) {
              sVar19 = (short)local_11c;
              if (((((sVar19 < 0) || (g_worldGrid.sizeX <= sVar19)) ||
                   (sVar9 = (short)local_138, sVar9 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar9 || (sVar21 = (short)local_254[0], sVar21 < 0)))) ||
                 (g_worldGrid.sizeZ <= sVar21)) {
                sVar19 = -1;
              }
              else {
                sVar19 = g_pathingGrid.cells
                         [(int)sVar9 * (int)g_pathingGrid.sizeX +
                          (int)sVar21 * (int)g_pathingGrid.planeStride + (int)sVar19];
              }
              if (sVar19 == 0) {
                local_58 = (STFishC *)g_worldGrid.cells[iVar10].objects[1];
                if ((local_58 == (STFishC *)0x0) ||
                   (((dVar15 = (*local_58->vtable->slot_2C)(local_58), dVar15 != 0xa6 &&
                     (dVar15 = (*local_58->vtable->slot_2C)(local_58), dVar15 != 0xbd)) &&
                    ((dVar15 = (*local_58->vtable->slot_2C)(local_58), dVar15 != 0xa7 &&
                     (dVar15 = (*local_58->vtable->slot_2C)(local_58), dVar15 != 0xaf)))))) {
LAB_004b432d:
                  *(undefined2 *)(puVar29 + iVar10 * 2) = 0;
                }
                else {
                  *(undefined2 *)(puVar29 + iVar10 * 2) = 0x40;
                }
              }
              else {
                if (sVar19 != -1) goto LAB_004b4634;
                *(undefined2 *)(puVar29 + iVar10 * 2) = 0x20;
              }
            }
            else {
              if (*(int *)&local_58->field_0x20 == 1000) {
                local_34c = (*local_58->vtable->slot_2C)(local_58);
              }
              else {
                if (*(int *)&local_58->field_0x20 != 0x3e9) goto LAB_004b432d;
                local_34c = *(dword *)&local_58->field_0x259;
              }
              uVar23 = local_58->field_0024;
              if (uVar23 == param_1) {
                *(ushort *)(puVar29 + iVar10 * 2) =
                     *(ushort *)(&DAT_00790888 + local_34c * 4) | 0x200;
                local_114 = local_64;
                iVar10 = *(int *)(&DAT_00790888 + local_34c * 4);
                if (((iVar10 == 7) || (iVar10 == 8)) || (iVar10 == 9)) {
                  STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
                  if (((local_7c[0] == local_11c) && (local_8c[0] == local_138)) &&
                     (local_a8[0] == local_254[0])) {
                    piVar18 = aiStack_314 + local_34c;
                    if (*piVar18 == 0) {
                      puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
                      *piVar18 = (int)puVar11;
                    }
                    local_144 = (int)local_7c[0];
                    local_140 = (int)local_8c[0];
                    local_13c = (int)local_a8[0];
                    Library::DKW::TBL::FUN_006ae1c0((uint *)*piVar18,&local_144);
                  }
                }
                else if (iVar10 == 4) {
                  STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
                  iVar10 = (int)local_7c[0];
                  if (((iVar10 == local_11c) && (iVar28 = (int)local_8c[0], iVar28 == local_138)) &&
                     (iVar22 = (int)local_a8[0], iVar22 == local_254[0])) {
                    piVar18 = local_f4;
                    for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
                      *piVar18 = 0;
                      piVar18 = piVar18 + 1;
                    }
                    local_f4[0] = 1;
                    local_f4[1] = iVar10;
                    local_f4[2] = iVar28;
                    local_f4[3] = iVar22;
                    Library::DKW::TBL::FUN_006ae1c0(&local_20->flags,local_f4);
                    puVar29 = local_27c;
                  }
                }
              }
              else {
                if ((uVar23 < 8) &&
                   ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                    ((byte)(&DAT_008087e9)[uVar23 * 0x51] < 8)))) {
                  bVar3 = *(byte *)&local_58->field_0024;
                  if (g_appClass_00806728->field_146F == '\0') {
                    if (bVar3 == playerId) {
                      iVar28 = 0;
                    }
                    else {
                      uVar23 = (uint)bVar3;
                      uVar20 = param_1 & 0xff;
                      cVar4 = (&g_appClass_00806728->field_0x142f)[uVar20 + uVar23 * 8];
                      puVar29 = local_27c;
                      if ((cVar4 == '\0') &&
                         ((&g_appClass_00806728->field_0x142f)[uVar23 + uVar20 * 8] == '\0')) {
                        iVar28 = -2;
                      }
                      else if ((cVar4 == '\x01') &&
                              ((&g_appClass_00806728->field_0x142f)[uVar23 + uVar20 * 8] == '\0')) {
                        iVar28 = -1;
                      }
                      else if ((cVar4 == '\0') &&
                              ((&g_appClass_00806728->field_0x142f)[uVar23 + uVar20 * 8] == '\x01'))
                      {
                        iVar28 = 1;
                      }
                      else if ((cVar4 == '\x01') &&
                              ((&g_appClass_00806728->field_0x142f)[uVar23 + uVar20 * 8] == '\x01'))
                      {
                        iVar28 = 2;
                      }
                      else {
                        iVar28 = 0;
                      }
                    }
                    bVar30 = iVar28 < 0;
                  }
                  else {
                    bVar30 = (&g_appClass_00806728->field_0x11ca)[(param_1 & 0xff) * 0x51] !=
                             (&g_appClass_00806728->field_0x11ca)[(uint)bVar3 * 0x51];
                  }
                  if (bVar30) {
                    *(ushort *)(puVar29 + iVar10 * 2) =
                         *(ushort *)(&DAT_00790888 + local_34c * 4) | 0x100;
                    goto LAB_004b463a;
                  }
                }
LAB_004b4634:
                *(undefined2 *)(puVar29 + iVar10 * 2) = 0x10;
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
  while (*piVar18 != 0) {
LAB_004b56e4:
    uVar23 = pDVar12->iteratorIndex;
    if (uVar23 < pDVar12->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar12, uVar23) (runtime stride) */
      piVar18 = (int *)(pDVar12->elementSize * uVar23 + (int)pDVar12->data);
      pDVar12->iteratorIndex = uVar23 + 1;
    }
    else {
      piVar18 = (int *)0x0;
    }
    if (piVar18 == (int *)0x0) goto LAB_004b5727;
  }
  *piVar18 = 1;
  piVar18[1] = local_11c;
  piVar18[2] = local_138;
  piVar18[3] = local_254[0];
LAB_004b5727:
  iVar10 = local_4c[4] + -1;
  local_4c[4] = iVar10;
  local_10c = local_10c + -1;
  iVar28 = 0;
  do {
    iVar22 = iVar28 / 6 + -2 + local_138;
    iVar14 = iVar28 % 6 + -2 + local_11c;
    if (((-1 < iVar22) && (iVar22 < g_worldGrid.sizeY)) && (-1 < iVar14)) {
      if ((iVar14 < g_worldGrid.sizeX) &&
         (iVar22 = iVar22 * g_worldGrid.sizeX + iVar14 + g_worldGrid.planeStride * local_254[0],
         *(short *)(local_27c + iVar22 * 2) == 0)) {
        *(ushort *)(local_27c + iVar22 * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
      }
    }
    iVar28 = iVar28 + 1;
  } while (iVar28 < 0x24);
  if (iVar10 == 0) {
    local_64 = 0;
    goto cf_continue_loop_004B48CC;
  }
cf_continue_loop_004B5FB6:
  local_254[0] = local_254[0] + 1;
  if (g_worldGrid.sizeZ + -1 <= local_254[0]) goto LAB_004b5fd6;
  goto LAB_004b49b4;
}

