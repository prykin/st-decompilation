#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0046B100 -> 0048DCF0 @ 0046B225; STBoatC::Build this; stable alias ESI | 0046B100 ->
   0048DCF0 @ 0046B37D; STBoatC::Build this; stable alias ESI */

bool __fastcall FUN_0048dcf0(STBoatC *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;

  local_c = 1000000;
  sVar1 = param_1->field_04DD;
  sVar3 = param_1->field_04DF;
  sVar2 = param_1->field_04E1 + 1;
  param_1->field_04FC = sVar1;
  param_1->field_04FE = sVar3;
  param_1->field_0500 = sVar2;
  if (param_1->field_0502 == 1) {
    local_8 = 0;
    do {
      iVar5 = 0;
      do {
        sVar1 = param_1->field_04E1 + 1;
        sVar2 = (short)iVar5 + param_1->field_04DF;
        sVar3 = param_1->field_04DD + (short)local_8;
        if ((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
            ((sVar2 < 0 ||
             (((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))))) ||
           (STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[0] == nullptr)) {
          iVar4 = FUN_006aadd0((int)param_1->field_0047,(int)param_1->field_0049,
                               (int)param_1->field_004B,param_1->field_04DD + local_8,
                               param_1->field_04DF + iVar5,param_1->field_04E1 + 1);
          if (iVar4 < local_c) {
            param_1->field_04FC = (short)local_8 + param_1->field_04DD;
            param_1->field_04FE = (short)iVar5 + param_1->field_04DF;
            param_1->field_0500 = param_1->field_04E1 + 1;
            local_c = iVar4;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
      local_8 = local_8 + 1;
    } while (local_8 < 2);
    return local_c != 1000000;
  }
  if ((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar3)) &&
     (((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)) &&
      ((sVar2 < g_worldGrid.sizeZ &&
       (STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0] != nullptr)))))) {
    return false;
  }
  return true;
}

