
uint __thiscall FUN_006ea560(void *this,uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 < *(uint *)((int)this + 0x310)) &&
     (iVar1 = *(int *)((int)this + 0x31c) + param_1 * 0x114,
     (*(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114) & 0x8000) != 0)) {
    uVar2 = *(uint *)(iVar1 + 4);
    uVar3 = ~uVar2 >> 2 & 1;
    if (param_2 != 0) {
      *(uint *)(iVar1 + 4) = uVar2 & 0xfffffffb;
      return uVar3;
    }
    *(uint *)(iVar1 + 4) = uVar2 | 4;
    return uVar3;
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return 0;
}

