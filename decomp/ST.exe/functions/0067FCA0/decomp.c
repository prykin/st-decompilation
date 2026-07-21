
int __cdecl FUN_0067fca0(uint param_1)

{
  int *piVar1;
  int iVar2;

  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_00848a38, param_1) (runtime stride) */
  if (((PTR_00848a38->count <= param_1) ||
      (piVar1 = (int *)(PTR_00848a38->elementSize * param_1 + (int)PTR_00848a38->data),
      piVar1 == (int *)0x0)) || (iVar2 = *piVar1, iVar2 == 0)) {
    iVar2 = 0;
  }
  return iVar2;
}

