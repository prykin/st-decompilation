#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0047C050 -> 004E1490 @ 0047C1D3 | 0047C050 -> 004E1490 @ 0047C420 */

undefined4 __fastcall FUN_004e1490(STBoatC *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;

  uVar4 = 0;
  if (param_1->field_0024 != param_1->field_023D) {
    bVar2 = LookupRecordByte((char)param_1->field_023D);
    iVar1 = *(int *)&param_1->field_0x235;
    bVar3 = LookupRecordByte(*(char *)&param_1->field_0024);
    if ((&DAT_007e1984)[(uint)bVar3 + (iVar1 * 3 + (uint)bVar2) * 3] == '\0') {
      return 0;
    }
  }
  switch(*(undefined4 *)&param_1->field_0x5ac) {
  case 0x38:
  case 0x39:
  case 0x4f:
  case 0x5e:
    if (((*(int *)&param_1->field_0x245 == 0) && (*(int *)&param_1->field_0x4d8 == -1)) &&
       ((*(int *)&param_1->field_0x4d4 != 0 && (*(int *)&param_1->field_0x4d0 == 0)))) {
      uVar4 = 1;
    }
    break;
  case 0x3b:
  case 0x52:
  case 0x5f:
  case 0x60:
    if (((*(int *)&param_1->field_0x245 == 0) && (*(int *)&param_1->field_0x4d8 == -1)) &&
       (*(int *)&param_1->field_0x4d0 == 0)) {
      return 1;
    }
  }
  return uVar4;
}

