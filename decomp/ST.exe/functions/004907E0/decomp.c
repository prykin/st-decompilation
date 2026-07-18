
void __thiscall FUN_004907e0(void *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_14 [2];
  undefined4 local_c;
  
  local_c = (uint)*(ushort *)((int)this + 0x2a6);
  puVar3 = (undefined4 *)
           thunk_FUN_0041dc40(local_14,local_c,*(undefined2 *)((int)this + 0x2aa),
                              *(short *)((int)this + 0x6c));
  uVar2 = *puVar3;
  sVar1 = *(short *)(puVar3 + 1);
  if (param_1 != (short *)0x0) {
    local_c._0_2_ = (short)uVar2;
    *param_1 = *(short *)((int)this + 0x41) + (short)local_c;
  }
  if (param_2 != (short *)0x0) {
    local_c._2_2_ = (short)((uint)uVar2 >> 0x10);
    *param_2 = *(short *)((int)this + 0x43) - local_c._2_2_;
  }
  if (param_3 != (short *)0x0) {
    *param_3 = *(short *)((int)this + 0x45) + sVar1;
  }
  return;
}

