
undefined4 __thiscall FUN_00693d00(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 in_stack_ffffffb4;
  
  *(undefined4 *)this = 1;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xffffff05 | 5;
  *(undefined4 *)((int)this + 8) = param_2;
  pvVar2 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb0;
  iVar1 = __setjmp3((undefined4 *)&stack0xffffffb4,0,pvVar2,in_stack_ffffffb4);
  if (iVar1 == 0) {
    FUN_006f13f0(0,PTR_s_DESCRIPTOR_0079d770,this,0x1999,(undefined4 *)0x0,'\0',(uint *)0x0);
    DAT_00858df8 = pvVar2;
    return 1;
  }
  DAT_00858df8 = pvVar2;
  return 0;
}

