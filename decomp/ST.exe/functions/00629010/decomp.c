#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] pointer_return_element_width target=return:-1: return=/uint *32
   Evidence: generic returned address is dereferenced with one consistent machine width across
   callers; width=4, sites=006041A0 @ 006041EA MOV dword ptr [EAX + 0xce],EBX | 00604EE0 @ 00604F2E
   MOV dword ptr [EAX + 0xce],EBX */

uint * FUN_00629010(void)

{
  RecoveredRecord_00629040_09AFDC96 *pRVar1;

  /* ST_CALLSITE[00629015]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00629040_09AFDC96; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00629040_09AFDC96;/uint */
  pRVar1 = Library::MSVCRT::FUN_0072e530(0x108);
  if (pRVar1 != nullptr) {
    pRVar1 = thunk_FUN_00629040(pRVar1);
    return (uint *)pRVar1;
  }
  return nullptr;
}

