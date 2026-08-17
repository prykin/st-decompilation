#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004d9820(int *param_1)

{
  STWorldObject *this;
  short sVar1;
  int iVar3;
  int iVar2;
  int iVar6;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  longlong lVar10;
  int local_8;

  if (param_1[0x136] + 0x4bU <= g_playSystem_00802A38->field_00E4) {
    param_1[0x136] = g_playSystem_00802A38->field_00E4;
    param_1[0x137] = 0;
    param_1[0x138] = 0;
    iVar7 = param_1[0x16d] + -0xd;
    if (iVar7 < param_1[0x16d] + 0xd) {
      do {
        if (((-1 < iVar7) && (iVar7 < g_worldGrid.sizeY)) &&
           (iVar9 = param_1[0x16c] + -0xd, sVar4 = g_worldGrid.sizeX, sVar5 = g_worldGrid.sizeZ,
           iVar9 < param_1[0x16c] + 0xd)) {
          do {
            if (((-1 < iVar9) && (iVar9 < sVar4)) && (local_8 = 0, 0 < sVar5)) {
              do {
                sVar8 = (short)iVar9;
                if ((((-1 < sVar8) && (sVar8 < sVar4)) &&
                    (((sVar6 = (short)iVar7, -1 < sVar6 &&
                      ((((sVar6 < g_worldGrid.sizeY && (sVar1 = (short)local_8, -1 < sVar1)) &&
                        (sVar1 < sVar5)) &&
                       ((this = g_worldGrid.cells
                                [(int)sVar6 * (int)sVar4 + (int)sVar1 * (int)g_worldGrid.planeStride
                                 + (int)sVar8].objects[0], this != nullptr &&
                        (this != (STWorldObject *)param_1)))))) &&
                     /* ST_CALLSITE[004D9925]: CALL dword ptr [EDX + 0x2c] */
                     (iVar3 = this->GetObjectTypeId(), iVar3 == 0x3a)))) &&
                   (iVar2 = FUN_006aced8(iVar9,iVar7,param_1[0x16c],param_1[0x16d]), iVar2 < 0xe)) {
                  param_1[0x137] = param_1[0x137] + 1;
                  param_1[0x138] = param_1[0x138] + iVar2;
                }
                local_8 = local_8 + 1;
                sVar4 = g_worldGrid.sizeX;
                sVar5 = g_worldGrid.sizeZ;
              } while (local_8 < g_worldGrid.sizeZ);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < param_1[0x16c] + 0xd);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_1[0x16d] + 0xd);
    }
  }
  iVar7 = param_1[0x137] * 0xd - param_1[0x138];
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if (param_1[0x137] == 0) {
    iVar6 = thunk_FUN_004d8230();
  }
  else {
    lVar10 = FUN_006b12cc(0xd);
    iVar9 = (int)lVar10;
    lVar10 = FUN_006b12cc(iVar7);
    iVar7 = FUN_006b12a8((int)lVar10,iVar9);
    iVar7 = iVar7 + DAT_007eda8c;
    iVar9 = thunk_FUN_004d8230();
    lVar10 = FUN_006b12cc(iVar9);
    iVar7 = FUN_006b12dc((int)lVar10,iVar7);
    iVar6 = FUN_006b1280(iVar7);
  }
  param_1[0x139] = iVar6;
  if ((uint)(param_1[0x139] + param_1[0x135]) <= g_playSystem_00802A38->field_00E4) {
    param_1[0x135] = g_playSystem_00802A38->field_00E4;
    param_1[0x134] = param_1[0x134] + 2;
    thunk_FUN_004d82b0(2);
    if (99 < param_1[0x134]) {
      thunk_FUN_004d9b20((int)param_1);
    }
  }
  return 0;
}

