#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004e3910(int *param_1)

{
  STT3DSprC *this;
  short sVar1;
  short sVar2;
  int iVar4;
  int iVar5;
  int iVar3;
  int local_EAX_930;
  uint uVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
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
  DArrayTy *local_8;

  if ((uint)param_1[0x13a] <= g_playSystem_00802A38->field_00E4) {
    uVar6 = param_1[7] * 0x41c64e6d + 0x3039;
    param_1[7] = uVar6;
    local_10 = 0;
    local_c = 0;
    param_1[0x13a] = (uVar6 >> 0x10) % 0x9e + 0x1d4 + g_playSystem_00802A38->field_00E4;
    local_14 = param_1;
    if (0 < param_1[0x139]) {
      do {
        iVar10 = local_c;
        if ((AnonShape_005EFAE0_B406B78B *)param_1[local_c + 0x134] ==
            nullptr) {
          local_c = iVar10;
          if (local_10 == 0) {
            local_10 = 1;
            local_8 = Library::DKW::TBL::DArrayCreate(nullptr,10000,0xc,10);
            iVar10 = 0;
            uVar9 = STPiece<0,4>(g_worldGrid);
            if (0 < g_worldGrid.sizeY) {
              do {
                iVar4 = 0;
                if (0 < g_worldGrid.sizeZ) {
                  do {
                    sVar1 = (short)iVar10;
                    sVar13 = (short)iVar4;
                    iVar5 = thunk_FUN_004961b0(0,sVar1,sVar13);
                    if ((iVar5 != 0) &&
                       (((sVar2 = g_worldGrid.sizeX, sVar2 < 1 || (sVar1 < 0)) ||
                        (((g_worldGrid.sizeY <= sVar1 ||
                          (((sVar13 < 0 || (g_worldGrid.sizeZ <= sVar13)) ||
                           (g_worldGrid.cells
                            [(int)sVar1 * (int)sVar2 + (int)sVar13 * (int)g_worldGrid.planeStride].
                            objects[0] == nullptr)))) &&
                         ((((sVar1 < 0 || (g_worldGrid.sizeY <= sVar1)) || (sVar13 < 0)) ||
                          ((g_worldGrid.sizeZ <= sVar13 ||
                           (g_worldGrid.cells
                            [(int)sVar1 * (int)sVar2 + (int)sVar13 * (int)g_worldGrid.planeStride].
                            objects[1] == nullptr)))))))))) {
                      local_20 = nullptr;
                      local_1c = iVar10;
                      local_18 = iVar4;
                      Library::DKW::TBL::DArrayAppend(local_8,&local_20);
                    }
                    iVar5 = thunk_FUN_004961b0(g_worldGrid.sizeX + -1,sVar1,sVar13);
                    if (iVar5 != 0) {
                      sVar2 = g_worldGrid.sizeX;
                      if (((short)(sVar2 + -1) < 0) ||
                         ((((((sVar2 <= (short)(sVar2 + -1) || (sVar1 < 0)) ||
                             (g_worldGrid.sizeY <= sVar1)) ||
                            ((sVar13 < 0 || (g_worldGrid.sizeZ <= sVar13)))) ||
                           (g_worldGrid.cells
                            [(int)sVar1 * (int)sVar2 + (int)sVar13 * (int)g_worldGrid.planeStride +
                             (int)(short)(sVar2 + -1)].objects[0] == nullptr)) &&
                          (((((short)(sVar2 + -1) < 0 || (sVar2 <= (short)(sVar2 + -1))) ||
                            ((sVar1 < 0 ||
                             (((g_worldGrid.sizeY <= sVar1 || (sVar13 < 0)) ||
                              (g_worldGrid.sizeZ <= sVar13)))))) ||
                           (g_worldGrid.cells
                            [(int)sVar1 * (int)sVar2 + (int)sVar13 * (int)g_worldGrid.planeStride +
                             (int)(short)(sVar2 + -1)].objects[1] == nullptr)))))) {
                        local_20 = (STSharkC *)(sVar2 + -1);
                        local_1c = iVar10;
                        local_18 = iVar4;
                        Library::DKW::TBL::DArrayAppend(local_8,&local_20);
                      }
                    }
                    iVar4 = iVar4 + 1;
                    uVar9 = STPiece<0,4>(g_worldGrid);
                    param_1 = local_14;
                  } while (iVar4 < g_worldGrid.sizeZ);
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < g_worldGrid.sizeY);
            }
            pSVar11 = nullptr;
            sVar1 = g_worldGrid.sizeZ;
            if (0 < (short)uVar9) {
              do {
                iVar10 = 0;
                if (0 < sVar1) {
                  do {
                    sVar1 = (short)pSVar11;
                    sVar13 = (short)iVar10;
                    iVar3 = thunk_FUN_004961b0(sVar1,0,sVar13);
                    if (iVar3 != 0) {
                      if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
                           ((g_worldGrid.sizeY < 1 ||
                            ((sVar13 < 0 || (g_worldGrid.sizeZ <= sVar13)))))) ||
                          (g_worldGrid.cells
                           [(int)sVar13 * (int)g_worldGrid.planeStride + (int)sVar1].objects[0] ==
                           nullptr)) &&
                         (((((sVar1 < 0 || (g_worldGrid.sizeX <= sVar1)) || (g_worldGrid.sizeY < 1))
                           || ((sVar13 < 0 || (g_worldGrid.sizeZ <= sVar13)))) ||
                          (g_worldGrid.cells
                           [(int)sVar13 * (int)g_worldGrid.planeStride + (int)sVar1].objects[1] ==
                           nullptr)))) {
                        local_1c = 0;
                        local_20 = pSVar11;
                        local_18 = iVar10;
                        Library::DKW::TBL::DArrayAppend(local_8,&local_20);
                      }
                    }
                    local_EAX_930 = thunk_FUN_004961b0(sVar1,g_worldGrid.sizeY + -1,sVar13);
                    if (local_EAX_930 != 0) {
                      sVar2 = g_worldGrid.sizeY + -1;
                      sVar8 = g_worldGrid.sizeX;
                      if ((((sVar1 < 0) || (sVar8 <= sVar1)) ||
                          ((sVar2 < 0 ||
                           ((((g_worldGrid.sizeY <= sVar2 || (sVar13 < 0)) ||
                             (g_worldGrid.sizeZ <= sVar13)) ||
                            (g_worldGrid.cells
                             [(int)sVar13 * (int)g_worldGrid.planeStride + (int)sVar8 * (int)sVar2 +
                              (int)sVar1].objects[0] == nullptr)))))) &&
                         (((sVar1 < 0 || (sVar8 <= sVar1)) ||
                          ((sVar2 < 0 ||
                           (((g_worldGrid.sizeY <= sVar2 || (sVar13 < 0)) ||
                            ((g_worldGrid.sizeZ <= sVar13 ||
                             (g_worldGrid.cells
                              [(int)sVar13 * (int)g_worldGrid.planeStride + (int)sVar2 * (int)sVar8
                               + (int)sVar1].objects[1] == nullptr)))))))))) {
                        local_1c = g_worldGrid.sizeY + -1;
                        local_20 = pSVar11;
                        local_18 = iVar10;
                        Library::DKW::TBL::DArrayAppend(local_8,&local_20);
                      }
                    }
                    iVar10 = iVar10 + 1;
                    uVar9 = STPiece<0,4>(g_worldGrid);
                    param_1 = local_14;
                    sVar1 = g_worldGrid.sizeZ;
                  } while (iVar10 < g_worldGrid.sizeZ);
                }
                pSVar11 = (STSharkC *)((int)&pSVar11->vtable + 1);
              } while ((int)pSVar11 < (int)(short)uVar9);
            }
            if (local_8->count != 0) {
              uVar6 = param_1[7] * 0x41c64e6d + 0x3039;
              param_1[7] = uVar6;
              DArrayGetElement(local_8,(uVar6 >> 0x10) % local_8->count,&local_20);
              iVar10 = param_1[0x16c] + -8;
              if (iVar10 < 0) {
                iVar10 = 0;
              }
              iVar4 = param_1[0x16c] + 8;
              if (g_worldGrid.sizeX <= iVar4) {
                iVar4 = g_worldGrid.sizeX + -1;
              }
              iVar5 = param_1[0x16d] + -8;
              if (iVar5 < 0) {
                iVar5 = 0;
              }
              iVar7 = param_1[0x16d] + 8;
              if (g_worldGrid.sizeY <= iVar7) {
                iVar7 = g_worldGrid.sizeY + -1;
              }
              /* ST_CALLSITE[004E3E46]: CALL 0x00401fd7; direct=00401FD7 STSharkC::CreateShark */
              iVar10 = STSharkC::CreateShark
                                 (local_20,(int)local_20,local_1c,local_18,iVar10,iVar5,iVar4,iVar7,
                                  0,param_1[9]);
              this = (STT3DSprC *)((int)param_1 + 0x1d5);
              param_1[local_c + 0x134] = *(int *)(iVar10 + 0x18);
              cVar12 = '\0';
              /* ST_CALLSITE[004E3E67]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
              iVar10 = STT3DSprC::sub_004ACD30(this,'\v');
              thunk_FUN_004abce0(this,0xb,0,iVar10,cVar12);
              /* ST_CALLSITE[004E3E7E]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
              STT3DSprC::SetCurFase(this,'\v',0);
              thunk_FUN_004ac700(this,'\v');
              /* ST_CALLSITE[004E3E9D]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
              STT3DSprC::StartShow(this,0xb,g_playSystem_00802A38->field_00E4);
              /* ST_CALLSITE[004E3EAD]: CALL dword ptr [EAX + 0x90] */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)(*param_1 + 0x90))(3,0x25d);
            }
            DArrayDestroy(local_8);
          }
        }
        else {
          iVar4 = STPlaySystemC::sub_006E62D0
                            (g_playSystem_00802A38,
                             (AnonShape_005EFAE0_B406B78B *)param_1[local_c + 0x134],nullptr);
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

