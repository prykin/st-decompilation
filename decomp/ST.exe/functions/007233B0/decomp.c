#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0006 (ST_OBJECT_TYPE_0006).
   Evidence: exact registry pointer; create function first */

EditorClassTy * __cdecl CreateEditor(void)

{
  undefined4 *puVar1;
  EditorClassTy *pEVar2;

  puVar1 = FUN_006b04d0(0x218);
  if (puVar1 != nullptr) {
    pEVar2 = (EditorClassTy *)FUN_007209b0(puVar1);
    return pEVar2;
  }
  return nullptr;
}

