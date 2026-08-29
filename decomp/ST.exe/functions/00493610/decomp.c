#include "../../pseudocode_runtime.h"


/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00493610.
   Evidence: incoming_receiver_captures=1; receiver_accesses=9; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=1; adopt_untyped_existing_thiscall
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00478640 @ 004787F7 -> read as EAX on
   every CFG path | 00478640 @ 00478B02 -> read as EAX on every CFG path | 00478640 @ 00478D02 ->
   read as EAX on every CFG path */

int __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00493610::FUN_00493610
          (RecoveredReceiver_00493610 *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  int iVar3;
  int iVar2;
  int iVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int local_14;
  int local_c;
  int local_8;

  local_8 = (int)this->field_0621;
  iVar2 = 0;
  iVar6 = local_8 + -1;
  local_c = 1000000;
  local_14 = 0;
  if (local_8 + 1 < iVar6) {
    return 0;
  }
  local_8 = local_8 + -2;
  do {
    if (((-2 < local_8) && (iVar6 <= g_worldGrid.sizeZ + -1)) &&
       (iVar9 = this->field_061F + -1, iVar9 <= this->field_061F + 2)) {
      do {
        if (((-1 < iVar9) && (iVar9 <= g_worldGrid.sizeY + -1)) &&
           (iVar2 = this->field_061D + -1, iVar2 <= this->field_061D + 2)) {
          do {
            if (((-1 < iVar2) && (iVar4 = (int)g_worldGrid.sizeX, iVar2 <= iVar4 + -1)) &&
               (STGridAt3D(g_pathingGrid, iVar2, iVar9, iVar6) == 0)) {
              sVar7 = (short)iVar2;
              sVar8 = (short)iVar9;
              sVar5 = (short)iVar6;
              if ((((sVar7 < 0) ||
                   ((((((g_worldGrid.sizeX <= sVar7 || (sVar8 < 0)) || (g_worldGrid.sizeY <= sVar8))
                      || ((sVar5 < 0 || (g_worldGrid.sizeZ <= sVar5)))) ||
                     (g_worldGrid.cells
                      [(int)sVar5 * (int)g_worldGrid.planeStride + sVar8 * iVar4 + (int)sVar7].
                      objects[0] == nullptr)) &&
                    (((sVar7 < 0 || (g_worldGrid.sizeX <= sVar7)) ||
                     (((sVar8 < 0 ||
                       (((g_worldGrid.sizeY <= sVar8 || (sVar5 < 0)) || (g_worldGrid.sizeZ <= sVar5)
                        ))) || (g_worldGrid.cells
                                [(int)sVar5 * (int)g_worldGrid.planeStride + sVar8 * iVar4 +
                                 (int)sVar7].objects[1] == nullptr)))))))) &&
                  ((sVar1 = sVar5 + -1, sVar7 < 0 ||
                   ((((((g_worldGrid.sizeX <= sVar7 || (sVar8 < 0)) ||
                       ((g_worldGrid.sizeY <= sVar8 || ((sVar1 < 0 || (g_worldGrid.sizeZ <= sVar1)))
                        ))) || (g_worldGrid.cells
                                [(int)g_worldGrid.planeStride * (int)sVar1 + sVar8 * iVar4 +
                                 (int)sVar7].objects[0] == nullptr)) ||
                     (STGridAt3D(g_pathingGrid, iVar2, iVar9, local_8) ==
                      0)) && (((((sVar7 < 0 || (g_worldGrid.sizeX <= sVar7)) || (sVar8 < 0)) ||
                               ((g_worldGrid.sizeY <= sVar8 || (sVar1 = sVar5 + -1, sVar1 < 0)))) ||
                              ((g_worldGrid.sizeZ <= sVar1 ||
                               (g_worldGrid.cells
                                [(int)g_worldGrid.planeStride * (int)sVar1 + sVar8 * iVar4 +
                                 (int)sVar7].objects[1] == nullptr)))))))))) &&

                 (iVar3 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,
                                       (int)this->field_004B,iVar2,iVar9,iVar6), iVar3 < local_c)) {
                *param_1 = sVar7;
                *param_2 = sVar8;
                local_14 = 1;
                *param_3 = sVar5;
                local_c = iVar3;
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 <= this->field_061D + 2);
        }
        iVar9 = iVar9 + 1;
        iVar2 = local_14;
      } while (iVar9 <= this->field_061F + 2);
    }
    iVar6 = iVar6 + 1;
    local_8 = local_8 + 1;
  } while (iVar6 <= this->field_0621 + 1);
  return iVar2;
}

