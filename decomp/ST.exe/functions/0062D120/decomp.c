
undefined4 __thiscall
FUN_0062d120(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if ((this != (void *)0xffffffd0) && (iVar2 = *(int *)((int)this + param_1 * 4 + 0x30), iVar2 != 0)
     ) {
    if ((int)param_6 < 0) {
      uVar1 = *(uint *)(iVar2 + 0xc);
      uVar4 = 0;
      if (0 < (int)uVar1) {
        bVar5 = uVar1 != 0;
        while ((((!bVar5 ||
                 (iVar3 = *(int *)(iVar2 + 8) * uVar4 + *(int *)(iVar2 + 0x1c), iVar3 == 0)) ||
                (*(int *)(iVar3 + 4) != param_2)) ||
               (((*(int *)(iVar3 + 8) != param_3 || (*(int *)(iVar3 + 0xc) != param_4)) ||
                (*(int *)(iVar3 + 0x14) != param_5))))) {
          uVar4 = uVar4 + 1;
          bVar5 = uVar4 < uVar1;
          if ((int)uVar1 <= (int)uVar4) {
            return 0;
          }
        }
        if (param_7 == 0) {
          iVar2 = *(int *)(iVar3 + 0x1c) + -1;
        }
        else {
          iVar2 = *(int *)(iVar3 + 0x1c) + 1;
        }
        *(int *)(iVar3 + 0x1c) = iVar2;
        if (iVar2 < 0) {
          *(undefined4 *)(iVar3 + 0x1c) = 0;
        }
        return *(undefined4 *)(iVar3 + 0x1c);
      }
    }
    else {
      if (param_6 < *(uint *)(iVar2 + 0xc)) {
        iVar2 = *(int *)(iVar2 + 8) * param_6 + *(int *)(iVar2 + 0x1c);
      }
      else {
        iVar2 = 0;
      }
      if (param_7 == 0) {
        iVar3 = *(int *)(iVar2 + 0x1c) + -1;
      }
      else {
        iVar3 = *(int *)(iVar2 + 0x1c) + 1;
      }
      *(int *)(iVar2 + 0x1c) = iVar3;
      if (iVar3 < 0) {
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        return 0;
      }
    }
  }
  return 0;
}

