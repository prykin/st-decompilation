#include "../../pseudocode_runtime.h"


void __fastcall FUN_00566ff0(AnonShape_00566FF0_D4E50B19 *param_1)

{
  uint uVar1;

  FUN_007193f0();
  uVar1 = DAT_00807300 & 0xff;
  if (uVar1 == 2) {
    if (param_1->field_0F8F != 0) {
      FUN_00719560((DWORD_PTR)&param_1->field_0F8F);
      FUN_00719c60((DWORD_PTR)&param_1->field_0F8F);
    }
  }
  else if ((uVar1 == 4) || (uVar1 == 8)) {
    SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00568940::thunk_FUN_00568940
              ((RecoveredReceiver_00568940 *)param_1,CASE_B);
    return;
  }
  return;
}

