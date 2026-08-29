#include "../../pseudocode_runtime.h"


void __fastcall FUN_00494df0(RecoveredRecordView_00494DF0_D68BDA9F *param_1)

{
  int iVar1;

  iVar1 = param_1->field_06F7;
  if (((iVar1 == 5) || (iVar1 == 0x11)) || (iVar1 == 0x21)) {
    if (((param_1->field_0792 == 1) && (param_1->field_078A == 0)) &&
       ((param_1->field_01D1 & 1) == 0)) {
      param_1->field_078A = 1;
      if (g_visibleClass_00802A88 != nullptr) {
        /* ST_CALLSITE[00494E5E]: CALL 0x0040205e; direct=0040205E VisibleClassTy::SetZoneMin1 */
        VisibleClassTy::SetZoneMin1
                  (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
                   (char)param_1->field_005F,param_1->field_0024,param_1->field_0101,
                   param_1->field_0018,0xffffffff);
      }
    }
    if (((param_1->field_0796 == 1) && (param_1->field_078E == 0)) &&
       ((param_1->field_01D1 & 1) == 0)) {
      param_1->field_078E = 1;
      if (g_visibleClass_00802A88 != nullptr) {
        /* ST_CALLSITE[00494EAD]: CALL 0x00401848; direct=00401848 VisibleClassTy::SetZoneMin2 */
        VisibleClassTy::SetZoneMin2
                  (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
                   (char)param_1->field_005F,param_1->field_0024,param_1->field_0101,
                   param_1->field_0018,0xffffffff);
      }
    }
  }
  return;
}

