
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006e92c0(void *this,uint param_1,float param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_1 < *(uint *)((int)this + 0x310)) {
    puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    uVar2 = *(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    if ((uVar2 & 0x8000) != 0) {
      if (param_2 != (float)_DAT_0079d670) {
        *puVar1 = uVar2 & 0xff87ffff | 0x4000c;
        lVar3 = __ftol();
        puVar1[0xb] = (uint)lVar3;
        return;
      }
      puVar1[0xb] = 0;
      *puVar1 = uVar2 & 0xff83ffff | 0xc;
      return;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

