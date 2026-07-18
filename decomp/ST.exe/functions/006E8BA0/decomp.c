
void __thiscall FUN_006e8ba0(void *this,uint param_1)

{
  uint *puVar1;
  
  if ((param_1 < *(uint *)((int)this + 0x310)) &&
     (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114),
     (*(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114) & 0x8000) != 0)) {
    FUN_006eab60(this,param_1);
    FUN_006e9520(this,param_1,0,0,0);
    FUN_006ab060(puVar1 + 0x29);
    if ((*puVar1 & 0x100) != 0) {
      FUN_006ab060(puVar1 + 0x2a);
    }
    if ((puVar1[1] & 1) != 0) {
      puVar1[1] = puVar1[1] & 0xfffffffe;
      FUN_006ab060(puVar1 + 0x28);
    }
    *puVar1 = *puVar1 & 0xffff7fff | 0x4000;
    return;
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

