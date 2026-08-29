#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=12,
   ignored=0, unknown=0 */

int __thiscall STBoatC::sub_00490570(STBoatC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;

  sVar1 = this->field_004B;
  if (sVar1 < 1) {
    sVar2 = this->field_0049;
    sVar3 = this->field_0047;
    if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar2 < 0)) ||
        ((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)))) ||
       ((g_worldGrid.sizeZ <= sVar1 ||
        (STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[1] == nullptr)))) {
      return 0;
    }
  }
  else {
    sVar2 = this->field_0047;
    sVar3 = this->field_0049;
    if (((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar3 < 0)) ||
        (((g_worldGrid.sizeY <= sVar3 || (sVar1 < 0)) ||
         ((g_worldGrid.sizeZ <= sVar1 ||
          (STGridAt3D(g_worldGrid, sVar2, sVar3, sVar1).objects[1] == nullptr)))))) &&
       ((sVar4 = sVar1 + -1, sVar2 < 0 ||
        ((((g_worldGrid.sizeX <= sVar2 || (sVar3 < 0)) ||
          ((g_worldGrid.sizeY <= sVar3 ||
           ((((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)) ||
             (STGridAt3D(g_worldGrid, sVar2, sVar3, sVar4).objects[0] == nullptr)) ||
            (STGridAt3D(g_pathingGrid, sVar2, sVar3, sVar1 + -1) == 0)))))) &&
         (((((sVar2 < 0 || (g_worldGrid.sizeX <= sVar2)) || (sVar3 < 0)) ||
           ((g_worldGrid.sizeY <= sVar3 || (sVar4 < 0)))) ||
          ((g_worldGrid.sizeZ <= sVar4 ||
           (STGridAt3D(g_worldGrid, sVar2, sVar3, sVar4).objects[1] == nullptr)))))))))) {
      return 0;
    }
  }
  return 1;
}

