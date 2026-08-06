#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 006D3D80 -> 006DAC70 @ 006D4097; literal 0 at 006D4087 | 006D3D80 -> 006DAC70 @
   006D4178; literal 0 at 006D416E */

void FUN_006dac70(undefined1 *param_1,int param_2,byte *param_3,int param_4,byte param_5,int param_6
                 ,int param_7,byte param_8)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;

  iVar1 = param_4 + 7;
  if (0 < param_7) {
    do {
      uVar3 = 0x80 >> (param_5 & 7) & 0xff;
      if (0 < param_6) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = param_6;
        pbVar4 = param_3;
        do {
          if ((*pbVar4 & (byte)uVar3) != 0) {
            *param_1 = param_8;
          }
          bVar2 = (byte)uVar3 >> 1;
          uVar3 = (uint)bVar2;
          if (bVar2 == 0) {
            uVar3 = 0x80;
            pbVar4 = pbVar4 + 1;
          }
          param_1 = param_1 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
      param_3 = param_3 + ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3);
      param_1 = param_1 + (param_2 - param_6);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  return;
}

