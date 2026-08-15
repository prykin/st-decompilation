#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_4 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004AE0B0_param_4Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94;CASE_61=97
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=004AE619 MOVSX EAX,word ptr [EBP + 0x8] */

undefined4 __cdecl
FUN_004ae0b0(short param_1,int param_2,int param_3,Global_sub_004AE0B0_param_4Enum param_4,
            int param_5,undefined4 *param_6,int *param_7,int *param_8,int param_9,int *param_10)

{
  STWorldObject *pSVar1;
  int *piVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  dword dVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  DArrayTy *pDVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_00000006;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  STFishC *local_10;
  int local_c;
  short local_8;
  short local_6;

  iVar11 = 1;
  local_24 = 0;
  iVar17 = 1;
  local_18 = 0;
  local_c = 0;
  if (*(int *)(&DAT_00791d68 + param_4 * 4) == 0) {
    iVar17 = 1;
    iVar11 = 1;
  }
  else if (*(int *)(&DAT_00791d68 + param_4 * 4) == 1) {
    iVar17 = 2;
    iVar11 = 2;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (((((in_stack_00000006 < 0) || (iVar11 = iVar11 + _param_1, g_worldGrid.sizeX < iVar11)) ||
       (param_2 < 0)) || ((iVar17 = iVar17 + param_2, g_worldGrid.sizeY < iVar17 || (param_3 < 0))))
     || ((int)g_worldGrid.sizeZ < param_3 + 1)) {
cf_break_loop_004AE25B:
    local_20 = 0;
    goto LAB_004aecb2;
  }
  local_20 = 1;
  for (iVar18 = _param_1; iVar7 = param_2, iVar18 < iVar11; iVar18 = iVar18 + 1) {
    for (; iVar7 < iVar17; iVar7 = iVar7 + 1) {
      iVar6 = param_3;
      if (param_3 < param_3 + 1) {
        do {
          sVar14 = (short)iVar18;
          if (sVar14 < 0) goto cf_break_loop_004AE25B;
          sVar4 = (short)iVar7;
          sVar15 = (short)iVar6;
          if ((((sVar14 < g_worldGrid.sizeX) && (-1 < sVar4)) &&
              ((sVar4 < g_worldGrid.sizeY &&
               (((-1 < sVar15 && (sVar15 < g_worldGrid.sizeZ)) &&
                (STGridAt3D(g_worldGrid, sVar14, sVar4, sVar15).objects[0] != nullptr)))))) ||
             (((sVar14 < 0 || (g_worldGrid.sizeX <= sVar14)) ||
              ((sVar4 < 0 ||
               (((g_worldGrid.sizeY <= sVar4 || (sVar15 < 0)) ||
                ((g_worldGrid.sizeZ <= sVar15 ||
                 (STGridAt3D(g_pathingGrid, sVar14, sVar4, sVar15) != 0))))))))))
          goto cf_break_loop_004AE25B;
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_3 + 1);
      }
    }
  }
  local_18 = 1;
  sVar14 = (short)param_3;
  iVar18 = _param_1;
  if (0 < param_3) {
    for (; iVar18 < iVar11; iVar18 = iVar18 + 1) {
      if (param_2 < iVar17) {
        sVar15 = sVar14 + -1;
        iVar7 = param_2;
        do {
          sVar4 = (short)iVar18;
          if ((-1 < sVar4) &&
             ((((((sVar5 = (short)iVar7, sVar4 < g_worldGrid.sizeX && (-1 < sVar5)) &&
                 (sVar5 < g_worldGrid.sizeY)) && ((-1 < sVar15 && (sVar15 < g_worldGrid.sizeZ)))) &&
               (STGridAt3D(g_worldGrid, sVar4, sVar5, sVar15).objects[0] != nullptr)) ||
              (((-1 < sVar4 && (sVar4 < g_worldGrid.sizeX)) &&
               ((-1 < sVar5 &&
                ((((sVar5 < g_worldGrid.sizeY && (-1 < sVar15)) && (sVar15 < g_worldGrid.sizeZ)) &&
                 (STGridAt3D(g_pathingGrid, sVar4, sVar5, sVar15) != -1)))))))))) {
            local_18 = 0;
            goto LAB_004ae37e;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar17);
      }
    }
  }
LAB_004ae37e:
  if (((param_9 == 0) ||
      (bVar3 = LookupRecordByte((char)param_5), sVar15 = g_worldGrid.sizeX, bVar3 == 3)) &&
     ((sVar15 = g_worldGrid.sizeX, local_18 != 0 && (local_18 = 0, param_3 < 4)))) {
    local_18 = 1;
    for (local_c = _param_1; local_c < iVar11; local_c = local_c + 1) {
      if (param_2 < iVar17) {
        iVar18 = param_2;
        do {
          iVar7 = thunk_FUN_004961b0((short)local_c,(short)iVar18,sVar14 + 1);
          sVar15 = g_worldGrid.sizeX;
          if (iVar7 == 0) {
            local_18 = 0;
            goto LAB_004ae41c;
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < iVar17);
      }
    }
  }
LAB_004ae41c:
  if (param_4 - CASE_38 < 0x2a) {
                    /* WARNING: Switch is manually overridden */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined1 *)(param_4 + 0x4aecb0)) {
    case 0:
      local_c = 0;
      local_10 = (STFishC *)thunk_FUN_004d85e0(_param_1,param_2,param_3);
      if (local_10 != nullptr) {
        dVar8 = local_10->slot_2C();
                    /* WARNING: Switch is manually overridden */
        switch((&BYTE_004aecec)[param_4]) {
        case 0:
          if (dVar8 == 0xdc) {
            local_c = 1;
          }
          break;
        case 1:
          if (dVar8 == 0xdd) {
            local_c = 1;
          }
          break;
        case 2:
          if (dVar8 == 0xde) {
            local_c = 1;
          }
        }
      }
      goto switchD_004ae472_caseD_3;
    }
  }
  local_c = 1;
  for (iVar18 = _param_1; iVar7 = param_2, iVar18 < iVar11; iVar18 = iVar18 + 1) {
    for (; iVar7 < iVar17; iVar7 = iVar7 + 1) {
      iVar6 = param_3;
      if (param_3 < param_3 + 1) {
        do {
          sVar4 = (short)iVar18;
          if (((sVar4 < 0) || (sVar15 <= sVar4)) ||
             ((sVar5 = (short)iVar7, sVar5 < 0 ||
              (((g_worldGrid.sizeY <= sVar5 || (sVar16 = (short)iVar6, sVar16 < 0)) ||
               (g_worldGrid.sizeZ <= sVar16)))))) {
            local_10 = nullptr;
          }
          else {
            local_10 = (STFishC *)
                       g_worldGrid.cells
                       [(int)sVar5 * (int)sVar15 + (int)sVar16 * (int)g_worldGrid.planeStride +
                        (int)sVar4].objects[1];
          }
          if (((local_10 != nullptr) && (*(int *)&local_10->field_0x20 != 0xbe)) ||
             (puVar9 = thunk_FUN_004d85e0(iVar18,iVar7,iVar6), puVar9 != nullptr))
          goto cf_break_loop_004AEC96;
          iVar6 = iVar6 + 1;
          local_10 = nullptr;
          sVar15 = g_worldGrid.sizeX;
        } while (iVar6 < param_3 + 1);
      }
    }
  }
  if (((int)param_4 < 0x54) || (0x5a < (int)param_4)) {
    if (param_4 == 100) {
      pDVar12 = g_packedRecords_A62x8[param_5].field1968_0x9d6;
      if ((pDVar12 != nullptr) && (uVar19 = 0, 0 < (int)pDVar12->count)) {
        do {
          DArrayGetElement(pDVar12,uVar19,&local_10);
          STFishC::sub_004162B0(local_10,(short *)((int)&param_9 + 2),&local_6,&local_8);
          if ((((STPiece<2,2>(param_9) != _param_1) || ((local_6 != param_2 || (local_8 != param_3)))) &&
              (uVar10 = STPiece<2,2>(param_9) - _param_1, uVar13 = (int)uVar10 >> 0x1f,
              (int)((uVar10 ^ uVar13) - uVar13) < 0x10)) &&
             (uVar10 = local_6 - param_2 >> 0x1f,
             (int)((local_6 - param_2 ^ uVar10) - uVar10) < 0x10)) goto cf_break_loop_004AEC96;
          pDVar12 = g_packedRecords_A62x8[param_5].field1968_0x9d6;
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < (int)pDVar12->count);
      }
    }
    else if (param_4 == 0x4d) {
      pDVar12 = g_packedRecords_A62x8[param_5].field1971_0x9e2;
      param_10 = (int *)&g_packedRecords_A62x8[param_5].field1971_0x9e2;
      if (pDVar12 != nullptr) {
        iVar11 = DAT_00795118 / 0xc9;
        uVar19 = 0;
        if (0 < (int)pDVar12->count) {
          do {
            DArrayGetElement(pDVar12,uVar19,&local_10);
            STFishC::sub_004162B0(local_10,(short *)((int)&param_9 + 2),&local_6,&local_8);
            if ((((STPiece<2,2>(param_9) != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
               ((uVar10 = STPiece<2,2>(param_9) - _param_1, uVar13 = (int)uVar10 >> 0x1f,
                (int)((uVar10 ^ uVar13) - uVar13) <= iVar11 &&
                (uVar10 = local_6 - param_2 >> 0x1f,
                (int)((local_6 - param_2 ^ uVar10) - uVar10) <= iVar11))))
            goto cf_break_loop_004AEC96;
            uVar19 = uVar19 + 1;
            pDVar12 = (DArrayTy *)*param_10;
          } while ((int)uVar19 < (int)pDVar12->count);
        }
      }
    }
    else if (param_4 == 0x43) {
      pDVar12 = g_packedRecords_A62x8[param_5].field1974_0x9ee;
      param_10 = (int *)&g_packedRecords_A62x8[param_5].field1974_0x9ee;
      if (pDVar12 != nullptr) {
        iVar11 = DAT_007950f0 / 0xc9;
        uVar19 = 0;
        if (0 < (int)pDVar12->count) {
          do {
            DArrayGetElement(pDVar12,uVar19,&local_10);
            STFishC::sub_004162B0(local_10,(short *)((int)&param_9 + 2),&local_6,&local_8);
            if ((((STPiece<2,2>(param_9) != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
               ((uVar10 = STPiece<2,2>(param_9) - _param_1, uVar13 = (int)uVar10 >> 0x1f,
                (int)((uVar10 ^ uVar13) - uVar13) <= iVar11 &&
                (uVar10 = local_6 - param_2 >> 0x1f,
                (int)((local_6 - param_2 ^ uVar10) - uVar10) <= iVar11))))
            goto cf_break_loop_004AEC96;
            uVar19 = uVar19 + 1;
            pDVar12 = (DArrayTy *)*param_10;
          } while ((int)uVar19 < (int)pDVar12->count);
        }
      }
    }
    else if (param_4 == 0x73) {
      pDVar12 = g_packedRecords_A62x8[param_5].field1975_0x9f2;
      param_10 = (int *)&g_packedRecords_A62x8[param_5].field1975_0x9f2;
      if (pDVar12 != nullptr) {
        iVar11 = DAT_007951b0 / 0xc9;
        uVar19 = 0;
        if (0 < (int)pDVar12->count) {
          do {
            DArrayGetElement(pDVar12,uVar19,&local_10);
            STFishC::sub_004162B0(local_10,(short *)((int)&param_9 + 2),&local_6,&local_8);
            if ((((STPiece<2,2>(param_9) != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
               ((uVar10 = STPiece<2,2>(param_9) - _param_1, uVar13 = (int)uVar10 >> 0x1f,
                (int)((uVar10 ^ uVar13) - uVar13) <= iVar11 &&
                (uVar10 = local_6 - param_2 >> 0x1f,
                (int)((local_6 - param_2 ^ uVar10) - uVar10) <= iVar11))))
            goto cf_break_loop_004AEC96;
            uVar19 = uVar19 + 1;
            pDVar12 = (DArrayTy *)*param_10;
          } while ((int)uVar19 < (int)pDVar12->count);
        }
      }
    }
    else if (param_4 == 0x65) {
      pDVar12 = g_packedRecords_A62x8[param_5].field1972_0x9e6;
      param_10 = (int *)&g_packedRecords_A62x8[param_5].field1972_0x9e6;
      if (pDVar12 != nullptr) {
        iVar11 = DAT_00795178 / 0xc9;
        uVar19 = 0;
        if (0 < (int)pDVar12->count) {
          do {
            DArrayGetElement(pDVar12,uVar19,&local_10);
            STFishC::sub_004162B0(local_10,(short *)((int)&param_9 + 2),&local_6,&local_8);
            if ((((STPiece<2,2>(param_9) != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
               ((uVar10 = STPiece<2,2>(param_9) - _param_1, uVar13 = (int)uVar10 >> 0x1f,
                (int)((uVar10 ^ uVar13) - uVar13) <= iVar11 &&
                (uVar10 = local_6 - param_2 >> 0x1f,
                (int)((local_6 - param_2 ^ uVar10) - uVar10) <= iVar11))))
            goto cf_break_loop_004AEC96;
            uVar19 = uVar19 + 1;
            pDVar12 = (DArrayTy *)*param_10;
          } while ((int)uVar19 < (int)pDVar12->count);
        }
      }
    }
  }
  else {
    local_c = 0;
    if (((((param_2 + -1 < 0) || (param_1 < 0)) || (sVar15 <= param_1)) ||
        (((sVar4 = (short)(param_2 + -1), sVar4 < 0 || (g_worldGrid.sizeY <= sVar4)) ||
         ((sVar14 < 0 ||
          ((g_worldGrid.sizeZ <= sVar14 ||
           (pSVar1 = g_worldGrid.cells
                     [(int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar15 * (int)sVar4 +
                      (int)param_1].objects[0], pSVar1 == nullptr)))))))) ||
       (((iVar11 = pSVar1->GetObjectTypeId(), iVar11 != 0x53 ||
         ((param_10 != nullptr && (*(int **)&pSVar1->field_0x18 != param_10)))) &&
        (((iVar11 = pSVar1->GetObjectTypeId(), sVar15 = g_worldGrid.sizeX,
          iVar11 < 0x54 ||
          (iVar11 = pSVar1->GetObjectTypeId(), sVar15 = g_worldGrid.sizeX,
          0x5a < iVar11)) ||
         ((param_10 != nullptr && (*(int **)&pSVar1[0x29].field_0xf != param_10)))))))) {
      sVar4 = (short)param_2;
      if (((_param_1 + -1 < 0) ||
          ((((sVar5 = (short)(_param_1 + -1), sVar5 < 0 || (sVar15 <= sVar5)) || (sVar4 < 0)) ||
           (((g_worldGrid.sizeY <= sVar4 || (sVar14 < 0)) ||
            ((g_worldGrid.sizeZ <= sVar14 ||
             (pSVar1 = g_worldGrid.cells
                       [(int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar4 * (int)sVar15 +
                        (int)sVar5].objects[0], pSVar1 == nullptr)))))))) ||
         (((iVar11 = pSVar1->GetObjectTypeId(), piVar2 = param_10, iVar11 != 0x53
           || ((param_10 != nullptr && (*(int **)&pSVar1->field_0x18 != param_10)))) &&
          (((iVar11 = pSVar1->GetObjectTypeId(), sVar15 = g_worldGrid.sizeX,
            iVar11 < 0x54 ||
            (iVar11 = pSVar1->GetObjectTypeId(), sVar15 = g_worldGrid.sizeX,
            0x5a < iVar11)) ||
           ((piVar2 != nullptr && (*(int **)&pSVar1[0x29].field_0xf != piVar2)))))))) {
        if (((_param_1 + 1 < (int)sVar15) &&
            ((((((sVar5 = (short)(_param_1 + 1), -1 < sVar5 && (sVar5 < sVar15)) && (-1 < sVar4)) &&
               ((sVar4 < g_worldGrid.sizeY && (-1 < sVar14)))) && (sVar14 < g_worldGrid.sizeZ)) &&
             (pSVar1 = g_worldGrid.cells
                       [(int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar4 * (int)sVar15 +
                        (int)sVar5].objects[0], pSVar1 != nullptr)))) &&
           (((iVar11 = pSVar1->GetObjectTypeId(), piVar2 = param_10, iVar11 == 0x53
             && ((param_10 == nullptr || (*(int **)&pSVar1->field_0x18 == param_10)))) ||
            ((iVar11 = pSVar1->GetObjectTypeId(), sVar15 = g_worldGrid.sizeX,
             0x53 < iVar11 &&
             ((iVar11 = pSVar1->GetObjectTypeId(), sVar15 = g_worldGrid.sizeX,
              iVar11 < 0x5b &&
              ((piVar2 == nullptr || (*(int **)&pSVar1[0x29].field_0xf == piVar2)))))))))) {
          local_c = 1;
        }
        else if (((param_2 + 1 < (int)g_worldGrid.sizeY) &&
                 (((-1 < param_1 && (param_1 < sVar15)) &&
                  (sVar4 = (short)(param_2 + 1), -1 < sVar4)))) &&
                ((((sVar4 < g_worldGrid.sizeY && (-1 < sVar14)) &&
                  ((sVar14 < g_worldGrid.sizeZ &&
                   (pSVar1 = g_worldGrid.cells
                             [(int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar15 * (int)sVar4
                              + (int)param_1].objects[0], pSVar1 != nullptr)))) &&
                 (((iVar11 = pSVar1->GetObjectTypeId(), piVar2 = param_10,
                   iVar11 == 0x53 &&
                   ((param_10 == nullptr || (*(int **)&pSVar1->field_0x18 == param_10)))) ||
                  (((iVar11 = pSVar1->GetObjectTypeId(), 0x53 < iVar11 &&
                    (iVar11 = pSVar1->GetObjectTypeId(), iVar11 < 0x5b)) &&
                   ((piVar2 == nullptr || (*(int **)&pSVar1[0x29].field_0xf == piVar2)))))))))) {
          local_c = 1;
        }
      }
      else {
        local_c = 1;
      }
    }
    else {
      local_c = 1;
    }
  }
switchD_004ae472_caseD_3:
  if ((local_18 != 0) && (local_c != 0)) {
    local_24 = 1;
  }
LAB_004aecb2:
  if (param_6 != nullptr) {
    *param_6 = local_20;
  }
  if (param_7 != nullptr) {
    *param_7 = local_18;
  }
  if (param_8 != nullptr) {
    *param_8 = local_c;
  }
  return local_24;
cf_break_loop_004AEC96:
  local_c = 0;
  goto switchD_004ae472_caseD_3;
}

