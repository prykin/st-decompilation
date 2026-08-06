#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0065E925 MOV ECX,dword ptr [EBP + 0x8];
   first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0065E94F MOV ECX,dword ptr [EBP + 0xc];
   first-use mask */

undefined4 __cdecl FUN_0065e900(ushort param_1,ushort param_2,int param_3,int param_4)

{
  uint uVar1;

  if (param_4 != 0) {
    uVar1 = thunk_FUN_00423120(param_3);
    if ((uVar1 & 0x10) == 0) {
      *(undefined4 *)(param_4 + DAT_00811900 * 0x2c) = 1;
      *(uint *)(param_4 + 4 + DAT_00811900 * 0x2c) = (uint)param_1;
      *(int *)(param_4 + 0xc + DAT_00811900 * 0x2c) = param_3;
      *(uint *)(param_4 + 0x10 + DAT_00811900 * 0x2c) = (uint)param_2;
      DAT_00811900 = DAT_00811900 + 1;
    }
  }
  return 0;
}

