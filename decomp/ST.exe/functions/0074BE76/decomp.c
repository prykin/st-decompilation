#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0074be76(void *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 local_8;

  local_8 = 0;
  if (STField<int>(this,0x8c) == 0) {
    pvVar1 = (void *)Library::MSVCRT::FUN_0072e530(0xe0);
    if (pvVar1 == nullptr) {
      puVar2 = nullptr;
    }
    else {
      puVar2 = FUN_0074c38f(pvVar1,0,(int)this,&local_8,(char *)L"XForm In");
    }
    STField<undefined4 *>(this,0x8c) = puVar2;
    if (puVar2 == nullptr) {
      return 0;
    }
    pvVar1 = (void *)Library::MSVCRT::FUN_0072e530(0xa8);
    if (pvVar1 == nullptr) {
      puVar2 = nullptr;
    }
    else {
      puVar2 = FUN_0074c658(pvVar1,0,(int)this,&local_8,(char *)L"XForm Out");
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
  if (param_1 == 0) {
    return STField<undefined4>(this,0x8c);
  }
  if (param_1 != 1) {
    return 0;
  }
  return STField<undefined4>(this,0x90);
}

