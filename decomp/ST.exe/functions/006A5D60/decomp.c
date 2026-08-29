#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=4, scalar_uses=0; sites=006A5D77 dereference: MOV ECX,dword ptr [ESI +
   -0x14] | 006A5D7A dereference: MOV EDX,dword ptr [ESI] | 006A5DA8 dereference: MOV EAX,dword ptr
   [EBX + 0x2c] | 006A5DC9 dereference: MOV ECX,dword ptr [EBX + 0x30] */

void __cdecl FUN_006a5d60(void *param_1)

{
  int iVar2;
  undefined **ppuVar3;

  if (param_1 != nullptr) {
    ppuVar3 = &PTR_DAT_007ec188;
    do {

      iVar2 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,(byte *)"%ld bytes in %ld %hs Blocks.\n");
      if (iVar2 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      ppuVar3 = ppuVar3 + 1;
    } while ((int)ppuVar3 < 0x7ec19c);

    iVar2 = Library::MSVCRT::FUN_00730fa0
                      (0,0,0,0,(byte *)"Largest number used: %ld bytes.\n");
    if (iVar2 == 1) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }

    iVar2 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,(byte *)"Total allocations: %ld bytes.\n");
    if (iVar2 == 1) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return;
}

