#include "../../pseudocode_runtime.h"


void __fastcall FUN_0060a940(AnonShape_0060A940_933574B2 *param_1)

{
  AnonNested_0060A940_0234_EAD23A7B *pAVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  iVar2 = 0;
  if (param_1->field_0234 != nullptr) {
    iVar2 = param_1->field_0234->field_000C;
  }
  uVar4 = 0;
  if (0 < iVar2) {
    do {
      pAVar1 = param_1->field_0234;
      if (((uVar4 < (uint)pAVar1->field_000C) &&
          (iVar3 = pAVar1->field_0008 * uVar4 + pAVar1->field_001C, iVar3 != 0)) &&
         (-1 < (int)STField<uint>(iVar3,0x3C))) {
        Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,STField<uint>(iVar3,0x3C));
        STField<undefined4>(iVar3,0x3C) = 0xffffffff;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar2);
  }
  return;
}

