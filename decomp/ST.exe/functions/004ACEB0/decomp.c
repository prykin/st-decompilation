
int __thiscall FUN_004aceb0(void *this,char param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;

  iVar3 = (int)param_1;
  FUN_006e9490(*(void **)((int)this + 0x3c),*(uint **)((int)this + 0x18),iVar3,0);
  iVar2 = *(int *)((int)this + 0x20);
  pbVar1 = (byte *)(iVar2 + 0xe + iVar3 * 0x24);
  *pbVar1 = *pbVar1 | 0x20;
  return iVar2 + 0xe + iVar3 * 0x24;
}

