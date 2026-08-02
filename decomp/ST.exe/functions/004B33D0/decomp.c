#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_ai_fnd.cpp
   Diagnostic line evidence: 93 | 961 | 962 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STTypeFamilyApplier] RETURN_TO_LOCAL_FAMILY.
   Evidence: direct call return copied through registers into this script-owned anonymous stack
   local */

int FUN_004b33d0(uint param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  STWorldObject *this;
  code *pcVar4;
  DArrayTy *pDVar5;
  STFishC *pSVar6;
  DArrayTy *pDVar7;
  short sVar8;
  int iVar9;
  DArrayTy *pDVar10;
  byte *pbVar11;
  int iVar12;
  dword dVar13;
  int iVar14;
  Global_sub_004B1120_param_2Enum GVar15;
  int *piVar16;
  short sVar17;
  uint uVar18;
  short sVar19;
  int iVar20;
  uint uVar21;
  DArrayTy *pDVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined4 *puVar25;
  int iVar26;
  undefined1 *puVar27;
  bool bVar28;
  byte recordIndex;
  int local_35c;
  int local_358;
  int local_354;
  dword local_34c;
  undefined1 local_320 [12];
  int aiStack_314 [4];
  Global_sub_004B1120_param_2Enum local_304 [4];
  undefined4 local_2f4;
  byte local_2ec;
  int local_2eb;
  dword local_2e7;
  int local_2e3;
  int local_2df;
  int local_2db;
  int local_2d7;
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
  DArrayTy *local_a4;
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
  iVar9 = Library::MSVCRT::__setjmp3
                    (local_2c0.jumpBuffer,2,Library::MSVCRT::FUN_0072da21,0xffffffff);
  local_1c = &stack0xfffffc94;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_2c0.previous;
    iVar26 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_ai_fnd.cpp",0x3c1,0,iVar9,
                                "%s","TLOAiBldPlacesFind error !");
    if (iVar26 == 0) {
      RaiseInternalException(iVar9,0,"E:\\__titans\\Artem\\TLO_ai_fnd.cpp",0x3c2);
      ExceptionList = local_14;
      return iVar9;
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
    pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x14,10);
    param_2[3] = (int)pDVar10;
  }
  if (param_2[5] == 0) {
    pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x14,10);
    param_2[5] = (int)pDVar10;
  }
  memset(local_24c, 0, 0x108); /* compiler bulk-zero initialization */
  iVar9 = 0;
  memset(local_4c, 0, 0x2c); /* compiler bulk-zero initialization */
  iVar26 = 0;
  local_10c = 0;
  *(undefined4 *)(param_2[3] + 4) = 0;
  iVar9 = DArrayGetNext((DArrayTy *)param_2[3],(byte *)local_108);
  if (-1 < iVar9) {
    do {
      local_4c[*(int *)(&DAT_00790888 + local_108[0] * 4)] =
           local_4c[*(int *)(&DAT_00790888 + local_108[0] * 4)] + 1;
      if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
        iVar26 = iVar26 + 1;
      }
      iVar9 = DArrayGetNext((DArrayTy *)param_2[3],(byte *)local_108);
    } while (-1 < iVar9);
    local_10c = iVar26;
  }
  uVar21 = 0;
  pDVar10 = (DArrayTy *)param_2[5];
  if (0 < (int)pDVar10->count) {
    do {
      DArrayGetElement(pDVar10,uVar21,&local_a0);
      iVar9 = thunk_FUN_004ae0b0((short)local_9c,local_98,local_94,local_a0,param_1,
                                 (undefined4 *)0x0,(int *)0x0,(int *)0x0,0,(int *)0x0);
      if (iVar9 == 0) {
        local_304[0] = local_a0;
        local_2f4 = local_90;
        if (param_2[3] == 0) {
          pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x14,10);
          param_2[3] = (int)pDVar10;
        }
        Library::DKW::TBL::DArrayAppend((DArrayTy *)param_2[3],local_304);
        DArrayRemoveAt((DArrayTy *)param_2[5],uVar21);
      }
      else {
        bVar28 = true;
        *(undefined4 *)(param_2[4] + 4) = 0;
        iVar9 = DArrayGetNext((DArrayTy *)param_2[4],(byte *)&local_70);
        while (-1 < iVar9) {
          if (((local_70 == local_9c) && (local_6c == local_98)) && (local_68 == local_94)) {
            bVar28 = false;
          }
          iVar9 = DArrayGetNext((DArrayTy *)param_2[4],(byte *)&local_70);
        }
        if (bVar28) {
          uVar21 = uVar21 + 1;
        }
        else {
          if (param_2[3] == 0) {
            pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x14,10);
            param_2[3] = (int)pDVar10;
          }
          Library::DKW::TBL::DArrayAppend((DArrayTy *)param_2[3],local_320);
          DArrayRemoveAt((DArrayTy *)param_2[5],uVar21);
        }
      }
      pDVar10 = (DArrayTy *)param_2[5];
    } while ((int)uVar21 < (int)pDVar10->count);
  }
  recordIndex = (byte)param_1;
  if (((local_4c[0] != 0) || (local_4c[1] != 0)) && (g_array_007FA150 != (DArrayTy *)0x0)) {
    pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x1d,10);
    g_array_007FA150->iteratorIndex = 0;
    local_a4 = pDVar10;
    iVar9 = DArrayGetNext(g_array_007FA150,(byte *)&local_58);
    while (-1 < iVar9) {
      if (local_58 != (STFishC *)0x0) {
        STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
        this = g_worldGrid.cells
               [(int)local_8c[0] * (int)g_worldGrid.sizeX +
                (int)g_worldGrid.planeStride * (int)local_a8[0] + (int)local_7c[0]].objects[0];
        local_110 = this;
        if (this == (STWorldObject *)0x0) {
          pbVar24 = &local_2ec;
          for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
            pbVar24[0] = 0;
            pbVar24[1] = 0;
            pbVar24[2] = 0;
            pbVar24[3] = 0;
            pbVar24 = pbVar24 + 4;
          }
          *pbVar24 = 0;
          local_2ec = 1;
          local_2e7 = local_58->slot_2C();
          local_2e3 = (int)local_7c[0];
          local_2df = (int)local_8c[0];
          local_2db = (int)local_a8[0];
          local_2d7 = FUN_006aced8(*param_2,param_2[1],local_2e3,local_2df);
          local_2d3 = 0xffffffff;
          if (param_2[4] != 0) {
            *(undefined4 *)(param_2[4] + 4) = 0;
            iVar9 = DArrayGetNext((DArrayTy *)param_2[4],(byte *)&local_70);
            while (-1 < iVar9) {
              if (((local_70 == local_2e3) && (local_6c == local_2df)) && (local_68 == local_2db)) {
                local_2ec = local_2ec | 0x20;
                break;
              }
              iVar9 = DArrayGetNext((DArrayTy *)param_2[4],(byte *)&local_70);
            }
          }
        }
        else {
          if ((this[1].vtable != (STWorldObjectVTable *)param_1) ||
             (((this->value_20 != 1000 ||
               (iVar9 = this->GetObjectTypeId(),
               *(int *)(&DAT_00790888 + iVar9 * 4) != 0)) &&
              ((this->value_20 != 0x3e9 ||
               (*(int *)(&DAT_00790888 + *(int *)&local_110[0x10].field_0x19 * 4) != 0))))))
          goto LAB_004b3895;
          pbVar24 = &local_2ec;
          for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
            pbVar24[0] = 0;
            pbVar24[1] = 0;
            pbVar24[2] = 0;
            pbVar24[3] = 0;
            pbVar24 = pbVar24 + 4;
          }
          *pbVar24 = 0;
          local_2ec = 2;
          local_2eb = local_110->GetObjectTypeId();
          if (local_2eb == 0x61) {
            local_2ec = local_2ec | 8;
          }
          local_2e7 = local_58->slot_2C();
          local_2e3 = (int)local_7c[0];
          local_2df = (int)local_8c[0];
          local_2db = (int)local_a8[0];
          local_2d3 = 0xffffffff;
        }
        Library::DKW::TBL::DArrayAppend(pDVar10,&local_2ec);
      }
