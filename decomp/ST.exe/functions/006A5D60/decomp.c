#include "../../pseudocode_runtime.h"


void __cdecl FUN_006a5d60(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined **ppuVar3;

  if (param_1 != 0) {
    ppuVar3 = &PTR_DAT_007ec188;
    do {
      iVar2 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,(byte *)"%ld bytes in %ld %hs Blocks.\n")
      ;
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

