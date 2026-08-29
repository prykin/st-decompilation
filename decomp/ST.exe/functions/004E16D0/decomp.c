#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004e16d0(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;

  if ((STField<int>(this,0x4d8) != param_1) || (STField<int>(this,0x4d0) != 0)) {
    return 0;
  }
  STField<undefined4>(this,0x4d0) = 1;
  STField<undefined4>(this,0x4e4) = 1;
  /* ST_CALLSITE[004E170A]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
  TLOBaseTy::RotateSpr(this,1);
  STField<undefined4>(this,0x4e8) = 1;
  switch(STField<undefined4>(this,0x5ac)) {
  case 0x39:
    iVar3 = *(int *)this;
    /* ST_CALLSITE[004E1765]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar1 = LookupRecordByte(STField<char>(this,0x23d));
    iVar2 = (-(uint)(bVar1 != 2) & 0xffffff3a) + 0x2e8;
    break;

  default:
    goto switchD_004e172f_caseD_3a;
  case 0x3b:
    iVar3 = *(int *)this;
    /* ST_CALLSITE[004E17CE]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar1 = LookupRecordByte(STField<char>(this,0x23d));
    iVar2 = (-(uint)(bVar1 != 2) & 0xffffff3a) + 0x2f5;
    break;
  case 0x4f:
    iVar3 = *(int *)this;
    /* ST_CALLSITE[004E178B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar1 = LookupRecordByte(STField<char>(this,0x23d));
    iVar2 = (-(uint)(bVar1 != 2) & 0xffffff32) + 0x34e;
    break;
  case 0x52:
    iVar3 = *(int *)this;
    /* ST_CALLSITE[004E17F1]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar1 = LookupRecordByte(STField<char>(this,0x23d));
    iVar2 = (-(uint)(bVar1 != 2) & 0xffffff3b) + 0x35b;
    break;
  case 0x5e:
    /* ST_CALLSITE[004E1741]: CALL dword ptr [EDX + 0x90]; [STIndirectCallsiteApplier] exact slot 0x90; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4 */
    STStructuralVirtualCall<void>(this, 0x90, 3, 0x3a9);

    thunk_FUN_004e04a0(this);
    return 0;
  case 0x60:
    /* ST_CALLSITE[004E17AA]: CALL dword ptr [EDX + 0x90]; [STIndirectCallsiteApplier] exact slot 0x90; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4 */
    STStructuralVirtualCall<void>(this, 0x90, 3, 0x3b8);

    thunk_FUN_004e04a0(this);
    return 0;
  }
  /* ST_CALLSITE[004E1808]: CALL dword ptr [EDI + 0x90]; [STIndirectCallsiteApplier] exact slot 0x90; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4 */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(iVar3 + 0x90))(3,iVar2);
switchD_004e172f_caseD_3a:
  thunk_FUN_004e04a0(this);
  return 0;
}

