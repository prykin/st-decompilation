
void __thiscall FUN_00710fb0(void *this,byte *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = (uint)*param_1;
  if (*(int *)((int)this + 0x96) == 1) {
    local_8 = Library::MSVCRT::FUN_00734030(local_8);
  }
  else if (*(int *)((int)this + 0x96) == 2) {
    local_8 = Library::MSVCRT::FUN_007306e0(local_8);
  }
  if (((*(int *)((int)this + 0xa0) != 0) && (*(int *)((int)this + 0xa8) != 0)) &&
     (*(int *)((int)this + 0xac) != *(int *)(*(int *)((int)this + 0xa8) + 0xac))) {
    FUN_00710790((int)this);
  }
  uVar2 = *(ushort *)((int)this + 0x70);
  uVar3 = (uint)uVar2;
  iVar1 = *(int *)((int)this + 0x9a);
  if (*(short *)(iVar1 + (uVar3 + 0xb) * 10) != (short)local_8) {
    while( true ) {
      uVar3 = uVar3 + 1;
      if (*(ushort *)(iVar1 + 100) <= (ushort)uVar3) {
        uVar3 = 0;
      }
      if ((short)uVar3 == *(short *)((int)this + 0x70)) break;
      if (*(short *)(iVar1 + ((uVar3 & 0xffff) + 0xb) * 10) == (short)local_8) {
        *(short *)((int)this + 0x70) = (short)uVar3;
        return;
      }
    }
    if (*(int *)((int)this + 0xa0) == 0) {
      if ((*(byte *)((int)this + 0x18d) & 8) != 0) {
        uVar3 = Library::Ourlib::MFCFNT::FUN_0070e030(this,local_8,0);
        *(ushort *)((int)this + 0x70) = (ushort)uVar3 & ((int)uVar3 < 1) - 1;
        return;
      }
    }
    else if ((*(byte *)((int)*(int **)((int)this + 0xa8) + 0x18d) & 8) != 0) {
      uVar3 = Library::Ourlib::MFCFNT::FUN_0070e030(*(int **)((int)this + 0xa8),local_8,0);
      FUN_00710790((int)this);
      *(ushort *)((int)this + 0x70) = ((int)uVar3 < 1) - 1 & (ushort)uVar3;
      return;
    }
    uVar2 = 0;
  }
  *(ushort *)((int)this + 0x70) = uVar2;
  return;
}

