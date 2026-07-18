
void __thiscall FUN_006ea460(void *this,uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < *(uint *)((int)this + 0x310)) {
    iVar2 = *(int *)((int)this + 0x31c);
    iVar1 = iVar2 + param_1 * 0x114;
    if (((*(uint *)(iVar2 + param_1 * 0x114) & 0x8000) != 0) &&
       ((param_2 == -1 ||
        (((-1 < param_2 && (param_2 < (int)*(uint *)((int)this + 0x310))) &&
         ((*(uint *)(iVar2 + param_2 * 0x114) & 0x8000) != 0)))))) {
      *(int *)(iVar1 + 0x1c) = param_2;
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffffaf | 0x20;
      return;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

