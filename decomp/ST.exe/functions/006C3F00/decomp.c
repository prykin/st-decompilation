#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=10, scalar_uses=0; sites=006C3F16 dereference: MOV EAX,dword ptr [ESI +
   0x64] | 006C3F25 dereference: MOV dword ptr [ESI + 0x64],EDI | 006C3F28 dereference: MOV
   EAX,dword ptr [ESI + 0x60] | 006C3F35 dereference: MOV dword ptr [ESI + 0x60],EDI | 006C3F38
   dereference: MOV EAX,dword ptr [ESI + 0x5c] | 006C3F45 dereference: MOV dword ptr [ESI +
   0x5c],EDI | 006C3F48 dereference: MOV EAX,dword ptr [ESI + 0x50] | 006C3F55 dereference: MOV
   dword ptr [ESI + 0x50],EDI | 006C3F5E dereference: MOV EDX,dword ptr [ESI + 0x4] | 006C3F68
   dereference: MOV dword ptr [ESI + 0x4],EDX */

undefined4 FUN_006c3f00(void *param_1)

{
  int *piVar1;

  /* ST_CALLSITE[006C3F10]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x508));
  piVar1 = STField<int *>(param_1,100);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[006C3F22]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    STField<undefined4>(param_1,100) = 0;
  }
  piVar1 = STField<int *>(param_1,0x60);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[006C3F32]: CALL dword ptr [EDX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    STField<undefined4>(param_1,0x60) = 0;
  }
  piVar1 = STField<int *>(param_1,0x5c);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[006C3F42]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    STField<undefined4>(param_1,0x5c) = 0;
  }
  piVar1 = STField<int *>(param_1,0x50);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[006C3F52]: CALL dword ptr [EDX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    STField<undefined4>(param_1,0x50) = 0;
  }
  FUN_006c3500(param_1);
  STField<uint>(param_1,4) = STField<uint>(param_1,4) & 0xbffffffe;
  FUN_006c3570(param_1);
  /* ST_CALLSITE[006C3F71]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x508));
  return 0;
}

