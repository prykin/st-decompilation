
undefined4 __thiscall FUN_00697160(void *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_c;
  uint local_8;

  thunk_FUN_006a1370(*(int **)((int)this + 8),param_1,param_2,param_3,&local_c);
  if (((local_8 & 0x2000) == 0) || (uVar1 = 1, (local_8 & 0xf) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

