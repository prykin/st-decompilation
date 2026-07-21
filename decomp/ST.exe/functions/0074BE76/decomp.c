
undefined4 __thiscall FUN_0074be76(void *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 local_8;

  local_8 = 0;
  if (*(int *)((int)this + 0x8c) == 0) {
    pvVar1 = (void *)Library::MSVCRT::FUN_0072e530(0xe0);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0074c38f(pvVar1,0,(int)this,&local_8,(char *)L"XForm In");
    }
    *(undefined4 **)((int)this + 0x8c) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    pvVar1 = (void *)Library::MSVCRT::FUN_0072e530(0xa8);
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0074c658(pvVar1,0,(int)this,&local_8,(char *)L"XForm Out");
    }
    *(undefined4 **)((int)this + 0x90) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      if (*(int **)((int)this + 0x8c) != (int *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(**(int **)((int)this + 0x8c) + 0xc))(1);
      }
      *(undefined4 *)((int)this + 0x8c) = 0;
    }
  }
  if (param_1 == 0) {
    return *(undefined4 *)((int)this + 0x8c);
  }
  if (param_1 != 1) {
    return 0;
  }
  return *(undefined4 *)((int)this + 0x90);
}

