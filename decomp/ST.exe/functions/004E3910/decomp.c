
undefined4 __fastcall FUN_004e3910(int *param_1)

{
  STT3DSprC *this;
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  STSharkC *pSVar10;
  char cVar11;
  short sVar12;
  STSharkC *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  DArrayTy *local_8;

  if ((uint)param_1[0x13a] <= PTR_00802a38->field_00E4) {
    uVar5 = param_1[7] * 0x41c64e6d + 0x3039;
    param_1[7] = uVar5;
    local_10 = 0;
    local_c = 0;
    param_1[0x13a] = (uVar5 >> 0x10) % 0x9e + 0x1d4 + PTR_00802a38->field_00E4;
    local_14 = param_1;
    if (0 < param_1[0x139]) {
      do {
        iVar9 = local_c;
        if (param_1[local_c + 0x134] == 0) {
          local_c = iVar9;
          if (local_10 == 0) {
            local_10 = 1;
            local_8 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10000,0xc,10);
            iVar9 = 0;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar8 = g_worldGrid._0_4_;
            if (0 < g_worldGrid.sizeY) {
              do {
                iVar3 = 0;
                if (0 < g_worldGrid.sizeZ) {
                  do {
                    sVar1 = (short)iVar9;
                    sVar12 = (short)iVar3;
                    iVar4 = thunk_FUN_004961b0(0,sVar1,sVar12);
                    if ((iVar4 != 0) &&
                       (((sVar2 = g_worldGrid.sizeX, sVar2 < 1 || (sVar1 < 0)) ||
                        (((g_worldGrid.sizeY <= sVar1 ||
                          (((sVar12 < 0 || (g_worldGrid.sizeZ <= sVar12)) ||
                           (g_worldGrid.cells
                            [(int)sVar1 * (int)sVar2 + (int)sVar12 * (int)g_worldGrid.planeStride].
                            objects[0] == (STWorldObject *)0x0)))) &&
                         ((((sVar1 < 0 || (g_worldGrid.sizeY <= sVar1)) || (sVar12 < 0)) ||
                          ((g_worldGrid.sizeZ <= sVar12 ||
                           (g_worldGrid.cells
                            [(int)sVar1 * (int)sVar2 + (int)sVar12 * (int)g_worldGrid.planeStride].
                            objects[1] == (STWorldObject *)0x0)))))))))) {
                      local_20 = (STSharkC *)0x0;
                      local_1c = iVar9;
                      local_18 = iVar3;
                      Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,&local_20);
                    }
                    iVar4 = thunk_FUN_004961b0(g_worldGrid.sizeX + -1,sVar1,sVar12);
                    if (iVar4 != 0) {
                      sVar2 = g_worldGrid.sizeX;
                      if (((short)(sVar2 + -1) < 0) ||
                         ((((((sVar2 <= (short)(sVar2 + -1) || (sVar1 < 0)) ||
                             (g_worldGrid.sizeY <= sVar1)) ||
                            ((sVar12 < 0 || (g_worldGrid.sizeZ <= sVar12)))) ||
                           (g_worldGrid.cells
                            [(int)sVar1 * (int)sVar2 + (int)sVar12 * (int)g_worldGrid.planeStride +
                             (int)(short)(sVar2 + -1)].objects[0] == (STWorldObject *)0x0)) &&
                          (((((short)(sVar2 + -1) < 0 || (sVar2 <= (short)(sVar2 + -1))) ||
                            ((sVar1 < 0 ||
                             (((g_worldGrid.sizeY <= sVar1 || (sVar12 < 0)) ||
                              (g_worldGrid.sizeZ <= sVar12)))))) ||
                           (g_worldGrid.cells
                            [(int)sVar1 * (int)sVar2 + (int)sVar12 * (int)g_worldGrid.planeStride +
                             (int)(short)(sVar2 + -1)].objects[1] == (STWorldObject *)0x0)))))) {
                        local_20 = (STSharkC *)(sVar2 + -1);
                        local_1c = iVar9;
                        local_18 = iVar3;
                        Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,&local_20);
                      }
                    }
                    iVar3 = iVar3 + 1;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    uVar8 = g_worldGrid._0_4_;
                    param_1 = local_14;
                  } while (iVar3 < g_worldGrid.sizeZ);
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < g_worldGrid.sizeY);
            }
            pSVar10 = (STSharkC *)0x0;
            sVar1 = g_worldGrid.sizeZ;
            if (0 < (short)uVar8) {
              do {
                iVar9 = 0;
                if (0 < sVar1) {
                  do {
                    sVar1 = (short)pSVar10;
                    sVar12 = (short)iVar9;
                    iVar3 = thunk_FUN_004961b0(sVar1,0,sVar12);
                    if (iVar3 != 0) {
                      if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
                           ((g_worldGrid.sizeY < 1 ||
                            ((sVar12 < 0 || (g_worldGrid.sizeZ <= sVar12)))))) ||
                          (g_worldGrid.cells
                           [(int)sVar12 * (int)g_worldGrid.planeStride + (int)sVar1].objects[0] ==
                           (STWorldObject *)0x0)) &&
                         (((((sVar1 < 0 || (g_worldGrid.sizeX <= sVar1)) || (g_worldGrid.sizeY < 1))
                           || ((sVar12 < 0 || (g_worldGrid.sizeZ <= sVar12)))) ||
                          (g_worldGrid.cells
                           [(int)sVar12 * (int)g_worldGrid.planeStride + (int)sVar1].objects[1] ==
                           (STWorldObject *)0x0)))) {
                        local_1c = 0;
                        local_20 = pSVar10;
                        local_18 = iVar9;
                        Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,&local_20);
                      }
                    }
                    iVar3 = thunk_FUN_004961b0(sVar1,g_worldGrid.sizeY + -1,sVar12);
                    if (iVar3 != 0) {
                      sVar2 = g_worldGrid.sizeY + -1;
                      sVar7 = g_worldGrid.sizeX;
                      if ((((sVar1 < 0) || (sVar7 <= sVar1)) ||
                          ((sVar2 < 0 ||
                           ((((g_worldGrid.sizeY <= sVar2 || (sVar12 < 0)) ||
                             (g_worldGrid.sizeZ <= sVar12)) ||
                            (g_worldGrid.cells
                             [(int)sVar12 * (int)g_worldGrid.planeStride + (int)sVar7 * (int)sVar2 +
                              (int)sVar1].objects[0] == (STWorldObject *)0x0)))))) &&
                         (((sVar1 < 0 || (sVar7 <= sVar1)) ||
                          ((sVar2 < 0 ||
                           (((g_worldGrid.sizeY <= sVar2 || (sVar12 < 0)) ||
                            ((g_worldGrid.sizeZ <= sVar12 ||
                             (g_worldGrid.cells
                              [(int)sVar12 * (int)g_worldGrid.planeStride + (int)sVar2 * (int)sVar7
                               + (int)sVar1].objects[1] == (STWorldObject *)0x0)))))))))) {
                        local_1c = g_worldGrid.sizeY + -1;
                        local_20 = pSVar10;
                        local_18 = iVar9;
                        Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,&local_20);
                      }
                    }
                    iVar9 = iVar9 + 1;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    uVar8 = g_worldGrid._0_4_;
                    param_1 = local_14;
                    sVar1 = g_worldGrid.sizeZ;
                  } while (iVar9 < g_worldGrid.sizeZ);
                }
                pSVar10 = (STSharkC *)((int)&pSVar10->vtable + 1);
              } while ((int)pSVar10 < (int)(short)uVar8);
            }
            if (local_8->count != 0) {
              uVar5 = param_1[7] * 0x41c64e6d + 0x3039;
              param_1[7] = uVar5;
              DArrayGetElement(local_8,(uVar5 >> 0x10) % local_8->count,&local_20);
              iVar9 = param_1[0x16c] + -8;
              if (iVar9 < 0) {
                iVar9 = 0;
              }
              iVar3 = param_1[0x16c] + 8;
              if (g_worldGrid.sizeX <= iVar3) {
                iVar3 = g_worldGrid.sizeX + -1;
              }
              iVar4 = param_1[0x16d] + -8;
              if (iVar4 < 0) {
                iVar4 = 0;
              }
              iVar6 = param_1[0x16d] + 8;
              if (g_worldGrid.sizeY <= iVar6) {
                iVar6 = g_worldGrid.sizeY + -1;
              }
              iVar9 = STSharkC::CreateShark
                                (local_20,(int)local_20,local_1c,local_18,iVar9,iVar4,iVar3,iVar6,0,
                                 param_1[9]);
              this = (STT3DSprC *)((int)param_1 + 0x1d5);
              param_1[local_c + 0x134] = *(int *)(iVar9 + 0x18);
              cVar11 = '\0';
              iVar9 = thunk_FUN_004acd30(this,'\v');
              thunk_FUN_004abce0(this,0xb,0,iVar9,cVar11);
              STT3DSprC::SetCurFase(this,'\v',0);
              thunk_FUN_004ac700(this,'\v');
              STT3DSprC::StartShow(this,0xb,PTR_00802a38->field_00E4);
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(*param_1 + 0x90))(3,0x25d);
            }
            DArrayDestroy(local_8);
          }
        }
        else {
          iVar3 = FUN_006e62d0(PTR_00802a38,param_1[local_c + 0x134],(int *)0x0);
          local_c = iVar9;
          if (iVar3 != 0) {
            param_1[iVar9 + 0x134] = 0;
          }
        }
        local_c = local_c + 1;
      } while (local_c < param_1[0x139]);
      return 0;
    }
  }
  return 0;
}

