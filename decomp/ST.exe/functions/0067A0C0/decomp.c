
undefined4 __thiscall FUN_0067a0c0(void *this,uint param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x695);
  if (((iVar1 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)*(uint *)(iVar1 + 0xc))) {
    if (param_1 < *(uint *)(iVar1 + 0xc)) {
      piVar2 = (int *)(*(int *)(iVar1 + 8) * param_1 + *(int *)(iVar1 + 0x1c));
    }
    else {
      piVar2 = (int *)0x0;
    }
    if (((piVar2[1] != 0) && ((undefined4 *)*piVar2 != (undefined4 *)0x0)) && (param_2 != 0)) {
      uVar3 = (*(code *)**(undefined4 **)*piVar2)(param_2);
      return uVar3;
    }
  }
  return 0xffff;
}

