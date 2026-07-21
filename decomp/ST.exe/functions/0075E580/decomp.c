
void FUN_0075e580(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar5 = *(int *)((int)param_1 + 0x1ba);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)*param_1)(param_1,1,0x7fc);
  piVar2 = (int *)(iVar1 + 0x3fc);
  iVar3 = 0;
  *(int **)(iVar5 + 0x28) = piVar2;
  iVar5 = 0;
  param_1 = (undefined4 *)0x10;
  uVar4 = 0x10;
  piVar6 = piVar2;
  piVar7 = piVar2;
  do {
    *piVar6 = iVar3;
    *piVar7 = iVar5;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + -1;
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + -1;
    param_1 = (undefined4 *)((int)param_1 + -1);
  } while (param_1 != (undefined4 *)0x0);
  piVar6 = (int *)(iVar1 + 0x43c);
  piVar7 = (int *)(iVar1 + 0x3bc);
  do {
    *piVar6 = iVar3;
    uVar4 = uVar4 + 1;
    *piVar7 = -iVar3;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + -1;
    iVar3 = iVar3 + (~uVar4 & 1);
  } while ((int)uVar4 < 0x30);
  if ((int)uVar4 < 0x100) {
    piVar6 = piVar2 + uVar4;
    piVar2 = piVar2 + -uVar4;
    iVar5 = 0x100 - uVar4;
    do {
      *piVar6 = iVar3;
      *piVar2 = -iVar3;
      piVar6 = piVar6 + 1;
      piVar2 = piVar2 + -1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

