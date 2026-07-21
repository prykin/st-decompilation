
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall FUN_006acc95(uint param_1)

{
  int in_EAX;
  uint uVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_1 * in_EAX + *(int *)(unaff_EDI + 0x1c));
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  for (uVar1 = param_1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = param_1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return;
}

