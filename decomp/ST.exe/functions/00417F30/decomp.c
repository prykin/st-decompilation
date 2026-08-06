#include "../../pseudocode_runtime.h"


bool __thiscall FUN_00417f30(void *this,short param_1,short param_2,short param_3)

{
  if (STGridAt3D(g_pathingGrid, param_1, param_2, param_3) < 0) {
    return false;
  }
  return STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects
         [STField<byte>(this,0x8e)] == nullptr;
}

