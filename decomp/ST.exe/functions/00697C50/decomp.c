
undefined4 __thiscall FUN_00697c50(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [2];
  undefined4 local_8;
  
  local_8 = 0;
  if ((((param_1 < 1) || (param_2 < 0)) || (param_3 < 0)) ||
     ((*(int *)((int)this + 0x5833) <= param_2 || (*(int *)((int)this + 0x5837) <= param_3)))) {
    uVar2 = 0;
  }
  else {
    thunk_FUN_006a1370(*(int **)((int)this + 8),param_2,param_3,param_1,local_10);
    iVar1 = thunk_FUN_006a20e0(*(int **)((int)this + 8),param_2,param_3,param_1,0xff);
    uVar2 = 1;
    if (iVar1 != 0) {
      return local_8;
    }
  }
  return uVar2;
}

