#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:4: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x14, direct_reads=2, scalar_operations=2, signed_comparisons=2, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=false; sites=006A1383 incoming load: MOV EAX,dword ptr [EBP +
   0x14] | 006A139C scalar operation: IMUL ECX,EAX | 006A13C8 scalar operation: INC EAX | 006A13D0
   incoming load: MOV EAX,dword ptr [EBP + 0x14] */

int __cdecl FUN_006a1370(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  *(undefined4 *)param_5 = 0;
  *(undefined2 *)(param_5 + 4) = 0;
  iVar2 = param_4;
  if (param_4 < 6) {
    puVar3 = (undefined4 *)
             ((int)param_1 + ((param_1[1] * param_4 + param_3) * *param_1 + param_2) * 6 + 8);
    while( true ) {
      uVar1 = *(ushort *)(puVar3 + 1);
      if ((uVar1 & 0xf00) != 0) break;
      iVar2 = iVar2 + 1;
      puVar3 = (undefined4 *)((int)puVar3 + *param_1 * param_1[1] * 6);
      if (5 < iVar2) {
        return param_4;
      }
    }
    if (param_5 != 0) {
      *(undefined4 *)param_5 = *puVar3;
      *(ushort *)(param_5 + 4) = uVar1;
    }
  }
  return iVar2;
}

