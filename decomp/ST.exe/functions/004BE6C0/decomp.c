#include "../../pseudocode_runtime.h"


void __thiscall FUN_004be6c0(void *this,undefined4 *param_1)

{
  short sVar1;
  byte bVar2;
  byte uVar3;
  int uVar4;
  uint uVar5;
  int local_EAX_571;
  int iVar6;
  int iVar8;

  memset(param_1, 0, 0x36); /* compiler bulk-zero initialization */
  *(undefined1 *)param_1 = 1;
  STField<undefined1>(param_1,1) = STField<undefined1>(this,0x21d);
  /* ST_CALLSITE[004BE6F1]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = LookupRecordByte(STField<char>(this,0x23d));
  STField<byte>(param_1,7) = bVar2;
  if (((STField<byte>(this,0x1d1) & 4) == 0) && (STField<int>(this,0x420) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  STField<undefined1>(param_1,0x1d) = uVar3;
  switch(STField<undefined4>(this,0x245)) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 6:
    STField<undefined1>(param_1,2) = 0;
    break;
  case 3:
  case 4:
    STField<undefined1>(param_1,2) = 1;
  }
  /* ST_CALLSITE[004BE739]: CALL dword ptr [EDX + 0x7c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x7c))();
  STField<undefined1>(param_1,0x1b) = uVar3;
  /* ST_CALLSITE[004BE743]: CALL dword ptr [EAX + 0xc4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0xc4))();
  ((undefined1 *)param_1)[7] = uVar3;
  STField<undefined4>(param_1,3) = STField<undefined4>(this,0x5ac);
  param_1[2] = STField<undefined4>(this,0x18);
  Library::MSVCRT::_strncpy((char *)(param_1 + 3),(char *)((int)this + 0x5c4),0xe);
  if (*(int *)(&DAT_00792778 + STField<int>(this,0x235) * 4) == 0) {
    STField<undefined2>(param_1,0x1e) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    STField<undefined2>(param_1,0x26) = 0xffff;
    goto LAB_004be96f;
  }
  sVar1 = *(short *)(&DAT_00792ca0 + STField<int>(this,0x235) * 6);
  STField<short>(param_1,0x1e) = sVar1;
  if (sVar1 == 0xa0) {
    STField<undefined2>(param_1,0x1e) = 0x9f;
  }
  iVar6 = (&DAT_00792ca0)[STField<int>(this,0x235) * 6];
  if (((iVar6 == 0x96) || (iVar6 == 0x97)) || (iVar6 == 0x98)) {
    /* ST_CALLSITE[004BE7DA]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    uVar4 = LookupRecordByte(STField<char>(this,0x24));
    uVar4 = (int)(byte)uVar4;
    if (uVar4 == 1) {
      iVar6 = 6;
      goto LAB_004be7f7;
    }
    if (uVar4 != 2) goto LAB_004be80a;
    iVar8 = STField<int>(this,0x24);
    iVar6 = 0x83;
LAB_004be7fb:
    uVar5 = thunk_FUN_004e60d0(iVar8,iVar6);
    STField<short>(param_1,0x22) = (short)uVar5;
  }
  else if (iVar6 == 0xa0) {
    iVar6 = 0xb;
LAB_004be7f7:
    iVar8 = STField<int>(this,0x24);
    goto LAB_004be7fb;
  }
LAB_004be80a:
  if (*(int *)(&DAT_00793e28 + STField<int>(this,0x235) * 8) == 0) {
    STField<undefined2>(param_1,0x26) = 0xffff;
  }
  else {
    STField<undefined2>(param_1,0x26) = STField<undefined2>(this,0x2c5);
  }
  if (((STField<short>(param_1,0x1e) == 0xa8) && (STField<int>(this,0x5ac) == 0x45)) &&
     (STField<undefined2>(param_1,0x26) = 0xffff, STField<int>(this,0x4d0) == 0)) {
    STField<undefined2>(param_1,0x1e) = 0;
  }
  if ((STField<short>(param_1,0x1e) == 0xa3) && (STField<int>(this,0x5ac) == 0x4e)) {
    STField<undefined2>(param_1,0x26) = 0xffff;
    if ((STField<int>(this,0x4d0) != 1) && (STField<int>(this,0x4d0) != 4)) {
      STField<undefined2>(param_1,0x1e) = 0;
    }
  }
  if (((STField<short>(param_1,0x1e) == 0xb2) && (STField<int>(this,0x5ac) == 0x70)) &&
     (STField<undefined2>(param_1,0x26) = 0xffff, STField<int>(this,0x4f0) == 0)) {
    STField<undefined2>(param_1,0x1e) = 0;
  }
  sVar1 = *(short *)(&DAT_00792cac + STField<int>(this,0x235) * 6);
  *(short *)(param_1 + 8) = sVar1;
  if (sVar1 == 0xa0) {
    *(undefined2 *)(param_1 + 8) = 0x9f;
  }
  iVar6 = (&DAT_00792cac)[STField<int>(this,0x235) * 6];
  if (((iVar6 == 0x96) || (iVar6 == 0x97)) || (iVar6 == 0x98)) {
    /* ST_CALLSITE[004BE8FB]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_571 = LookupRecordByte(STField<char>(this,0x24));
    local_EAX_571 = (int)(byte)local_EAX_571;
    if (local_EAX_571 == 1) {
      iVar6 = 6;
      goto LAB_004be918;
    }
    if (local_EAX_571 != 2) goto LAB_004be92b;
    iVar8 = STField<int>(this,0x24);
    iVar6 = 0x83;
LAB_004be91c:
    uVar5 = thunk_FUN_004e60d0(iVar8,iVar6);
    *(short *)(param_1 + 9) = (short)uVar5;
  }
  else if (iVar6 == 0xa0) {
    iVar6 = 0xb;
LAB_004be918:
    iVar8 = STField<int>(this,0x24);
    goto LAB_004be91c;
  }
LAB_004be92b:
  if (*(int *)(&DAT_00793e2c + STField<int>(this,0x235) * 8) != 0) {
    *(undefined2 *)(param_1 + 10) = STField<undefined2>(this,0x345);
    *(undefined1 *)((int)param_1 + (0x2e - STField<int>(this,0x5b8))) = 1;
    return;
  }
LAB_004be96f:
  *(undefined2 *)(param_1 + 10) = 0xffff;
  *(undefined1 *)((int)param_1 + (0x2e - STField<int>(this,0x5b8))) = 1;
  return;
}

