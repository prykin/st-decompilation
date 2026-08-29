#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 0065746A
   -> TEST TEST EAX,EAX
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=4, scalar_uses=0; sites=006511EA dereference: CMP byte ptr [ECX + EAX*0x1 +
   0xd0],DL | 00651200 dereference: CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL | 0065120F dereference:
   MOV EAX,dword ptr [ECX + 0x14] | 0065121A dereference: MOV EDX,dword ptr [ECX + 0x10] */

int __cdecl FUN_006511e0(RecoveredRecord_006511E0_D143FD4C *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if (*(char *)((int)&param_1[8].field_0010 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 3;
  do {
    if (*(char *)((int)&param_1[8].field_0010 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (param_1->field_0014 == 0) {
    return 0;
  }
  return (uint)(-1 < param_1->field_0010);
}

