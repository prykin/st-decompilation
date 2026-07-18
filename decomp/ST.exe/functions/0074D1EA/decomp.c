
undefined4 * __thiscall FUN_0074d1ea(void *this,BOOL param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,param_1,0,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  return this;
}

