
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0060BC83 MOV EAX,dword ptr [EBP + 0xc];
   first-use mask */

void __thiscall FUN_0060bc80(void *this,undefined4 param_1,ushort param_2)

{
  *(undefined4 *)((int)this + 0x1d9) = param_1;
  *(uint *)((int)this + 0x205) = (uint)param_2;
  return;
}

