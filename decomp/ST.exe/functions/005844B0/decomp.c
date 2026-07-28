
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=005844B3 MOV AX,word ptr
   [EBP + 0xc] */

void __thiscall FUN_005844b0(void *this,undefined4 param_1,ushort param_2)

{
  *(ushort *)((int)this + 0x292) = param_2;
  *(undefined4 *)((int)this + 0x25a) = param_1;
  return;
}

