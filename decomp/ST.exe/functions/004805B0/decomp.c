#include "../../pseudocode_runtime.h"


int __thiscall FUN_004805b0(void *this,int *param_1)

{
  int iVar2;
  int local_EAX_17;
  int iVar1;

  iVar2 = STField<int>(this,0x6ef);
  if (iVar2 == 0) {
    local_EAX_17 = STBoatC::BackLoadObj(this,param_1);
    return local_EAX_17;
  }
  if (iVar2 == 1) {
    return 0;
  }
  if (iVar2 == 2) {
    iVar1 = STBoatC::BackUnLoadObj(this,param_1);
    return iVar1;
  }
  return 2;
}

