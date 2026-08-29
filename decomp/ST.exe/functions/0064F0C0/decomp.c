#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00653F20
   -> TEST TEST EAX,EAX
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=0064F0CA dereference: CMP byte ptr [ECX + EAX*0x1 +
   0xd0],DL | 0064F0E0 dereference: CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL | 0064F0EF dereference:
   MOV EDX,dword ptr [ECX + 0x10] */

int __cdecl FUN_0064f0c0(RecoveredRecord_0064F0C0_EC627629 *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1[10].field_0x8)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 2;
  do {
    if ((&param_1[10].field_0x8)[iVar1] != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return (uint)(param_1->field_0010 != 0);
}

