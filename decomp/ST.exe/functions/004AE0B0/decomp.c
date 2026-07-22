
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
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  dword dVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  DArrayTy *pDVar11;
  uint uVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_00000006;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  STFishC *local_10;
  int local_c;
  short local_8;
  short local_6;

  iVar10 = 1;
  local_24 = 0;
  iVar16 = 1;
  local_18 = 0;
  local_c = 0;
  if (*(int *)(&DAT_00791d68 + param_4 * 4) == 0) {
    iVar16 = 1;
    iVar10 = 1;
  }
  else if (*(int *)(&DAT_00791d68 + param_4 * 4) == 1) {
    iVar16 = 2;
    iVar10 = 2;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (((((in_stack_00000006 < 0) || (iVar10 = iVar10 + _param_1, g_worldGrid.sizeX < iVar10)) ||
       (param_2 < 0)) || ((iVar16 = iVar16 + param_2, g_worldGrid.sizeY < iVar16 || (param_3 < 0))))
     || ((int)g_worldGrid.sizeZ < param_3 + 1)) {
cf_break_loop_004AE25B:
    local_20 = 0;
    goto LAB_004aecb2;
  }
  local_20 = 1;
  for (iVar17 = _param_1; iVar6 = param_2, iVar17 < iVar10; iVar17 = iVar17 + 1) {
    for (; iVar6 < iVar16; iVar6 = iVar6 + 1) {
      iVar5 = param_3;
      if (param_3 < param_3 + 1) {
        do {
          sVar13 = (short)iVar17;
          if (sVar13 < 0) goto cf_break_loop_004AE25B;
          sVar3 = (short)iVar6;
          sVar14 = (short)iVar5;
          if ((((sVar13 < g_worldGrid.sizeX) && (-1 < sVar3)) &&
              ((sVar3 < g_worldGrid.sizeY &&
               (((-1 < sVar14 && (sVar14 < g_worldGrid.sizeZ)) &&
                (g_worldGrid.cells
                 [(int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)g_worldGrid.sizeX +
                  (int)sVar13].objects[0] != (STWorldObject *)0x0)))))) ||
             (((sVar13 < 0 || (g_worldGrid.sizeX <= sVar13)) ||
              ((sVar3 < 0 ||
               (((g_worldGrid.sizeY <= sVar3 || (sVar14 < 0)) ||
                ((g_worldGrid.sizeZ <= sVar14 ||
                 (g_pathingGrid.cells
                  [(int)sVar3 * (int)g_pathingGrid.sizeX +
                   (int)sVar14 * (int)g_pathingGrid.planeStride + (int)sVar13] != 0))))))))))
          goto cf_break_loop_004AE25B;
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_3 + 1);
      }
    }
  }
  local_18 = 1;
  sVar13 = (short)param_3;
  iVar17 = _param_1;
  if (0 < param_3) {
    for (; iVar17 < iVar10; iVar17 = iVar17 + 1) {
      if (param_2 < iVar16) {
        sVar14 = sVar13 + -1;
        iVar6 = param_2;
        do {
          sVar3 = (short)iVar17;
          if ((-1 < sVar3) &&
             ((((((sVar4 = (short)iVar6, sVar3 < g_worldGrid.sizeX && (-1 < sVar4)) &&
                 (sVar4 < g_worldGrid.sizeY)) && ((-1 < sVar14 && (sVar14 < g_worldGrid.sizeZ)))) &&
               (g_worldGrid.cells
                [(int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar4 * (int)g_worldGrid.sizeX +
                 (int)sVar3].objects[0] != (STWorldObject *)0x0)) ||
              (((-1 < sVar3 && (sVar3 < g_worldGrid.sizeX)) &&
               ((-1 < sVar4 &&
                ((((sVar4 < g_worldGrid.sizeY && (-1 < sVar14)) && (sVar14 < g_worldGrid.sizeZ)) &&
                 (g_pathingGrid.cells
                  [(int)sVar4 * (int)g_pathingGrid.sizeX +
                   (int)sVar14 * (int)g_pathingGrid.planeStride + (int)sVar3] != -1)))))))))) {
            local_18 = 0;
            goto LAB_004ae37e;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar16);
      }
    }
  }
LAB_004ae37e:
  if (((param_9 == 0) ||
      (iVar17 = GetPlayerRaceId((char)param_5), sVar14 = g_worldGrid.sizeX, (char)iVar17 == '\x03'))
     && ((sVar14 = g_worldGrid.sizeX, local_18 != 0 && (local_18 = 0, param_3 < 4)))) {
    local_18 = 1;
    for (local_c = _param_1; local_c < iVar10; local_c = local_c + 1) {
      if (param_2 < iVar16) {
        iVar17 = param_2;
        do {
          iVar6 = thunk_FUN_004961b0((short)local_c,(short)iVar17,sVar13 + 1);
          sVar14 = g_worldGrid.sizeX;
          if (iVar6 == 0) {
            local_18 = 0;
            goto LAB_004ae41c;
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < iVar16);
      }
    }
  }
LAB_004ae41c:
  switch(param_4) {
  case CASE_38:
  case CASE_39:
  case CASE_4F:
  case CASE_5E:
  case CASE_61:
    local_c = 0;
    local_10 = thunk_FUN_004d85e0(_param_1,param_2,param_3);
    if (local_10 != (STFishC *)0x0) {
      dVar7 = (*local_10->vtable->slot_2C)(local_10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((&BYTE_004aecec)[param_4]) {
      case 0:
        if (dVar7 == 0xdc) {
          local_c = 1;
        }
        break;
      case 1:
        if (dVar7 == 0xdd) {
          local_c = 1;
        }
        break;
      case 2:
        if (dVar7 == 0xde) {
          local_c = 1;
        }
      }
    }
    break;
  default:
    local_c = 1;
    for (iVar17 = _param_1; iVar6 = param_2, iVar17 < iVar10; iVar17 = iVar17 + 1) {
      for (; iVar6 < iVar16; iVar6 = iVar6 + 1) {
        iVar5 = param_3;
        if (param_3 < param_3 + 1) {
          do {
            sVar3 = (short)iVar17;
            if (((sVar3 < 0) || (sVar14 <= sVar3)) ||
               ((sVar4 = (short)iVar6, sVar4 < 0 ||
                (((g_worldGrid.sizeY <= sVar4 || (sVar15 = (short)iVar5, sVar15 < 0)) ||
                 (g_worldGrid.sizeZ <= sVar15)))))) {
              local_10 = (STFishC *)0x0;
            }
            else {
              local_10 = (STFishC *)
                         g_worldGrid.cells
                         [(int)sVar4 * (int)sVar14 + (int)sVar15 * (int)g_worldGrid.planeStride +
                          (int)sVar3].objects[1];
            }
            if (((local_10 != (STFishC *)0x0) && (*(int *)&local_10->field_0x20 != 0xbe)) ||
               (pvVar8 = thunk_FUN_004d85e0(iVar17,iVar6,iVar5), pvVar8 != (void *)0x0))
            goto cf_break_loop_004AEC96;
            iVar5 = iVar5 + 1;
            local_10 = (STFishC *)0x0;
            sVar14 = g_worldGrid.sizeX;
          } while (iVar5 < param_3 + 1);
        }
      }
    }
    if (((int)param_4 < 0x54) || (0x5a < (int)param_4)) {
      if (param_4 == 100) {
        pDVar11 = g_playerRuntime[param_5].field2166_0x9d6;
        if ((pDVar11 != (DArrayTy *)0x0) && (uVar18 = 0, 0 < (int)pDVar11->count)) {
          do {
            DArrayGetElement(pDVar11,uVar18,&local_10);
            STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if ((((param_9._2_2_ != _param_1) || ((local_6 != param_2 || (local_8 != param_3)))) &&
                (uVar9 = param_9._2_2_ - _param_1, uVar12 = (int)uVar9 >> 0x1f,
                (int)((uVar9 ^ uVar12) - uVar12) < 0x10)) &&
               (uVar9 = local_6 - param_2 >> 0x1f, (int)((local_6 - param_2 ^ uVar9) - uVar9) < 0x10
               )) goto cf_break_loop_004AEC96;
            pDVar11 = g_playerRuntime[param_5].field2166_0x9d6;
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)pDVar11->count);
        }
      }
      else if (param_4 == 0x4d) {
        pDVar11 = g_playerRuntime[param_5].field2169_0x9e2;
        param_10 = (int *)&g_playerRuntime[param_5].field2169_0x9e2;
        if (pDVar11 != (DArrayTy *)0x0) {
          iVar10 = DAT_00795118 / 0xc9;
          uVar18 = 0;
          if (0 < (int)pDVar11->count) {
            do {
              DArrayGetElement(pDVar11,uVar18,&local_10);
              STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if ((((param_9._2_2_ != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar9 = param_9._2_2_ - _param_1, uVar12 = (int)uVar9 >> 0x1f,
                  (int)((uVar9 ^ uVar12) - uVar12) <= iVar10 &&
                  (uVar9 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar9) - uVar9) <= iVar10))))
              goto cf_break_loop_004AEC96;
              uVar18 = uVar18 + 1;
              pDVar11 = (DArrayTy *)*param_10;
            } while ((int)uVar18 < (int)pDVar11->count);
          }
        }
      }
      else if (param_4 == 0x43) {
        pDVar11 = g_playerRuntime[param_5].field2172_0x9ee;
        param_10 = (int *)&g_playerRuntime[param_5].field2172_0x9ee;
        if (pDVar11 != (DArrayTy *)0x0) {
          iVar10 = DAT_007950f0 / 0xc9;
          uVar18 = 0;
          if (0 < (int)pDVar11->count) {
            do {
              DArrayGetElement(pDVar11,uVar18,&local_10);
              STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if ((((param_9._2_2_ != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar9 = param_9._2_2_ - _param_1, uVar12 = (int)uVar9 >> 0x1f,
                  (int)((uVar9 ^ uVar12) - uVar12) <= iVar10 &&
                  (uVar9 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar9) - uVar9) <= iVar10))))
              goto cf_break_loop_004AEC96;
              uVar18 = uVar18 + 1;
              pDVar11 = (DArrayTy *)*param_10;
            } while ((int)uVar18 < (int)pDVar11->count);
          }
        }
      }
      else if (param_4 == 0x73) {
        pDVar11 = g_playerRuntime[param_5].field2173_0x9f2;
        param_10 = (int *)&g_playerRuntime[param_5].field2173_0x9f2;
        if (pDVar11 != (DArrayTy *)0x0) {
          iVar10 = DAT_007951b0 / 0xc9;
          uVar18 = 0;
          if (0 < (int)pDVar11->count) {
            do {
              DArrayGetElement(pDVar11,uVar18,&local_10);
              STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if ((((param_9._2_2_ != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar9 = param_9._2_2_ - _param_1, uVar12 = (int)uVar9 >> 0x1f,
                  (int)((uVar9 ^ uVar12) - uVar12) <= iVar10 &&
                  (uVar9 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar9) - uVar9) <= iVar10))))
              goto cf_break_loop_004AEC96;
              uVar18 = uVar18 + 1;
              pDVar11 = (DArrayTy *)*param_10;
            } while ((int)uVar18 < (int)pDVar11->count);
          }
        }
      }
      else if (param_4 == 0x65) {
        pDVar11 = g_playerRuntime[param_5].field2170_0x9e6;
        param_10 = (int *)&g_playerRuntime[param_5].field2170_0x9e6;
        if (pDVar11 != (DArrayTy *)0x0) {
          iVar10 = DAT_00795178 / 0xc9;
          uVar18 = 0;
          if (0 < (int)pDVar11->count) {
            do {
              DArrayGetElement(pDVar11,uVar18,&local_10);
              STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if ((((param_9._2_2_ != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar9 = param_9._2_2_ - _param_1, uVar12 = (int)uVar9 >> 0x1f,
                  (int)((uVar9 ^ uVar12) - uVar12) <= iVar10 &&
                  (uVar9 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar9) - uVar9) <= iVar10))))
              goto cf_break_loop_004AEC96;
              uVar18 = uVar18 + 1;
              pDVar11 = (DArrayTy *)*param_10;
            } while ((int)uVar18 < (int)pDVar11->count);
          }
        }
      }
    }
    else {
      local_c = 0;
      if (((((param_2 + -1 < 0) || (param_1 < 0)) || (sVar14 <= param_1)) ||
          (((sVar3 = (short)(param_2 + -1), sVar3 < 0 || (g_worldGrid.sizeY <= sVar3)) ||
           ((sVar13 < 0 ||
            ((g_worldGrid.sizeZ <= sVar13 ||
             (pSVar1 = g_worldGrid.cells
                       [(int)sVar13 * (int)g_worldGrid.planeStride + (int)sVar14 * (int)sVar3 +
                        (int)param_1].objects[0], pSVar1 == (STWorldObject *)0x0)))))))) ||
         (((iVar10 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), iVar10 != 0x53 ||
           ((param_10 != (int *)0x0 && (*(int **)&pSVar1->field_0x18 != param_10)))) &&
          (((iVar10 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar14 = g_worldGrid.sizeX,
            iVar10 < 0x54 ||
            (iVar10 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar14 = g_worldGrid.sizeX,
            0x5a < iVar10)) ||
           ((param_10 != (int *)0x0 && (*(int **)&pSVar1[0x29].field_0xf != param_10)))))))) {
        sVar3 = (short)param_2;
        if (((_param_1 + -1 < 0) ||
            ((((sVar4 = (short)(_param_1 + -1), sVar4 < 0 || (sVar14 <= sVar4)) || (sVar3 < 0)) ||
             (((g_worldGrid.sizeY <= sVar3 || (sVar13 < 0)) ||
              ((g_worldGrid.sizeZ <= sVar13 ||
               (pSVar1 = g_worldGrid.cells
                         [(int)sVar13 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)sVar14 +
                          (int)sVar4].objects[0], pSVar1 == (STWorldObject *)0x0)))))))) ||
           (((iVar10 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), piVar2 = param_10, iVar10 != 0x53
             || ((param_10 != (int *)0x0 && (*(int **)&pSVar1->field_0x18 != param_10)))) &&
            (((iVar10 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar14 = g_worldGrid.sizeX,
              iVar10 < 0x54 ||
              (iVar10 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar14 = g_worldGrid.sizeX,
              0x5a < iVar10)) ||
             ((piVar2 != (int *)0x0 && (*(int **)&pSVar1[0x29].field_0xf != piVar2)))))))) {
          if (((_param_1 + 1 < (int)sVar14) &&
              ((((((sVar4 = (short)(_param_1 + 1), -1 < sVar4 && (sVar4 < sVar14)) && (-1 < sVar3))
                 && ((sVar3 < g_worldGrid.sizeY && (-1 < sVar13)))) && (sVar13 < g_worldGrid.sizeZ))
               && (pSVar1 = g_worldGrid.cells
                            [(int)sVar13 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)sVar14 +
                             (int)sVar4].objects[0], pSVar1 != (STWorldObject *)0x0)))) &&
             (((iVar10 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), piVar2 = param_10,
               iVar10 == 0x53 &&
               ((param_10 == (int *)0x0 || (*(int **)&pSVar1->field_0x18 == param_10)))) ||
              ((iVar10 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar14 = g_worldGrid.sizeX,
               0x53 < iVar10 &&
               ((iVar10 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar14 = g_worldGrid.sizeX,
                iVar10 < 0x5b &&
                ((piVar2 == (int *)0x0 || (*(int **)&pSVar1[0x29].field_0xf == piVar2)))))))))) {
            local_c = 1;
          }
          else if (((param_2 + 1 < (int)g_worldGrid.sizeY) &&
                   (((-1 < param_1 && (param_1 < sVar14)) &&
                    (sVar3 = (short)(param_2 + 1), -1 < sVar3)))) &&
                  ((((sVar3 < g_worldGrid.sizeY && (-1 < sVar13)) &&
                    ((sVar13 < g_worldGrid.sizeZ &&
                     (pSVar1 = g_worldGrid.cells
                               [(int)sVar13 * (int)g_worldGrid.planeStride +
                                (int)sVar14 * (int)sVar3 + (int)param_1].objects[0],
                     pSVar1 != (STWorldObject *)0x0)))) &&
                   (((iVar10 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), piVar2 = param_10,
                     iVar10 == 0x53 &&
                     ((param_10 == (int *)0x0 || (*(int **)&pSVar1->field_0x18 == param_10)))) ||
                    (((iVar10 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), 0x53 < iVar10 &&
                      (iVar10 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), iVar10 < 0x5b)) &&
                     ((piVar2 == (int *)0x0 || (*(int **)&pSVar1[0x29].field_0xf == piVar2))))))))))
          {
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
  }
switchD_004ae472_caseD_3:
  if ((local_18 != 0) && (local_c != 0)) {
    local_24 = 1;
  }
LAB_004aecb2:
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_20;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = local_18;
  }
  if (param_8 != (int *)0x0) {
    *param_8 = local_c;
  }
  return local_24;
cf_break_loop_004AEC96:
  local_c = 0;
  goto switchD_004ae472_caseD_3;
}

