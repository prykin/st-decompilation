
undefined4 __thiscall thunk_FUN_00604fc0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  
  puVar5 = param_1;
  puVar7 = (undefined4 *)((int)this + 0x1d5);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)((int)this + 0x215) = param_1[0x10];
  puVar5 = param_1 + 0x11;
  puVar7 = (undefined4 *)((int)this + 0x219);
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  piVar8 = (int *)((int)param_1 + 0xe2);
  *(undefined4 *)((int)this + 0x269) = param_1[0x25];
  *(undefined1 *)((int)this + 0x26d) = *(undefined1 *)(param_1 + 0x26);
  *(undefined4 *)((int)this + 0x26e) = *(undefined4 *)((int)param_1 + 0x99);
  *(undefined4 *)((int)this + 0x2b7) = *(undefined4 *)((int)param_1 + 0xde);
  *(undefined4 *)((int)this + 699) = 0;
  *(undefined4 *)((int)this + 0x272) = *(undefined4 *)((int)param_1 + 0x9d);
  *(undefined4 *)((int)this + 0x276) = *(undefined4 *)((int)param_1 + 0xa1);
  *(undefined4 *)((int)this + 0x27a) = *(undefined4 *)((int)param_1 + 0xa5);
  *(undefined4 *)((int)this + 0x27e) = *(undefined4 *)((int)param_1 + 0xa9);
  if (*(int *)((int)this + 0x215) != 0) {
    iVar3 = *piVar8;
    uVar1 = FUN_006b0060((uint *)0x0,(uint *)((int)param_1 + 0xe6));
    *(undefined4 *)((int)this + 0x215) = uVar1;
    piVar8 = (int *)((int)param_1 + 0xe6 + iVar3);
  }
  iVar3 = *(int *)((int)this + 0x269);
  if (iVar3 != 0) {
    uVar6 = 0;
    if (0 < iVar3) {
      piVar2 = (int *)((int)this + 0x219);
      piVar9 = piVar8;
      do {
        if (*piVar2 != 0) {
          uVar6 = uVar6 + 4 + *piVar9;
          piVar9 = (int *)((int)piVar9 + *piVar9 + 4);
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (uVar6 != 0) {
        piVar2 = (int *)Library::DKW::LIB::FUN_006aac70(uVar6);
        *(int **)((int)this + 0x2b3) = piVar2;
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *piVar2 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar2 = piVar2 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(char *)piVar2 = (char)*piVar8;
          piVar8 = (int *)((int)piVar8 + 1);
          piVar2 = (int *)((int)piVar2 + 1);
        }
      }
    }
  }
  return 0;
}

