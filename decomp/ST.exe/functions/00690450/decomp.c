
void __thiscall FUN_00690450(void *this,short param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  iVar2 = *(int *)((int)this + 0xa5);
  if (0 < *(int *)(iVar2 + 0xc)) {
    bVar4 = *(int *)(iVar2 + 0xc) != 0;
    do {
      if ((((bVar4) && (iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c), iVar2 != 0))
          && (puVar1 = *(undefined4 **)(iVar2 + 4), puVar1 != (undefined4 *)0x0)) &&
         ((*(short *)((int)puVar1 + 0x7b) == param_1 && (puVar1 != (undefined4 *)0x0)))) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*puVar1)(param_2);
      }
      iVar2 = *(int *)((int)this + 0xa5);
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < *(uint *)(iVar2 + 0xc);
    } while ((int)uVar3 < (int)*(uint *)(iVar2 + 0xc));
  }
  return;
}

