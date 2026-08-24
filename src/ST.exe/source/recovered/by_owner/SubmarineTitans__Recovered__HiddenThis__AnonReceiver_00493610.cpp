#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__AnonReceiver_00493610.cpp

// 00493610 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00493610::FUN_00493610
#line 4 "decomp/ST.exe/functions/00493610/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00493610.
   Evidence: incoming_receiver_captures=1; receiver_accesses=9; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=1; adopt_untyped_existing_thiscall */

undefined4 __thiscall
st::fn_00493610
          (AnonReceiver_00493610 *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  int iVar3;
  uint uVar2;
  int iVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  undefined4 local_14;
  int local_c;
  int local_8;

  local_8 = (int)*(short *)&this->field_0x621;
  uVar2 = 0;
  iVar6 = local_8 + -1;
  local_c = 1000000;
  local_14 = 0;
  if (local_8 + 1 < iVar6) {
    return 0;
  }
  local_8 = local_8 + -2;
  do {
    if (((-2 < local_8) && (iVar6 <= g_worldGrid.sizeZ + -1)) &&
       (iVar10 = *(short *)&this->field_0x61f + -1, iVar10 <= *(short *)&this->field_0x61f + 2)) {
      do {
        if (((-1 < iVar10) && (iVar10 <= g_worldGrid.sizeY + -1)) &&
           (iVar8 = *(short *)&this->field_0x61d + -1, iVar8 <= *(short *)&this->field_0x61d + 2)) {
          do {
            if (((-1 < iVar8) && (iVar4 = (int)g_worldGrid.sizeX, iVar8 <= iVar4 + -1)) &&
               (STGridAt3D(g_pathingGrid, iVar8, iVar10, iVar6) == 0)) {
              sVar7 = (short)iVar8;
              sVar9 = (short)iVar10;
              sVar5 = (short)iVar6;
              if ((((sVar7 < 0) ||
                   ((((((g_worldGrid.sizeX <= sVar7 || (sVar9 < 0)) || (g_worldGrid.sizeY <= sVar9))
                      || ((sVar5 < 0 || (g_worldGrid.sizeZ <= sVar5)))) ||
                     (g_worldGrid.cells
                      [(int)sVar5 * (int)g_worldGrid.planeStride + sVar9 * iVar4 + (int)sVar7].
                      objects[0] == nullptr)) &&
                    (((sVar7 < 0 || (g_worldGrid.sizeX <= sVar7)) ||
                     (((sVar9 < 0 ||
                       (((g_worldGrid.sizeY <= sVar9 || (sVar5 < 0)) || (g_worldGrid.sizeZ <= sVar5)
                        ))) || (g_worldGrid.cells
                                [(int)sVar5 * (int)g_worldGrid.planeStride + sVar9 * iVar4 +
                                 (int)sVar7].objects[1] == nullptr)))))))) &&
                  ((sVar1 = sVar5 + -1, sVar7 < 0 ||
                   ((((((g_worldGrid.sizeX <= sVar7 || (sVar9 < 0)) ||
                       ((g_worldGrid.sizeY <= sVar9 || ((sVar1 < 0 || (g_worldGrid.sizeZ <= sVar1)))
                        ))) || (g_worldGrid.cells
                                [(int)g_worldGrid.planeStride * (int)sVar1 + sVar9 * iVar4 +
                                 (int)sVar7].objects[0] == nullptr)) ||
                     (STGridAt3D(g_pathingGrid, iVar8, iVar10, local_8)
                      == 0)) &&
                    (((((sVar7 < 0 || (g_worldGrid.sizeX <= sVar7)) || (sVar9 < 0)) ||
                      ((g_worldGrid.sizeY <= sVar9 || (sVar1 = sVar5 + -1, sVar1 < 0)))) ||
                     ((g_worldGrid.sizeZ <= sVar1 ||
                      (g_worldGrid.cells
                       [(int)g_worldGrid.planeStride * (int)sVar1 + sVar9 * iVar4 + (int)sVar7].
                       objects[1] == nullptr)))))))))) &&
                 (iVar3 = st::fn_006AADD0((int)*(short *)&this->field_0x47,
                                       (int)*(short *)&this->field_0x49,
                                       (int)*(short *)&this->field_0x4b,iVar8,iVar10,iVar6),
                 iVar3 < local_c)) {
                *param_1 = sVar7;
                *param_2 = sVar9;
                local_14 = 1;
                *param_3 = sVar5;
                local_c = iVar3;
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 <= *(short *)&this->field_0x61d + 2);
        }
        iVar10 = iVar10 + 1;
        uVar2 = local_14;
      } while (iVar10 <= *(short *)&this->field_0x61f + 2);
    }
    iVar6 = iVar6 + 1;
    local_8 = local_8 + 1;
  } while (iVar6 <= *(short *)&this->field_0x621 + 1);
  return uVar2;
}

