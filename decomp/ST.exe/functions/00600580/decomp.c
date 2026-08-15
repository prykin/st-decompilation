#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:6: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x1c, direct_reads=1, scalar_operations=8, signed_comparisons=1, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=false; sites=00600665 incoming load: MOV EDX,dword ptr [EBP +
   0x1c] | 00600671 scalar operation: IMUL EDX | 00600673 scalar operation: SAR EDX,0x6 | 00600678
   scalar operation: SHR EAX,0x1f | 0060067B scalar operation: ADD EDX,EAX | 00600682 scalar
   operation: IMUL EDX | 00600684 scalar operation: SAR EDX,0x6 | 00600689 scalar operation: SHR
   EAX,0x1f | 0060068C scalar operation: ADD EDX,EAX */

undefined4
FUN_00600580(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            undefined4 *param_8,undefined4 *param_9)

{
  short sVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;

  param_1 = STBiasedDiv16(param_1, 0xc9); /* exact signed 16-bit grid-index division */
  iVar5 = STBiasedDiv16(param_2, 0xc9); /* exact signed 16-bit grid-index division */
  iVar6 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
  iVar8 = STBiasedDiv16(param_4, 0xc9); /* exact signed 16-bit grid-index division */
  iVar3 = STBiasedDiv16(param_5, 0xc9); /* exact signed 16-bit grid-index division */
  iVar2 = STBiasedDiv16(param_6, 200); /* exact signed 16-bit grid-index division */
  uVar7 = iVar6 - iVar2;
  if ((int)uVar7 < 1) {
    if (iVar2 == 4) {
      *(undefined4 *)param_7 = 0xffffffff;
      *param_8 = 0xffffffff;
      *param_9 = 0xffffffff;
    }
  }
  else {
    iVar4 = FUN_006acfd0(iVar8,iVar3,param_1,iVar5);
    if (iVar4 < (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
      return 1;
    }
  }
  return 0;
}

