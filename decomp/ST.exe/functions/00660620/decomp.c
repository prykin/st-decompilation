#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall
FUN_00660620(RecoveredRecordView_00660620_D94F552E *param_1,undefined4 param_2,uint param_3)

{
  STGroupC *this;
  DArrayTy *array;
  STGroupBoatC *this_00;
  uint local_18;
  DArrayTy *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  local_18 = 0;
  local_14 = nullptr;
  local_10 = 0;
  local_c = 0;
  param_1->field_00A7 = 0;
  local_8 = 0;
  /* ST_CALLSITE[0066064F]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STGroupC; signature=__stdcall;pointer:/STGroupC;/char;/ushort */
  this = thunk_FUN_0042b760(param_1->field_0024,(ushort)param_3);
  if (this != nullptr) {
    /* ST_CALLSITE[0066065A]: CALL 0x00402db5; direct=00402DB5 STGroupC::GetGroupContent; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__thiscall;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/STGroupC */
    array = STGroupC::GetGroupContent(this);
    if ((array != nullptr) || (_DAT_0000000c != 0)) {
      local_18 = 0;
      local_14 = array;
      if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
        this_00 = thunk_FUN_0042b760(param_1->field_0024,param_1->field_007D);
        if (this_00 != nullptr) {
          /* ST_CALLSITE[006606A4]: CALL dword ptr [EDX + 0x8] */
          this_00->sub_00498D20(5,(short)&local_18);
          if (array != nullptr) {
            DArrayDestroy(array);
          }
          return 0;
        }
      }
      if (array != nullptr) {
        DArrayDestroy(array);
      }
    }
  }
  return 0xffffffff;
}

