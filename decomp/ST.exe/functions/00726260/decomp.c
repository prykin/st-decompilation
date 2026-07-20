
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00709A10 -> 00726260 @ 00709A5F */

void __cdecl FUN_00726260(uint *param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  psVar1 = (short *)*param_1;
  if (psVar1 != (short *)0x0) {
    iVar2 = 0;
    if (0 < (int)psVar1[1] * (int)*psVar1) {
      iVar3 = 0;
      do {
        cMf32::RecMemFree(*(cMf32 **)(psVar1 + 4),(uint *)(iVar3 + 0x12 + (int)psVar1));
        psVar1 = (short *)*param_1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 10;
      } while (iVar2 < (int)psVar1[1] * (int)*psVar1);
    }
    FUN_006ab060((LPVOID *)param_1);
  }
  return;
}

