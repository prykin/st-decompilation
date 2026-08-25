#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __fastcall FUN_00750287(AnonShape_00750287_BC8A1854 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_8;

  if (param_1->field_0060 != 0) {
    ResetEvent((HANDLE)param_1->field_0050);
    uVar3 = 0;
    local_8 = 0;
    if (0 < param_1->field_0028) {
      iVar1 = FUN_0074ded7(param_1->field_0020);
      local_8 = STField<int>(iVar1,0x1C);
      uVar3 = STField<uint>(iVar1,0x18);
    }
    if ((param_1->field_0064 != 0) && (0 < param_1->field_0040)) {
      iVar1 = FUN_0074ded7(param_1->field_0038);
      uVar2 = STField<uint>(iVar1,0x18) + param_1->field_0068;
      iVar1 = STField<int>(iVar1,0x1C) + param_1->field_006C +
              (uint)CARRY4(STField<uint>(iVar1,0x18),param_1->field_0068);
      if ((uVar3 == 0 && local_8 == 0) ||
         ((iVar1 <= local_8 && ((iVar1 < local_8 || (uVar2 < uVar3)))))) {
        local_8 = iVar1;
        uVar3 = uVar2;
      }
    }
    if (((-1 < local_8) && ((0 < local_8 || (uVar3 != 0)))) &&
       ((uVar3 != param_1->field_0058 || (local_8 != param_1->field_005C)))) {
      if (param_1->field_0054 != 0) {
        /* ST_CALLSITE[00750320]: CALL dword ptr [EDX + 0x18] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*STField<int *>(param_1,0x60) + 0x18))
                  /* ST_CALLSITE[00750320]: CALL dword ptr [EDX + 0x18] */
                  ((int *)param_1->field_0060,param_1->field_0054);
        ResetEvent((HANDLE)param_1->field_0050);
      }
      /* ST_CALLSITE[0075033F]: CALL dword ptr [EDX + 0x10] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*STField<int *>(param_1,0x60) + 0x10))
                /* ST_CALLSITE[0075033F]: CALL dword ptr [EDX + 0x10] */
                ((int *)param_1->field_0060,uVar3,local_8,0,0,param_1->field_0050,
                 &param_1->field_0054);
      param_1->field_0058 = uVar3;
      param_1->field_005C = local_8;
    }
  }
  return;
}

