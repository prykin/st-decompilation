
int __thiscall FUN_0060c1a0(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;

  iVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (this == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)((int)this + 0x1d5);
    }
    puVar5 = param_1;
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
    *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)puVar5 + 2);
    iVar1 = 0x83;
    if (*(int *)((int)this + 0x234) == 0) {
      piVar2 = (int *)((int)param_1 + 0x83);
    }
    else {
      iVar1 = FUN_006b0060((uint *)0x0,(uint *)((int)param_1 + 0x87));
      *(int *)((int)this + 0x234) = iVar1;
      if ((*(char *)((int)this + 0x225) != '\0') || (iVar1 != 0)) {
        uVar4 = 0;
        if (0 < *(int *)(iVar1 + 0xc)) {
          bVar7 = *(int *)(iVar1 + 0xc) != 0;
          do {
            if (bVar7) {
              iVar1 = *(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c);
            }
            else {
              iVar1 = 0;
            }
            *(undefined4 *)(iVar1 + 0x3c) = 0xffffffff;
            iVar1 = *(int *)((int)this + 0x234);
            uVar4 = uVar4 + 1;
            bVar7 = uVar4 < *(uint *)(iVar1 + 0xc);
          } while ((int)uVar4 < (int)*(uint *)(iVar1 + 0xc));
        }
        if (*(char *)((int)this + 0x225) != '\0') {
          thunk_FUN_00609cd0(this);
        }
      }
      iVar1 = 0x10a;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      piVar2 = (int *)((int)param_1 + *(int *)((int)param_1 + 0x83) + 0x8b);
    }
    if ((*(int *)((int)this + 0x23c) != 0) && (*(int *)((int)this + 0x244) != 0)) {
      iVar3 = thunk_FUN_0060d660(this,piVar2);
      iVar1 = iVar1 + iVar3;
    }
  }
  return iVar1;
}

