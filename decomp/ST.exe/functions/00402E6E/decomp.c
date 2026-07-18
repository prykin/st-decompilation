
uint __thiscall thunk_FUN_0062d230(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = *(int *)((int)this + *param_1 * 4 + 0x30);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xc);
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar5 = uVar2 != 0;
      while ((((!bVar5 || (iVar3 = *(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c), iVar3 == 0)
               ) || (*(int *)(iVar3 + 4) != param_1[1])) ||
             (((*(int *)(iVar3 + 8) != param_1[2] || (*(int *)(iVar3 + 0xc) != param_1[3])) ||
              (*(int *)(iVar3 + 0x14) != param_1[5]))))) {
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < uVar2;
        if ((int)uVar2 <= (int)uVar4) {
          return 0xffffffff;
        }
      }
      FUN_006b0c70(iVar1,uVar4);
      return uVar4;
    }
  }
  return 0xffffffff;
}

