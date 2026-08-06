#include "../../pseudocode_runtime.h"


void __thiscall FUN_005b8f90(void *this,uint param_1)

{
  uint uVar1;
  byte bVar2;

  uVar1 = param_1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 != 0) && (param_1 = 0, STField<char>(this,0x9a) != '\0')) {
    do {
      if (*(char *)(param_1 + uVar1) != '\0') {
        *(undefined4 *)(param_1 * 0x1fb + 0xbc + (int)this) = 0;
      }
      bVar2 = (char)param_1 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (uint)bVar2;
    } while (bVar2 < STField<byte>(this,0x9a));
  }
  return;
}

