#include "../../pseudocode_runtime.h"


void __thiscall FUN_0069f5c0(void *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint local_EAX_14;
  uint uVar3;
  uint uVar2;
  uint *puVar4;

  uVar1 = param_3;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {
    local_EAX_14 = Library::MSVCRT::FUN_0072e6c0();
    uVar3 = local_EAX_14 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
  }
  else {
    uVar2 = Library::MSVCRT::FUN_0072e6c0();
    uVar3 = (int)uVar2 % 0xb;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = 0;
  puVar4 = thunk_FUN_00692c10(*(Global_sub_00692C10_param_1Enum *)(&DAT_007d7f90 + uVar3 * 8),
                              *(int *)(&DAT_007d7f94 + uVar3 * 8),&param_3,uVar1,0);
  puVar4[5] = param_1;
  puVar4[6] = param_2;
  CGenerate::sub_006A09F0(this,(byte *)puVar4,param_3);
  return;
}