LAB_004b3895:
      iVar9 = DArrayGetNext(g_array_007FA150,(byte *)&local_58);
    }
    if (local_4c[0] != 0) {
      *(undefined4 *)(param_2[3] + 4) = 0;
      iVar9 = DArrayGetNext((DArrayTy *)param_2[3],(byte *)local_108);
      while (-1 < iVar9) {
        switch(local_108[0]) {
        case CASE_39:
        case CASE_5E:
          iVar9 = 0xdd;
          pDVar10->iteratorIndex = 0;
          pbVar24 = (byte *)0x0;
          break;
        default:
          goto switchD_004b38f0_caseD_3a;
        case CASE_4F:
        case CASE_61:
          iVar9 = 0xde;
          pDVar10->iteratorIndex = 0;
          pbVar24 = (byte *)0x0;
        }
        while( true ) {
          pbVar23 = pbVar24;
          uVar21 = pDVar10->iteratorIndex;
          if (uVar21 < pDVar10->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, uVar21) (runtime stride) */
            pbVar11 = (byte *)(pDVar10->elementSize * uVar21 + (int)pDVar10->data);
            pDVar10->iteratorIndex = uVar21 + 1;
          }
          else {
            pbVar11 = (byte *)0x0;
          }
          if (pbVar11 == (byte *)0x0) break;
          bVar2 = *pbVar11;
          pbVar24 = pbVar23;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((((((bVar2 & 1) != 0) && ((bVar2 & 4) == 0)) && (*(int *)(pbVar11 + 5) == iVar9)) &&
              (pbVar24 = pbVar11, pbVar23 != (byte *)0x0)) &&
             ((pDVar10 = local_a4, (bVar2 & 0x20) < (*pbVar23 & 0x20) ||
              ((pbVar24 = pbVar23, ((*pbVar23 ^ *pbVar11) & 0x20) == 0 &&
               (*(int *)(pbVar11 + 0x15) < *(int *)(pbVar23 + 0x15))))))) {
            pbVar24 = pbVar11;
          }
        }
        if (pbVar23 != (byte *)0x0) {
          *pbVar23 = *pbVar23 | 4;
          if (local_108[0] == CASE_61) {
            *pbVar23 = *pbVar23 | 8;
          }
          local_9c = *(int *)(pbVar23 + 9);
          local_98 = *(int *)(pbVar23 + 0xd);
          local_94 = *(int *)(pbVar23 + 0x11);
          local_a0 = local_108[0];
          local_90 = local_f8;
          Library::DKW::TBL::DArrayAppend((DArrayTy *)param_2[5],&local_a0);
          local_4c[0] = local_4c[0] + -1;
          DArrayRemoveAt((DArrayTy *)param_2[3],((DArrayTy *)param_2[3])->iteratorIndex - 1);
        }
        if (local_4c[0] == 0) break;
switchD_004b38f0_caseD_3a:
        iVar9 = DArrayGetNext((DArrayTy *)param_2[3],(byte *)local_108);
      }
    }
    puVar27 = &g_packedRecords_A62x8[param_1].field_0x9ea;
    if (*(int *)puVar27 != 0) {
      *(undefined4 *)(*(int *)puVar27 + 4) = 0;
      iVar9 = DArrayGetNext(*(DArrayTy **)puVar27,(byte *)&local_58);
      while (iVar9 != 0) {
        STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
        local_88 = -1;
        pDVar10->iteratorIndex = 0;
        pbVar24 = (byte *)0x0;
        while( true ) {
          uVar21 = pDVar10->iteratorIndex;
          if (uVar21 < pDVar10->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, uVar21) (runtime stride) */
            pbVar23 = (byte *)(pDVar10->elementSize * uVar21 + (int)pDVar10->data);
            pDVar10->iteratorIndex = uVar21 + 1;
          }
          else {
            pbVar23 = (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) break;
          if ((((*pbVar23 & 6) != 0) && ((*pbVar23 & 0x18) == 0)) &&
             ((iVar9 = FUN_006aced8((int)local_7c[0],(int)local_8c[0],*(int *)(pbVar23 + 9),
                                    *(int *)(pbVar23 + 0xd)), pbVar24 == (byte *)0x0 ||
              (iVar9 < local_88)))) {
            pbVar24 = pbVar23;
            local_88 = iVar9;
          }
        }
        if (pbVar24 != (byte *)0x0) {
          if (local_88 < 0xf) {
            *pbVar24 = *pbVar24 | 0x10;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          else if ((*(int *)(pbVar24 + 0x19) < 0) || (local_88 < *(int *)(pbVar24 + 0x19))) {
            *(int *)(pbVar24 + 0x19) = local_88;
          }
        }
        iVar9 = DArrayGetNext(*(DArrayTy **)puVar27,(byte *)&local_58);
      }
    }
    if (local_4c[1] != 0) {
      uVar21 = 0;
      if (0 < (int)pDVar10->count) {
        do {
          DArrayGetElement(pDVar10,uVar21,&local_2ec);
          if (((local_2ec & 0x18) == 0) && (((local_2ec & 1) == 0 || ((local_2ec & 4) != 0)))) {
            uVar21 = uVar21 + 1;
          }
          else {
            DArrayRemoveAt(pDVar10,uVar21);
          }
        } while ((int)uVar21 < (int)pDVar10->count);
      }
      uVar21 = pDVar10->count;
      if (local_4c[1] < (int)uVar21) {
        do {
          local_50 = 0;
          pDVar22 = pDVar10;
          uVar18 = 0;
          if (uVar21 != 1 && -1 < (int)(uVar21 - 1)) {
            do {
              pDVar10 = local_a4;
              if (uVar18 < uVar21) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar22, uVar18) (runtime stride) */
                pbVar24 = (byte *)(pDVar22->elementSize * uVar18 + (int)pDVar22->data);
              }
              else {
                pbVar24 = (byte *)0x0;
              }
              uVar1 = uVar18 + 1;
              if (uVar1 < uVar21) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar22, uVar1) (runtime stride) */
                pbVar23 = (byte *)(pDVar22->elementSize * uVar1 + (int)pDVar22->data);
              }
              else {
                pbVar23 = (byte *)0x0;
              }
              if (((*pbVar23 & 0x20) < (*pbVar24 & 0x20)) ||
                 ((((*pbVar24 ^ *pbVar23) & 0x20) == 0 &&
                  (*(int *)(pbVar23 + 0x15) < *(int *)(pbVar24 + 0x15))))) {
                FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)local_a4,uVar18,uVar1);
                local_50 = 1;
              }
              uVar21 = pDVar10->count;
              pDVar22 = pDVar10;
              uVar18 = uVar1;
            } while ((int)uVar1 < (int)(uVar21 - 1));
          }
        } while (local_50 != 0);
      }
      pDVar10->iteratorIndex = 0;
      iVar9 = LookupRecordByte(recordIndex);
      local_134 = (-(uint)((char)iVar9 != '\x03') & 0xffffffdb) + 0x60;
      *(undefined4 *)(param_2[3] + 4) = 0;
      iVar9 = DArrayGetNext((DArrayTy *)param_2[3],(byte *)local_108);
      while (-1 < iVar9) {
        if (local_108[0] == local_134) {
          uVar21 = pDVar10->iteratorIndex;
          if (uVar21 < pDVar10->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, uVar21) (runtime stride) */
            pbVar24 = (byte *)(pDVar10->elementSize * uVar21 + (int)pDVar10->data);
            pDVar10->iteratorIndex = uVar21 + 1;
          }
          else {
            pbVar24 = (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) break;
          local_11c = *(int *)(pbVar24 + 9);
          local_138 = *(int *)(pbVar24 + 0xd);
          local_254[0] = *(int *)(pbVar24 + 0x11);
          iVar9 = thunk_FUN_004b1120(param_1,local_134,&local_11c,&local_138,local_254,0,1);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((iVar9 != 0) &&
             ((*(int *)(pbVar24 + 0x19) < 0 ||
              (iVar9 = FUN_006aced8(local_11c,local_138,*(int *)(pbVar24 + 9),
                                    *(int *)(pbVar24 + 0xd)), iVar9 < *(int *)(pbVar24 + 0x19))))) {
            *pbVar24 = *pbVar24 | 0x10;
            local_a0 = local_108[0];
            local_90 = local_f8;
            local_9c = local_11c;
            local_98 = local_138;
            local_94 = local_254[0];
            Library::DKW::TBL::DArrayAppend((DArrayTy *)param_2[5],&local_a0);
            local_4c[1] = local_4c[1] + -1;
            DArrayRemoveAt((DArrayTy *)param_2[3],((DArrayTy *)param_2[3])->iteratorIndex - 1);
          }
          if (local_4c[1] == 0) break;
        }
        iVar9 = DArrayGetNext((DArrayTy *)param_2[3],(byte *)local_108);
      }
    }
    DArrayDestroy(pDVar10);
  }
  iVar9 = 0;
