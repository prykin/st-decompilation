
undefined4 __thiscall FUN_004dd800(void *this,int param_1)

{
  if (*(int *)((int)this + 0x4d4) == param_1) {
    *(undefined4 *)((int)this + 0x4d0) = 3;
    TLOBaseTy::RotateSpr(this,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0x90))(3,0x416);
  }
  return 0;
}

