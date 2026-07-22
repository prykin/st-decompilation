
void __fastcall FUN_00604820(int param_1)

{
  undefined4 *puVar1;
  int iVar2;

  iVar2 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x269)) {
    puVar1 = (undefined4 *)(param_1 + 0x219);
    do {
      if ((STParticleC *)*puVar1 != (STParticleC *)0x0) {
        STParticleC::sub_00629E60((STParticleC *)*puVar1,1);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while (iVar2 < *(int *)(param_1 + 0x269));
  }
  return;
}

