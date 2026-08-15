#include "../../pseudocode_runtime.h"


bool __fastcall FUN_004b7de0(int *param_1)

{
  int iVar1;

  iVar1 = param_1[0x134];
  if (iVar1 == 2) {
    param_1[0x134] = 3;
    TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0x90))(3,0x3cc);
  }
  return iVar1 == 2;
}

