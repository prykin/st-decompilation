
undefined4 __thiscall FUN_0069acc0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_c;
  uint local_8;

  iVar4 = param_2 / 2;
  iVar3 = param_1 / 2;
  iVar1 = thunk_FUN_006a1370(*(int **)((int)this + 8),iVar3,iVar4,param_3,&local_c);
  if ((((local_8 & 0x2000) != 0) || ((short)local_8 == 0x1100)) && ((local_8 & 0x4000) == 0)) {
    iVar2 = thunk_FUN_006a20e0(*(int **)((int)this + 8),iVar3,iVar4,param_3,0xff);
    if (iVar2 == 0) {
      return 1;
    }
    if (((short)iVar1 == param_3) &&
       (iVar1 = thunk_FUN_006a20e0(*(int **)((int)this + 8),iVar3,iVar4,param_3 + 1,0xff),
       iVar1 == 0)) {
      return 1;
    }
  }
  return 0xffffffff;
}

