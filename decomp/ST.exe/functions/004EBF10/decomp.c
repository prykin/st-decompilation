
void __thiscall FUN_004ebf10(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x508) == param_1) {
    *(undefined4 *)((int)this + 0x4d0) = 5;
    thunk_FUN_004cbf70((int)this);
    TLOBaseTy::RotateSpr(this,0);
    if (*(int *)((int)this + 0x5ac) == 0x52) {
      iVar1 = *(int *)this;
      iVar2 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
      (**(code **)(iVar1 + 0x90))(3,(-(uint)((char)iVar2 != '\x02') & 0xffffff3b) + 0x35f);
      return;
    }
    if (*(int *)((int)this + 0x5ac) == 0x5f) {
      (**(code **)(*(int *)this + 0x90))(3,0x3b2);
    }
  }
  return;
}

