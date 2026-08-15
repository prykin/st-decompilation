#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004AE080 -> 00709670 @ 004AE096; FUN_004ae080 parameter param_3 | 00709670 -> 00709470
   @ 0070976B */

void __thiscall FUN_00709670(void *this,uint param_1,int param_2,int param_3,byte param_4)

{
  uint *puVar1;
  short *psVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000011;
  uint auStack_54 [5];
  byte abStack_40 [4];
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079e210;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  if (((param_1 < STField<uint>(this,0x310)) &&
      (puVar1 = (uint *)(STField<int>(this,0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) != 0))
     && ((puVar1[1] & 0x6000) == 0)) {
    uVar4 = puVar1[0x25];
    abStack_40[0] = 0xef;
    abStack_40[1] = 0x96;
    abStack_40[2] = 0x70;
    abStack_40[3] = 0;
    iVar5 = uVar4 * -4;
    local_8 = 0xffffffff;
    puVar8 = (undefined4 *)(&stack0xffffffc4 + iVar5);
    for (uVar6 = uVar4 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    iVar7 = 0;
    if (0 < (int)puVar1[0x25]) {
      do {
        psVar2 = (short *)(puVar1[0x29] + iVar7 * 4);
        uVar3 = psVar2[1];
        if (((uVar3 & 0xc000) != 0) && ((uVar3 & 0x2115) == 0)) {
          *(undefined4 *)(&stack0xffffffc4 + iVar7 * 4 + iVar5) =
               *(undefined4 *)(*(int *)(puVar1[0x28] + 4 + iVar7 * 8) + *psVar2 * 4);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)puVar1[0x25]);
    }
    *(undefined4 *)(abStack_40 + iVar5) = _param_4;
    auStack_54[4 - uVar4] = param_3;
    auStack_54[3 - uVar4] = param_2;
    auStack_54[2 - uVar4] = puVar1[0x25];
    auStack_54[1 - uVar4] = (uint)(&stack0xffffffc4 + iVar5);
    auStack_54[-uVar4] = 0x709770;
    ExceptionList = &local_14;
    ST3DSMAPContext::sub_00709470
              (this,(int *)auStack_54[1 - uVar4],auStack_54[2 - uVar4],auStack_54[3 - uVar4],
               auStack_54[4 - uVar4],abStack_40[iVar5]);
  }
  ExceptionList = local_14;
  return;
}

