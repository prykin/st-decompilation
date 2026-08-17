#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STResourceC.
   Evidence: this_call_owners=[STResourceC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0 */

void __thiscall STResourceC::sub_005802A0(STResourceC *this,int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  AnonShape_004E0250_5A3B9236 *pAVar4;

  /* ST_CALLSITE[005802B0]: CALL 0x00402973; direct=00402973 STResourceC::SetResource */
  SetResource(this,param_1,param_2);
  if (this->field_025D == 1) {
    sVar1 = this->field_0245;
    sVar2 = this->field_024D;
    sVar3 = this->field_0249;
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
       (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))) {
      pAVar4 = nullptr;
    }
    else {
      pAVar4 = (AnonShape_004E0250_5A3B9236 *)
               STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    if (pAVar4->field_0018 == this->field_0269) {
      thunk_FUN_004e0250(pAVar4);
    }
  }
  return;
}

