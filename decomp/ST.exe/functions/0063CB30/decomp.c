#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0063C510 @ 0063C5FB -> read as EAX on
   every CFG path | 0063C8F0 @ 0063C9C9 -> read as EAX on every CFG path */

int __fastcall FUN_0063cb30(RecoveredRecordView_0063CB30_858879BF *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;

  if ((int)param_1->field_0266 < 0) {
    param_1->field_0266 = 0;
    return 2;
  }
  if ((int)param_1->field_026A < 0) {
    param_1->field_026A = 0;
    return 2;
  }
  if ((int)param_1->field_026E < 0x5a) {
    param_1->field_026E = 0x5a;
    return 2;
  }
  uVar1 = param_1->field_0266 - (int)param_1->field_0253;
  uVar3 = (int)uVar1 >> 0x1f;
  if ((((int)((uVar1 ^ uVar3) - uVar3) < 6) &&
      (uVar1 = param_1->field_026A - (int)param_1->field_0255, uVar3 = (int)uVar1 >> 0x1f,
      (int)((uVar1 ^ uVar3) - uVar3) < 6)) &&
     ((uVar1 = param_1->field_026E - param_1->field_0282, uVar3 = (int)uVar1 >> 0x1f,
      iVar2 = (uVar1 ^ uVar3) - uVar3, iVar2 < 6 || (iVar2 < 0x97)))) {
    return 3;
  }
  return 0;
}

