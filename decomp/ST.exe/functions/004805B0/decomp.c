#include "../../pseudocode_runtime.h"


int __thiscall FUN_004805b0(void *this,int *param_1)

{
  int iVar2;
  int local_EAX_17;
  int iVar1;

  iVar2 = STField<int>(this,0x6ef);
  if (iVar2 == 0) {
    /* ST_CALLSITE[004805C1]: CALL 0x00403f85; direct=00403F85 STBoatC::BackLoadObj */
    local_EAX_17 = STBoatC::BackLoadObj(this,param_1);
    return local_EAX_17;
  }
  if (iVar2 == 1) {
    return 0;
  }
  if (iVar2 == 2) {
    /* ST_CALLSITE[004805DE]: CALL 0x0040399a; direct=0040399A STBoatC::BackUnLoadObj */
    iVar1 = STBoatC::BackUnLoadObj(this,param_1);
    return iVar1;
  }
  return 2;
}

