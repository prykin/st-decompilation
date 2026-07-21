
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
  void *pvVar7;
  uint uVar8;
  int iVar9;
  DArrayTy *pDVar10;
  uint uVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_00000006;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  STFishC *local_10;
  int local_c;
  short local_8;
  short local_6;

  iVar9 = 1;
  local_24 = 0;
  iVar15 = 1;
  local_18 = 0;
  local_c = 0;
  if (*(int *)(&DAT_00791d68 + param_4 * 4) == 0) {
    iVar15 = 1;
    iVar9 = 1;
  }
  else if (*(int *)(&DAT_00791d68 + param_4 * 4) == 1) {
    iVar15 = 2;
    iVar9 = 2;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (((((in_stack_00000006 < 0) || (iVar9 = iVar9 + _param_1, g_worldGrid.sizeX < iVar9)) ||
       (param_2 < 0)) || ((iVar15 = iVar15 + param_2, g_worldGrid.sizeY < iVar15 || (param_3 < 0))))
     || ((int)g_worldGrid.sizeZ < param_3 + 1)) {
cf_break_loop_004AE25B:
    local_20 = 0;
    goto LAB_004aecb2;
  }
  local_20 = 1;
  for (iVar16 = _param_1; iVar6 = param_2, iVar16 < iVar9; iVar16 = iVar16 + 1) {
    for (; iVar6 < iVar15; iVar6 = iVar6 + 1) {
      iVar5 = param_3;
      if (param_3 < param_3 + 1) {
        do {
          sVar12 = (short)iVar16;
          if (sVar12 < 0) goto cf_break_loop_004AE25B;
          sVar3 = (short)iVar6;
          sVar13 = (short)iVar5;
          if ((((sVar12 < g_worldGrid.sizeX) && (-1 < sVar3)) &&
              ((sVar3 < g_worldGrid.sizeY &&
               (((-1 < sVar13 && (sVar13 < g_worldGrid.sizeZ)) &&
                (g_worldGrid.cells
                 [(int)sVar13 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)g_worldGrid.sizeX +
                  (int)sVar12].objects[0] != (STWorldObject *)0x0)))))) ||
             (((sVar12 < 0 || (g_worldGrid.sizeX <= sVar12)) ||
              ((sVar3 < 0 ||
               (((g_worldGrid.sizeY <= sVar3 || (sVar13 < 0)) ||
                ((g_worldGrid.sizeZ <= sVar13 ||
                 (g_pathingGrid.cells
                  [(int)sVar3 * (int)g_pathingGrid.sizeX +
                   (int)sVar13 * (int)g_pathingGrid.planeStride + (int)sVar12] != 0))))))))))
          goto cf_break_loop_004AE25B;
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_3 + 1);
      }
    }
  }
  local_18 = 1;
  sVar12 = (short)param_3;
  iVar16 = _param_1;
  if (0 < param_3) {
    for (; iVar16 < iVar9; iVar16 = iVar16 + 1) {
      if (param_2 < iVar15) {
        sVar13 = sVar12 + -1;
        iVar6 = param_2;
        do {
          sVar3 = (short)iVar16;
          if ((-1 < sVar3) &&
             ((((((sVar4 = (short)iVar6, sVar3 < g_worldGrid.sizeX && (-1 < sVar4)) &&
                 (sVar4 < g_worldGrid.sizeY)) && ((-1 < sVar13 && (sVar13 < g_worldGrid.sizeZ)))) &&
               (g_worldGrid.cells
                [(int)sVar13 * (int)g_worldGrid.planeStride + (int)sVar4 * (int)g_worldGrid.sizeX +
                 (int)sVar3].objects[0] != (STWorldObject *)0x0)) ||
              (((-1 < sVar3 && (sVar3 < g_worldGrid.sizeX)) &&
               ((-1 < sVar4 &&
                ((((sVar4 < g_worldGrid.sizeY && (-1 < sVar13)) && (sVar13 < g_worldGrid.sizeZ)) &&
                 (g_pathingGrid.cells
                  [(int)sVar4 * (int)g_pathingGrid.sizeX +
                   (int)sVar13 * (int)g_pathingGrid.planeStride + (int)sVar3] != -1)))))))))) {
            local_18 = 0;
            goto LAB_004ae37e;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar15);
      }
    }
  }
LAB_004ae37e:
  if (((param_9 == 0) ||
      (iVar16 = GetPlayerRaceId((char)param_5), sVar13 = g_worldGrid.sizeX, (char)iVar16 == '\x03'))
     && ((sVar13 = g_worldGrid.sizeX, local_18 != 0 && (local_18 = 0, param_3 < 4)))) {
    local_18 = 1;
    for (local_c = _param_1; local_c < iVar9; local_c = local_c + 1) {
      if (param_2 < iVar15) {
        iVar16 = param_2;
        do {
          iVar6 = thunk_FUN_004961b0((short)local_c,(short)iVar16,sVar12 + 1);
          sVar13 = g_worldGrid.sizeX;
          if (iVar6 == 0) {
            local_18 = 0;
            goto LAB_004ae41c;
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar15);
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
      iVar9 = (*local_10->vtable->vfunc_2C)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((&BYTE_004aecec)[param_4]) {
      case 0:
        if (iVar9 == 0xdc) {
          local_c = 1;
        }
        break;
      case 1:
        if (iVar9 == 0xdd) {
          local_c = 1;
        }
        break;
      case 2:
        if (iVar9 == 0xde) {
          local_c = 1;
        }
      }
    }
    break;
  default:
    local_c = 1;
    for (iVar16 = _param_1; iVar6 = param_2, iVar16 < iVar9; iVar16 = iVar16 + 1) {
      for (; iVar6 < iVar15; iVar6 = iVar6 + 1) {
        iVar5 = param_3;
        if (param_3 < param_3 + 1) {
          do {
            sVar3 = (short)iVar16;
            if (((sVar3 < 0) || (sVar13 <= sVar3)) ||
               ((sVar4 = (short)iVar6, sVar4 < 0 ||
                (((g_worldGrid.sizeY <= sVar4 || (sVar14 = (short)iVar5, sVar14 < 0)) ||
                 (g_worldGrid.sizeZ <= sVar14)))))) {
              local_10 = (STFishC *)0x0;
            }
            else {
              local_10 = (STFishC *)
                         g_worldGrid.cells
                         [(int)sVar4 * (int)sVar13 + (int)sVar14 * (int)g_worldGrid.planeStride +
                          (int)sVar3].objects[1];
            }
            if (((local_10 != (STFishC *)0x0) && (*(int *)&local_10->field_0x20 != 0xbe)) ||
               (pvVar7 = thunk_FUN_004d85e0(iVar16,iVar6,iVar5), pvVar7 != (void *)0x0))
            goto cf_break_loop_004AEC96;
            iVar5 = iVar5 + 1;
            local_10 = (STFishC *)0x0;
            sVar13 = g_worldGrid.sizeX;
          } while (iVar5 < param_3 + 1);
        }
      }
    }
    if (((int)param_4 < 0x54) || (0x5a < (int)param_4)) {
      if (param_4 == 100) {
        pDVar10 = g_playerRuntime[param_5].field2166_0x9d6;
        if ((pDVar10 != (DArrayTy *)0x0) && (uVar17 = 0, 0 < (int)pDVar10->count)) {
          do {
            DArrayGetElement(pDVar10,uVar17,&local_10);
            STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if ((((param_9._2_2_ != _param_1) || ((local_6 != param_2 || (local_8 != param_3)))) &&
                (uVar8 = param_9._2_2_ - _param_1, uVar11 = (int)uVar8 >> 0x1f,
                (int)((uVar8 ^ uVar11) - uVar11) < 0x10)) &&
               (uVar8 = local_6 - param_2 >> 0x1f, (int)((local_6 - param_2 ^ uVar8) - uVar8) < 0x10
               )) goto cf_break_loop_004AEC96;
            pDVar10 = g_playerRuntime[param_5].field2166_0x9d6;
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (int)pDVar10->count);
        }
      }
      else if (param_4 == 0x4d) {
        pDVar10 = g_playerRuntime[param_5].field2169_0x9e2;
        param_10 = (int *)&g_playerRuntime[param_5].field2169_0x9e2;
        if (pDVar10 != (DArrayTy *)0x0) {
          iVar9 = DAT_00795118 / 0xc9;
          uVar17 = 0;
          if (0 < (int)pDVar10->count) {
            do {
              DArrayGetElement(pDVar10,uVar17,&local_10);
              STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if ((((param_9._2_2_ != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar8 = param_9._2_2_ - _param_1, uVar11 = (int)uVar8 >> 0x1f,
                  (int)((uVar8 ^ uVar11) - uVar11) <= iVar9 &&
                  (uVar8 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar8) - uVar8) <= iVar9))))
              goto cf_break_loop_004AEC96;
              uVar17 = uVar17 + 1;
              pDVar10 = (DArrayTy *)*param_10;
            } while ((int)uVar17 < (int)pDVar10->count);
          }
        }
      }
      else if (param_4 == 0x43) {
        pDVar10 = g_playerRuntime[param_5].field2172_0x9ee;
        param_10 = (int *)&g_playerRuntime[param_5].field2172_0x9ee;
        if (pDVar10 != (DArrayTy *)0x0) {
          iVar9 = DAT_007950f0 / 0xc9;
          uVar17 = 0;
          if (0 < (int)pDVar10->count) {
            do {
              DArrayGetElement(pDVar10,uVar17,&local_10);
              STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if ((((param_9._2_2_ != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar8 = param_9._2_2_ - _param_1, uVar11 = (int)uVar8 >> 0x1f,
                  (int)((uVar8 ^ uVar11) - uVar11) <= iVar9 &&
                  (uVar8 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar8) - uVar8) <= iVar9))))
              goto cf_break_loop_004AEC96;
              uVar17 = uVar17 + 1;
              pDVar10 = (DArrayTy *)*param_10;
            } while ((int)uVar17 < (int)pDVar10->count);
          }
        }
      }
      else if (param_4 == 0x73) {
        pDVar10 = g_playerRuntime[param_5].field2173_0x9f2;
        param_10 = (int *)&g_playerRuntime[param_5].field2173_0x9f2;
        if (pDVar10 != (DArrayTy *)0x0) {
          iVar9 = DAT_007951b0 / 0xc9;
          uVar17 = 0;
          if (0 < (int)pDVar10->count) {
            do {
              DArrayGetElement(pDVar10,uVar17,&local_10);
              STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if ((((param_9._2_2_ != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar8 = param_9._2_2_ - _param_1, uVar11 = (int)uVar8 >> 0x1f,
                  (int)((uVar8 ^ uVar11) - uVar11) <= iVar9 &&
                  (uVar8 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar8) - uVar8) <= iVar9))))
              goto cf_break_loop_004AEC96;
              uVar17 = uVar17 + 1;
              pDVar10 = (DArrayTy *)*param_10;
            } while ((int)uVar17 < (int)pDVar10->count);
          }
        }
      }
      else if (param_4 == 0x65) {
        pDVar10 = g_playerRuntime[param_5].field2170_0x9e6;
        param_10 = (int *)&g_playerRuntime[param_5].field2170_0x9e6;
        if (pDVar10 != (DArrayTy *)0x0) {
          iVar9 = DAT_00795178 / 0xc9;
          uVar17 = 0;
          if (0 < (int)pDVar10->count) {
            do {
              DArrayGetElement(pDVar10,uVar17,&local_10);
              STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              if ((((param_9._2_2_ != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar8 = param_9._2_2_ - _param_1, uVar11 = (int)uVar8 >> 0x1f,
                  (int)((uVar8 ^ uVar11) - uVar11) <= iVar9 &&
                  (uVar8 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar8) - uVar8) <= iVar9))))
              goto cf_break_loop_004AEC96;
              uVar17 = uVar17 + 1;
              pDVar10 = (DArrayTy *)*param_10;
            } while ((int)uVar17 < (int)pDVar10->count);
          }
        }
      }
    }
    else {
      local_c = 0;
      if (((((param_2 + -1 < 0) || (param_1 < 0)) || (sVar13 <= param_1)) ||
          (((sVar3 = (short)(param_2 + -1), sVar3 < 0 || (g_worldGrid.sizeY <= sVar3)) ||
           ((sVar12 < 0 ||
            ((g_worldGrid.sizeZ <= sVar12 ||
             (pSVar1 = g_worldGrid.cells
                       [(int)sVar12 * (int)g_worldGrid.planeStride + (int)sVar13 * (int)sVar3 +
                        (int)param_1].objects[0], pSVar1 == (STWorldObject *)0x0)))))))) ||
         (((iVar9 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), iVar9 != 0x53 ||
           ((param_10 != (int *)0x0 && (*(int **)&pSVar1->field_0x18 != param_10)))) &&
          (((iVar9 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar13 = g_worldGrid.sizeX,
            iVar9 < 0x54 ||
            (iVar9 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar13 = g_worldGrid.sizeX,
            0x5a < iVar9)) ||
           ((param_10 != (int *)0x0 && (*(int **)&pSVar1[0x29].field_0xf != param_10)))))))) {
        sVar3 = (short)param_2;
        if (((_param_1 + -1 < 0) ||
            ((((sVar4 = (short)(_param_1 + -1), sVar4 < 0 || (sVar13 <= sVar4)) || (sVar3 < 0)) ||
             (((g_worldGrid.sizeY <= sVar3 || (sVar12 < 0)) ||
              ((g_worldGrid.sizeZ <= sVar12 ||
               (pSVar1 = g_worldGrid.cells
                         [(int)sVar12 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)sVar13 +
                          (int)sVar4].objects[0], pSVar1 == (STWorldObject *)0x0)))))))) ||
           (((iVar9 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), piVar2 = param_10, iVar9 != 0x53
             || ((param_10 != (int *)0x0 && (*(int **)&pSVar1->field_0x18 != param_10)))) &&
            (((iVar9 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar13 = g_worldGrid.sizeX,
              iVar9 < 0x54 ||
              (iVar9 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar13 = g_worldGrid.sizeX,
              0x5a < iVar9)) ||
             ((piVar2 != (int *)0x0 && (*(int **)&pSVar1[0x29].field_0xf != piVar2)))))))) {
          if (((_param_1 + 1 < (int)sVar13) &&
              ((((((sVar4 = (short)(_param_1 + 1), -1 < sVar4 && (sVar4 < sVar13)) && (-1 < sVar3))
                 && ((sVar3 < g_worldGrid.sizeY && (-1 < sVar12)))) && (sVar12 < g_worldGrid.sizeZ))
               && (pSVar1 = g_worldGrid.cells
                            [(int)sVar12 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)sVar13 +
                             (int)sVar4].objects[0], pSVar1 != (STWorldObject *)0x0)))) &&
             (((iVar9 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), piVar2 = param_10, iVar9 == 0x53
               && ((param_10 == (int *)0x0 || (*(int **)&pSVar1->field_0x18 == param_10)))) ||
              ((iVar9 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar13 = g_worldGrid.sizeX,
               0x53 < iVar9 &&
               ((iVar9 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar13 = g_worldGrid.sizeX,
                iVar9 < 0x5b &&
                ((piVar2 == (int *)0x0 || (*(int **)&pSVar1[0x29].field_0xf == piVar2)))))))))) {
            local_c = 1;
          }
          else if (((param_2 + 1 < (int)g_worldGrid.sizeY) &&
                   (((-1 < param_1 && (param_1 < sVar13)) &&
                    (sVar3 = (short)(param_2 + 1), -1 < sVar3)))) &&
                  ((((sVar3 < g_worldGrid.sizeY && (-1 < sVar12)) &&
                    ((sVar12 < g_worldGrid.sizeZ &&
                     (pSVar1 = g_worldGrid.cells
                               [(int)sVar12 * (int)g_worldGrid.planeStride +
                                (int)sVar13 * (int)sVar3 + (int)param_1].objects[0],
                     pSVar1 != (STWorldObject *)0x0)))) &&
                   (((iVar9 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), piVar2 = param_10,
                     iVar9 == 0x53 &&
                     ((param_10 == (int *)0x0 || (*(int **)&pSVar1->field_0x18 == param_10)))) ||
                    (((iVar9 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), 0x53 < iVar9 &&
                      (iVar9 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), iVar9 < 0x5b)) &&
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

