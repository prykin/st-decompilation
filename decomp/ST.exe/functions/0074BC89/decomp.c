
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0074BC6A -> 0074BC89 @ 0074BC7E */

void FUN_0074bc89(LPVOID param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar2 = param_2;
  puVar6 = param_1;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  if (param_2[0x10] != 0) {
    puVar2 = CoTaskMemAlloc(param_2[0x10]);
    *(undefined4 **)((int)param_1 + 0x44) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)((int)param_1 + 0x40) = 0;
    }
    else {
      uVar5 = *(uint *)((int)param_1 + 0x40);
      puVar6 = (undefined4 *)param_2[0x11];
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
  }
  piVar1 = *(int **)((int)param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return;
}

