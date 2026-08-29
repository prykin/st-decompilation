#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_007279b0(void *this,RecoveredRecord_007279B0_99D820F0 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 auStack_48 [2];
  uint uStack_40;
  uint local_20;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  puStack_c = &DAT_0079e2e8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  iVar2 = param_1->field_0028 + param_2 * 0x1c;
  piVar3 = (int *)((uint)STField<byte>(iVar2,0x1) * 0x10 + param_3);
  DAT_008570a8 = *piVar3;
  DAT_008570ac = piVar3[1];
  DAT_008570b0 = piVar3[2];
  _DAT_008570b4 = piVar3[3];
  piVar3 = (int *)((uint)STField<byte>(iVar2,0x2) * 0x10 + param_3);
  DAT_008570b8 = *piVar3;
  DAT_008570bc = piVar3[1];
  DAT_008570c0 = piVar3[2];
  _DAT_008570c4 = piVar3[3];
  piVar3 = (int *)((uint)STField<byte>(iVar2,0x3) * 0x10 + param_3);
  DAT_008570c8 = *piVar3;
  DAT_008570cc = piVar3[1];
  DAT_008570d0 = piVar3[2];
  _DAT_008570d4 = piVar3[3];
  iVar4 = STField<int>(iVar2,0x4);
  if (0xfff5 < iVar4) {
    iVar4 = 0xfff6;
  }
  DAT_00857040 = iVar4 * DAT_0085709c;
  iVar4 = STField<int>(iVar2,0x8);
  if (0xfff5 < iVar4) {
    iVar4 = 0xfff6;
  }
  DAT_00857044 = iVar4 * DAT_0085709c;
  iVar4 = STField<int>(iVar2,0xC);
  if (0xfff5 < iVar4) {
    iVar4 = 0xfff6;
  }
  DAT_00857048 = iVar4 * DAT_0085709c;
  iVar4 = STField<int>(iVar2,0x10);
  if (0xfff5 < iVar4) {
    iVar4 = 0xfff6;
  }
  DAT_0085704c = iVar4 * DAT_0085709c;
  iVar4 = STField<int>(iVar2,0x14);
  if (0xfff5 < iVar4) {
    iVar4 = 0xfff6;
  }
  DAT_00857050 = iVar4 * DAT_0085709c;
  iVar2 = STField<int>(iVar2,0x18);
  if (0xfff5 < iVar2) {
    iVar2 = 0xfff6;
  }
  DAT_00857054 = iVar2 * DAT_0085709c;
  iVar2 = DAT_008570ac;
  if (DAT_008570bc < DAT_008570ac) {
    iVar2 = DAT_008570bc;
  }
  iVar4 = DAT_008570ac;
  if (DAT_008570ac < DAT_008570bc) {
    iVar4 = DAT_008570bc;
  }
  if (DAT_008570cc < iVar2) {
    iVar2 = DAT_008570cc;
  }
  if (iVar4 < DAT_008570cc) {
    iVar4 = DAT_008570cc;
  }
  iVar6 = DAT_008570a8;
  if (DAT_008570b8 < DAT_008570a8) {
    iVar6 = DAT_008570b8;
  }
  iVar5 = DAT_008570a8;
  if (DAT_008570a8 < DAT_008570b8) {
    iVar5 = DAT_008570b8;
  }
  DAT_00857070 = (uint)(DAT_008570a8 < DAT_008570b8);
  if (DAT_008570c8 < iVar6) {
    iVar6 = DAT_008570c8;
  }
  if (iVar5 < DAT_008570c8) {
    DAT_00857070 = 2;
    iVar5 = DAT_008570c8;
  }
  iVar6 = iVar6 >> 0x10;
  iVar1 = STField<int>(this,0x30);
  DAT_00857060 = iVar6;
  if (iVar6 < iVar1) {
    DAT_00857060 = iVar1;
  }
  local_20 = (uint)(iVar6 < iVar1);
  DAT_008570e8 = iVar5 >> 0x10;
  if (STField<int>(this,0x38) < iVar5 >> 0x10) {
    local_20 = 1;
    DAT_008570e8 = STField<int>(this,0x38);
  }
  DAT_00857064 = iVar2 >> 0x10;
  if (iVar2 >> 0x10 < STField<int>(this,0x34)) {
    DAT_00857064 = STField<int>(this,0x34);
  }
  DAT_008570ec = iVar4 >> 0x10;
  if (STField<int>(this,0x3c) < iVar4 >> 0x10) {
    DAT_008570ec = STField<int>(this,0x3c);
  }
  if ((DAT_00857064 < DAT_008570ec) && (DAT_00857060 < DAT_008570e8)) {
    iVar2 = (DAT_008570ec - DAT_00857064) + 1;
    uStack_40 = 0x727c13;
    local_8 = 0xffffffff;
    *(uint *)((int)&uStack_40 + iVar2 * -0x20) = local_20;
    auStack_48[iVar2 * 0xfffffff8U + 1] = &stack0xffffffc4 + iVar2 * -0x20;
    auStack_48[iVar2 * -8] = 0x727c2e;
    ExceptionList = &local_14;
    FUN_00726d80((int *)auStack_48[iVar2 * 0xfffffff8U + 1],
                 *(int *)((int)&uStack_40 + iVar2 * -0x20));
    *(undefined1 **)((int)&uStack_40 + iVar2 * -0x20) = &stack0xffffffc4 + iVar2 * -0x20;
    auStack_48[iVar2 * 0xfffffff8U + 1] = 0x727c37;
    FUN_00727230(*(int **)((int)&uStack_40 + iVar2 * -0x20));
  }
  ExceptionList = local_14;
  return;
}

