
undefined4 __thiscall FUN_00568780(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0xf8b) == 0) {
    return 0;
  }
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar1 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    for (; param_1 <= param_2; param_1 = param_1 + 1) {
      FUN_006c1f00(param_1,&local_c,(uint *)0x0);
      if (local_c == 0) {
        local_8 = 1;
      }
    }
    DAT_00858df8 = (undefined4 *)local_50;
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return local_8;
}

