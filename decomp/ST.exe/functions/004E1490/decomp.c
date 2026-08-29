#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0047C050 -> 004E1490 @ 0047C1D3 | 0047C050 -> 004E1490 @ 0047C420
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (16), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00465C60 @ 004661AB -> read as EAX on
   every CFG path | 00465C60 @ 004667DF -> read as EAX on every CFG path | 00465C60 @ 00466949 ->
   read as EAX on every CFG path | 00465C60 @ 00467A1C -> read as EAX on every CFG path | 00465C60 @
   00468113 -> read as EAX on every CFG path | 00465C60 @ 004682CB -> read as EAX on every CFG path
   | 0046D450 @ 0046D592 -> read as EAX on every CFG path | 0046D450 @ 0046D948 -> read as EAX on
   every CFG path | 0046D450 @ 0046DAD9 -> read as EAX on every CFG path | 0047C050 @ 0047C1D3 ->
   read as EAX on every CFG path | 0047C050 @ 0047C420 -> read as EAX on every CFG path | 004C7860 @
   004C7AA2 -> read as EAX on every CFG path | 004EBAB0 @ 004EBAB8 -> read as EAX on every CFG path
   | 004EBCB0 @ 004EBCB6 -> read as EAX on every CFG path | 005EDA50 @ 005EDB24 -> read as EAX on
   every CFG path | 00662240 @ 0066310D -> read as EAX on every CFG path */

int __fastcall FUN_004e1490(STBoatC *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;

  iVar4 = 0;
  if (param_1->field_0024 != *(int *)&param_1->field_0x23d) {
    /* ST_CALLSITE[004E14AB]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar2 = LookupRecordByte((char)*(int *)&param_1->field_0x23d);
    iVar1 = *(int *)&param_1->field_0x235;
    /* ST_CALLSITE[004E14D0]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar3 = LookupRecordByte((char)param_1->field_0024);
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
      iVar4 = 1;
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
  return iVar4;
}

