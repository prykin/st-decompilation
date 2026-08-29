#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0064D270 -> 00675B10 @ 0064D376; MOVSX at 0064D35A establishes signed source width 2

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=4, ignored=0,
   unknown=0 */

int __cdecl
FUN_00675b10(int param_1,int param_2,short param_3,short *param_4,short *param_5,short *param_6,
            int param_7)

{
  STWorldObject *this;
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  int local_24;
  short local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_24 = 1;
  local_c = param_2;
  do {
    local_10 = (param_1 - param_2) + local_c;
    local_18 = local_24;
    local_14 = local_24;
    local_8 = local_c;
    thunk_FUN_006756d0((short *)&local_10,(short *)&local_8,(short *)&local_14,(short *)&local_18);
    sVar4 = (short)local_10;
    sVar1 = (short)local_14 + -1 + sVar4;
    local_20 = (short)local_18 + -1 + (short)local_8;
    iVar7 = local_10;
    iVar3 = local_8;
    while (sVar4 <= sVar1) {
      sVar4 = (short)iVar3;
      iVar5 = iVar3;
      while (sVar4 <= local_20) {
        sVar4 = 0;
        sVar6 = param_3;
        do {
          sVar8 = (short)iVar7;
          sVar9 = (short)iVar5;
          iVar2 = thunk_FUN_004961b0(sVar8,sVar9,sVar6);
          if ((iVar2 != 0) &&
             (((((sVar8 < 0 || (g_worldGrid.sizeX <= sVar8)) || (sVar9 < 0)) ||
               ((g_worldGrid.sizeY <= sVar9 || (sVar6 < 0)))) ||
              ((g_worldGrid.sizeZ <= sVar6 ||
               ((this = STGridAt3D(g_worldGrid, sVar8, sVar9, sVar6).objects[0],
                this == nullptr ||
                /* ST_CALLSITE[00675C12]: CALL dword ptr [EDX + 0x114]; [STIndirectCallsiteApplier] exact slot 0x114; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject;/undefined4 */
                (iVar3 = (*this->vtable[5].slots_00_28[9])(this,param_7), iVar3 != 0)))))))) {
            *param_4 = sVar8;
            *param_5 = sVar9;
            *param_6 = sVar6;
            return 1;
          }
          sVar6 = sVar6 + 1;
          if (4 < sVar6) {
            sVar6 = 0;
          }
          sVar4 = sVar4 + 1;
        } while (sVar4 < 5);
        iVar5 = iVar5 + 1;
        iVar3 = local_8;
        sVar4 = (short)iVar5;
      }
      iVar7 = iVar7 + 1;
      sVar4 = (short)iVar7;
    }
    local_24 = local_24 + 2;
    local_c = local_c + -1;
    if (8 < (short)local_24) {
      *param_4 = (short)param_1;
      *param_5 = (short)param_2;
      *param_6 = param_3;
      return 0;
    }
  } while( true );
}

