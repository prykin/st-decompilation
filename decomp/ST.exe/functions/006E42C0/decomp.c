
undefined4 __thiscall FUN_006e42c0(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int local_14 [4];

  if (*(int *)((int)this + 0x14) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x14) + 4) = 0;
    uVar1 = FUN_006b1190(*(AnonShape_006B1190_EDB2B5FD **)((int)this + 0x14),local_14);
    while (-1 < (int)uVar1) {
      iVar2 = 4;
      bVar5 = true;
      piVar3 = param_1;
      piVar4 = local_14;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        FUN_006b0c70(*(DArrayTy **)((int)this + 0x14),uVar1);
      }
      uVar1 = FUN_006b1190(*(AnonShape_006B1190_EDB2B5FD **)((int)this + 0x14),local_14);
    }
    if ((*(DArrayTy **)((int)this + 0x14))->count == 0) {
      DArrayDestroy(*(DArrayTy **)((int)this + 0x14));
      *(undefined4 *)((int)this + 0x14) = 0;
    }
  }
  return 0;
}

