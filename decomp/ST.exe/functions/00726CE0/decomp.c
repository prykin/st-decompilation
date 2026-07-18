
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00726ce0(void *this,int param_1)

{
  DAT_0085708c = *(undefined4 *)((int)this + 0xc);
  DAT_00857090 = *(undefined4 *)((int)this + 0x28);
  DAT_0085707c = *(undefined4 *)((int)this + 0x14);
  DAT_008570dc = *(int *)((int)this + 0x30) << 0x10;
  DAT_0085705c = *(int *)((int)this + 0x38) << 0x10;
  _DAT_00857100 = *(int *)(param_1 + 0xc);
  if (_DAT_00857100 == 0) {
    _DAT_00857100 = *(int *)(param_1 + 0x10);
  }
  if (*(int *)((int)this + 0x280) != 0) {
    DAT_0085709c = (uint)*(byte *)(*(int *)((int)this + 0x280) + 4) << 1;
  }
  if (*(int *)((int)this + 0x124) == 1) {
    DAT_0085706c = '\x02' << ((byte)(*(int *)((int)this + 0x35c) << 1) & 0x1f);
    DAT_00857058 = '\x01' << ((byte)(*(int *)((int)this + 0x35c) << 1) & 0x1f);
  }
  return;
}

