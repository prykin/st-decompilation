#include "../../pseudocode_runtime.h"


int __fastcall FUN_005fd850(RecoveredRecordView_005FD850_C5173AC4 *param_1)

{
  byte *puVar1;
  STT3DSprC *pSVar2;
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
      /* ST_CALLSITE[005FD8C4]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STT3DSprC; signature=__cdecl;pointer:/STT3DSprC;/uint */
      pSVar2 = Library::MSVCRT::FUN_0072e530(0x40);
      if (pSVar2 == nullptr) {
        pSVar2 = nullptr;
      }
      else {
        /* ST_CALLSITE[005FD8D2]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
        pSVar2 = STT3DSprC::STT3DSprC(pSVar2);
      }
      iVar6 = iVar6 + 0x52;
      *(STT3DSprC **)(param_1->field_0233 + -0x10 + iVar6) = pSVar2;
      local_8 = local_8 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1->field_0226);
    return local_8;
  }
  return iVar3;
}

