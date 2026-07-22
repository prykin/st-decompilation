
/* [STObjectFactoryApplier] Central object factory for 0x0002 (ST_OBJECT_TYPE_0002).
   Evidence: exact registry pointer; create function first */

ButtonClassTy * __cdecl CreateButton(void)

{
  ButtonClassTy *pBVar1;

  pBVar1 = (ButtonClassTy *)FUN_006b04d0(0x1ec);
  if (pBVar1 != (ButtonClassTy *)0x0) {
    FUN_0072b700((undefined4 *)pBVar1);
    pBVar1->field_0000 = 0x79e288;
    *(undefined4 *)&pBVar1->field_0x1d4 = 1;
    *(undefined4 *)&pBVar1->field_0x174 = 0;
    return pBVar1;
  }
  return (ButtonClassTy *)0x0;
}

