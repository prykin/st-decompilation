#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004c91a0(TLOBaseTy *param_1)

{
  byte bVar1;
  int iVar2;

  if ((param_1->field_03D4 != 0) && (param_1->field_0607 != nullptr)) {
    param_1->field_03D4 = 0;
  }
  if (*(int *)&param_1->field_0x361 != 0) {
    *(undefined4 *)&param_1->field_0x36d = 1;
    *(int *)&param_1->field_0x365 = *(int *)&param_1->field_0x361;
    iVar2 = TLOBaseTy::sub_004C90C0(param_1);
    if (iVar2 != 0) {
      bVar1 = LookupRecordByte(*(char *)&param_1->field_0024);
      if ((bVar1 != 3) && (param_1->field_0398 != 0)) {
        thunk_FUN_004d87b0(*(char *)&param_1->field_0024,
                           (param_1->field_0394 * param_1->field_0398) / 100);
      }
      if (param_1->field_039C != 0) {
        thunk_FUN_004d88f0(*(char *)&param_1->field_0024,
                           (param_1->field_0394 * param_1->field_039C) / 100);
      }
      if (param_1->field_03A0 != 0) {
        thunk_FUN_004d8a30(*(char *)&param_1->field_0024,
                           (param_1->field_0394 * param_1->field_03A0) / 100);
      }
      if (param_1->field_03A4 != 0) {
        thunk_FUN_004e4380((int)param_1->field_0024,
                           (param_1->field_0394 * param_1->field_03A4) / 100);
      }
      TLOBaseTy::sub_004C7460(param_1);
      thunk_FUN_004d78e0(*(char *)&param_1->field_0024);
      if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
        thunk_FUN_004d8b70((char)param_1->field_0024);
      }
    }
  }
  return 0;
}

