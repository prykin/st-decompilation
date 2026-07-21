
void FUN_0075d5f0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;

  puVar3 = param_1;
  puVar2 = (undefined4 *)*param_4;
  iVar6 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)((int)param_1 + 0x126)) {
    param_4 = param_3;
    param_1 = puVar2;
    do {
      puVar7 = (undefined1 *)*param_4;
      puVar4 = (undefined1 *)*param_1;
      puVar5 = puVar4 + puVar3[0x1a];
      for (; puVar4 < puVar5; puVar4 = puVar4 + 2) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar4 = uVar1;
        puVar4[1] = uVar1;
      }
      FUN_00759eb0((int)puVar2,iVar6,(int)puVar2,iVar6 + 1,1,puVar3[0x1a]);
      iVar6 = iVar6 + 2;
      param_4 = param_4 + 1;
      param_1 = param_1 + 2;
    } while (iVar6 < *(int *)((int)puVar3 + 0x126));
  }
  return;
}

