
/* [STSwitchEnumApplier] Switch target param_4 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004AE0B0_param_4Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94;CASE_61=97 */

undefined4 __cdecl
FUN_004ae0b0(int param_1,int param_2,int param_3,Global_sub_004AE0B0_param_4Enum param_4,int param_5
            ,undefined4 *param_6,int *param_7,int *param_8,int param_9,int *param_10)

{
  STWorldObject *pSVar1;
  int *piVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined3 extraout_var;
  void *pvVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  DArrayTy *pDVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  STFishC *local_10;
  int local_c;
  short local_8;
  short local_6;
  
  iVar11 = 1;
  local_24 = 0;
  iVar16 = 1;
  local_18 = 0;
  local_c = 0;
  if (*(int *)(&DAT_00791d68 + param_4 * 4) == 0) {
    iVar16 = 1;
    iVar11 = 1;
  }
  else if (*(int *)(&DAT_00791d68 + param_4 * 4) == 1) {
    iVar16 = 2;
    iVar11 = 2;
  }
  if (((((param_1 < 0) || (iVar11 = iVar11 + param_1, g_worldGrid.sizeX < iVar11)) || (param_2 < 0))
      || ((iVar16 = iVar16 + param_2, g_worldGrid.sizeY < iVar16 || (param_3 < 0)))) ||
     ((int)g_worldGrid.sizeZ < param_3 + 1)) {
cf_break_loop_004AE25B:
    local_20 = 0;
    goto LAB_004aecb2;
  }
  local_20 = 1;
  for (iVar17 = param_1; iVar7 = param_2, iVar17 < iVar11; iVar17 = iVar17 + 1) {
    for (; iVar7 < iVar16; iVar7 = iVar7 + 1) {
      iVar6 = param_3;
      if (param_3 < param_3 + 1) {
        do {
          sVar14 = (short)iVar17;
          if (sVar14 < 0) goto cf_break_loop_004AE25B;
          sVar10 = (short)iVar7;
          sVar15 = (short)iVar6;
          if ((((sVar14 < g_worldGrid.sizeX) && (-1 < sVar10)) &&
              ((sVar10 < g_worldGrid.sizeY &&
               (((-1 < sVar15 && (sVar15 < g_worldGrid.sizeZ)) &&
                (g_worldGrid.cells
                 [(int)sVar15 * (int)g_worldGrid.planeStride + (int)sVar10 * (int)g_worldGrid.sizeX
                  + (int)sVar14].objects[0] != (STWorldObject *)0x0)))))) ||
             (((sVar14 < 0 || (g_worldGrid.sizeX <= sVar14)) ||
              ((sVar10 < 0 ||
               (((g_worldGrid.sizeY <= sVar10 || (sVar15 < 0)) ||
                ((g_worldGrid.sizeZ <= sVar15 ||
                 (g_pathingGrid.cells
                  [(int)sVar10 * (int)g_pathingGrid.sizeX +
                   (int)sVar15 * (int)g_pathingGrid.planeStride + (int)sVar14] != 0))))))))))
          goto cf_break_loop_004AE25B;
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_3 + 1);
      }
    }
  }
  local_18 = 1;
  sVar14 = (short)param_3;
  iVar17 = param_1;
  if (0 < param_3) {
    for (; iVar17 < iVar11; iVar17 = iVar17 + 1) {
      if (param_2 < iVar16) {
        sVar15 = sVar14 + -1;
        iVar7 = param_2;
        do {
          sVar10 = (short)iVar17;
          if ((-1 < sVar10) &&
             ((((((sVar4 = (short)iVar7, sVar10 < g_worldGrid.sizeX && (-1 < sVar4)) &&
                 (sVar4 < g_worldGrid.sizeY)) && ((-1 < sVar15 && (sVar15 < g_worldGrid.sizeZ)))) &&
               (g_worldGrid.cells
                [(int)sVar15 * (int)g_worldGrid.planeStride + (int)sVar4 * (int)g_worldGrid.sizeX +
                 (int)sVar10].objects[0] != (STWorldObject *)0x0)) ||
              (((-1 < sVar10 && (sVar10 < g_worldGrid.sizeX)) &&
               ((-1 < sVar4 &&
                ((((sVar4 < g_worldGrid.sizeY && (-1 < sVar15)) && (sVar15 < g_worldGrid.sizeZ)) &&
                 (g_pathingGrid.cells
                  [(int)sVar4 * (int)g_pathingGrid.sizeX +
                   (int)sVar15 * (int)g_pathingGrid.planeStride + (int)sVar10] != -1)))))))))) {
            local_18 = 0;
            goto LAB_004ae37e;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar16);
      }
    }
  }
LAB_004ae37e:
  if (((param_9 == 0) ||
      (iVar17 = GetPlayerRaceId((char)param_5), sVar15 = g_worldGrid.sizeX, (char)iVar17 == '\x03'))
     && ((sVar15 = g_worldGrid.sizeX, local_18 != 0 && (local_18 = 0, param_3 < 4)))) {
    local_18 = 1;
    for (local_c = param_1; local_c < iVar11; local_c = local_c + 1) {
      if (param_2 < iVar16) {
        iVar17 = param_2;
        do {
          bVar3 = thunk_FUN_004961b0((short)local_c,(short)iVar17,sVar14 + 1);
          sVar15 = g_worldGrid.sizeX;
          if (CONCAT31(extraout_var,bVar3) == 0) {
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
    local_10 = thunk_FUN_004d85e0(param_1,param_2,param_3);
    if (local_10 != (STFishC *)0x0) {
      iVar11 = (*local_10->vtable->vfunc_2C)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((&BYTE_004aecec)[param_4]) {
      case 0:
        if (iVar11 == 0xdc) {
          local_c = 1;
        }
        break;
      case 1:
        if (iVar11 == 0xdd) {
          local_c = 1;
        }
        break;
      case 2:
        if (iVar11 == 0xde) {
          local_c = 1;
        }
      }
    }
    break;
  default:
    local_c = 1;
    for (iVar17 = param_1; iVar7 = param_2, iVar17 < iVar11; iVar17 = iVar17 + 1) {
      for (; iVar7 < iVar16; iVar7 = iVar7 + 1) {
        iVar6 = param_3;
        if (param_3 < param_3 + 1) {
          do {
            sVar10 = (short)iVar17;
            if (((sVar10 < 0) || (sVar15 <= sVar10)) ||
               ((sVar4 = (short)iVar7, sVar4 < 0 ||
                (((g_worldGrid.sizeY <= sVar4 || (sVar5 = (short)iVar6, sVar5 < 0)) ||
                 (g_worldGrid.sizeZ <= sVar5)))))) {
              local_10 = (STFishC *)0x0;
            }
            else {
              local_10 = (STFishC *)
                         g_worldGrid.cells
                         [(int)sVar4 * (int)sVar15 + (int)sVar5 * (int)g_worldGrid.planeStride +
                          (int)sVar10].objects[1];
            }
            if (((local_10 != (STFishC *)0x0) && (*(int *)&local_10->field_0x20 != 0xbe)) ||
               (pvVar8 = thunk_FUN_004d85e0(iVar17,iVar7,iVar6), pvVar8 != (void *)0x0))
            goto cf_break_loop_004AEC96;
            iVar6 = iVar6 + 1;
            local_10 = (STFishC *)0x0;
            sVar15 = g_worldGrid.sizeX;
          } while (iVar6 < param_3 + 1);
        }
      }
    }
    if (((int)param_4 < 0x54) || (0x5a < (int)param_4)) {
      if (param_4 == 100) {
        pDVar12 = g_playerRuntime[param_5].field2166_0x9d6;
        if ((pDVar12 != (DArrayTy *)0x0) && (uVar18 = 0, 0 < (int)pDVar12->count)) {
          do {
            DArrayGetElement(pDVar12,uVar18,&local_10);
            STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
            if ((((param_9._2_2_ != param_1) || ((local_6 != param_2 || (local_8 != param_3)))) &&
                (uVar9 = param_9._2_2_ - param_1, uVar13 = (int)uVar9 >> 0x1f,
                (int)((uVar9 ^ uVar13) - uVar13) < 0x10)) &&
               (uVar9 = local_6 - param_2 >> 0x1f, (int)((local_6 - param_2 ^ uVar9) - uVar9) < 0x10
               )) goto cf_break_loop_004AEC96;
            pDVar12 = g_playerRuntime[param_5].field2166_0x9d6;
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)pDVar12->count);
        }
      }
      else if (param_4 == 0x4d) {
        pDVar12 = g_playerRuntime[param_5].field2169_0x9e2;
        param_10 = (int *)&g_playerRuntime[param_5].field2169_0x9e2;
        if (pDVar12 != (DArrayTy *)0x0) {
          iVar11 = DAT_00795118 / 0xc9;
          uVar18 = 0;
          if (0 < (int)pDVar12->count) {
            do {
              DArrayGetElement(pDVar12,uVar18,&local_10);
              STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              if ((((param_9._2_2_ != param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar9 = param_9._2_2_ - param_1, uVar13 = (int)uVar9 >> 0x1f,
                  (int)((uVar9 ^ uVar13) - uVar13) <= iVar11 &&
                  (uVar9 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar9) - uVar9) <= iVar11))))
              goto cf_break_loop_004AEC96;
              uVar18 = uVar18 + 1;
              pDVar12 = (DArrayTy *)*param_10;
            } while ((int)uVar18 < (int)pDVar12->count);
          }
        }
      }
      else if (param_4 == 0x43) {
        pDVar12 = g_playerRuntime[param_5].field2172_0x9ee;
        param_10 = (int *)&g_playerRuntime[param_5].field2172_0x9ee;
        if (pDVar12 != (DArrayTy *)0x0) {
          iVar11 = DAT_007950f0 / 0xc9;
          uVar18 = 0;
          if (0 < (int)pDVar12->count) {
            do {
              DArrayGetElement(pDVar12,uVar18,&local_10);
              STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              if ((((param_9._2_2_ != param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar9 = param_9._2_2_ - param_1, uVar13 = (int)uVar9 >> 0x1f,
                  (int)((uVar9 ^ uVar13) - uVar13) <= iVar11 &&
                  (uVar9 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar9) - uVar9) <= iVar11))))
              goto cf_break_loop_004AEC96;
              uVar18 = uVar18 + 1;
              pDVar12 = (DArrayTy *)*param_10;
            } while ((int)uVar18 < (int)pDVar12->count);
          }
        }
      }
      else if (param_4 == 0x73) {
        pDVar12 = g_playerRuntime[param_5].field2173_0x9f2;
        param_10 = (int *)&g_playerRuntime[param_5].field2173_0x9f2;
        if (pDVar12 != (DArrayTy *)0x0) {
          iVar11 = DAT_007951b0 / 0xc9;
          uVar18 = 0;
          if (0 < (int)pDVar12->count) {
            do {
              DArrayGetElement(pDVar12,uVar18,&local_10);
              STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              if ((((param_9._2_2_ != param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar9 = param_9._2_2_ - param_1, uVar13 = (int)uVar9 >> 0x1f,
                  (int)((uVar9 ^ uVar13) - uVar13) <= iVar11 &&
                  (uVar9 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar9) - uVar9) <= iVar11))))
              goto cf_break_loop_004AEC96;
              uVar18 = uVar18 + 1;
              pDVar12 = (DArrayTy *)*param_10;
            } while ((int)uVar18 < (int)pDVar12->count);
          }
        }
      }
      else if (param_4 == 0x65) {
        pDVar12 = g_playerRuntime[param_5].field2170_0x9e6;
        param_10 = (int *)&g_playerRuntime[param_5].field2170_0x9e6;
        if (pDVar12 != (DArrayTy *)0x0) {
          iVar11 = DAT_00795178 / 0xc9;
          uVar18 = 0;
          if (0 < (int)pDVar12->count) {
            do {
              DArrayGetElement(pDVar12,uVar18,&local_10);
              STFishC::sub_004162B0(local_10,(undefined2 *)((int)&param_9 + 2),&local_6,&local_8);
              if ((((param_9._2_2_ != param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
                 ((uVar9 = param_9._2_2_ - param_1, uVar13 = (int)uVar9 >> 0x1f,
                  (int)((uVar9 ^ uVar13) - uVar13) <= iVar11 &&
                  (uVar9 = local_6 - param_2 >> 0x1f,
                  (int)((local_6 - param_2 ^ uVar9) - uVar9) <= iVar11))))
              goto cf_break_loop_004AEC96;
              uVar18 = uVar18 + 1;
              pDVar12 = (DArrayTy *)*param_10;
            } while ((int)uVar18 < (int)pDVar12->count);
          }
        }
      }
    }
    else {
      local_c = 0;
      sVar10 = (short)param_1;
      if (((((param_2 + -1 < 0) || (sVar10 < 0)) || (sVar15 <= sVar10)) ||
          (((sVar4 = (short)(param_2 + -1), sVar4 < 0 || (g_worldGrid.sizeY <= sVar4)) ||
           ((sVar14 < 0 ||
            ((g_worldGrid.sizeZ <= sVar14 ||
             (pSVar1 = g_worldGrid.cells
                       [(int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar15 * (int)sVar4 +
                        (int)sVar10].objects[0], pSVar1 == (STWorldObject *)0x0)))))))) ||
         (((iVar11 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), iVar11 != 0x53 ||
           ((param_10 != (int *)0x0 && (*(int **)&pSVar1->field_0x18 != param_10)))) &&
          (((iVar11 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar15 = g_worldGrid.sizeX,
            iVar11 < 0x54 ||
            (iVar11 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar15 = g_worldGrid.sizeX,
            0x5a < iVar11)) ||
           ((param_10 != (int *)0x0 && (*(int **)&pSVar1[0x29].field_0xf != param_10)))))))) {
        sVar4 = (short)param_2;
        if (((param_1 + -1 < 0) ||
            ((((sVar5 = (short)(param_1 + -1), sVar5 < 0 || (sVar15 <= sVar5)) || (sVar4 < 0)) ||
             (((g_worldGrid.sizeY <= sVar4 || (sVar14 < 0)) ||
              ((g_worldGrid.sizeZ <= sVar14 ||
               (pSVar1 = g_worldGrid.cells
                         [(int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar4 * (int)sVar15 +
                          (int)sVar5].objects[0], pSVar1 == (STWorldObject *)0x0)))))))) ||
           (((iVar11 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), piVar2 = param_10, iVar11 != 0x53
             || ((param_10 != (int *)0x0 && (*(int **)&pSVar1->field_0x18 != param_10)))) &&
            (((iVar11 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar15 = g_worldGrid.sizeX,
              iVar11 < 0x54 ||
              (iVar11 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar15 = g_worldGrid.sizeX,
              0x5a < iVar11)) ||
             ((piVar2 != (int *)0x0 && (*(int **)&pSVar1[0x29].field_0xf != piVar2)))))))) {
          if (((param_1 + 1 < (int)sVar15) &&
              ((((((sVar5 = (short)(param_1 + 1), -1 < sVar5 && (sVar5 < sVar15)) && (-1 < sVar4))
                 && ((sVar4 < g_worldGrid.sizeY && (-1 < sVar14)))) && (sVar14 < g_worldGrid.sizeZ))
               && (pSVar1 = g_worldGrid.cells
                            [(int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar4 * (int)sVar15 +
                             (int)sVar5].objects[0], pSVar1 != (STWorldObject *)0x0)))) &&
             (((iVar11 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), piVar2 = param_10,
               iVar11 == 0x53 &&
               ((param_10 == (int *)0x0 || (*(int **)&pSVar1->field_0x18 == param_10)))) ||
              ((iVar11 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar15 = g_worldGrid.sizeX,
               0x53 < iVar11 &&
               ((iVar11 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), sVar15 = g_worldGrid.sizeX,
                iVar11 < 0x5b &&
                ((piVar2 == (int *)0x0 || (*(int **)&pSVar1[0x29].field_0xf == piVar2)))))))))) {
            local_c = 1;
          }
          else if (((param_2 + 1 < (int)g_worldGrid.sizeY) &&
                   (((-1 < sVar10 && (sVar10 < sVar15)) &&
                    (sVar4 = (short)(param_2 + 1), -1 < sVar4)))) &&
                  ((((sVar4 < g_worldGrid.sizeY && (-1 < sVar14)) &&
                    ((sVar14 < g_worldGrid.sizeZ &&
                     (pSVar1 = g_worldGrid.cells
                               [(int)sVar14 * (int)g_worldGrid.planeStride +
                                (int)sVar15 * (int)sVar4 + (int)sVar10].objects[0],
                     pSVar1 != (STWorldObject *)0x0)))) &&
                   (((iVar11 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), piVar2 = param_10,
                     iVar11 == 0x53 &&
                     ((param_10 == (int *)0x0 || (*(int **)&pSVar1->field_0x18 == param_10)))) ||
                    (((iVar11 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), 0x53 < iVar11 &&
                      (iVar11 = (*pSVar1->vtable->GetObjectTypeId)(pSVar1), iVar11 < 0x5b)) &&
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

