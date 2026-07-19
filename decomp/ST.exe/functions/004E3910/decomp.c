
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004e3910(int *param_1)

{
  STT3DSprC *this;
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar5;
  int iVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  STSharkC *pSVar11;
  char cVar12;
  short sVar13;
  STSharkC *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  uint *local_8;
  
  if ((uint)param_1[0x13a] <= *(uint *)((int)DAT_00802a38 + 0xe4)) {
    uVar5 = param_1[7] * 0x41c64e6d + 0x3039;
    param_1[7] = uVar5;
    local_10 = 0;
    local_c = 0;
    param_1[0x13a] = (uVar5 >> 0x10) % 0x9e + 0x1d4 + *(int *)((int)DAT_00802a38 + 0xe4);
    local_14 = param_1;
    if (0 < param_1[0x139]) {
      do {
        iVar10 = local_c;
        if (param_1[local_c + 0x134] == 0) {
          local_c = iVar10;
          if (local_10 == 0) {
            local_10 = 1;
            local_8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10000,0xc,10);
            iVar10 = 0;
            uVar8 = _DAT_007fb240;
            if (0 < DAT_007fb242) {
              do {
                iVar4 = 0;
                if (0 < DAT_007fb244) {
                  do {
                    sVar2 = (short)iVar10;
                    sVar13 = (short)iVar4;
                    bVar1 = thunk_FUN_004961b0(0,sVar2,sVar13);
                    if ((CONCAT31(extraout_var,bVar1) != 0) &&
                       (((sVar3 = (short)_DAT_007fb240, sVar3 < 1 || (sVar2 < 0)) ||
                        (((DAT_007fb242 <= sVar2 ||
                          (((sVar13 < 0 || (DAT_007fb244 <= sVar13)) ||
                           (*(int *)(DAT_007fb248 +
                                    ((int)sVar2 * (int)sVar3 + (int)sVar13 * (int)DAT_007fb246) * 8)
                            == 0)))) &&
                         ((((sVar2 < 0 || (DAT_007fb242 <= sVar2)) || (sVar13 < 0)) ||
                          ((DAT_007fb244 <= sVar13 ||
                           (*(int *)(DAT_007fb248 + 4 +
                                    ((int)sVar2 * (int)sVar3 + (int)sVar13 * (int)DAT_007fb246) * 8)
                            == 0)))))))))) {
                      local_20 = (STSharkC *)0x0;
                      local_1c = iVar10;
                      local_18 = iVar4;
                      Library::DKW::TBL::FUN_006ae1c0(local_8,&local_20);
                    }
                    bVar1 = thunk_FUN_004961b0((short)_DAT_007fb240 + -1,sVar2,sVar13);
                    if (CONCAT31(extraout_var_00,bVar1) != 0) {
                      sVar3 = (short)_DAT_007fb240;
                      if (((short)(sVar3 + -1) < 0) ||
                         ((((((sVar3 <= (short)(sVar3 + -1) || (sVar2 < 0)) ||
                             (DAT_007fb242 <= sVar2)) || ((sVar13 < 0 || (DAT_007fb244 <= sVar13))))
                           || (*(int *)(DAT_007fb248 +
                                       ((int)sVar2 * (int)sVar3 + (int)sVar13 * (int)DAT_007fb246 +
                                       (int)(short)(sVar3 + -1)) * 8) == 0)) &&
                          (((((short)(sVar3 + -1) < 0 || (sVar3 <= (short)(sVar3 + -1))) ||
                            ((sVar2 < 0 ||
                             (((DAT_007fb242 <= sVar2 || (sVar13 < 0)) || (DAT_007fb244 <= sVar13)))
                             ))) || (*(int *)(DAT_007fb248 + 4 +
                                             ((int)sVar2 * (int)sVar3 +
                                              (int)sVar13 * (int)DAT_007fb246 +
                                             (int)(short)(sVar3 + -1)) * 8) == 0)))))) {
                        local_20 = (STSharkC *)(sVar3 + -1);
                        local_1c = iVar10;
                        local_18 = iVar4;
                        Library::DKW::TBL::FUN_006ae1c0(local_8,&local_20);
                      }
                    }
                    iVar4 = iVar4 + 1;
                    uVar8 = _DAT_007fb240;
                    param_1 = local_14;
                  } while (iVar4 < DAT_007fb244);
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < DAT_007fb242);
            }
            pSVar11 = (STSharkC *)0x0;
            sVar2 = DAT_007fb244;
            if (0 < (short)uVar8) {
              do {
                iVar10 = 0;
                if (0 < sVar2) {
                  do {
                    sVar2 = (short)pSVar11;
                    sVar13 = (short)iVar10;
                    bVar1 = thunk_FUN_004961b0(sVar2,0,sVar13);
                    if (CONCAT31(extraout_var_01,bVar1) != 0) {
                      if (((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) ||
                           ((DAT_007fb242 < 1 || ((sVar13 < 0 || (DAT_007fb244 <= sVar13)))))) ||
                          (*(int *)(DAT_007fb248 +
                                   ((int)sVar13 * (int)DAT_007fb246 + (int)sVar2) * 8) == 0)) &&
                         (((((sVar2 < 0 || (DAT_007fb240 <= sVar2)) || (DAT_007fb242 < 1)) ||
                           ((sVar13 < 0 || (DAT_007fb244 <= sVar13)))) ||
                          (*(int *)(DAT_007fb248 + 4 +
                                   ((int)sVar13 * (int)DAT_007fb246 + (int)sVar2) * 8) == 0)))) {
                        local_1c = 0;
                        local_20 = pSVar11;
                        local_18 = iVar10;
                        Library::DKW::TBL::FUN_006ae1c0(local_8,&local_20);
                      }
                    }
                    bVar1 = thunk_FUN_004961b0(sVar2,DAT_007fb242 + -1,sVar13);
                    if (CONCAT31(extraout_var_02,bVar1) != 0) {
                      sVar3 = DAT_007fb242 + -1;
                      sVar7 = (short)_DAT_007fb240;
                      if ((((sVar2 < 0) || (sVar7 <= sVar2)) ||
                          ((sVar3 < 0 ||
                           ((((DAT_007fb242 <= sVar3 || (sVar13 < 0)) || (DAT_007fb244 <= sVar13))
                            || (*(int *)(DAT_007fb248 +
                                        ((int)sVar13 * (int)DAT_007fb246 + (int)sVar7 * (int)sVar3 +
                                        (int)sVar2) * 8) == 0)))))) &&
                         (((sVar2 < 0 || (sVar7 <= sVar2)) ||
                          ((sVar3 < 0 ||
                           (((DAT_007fb242 <= sVar3 || (sVar13 < 0)) ||
                            ((DAT_007fb244 <= sVar13 ||
                             (*(int *)(DAT_007fb248 + 4 +
                                      ((int)sVar13 * (int)DAT_007fb246 + (int)sVar3 * (int)sVar7 +
                                      (int)sVar2) * 8) == 0)))))))))) {
                        local_1c = DAT_007fb242 + -1;
                        local_20 = pSVar11;
                        local_18 = iVar10;
                        Library::DKW::TBL::FUN_006ae1c0(local_8,&local_20);
                      }
                    }
                    iVar10 = iVar10 + 1;
                    uVar8 = _DAT_007fb240;
                    param_1 = local_14;
                    sVar2 = DAT_007fb244;
                  } while (iVar10 < DAT_007fb244);
                }
                pSVar11 = (STSharkC *)((int)&pSVar11->vtable + 1);
              } while ((int)pSVar11 < (int)(short)uVar8);
            }
            if (local_8[3] != 0) {
              uVar5 = param_1[7] * 0x41c64e6d + 0x3039;
              param_1[7] = uVar5;
              FUN_006acc70((int)local_8,(uVar5 >> 0x10) % local_8[3],&local_20);
              iVar10 = param_1[0x16c] + -8;
              if (iVar10 < 0) {
                iVar10 = 0;
              }
              iVar4 = param_1[0x16c] + 8;
              if (DAT_007fb240 <= iVar4) {
                iVar4 = DAT_007fb240 + -1;
              }
              iVar9 = param_1[0x16d] + -8;
              if (iVar9 < 0) {
                iVar9 = 0;
              }
              iVar6 = param_1[0x16d] + 8;
              if (DAT_007fb242 <= iVar6) {
                iVar6 = DAT_007fb242 + -1;
              }
              iVar10 = STSharkC::CreateShark
                                 (local_20,(int)local_20,local_1c,local_18,iVar10,iVar9,iVar4,iVar6,
                                  0,param_1[9]);
              this = (STT3DSprC *)((int)param_1 + 0x1d5);
              param_1[local_c + 0x134] = *(int *)(iVar10 + 0x18);
              cVar12 = '\0';
              iVar10 = thunk_FUN_004acd30(this,'\v');
              thunk_FUN_004abce0(this,0xb,0,iVar10,cVar12);
              STT3DSprC::SetCurFase(this,'\v',0);
              thunk_FUN_004ac700(this,'\v');
              STT3DSprC::StartShow(this,0xb,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
              (**(code **)(*param_1 + 0x90))(3,0x25d);
            }
            FUN_006ae110((byte *)local_8);
          }
        }
        else {
          iVar4 = FUN_006e62d0(DAT_00802a38,param_1[local_c + 0x134],(int *)0x0);
          local_c = iVar10;
          if (iVar4 != 0) {
            param_1[iVar10 + 0x134] = 0;
          }
        }
        local_c = local_c + 1;
      } while (local_c < param_1[0x139]);
      return 0;
    }
  }
  return 0;
}

