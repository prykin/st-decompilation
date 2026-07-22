
/* [STObjectFactoryApplier] Central object factory for 0x0007 (ST_OBJECT_TYPE_0007).
   Evidence: exact registry pointer; create function first */

ListClassTy * __cdecl CreateList(void)

{
  ListClassTy *pLVar1;

  pLVar1 = (ListClassTy *)FUN_006b04d0(0x20c);
  if (pLVar1 != (ListClassTy *)0x0) {
    FUN_0072b700((undefined4 *)pLVar1);
    pLVar1->field_01E8 = 0;
    pLVar1->field_01E4 = 0;
    pLVar1->field_01E0 = 0;
    pLVar1->field_01F8 = 0;
    pLVar1->field_0000 = 0x79e2a4;
    return pLVar1;
  }
  return (ListClassTy *)0x0;
}

