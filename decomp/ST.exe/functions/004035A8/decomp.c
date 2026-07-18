
int __thiscall thunk_FUN_005fd940(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_8;
  
  iVar2 = 0;
  uStack_8 = 0;
  if (((*(int *)((int)this + 0x233) != 0) && (*(int *)((int)this + 0x226) != 0)) &&
     (iVar3 = 0, 0 < *(int *)((int)this + 0x226))) {
    iVar4 = 0;
    do {
      if (iVar3 == param_1) {
        if (*(int *)(iVar4 + 0x4e + *(int *)((int)this + 0x233)) != 0) {
          FUN_006ab060((undefined4 *)(iVar4 + 0x4e + *(int *)((int)this + 0x233)));
          iVar2 = uStack_8;
        }
        iVar1 = *(int *)(iVar4 + 0x42 + *(int *)((int)this + 0x233));
        if (iVar1 != 0) {
          thunk_FUN_004ad310(iVar1);
          FUN_0072e2b0(*(undefined4 **)(iVar4 + 0x42 + *(int *)((int)this + 0x233)));
          *(undefined4 *)(iVar4 + 0x42 + *(int *)((int)this + 0x233)) = 0;
          iVar2 = uStack_8;
        }
        *(undefined4 *)(iVar4 + 0x39 + *(int *)((int)this + 0x233)) = 5;
      }
      else if (*(int *)(iVar4 + 0x39 + *(int *)((int)this + 0x233)) != 5) {
        iVar2 = iVar2 + 1;
        uStack_8 = iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x52;
    } while (iVar3 < *(int *)((int)this + 0x226));
    return iVar2;
  }
  return 0;
}

