#include "../../pseudocode_runtime.h"


int __thiscall FUN_006e8aa0(void *this,uint *param_1,uint param_2)

{
  int iVar1;
  int iVar1_mg0;

  iVar1_mg0 = ST3DSMAPContext::sub_006E8660(this,(int *)param_1,0,0,0,0,0,0,0);
  if (iVar1_mg0 == 0) {
    iVar1 = STField<int>(this,0x31c) + *param_1 * 0x114;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x1004;
    Library::Ourlib::ST3DSMAP::FUN_006e8b00(this,*param_1,param_2);
    iVar1_mg0 = 0;
  }
  return iVar1_mg0;
}

