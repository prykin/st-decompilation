#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=16;
   incoming_edx_uses=6
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (3), none consume AL/AX, and every RET path defines full EAX; sites=00479600 @ 004797DA
   -> CMP CMP EAX,0x1 | 00479600 @ 00479B2B -> CMP CMP EAX,0x1 | 00479600 @ 00479D79 -> CMP CMP
   EAX,0x1 */

int __thiscall STBoatC::sub_004939B0(STBoatC *this,short *param_1,short *param_2,short *param_3)

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
      iVar5 = this->field_0639 + local_8;
      sVar7 = (short)iVar8;
      sVar2 = (short)local_8;
      if (((iVar5 == this->field_005B) && (this->field_063B + iVar8 == (int)this->field_005D)) &&
         (this->field_063D + 1 == (int)this->field_005F)) {
        *param_1 = this->field_0639 + sVar2;
        *param_2 = this->field_063B + sVar7;
        *param_3 = this->field_063D + 1;
        return 1;
      }
      sVar1 = this->field_063D + 1;
      sVar6 = sVar7 + this->field_063B;
      sVar3 = sVar2 + this->field_0639;
      if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
           ((sVar6 < 0 || ((g_worldGrid.sizeY <= sVar6 || (sVar1 < 0)))))) ||
          (g_worldGrid.sizeZ <= sVar1)) ||
         (STGridAt3D(g_worldGrid, sVar3, sVar6, sVar1).objects[0] == nullptr)) {
        iVar4 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,iVar5
                             ,this->field_063B + iVar8,this->field_063D + 1);
        if (iVar4 < local_c) {
          *param_1 = this->field_0639 + sVar2;
          *param_2 = sVar7 + this->field_063B;
          *param_3 = this->field_063D + 1;
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

