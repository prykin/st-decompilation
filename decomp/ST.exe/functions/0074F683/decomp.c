#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_esp_stack_prototype target=function:-1: prototype=undefined
   __stdcall FUN_0074f683(void * param_1, double param_2) previous_return_type=/undefined Evidence:
   placeholder unknown signature; every machine RET purges exactly 12 byte(s); a balanced frameless
   ESP trace reads every incoming byte before overlap; at least one exact x87 qword fixes the slot
   partition; inferred=[entry_sp+0x4=pointer:/void, entry_sp+0x8=/double]; sites=0074F684 MOV
   ESI,dword ptr [ESP + 0x8] [entry_sp+0x4] | 0074F691 FLD double ptr [ESP + 0xc] [entry_sp+0x8];
   ret_sites=0074F6B7 RET 0xc */

void FUN_0074f683(AnonShape_0074F683_B3CE4B6F *param_1,double param_2)

{
  longlong lVar1;

  EnterCriticalSection(param_1->field_0038);
  lVar1 = Library::MSVCRT::__ftol();
  param_1->field_0028 = lVar1;
  LeaveCriticalSection(param_1->field_0038);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)param_1 + 0x4c))();
  return;
}

