#include "../../pseudocode_runtime.h"


undefined4 FUN_004b6fc0(char param_1)

{
  DArrayTy *pDVar1;

  memset(&g_packedRecords_A62x8[param_1].field_0x97a, 0, 0x18); /* compiler bulk-zero initialization */
  pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x14,0xc,0x14);
  *(DArrayTy **)&g_packedRecords_A62x8[param_1].field_0x992 = pDVar1;
  return 0;
}

