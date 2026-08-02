#include "../../pseudocode_runtime.h"


int __fastcall FUN_005fd850(AnonShape_005FD850_1F07DA54 *param_1)

{
  byte *puVar1;
  AnonShape_004AB810_8E5693D5 *pAVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar7;
  int iVar8;
  int local_8;

  iVar7 = 0;
  iVar4 = -1;
  local_8 = -1;
  if (param_1->field_0226 != 0) {
    puVar1 = (byte *)(Library::DKW::LIB::MemAlloc(param_1->field_0226 * 0x52));
    param_1->field_0233 = puVar1;
    local_8 = 0;
    uVar5 = param_1->field_0226 * 0x52;
    memset(puVar1, 0, uVar5); /* compiler bulk-zero initialization */
    iVar4 = 0;
  }
  if (((param_1->field_0233 != 0) && (param_1->field_0232 != '\0')) &&
     (iVar8 = 0, 0 < param_1->field_0226)) {
    do {
      pAVar2 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
      if (pAVar2 == nullptr) {
        uVar3 = 0;
      }
      else {
        uVar3 = thunk_FUN_004ab810(pAVar2);
      }
      iVar7 = iVar7 + 0x52;
      *(undefined4 *)(param_1->field_0233 + -0x10 + iVar7) = uVar3;
      local_8 = local_8 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1->field_0226);
    return local_8;
  }
  return iVar4;
}

