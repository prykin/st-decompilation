#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=int *
   __thiscall FUN_0074fc49(void * this, int * param_1, int * param_2, uint * param_3, int param_4,
   double param_5, int param_6, int param_7, short param_8, int param_9, int param_10, int param_11,
   undefined4 param_12, int param_13) Evidence: x87 double-width accesses or exact split stores into
   an independently typed double field prove physical EBP slot boundaries; merged_slots={4=2};
   sites=0074FC96 FLD double ptr [EBP + 0x18] */

int * __thiscall
FUN_0074fc49(void *this,int *param_1,int *param_2,uint *param_3,int param_4,double param_5,
            int param_6,int param_7,short param_8,int param_9,int param_10,int param_11,
            undefined4 param_12,int param_13)

{
  uint uVar1;
  longlong lVar2;
  int *local_8;

  local_8 = this;
  FUN_0074b7b8(this,0,(int)param_2);
  STField<int>(this,0x14) = param_4;
  STField<int>(this,0x20) = param_6;
  STField<int>(this,0x24) = param_7;
  STField<short>(this,0x28) = param_8;
  STField<int>(this,0x2c) = param_11;
  STField<int *>(this,0x10) = param_1;
  STField<int>(this,0x30) = param_13;
  FUN_0074faa3((void *)((int)this + 0x34),param_9,param_10);
  STField<undefined4>(this,0x48) = 0;
  STField<undefined4>(this,0x4c) = 0x80004004;
  *(VTable_007A1D88 **)this = &VTable_007A1D88;
  STField<VTable_007A1D68 *>(this,0xc) = &VTable_007A1D68;
  lVar2 = Library::MSVCRT::__ftol();
  STField<longlong>(this,0x18) = lVar2;
  /* ST_CALLSITE[0074FCD2]: CALL dword ptr [ECX] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar1 = (**(code **)*STField<undefined4 *>(this,0x14))
                    (STField<undefined4 *>(this,0x14),STField<undefined4>(this,0x20),&param_2);
  if (-1 < (int)uVar1) {
    /* ST_CALLSITE[0074FCDE]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_2 + 8))(param_2);
    uVar1 = FUN_0074e337((int *)((int)this + 0x48),param_6,nullptr,0,(int *)&local_8);
    if (-1 < (int)uVar1) {
      /* ST_CALLSITE[0074FCFC]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*local_8 + 8))(local_8);
      if (param_8 == 4) {
        STField<undefined4>(this,0x40) = 1;
        STField<undefined4 *>(this,0x38) = (undefined4 *)((int)this + 0x44);
        STField<undefined4>(this,0x44) = 0xfffffffd;
      }
      /* ST_CALLSITE[0074FD1E]: CALL dword ptr [EAX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar1 = (**(code **)(*param_1 + 8))(this);
      if (-1 < (int)uVar1) {
        return this;
      }
    }
  }
  *param_3 = uVar1;
  return this;
}

