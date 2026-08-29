#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=4, scalar_uses=0; sites=0064EAAB dereference: CMP byte ptr [ECX + EAX*0x1 +
   0xd0],BL | 0064EAC1 dereference: CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL | 0064EAD5 dereference:
   CMP byte ptr [ECX + EAX*0x1 + 0xd0],BL | 0064EAE4 dereference: MOV ECX,dword ptr [ECX + 0x8] */

undefined4 __cdecl FUN_0064eaa0(RecoveredRecord_0064EAA0_C5553866 *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1[0x11].field_0x4)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  iVar1 = 1;
  do {
    if ((&param_1[0x11].field_0x4)[iVar1] != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 2;
  do {
    if ((&param_1[0x11].field_0x4)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if ((-1 < param_1->field_0008) && (param_1->field_0008 < 4)) {
    return 1;
  }
  return 0;
}

