#include "../../pseudocode_runtime.h"


int __fastcall FUN_005fd850(AnonShape_005FD850_1F07DA54 *param_1)

{
  byte *puVar1;
  AnonShape_004AB810_8E5693D5 *pAVar2;
  int iVar3;
  uint uVar4;
  int iVar6;
  int iVar7;
  int local_8;

  iVar6 = 0;
  iVar3 = -1;
  local_8 = -1;
  if (param_1->field_0226 != 0) {
    puVar1 = (byte *)(Library::DKW::LIB::MemAlloc(param_1->field_0226 * 0x52));
    param_1->field_0233 = puVar1;
    local_8 = 0;
    uVar4 = param_1->field_0226 * 0x52;
    memset(puVar1, 0, uVar4); /* compiler bulk-zero initialization */
    iVar3 = 0;
  }
  if (((param_1->field_0233 != 0) && (param_1->field_0232 != '\0')) &&
     (iVar7 = 0, 0 < param_1->field_0226)) {
    do {
      pAVar2 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
      if (pAVar2 == nullptr) {
        pAVar2 = nullptr;
      }
      else {
        pAVar2 = thunk_FUN_004ab810(pAVar2);
      }
      iVar6 = iVar6 + 0x52;
      *(AnonShape_004AB810_8E5693D5 **)(param_1->field_0233 + -0x10 + iVar6) = pAVar2;
      local_8 = local_8 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1->field_0226);
    return local_8;
  }
  return iVar3;
}

