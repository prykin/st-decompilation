
void __thiscall
FUN_0055c0e0(void *this,char *param_1,undefined4 param_2,int param_3,uint param_4,
            undefined4 *param_5)

{
  int iVar1;
  void *pvVar2;
  undefined4 in_stack_ffffffbc;
  
  pvVar2 = DAT_00858df8;
  if (((*(char *)((int)this + 9) == '\0') && (DAT_0081174c != (void *)0x0)) &&
     (param_5 != (undefined4 *)0x0)) {
    DAT_00858df8 = &stack0xffffffb8;
    iVar1 = __setjmp3((undefined4 *)&stack0xffffffbc,0,pvVar2,in_stack_ffffffbc);
    if (iVar1 == 0) {
      thunk_FUN_005a1920(DAT_0081174c,param_1,param_2,param_3,param_4,param_5);
      DAT_00858df8 = pvVar2;
      return;
    }
  }
  DAT_00858df8 = pvVar2;
  return;
}

