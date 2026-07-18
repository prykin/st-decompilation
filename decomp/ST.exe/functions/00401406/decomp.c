
int __thiscall thunk_FUN_00696d00(void *this,int *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *(int *)((int)param_1 + 0x19), iVar1 != 0)) {
    uVar3 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar4 = *(int *)(iVar1 + 0xc) != 0;
      while( true ) {
        if (bVar4) {
          puVar2 = (uint *)(*(int *)(iVar1 + 8) * uVar3 + *(int *)(iVar1 + 0x1c));
        }
        else {
          puVar2 = (uint *)0x0;
        }
        iVar1 = thunk_FUN_00696c40(this,*puVar2,*param_1,param_2);
        if (iVar1 == 0) break;
        iVar1 = *(int *)((int)param_1 + 0x19);
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < *(uint *)(iVar1 + 0xc);
        if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar3) {
          return 0;
        }
      }
      if ((int)*puVar2 < 0) {
        return 0;
      }
      iVar1 = thunk_FUN_006961b0(this,param_2,*puVar2,0,0);
      return iVar1;
    }
  }
  return 0;
}

