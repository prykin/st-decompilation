#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x0008 (ST_OBJECT_TYPE_0008).
   Evidence: exact registry pointer; create function first */

ViewerClassTy * __cdecl CreateViewer(void)

{
  ViewerClassTy *pVVar1;

  pVVar1 = (ViewerClassTy *)FUN_006b04d0(0x1f8);
  if (pVVar1 != nullptr) {
    FUN_0072b700((undefined4 *)pVVar1);
    pVVar1->field_0000 = &VTable_0079E298;
    *(undefined4 *)&pVVar1->field_0x1f0 = 0;
    *(undefined4 *)&pVVar1->field_0x1ec = 0;
    pVVar1->field_01B8 = 0;
    pVVar1->field_01B4 = 0;
    pVVar1->field_01C4 = 0;
    return pVVar1;
  }
  return nullptr;
}

