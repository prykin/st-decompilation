
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

short * __cdecl FUN_0067bba0(DArrayTy *param_1,uint param_2)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  uVar1 = param_1->count;
  if (0 < (int)uVar1) {
    bVar4 = uVar1 != 0;
    do {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_1, uVar3) (runtime stride) */
      if ((((bVar4) &&
           (psVar2 = (short *)(param_1->elementSize * uVar3 + (int)param_1->data),
           psVar2 != (short *)0x0)) && (*psVar2 != 0)) &&
         ((*(int *)(psVar2 + 6) < 0 && ((*(uint *)(psVar2 + 4) & param_2) != 0)))) {
        return psVar2;
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < uVar1;
    } while ((int)uVar3 < (int)uVar1);
  }
  return (short *)0x0;
}

