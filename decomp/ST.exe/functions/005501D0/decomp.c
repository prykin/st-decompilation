
void __thiscall FUN_005501d0(void *this,undefined1 *param_1)

{
  undefined4 in_stack_ffffffdc;
  undefined1 *in_stack_ffffffe0;
  
  *(undefined1 **)(param_1 + 0x17) = param_1 + 0x1b;
  if ((param_1[0xe] != '\x05') && (param_1[0xe] != '2')) {
    STAllPlayersC::CmdToPlsObj(DAT_007fa174,param_1,in_stack_ffffffdc,in_stack_ffffffe0);
    return;
  }
  (**(code **)(**(int **)((int)this + 0x1c) + 0x20))(&stack0xffffffdc);
  return;
}

