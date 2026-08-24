#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005D4850 -> 006B7070 @ 005D488F */

void FUN_006b7070(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  uint *puVar7;
  undefined4 auStack_50 [2];
  undefined1 auStack_48 [4];
  int iStack_44;
  int *piStack_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_28 [2];
  byte *local_20;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d908;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffcc;
  if ((((byte *)param_1)[1] & 1) != 0) {
    piStack_40 = (int *)*param_1;
    puStack_38 = local_28;
    uStack_3c = 0;
    iStack_44 = 0x6b70b1;
    ExceptionList = &local_14;
    /* ST_CALLSITE[006B70AE]: CALL dword ptr [ECX + 0x58] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*piStack_40 + 0x58))();
    if (iVar3 == -0x7788ffe2) {
      local_8 = 0;
      iStack_44 = 0x6b70ce;
      iVar3 = -(local_28[0] + 3 & 0xfffffffc);
      local_1c = (undefined1 *)((int)&piStack_40 + iVar3);
      local_20 = (undefined1 *)((int)&piStack_40 + iVar3);
      puVar7 = (undefined4 *)((int)&piStack_40 + iVar3);
      for (uVar5 = local_28[0] >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = local_28[0] & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = 0;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      piVar1 = (int *)*param_1;
      iVar4 = *piVar1;
      *(uint **)((int)&iStack_44 + iVar3) = local_28;
      *(int *)(auStack_48 + iVar3) = (int)&piStack_40 + iVar3;
      *(int **)((int)auStack_50 + iVar3 + 4) = piVar1;
      pcVar2 = *(code **)(iVar4 + 0x58);
      puVar6 = (undefined1 *)((int)auStack_50 + iVar3);
      *(undefined4 *)((int)auStack_50 + iVar3) = 0x6b70f7;
      /* ST_CALLSITE[006B70F4]: CALL dword ptr [ECX + 0x58] */
      iVar4 = (*pcVar2)();
      if (iVar4 == 0) {
        *(uint *)((int)&uStack_3c + iVar3) = *(uint *)((int)&uStack_3c + iVar3) | 0x20;
        piVar1 = (int *)*param_1;
        iVar4 = *piVar1;
        *(undefined4 *)(puVar6 + -4) = 0;
        *(int *)((int)puVar6 + -8) = (int)&piStack_40 + iVar3;
        *(int **)(puVar6 + -0xc) = piVar1;
        pcVar2 = *(code **)(iVar4 + 0x7c);
        *(undefined4 *)(puVar6 + -0x10) = 0x6b710e;
        /* ST_CALLSITE[006B710B]: CALL dword ptr [EAX + 0x7c] */
        (*pcVar2)();
      }
    }
  }
  ExceptionList = local_14;
  return;
}

