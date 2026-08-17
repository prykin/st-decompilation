#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004d7270(AnonShape_004D7270_8F0A3C37 *param_1)

{
  AnonNested_AnonShape_004D7270_8F0A3C37_0000_431532FF *pAVar1;
  int iVar2;
  int iVar3;
  int local_EAX_94;
  int uVar3;
  int local_EAX_171;
  uint uVar4;

  if (param_1->field_0245 == 0) {
    iVar2 = thunk_FUN_004e4140(*(int *)&param_1->field_0x24);
    if (iVar2 != 0) {
      /* ST_CALLSITE[004D729D]: CALL dword ptr [EDX + 0xc4] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (*(code *)param_1->field_0000->field_00C4)();
      thunk_FUN_004d6f70((int *)param_1);
      /* ST_CALLSITE[004D72B0]: CALL dword ptr [EAX + 0xc4] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar3 = (*(code *)param_1->field_0000->field_00C4)();
      if (iVar2 < iVar3) {
        iVar2 = 0;
        uVar4 = (uint)(*(int *)&param_1->field_0x2c == 1);
        local_EAX_94 = thunk_FUN_004ad650((STT3DSprC *)&param_1->field_0x1d5);
        thunk_FUN_00637c50(local_EAX_94,uVar4,iVar2);
      }
      /* ST_CALLSITE[004D72E9]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      uVar3 = LookupRecordByte(param_1->field_023D);
      if (*(int *)(&DAT_00796230 + ((uint)(byte)uVar3 + param_1->field_0235 * 3) * 4) != 0) {
        pAVar1 = param_1->field_0000;
        /* ST_CALLSITE[004D731B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_171 = LookupRecordByte(param_1->field_023D);
        /* ST_CALLSITE[004D733F]: CALL dword ptr [EDI + 0x90] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)pAVar1->field_0090)
                  (3,*(undefined4 *)
                      (&DAT_00796230 + ((uint)(byte)local_EAX_171 + param_1->field_0235 * 3) * 4));
      }
    }
  }
  return 0;
}

