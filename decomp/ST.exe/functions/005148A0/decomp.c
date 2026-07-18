
void __thiscall FUN_005148a0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 < 1) {
    return;
  }
  iVar6 = param_1;
  do {
    piVar5 = (int *)(*(int *)((int)this + 0x1c7) + iVar6 * 0x11);
    if ((*piVar5 == *(int *)(param_1 * 0x11 + 4 + *(int *)((int)this + 0x1c7))) || (piVar5[1] == 0))
    {
      iVar1 = *(int *)((int)this + 0x1b3);
      uVar4 = 0;
      uVar2 = *(uint *)(iVar1 + 0xc);
      if (uVar2 != 0) {
        if (uVar2 == 0) {
          piVar3 = (int *)0x0;
          goto LAB_0051490d;
        }
        do {
          piVar3 = (int *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c));
LAB_0051490d:
          if ((*piVar3 == *piVar5) && (piVar3[1] == piVar5[1])) {
            if (*(char *)((int)piVar3 + 0x12) != '\0') {
              return;
            }
            HelpPanelTy::ChangeTree(this,piVar3,uVar4);
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      thunk_FUN_005148a0(this,iVar6);
      iVar6 = param_1;
    }
    iVar6 = iVar6 + -1;
    if (iVar6 < 1) {
      return;
    }
  } while( true );
}

