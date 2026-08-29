#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 0065490E
   -> TEST TEST EAX,EAX
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=0064F47B dereference: CMP byte ptr [ECX + EAX*0x1 +
   0xd0],DL | 0064F48A dereference: MOV EDX,dword ptr [ECX + 0x10] | 0064F49B dereference: MOV
   EBX,dword ptr [ECX + 0x14] */

int __cdecl FUN_0064f470(RecoveredRecord_0064F470_8E2B40ED *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if (*(char *)((int)&param_1[8].field_0010 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (2 < param_1->field_0010) {
    return 0;
  }
  return (uint)(param_1->field_0014 < 3);
}

