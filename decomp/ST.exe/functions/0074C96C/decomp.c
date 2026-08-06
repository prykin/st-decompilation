#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0074c96c(void *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_8;

  local_8 = 0;
  if (STField<int>(this,0x8c) == 0) {
    pvVar1 = (void *)Library::MSVCRT::FUN_0072e530(0xe8);
    if (pvVar1 == nullptr) {
      puVar2 = nullptr;
    }
    else {
      puVar2 = FUN_0074cdc5(pvVar1,0,(int)this,&local_8,(char *)"Input");
    }
    STField<undefined4 *>(this,0x8c) = puVar2;
    if (puVar2 == nullptr) goto LAB_0074c9fe;
  }
  if (STField<int>(this,0x90) == 0) {
    pvVar1 = (void *)Library::MSVCRT::FUN_0072e530(0xb0);
    if (pvVar1 == nullptr) {
      puVar2 = nullptr;
    }
    else {
      puVar2 = FUN_0074cfc0(pvVar1,0,(int)this,&local_8,(char *)"Output");
    }
    STField<undefined4 *>(this,0x90) = puVar2;
    if (puVar2 == nullptr) {
      if (STField<int *>(this,0x8c) != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*STField<int *>(this,0x8c) + 0xc))(1);
      }
      STField<undefined4>(this,0x8c) = 0;
    }
  }
LAB_0074c9fe:
  if (param_1 == 0) {
    uVar3 = STField<undefined4>(this,0x8c);
  }
  else if (param_1 == 1) {
    uVar3 = STField<undefined4>(this,0x90);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

