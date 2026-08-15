#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0060dab0(AnonShape_0060DAB0_7A3B9916 *param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  AnonNested_AnonShape_0060DAB0_7A3B9916_0244_2655E818 *pAVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int local_18;
  int local_14;
  int local_10;
  int local_c;

  pAVar8 = param_1->field_0244;
  uVar6 = 2;
  if ((pAVar8 != nullptr) &&
     (param_1->field_0240 == 1)) {
    iVar7 = g_playSystem_00802A38->field_00E4 - *(int *)(pAVar8 + 1);
    pAVar8->field_001C = pAVar8->field_001C + 6;
    iVar9 = param_1->field_0244->field_0018 * iVar7;
    param_1->field_0244->field_0014 = param_1->field_01FD + iVar9;
    pAVar8 = param_1->field_0244;
    if (iVar9 < (int)pAVar8->field_001C) {
      local_14 = (pAVar8->field_0010 * iVar9) / (int)pAVar8->field_001C;
    }
    else {
      local_14 = pAVar8->field_0010;
    }
    pAVar8->field_0020 = pAVar8->field_0020 + 1;
    pAVar8 = param_1->field_0244;
    if ((int)pAVar8->field_0020 <= (int)pAVar8->field_0024) {
      pAVar8->field_0020 = 0;
    }
    pAVar8 = param_1->field_0244;
    local_18 = 0;
    if (0 < (int)pAVar8->field_000C) {
      do {
        iVar9 = pAVar8->field_0010;
        local_c = 0;
        if (0 < local_14) {
          local_10 = 0;
          do {
            iVar11 = param_1->field_0234;
            uVar10 = local_c + iVar9 * local_18;
            if ((uVar10 < *(uint *)(iVar11 + 0xc)) &&
               (iVar11 = *(int *)(iVar11 + 8) * uVar10 + *(int *)(iVar11 + 0x1c), iVar11 != 0)) {
              pAVar8 = param_1->field_0244;
              iVar4 = pAVar8->field_0014;
              psVar1 = (short *)(pAVar8->field_0008 + (local_10 / (int)pAVar8->field_0010) * 4);
              iVar5 = pAVar8->field_001C;
              sVar2 = *psVar1;
              fcos((float10)*(float *)(iVar11 + 0x2c));
              sVar3 = psVar1[1];
              lVar12 = Library::MSVCRT::__ftol();
              fsin((float10)*(float *)(iVar11 + 0x2c));
              *(int *)(iVar11 + 0xc) = (int)lVar12 + *(int *)(iVar11 + 0x18);
              lVar12 = Library::MSVCRT::__ftol();
              *(int *)(iVar11 + 0x10) = (int)lVar12 + *(int *)(iVar11 + 0x1c);
              *(int *)(iVar11 + 0x14) = *(int *)(iVar11 + 0x20) + (int)sVar3 / (iVar7 * 0x50 + 200);
              if (iVar4 - (iVar5 * sVar2) / 10000 < param_1->field_01F9) {
                if ((*(int *)(iVar11 + 4) == 0) && (-1 < (int)*(uint *)(iVar11 + 0x3c))) {
                  *(int *)(iVar11 + 0x24) = param_1->field_0244->field_0020 + local_c;
                  Library::Ourlib::ST3DSMAP::SprShow
                            (g_sT3DSMAPContext_00807598,*(uint *)(iVar11 + 0x3c),0);
                  *(undefined4 *)(iVar11 + 4) = 1;
                }
                if (*(int *)(iVar11 + 0x28) < *(int *)(iVar11 + 0x24)) {
                  *(int *)(iVar11 + 0x24) = *(int *)(iVar11 + 0x24) % *(int *)(iVar11 + 0x28);
                }
              }
              else if ((*(int *)(iVar11 + 4) != 0) && (-1 < (int)*(uint *)(iVar11 + 0x3c))) {
                Library::Ourlib::ST3DSMAP::SprHide
                          (g_sT3DSMAPContext_00807598,*(uint *)(iVar11 + 0x3c));
                *(undefined4 *)(iVar11 + 4) = 0xffffffff;
              }
            }
            local_c = local_c + 1;
            local_10 = local_10 + 0x33;
          } while (local_c < local_14);
        }
        pAVar8 = param_1->field_0244;
        local_18 = local_18 + 1;
      } while (local_18 < (int)pAVar8->field_000C);
    }
    uVar6 = 1;
  }
  return uVar6;
}