LAB_004b3d9a:
  if (10 < iVar9) {
cf_break_loop_004B60CD:
    if (local_20 != (DArrayTy *)0x0) {
      DArrayDestroy(local_20);
    }
    puVar25 = local_24c;
    iVar9 = 0x42;
    do {
      if ((DArrayTy *)*puVar25 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)*puVar25);
      }
      puVar25 = puVar25 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    g_currentExceptionFrame = local_2c0.previous;
    ExceptionList = local_14;
    return 0;
  }
  if (local_4c[iVar9] == 0) {
    iVar9 = iVar9 + 1;
    goto LAB_004b3d9a;
  }
  local_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  puVar25 = (undefined4 *)&stack0xfffffc94;
  for (uVar21 = ((int)g_worldGrid.sizeZ * (int)g_worldGrid.planeStride & 0x7fffffffU) >> 1;
      uVar21 != 0; uVar21 = uVar21 - 1) {
    *puVar25 = 0xffffffff;
    puVar25 = puVar25 + 1;
  }
  for (uVar21 = (int)g_worldGrid.sizeZ * (int)g_worldGrid.planeStride * 2 & 3; uVar21 != 0;
      uVar21 = uVar21 - 1) {
    *(undefined1 *)puVar25 = 0xff;
    puVar25 = (undefined4 *)((int)puVar25 + 1);
  }
  local_27c = &stack0xfffffc94;
  iVar9 = local_144;
  iVar26 = local_140;
  iVar20 = local_13c;
  local_1c = &stack0xfffffc94;
  if (local_4c[2] != 0) {
    local_27c = &stack0xfffffc94;
    local_1c = &stack0xfffffc94;
    pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0xc,10);
    local_22c = pDVar10;
    if ((g_array_007FA16C != (DArrayTy *)0x0) && (uVar21 = 0, 0 < (int)g_array_007FA16C->count)) {
      do {
        DArrayGetElement(g_array_007FA16C,uVar21,&local_58);
        STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
        local_144 = (int)local_7c[0];
        local_140 = (int)local_8c[0];
        local_13c = (int)local_a8[0];
        Library::DKW::TBL::DArrayAppend(pDVar10,&local_144);
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < (int)g_array_007FA16C->count);
    }
    iVar12 = param_2[5];
    iVar9 = local_144;
    iVar26 = local_140;
    iVar20 = local_13c;
    if ((iVar12 != 0) && (*(int *)(iVar12 + 0xc) != 0)) {
      *(undefined4 *)(iVar12 + 4) = 0;
      iVar12 = DArrayGetNext((DArrayTy *)param_2[5],(byte *)&local_a0);
      iVar9 = local_144;
      iVar26 = local_140;
      iVar20 = local_13c;
      local_144 = local_9c;
      local_140 = local_98;
      local_13c = local_94;
      while (local_9c = local_144, local_98 = local_140, local_94 = local_13c, -1 < iVar12) {
        if (local_a0 == 0x3a) {
          Library::DKW::TBL::DArrayAppend(pDVar10,&local_144);
          iVar9 = local_144;
          iVar26 = local_140;
          iVar20 = local_13c;
        }
        local_13c = iVar20;
        local_140 = iVar26;
        local_144 = iVar9;
        iVar12 = DArrayGetNext((DArrayTy *)param_2[5],(byte *)&local_a0);
        iVar9 = local_144;
        iVar26 = local_140;
        iVar20 = local_13c;
        local_144 = local_9c;
        local_140 = local_98;
        local_13c = local_94;
      }
    }
  }
  local_13c = iVar20;
  local_140 = iVar26;
  local_144 = iVar9;
  iVar9 = local_144;
  iVar26 = local_140;
  iVar20 = local_13c;
  if (local_4c[3] != 0) {
    local_184 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0xc,10);
    pDVar10 = *(DArrayTy **)&g_packedRecords_A62x8[param_1].field_0x9d6;
    if ((pDVar10 != (DArrayTy *)0x0) && (uVar21 = 0, 0 < (int)pDVar10->count)) {
      do {
        DArrayGetElement(pDVar10,uVar21,&local_58);
        STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
        local_144 = (int)local_7c[0];
        local_140 = (int)local_8c[0];
        local_13c = (int)local_a8[0];
        Library::DKW::TBL::DArrayAppend(local_184,&local_144);
        uVar21 = uVar21 + 1;
        pDVar10 = *(DArrayTy **)&g_packedRecords_A62x8[param_1].field_0x9d6;
      } while ((int)uVar21 < (int)pDVar10->count);
    }
    iVar12 = param_2[5];
    iVar9 = local_144;
    iVar26 = local_140;
    iVar20 = local_13c;
    if ((iVar12 != 0) && (*(int *)(iVar12 + 0xc) != 0)) {
      *(undefined4 *)(iVar12 + 4) = 0;
      iVar12 = DArrayGetNext((DArrayTy *)param_2[5],(byte *)&local_a0);
      iVar9 = local_144;
      iVar26 = local_140;
      iVar20 = local_13c;
      local_144 = local_9c;
      local_140 = local_98;
      local_13c = local_94;
      while (local_9c = local_144, local_98 = local_140, local_94 = local_13c, -1 < iVar12) {
        if (local_a0 == 100) {
          Library::DKW::TBL::DArrayAppend(local_184,&local_144);
          iVar9 = local_144;
          iVar26 = local_140;
          iVar20 = local_13c;
        }
        local_13c = iVar20;
        local_140 = iVar26;
        local_144 = iVar9;
        iVar12 = DArrayGetNext((DArrayTy *)param_2[5],(byte *)&local_a0);
        iVar9 = local_144;
        iVar26 = local_140;
        iVar20 = local_13c;
        local_144 = local_9c;
        local_140 = local_98;
        local_13c = local_94;
      }
    }
  }
  local_13c = iVar20;
  local_140 = iVar26;
  local_144 = iVar9;
  local_54 = local_4c[10] + local_4c[8] + local_4c[9] + local_4c[7] + local_4c[4] + 5 + local_4c[6];
  local_20 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x30,10);
  local_64 = 0;
  local_114 = 0;
