
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00483833 MOV AX,word ptr
   [EBP + 0x8] */

void __thiscall FUN_00483830(void *this,ushort param_1)

{
  *(ushort *)((int)this + 0x7f2) = param_1;
  return;
}

