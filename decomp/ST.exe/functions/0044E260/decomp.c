
void FUN_0044e260(uint param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  STAllPlayersC *in_ECX;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int unaff_EDI;
  STGroupC *pSVar12;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  STGroupC *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = param_4;
  local_14 = (STGroupC *)thunk_FUN_0042b760(param_1,param_2);
  if (local_14 != (STGroupC *)0x0) {
    puVar3 = STGroupC::GetGroupContent(local_14,unaff_EDI);
    param_2 = puVar3[3];
    if (param_2 != 0) {
      local_18 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,param_2,4,1);
      uVar11 = 0;
      if (0 < (int)param_2) {
        do {
          FUN_006acc70((int)puVar3,uVar11,&local_2c);
          local_14 = (STGroupC *)STAllPlayersC::GetObjPtr(in_ECX,param_1,local_2c,1);
          if ((local_14 == (STGroupC *)0x0) ||
             (iVar4 = (**(code **)(*(int *)local_14 + 0xf8))(), iVar4 == 0)) {
            FUN_006b0c70((int)puVar3,uVar11);
            param_2 = param_2 - 1;
            uVar11 = uVar11 - 1;
          }
          else {
            Library::DKW::TBL::FUN_006ae140(local_18,uVar11,&local_14);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)param_2);
      }
      FUN_006ae110((byte *)puVar3);
      if (param_2 != 0) {
        local_8 = 10000;
        local_c = 0;
        local_14 = (STGroupC *)local_18[7];
        param_1 = 10000;
        local_10 = 0;
        uVar11 = param_2;
        pSVar12 = local_14;
        if (0 < (int)param_2) {
          do {
            iVar10 = *(int *)pSVar12;
            iVar4 = *(int *)(iVar10 + 0x101);
            iVar5 = *(short *)(iVar10 + 0x5b) - iVar4;
            if (iVar5 < local_8) {
              local_8 = iVar5;
            }
            iVar5 = iVar4 + *(short *)(iVar10 + 0x5b);
            if (local_c < iVar5) {
              local_c = iVar5;
            }
            uVar6 = *(short *)(iVar10 + 0x5d) - iVar4;
            if ((int)uVar6 < (int)param_1) {
              param_1 = uVar6;
            }
            iVar4 = *(short *)(iVar10 + 0x5d) + iVar4;
            if (local_10 < iVar4) {
              local_10 = iVar4;
            }
            uVar11 = uVar11 - 1;
            pSVar12 = pSVar12 + 4;
          } while (uVar11 != 0);
          if (local_8 < 0) {
            local_8 = 0;
          }
        }
        iVar4 = DAT_007fb240 + -1;
        if (iVar4 < local_c) {
          local_c = iVar4;
        }
        if ((int)param_1 < 0) {
          param_1 = 0;
        }
        if (DAT_007fb242 + -1 < local_10) {
          local_10 = DAT_007fb242 + -1;
        }
        local_28 = 5;
        iVar5 = ((int)DAT_007fb240 * param_1 - (int)DAT_007fb246) + local_8;
        iVar4 = local_c;
        iVar10 = local_8;
        do {
          iVar5 = iVar5 + DAT_007fb246;
          iVar8 = iVar5 - DAT_007fb240;
          if ((int)param_1 <= local_10) {
            local_24 = (local_10 - param_1) + 1;
            do {
              iVar8 = iVar8 + DAT_007fb240;
              if (iVar10 <= iVar4) {
                iVar9 = iVar8 * 8 + -8;
                local_20 = (iVar4 - iVar10) + 1;
                do {
                  iVar9 = iVar9 + 8;
                  piVar1 = *(int **)(iVar9 + DAT_007fb248);
                  if (((piVar1 != (int *)0x0) &&
                      (((iVar4 = piVar1[8], iVar4 == 0x14 || (iVar4 == 1000)) || (iVar4 == 0x3e9))))
                     && ((((param_3 & 1 << ((byte)piVar1[9] & 0x1f)) != 0 &&
                          (iVar4 = (**(code **)(*piVar1 + 0xf8))(), iVar4 != 0)) &&
                         (local_1c = 0, 0 < (int)param_2)))) {
                    param_4 = (int *)local_14;
                    do {
                      iVar4 = *param_4;
                      iVar7 = (int)*(short *)((int)piVar1 + 0x5b) - (int)*(short *)(iVar4 + 0x5b);
                      iVar10 = *(int *)(iVar4 + 0x101);
                      if (iVar7 < 1) {
                        if (iVar7 < -iVar10) goto LAB_0044e4d5;
LAB_0044e508:
                        iVar4 = piVar2[piVar1[9]];
joined_r0x0044e51a:
                        if (iVar4 == 0) {
                          puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                          piVar2[piVar1[9]] = (int)puVar3;
                        }
                        Library::DKW::TBL::FUN_006ae1c0
                                  ((uint *)piVar2[piVar1[9]],(undefined4 *)((int)piVar1 + 0x32));
                        break;
                      }
                      if (iVar7 <= iVar10) goto LAB_0044e508;
LAB_0044e4d5:
                      iVar4 = (int)*(short *)((int)piVar1 + 0x5d) - (int)*(short *)(iVar4 + 0x5d);
                      if (iVar4 < 1) {
                        if (iVar4 < -iVar10) goto LAB_0044e4ef;
                        iVar4 = piVar2[piVar1[9]];
                        goto joined_r0x0044e51a;
                      }
                      if (iVar4 <= iVar10) goto LAB_0044e508;
LAB_0044e4ef:
                      local_1c = local_1c + 1;
                      param_4 = param_4 + 1;
                    } while (local_1c < (int)param_2);
                  }
                  local_20 = local_20 + -1;
                } while (local_20 != 0);
                local_20 = 0;
                iVar4 = local_c;
                iVar10 = local_8;
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

