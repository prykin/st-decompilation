
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9C4>00405916

   [STObjectFactoryApplier] Central object factory for 0x0402 (ST_OBJECT_TYPE_0402).
   Evidence: registry[84] at 007CA9C0 stores type 0x0402 and executable pointer 00405916; allocation
   size 1794 has no unique current class-layout match */

void * __cdecl FUN_0067cf00(void)

{
  AiPlrClassTy *pAVar1;

  pAVar1 = (AiPlrClassTy *)FUN_006b04d0(0x702);
  if (pAVar1 != (AiPlrClassTy *)0x0) {
    pAVar1 = AiPlrClassTy::AiPlrClassTy(pAVar1);
    return pAVar1;
  }
  return (void *)0x0;
}

