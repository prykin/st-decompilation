#include "../../pseudocode_runtime.h"


void __thiscall FUN_004d6930(void *this,AnonShape_004D6930_FDF7B020 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  short sVar7;

  *(undefined4 *)param_1 = STField<undefined4>(this,0x259);
  param_1->field_0006 = 2;
  param_1->field_0005 =
       ((STField<uint>(this,0x24) != (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) - 1U &
       0xfe) + 3;
  /* ST_CALLSITE[004D696D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar4 = LookupRecordByte(STField<char>(this,0x24));
  param_1->field_0x4 = bVar4;
  puVar1 = &param_1->field_0x9;
  param_1->field_0007 = ~(byte)(STField<uint>(this,0x1d1) >> 2) & 1;
  *(undefined4 *)puVar1 = 0;
  param_1->field_000D = 0;
  puVar2 = &param_1->field_0xf;
  *(undefined4 *)puVar2 = 0;
  param_1->field_0013 = 0;
  if (STField<int>(this,0x2a4) == 0) {
    *puVar1 = 0x50;
    if (((STField<int>(this,0x2ec) == 2) && (0 < STField<int>(this,0x2a8))) &&
       (STField<int>(this,0x2a8) < 0x65)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *puVar2 = uVar3;
  }
  else {
    *puVar1 = 0x51;
    *puVar2 = 1;
  }
  param_1->field_001D = STField<undefined4>(this,0x259);
  /* ST_CALLSITE[004D69F2]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar4 = LookupRecordByte(STField<char>(this,0x24));
  if (bVar4 == 3) {
    sVar5 = (short)*(undefined4 *)
                    (&DAT_007e3160 +
                    (STField<int>(this,0x368) * 3 + STField<int>(this,0x36c)) * 4);
    sVar7 = (short)STField<undefined4>(this,0x2d8);
  }
  else {
    sVar7 = (short)STField<undefined4>(this,0x2d4);
    sVar5 = (short)*(undefined4 *)
                    (&DAT_007e24fc +
                    (STField<int>(this,0x368) * 3 + STField<int>(this,0x36c)) * 4);
  }
  param_1->field_0027 = sVar5 - sVar7;
  param_1->field_002B =
       *(short *)(&DAT_007e1c50 +
                 (STField<int>(this,0x368) * 3 + STField<int>(this,0x36c)) * 4) -
       STField<short>(this,0x2d0);
  param_1->field_002F = STField<undefined1>(this,0x2a8);
  /* ST_CALLSITE[004D6A70]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar4 = LookupRecordByte(STField<char>(this,0x24));
  param_1->field_0025 = bVar4;
  if (STField<int>(this,0x2a4) != 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbde;
    return;
  }
  if (STField<int>(this,0x2b8) == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbb9;
    return;
  }
  iVar6 = thunk_FUN_0044e1b0(STField<int>(this,0x24));
  if (iVar6 == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbdf;
    return;
  }
  if (STField<int>(this,0x2b4) != 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 3000;
    return;
  }
  if (STField<int>(this,700) == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbba;
    return;
  }
  if (STField<int>(this,0x2c0) == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbbb;
    return;
  }
  if (STField<int>(this,0x2c4) == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbbc;
    return;
  }
  if (STField<int>(this,0x2c8) == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbd3;
  }
  return;
}

