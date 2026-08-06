#include "../../pseudocode_runtime.h"


void __thiscall FUN_00710fb0(void *this,byte *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint local_8;

  local_8 = (uint)*param_1;
  if (STField<int>(this,0x96) == 1) {
    local_8 = Library::MSVCRT::FUN_00734030(local_8);
  }
  else if (STField<int>(this,0x96) == 2) {
    local_8 = Library::MSVCRT::FUN_007306e0(local_8);
  }
  if (((STField<int>(this,0xa0) != 0) && (STField<int>(this,0xa8) != 0)) &&
     (STField<int>(this,0xac) != *(int *)(STField<int>(this,0xa8) + 0xac))) {
    FUN_00710790(this);
  }
  uVar2 = STField<ushort>(this,0x70);
  uVar3 = (uint)uVar2;
  iVar1 = STField<int>(this,0x9a);
  if (*(short *)(iVar1 + (uVar3 + 0xb) * 10) != (short)local_8) {
    while( true ) {
      uVar3 = uVar3 + 1;
      if (*(ushort *)(iVar1 + 100) <= (ushort)uVar3) {
        uVar3 = 0;
      }
      if ((short)uVar3 == STField<short>(this,0x70)) break;
      if (*(short *)(iVar1 + ((uVar3 & 0xffff) + 0xb) * 10) == (short)local_8) {
        STField<short>(this,0x70) = (short)uVar3;
        return;
      }
    }
    if (STField<int>(this,0xa0) == 0) {
      if ((STField<byte>(this,0x18d) & 8) != 0) {
        uVar3 = Library::Ourlib::MFCFNT::FUN_0070e030(this,local_8,0);
        STField<ushort>(this,0x70) = (ushort)uVar3 & ((int)uVar3 < 1) - 1;
        return;
      }
    }
    else if ((*(byte *)((int)STField<int *>(this,0xa8) + 0x18d) & 8) != 0) {
      uVar3 = Library::Ourlib::MFCFNT::FUN_0070e030(STField<int *>(this,0xa8),local_8,0);
      FUN_00710790(this);
      STField<ushort>(this,0x70) = ((int)uVar3 < 1) - 1 & (ushort)uVar3;
      return;
    }
    uVar2 = 0;
  }
  STField<ushort>(this,0x70) = uVar2;
  return;
}

