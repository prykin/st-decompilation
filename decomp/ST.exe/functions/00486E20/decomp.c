#include "../../pseudocode_runtime.h"


void __thiscall FUN_00486e20(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  AiPlrClassTy *pAVar4;
  STGroupBoatC *pSVar5;
  int iVar6;
  bool bVar8;
  undefined4 local_8;

  puVar1 = param_1;
  memset(param_1, 0, 0x5c); /* compiler bulk-zero initialization */
  *param_1 = STField<undefined4>(this,0x6f7);
  local_8 = this;
  iVar6 = thunk_FUN_004e8030(STField<int>(this,0x6f7));
  *(char *)(puVar1 + 1) = (char)iVar6;
  STField<undefined1>(puVar1,6) = 1;
  iVar6 = thunk_FUN_00493cd0(this);
  if (iVar6 == 0) {
    STField<undefined1>(puVar1,7) = 1;
  }
  else {
    STField<undefined1>(puVar1,7) = 0;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar6 = (**(code **)(*(int *)this + 8))();
  if (iVar6 == 1) {
    *(undefined1 *)(puVar1 + 2) = 1;
  }
  else {
    *(undefined1 *)(puVar1 + 2) = 0;
  }
  if (STField<uint>(this,0x24) != (uint)*(byte *)(STField<int>(this,0x10) + 0x112d))
  goto cf_common_exit_00486ED3;
  bVar2 = *(byte *)(puVar1 + 1);
  if (bVar2 != 0) {
    if (bVar2 < 3) {
      bVar2 = LookupRecordByte(STField<char>(this,0x24));
      if (bVar2 == 3) goto cf_common_exit_00486ED3;
    }
    else if ((bVar2 == 3) &&
            ((bVar2 = LookupRecordByte(STField<char>(this,0x24)), bVar2 == 1 ||
             (bVar2 = LookupRecordByte(STField<char>(this,0x24)), bVar2 == 2)))) {
cf_common_exit_00486ED3:
      STField<undefined1>(puVar1,5) = 3;
      return;
    }
  }
  STField<undefined1>(puVar1,5) = 1;
  STField<undefined1>(puVar1,0x39) = 1;
  *(undefined1 *)(puVar1 + 0xe) = 1;
  STField<undefined1>(puVar1,0x37) = 1;
  STField<undefined1>(puVar1,0x36) = 1;
  *(undefined1 *)(STField<int>(this,0x7ee) + 0x36 + (int)puVar1) = 3;
  switch(STField<undefined4>(this,0x6f7)) {
  case 1:
  case 2:
  case 3:
  case 10:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x26:
  case 0x27:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 6;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 6) && (STField<int>(this,0x459) != 0x6a)) {
      *(undefined1 *)(puVar1 + 5) = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 4:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 9;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 10) && (STField<int>(this,0x459) != 0x6e)) {
      if (0 < STField<int>(this,0x7be)) {
        *(undefined1 *)(puVar1 + 5) = 1;
        goto switchD_00486f27_default;
      }
      goto cf_common_join_004881B5;
    }
    break;
  case 5:
  case 0xb:
  case 0x11:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 8;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) == 7) || (STField<int>(this,0x459) == 0x6b)) break;
    iVar6 = STField<int>(this,0x7be);
    goto LAB_0048797b;
  case 6:
  case 0x12:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 7;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68))
    goto LAB_00487aa9;
    if ((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b != 0) {
      bVar8 = STField<int>(this,0x716) == STField<int>(this,0x712);
LAB_00487a9b:
      if (!bVar8) {
        STField<undefined1>(puVar1,0x12) = 1;
        goto LAB_00487aad;
      }
    }
LAB_00487aa3:
    STField<undefined1>(puVar1,0x12) = 0;
    goto LAB_00487aad;
  case 7:
  case 0x13:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0xd;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    if (STField<int>(this,0x7ca) == 0) {
      STField<undefined1>(puVar1,0xe) = 0x13;
    }
    else {
      STField<undefined1>(puVar1,0xe) = 0x14;
    }
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 0xe) || (STField<int>(this,0x459) == 0x72)) {
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if (STField<int>(this,0x7ca) == 0) {
      if ((STField<int>(this,0x45d) == 0xf) || (STField<int>(this,0x459) == 0x73)) {
LAB_00487782:
        *(undefined1 *)(puVar1 + 5) = 3;
      }
      else {
        *(undefined1 *)(puVar1 + 5) = 1;
      }
    }
    else {
      iVar6 = thunk_FUN_00492550(this,STField<short>(this,0x5b),STField<short>(this,0x5d),
                                 STField<short>(this,0x5f),(undefined2 *)&local_8,
                                 (undefined2 *)((int)&local_8 + 2),(short *)((int)&param_1 + 2));
      if (iVar6 == 0) {
        *(undefined1 *)(puVar1 + 5) = 0;
      }
      else {
        if ((STField<int>(this,0x45d) == 0x10) || (STField<int>(this,0x459) == 0x74))
        goto LAB_00487782;
        *(undefined1 *)(puVar1 + 5) = 1;
      }
    }
    if (STField<int>(this,0x7ca) != 0) {
      *(undefined1 *)(puVar1 + 4) = 0;
    }
    goto switchD_00486f27_default;
  case 8:
  case 0x14:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0x11;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0x12;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 0xc) || (STField<int>(this,0x459) == 0x70)) {
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68))
    goto LAB_00487bab;
    if ((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b != 0) {
      bVar8 = STField<int>(this,0x716) == STField<int>(this,0x712);
LAB_00487b9d:
      if (!bVar8) {
        STField<undefined1>(puVar1,0x12) = 1;
        goto LAB_00487baf;
      }
    }
LAB_00487ba5:
    STField<undefined1>(puVar1,0x12) = 0;
    goto LAB_00487baf;
  case 9:
  case 0x15:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    if (STField<uint>(this,0x24) == (uint)DAT_0080874d) {
      if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
        STField<undefined1>(puVar1,0xf) = 3;
      }
      else {
        STField<undefined1>(puVar1,0xf) = 1;
      }
      if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
        *(undefined1 *)(puVar1 + 4) = 3;
      }
      else {
        *(undefined1 *)(puVar1 + 4) = 1;
      }
      if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
        STField<undefined1>(puVar1,0x11) = 3;
        STField<undefined1>(puVar1,0x13) = 1;
      }
      else {
        STField<undefined1>(puVar1,0x11) = 1;
        STField<undefined1>(puVar1,0x13) = 1;
      }
    }
    goto switchD_00486f27_default;
  case 0xc:
  case 0x18:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0xe;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0x10;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x11) || (STField<int>(this,0x459) == 0x75)) {
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 0x12) && (STField<int>(this,0x459) != 0x76)) {
      *(undefined1 *)(puVar1 + 5) = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 0x16:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    if (STField<int>(this,0x732) == 1) {
      STField<undefined1>(puVar1,0xe) = 0xc;
    }
    else {
      STField<undefined1>(puVar1,0xe) = 0xb;
    }
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if (STField<int>(this,0x732) == 1) {
      *(undefined1 *)(puVar1 + 5) = 1;
      goto switchD_00486f27_default;
    }
    goto LAB_00487975;
  case 0x17:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 10;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if (((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) &&
       (STField<int>(this,0x7de) == 0)) {
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if (((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) &&
       (STField<int>(this,0x7de) == 1)) {
      *(undefined1 *)(puVar1 + 5) = 3;
      goto switchD_00486f27_default;
    }
    goto LAB_00487bcf;
  case 0x19:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0xe;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x11) || (STField<int>(this,0x459) == 0x75))
    goto LAB_0048802a;
    *(undefined1 *)(puVar1 + 4) = 1;
    goto LAB_0048802e;
  case 0x1a:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0x11;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0x12;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 0xc) || (STField<int>(this,0x459) == 0x70)) {
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) != 0x16) && (STField<int>(this,0x459) != 0x7a)) {
      if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f != 0) &&
         (uVar3 = thunk_FUN_004e41c0(STField<int>(this,0x24)), uVar3 != 0)) {
        iVar6 = TLOBaseTy::sub_004D6DF0(this);
        bVar8 = iVar6 == 0;
        goto LAB_00487b9d;
      }
      goto LAB_00487ba5;
    }
