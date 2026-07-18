
void __thiscall thunk_FUN_0065d940(void *this,int param_1,int param_2)

{
  undefined2 *puVar1;
  int *piVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *pvVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_1 != 0) {
    uVar4 = 0;
    if (0 < *(int *)(param_1 + 0xc)) {
      bVar5 = *(int *)(param_1 + 0xc) != 0;
      pvVar3 = this;
      do {
        if (bVar5) {
          pvVar3 = *(void **)(param_1 + 0x1c);
          puVar1 = (undefined2 *)(*(int *)(param_1 + 8) * uVar4 + (int)pvVar3);
        }
        else {
          puVar1 = (undefined2 *)0x0;
        }
        piVar2 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)pvVar3 >> 8),
                                                    *(undefined1 *)((int)this + 0x24)),
                                           CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1),1);
        pvVar3 = extraout_ECX;
        if (piVar2 != (int *)0x0) {
          thunk_FUN_0065d760(piVar2,param_2);
          pvVar3 = extraout_ECX_00;
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < *(uint *)(param_1 + 0xc);
      } while ((int)uVar4 < (int)*(uint *)(param_1 + 0xc));
    }
  }
  return;
}