LAB_004b40f9:
  do {
    sVar17 = g_worldGrid.sizeX;
    if (g_worldGrid.sizeX <= g_worldGrid.sizeY) {
      sVar17 = g_worldGrid.sizeY;
    }
    if (sVar17 <= local_64) {
LAB_004b4689:
      *(undefined4 *)(param_2[5] + 4) = 0;
      iVar12 = DArrayGetNext((DArrayTy *)param_2[5],(byte *)&local_a0);
      puVar27 = local_27c;
      pDVar10 = local_22c;
      pDVar22 = local_184;
      pDVar5 = local_a4;
      GVar15 = local_a0;
      iVar9 = local_9c;
      iVar26 = local_98;
      iVar20 = local_94;
      pSVar6 = local_58;
      pDVar7 = local_20;
      while (local_27c = puVar27, local_22c = pDVar10, local_184 = pDVar22, local_a4 = pDVar5,
            local_a0 = GVar15, local_9c = iVar9, local_98 = iVar26, local_94 = iVar20,
            local_58 = pSVar6, local_20 = pDVar7, -1 < iVar12) {
        if (*(int *)(&DAT_00791d68 + GVar15 * 4) == 1) {
          uVar21 = 0;
          do {
            uVar18 = uVar21 & 0x80000001;
            if ((int)uVar18 < 0) {
              uVar18 = (uVar18 - 1 | 0xfffffffe) + 1;
            }
            iVar12 = (int)uVar21 / 2 + iVar26;
            *(ushort *)
             (puVar27 +
             (g_worldGrid.sizeX * iVar12 + uVar18 + iVar9 + g_worldGrid.planeStride * iVar20) * 2) =
                 *(ushort *)(&DAT_00790888 + GVar15 * 4) | 0x200;
            uVar21 = uVar21 + 1;
            local_138 = iVar12;
            local_11c = uVar18 + iVar9;
          } while ((int)uVar21 < 4);
        }
        else {
          *(ushort *)
           (puVar27 + (g_worldGrid.planeStride * iVar20 + iVar9 + g_worldGrid.sizeX * iVar26) * 2) =
               *(ushort *)(&DAT_00790888 + GVar15 * 4) | 0x200;
          local_138 = iVar26;
          local_11c = iVar9;
        }
        local_254[0] = iVar20;
        iVar12 = DArrayGetNext((DArrayTy *)param_2[5],(byte *)&local_a0);
        puVar27 = local_27c;
        pDVar10 = local_22c;
        pDVar22 = local_184;
        pDVar5 = local_a4;
        GVar15 = local_a0;
        iVar9 = local_9c;
        iVar26 = local_98;
        iVar20 = local_94;
        pSVar6 = local_58;
        pDVar7 = local_20;
      }
      iVar26 = 0;
      g_array_007FA150->iteratorIndex = 0;
      iVar9 = DArrayGetNext(g_array_007FA150,(byte *)&local_58);
      puVar27 = local_27c;
      while (-1 < iVar9) {
        if (local_58 != (STFishC *)0x0) {
          STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
          iVar9 = (int)local_8c[0] * (int)g_worldGrid.sizeX +
                  (int)g_worldGrid.planeStride * (int)local_a8[0] + (int)local_7c[0];
          sVar17 = *(short *)(puVar27 + iVar9 * 2);
          if ((sVar17 == 0) || (sVar17 == -1)) {
            *(undefined2 *)(puVar27 + iVar9 * 2) = 0x80;
          }
        }
        iVar9 = DArrayGetNext(g_array_007FA150,(byte *)&local_58);
      }
      if ((local_4c[4] != 0) || (local_4c[5] != 0)) {
        *(undefined4 *)(param_2[3] + 4) = 0;
        iVar9 = DArrayGetNext((DArrayTy *)param_2[3],(byte *)local_108);
        while (-1 < iVar9) {
          if (*(int *)(&DAT_00790888 + local_108[0] * 4) == 4) {
            memset(local_f4, 0, 0x30); /* compiler bulk-zero initialization */
            local_f4[0] = 0;
            Library::DKW::TBL::DArrayAppend(local_20,local_f4);
          }
          iVar9 = DArrayGetNext((DArrayTy *)param_2[3],(byte *)local_108);
        }
      }
      local_5c = 0;
      local_26c = 0;
      local_274 = 0;
      local_60 = 0;
      while( true ) {
        local_64 = iVar26;
        sVar17 = g_worldGrid.sizeX;
        if (g_worldGrid.sizeX <= g_worldGrid.sizeY) {
          sVar17 = g_worldGrid.sizeY;
        }
        if (sVar17 <= iVar26) break;
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
              iVar20 = (int)g_worldGrid.planeStride;
              iVar12 = iVar20 * local_254[0];
              iVar9 = g_worldGrid.sizeX * local_138;
              iVar26 = iVar9 + iVar12 + local_11c;
              if (*(short *)(local_27c + iVar26 * 2) != -1) {
                if ((*(short *)(local_27c + iVar26 * 2) == 0) &&
                   (*(short *)(local_27c + ((local_254[0] + 1) * iVar20 + iVar9 + local_11c) * 2) ==
                    0)) {
                  local_124 = 0;
                  if ((local_10c != 0) &&
                     (local_118 = iVar26 + 1, *(short *)(local_27c + local_118 * 2) == 0)) {
                    iVar26 = (local_138 + 1) * (int)g_worldGrid.sizeX + iVar12 + local_11c;
                    local_118 = iVar26;
                    if ((*(short *)(local_27c + iVar26 * 2) == 0) &&
                       (local_118 = iVar26 + 1, *(short *)(local_27c + (iVar26 + 1) * 2) == 0)) {
                      local_124 = 1;
                    }
                  }
                  if (local_254[0] < 1) {
                    bVar28 = true;
                  }
                  else {
                    iVar20 = (local_254[0] + -1) * iVar20;
                    iVar9 = iVar20 + iVar9 + local_11c;
                    local_118 = iVar9;
                    bVar28 = *(short *)(local_27c + iVar9 * 2) == 0x20;
                    if (!bVar28) goto cf_continue_loop_004B5FB6;
                    if ((local_10c != 0) && (local_124 != 0)) {
                      local_124 = 0;
                      local_118 = iVar9 + 1;
                      if (*(short *)(local_27c + (iVar9 + 1) * 2) == 0x20) {
                        iVar9 = (local_138 + 1) * (int)g_worldGrid.sizeX + iVar20 + local_11c;
                        local_118 = iVar9;
                        if ((*(short *)(local_27c + iVar9 * 2) == 0x20) &&
                           (local_118 = iVar9 + 1, *(short *)(local_27c + (iVar9 + 1) * 2) == 0x20))
                        {
                          local_124 = 1;
                        }
                      }
                    }
                  }
                  iVar9 = local_118;
                  if (bVar28) {
                    local_80 = 1;
                    iVar26 = 0;
                    do {
                      if (iVar26 != 4) {
                        iVar20 = iVar26 / 3 + -1 + local_138;
                        iVar14 = iVar26 % 3 + -1 + local_11c;
                        if ((((-1 < iVar20) && (iVar20 < g_worldGrid.sizeY)) && (-1 < iVar14)) &&
                           (((iVar14 < g_worldGrid.sizeX &&
                             (sVar17 = *(short *)(local_27c +
                                                 (iVar20 * g_worldGrid.sizeX + iVar14 + iVar12) * 2)
                             , sVar17 != 0)) && ((sVar17 != 0x10 && (sVar17 != 0x20)))))) {
                          bVar28 = false;
                          goto LAB_004b4bd1;
                        }
                      }
                      iVar26 = iVar26 + 1;
                    } while (iVar26 < 9);
                    bVar28 = true;
LAB_004b4bd1:
                    if (bVar28) {
                      iVar26 = LookupRecordByte(recordIndex);
                      pDVar22 = local_184;
                      pDVar10 = local_22c;
                      local_270 = 0;
                      if ((char)iVar26 == '\x03') {
                        if (local_4c[3] != 0) {
                          if ((local_184 == (DArrayTy *)0x0) || (local_184->count == 0)) {
                            local_270 = 1;
                          }
                          else {
                            local_270 = 1;
                            uVar21 = 0;
                            if (0 < (int)local_184->count) {
                              do {
                                DArrayGetElement(pDVar22,uVar21,&local_144);
                                uVar18 = local_144 - local_11c >> 0x1f;
                                if (((int)((local_144 - local_11c ^ uVar18) - uVar18) < 0x10) ||
                                   (uVar18 = local_140 - local_138 >> 0x1f,
                                   (int)((local_140 - local_138 ^ uVar18) - uVar18) < 0x10)) {
                                  local_270 = 0;
                                  break;
                                }
                                uVar21 = uVar21 + 1;
                              } while ((int)uVar21 < (int)pDVar22->count);
                            }
                          }
                        }
                      }
                      else if (local_4c[2] != 0) {
                        if ((local_22c != (DArrayTy *)0x0) && (local_22c->count != 0)) {
                          iVar26 = -1;
                          uVar21 = 0;
                          if (0 < (int)local_22c->count) {
                            do {
                              DArrayGetElement(pDVar10,uVar21,&local_144);
                              iVar9 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                              if ((iVar26 < 0) || (iVar9 < iVar26)) {
                                iVar26 = iVar9;
                              }
                              uVar21 = uVar21 + 1;
                            } while ((int)uVar21 < (int)pDVar10->count);
                          }
                          if ((-1 < iVar26) && (iVar9 = local_118, iVar26 < 0xe)) goto LAB_004b4c78;
                        }
                        local_270 = 1;
                        iVar9 = local_118;
                      }
LAB_004b4c78:
                      if (((local_270 == 0) ||
                          (iVar26 = LookupRecordByte(recordIndex), (char)iVar26 == '\x03')) &&
                         (local_10c != 0)) {
                        if (local_124 != 0) {
                          uVar21 = 0;
                          do {
                            if (((uVar21 != 4) && (uVar21 != 5)) && ((uVar21 != 8 && (uVar21 != 9)))
                               ) {
                              iVar26 = ((int)(uVar21 + ((int)uVar21 >> 0x1f & 3U)) >> 2) + -1 +
                                       local_138;
                              uVar18 = uVar21 & 0x80000003;
                              if ((int)uVar18 < 0) {
                                uVar18 = (uVar18 - 1 | 0xfffffffc) + 1;
                              }
                              iVar20 = (uVar18 - 1) + local_11c;
                              if (((-1 < iVar26) && (iVar26 < g_worldGrid.sizeY)) && (-1 < iVar20))
                              {
                                if ((((iVar20 < g_worldGrid.sizeX) &&
                                     (sVar17 = *(short *)(local_27c +
                                                         (iVar26 * g_worldGrid.sizeX +
                                                         iVar20 + g_worldGrid.planeStride *
                                                                  local_254[0]) * 2), sVar17 != 0))
                                    && (sVar17 != 0x10)) && (sVar17 != 0x20)) {
                                  local_124 = 0;
                                  break;
                                }
                              }
                            }
                            uVar21 = uVar21 + 1;
                          } while ((int)uVar21 < 0x10);
                          goto LAB_004b4e09;
                        }
LAB_004b4f55:
                        uVar21 = 0;
                      }
                      else {
LAB_004b4e09:
                        if ((local_124 == 0) || (local_4c[4] == 0)) goto LAB_004b4f55;
                        iVar26 = 0;
                        local_12c = 0;
                        do {
                          iVar20 = iVar26 / 6;
                          if (((iVar20 == 0) || (iVar20 == 5)) ||
                             ((iVar26 % 6 == 0 || (iVar26 % 6 == 5)))) {
                            iVar20 = iVar20 + -2 + local_138;
                            iVar12 = iVar26 % 6 + -2 + local_11c;
                            if (((-1 < iVar20) && (iVar20 < g_worldGrid.sizeY)) && (-1 < iVar12)) {
                              if (iVar12 < g_worldGrid.sizeX) {
                                iVar20 = iVar20 * g_worldGrid.sizeX;
                                iVar14 = g_worldGrid.planeStride * local_254[0] + iVar20 + iVar12;
                                if (0 < local_254[0]) {
                                  iVar9 = (local_254[0] + -1) * (int)g_worldGrid.planeStride +
                                          iVar20 + iVar12;
                                  local_118 = iVar9;
                                }
                                if ((*(short *)(local_27c + iVar14 * 2) == 0) &&
                                   ((local_254[0] == 0 ||
                                    (*(short *)(local_27c + iVar9 * 2) == 0x20)))) {
LAB_004b4f35:
                                  local_12c = local_12c + 1;
                                }
                                else if (*(short *)(local_27c + iVar14 * 2) == 0x205) {
                                  local_58 = (STFishC *)g_worldGrid.cells[iVar14].objects[0];
                                  if (((local_58 != (STFishC *)0x0) &&
                                      (dVar13 = local_58->slot_2C(),
                                      0x53 < (int)dVar13)) &&
                                     ((dVar13 = local_58->slot_2C(),
                                      (int)dVar13 < 0x5b && (*(int *)&local_58[2].field_0xfd == 0)))
                                     ) goto LAB_004b4f35;
                                }
                              }
                            }
                          }
                          iVar26 = iVar26 + 1;
                        } while (iVar26 < 0x24);
                        uVar21 = (uint)(6 < local_12c);
                      }
                      local_268 = uVar21;
                      if ((local_4c[4] == 0) || (uVar21 != 0)) {
                        if ((local_124 == 0) || (local_10c == 0)) {
                          iVar9 = 0;
                        }
                        else {
                          iVar9 = 1;
                        }
                        *(undefined4 *)(param_2[3] + 4) = 0;
                        local_ac = iVar9;
                        iVar26 = DArrayGetNext((DArrayTy *)param_2[3],(byte *)local_108);
                        pDVar10 = local_20;
                        while (local_20 = pDVar10, -1 < iVar26) {
                          iVar26 = *(int *)(&DAT_00790888 + local_108[0] * 4);
                          if (iVar26 == 4) {
                            if ((uVar21 == 0) ||
                               (*(int *)(&DAT_00791d68 + local_108[0] * 4) != iVar9))
                            goto cf_common_join_004B5648;
                            local_a0 = local_108[0];
                            local_9c = local_11c;
                            local_98 = local_138;
                            local_94 = local_254[0];
                            local_90 = local_f8;
                            Library::DKW::TBL::DArrayAppend((DArrayTy *)param_2[5],&local_a0);
                            DArrayRemoveAt((DArrayTy *)param_2[3],
                                           ((DArrayTy *)param_2[3])->iteratorIndex - 1);
                            pDVar10->iteratorIndex = 0;
                            goto LAB_004b56e4;
                          }
                          if (local_4c[4] != 0) goto cf_common_join_004B5648;
                          if (((iVar26 == 1) || (iVar26 == 6)) || ((iVar26 == 2 || (iVar26 == 3))))
                          {
                            iVar26 = LookupRecordByte(recordIndex);
                            GVar15 = (-(uint)((char)iVar26 != '\x03') & 0xffffffd6) + 100;
                            if (local_270 == 0) {
                              if (local_108[0] == GVar15) goto cf_common_join_004B5648;
LAB_004b5614:
                              if (((local_270 != 0) &&
                                  (iVar26 = LookupRecordByte(recordIndex), (char)iVar26 != '\x03'))
                                 || (*(int *)(&DAT_00791d68 + local_108[0] * 4) == iVar9)) {
                                local_a0 = local_108[0];
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                Library::DKW::TBL::DArrayAppend((DArrayTy *)param_2[5],&local_a0);
                                DArrayRemoveAt((DArrayTy *)param_2[3],
                                               ((DArrayTy *)param_2[3])->iteratorIndex - 1);
                                if (local_108[0] == 0x3a) {
                                  local_4c[2] = local_4c[2] + -1;
                                  local_144 = local_11c;
                                  local_140 = local_138;
                                  local_13c = local_254[0];
                                  Library::DKW::TBL::DArrayAppend(local_22c,&local_144);
                                }
                                else if (local_108[0] == 100) {
                                  local_4c[3] = local_4c[3] + -1;
                                  local_144 = local_11c;
                                  local_140 = local_138;
                                  local_13c = local_254[0];
                                  Library::DKW::TBL::DArrayAppend(local_184,&local_144);
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
                                  uVar21 = 0;
                                  do {
                                    uVar18 = uVar21 & 0x80000001;
                                    if ((int)uVar18 < 0) {
                                      uVar18 = (uVar18 - 1 | 0xfffffffe) + 1;
                                    }
                                    *(ushort *)
                                     (local_27c +
                                     (uVar18 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                               ((int)uVar21 / 2 + local_138) *
                                               (int)g_worldGrid.sizeX) * 2) =
                                         *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                    uVar21 = uVar21 + 1;
                                  } while ((int)uVar21 < 4);
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
                            else if (local_108[0] == GVar15) goto LAB_004b5614;
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
                            if (iVar26 == 7) {
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != iVar9)
                              goto cf_common_join_004B5648;
                              pDVar10 = (DArrayTy *)aiStack_314[local_108[0]];
                              if ((pDVar10 == (DArrayTy *)0x0) || (pDVar10->count == 0)) {
LAB_004b50f4:
                                bVar28 = true;
                              }
                              else {
                                bVar28 = false;
                                iVar9 = -1;
                                uVar21 = 0;
                                if (0 < (int)pDVar10->count) {
                                  do {
                                    DArrayGetElement(pDVar10,uVar21,&local_144);
                                    iVar26 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar9 < 0) || (iVar26 < iVar9)) {
                                      iVar9 = iVar26;
                                    }
                                    uVar21 = uVar21 + 1;
                                    pDVar10 = (DArrayTy *)aiStack_314[local_108[0]];
                                  } while ((int)uVar21 < (int)pDVar10->count);
                                }
                                if ((iVar9 < 0) ||
                                   ((*(int *)(&DAT_00794fe4 + local_108[0] * 4) * 3) / 0x192 < iVar9
                                   )) goto LAB_004b50f4;
                              }
                              if (!bVar28) goto LAB_004b5101;
                              local_90 = local_f8;
                              local_9c = local_11c;
                              local_98 = local_138;
                              local_94 = local_254[0];
                              local_a0 = local_108[0];
                              Library::DKW::TBL::DArrayAppend((DArrayTy *)param_2[5],&local_a0);
                              DArrayRemoveAt((DArrayTy *)param_2[3],
                                             ((DArrayTy *)param_2[3])->iteratorIndex - 1);
                              piVar16 = aiStack_314 + local_108[0];
                              if (*piVar16 == 0) {
                                piVar16 = aiStack_314 + local_108[0];
                                pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0xc,10);
                                *piVar16 = (int)pDVar10;
                              }
                              local_144 = local_11c;
                              local_140 = local_138;
                              local_13c = local_254[0];
                              Library::DKW::TBL::DArrayAppend((DArrayTy *)*piVar16,&local_144);
                              local_4c[7] = local_4c[7] + -1;
                              if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                              goto LAB_004b5f7b;
                              local_10c = local_10c + -1;
                              uVar21 = 0;
                              do {
                                uVar18 = uVar21 & 0x80000001;
                                if ((int)uVar18 < 0) {
                                  uVar18 = (uVar18 - 1 | 0xfffffffe) + 1;
                                }
                                *(ushort *)
                                 (local_27c +
                                 (uVar18 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                           ((int)uVar21 / 2 + local_138) * (int)g_worldGrid.sizeX) *
                                 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                uVar21 = uVar21 + 1;
                              } while ((int)uVar21 < 4);
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
                              pDVar10 = (DArrayTy *)aiStack_314[local_108[0]];
                              if ((pDVar10 == (DArrayTy *)0x0) || (pDVar10->count == 0)) {
LAB_004b51da:
                                bVar28 = true;
                              }
                              else {
                                bVar28 = false;
                                iVar9 = -1;
                                uVar21 = 0;
                                if (0 < (int)pDVar10->count) {
                                  do {
                                    DArrayGetElement(pDVar10,uVar21,&local_144);
                                    iVar26 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar9 < 0) || (iVar26 < iVar9)) {
                                      iVar9 = iVar26;
                                    }
                                    uVar21 = uVar21 + 1;
                                    pDVar10 = (DArrayTy *)aiStack_314[local_108[0]];
                                  } while ((int)uVar21 < (int)pDVar10->count);
                                }
                                if ((iVar9 < 0) ||
                                   ((*(int *)(&DAT_00794fe4 + local_108[0] * 4) * 3) / 0x192 < iVar9
                                   )) goto LAB_004b51da;
                              }
                              if (bVar28) {
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                local_a0 = local_108[0];
                                Library::DKW::TBL::DArrayAppend((DArrayTy *)param_2[5],&local_a0);
                                DArrayRemoveAt((DArrayTy *)param_2[3],
                                               ((DArrayTy *)param_2[3])->iteratorIndex - 1);
                                piVar16 = aiStack_314 + local_108[0];
                                if (*piVar16 == 0) {
                                  piVar16 = aiStack_314 + local_108[0];
                                  pDVar10 = Library::DKW::TBL::DArrayCreate
                                                      ((DArrayTy *)0x0,10,0xc,10);
                                  *piVar16 = (int)pDVar10;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::DArrayAppend((DArrayTy *)*piVar16,&local_144);
                                local_4c[8] = local_4c[8] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                                goto LAB_004b5f7b;
                                local_10c = local_10c + -1;
                                uVar21 = 0;
                                do {
                                  uVar18 = uVar21 & 0x80000001;
                                  if ((int)uVar18 < 0) {
                                    uVar18 = (uVar18 - 1 | 0xfffffffe) + 1;
                                  }
                                  *(ushort *)
                                   (local_27c +
                                   (uVar18 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                             ((int)uVar21 / 2 + local_138) * (int)g_worldGrid.sizeX)
                                   * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                  uVar21 = uVar21 + 1;
                                } while ((int)uVar21 < 4);
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
                              pDVar10 = (DArrayTy *)aiStack_314[local_108[0]];
                              if ((pDVar10 == (DArrayTy *)0x0) || (pDVar10->count == 0)) {
LAB_004b52b6:
                                bVar28 = true;
                              }
                              else {
                                bVar28 = false;
                                iVar9 = -1;
                                uVar21 = 0;
                                if (0 < (int)pDVar10->count) {
                                  do {
                                    DArrayGetElement(pDVar10,uVar21,&local_144);
                                    iVar26 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar9 < 0) || (iVar26 < iVar9)) {
                                      iVar9 = iVar26;
                                    }
                                    uVar21 = uVar21 + 1;
                                    pDVar10 = (DArrayTy *)aiStack_314[local_108[0]];
                                  } while ((int)uVar21 < (int)pDVar10->count);
                                }
                                if ((local_108[0] == 0x69) || (local_108[0] == 0x6a)) {
                                  iVar26 = 10;
                                }
                                else {
                                  iVar26 = 0;
                                }
                                if ((iVar9 < 0) || ((int)((uint)(iVar26 * 3) / 2) < iVar9))
                                goto LAB_004b52b6;
                              }
                              if (bVar28) {
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                local_a0 = local_108[0];
                                Library::DKW::TBL::DArrayAppend((DArrayTy *)param_2[5],&local_a0);
                                DArrayRemoveAt((DArrayTy *)param_2[3],
                                               ((DArrayTy *)param_2[3])->iteratorIndex - 1);
                                piVar16 = aiStack_314 + local_108[0];
                                if (*piVar16 == 0) {
                                  piVar16 = aiStack_314 + local_108[0];
                                  pDVar10 = Library::DKW::TBL::DArrayCreate
                                                      ((DArrayTy *)0x0,10,0xc,10);
                                  *piVar16 = (int)pDVar10;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::DArrayAppend((DArrayTy *)*piVar16,&local_144);
                                local_4c[9] = local_4c[9] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) != 1)
                                goto LAB_004b5f7b;
                                local_10c = local_10c + -1;
                                uVar21 = 0;
                                do {
                                  uVar18 = uVar21 & 0x80000001;
                                  if ((int)uVar18 < 0) {
                                    uVar18 = (uVar18 - 1 | 0xfffffffe) + 1;
                                  }
                                  *(ushort *)
                                   (local_27c +
                                   (uVar18 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                             ((int)uVar21 / 2 + local_138) * (int)g_worldGrid.sizeX)
                                   * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                  uVar21 = uVar21 + 1;
                                } while ((int)uVar21 < 4);
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
                              iVar9 = -1;
                              local_354 = 0;
                              GVar15 = local_108[0];
                              do {
                                if (((*(int *)(&DAT_00790950 + local_354) == 10) &&
                                    (pDVar10 = *(DArrayTy **)((int)local_24c + local_354),
                                    pDVar10 != (DArrayTy *)0x0)) &&
                                   (uVar21 = 0, 0 < (int)pDVar10->count)) {
                                  do {
                                    DArrayGetElement(pDVar10,uVar21,&local_144);
                                    iVar26 = FUN_006aced8(local_11c,local_138,local_144,local_140);
                                    if ((iVar9 < 0) || (iVar26 < iVar9)) {
                                      iVar9 = iVar26;
                                    }
                                    uVar21 = uVar21 + 1;
                                    GVar15 = local_108[0];
                                  } while ((int)uVar21 < (int)pDVar10->count);
                                }
                                local_354 = local_354 + 4;
                              } while (local_354 < 0x108);
                              local_78 = thunk_FUN_004e81b0(param_1,GVar15 - 0x32,0);
                              puVar27 = local_27c;
                              if ((iVar9 < 0) || (uVar21 = local_128, local_78 < iVar9)) {
                                local_258 = 0;
                                local_264 = 0;
                                local_260 = 0;
                                local_25c = 0;
                                local_12c = 0;
                                local_120 = 1;
                                if (local_78 < 1) {
                                  uVar21 = (uint)(local_78 * 2 < 1);
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
                                  uVar21 = (uint)(local_78 * 2 <= local_12c);
                                }
                              }
                              if (uVar21 != 0) {
                                local_a0 = local_108[0];
                                local_90 = local_f8;
                                local_9c = local_11c;
                                local_98 = local_138;
                                local_94 = local_254[0];
                                Library::DKW::TBL::DArrayAppend((DArrayTy *)param_2[5],&local_a0);
                                DArrayRemoveAt((DArrayTy *)param_2[3],
                                               ((DArrayTy *)param_2[3])->iteratorIndex - 1);
                                piVar16 = aiStack_314 + local_108[0];
                                if (*piVar16 == 0) {
                                  piVar16 = aiStack_314 + local_108[0];
                                  pDVar10 = Library::DKW::TBL::DArrayCreate
                                                      ((DArrayTy *)0x0,10,0xc,10);
                                  *piVar16 = (int)pDVar10;
                                }
                                local_144 = local_11c;
                                local_140 = local_138;
                                local_13c = local_254[0];
                                Library::DKW::TBL::DArrayAppend((DArrayTy *)*piVar16,&local_144);
                                local_4c[10] = local_4c[10] + -1;
                                if (*(int *)(&DAT_00791d68 + local_108[0] * 4) == 1) {
                                  local_10c = local_10c + -1;
                                  uVar21 = 0;
                                  do {
                                    uVar18 = uVar21 & 0x80000001;
                                    if ((int)uVar18 < 0) {
                                      uVar18 = (uVar18 - 1 | 0xfffffffe) + 1;
                                    }
                                    *(ushort *)
                                     (local_27c +
                                     (uVar18 + g_worldGrid.planeStride * local_254[0] + local_11c +
                                               ((int)uVar21 / 2 + local_138) *
                                               (int)g_worldGrid.sizeX) * 2) =
                                         *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                    uVar21 = uVar21 + 1;
                                  } while ((int)uVar21 < 4);
                                }
                                else {
                                  *(ushort *)
                                   (puVar27 +
                                   (g_worldGrid.sizeX * local_138 +
                                   local_11c + g_worldGrid.planeStride * local_254[0]) * 2) =
                                       *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
                                }
                                break;
                              }
                            }
                          }
cf_common_join_004B5648:
                          iVar26 = DArrayGetNext((DArrayTy *)param_2[3],(byte *)local_108);
                          iVar9 = local_ac;
                          uVar21 = local_268;
                          pDVar10 = local_20;
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
        iVar26 = local_64 + 1;
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
            (local_254[0] = 0, puVar27 = local_27c, 0 < g_worldGrid.sizeZ)))) {
          do {
            iVar9 = g_worldGrid.sizeX * local_138 +
                    local_11c + g_worldGrid.planeStride * local_254[0];
            local_58 = (STFishC *)g_worldGrid.cells[iVar9].objects[0];
            if (local_58 == (STFishC *)0x0) {
              sVar17 = (short)local_11c;
              if (((((sVar17 < 0) || (g_worldGrid.sizeX <= sVar17)) ||
                   (sVar8 = (short)local_138, sVar8 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar8 || (sVar19 = (short)local_254[0], sVar19 < 0)))) ||
                 (g_worldGrid.sizeZ <= sVar19)) {
                sVar17 = -1;
              }
              else {
                sVar17 = g_pathingGrid.cells
                         [(int)sVar8 * (int)g_pathingGrid.sizeX +
                          (int)sVar19 * (int)g_pathingGrid.planeStride + (int)sVar17];
              }
              if (sVar17 == 0) {
                local_58 = (STFishC *)g_worldGrid.cells[iVar9].objects[1];
                if ((local_58 == (STFishC *)0x0) ||
                   (((dVar13 = local_58->slot_2C(), dVar13 != 0xa6 &&
                     (dVar13 = local_58->slot_2C(), dVar13 != 0xbd)) &&
                    ((dVar13 = local_58->slot_2C(), dVar13 != 0xa7 &&
                     (dVar13 = local_58->slot_2C(), dVar13 != 0xaf)))))) {
LAB_004b432d:
                  *(undefined2 *)(puVar27 + iVar9 * 2) = 0;
                }
                else {
                  *(undefined2 *)(puVar27 + iVar9 * 2) = 0x40;
                }
              }
              else {
                if (sVar17 != -1) goto LAB_004b4634;
                *(undefined2 *)(puVar27 + iVar9 * 2) = 0x20;
              }
            }
            else {
              if (*(int *)&local_58->field_0x20 == 1000) {
                local_34c = local_58->slot_2C();
              }
              else {
                if (*(int *)&local_58->field_0x20 != 0x3e9) goto LAB_004b432d;
                local_34c = *(dword *)&local_58->field_0x259;
              }
              uVar21 = local_58->field_0024;
              if (uVar21 == param_1) {
                *(ushort *)(puVar27 + iVar9 * 2) =
                     *(ushort *)(&DAT_00790888 + local_34c * 4) | 0x200;
                local_114 = local_64;
                iVar9 = *(int *)(&DAT_00790888 + local_34c * 4);
                if (((iVar9 == 7) || (iVar9 == 8)) || (iVar9 == 9)) {
                  STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
                  if (((local_7c[0] == local_11c) && (local_8c[0] == local_138)) &&
                     (local_a8[0] == local_254[0])) {
                    piVar16 = aiStack_314 + local_34c;
                    if (*piVar16 == 0) {
                      pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0xc,10);
                      *piVar16 = (int)pDVar10;
                    }
                    local_144 = (int)local_7c[0];
                    local_140 = (int)local_8c[0];
                    local_13c = (int)local_a8[0];
                    Library::DKW::TBL::DArrayAppend((DArrayTy *)*piVar16,&local_144);
                  }
                }
                else if (iVar9 == 4) {
                  STFishC::sub_004162B0(local_58,local_7c,local_8c,local_a8);
                  iVar9 = (int)local_7c[0];
                  if (((iVar9 == local_11c) && (iVar26 = (int)local_8c[0], iVar26 == local_138)) &&
                     (iVar20 = (int)local_a8[0], iVar20 == local_254[0])) {
                    piVar16 = local_f4;
                    memset(piVar16, 0, 0x30); /* compiler bulk-zero initialization */
                    piVar16 = (undefined4 *)((byte *)piVar16 + 0x30);
                    local_f4[0] = 1;
                    local_f4[1] = iVar9;
                    local_f4[2] = iVar26;
                    local_f4[3] = iVar20;
                    Library::DKW::TBL::DArrayAppend(local_20,local_f4);
                    puVar27 = local_27c;
                  }
                }
              }
              else {
                if ((uVar21 < 8) &&
                   ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 ||
                    ((byte)(&DAT_008087e9)[uVar21 * 0x51] < 8)))) {
                  bVar2 = *(byte *)&local_58->field_0024;
                  if (g_appClass_00806728->field_146F == '\0') {
                    if (bVar2 == recordIndex) {
                      iVar26 = 0;
                    }
                    else {
                      uVar21 = (uint)bVar2;
                      uVar18 = param_1 & 0xff;
                      cVar3 = (&g_appClass_00806728->field_0x142f)[uVar18 + uVar21 * 8];
                      puVar27 = local_27c;
                      if ((cVar3 == '\0') &&
                         ((&g_appClass_00806728->field_0x142f)[uVar21 + uVar18 * 8] == '\0')) {
                        iVar26 = -2;
                      }
                      else if ((cVar3 == '\x01') &&
                              ((&g_appClass_00806728->field_0x142f)[uVar21 + uVar18 * 8] == '\0')) {
                        iVar26 = -1;
                      }
                      else if ((cVar3 == '\0') &&
                              ((&g_appClass_00806728->field_0x142f)[uVar21 + uVar18 * 8] == '\x01'))
                      {
                        iVar26 = 1;
                      }
                      else if ((cVar3 == '\x01') &&
                              ((&g_appClass_00806728->field_0x142f)[uVar21 + uVar18 * 8] == '\x01'))
                      {
                        iVar26 = 2;
                      }
                      else {
                        iVar26 = 0;
                      }
                    }
                    bVar28 = iVar26 < 0;
                  }
                  else {
                    bVar28 = (&g_appClass_00806728->field_0x11ca)[(param_1 & 0xff) * 0x51] !=
                             (&g_appClass_00806728->field_0x11ca)[(uint)bVar2 * 0x51];
                  }
                  if (bVar28) {
                    *(ushort *)(puVar27 + iVar9 * 2) =
                         *(ushort *)(&DAT_00790888 + local_34c * 4) | 0x100;
                    goto LAB_004b463a;
                  }
                }
LAB_004b4634:
                *(undefined2 *)(puVar27 + iVar9 * 2) = 0x10;
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
  while (*piVar16 != 0) {
LAB_004b56e4:
    uVar21 = pDVar10->iteratorIndex;
    if (uVar21 < pDVar10->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, uVar21) (runtime stride) */
      piVar16 = (int *)(pDVar10->elementSize * uVar21 + (int)pDVar10->data);
      pDVar10->iteratorIndex = uVar21 + 1;
    }
    else {
      piVar16 = (int *)0x0;
    }
    if (piVar16 == (int *)0x0) goto LAB_004b5727;
  }
  *piVar16 = 1;
  piVar16[1] = local_11c;
  piVar16[2] = local_138;
  piVar16[3] = local_254[0];
LAB_004b5727:
  iVar9 = local_4c[4] + -1;
  local_4c[4] = iVar9;
  local_10c = local_10c + -1;
  iVar26 = 0;
  do {
    iVar20 = iVar26 / 6 + -2 + local_138;
    iVar12 = iVar26 % 6 + -2 + local_11c;
    if (((-1 < iVar20) && (iVar20 < g_worldGrid.sizeY)) && (-1 < iVar12)) {
      if ((iVar12 < g_worldGrid.sizeX) &&
         (iVar20 = iVar20 * g_worldGrid.sizeX + iVar12 + g_worldGrid.planeStride * local_254[0],
         *(short *)(local_27c + iVar20 * 2) == 0)) {
        *(ushort *)(local_27c + iVar20 * 2) = *(ushort *)(&DAT_00790888 + local_108[0] * 4) | 0x200;
      }
    }
    iVar26 = iVar26 + 1;
  } while (iVar26 < 0x24);
  if (iVar9 == 0) {
    local_64 = 0;
    goto cf_continue_loop_004B48CC;
  }
cf_continue_loop_004B5FB6:
  local_254[0] = local_254[0] + 1;
  if (g_worldGrid.sizeZ + -1 <= local_254[0]) goto LAB_004b5fd6;
  goto LAB_004b49b4;
}

