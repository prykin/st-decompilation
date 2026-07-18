
void __cdecl FUN_006a5d60(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined **ppuVar3;
  
  if (param_1 != 0) {
    ppuVar3 = &PTR_DAT_007ec188;
    do {
      iVar2 = FUN_00730fa0(0,0,0,0,(byte *)s__ld_bytes_in__ld__hs_Blocks__007ecafc);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ppuVar3 = ppuVar3 + 1;
    } while ((int)ppuVar3 < 0x7ec19c);
    iVar2 = FUN_00730fa0(0,0,0,0,(byte *)s_Largest_number_used___ld_bytes__007ecad4);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = FUN_00730fa0(0,0,0,0,(byte *)s_Total_allocations___ld_bytes__007ecaac);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

