
void FUN_0044e260(uint param_1,uint param_2,uint param_3,int *param_4)

{
  STGroupBoatCVTable *pSVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  DArrayTy *array;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  STAllPlayersC *in_ECX;
  int iVar11;
  STGroupBoatC **unaff_ESI;
  uint uVar12;
  Global_sub_00498D20_param_1Enum unaff_EDI;
  STGroupBoatC *pSVar13;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  DArrayTy *local_18;
  STGroupBoatC *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar4 = param_4;
  local_14 = thunk_FUN_0042b760(param_1,param_2);
  if (local_14 != (STGroupBoatC *)0x0) {
    array = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)local_14,unaff_EDI);
    param_2 = array->count;
    if (param_2 != 0) {
      local_18 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,param_2,4,1);
      uVar12 = 0;
      if (0 < (int)param_2) {
        do {
          DArrayGetElement(array,uVar12,&local_2c);
          local_14 = (STGroupBoatC *)STAllPlayersC::GetObjPtr(in_ECX,param_1,local_2c,CASE_1);
          if ((local_14 == (STGroupBoatC *)0x0) ||
             (iVar5 = (*local_14->vtable[6].vfunc_08)(local_14,unaff_EDI,unaff_ESI), iVar5 == 0)) {
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)array,uVar12);
            param_2 = param_2 - 1;
            uVar12 = uVar12 - 1;
          }
          else {
            unaff_ESI = &local_14;
            unaff_EDI = Library::DKW::TBL::FUN_006ae140(&local_18->flags,uVar12,unaff_ESI);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)param_2);
      }
      DArrayDestroy(array);
      if (param_2 != 0) {
        local_8 = 10000;
        local_c = 0;
        local_14 = local_18->data;
        param_1 = 10000;
        local_10 = 0;
        uVar12 = param_2;
        pSVar13 = local_14;
        if (0 < (int)param_2) {
          do {
            pSVar1 = pSVar13->vtable;
            iVar5 = (int)*(short *)((int)&pSVar1[2].vfunc_08 + 3);
            iVar8 = *(int *)((int)&pSVar1[6].ChangeMDNotify + 1);
            iVar6 = iVar5 - iVar8;
            if (iVar6 < local_8) {
              local_8 = iVar6;
            }
            iVar5 = iVar8 + iVar5;
            if (local_c < iVar5) {
              local_c = iVar5;
            }
            iVar5 = (int)*(short *)((int)&pSVar1[2].vfunc_0C + 1);
            uVar7 = iVar5 - iVar8;
            if ((int)uVar7 < (int)param_1) {
              param_1 = uVar7;
            }
            iVar5 = iVar5 + iVar8;
            if (local_10 < iVar5) {
              local_10 = iVar5;
            }
            uVar12 = uVar12 - 1;
            pSVar13 = (STGroupBoatC *)&pSVar13->field_0004;
          } while (uVar12 != 0);
          if (local_8 < 0) {
            local_8 = 0;
          }
        }
        iVar5 = g_worldGrid.sizeX + -1;
        if (iVar5 < local_c) {
          local_c = iVar5;
        }
        if ((int)param_1 < 0) {
          param_1 = 0;
        }
        if (g_worldGrid.sizeY + -1 < local_10) {
          local_10 = g_worldGrid.sizeY + -1;
        }
        local_28 = 5;
        iVar6 = ((int)g_worldGrid.sizeX * param_1 - (int)g_worldGrid.planeStride) + local_8;
        iVar5 = local_c;
        iVar8 = local_8;
        do {
          iVar6 = iVar6 + g_worldGrid.planeStride;
          iVar11 = iVar6 - g_worldGrid.sizeX;
          if ((int)param_1 <= local_10) {
            local_24 = (local_10 - param_1) + 1;
            do {
              iVar11 = iVar11 + g_worldGrid.sizeX;
              if (iVar8 <= iVar5) {
                local_20 = (iVar5 - iVar8) + 1;
                iVar5 = iVar11 * 8 + -8;
                do {
                  piVar2 = *(int **)((int)g_worldGrid.cells[1].objects + iVar5);
                  if (((piVar2 != (int *)0x0) &&
                      (((iVar8 = piVar2[8], iVar8 == 0x14 || (iVar8 == 1000)) || (iVar8 == 0x3e9))))
                     && ((((param_3 & 1 << ((byte)piVar2[9] & 0x1f)) != 0 &&
                          (iVar8 = (**(code **)(*piVar2 + 0xf8))(), iVar8 != 0)) &&
                         (local_1c = 0, 0 < (int)param_2)))) {
                    param_4 = (int *)local_14;
                    do {
                      iVar8 = *param_4;
                      iVar9 = (int)*(short *)((int)piVar2 + 0x5b) - (int)*(short *)(iVar8 + 0x5b);
                      iVar3 = *(int *)(iVar8 + 0x101);
                      if (iVar9 < 1) {
                        if (iVar9 < -iVar3) goto LAB_0044e4d5;
LAB_0044e508:
                        iVar8 = piVar4[piVar2[9]];
joined_r0x0044e51a:
                        if (iVar8 == 0) {
                          puVar10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                          piVar4[piVar2[9]] = (int)puVar10;
                        }
                        Library::DKW::TBL::FUN_006ae1c0
                                  ((uint *)piVar4[piVar2[9]],(undefined4 *)((int)piVar2 + 0x32));
                        break;
                      }
                      if (iVar9 <= iVar3) goto LAB_0044e508;
LAB_0044e4d5:
                      iVar8 = (int)*(short *)((int)piVar2 + 0x5d) - (int)*(short *)(iVar8 + 0x5d);
                      if (iVar8 < 1) {
                        if (iVar8 < -iVar3) goto LAB_0044e4ef;
                        iVar8 = piVar4[piVar2[9]];
                        goto joined_r0x0044e51a;
                      }
                      if (iVar8 <= iVar3) goto LAB_0044e508;
LAB_0044e4ef:
                      local_1c = local_1c + 1;
                      param_4 = param_4 + 1;
                    } while (local_1c < (int)param_2);
                  }
                  local_20 = local_20 + -1;
                  iVar5 = iVar5 + 8;
                } while (local_20 != 0);
                local_20 = 0;
                iVar5 = local_c;
                iVar8 = local_8;
              }
              local_24 = local_24 + -1;
            } while (local_24 != 0);
          }
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
      DArrayDestroy(local_18);
    }
  }
  return;
}

