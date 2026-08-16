#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006f85a0(undefined1 *param_1,int param_2,byte *param_3,int param_4,byte *param_5,
                 int param_6,int param_7,int param_8)

{
  byte bVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;

  if (-1 < param_7 + -1) {
    do {
      uVar2 = (uint)*param_5;
      auto param_5_after_write = param_5 + 1; /* compiler stack-slot lifetime split */
      iVar5 = param_6;
      if (uVar2 == 0) {
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
      }
      else {
        while( true ) {
          if ((uVar2 & 0x80) == 0) {
            uVar2 = uVar2 & 0x7f;
            iVar5 = iVar5 - uVar2;
            param_1 = param_1 + uVar2;
            param_3 = param_3 + uVar2;
          }
          else {
            uVar4 = uVar2 & 0x3f;
            iVar5 = iVar5 - uVar4;
            if ((uVar2 & 0x40) == 0) {
              if (-1 < (int)(uVar4 - 1)) {
                param_5_after_write = param_5_after_write + uVar4;
                puVar3 = param_1;
                do {
                  bVar1 = *param_3;
                  param_1 = puVar3 + 1;
                  param_3 = param_3 + 1;
                  uVar4 = uVar4 - 1;
                  *puVar3 = *(undefined1 *)((uint)bVar1 + param_8);
                  puVar3 = param_1;
                } while (uVar4 != 0);
              }
            }
            else {
              param_5_after_write = param_5_after_write + 1;
              puVar3 = param_1;
              if (-1 < (int)(uVar4 - 1)) {
                do {
                  bVar1 = *param_3;
                  param_1 = puVar3 + 1;
                  param_3 = param_3 + 1;
                  uVar4 = uVar4 - 1;
                  *puVar3 = *(undefined1 *)((uint)bVar1 + param_8);
                  puVar3 = param_1;
                } while (uVar4 != 0);
              }
            }
          }
          if (iVar5 < 1) break;
          uVar2 = (uint)*param_5_after_write;
          param_5_after_write = param_5_after_write + 1;
        }
        param_1 = param_1 + (param_2 - param_6);
        param_3 = param_3 + (param_4 - param_6);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  return;
}

