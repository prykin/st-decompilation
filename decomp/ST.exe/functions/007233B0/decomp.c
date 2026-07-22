
/* [STObjectFactoryApplier] Central object factory for 0x0006 (ST_OBJECT_TYPE_0006).
   Evidence: exact registry pointer; create function first */

EditorClassTy * __cdecl CreateEditor(void)

{
  EditorClassTy *pEVar1;

  pEVar1 = (EditorClassTy *)FUN_006b04d0(0x218);
  if (pEVar1 != (EditorClassTy *)0x0) {
    FUN_0072b700((undefined4 *)pEVar1);
    pEVar1->field_0000 = &VTable_0079E2B4;
    pEVar1->field_0200 = 0;
    pEVar1->field_01FC = 0;
    return pEVar1;
  }
  return (EditorClassTy *)0x0;
}

