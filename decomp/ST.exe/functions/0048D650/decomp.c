#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0048D650 parameter used as this of STFishC::sub_004162B0 @ 0048D671
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=00465C60 @ 00468124
   -> CMP CMP EAX,0x1 | 00465C60 @ 004682DC -> CMP CMP EAX,0x1 */

int __thiscall FUN_0048d650(void *this,STFishC *param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int local_14;
  int local_10;
  short local_c [2];
  short local_8 [2];

  local_14 = 1000000;
  /* ST_CALLSITE[0048D671]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
  STFishC::sub_004162B0(param_1,(short *)&param_1,local_8,local_c);
  local_10 = 0;
  do {
    iVar5 = 0;
    do {
      sVar4 = local_8[0] + (short)iVar5;
      sVar3 = local_c[0] + 1;
      sVar1 = (short)param_1 + (short)local_10;
      if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar4 < 0)) ||
         (((g_worldGrid.sizeY <= sVar4 || (sVar3 < 0)) ||
          ((g_worldGrid.sizeZ <= sVar3 ||
           (STGridAt3D(g_worldGrid, sVar1, sVar4, sVar3).objects[0] == nullptr)))))) {
        iVar2 = FUN_006aadd0((int)STField<short>(this,0x47),(int)STField<short>(this,0x49),
                             (int)STField<short>(this,0x4b),(short)param_1 + local_10,
                             local_8[0] + iVar5,local_c[0] + 1);
        if (iVar2 < local_14) {
          STField<short>(this,0x4c5) = (short)local_10 + (short)param_1;
          STField<short>(this,0x4c7) = (short)iVar5 + local_8[0];
          STField<short>(this,0x4c9) = local_c[0] + 1;
          local_14 = iVar2;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    local_10 = local_10 + 1;
  } while (local_10 < 2);
  return (uint)(local_14 != 1000000);
}

