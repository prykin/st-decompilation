#include "../../pseudocode_runtime.h"


undefined4 FUN_004d73b0(char param_1)

{
  int iVar1;
  DArrayTy *array;

  array = (DArrayTy *)&g_playerRuntime[param_1].field_0x7ee;
  memset(&g_playerRuntime[param_1].field1706_0x7da, 0, 0x198); /* compiler bulk-zero initialization */
  iVar1 = 6;
  do {
    array[-1].count = 100;
    Library::DKW::TBL::DArrayCreate(array,10,0x14,10);
    array = (DArrayTy *)&array[2].iteratorIndex;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

