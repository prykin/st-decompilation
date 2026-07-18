
uint __thiscall thunk_FUN_0063c380(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 - *(int *)((int)this + 0x28e);
  *(undefined4 *)((int)this + 0x27a) = *(undefined4 *)((int)this + 0x26e);
  iVar2 = ((int)*(short *)((int)this + 0x251) - (*(int *)((int)this + 0x296) * iVar2 * iVar2) / 10)
          - *(int *)((int)this + 0x292) * iVar2;
  *(int *)((int)this + 0x26e) = iVar2;
  if (*(int *)((int)this + 0x245) != 2) {
    uVar1 = thunk_FUN_00601500((void *)((int)this + 899),*(int *)((int)this + 0x266),
                               *(int *)((int)this + 0x26a),iVar2,*(int *)((int)this + 0x272),
                               *(int *)((int)this + 0x276),*(int *)((int)this + 0x27a),
                               *(int *)((int)this + 0x235),50000,*(int *)((int)this + 0x25d),
                               *(undefined2 *)((int)this + 0x261),0xa8,0,0);
    return uVar1;
  }
  if (iVar2 <= *(short *)((int)this + 599)) {
    return 1;
  }
  return 0;
}

