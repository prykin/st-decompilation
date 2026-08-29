#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/ushort Evidence:
   all resolved direct callers consume only AX or kill the result; narrow_uses=11, ignored=0,
   full=0, unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator
   definition width on every path; sites=00540C40 @ 00540CDB -> read as AX on every CFG path |
   00711110 @ 00711156 -> read as AX on every CFG path | 007111C0 @ 00711203 -> read as AX on every
   CFG path | 007116F0 @ 007117A9 -> read as AX on every CFG path | 00711880 @ 007118DC -> read as
   AX on every CFG path | 00711880 @ 007118FB -> read as AX on every CFG path | 00711880 @ 00711929
   -> read as AX on every CFG path | 00720A50 @ 00720BF5 -> read as AX on every CFG path | 00720E70
   @ 00720FD0 -> read as AX on every CFG path | 00720E70 @ 00720FF3 -> read as AX on every CFG path
   | 00721080 @ 00721296 -> read as AX on every CFG path */

ushort __thiscall FUN_00710fb0(void *this,byte *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar4;
  uint local_EAX_233;
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
  uVar4 = (uint)uVar2;
  iVar1 = STField<int>(this,0x9a);
  if (*(short *)(iVar1 + (uVar4 + 0xb) * 10) != (short)local_8) {
    while( true ) {
      uVar4 = uVar4 + 1;
      if (STField<ushort>(iVar1,0x64) <= (ushort)uVar4) {
        uVar4 = 0;
      }
      uVar2 = (ushort)uVar4;
      if (uVar2 == STField<ushort>(this,0x70)) break;
      if (*(short *)(iVar1 + ((uVar4 & 0xffff) + 0xb) * 10) == (short)local_8) {
        STField<ushort>(this,0x70) = uVar2;
        return uVar2;
      }
    }
    if (STField<int>(this,0xa0) == 0) {
      if ((STField<byte>(this,0x18d) & 8) != 0) {

        local_EAX_233 = Library::Ourlib::MFCFNT::FUN_0070e030(this,local_8,0);
        uVar2 = (ushort)local_EAX_233 & ((int)local_EAX_233 < 1) - 1;
        STField<ushort>(this,0x70) = uVar2;
        return uVar2;
      }
    }
    else if ((*(byte *)((int)STField<int *>(this,0xa8) + 0x18d) & 8) != 0) {

      uVar3 = Library::Ourlib::MFCFNT::FUN_0070e030(STField<int *>(this,0xa8),local_8,0);
      FUN_00710790(this);
      uVar2 = ((int)uVar3 < 1) - 1 & (ushort)uVar3;
      STField<ushort>(this,0x70) = uVar2;
      return uVar2;
    }
    uVar2 = 0;
  }
  STField<ushort>(this,0x70) = uVar2;
  return uVar2;
}

