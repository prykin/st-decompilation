
void FUN_0044e260(uint param_1,uint param_2,uint param_3,int *param_4)

{
  STGameObjCVTable *pSVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  DArrayTy *pDVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  int iVar11;
  uint uVar12;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  STGameObjC *pSVar13;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  DArrayTy *local_18;
  STGameObjC *local_14;
  int local_10;
  int local_c;
  int local_8;

  piVar4 = param_4;
  local_14 = (STGameObjC *)thunk_FUN_0042b760((char)param_1,param_2);
  if (local_14 != (STGameObjC *)0x0) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    pDVar5 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)local_14,unaff_EDI);
    param_2 = pDVar5->count;
    if (param_2 != 0) {
      local_18 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,param_2,4,1);
      uVar12 = 0;
      if (0 < (int)param_2) {
        do {
          DArrayGetElement(pDVar5,uVar12,&local_2c);
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_14 = STAllPlayersC::GetObjPtr(in_ECX,(char)param_1,local_2c,CASE_1);
          if ((local_14 == (STGameObjC *)0x0) ||
             (iVar6 = (*local_14->vtable[1].vfunc_24)(), iVar6 == 0)) {
            FUN_006b0c70(pDVar5,uVar12);
            param_2 = param_2 - 1;
            uVar12 = uVar12 - 1;
          }
          else {
            Library::DKW::TBL::FUN_006ae140(&local_18->flags,uVar12,&local_14);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)param_2);
      }
      DArrayDestroy(pDVar5);
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
            iVar6 = (int)*(short *)((int)&pSVar1->vfunc_58 + 3);
            iVar9 = *(int *)((int)&pSVar1[1].vfunc_2C + 1);
            iVar7 = iVar6 - iVar9;
            if (iVar7 < local_8) {
              local_8 = iVar7;
            }
            iVar6 = iVar9 + iVar6;
            if (local_c < iVar6) {
              local_c = iVar6;
            }
            iVar6 = (int)*(short *)((int)&pSVar1->vfunc_5C + 1);
            uVar8 = iVar6 - iVar9;
            if ((int)uVar8 < (int)param_1) {
              param_1 = uVar8;
            }
            iVar6 = iVar6 + iVar9;
            if (local_10 < iVar6) {
              local_10 = iVar6;
            }
            uVar12 = uVar12 - 1;
            pSVar13 = (STGameObjC *)&pSVar13->field_0x4;
          } while (uVar12 != 0);
          if (local_8 < 0) {
            local_8 = 0;
          }
        }
        iVar6 = g_worldGrid.sizeX + -1;
        if (iVar6 < local_c) {
          local_c = iVar6;
        }
        if ((int)param_1 < 0) {
          param_1 = 0;
        }
        if (g_worldGrid.sizeY + -1 < local_10) {
          local_10 = g_worldGrid.sizeY + -1;
        }
        local_28 = 5;
        iVar7 = ((int)g_worldGrid.sizeX * param_1 - (int)g_worldGrid.planeStride) + local_8;
        iVar6 = local_c;
        iVar9 = local_8;
        do {
          iVar7 = iVar7 + g_worldGrid.planeStride;
          iVar11 = iVar7 - g_worldGrid.sizeX;
          if ((int)param_1 <= local_10) {
            local_24 = (local_10 - param_1) + 1;
            do {
              iVar11 = iVar11 + g_worldGrid.sizeX;
              if (iVar9 <= iVar6) {
                local_20 = (iVar6 - iVar9) + 1;
                iVar6 = iVar11 * 8 + -8;
                do {
                  piVar2 = *(int **)((int)g_worldGrid.cells[1].objects + iVar6);
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  if (((piVar2 != (int *)0x0) &&
                      (((iVar9 = piVar2[8], iVar9 == 0x14 || (iVar9 == 1000)) || (iVar9 == 0x3e9))))
                     && ((((param_3 & 1 << ((byte)piVar2[9] & 0x1f)) != 0 &&
                          (iVar9 = (**(code **)(*piVar2 + 0xf8))(), iVar9 != 0)) &&
                         (local_1c = 0, 0 < (int)param_2)))) {
                    param_4 = (int *)local_14;
                    do {
                      iVar9 = *param_4;
                      iVar10 = (int)*(short *)((int)piVar2 + 0x5b) - (int)*(short *)(iVar9 + 0x5b);
                      iVar3 = *(int *)(iVar9 + 0x101);
                      if (iVar10 < 1) {
                        if (iVar10 < -iVar3) goto LAB_0044e4d5;
LAB_0044e508:
                        iVar9 = piVar4[piVar2[9]];
joined_r0x0044e51a:
                        if (iVar9 == 0) {
                          pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
                          piVar4[piVar2[9]] = (int)pDVar5;
                        }
                        Library::DKW::TBL::FUN_006ae1c0
                                  ((uint *)piVar4[piVar2[9]],(undefined4 *)((int)piVar2 + 0x32));
                        break;
                      }
                      if (iVar10 <= iVar3) goto LAB_0044e508;
LAB_0044e4d5:
                      iVar9 = (int)*(short *)((int)piVar2 + 0x5d) - (int)*(short *)(iVar9 + 0x5d);
                      if (iVar9 < 1) {
                        if (iVar9 < -iVar3) goto LAB_0044e4ef;
                        iVar9 = piVar4[piVar2[9]];
                        goto joined_r0x0044e51a;
                      }
                      if (iVar9 <= iVar3) goto LAB_0044e508;
LAB_0044e4ef:
                      local_1c = local_1c + 1;
                      param_4 = param_4 + 1;
                    } while (local_1c < (int)param_2);
                  }
                  local_20 = local_20 + -1;
                  iVar6 = iVar6 + 8;
                } while (local_20 != 0);
                local_20 = 0;
                iVar6 = local_c;
                iVar9 = local_8;
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

