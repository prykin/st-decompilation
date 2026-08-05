
void __thiscall FUN_004ebcb0(void *this,int param_1,int param_2)

{
  byte bVar1;
  int iVar2;

  iVar2 = thunk_FUN_004e1490(this);
  if ((iVar2 != 0) && (*(int *)((int)this + 0x5b8) < g_worldGrid.sizeZ + -1)) {
    *(int *)((int)this + 0x508) = param_1;
    *(undefined4 *)((int)this + 0x4d0) = 3;
    *(int *)((int)this + 0x50c) = param_2;
    *(undefined4 *)((int)this + 0x4dc) = 0;
    *(undefined4 *)((int)this + 0x4e0) = 0;
    *(undefined4 *)((int)this + 0x4ec) = 0;
    TLOBaseTy::RotateSpr(this,0);
    if (*(int *)((int)this + 0x5ac) == 0x52) {
      iVar2 = *(int *)this;
      bVar1 = LookupRecordByte(*(char *)((int)this + 0x23d));
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(iVar2 + 0x90))(3,(-(uint)(bVar1 != 2) & 0xffffff3b) + 0x35e);
      return;
    }
    if (*(int *)((int)this + 0x5ac) == 0x5f) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x90))(3,0x3b1);
    }
  }
  return;
}

