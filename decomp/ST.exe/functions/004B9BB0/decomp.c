
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=004B9C6C MOV AX,word ptr
   [EBP + 0xc] */

undefined4 __thiscall FUN_004b9bb0(void *this,int param_1,ushort param_2,undefined2 param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  ushort local_c;
  undefined2 local_a;

  iVar2 = *(int *)((int)this + 0x241) - param_1;
  *(int *)((int)this + 0x241) = iVar2;
  bVar1 = LookupRecordByte(*(char *)((int)this + 0x23d));
  *(int *)((int)this + 0x5d7) =
       (iVar2 * 100) / *(int *)(&DAT_007e4178 + ((uint)bVar1 + *(int *)((int)this + 0x235) * 3) * 4);
  if (iVar2 < 1) {
    iVar2 = *(int *)((int)this + 0x245);
    *(undefined4 *)((int)this + 0x241) = 0;
    *(undefined4 *)((int)this + 0x5d7) = 0;
    if (((iVar2 == 0) || (iVar2 == 4)) || (iVar2 == 5)) {
      *(undefined4 *)((int)this + 0x5df) = 0;
      TLOBaseTy::SetState(this,1,1);
      if (DAT_008117bc != nullptr) {
        local_e = *(undefined2 *)((int)this + 0x32);
        local_10 = *(undefined2 *)((int)this + 0x24);
        local_a = param_3;
        local_14 = 0x5dd1;
        local_c = param_2;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*DAT_008117bc)(local_24);
        return 0;
      }
    }
  }
  else {
    thunk_FUN_004cc840(this);
  }
  return 0;
}

