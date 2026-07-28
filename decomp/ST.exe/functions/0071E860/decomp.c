
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071E863 MOV AX,word ptr
   [EBP + 0x8]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071E867 MOV DX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071E872 MOV AX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0071E884 MOV DX,word ptr
   [EBP + 0x14] */

int __thiscall FUN_0071e860(void *this,ushort param_1,ushort param_2,ushort param_3,ushort param_4)

{
  int iVar1;

  *(ushort *)((int)this + 0x148) = param_1;
  *(ushort *)((int)this + 0x14c) = param_3;
  *(ushort *)((int)this + 0x14a) = param_2;
  *(ushort *)((int)this + 0x14e) = param_4;
  iVar1 = FUN_006e5fe0(this,(undefined4 *)((int)this + 0x134));
  return -(uint)(iVar1 != 0);
}

