
int __thiscall thunk_FUN_004ace60(void *this,char param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  FUN_006e9490(*(void **)((int)this + 0x3c),*(uint **)((int)this + 0x18),iVar3,1);
  iVar2 = *(int *)((int)this + 0x20);
  puVar1 = (ushort *)(iVar2 + 0xe + iVar3 * 0x24);
  *puVar1 = *puVar1 & 0xffdf;
  return iVar2 + 0xe + iVar3 * 0x24;
}

