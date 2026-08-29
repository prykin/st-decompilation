#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0006 (ST_OBJECT_TYPE_0006).
   Evidence: exact registry pointer; create function first */

EditorClassTy * __cdecl CreateEditor(void)

{
  EditorClassTy *pEVar1;

  /* ST_CALLSITE[007233B5]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/EditorClassTy; signature=__stdcall;pointer:/EditorClassTy;/uint */
  pEVar1 = FUN_006b04d0(0x218);
  if (pEVar1 != nullptr) {
    pEVar1 = EditorClassTy::EditorClassTy(pEVar1);
    return pEVar1;
  }
  return nullptr;
}

