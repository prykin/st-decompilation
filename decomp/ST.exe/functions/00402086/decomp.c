
void __thiscall thunk_FUN_0067a1b0(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
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
            piVar2 = (int *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
          }
          else {
            piVar2 = (int *)0x0;
          }
          if (((piVar2[1] != 0) && ((undefined4 *)*piVar2 != (undefined4 *)0x0)) && (param_1 != 0))
          {
            (*(code *)**(undefined4 **)*piVar2)(param_1);
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

