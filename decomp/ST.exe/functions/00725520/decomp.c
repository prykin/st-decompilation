
/* [STObjectFactoryApplier] Central object factory for 0x0003 (ST_OBJECT_TYPE_0003).
   Evidence: exact registry pointer; create function first */

TrackbarClassTy * __cdecl CreateTrackbar(void)

{
  TrackbarClassTy *pTVar1;

  pTVar1 = (TrackbarClassTy *)FUN_006b04d0(0x19c);
  if (pTVar1 != (TrackbarClassTy *)0x0) {
    FUN_0072b700((undefined4 *)pTVar1);
    pTVar1->field_0000 = 0x79e2cc;
    pTVar1->field_0134 = 0;
    return pTVar1;
  }
  return (TrackbarClassTy *)0x0;
}

