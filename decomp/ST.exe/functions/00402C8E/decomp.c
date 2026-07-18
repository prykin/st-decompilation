
void __fastcall thunk_FUN_00661580(void *param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  this = *(void **)((int)param_1 + 0x284);
  if (this == (void *)0x0) {
    return;
  }
  if (*(int *)((int)param_1 + 0x20b) == 0) {
    return;
  }
  if ((*(int *)((int)param_1 + 0x1fb) != 0) &&
     (*(uint *)((int)param_1 + 0x280) <
      (uint)(*(int *)((int)param_1 + 0x1ff) + *(int *)((int)param_1 + 0x1fb)))) {
    return;
  }
  *(undefined4 *)((int)param_1 + 0x1ff) = *(undefined4 *)((int)param_1 + 0x280);
  if ((*(char *)((int)param_1 + 0xff) != '\0') && (*(short *)((int)param_1 + 0x7b) == 2)) {
    iVar1 = *(int *)((int)this + 0x138);
    if (*(short *)((int)param_1 + 0x39) != 3) {
      if (iVar1 != 0) goto LAB_006615ff;
      iVar1 = *(int *)((int)this + 0x134);
    }
    if (iVar1 == 0) {
      return;
    }
  }
LAB_006615ff:
  iVar1 = thunk_FUN_0068e800(this,*(short *)((int)param_1 + 0x7d));
  if (iVar1 < (int)(3 - (uint)(*(short *)((int)param_1 + 0x7b) != 1))) {
    iVar1 = *(int *)((int)param_1 + 0x20b);
    uVar2 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar4 = *(int *)(iVar1 + 0xc) != 0;
      do {
        if (bVar4) {
          puVar3 = (uint *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c));
        }
        else {
          puVar3 = (uint *)0x0;
        }
        if (((puVar3[10] == 0) && (puVar3[9] == 0)) &&
           (thunk_FUN_00660f70(param_1,puVar3,(short)uVar2), puVar3[9] != 0)) {
          return;
        }
        iVar1 = *(int *)((int)param_1 + 0x20b);
        uVar2 = uVar2 + 1;
        bVar4 = uVar2 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
    }
  }
  return;
}

