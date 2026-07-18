
undefined4 __thiscall FUN_0068e730(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    return 0xfffffffc;
  }
  uVar2 = thunk_FUN_0068e140(this,*(int *)(param_1 + 0x18));
  if ((int)uVar2 < 0) {
    return 0xfffffffc;
  }
  iVar1 = *(int *)((int)this + 0xa5);
  if (uVar2 < *(uint *)(iVar1 + 0xc)) {
    puVar3 = (undefined4 *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c));
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  puVar3[1] = 0;
  *puVar3 = 0;
  AiTactClassTy::BackFromRepair(this,*(short *)(param_1 + 0x7d));
  thunk_FUN_0065d590(param_1);
  return 0;
}

