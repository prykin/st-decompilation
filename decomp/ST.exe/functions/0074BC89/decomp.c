#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0074BC6A -> 0074BC89 @ 0074BC7E

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void FUN_0074bc89(AnonShape_0074BC89_92881050 *param_1,undefined4 *param_2)

{
  int *piVar1;
  byte *puVar2;
  int iVar3;
  uint uVar5;
  byte *puVar6;
  AnonShape_0074BC89_92881050 *pAVar7;

  puVar2 = (byte *)(param_2);
  pAVar7 = param_1;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pAVar7 = *puVar2;
    puVar2 = (byte *)(puVar2 + 1);
    pAVar7 = (AnonShape_0074BC89_92881050 *)&pAVar7->field_0x4;
  }
  if (param_2[0x10] != 0) {
    /* ST_CALLSITE[0074BCA5]: CALL dword ptr [0x0085c0d8] */
    puVar2 = (byte *)(CoTaskMemAlloc(param_2[0x10]));
    param_1->field_0044 = puVar2;
    if (puVar2 == nullptr) {
      param_1->field_0040 = 0;
    }
    else {
      uVar5 = param_1->field_0040;
      puVar6 = (byte *)param_2[0x11];
      memmove(puVar2, puVar6, uVar5); /* compiler REP MOVS byte copy */
    }
  }
  piVar1 = param_1->field_003C;
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[0074BCDB]: CALL dword ptr [EAX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return;
}

