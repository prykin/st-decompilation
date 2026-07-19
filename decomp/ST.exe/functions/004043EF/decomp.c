
undefined4 __thiscall thunk_FUN_004dd770(void *this,int param_1)

{
  if (*(int *)((int)this + 0x4d4) == param_1) {
    *(undefined4 *)((int)this + 0x4d0) = 1;
    TLOBaseTy::RotateSpr(this,0);
    (**(code **)(*(int *)this + 0x90))(3,0x415);
  }
  return 0;
}

