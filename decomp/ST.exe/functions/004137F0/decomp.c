#include "../../pseudocode_runtime.h"


undefined4 FUN_004137f0(AnonShape_004137F0_350C8AE0 *param_1,int param_2,uint param_3,int param_4)

{
  ushort uVar1;
  AnonNested_AnonShape_004137F0_350C8AE0_0029_743E91AB *pAVar2;
  AnonShape_004137F0_350C8AE0 *this;
  uint uVar3;
  int iVar4;
  AnonNested_AnonShape_004137F0_350C8AE0_0059_F07A8D99 *pAVar5;
  ushort *puVar6;
  STGameObjC *pSVar7;
  int iVar8;
  int *piVar9;
  int iVar10;

  this = param_1;
  if ((int)param_3 < 0) {
    param_3 = 0;
  }
  else if (9 < (int)param_3) {
    param_3 = 9;
  }
  uVar3 = param_3;
  param_1->field_0051 = param_3;
  iVar4 = ((param_4 * 4 + 0x2d) / 0x5a) * 0x5a;
  iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
  if (iVar4 == 0x168) {
    iVar4 = 0;
  }
  param_1->field_0055 = iVar4;
  param_1->field_0049 = param_1->field_0049 | 1;
  if (param_2 != -1) {
    param_1->field_004D = param_2;
    FreeAndNull(&param_1->field_0059);
  }
  if ((param_2 == -2) || (param_2 == -3)) {
    iVar8 = param_1->field_0029->field_000C;
    param_1->field_0049 = param_1->field_0049 & 0xfffffffe;
    param_1 = nullptr;
    param_4 = 0;
    param_2 = 0;
    pAVar5 = Library::DKW::LIB::MemAlloc(iVar8 * 0x10 + 0xc);
    this->field_0059 = pAVar5;
    piVar9 = &pAVar5->field_000C;
    pAVar5->field_0004 = iVar4;
    param_3 = 0;
    this->field_0059->field_0008 = uVar3;
    this->field_0059->field_0000 = 0;
    if (0 < iVar8) {
      do {
        pAVar2 = this->field_0029;
        if (((uint)pAVar2->field_000C <= param_3) ||
           (puVar6 = (ushort *)(pAVar2->field_0008 * param_3 + pAVar2->field_001C),
           puVar6 == nullptr)) break;
        uVar1 = *puVar6;
        if (uVar1 != 0xffff) {
          pSVar7 = thunk_FUN_00423e70(this,uVar1);
          if (pSVar7 != nullptr) {
            iVar4 = pSVar7->field_00C7;
            if ((((iVar4 < 0) || (g_pathingGrid.sizeX <= iVar4)) || (pSVar7->field_00CB < 0)) ||
               ((((int)g_pathingGrid.sizeY <= pSVar7->field_00CB || (pSVar7->field_00CF < 0)) ||
                ((int)g_pathingGrid.sizeZ <= pSVar7->field_00CF)))) {
              *piVar9 = pSVar7->field_005B * 4 + 2;
              piVar9[1] = pSVar7->field_005D * 4 + 2;
              iVar4 = (int)pSVar7->field_005F;
            }
            else {
              *piVar9 = iVar4 * 4 + 2;
              piVar9[1] = pSVar7->field_00CB * 4 + 2;
              iVar4 = pSVar7->field_00CF;
            }
            piVar9[2] = iVar4 * 4 + 2;
            param_1 = (AnonShape_004137F0_350C8AE0 *)(&param_1->field_0x0 + *piVar9);
            param_4 = param_4 + piVar9[1];
            param_2 = param_2 + piVar9[2];
            piVar9[3] = (uint)(ushort)pSVar7->field_0032;
            piVar9 = piVar9 + 4;
            this->field_0059->field_0000 = this->field_0059->field_0000 + 1;
          }
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar8);
    }
    iVar4 = this->field_0059->field_0000;
    iVar8 = iVar4 / 2;
    piVar9 = &this->field_0059->field_000C;
    iVar10 = 0;
    if (0 < iVar4) {
      do {
        *piVar9 = *piVar9 - (int)(&param_1->field_0x0 + iVar8) / iVar4;
        piVar9[1] = piVar9[1] - (iVar8 + param_4) / iVar4;
        piVar9[2] = piVar9[2] - (param_2 + iVar8) / iVar4;
        iVar10 = iVar10 + 1;
        piVar9 = piVar9 + 4;
      } while (iVar10 < (int)this->field_0059->field_0000);
    }
  }
  return 0;
}

