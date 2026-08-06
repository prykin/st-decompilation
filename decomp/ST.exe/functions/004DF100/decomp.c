#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004df100(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1974_0x9ee == nullptr) {
    local_8 = param_1;
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1974_0x9ee = pDVar1;
  }
  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  Library::DKW::TBL::DArrayAppend
            (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1974_0x9ee,&local_8);
  return 0;
}

