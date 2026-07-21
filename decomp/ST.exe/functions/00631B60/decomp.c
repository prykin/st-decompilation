
undefined4 __thiscall FUN_00631b60(void *this,uint param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;

  uVar2 = 0;
  iVar3 = *(int *)((int)this + 0x6d);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iVar3 + 0xc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((param_1 < uVar1) &&
        (puVar5 = (undefined4 *)(*(int *)(iVar3 + 8) * param_1 + *(int *)(iVar3 + 0x1c)),
        puVar5 != (undefined4 *)0x0)) && (puVar5[1] == param_2)) {
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)puVar5 = 0;
      return 1;
    }
    uVar4 = 0;
    if (0 < (int)uVar1) {
      bVar6 = uVar1 != 0;
      do {
        if (((bVar6) &&
            (puVar5 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c)),
            puVar5 != (undefined4 *)0x0)) && (puVar5[1] == param_2)) {
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          *(undefined1 *)puVar5 = 0;
          uVar2 = 1;
        }
        iVar3 = *(int *)((int)this + 0x6d);
        uVar4 = uVar4 + 1;
        bVar6 = uVar4 < *(uint *)(iVar3 + 0xc);
      } while ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc));
    }
  }
  return uVar2;
}

