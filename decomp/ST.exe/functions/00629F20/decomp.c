#include "../../pseudocode_runtime.h"


void __fastcall FUN_00629f20(int param_1)

{
  int iVar1;
  int local_8;

  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = FUN_006e62d0(g_playSystem_00802A38,*(int *)(param_1 + 0xe7),&local_8);
  if (iVar1 != -4) {
    *(int *)(param_1 + 0xeb) = local_8;
    return;
  }
  memset((void *)(param_1 + 0xd7), 0, 0x2d); /* compiler bulk-zero initialization */
  return;
}

