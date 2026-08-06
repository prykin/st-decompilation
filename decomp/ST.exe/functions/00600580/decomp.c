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
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (short)(((short)(param_1 / 0xc9) + sVar1) -
                     (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                          (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar4 = (short)(((short)(param_2 / 0xc9) + sVar1) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    iVar5 = (short)(((short)(param_3 / 200) + sVar1) -
                   (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(param_3 / 200) + sVar1) -
                        (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  sVar1 = (short)(param_4 >> 0x1f);
  if (param_4 < 0) {
    iVar7 = (short)(((short)(param_4 / 0xc9) + sVar1) -
                   (short)((longlong)param_4 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar7 = (int)(short)(((short)(param_4 / 0xc9) + sVar1) -
                        (short)((longlong)param_4 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_5 >> 0x1f);
  if (param_5 < 0) {
    iVar3 = (short)(((short)(param_5 / 0xc9) + sVar1) -
                   (short)((longlong)param_5 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar3 = (int)(short)(((short)(param_5 / 0xc9) + sVar1) -
                        (short)((longlong)param_5 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_6 >> 0x1f);
  if (param_6 < 0) {
    iVar2 = (short)(((short)(param_6 / 200) + sVar1) -
                   (short)((longlong)param_6 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar2 = (int)(short)(((short)(param_6 / 200) + sVar1) -
                        (short)((longlong)param_6 * 0x51eb851f >> 0x3f));
  }
  uVar6 = iVar5 - iVar2;
  if ((int)uVar6 < 1) {
    if (iVar2 == 4) {
      *(undefined4 *)param_7 = 0xffffffff;
      *param_8 = 0xffffffff;
      *param_9 = 0xffffffff;
    }
  }
  else {
    iVar4 = FUN_006acfd0(iVar7,iVar3,param_1,iVar4);
    if (iVar4 < (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) {
      return 1;
    }
  }
  return 0;
}

