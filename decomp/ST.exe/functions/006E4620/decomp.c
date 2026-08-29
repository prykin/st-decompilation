#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_006e4620(void *this,RecoveredRecord_006E4620_6462A208 *param_1)

{
  AnonShape_006E45C0_FB272364 *pAVar1;

  /* ST_CALLSITE[006E462F]: CALL 0x006e45a0; direct=006E45A0 FUN_006e45a0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_006E45C0_FB272364; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_006E45C0_FB272364;pointer:/void;/int */
  pAVar1 = FUN_006e45a0(this,param_1->field_0014);

  Library::Ourlib::SAPP::FUN_006e45c0(pAVar1);
  return 0;
}