LAB_00487bab:
    STField<undefined1>(puVar1,0x12) = 3;
LAB_00487baf:
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 0xd) && (STField<int>(this,0x459) != 0x71)) {
LAB_00487bcf:
      *(undefined1 *)(puVar1 + 5) = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 0x1b:
    STField<undefined1>(puVar1,9) = 2;
    if (STField<int>(this,0x7ca) == 0) {
      STField<undefined1>(puVar1,10) = 0x13;
    }
    else {
      STField<undefined1>(puVar1,10) = 0x14;
    }
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0x18;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if (STField<int>(this,0x7ca) == 0) {
      if ((STField<int>(this,0x45d) == 0xf) || (STField<int>(this,0x459) == 0x73)) {
LAB_00487e0b:
        *(undefined1 *)(puVar1 + 4) = 3;
      }
      else {
        *(undefined1 *)(puVar1 + 4) = 1;
      }
    }
    else {
      iVar6 = thunk_FUN_00492550(this,STField<short>(this,0x5b),STField<short>(this,0x5d),
                                 STField<short>(this,0x5f),(undefined2 *)((int)&local_8 + 2),
                                 (undefined2 *)&local_8,(short *)((int)&param_1 + 2));
      if (iVar6 == 0) {
        *(undefined1 *)(puVar1 + 4) = 0;
      }
      else {
        if ((STField<int>(this,0x45d) == 0x10) || (STField<int>(this,0x459) == 0x74))
        goto LAB_00487e0b;
        *(undefined1 *)(puVar1 + 4) = 1;
      }
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x16) || (STField<int>(this,0x459) == 0x7a)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if ((((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f == 0) ||
             (uVar3 = thunk_FUN_004e41c0(STField<int>(this,0x24)), uVar3 == 0)) ||
            (iVar6 = TLOBaseTy::sub_004D6DF0(this), iVar6 == 0)) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    iVar6 = thunk_FUN_004e60d0(STField<int>(this,0x24),0x5f);
    if (0 < iVar6) {
      if ((STField<int>(this,0x45d) != 0x15) || (STField<int>(this,0x635) != 2))
      goto LAB_00487ecd;
      goto LAB_00487eb7;
    }
    goto cf_common_join_004881B5;
  case 0x1c:
  case 0x23:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0;
    goto LAB_004879a0;
  case 0x1d:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0x10;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0x18;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x12) || (STField<int>(this,0x459) == 0x76)) {
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x16) || (STField<int>(this,0x459) == 0x7a)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if ((((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f == 0) ||
             (uVar3 = thunk_FUN_004e41c0(STField<int>(this,0x24)), uVar3 == 0)) ||
            (iVar6 = TLOBaseTy::sub_004D6DF0(this), iVar6 == 0)) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    iVar6 = thunk_FUN_004e60d0(STField<int>(this,0x24),0x5f);
    if (iVar6 < 1) goto cf_common_join_004881B5;
    if ((STField<int>(this,0x45d) == 0x15) && (STField<int>(this,0x635) == 2))
    goto LAB_00487eb7;
LAB_00487ecd:
    if (9 < STField<int>(this,0x71e)) {
      *(undefined1 *)(puVar1 + 5) = 1;
      goto switchD_00486f27_default;
    }
    goto cf_common_join_004881B5;
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x28:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
LAB_004879a0:
    if (STField<uint>(this,0x24) == (uint)DAT_0080874d) {
      if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
        STField<undefined1>(puVar1,0xf) = 3;
      }
      else {
        STField<undefined1>(puVar1,0xf) = 1;
      }
      if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
LAB_0048802a:
        *(undefined1 *)(puVar1 + 4) = 3;
      }
      else {
        *(undefined1 *)(puVar1 + 4) = 1;
      }
