
void FUN_0044e260(uint param_1,uint param_2,uint param_3,int *param_4)

{
  STGroupBoatCVTable *pSVar1;
  int *piVar2;
  int *piVar3;
  AnonShape_006B0C70_7C4FE646 *groupContent;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  STAllPlayersC *in_ECX;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int unaff_EDI;
  STGroupBoatC *pSVar13;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  STGroupBoatC *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar3 = param_4;
  local_14 = thunk_FUN_0042b760(param_1,param_2);
  if (local_14 != (STGroupBoatC *)0x0) {
    groupContent = (AnonShape_006B0C70_7C4FE646 *)
                   STGroupC::GetGroupContent((STGroupC *)local_14,unaff_EDI);
    param_2 = groupContent->field_000C;
    if (param_2 != 0) {
      local_18 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,param_2,4,1);
      uVar12 = 0;
      if (0 < (int)param_2) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)groupContent,uVar12,&local_2c);
          local_14 = (STGroupBoatC *)STAllPlayersC::GetObjPtr(in_ECX,param_1,local_2c,CASE_1);
          if ((local_14 == (STGroupBoatC *)0x0) ||
             (iVar4 = (*local_14->vtable[6].vfunc_08)(), iVar4 == 0)) {
            FUN_006b0c70(groupContent,uVar12);
            param_2 = param_2 - 1;
            uVar12 = uVar12 - 1;
          }
          else {
            Library::DKW::TBL::FUN_006ae140(local_18,uVar12,&local_14);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)param_2);
      }
      FUN_006ae110((byte *)groupContent);
      if (param_2 != 0) {
        local_8 = 10000;
        local_c = 0;
        local_14 = (STGroupBoatC *)local_18[7];
        param_1 = 10000;
        local_10 = 0;
        uVar12 = param_2;
        pSVar13 = local_14;
        if (0 < (int)param_2) {
          do {
            pSVar1 = pSVar13->vtable;
            iVar4 = (int)*(short *)((int)&pSVar1[2].vfunc_08 + 3);
            iVar11 = *(int *)((int)&pSVar1[6].ChangeMDNotify + 1);
            iVar5 = iVar4 - iVar11;
            if (iVar5 < local_8) {
              local_8 = iVar5;
            }
            iVar4 = iVar11 + iVar4;
            if (local_c < iVar4) {
              local_c = iVar4;
            }
            iVar4 = (int)*(short *)((int)&pSVar1[2].vfunc_0C + 1);
            uVar6 = iVar4 - iVar11;
            if ((int)uVar6 < (int)param_1) {
              param_1 = uVar6;
            }
            iVar4 = iVar4 + iVar11;
            if (local_10 < iVar4) {
              local_10 = iVar4;
            }
            uVar12 = uVar12 - 1;
            pSVar13 = (STGroupBoatC *)&pSVar13->field_0004;
          } while (uVar12 != 0);
          if (local_8 < 0) {
            local_8 = 0;
          }
        }
        iVar4 = SHORT_007fb240 + -1;
        if (iVar4 < local_c) {
          local_c = iVar4;
        }
        if ((int)param_1 < 0) {
          param_1 = 0;
        }
        if (SHORT_007fb242 + -1 < local_10) {
          local_10 = SHORT_007fb242 + -1;
        }
        local_28 = 5;
        iVar5 = ((int)SHORT_007fb240 * param_1 - (int)SHORT_007fb246) + local_8;
        iVar4 = local_c;
        iVar11 = local_8;
        do {
          iVar5 = iVar5 + SHORT_007fb246;
          iVar9 = iVar5 - SHORT_007fb240;
          if ((int)param_1 <= local_10) {
            local_24 = (local_10 - param_1) + 1;
            do {
              iVar9 = iVar9 + SHORT_007fb240;
              if (iVar11 <= iVar4) {
                iVar10 = iVar9 * 8 + -8;
                local_20 = (iVar4 - iVar11) + 1;
                do {
                  iVar10 = iVar10 + 8;
                  piVar2 = *(int **)(iVar10 + DAT_007fb248);
                  if (((piVar2 != (int *)0x0) &&
                      (((iVar4 = piVar2[8], iVar4 == 0x14 || (iVar4 == 1000)) || (iVar4 == 0x3e9))))
                     && ((((param_3 & 1 << ((byte)piVar2[9] & 0x1f)) != 0 &&
                          (iVar4 = (**(code **)(*piVar2 + 0xf8))(), iVar4 != 0)) &&
                         (local_1c = 0, 0 < (int)param_2)))) {
                    param_4 = (int *)local_14;
                    do {
                      iVar4 = *param_4;
                      iVar7 = (int)*(short *)((int)piVar2 + 0x5b) - (int)*(short *)(iVar4 + 0x5b);
                      iVar11 = *(int *)(iVar4 + 0x101);
                      if (iVar7 < 1) {
                        if (iVar7 < -iVar11) goto LAB_0044e4d5;
LAB_0044e508:
                        iVar4 = piVar3[piVar2[9]];
joined_r0x0044e51a:
                        if (iVar4 == 0) {
                          puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                          piVar3[piVar2[9]] = (int)puVar8;
                        }
                        Library::DKW::TBL::FUN_006ae1c0
                                  ((uint *)piVar3[piVar2[9]],(undefined4 *)((int)piVar2 + 0x32));
                        break;
                      }
                      if (iVar7 <= iVar11) goto LAB_0044e508;
LAB_0044e4d5:
                      iVar4 = (int)*(short *)((int)piVar2 + 0x5d) - (int)*(short *)(iVar4 + 0x5d);
                      if (iVar4 < 1) {
                        if (iVar4 < -iVar11) goto LAB_0044e4ef;
                        iVar4 = piVar3[piVar2[9]];
                        goto joined_r0x0044e51a;
                      }
                      if (iVar4 <= iVar11) goto LAB_0044e508;
LAB_0044e4ef:
                      local_1c = local_1c + 1;
                      param_4 = param_4 + 1;
                    } while (local_1c < (int)param_2);
                  }
                  local_20 = local_20 + -1;
                } while (local_20 != 0);
                local_20 = 0;
                iVar4 = local_c;
                iVar11 = local_8;
              }
              local_24 = local_24 + -1;
            } while (local_24 != 0);
          }
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
      FUN_006ae110((byte *)local_18);
    }
  }
  return;
}

