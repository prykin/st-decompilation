
void thunk_FUN_0044e260(uint param_1,uint param_2,uint param_3,int *param_4)

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
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  uint *puStack_18;
  STGroupC *pSStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  piVar2 = param_4;
  pSStack_14 = (STGroupC *)thunk_FUN_0042b760(param_1,param_2);
  if (pSStack_14 != (STGroupC *)0x0) {
    puVar3 = STGroupC::GetGroupContent(pSStack_14,unaff_EDI);
    param_2 = puVar3[3];
    if (param_2 != 0) {
      puStack_18 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,param_2,4,1);
      uVar11 = 0;
      if (0 < (int)param_2) {
        do {
          FUN_006acc70((int)puVar3,uVar11,&uStack_2c);
          pSStack_14 = (STGroupC *)STAllPlayersC::GetObjPtr(in_ECX,param_1,uStack_2c,1);
          if ((pSStack_14 == (STGroupC *)0x0) ||
             (iVar4 = (**(code **)(*(int *)pSStack_14 + 0xf8))(), iVar4 == 0)) {
            FUN_006b0c70((int)puVar3,uVar11);
            param_2 = param_2 - 1;
            uVar11 = uVar11 - 1;
          }
          else {
            Library::DKW::TBL::FUN_006ae140(puStack_18,uVar11,&pSStack_14);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)param_2);
      }
      FUN_006ae110((byte *)puVar3);
      if (param_2 != 0) {
        iStack_8 = 10000;
        iStack_c = 0;
        pSStack_14 = (STGroupC *)puStack_18[7];
        param_1 = 10000;
        iStack_10 = 0;
        uVar11 = param_2;
        pSVar12 = pSStack_14;
        if (0 < (int)param_2) {
          do {
            iVar10 = *(int *)pSVar12;
            iVar4 = *(int *)(iVar10 + 0x101);
            iVar5 = *(short *)(iVar10 + 0x5b) - iVar4;
            if (iVar5 < iStack_8) {
              iStack_8 = iVar5;
            }
            iVar5 = iVar4 + *(short *)(iVar10 + 0x5b);
            if (iStack_c < iVar5) {
              iStack_c = iVar5;
            }
            uVar6 = *(short *)(iVar10 + 0x5d) - iVar4;
            if ((int)uVar6 < (int)param_1) {
              param_1 = uVar6;
            }
            iVar4 = *(short *)(iVar10 + 0x5d) + iVar4;
            if (iStack_10 < iVar4) {
              iStack_10 = iVar4;
            }
            uVar11 = uVar11 - 1;
            pSVar12 = pSVar12 + 4;
          } while (uVar11 != 0);
          if (iStack_8 < 0) {
            iStack_8 = 0;
          }
        }
        iVar4 = DAT_007fb240 + -1;
        if (iVar4 < iStack_c) {
          iStack_c = iVar4;
        }
        if ((int)param_1 < 0) {
          param_1 = 0;
        }
        if (DAT_007fb242 + -1 < iStack_10) {
          iStack_10 = DAT_007fb242 + -1;
        }
        iStack_28 = 5;
        iVar5 = ((int)DAT_007fb240 * param_1 - (int)DAT_007fb246) + iStack_8;
        iVar4 = iStack_c;
        iVar10 = iStack_8;
        do {
          iVar5 = iVar5 + DAT_007fb246;
          iVar8 = iVar5 - DAT_007fb240;
          if ((int)param_1 <= iStack_10) {
            iStack_24 = (iStack_10 - param_1) + 1;
            do {
              iVar8 = iVar8 + DAT_007fb240;
              if (iVar10 <= iVar4) {
                iVar9 = iVar8 * 8 + -8;
                iStack_20 = (iVar4 - iVar10) + 1;
                do {
                  iVar9 = iVar9 + 8;
                  piVar1 = *(int **)(iVar9 + DAT_007fb248);
                  if (((piVar1 != (int *)0x0) &&
                      (((iVar4 = piVar1[8], iVar4 == 0x14 || (iVar4 == 1000)) || (iVar4 == 0x3e9))))
                     && ((((param_3 & 1 << ((byte)piVar1[9] & 0x1f)) != 0 &&
                          (iVar4 = (**(code **)(*piVar1 + 0xf8))(), iVar4 != 0)) &&
                         (iStack_1c = 0, 0 < (int)param_2)))) {
                    param_4 = (int *)pSStack_14;
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
                      iStack_1c = iStack_1c + 1;
                      param_4 = param_4 + 1;
                    } while (iStack_1c < (int)param_2);
                  }
                  iStack_20 = iStack_20 + -1;
                } while (iStack_20 != 0);
                iStack_20 = 0;
                iVar4 = iStack_c;
                iVar10 = iStack_8;
              }
              iStack_24 = iStack_24 + -1;
            } while (iStack_24 != 0);
          }
          iStack_28 = iStack_28 + -1;
        } while (iStack_28 != 0);
      }
      FUN_006ae110((byte *)puStack_18);
    }
  }
  return;
}

