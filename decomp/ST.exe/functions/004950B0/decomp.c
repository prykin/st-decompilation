#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (3), none consume AL/AX, and every RET path defines full EAX; sites=0047C050 @ 0047C197
   -> CMP CMP EAX,0x1 | 0047C050 @ 0047C3E8 -> CMP CMP EAX,0x1 | 0047C050 @ 0047C5C3 -> CMP CMP
   EAX,0x1 */

int __thiscall FUN_004950b0(void *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar5;
  int iVar4;
  short sVar6;
  short sVar7;
  int iVar8;
  int local_c;
  int local_8;

  local_c = 1000000;
  local_8 = 0;
  do {
    iVar8 = 0;
    do {
      iVar5 = STField<short>(this,0x66f) + local_8;
      sVar7 = (short)iVar8;
      sVar2 = (short)local_8;
      if (((iVar5 == STField<short>(this,0x5b)) &&
          (STField<short>(this,0x671) + iVar8 == (int)STField<short>(this,0x5d))) &&
         (STField<short>(this,0x673) + 1 == (int)STField<short>(this,0x5f))) {
        *param_1 = STField<short>(this,0x66f) + sVar2;
        *param_2 = STField<short>(this,0x671) + sVar7;
        *param_3 = STField<short>(this,0x673) + 1;
        return 1;
      }
      sVar1 = STField<short>(this,0x673) + 1;
      sVar6 = sVar7 + STField<short>(this,0x671);
      sVar3 = sVar2 + STField<short>(this,0x66f);
      if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
           ((sVar6 < 0 || ((g_worldGrid.sizeY <= sVar6 || (sVar1 < 0)))))) ||
          (g_worldGrid.sizeZ <= sVar1)) ||
         (STGridAt3D(g_worldGrid, sVar3, sVar6, sVar1).objects[0] == nullptr)) {
        iVar4 = FUN_006aadd0((int)STField<short>(this,0x47),(int)STField<short>(this,0x49),
                             (int)STField<short>(this,0x4b),iVar5,
                             STField<short>(this,0x671) + iVar8,STField<short>(this,0x673) + 1
                            );
        if (iVar4 < local_c) {
          *param_1 = STField<short>(this,0x66f) + sVar2;
          *param_2 = sVar7 + STField<short>(this,0x671);
          *param_3 = STField<short>(this,0x673) + 1;
          local_c = iVar4;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
    local_8 = local_8 + 1;
    if (1 < local_8) {
      return (uint)(local_c != 1000000);
    }
  } while( true );
}

