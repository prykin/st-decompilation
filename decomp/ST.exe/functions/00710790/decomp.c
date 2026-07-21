
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 007140E0 -> 00710790 @ 00714523 */

void __cdecl FUN_00710790(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;

  if (((param_1 != (uint *)0x0) && (param_1[0x28] != 0)) && (uVar3 = param_1[0x2a], uVar3 != 0)) {
    iVar6 = 0;
    *(undefined4 *)((int)param_1 + 0x9a) = *(undefined4 *)(uVar3 + 0x9a);
    if (0 < **(short **)(uVar3 + 0x9a)) {
      iVar5 = 4;
      do {
        if ((iVar5 < 4) || (0x43 < iVar5)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar5 + uVar3);
        }
        *(undefined4 *)(iVar5 + (int)param_1) = uVar4;
        uVar3 = param_1[0x2a];
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < **(short **)(uVar3 + 0x9a));
    }
    puVar1 = (uint *)param_1[0x2a];
    if (puVar1[0x28] != 0) {
      FUN_00710790(puVar1);
    }
    puVar2 = (uint *)param_1[0x2a];
    *(undefined4 *)((int)param_1 + 0x8a) = *(undefined4 *)((int)puVar1 + 0x8a);
    if (puVar2[0x28] != 0) {
      FUN_00710790(puVar2);
    }
    puVar1 = (uint *)param_1[0x2a];
    *(undefined4 *)((int)param_1 + 0x86) = *(undefined4 *)((int)puVar2 + 0x86);
    if (puVar1[0x28] != 0) {
      FUN_00710790(puVar1);
    }
    puVar2 = (uint *)param_1[0x2a];
    *(undefined4 *)((int)param_1 + 0x92) = *(undefined4 *)((int)puVar1 + 0x92);
    if (puVar2[0x28] != 0) {
      FUN_00710790(puVar2);
    }
    *(undefined4 *)((int)param_1 + 0x8e) = *(undefined4 *)((int)puVar2 + 0x8e);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    param_1[0x2b] = *(uint *)(param_1[0x2a] + 0xac);
  }
  return;
}

