#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=00604826 dereference: MOV EAX,dword ptr [EBX +
   0x269] | 00604837 dereference: MOV ECX,dword ptr [ESI] | 00604844 dereference: MOV EAX,dword ptr
   [EBX + 0x269] */

void __fastcall FUN_00604820(RecoveredRecord_00604820_51E8C765 *param_1)

{
  uint *puVar1;
  int iVar2;

  iVar2 = 0;
  if (0 < param_1->field_0269) {
    puVar1 = (undefined4 *)&param_1->field_0x219;
    do {
      if ((STParticleC *)*puVar1 != nullptr) {
        /* ST_CALLSITE[0060483F]: CALL 0x004058d0; direct=004058D0 STParticleC::sub_00629E60 */
        STParticleC::sub_00629E60((STParticleC *)*puVar1,1);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < param_1->field_0269);
  }
  return;
}