LAB_0048802e:
      if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
        STField<undefined1>(puVar1,0x11) = 3;
      }
      else {
        STField<undefined1>(puVar1,0x11) = 1;
      }
      if ((STField<int>(this,0x45d) == 0x16) || (STField<int>(this,0x459) == 0x7a)) {
        STField<undefined1>(puVar1,0x12) = 3;
        STField<undefined1>(puVar1,0x13) = 1;
      }
      else if ((((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f == 0) ||
               (uVar3 = thunk_FUN_004e41c0(STField<int>(this,0x24)), uVar3 == 0)) ||
              (iVar6 = TLOBaseTy::sub_004D6DF0(this), iVar6 == 0)) {
        STField<undefined1>(puVar1,0x12) = 0;
        STField<undefined1>(puVar1,0x13) = 1;
      }
      else {
        STField<undefined1>(puVar1,0x12) = 1;
        STField<undefined1>(puVar1,0x13) = 1;
      }
    }
    goto switchD_00486f27_default;
  case 0x21:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 8;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x16) || (STField<int>(this,0x459) == 0x7a)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if ((((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f == 0) ||
             (uVar3 = thunk_FUN_004e41c0(STField<int>(this,0x24)), uVar3 == 0)) ||
            (iVar6 = TLOBaseTy::sub_004D6DF0(this), iVar6 == 0)) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 7) && (STField<int>(this,0x459) != 0x6b)) {
      if (0 < STField<int>(this,0x7be)) {
        *(undefined1 *)(puVar1 + 5) = 1;
        goto switchD_00486f27_default;
      }
      goto cf_common_join_004881B5;
    }
    break;
  case 0x22:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 7;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    if ((STField<int>(this,0x45d) == 2) || (STField<int>(this,0x459) == 0x66)) {
      *(undefined1 *)(puVar1 + 4) = 3;
    }
    else {
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) != 0x16) && (STField<int>(this,0x459) != 0x7a)) {
      if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f != 0) &&
         (uVar3 = thunk_FUN_004e41c0(STField<int>(this,0x24)), uVar3 != 0)) {
        iVar6 = TLOBaseTy::sub_004D6DF0(this);
        bVar8 = iVar6 == 0;
        goto LAB_00487a9b;
      }
      goto LAB_00487aa3;
    }
