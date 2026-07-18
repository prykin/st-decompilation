
void __thiscall thunk_FUN_00567180(void *this,undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 in_stack_ffffffb8;
  
  pvVar2 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar1 = __setjmp3((undefined4 *)&stack0xffffffb8,0,pvVar2,in_stack_ffffffb8);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0xf8b) = 1;
    FUN_006c1530(param_1,1);
    FUN_006c2140(0x41200000);
    DAT_00858df8 = pvVar2;
    return;
  }
  DAT_00858df8 = pvVar2;
  *(undefined4 *)((int)this + 0xf8b) = 0;
  return;
}

