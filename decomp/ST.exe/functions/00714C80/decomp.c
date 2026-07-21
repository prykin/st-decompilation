
undefined4 __fastcall FUN_00714c80(int *param_1)

{
  undefined4 uVar1;
  AnonShape_007109F0_BD33A2FF local_50;

  uVar1 = 0;
  if ((param_1[0x16] != 0) && ((ccFntTy *)*param_1 != (ccFntTy *)0x0)) {
    ccFntTy::Save((ccFntTy *)*param_1,(undefined4 *)&local_50);
    FUN_007109f0((void *)*param_1,(AnonShape_007109F0_BD33A2FF *)(param_1 + 4));
    if (&stack0x00000000 != (undefined1 *)0x8) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar1 = *(undefined4 *)(*param_1 + 0x72);
    }
    FUN_007109f0((void *)*param_1,&local_50);
    return uVar1;
  }
  return 0;
}

