
undefined4 __thiscall FUN_004ebab0(void *this,int param_1,int param_2)

{
  byte bVar1;
  int iVar2;

  iVar2 = thunk_FUN_004e1490(this);
  if ((iVar2 != 0) && (*(int *)((int)this + 0x5b8) < g_worldGrid.sizeZ + -1)) {
    if (param_1 == 0xdc) {
      iVar2 = thunk_FUN_004d8870(*(char *)((int)this + 0x24));
      if (iVar2 < param_2) {
        return 0;
      }
      thunk_FUN_004d8800(*(char *)((int)this + 0x24),param_2);
    }
    else if (param_1 == 0xdd) {
      iVar2 = thunk_FUN_004d89b0(*(char *)((int)this + 0x24));
      if (iVar2 < param_2) {
        return 0;
      }
      thunk_FUN_004d8940(*(char *)((int)this + 0x24),param_2);
    }
    else {
      if (param_1 != 0xde) {
        return 0;
      }
      bVar1 = LookupRecordByte(*(char *)((int)this + 0x24));
      if (bVar1 == 3) {
        iVar2 = thunk_FUN_004e4410(*(byte **)((int)this + 0x24));
        if (iVar2 < param_2) {
          return 0;
        }
        thunk_FUN_004e43c0(*(int *)((int)this + 0x24),param_2);
      }
      else {
        iVar2 = thunk_FUN_004d8af0(*(char *)((int)this + 0x24));
        if (iVar2 < param_2) {
          return 0;
        }
        thunk_FUN_004d8a80(*(char *)((int)this + 0x24),param_2);
      }
    }
    thunk_FUN_004d78e0(*(char *)((int)this + 0x24));
    if (*(uint *)((int)this + 0x24) == (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d)) {
      thunk_FUN_004d8b70((char)*(uint *)((int)this + 0x24));
    }
    *(undefined4 *)((int)this + 0x4d0) = 2;
    *(int *)((int)this + 0x4dc) = param_1;
    *(int *)((int)this + 0x4e0) = param_2;
    *(undefined4 *)((int)this + 0x4ec) = 0;
    bVar1 = LookupRecordByte(*(char *)((int)this + 0x24));
    *(uint *)((int)this + 0x50c) = (uint)bVar1;
    TLOBaseTy::RotateSpr(this,0);
  }
  return 0;
}

