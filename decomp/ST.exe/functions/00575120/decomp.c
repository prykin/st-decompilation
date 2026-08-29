#include "../../pseudocode_runtime.h"


void __thiscall
FUN_00575120(void *this,RecoveredRecordView_005745E0_17311247 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *local_8;

  iVar3 = 6;
  iVar2 = (int)*(short *)&param_1->field_0x2 * (int)*(short *)param_1;
  iVar2 = STSignedDiv4(iVar2);
  puVar4 = (undefined4 *)
           (&param_1[1].field_0x5 + (iVar2 * 5 + param_2 + (*(short *)param_1 * param_3) / 2) * 4);
  local_8 = this;
  do {
    puVar1 = (undefined4 *)*puVar4;
    if (puVar1 != nullptr) {
      puVar1[6] = 0;
      thunk_FUN_005745e0(param_1,puVar1);
    }
    puVar4 = puVar4 + -iVar2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  /* ST_CALLSITE[00575194]: CALL 0x006aac70; direct=006AAC70 Library::DKW::LIB::MemAlloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/undefined4; source view only; no Ghidra override */
  local_8 = Library::DKW::LIB::MemAlloc((uint)param_1->field_0004 * (uint)param_1->field_0004);
  thunk_FUN_00574920((RecoveredRecordView_00574920_F0A9E3AD *)param_1,param_2,param_3,local_8);
  FreeAndNull(&local_8);
  return;
}

