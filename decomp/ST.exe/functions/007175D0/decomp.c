#include "../../pseudocode_runtime.h"


void FUN_007175d0(byte *param_1,int param_2,int param_3,byte param_4)

{
  byte *pbVar1;
  uint size;
  byte *pbVar3;

  size = param_2 * param_3;
  pbVar1 = Library::DKW::LIB::MemAlloc(size);
  pbVar3 = pbVar1;
  memmove(pbVar3, param_1, size); /* compiler REP MOVS byte copy */
  if (-1 < (int)(size - 1)) {
    do {
      if (param_4 < *pbVar1) {
        *pbVar1 = param_4;
      }
      pbVar1 = pbVar1 + 1;
      size = size - 1;
    } while (size != 0);
  }
  return;
}

