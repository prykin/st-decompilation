#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] CONTEXTUAL_GENERATED_RECORD.
   Evidence: one script-owned pointer shape is used only by functions with one unique class-owner
   context; promote its stable machine layout to a generated owner-qualified record name */

int FUN_006c7d20(RecoveredRecord_FSGSTy_006C7D20 *param_1,int param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  byte *puVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;

  uVar2 = Library::DKW::GPC::FUN_006d80c0(param_1);
  if ((uVar2 != 0) && (uVar2 != 0xffffffff)) {
    return 0;
  }
  cVar1 = param_1->field_0019;
  iVar6 = param_1->field_002A;
  if (iVar6 == 0) {
    cVar1 = param_1->field_0010;
    iVar6 = param_1->field_0012;
  }
  iVar5 = 1 << (cVar1 + 1U & 0x1f);
  if (param_2 == 0) {
    param_2 = (int)Library::DKW::LIB::MemAlloc(iVar5 * 4);
    if ((void *)param_2 == nullptr) {
      return 0;
    }
  }
  if (0 < iVar5) {
    puVar3 = (undefined1 *)(param_2 + 2);
    puVar4 = (undefined1 *)(iVar6 + 2);
    iVar6 = iVar5;
    do {
      puVar3[-2] = puVar4[-2];
      puVar3[-1] = puVar4[-1];
      *puVar3 = *puVar4;
      puVar3[1] = 0;
      puVar3 = puVar3 + 4;
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + 3;
    } while (iVar6 != 0);
  }
  if (param_3 != nullptr) {
    *param_3 = iVar5;
  }
  return param_2;
}

