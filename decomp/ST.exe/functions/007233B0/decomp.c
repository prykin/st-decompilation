#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0006 (ST_OBJECT_TYPE_0006).
   Evidence: exact registry pointer; create function first */

EditorClassTy * __cdecl CreateEditor(void)

{
  EditorClassTy *pEVar1;

  pEVar1 = (EditorClassTy *)FUN_006b04d0(0x218);
  if (pEVar1 != nullptr) {
    pEVar1 = EditorClassTy::EditorClassTy(pEVar1);
    return pEVar1;
  }
  return nullptr;
}

