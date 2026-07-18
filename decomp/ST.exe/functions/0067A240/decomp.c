
void __thiscall FUN_0067a240(void *this,undefined *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x695);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iVar3 + 0xc);
    uVar4 = 0;
    if (0 < (int)uVar1) {
      do {
        if (((iVar3 != 0) && (-1 < (int)uVar4)) && ((int)uVar4 < (int)uVar1)) {
          if (uVar4 < uVar1) {
            puVar2 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
          }
          else {
            puVar2 = (undefined4 *)0x0;
          }
          if (((puVar2[1] != 0) && ((void *)*puVar2 != (void *)0x0)) &&
             (iVar3 = thunk_FUN_006904d0((void *)*puVar2,param_1,param_2), iVar3 != 0)) {
            return;
          }
        }
        iVar3 = *(int *)((int)this + 0x695);
        uVar4 = uVar4 + 1;
        uVar1 = *(uint *)(iVar3 + 0xc);
      } while ((int)uVar4 < (int)uVar1);
    }
  }
  return;
}

