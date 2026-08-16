#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0047BF70 -> 00493BC0 @ 0047BFA4; STBoatC::BackTeleport this; stable alias ESI

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __fastcall FUN_00493bc0(STBoatC *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this;
  int iVar4;

  if ((param_1->field_045D == CASE_15) || (param_1->field_0459 == CASE_79)) {
    sVar1 = param_1->field_0639;
    sVar2 = param_1->field_063D;
    sVar3 = param_1->field_063B;
    if (((-1 < sVar1) &&
        (((sVar1 < g_worldGrid.sizeX && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeY)))) &&
       ((-1 < sVar2 && (sVar2 < g_worldGrid.sizeZ)))) {
      this = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
      if ((this != nullptr) && (*(int *)&this->field_0x18 == param_1->field_063F)) {
        iVar4 = (*this->vtable[5].slots_00_28[2])(this);
        if (iVar4 != 0) {
          thunk_FUN_004e95c0(this,param_1);
        }
      }
    }
  }
  return;
}

