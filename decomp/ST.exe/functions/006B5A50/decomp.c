#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004FF380 -> 006B5A50 @ 004FF5A6; /CPanelTy+0xb4b */

uint __fastcall FUN_006b5a50(DArrayTy *param_1,AnonShape_006B5A50_BD82F60D *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  if ((param_1 == nullptr) || (param_2 == nullptr)) {
    return 0xffffffcc;
  }
  if (param_1->elementSize != param_2->field_0008) {
    return 0xffffffce;
  }
  if (param_1->count != param_2->field_000C) {
    return 2;
  }
  iVar1 = param_1->count * param_1->elementSize;
  bVar4 = true;
  pcVar2 = param_1->data;
  pcVar3 = param_2->field_001C;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  return (uint)!bVar4;
}

