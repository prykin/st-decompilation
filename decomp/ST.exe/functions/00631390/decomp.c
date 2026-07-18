
undefined4 __thiscall FUN_00631390(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  if (this == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)((int)this + 0x1c);
  }
  puVar5 = param_1;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
  piVar6 = (int *)((int)param_1 + 0x55);
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x61) = 0xffffffff;
  if (*(int *)((int)this + 0x38) != 0) {
    uVar1 = FUN_006b0060((uint *)0x0,(uint *)((int)param_1 + 0x59));
    *(undefined4 *)((int)this + 0x38) = uVar1;
    piVar6 = (int *)((int)param_1 + 0x59 + *piVar6);
  }
  if (*(int *)((int)this + 0x34) != 0) {
    iVar2 = FUN_006aac70(*(int *)((int)this + 0x30));
    *(int *)((int)this + 0x34) = iVar2;
  }
  if (*(int **)((int)this + 0x34) != (int *)0x0) {
    uVar4 = *(uint *)((int)this + 0x30);
    piVar8 = *(int **)((int)this + 0x34);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)piVar8 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
  }
  return *(undefined4 *)((int)this + 0x30);
}

