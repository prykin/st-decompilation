
void __fastcall FUN_0068e010(int param_1)

{
  AnonShape_00691480_E757992C *pAVar1;

  if (param_1 == 0) {
    pAVar1 = (AnonShape_00691480_E757992C *)0x0;
  }
  else {
    pAVar1 = (AnonShape_00691480_E757992C *)(param_1 + 0x20);
  }
  thunk_FUN_00691480(pAVar1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x130) != 0) {
    FreeAndNull((void **)(param_1 + 0x130));
  }
  return;
}

