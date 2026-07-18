
uint __thiscall thunk_FUN_0055b9f0(void *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = *(int *)((int)this + 0x110);
  uVar4 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        pcVar3 = (char *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c));
      }
      else {
        pcVar3 = (char *)0x0;
      }
      if ((((*(int *)(pcVar3 + 8) == *(int *)(param_1 + 8)) && (*pcVar3 == *param_1)) &&
          (pcVar3[1] == param_1[1])) &&
         (((*(short *)(pcVar3 + 2) == *(short *)(param_1 + 2) &&
           (*(short *)(pcVar3 + 4) == *(short *)(param_1 + 4))) &&
          ((pcVar3[6] == param_1[6] && (pcVar3[7] == param_1[7])))))) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
    } while ((int)uVar4 < (int)uVar2);
  }
  return 0xffffffff;
}