LAB_00487aa9:
    STField<undefined1>(puVar1,0x12) = 3;
LAB_00487aad:
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 9) && (STField<int>(this,0x459) != 0x6d)) {
      *(undefined1 *)(puVar1 + 5) = 1;
      goto switchD_00486f27_default;
    }
    break;
  case 0x24:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 0;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 0x48;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    STField<undefined1>(puVar1,0xe) = 0x18;
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    *(undefined1 *)(puVar1 + 4) = 0;
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 0x16) || (STField<int>(this,0x459) == 0x7a)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if ((((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field95_0x15f == 0) ||
             (uVar3 = thunk_FUN_004e41c0(STField<int>(this,0x24)), uVar3 == 0)) ||
            (iVar6 = TLOBaseTy::sub_004D6DF0(this), iVar6 == 0)) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if ((STField<int>(this,0x45d) != 0x15) || (STField<int>(this,0x635) != 2)) {
      if (9 < STField<int>(this,0x71e)) {
        *(undefined1 *)(puVar1 + 5) = 1;
        goto switchD_00486f27_default;
      }
      goto cf_common_join_004881B5;
    }
LAB_00487eb7:
    if (STField<int>(this,0x71e) < 10) goto cf_common_join_004881B5;
    break;
  case 0x25:
    STField<undefined1>(puVar1,9) = 2;
    STField<undefined1>(puVar1,10) = 3;
    STField<undefined1>(puVar1,0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
    STField<undefined1>(puVar1,0xd) = 0x2f;
    if (STField<int>(this,0x732) == 1) {
      STField<undefined1>(puVar1,0xe) = 0xc;
    }
    else {
      STField<undefined1>(puVar1,0xe) = 0xb;
    }
    if (STField<uint>(this,0x24) != (uint)DAT_0080874d) goto switchD_00486f27_default;
    if ((STField<int>(this,0x45d) == 1) || (STField<int>(this,0x459) == 0x65)) {
      STField<undefined1>(puVar1,0xf) = 3;
    }
    else {
      STField<undefined1>(puVar1,0xf) = 1;
    }
    *(undefined1 *)(puVar1 + 4) = 0;
    if ((STField<int>(this,0x45d) == 3) || (STField<int>(this,0x459) == 0x67)) {
      STField<undefined1>(puVar1,0x11) = 3;
    }
    else {
      STField<undefined1>(puVar1,0x11) = 1;
    }
    if ((STField<int>(this,0x45d) == 4) || (STField<int>(this,0x459) == 0x68)) {
      STField<undefined1>(puVar1,0x12) = 3;
    }
    else if (((short)g_packedRecords_A62x8[STField<char>(this,0x24)].field94_0x15b == 0) ||
            (STField<int>(this,0x716) == STField<int>(this,0x712))) {
      STField<undefined1>(puVar1,0x12) = 0;
    }
    else {
      STField<undefined1>(puVar1,0x12) = 1;
    }
    STField<undefined1>(puVar1,0x13) = 1;
    if (STField<int>(this,0x732) == 1) {
      *(undefined1 *)(puVar1 + 5) = 1;
      goto switchD_00486f27_default;
    }
LAB_00487975:
    iVar6 = STField<int>(this,0x726);
LAB_0048797b:
    if (0 < iVar6) {
      *(undefined1 *)(puVar1 + 5) = 1;
      goto switchD_00486f27_default;
    }
cf_common_join_004881B5:
    *(undefined1 *)(puVar1 + 5) = 0;
  default:
    goto switchD_00486f27_default;
  }
  *(undefined1 *)(puVar1 + 5) = 3;
switchD_00486f27_default:
  pAVar4 = thunk_FUN_004357f0(STField<char>(this,0x24));
  if (pAVar4 == nullptr) {
    STField<undefined1>(puVar1,0x15) = 0;
  }
  else {
    pSVar5 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x30));
    if (pSVar5 == nullptr) {
      STField<undefined1>(puVar1,0x15) = 0;
    }
    else if (pSVar5->field_001C == 0) {
      STField<undefined1>(puVar1,0x15) = 1;
    }
    else {
      STField<undefined1>(puVar1,0x15) = 3;
    }
  }
  switch(STField<undefined4>(this,0x6f7)) {
  case 0x16:
  case 0x25:
    *(undefined1 *)(puVar1 + 0xd) = STField<undefined1>(this,0x726);
    break;
  case 0x17:
    *(undefined1 *)(puVar1 + 0xd) = STField<undefined1>(this,0x72a);
    break;
  default:
    *(undefined1 *)(puVar1 + 0xd) = 0;
    break;
  case 0x1b:
  case 0x1d:
  case 0x24:
    *(undefined1 *)(puVar1 + 0xd) = STField<undefined1>(this,0x71e);
    break;
  case 0x23:
    *(undefined1 *)(puVar1 + 0xd) = STField<undefined1>(this,0x722);
  }
  *(undefined1 *)(puVar1 + 7) = STField<undefined1>(this,0x7d2);
  STField<undefined1>(puVar1,0x1d) = STField<undefined1>(this,0x7d6);
  STField<undefined1>(puVar1,0x1e) = STField<undefined1>(this,0x7da);
  return;
}

