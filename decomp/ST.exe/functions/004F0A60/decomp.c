#include "../../pseudocode_runtime.h"


void __fastcall FUN_004f0a60(AnonShape_004F0A60_A5DE070F *param_1)

{
  undefined4 *puVar1;
  int iVar2;

  if (param_1->field_0292 != 0) {
    StartSystemTy::sub_006E56B0(param_1->field_000C,param_1->field_0292);
  }
  param_1->field_0292 = 0;
  if (param_1->field_027A != 0) {
    cMf32::RecMemFree(g_cMf32_00806790,(uint *)&param_1->field_027A);
  }
  puVar1 = (undefined4 *)&param_1->field_0x27e;
  iVar2 = 5;
  do {
    if ((DArrayTy *)*puVar1 != nullptr) {
      DArrayDestroy((DArrayTy *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  g_bldObjPanel_00801684 = nullptr;
  return;
}

