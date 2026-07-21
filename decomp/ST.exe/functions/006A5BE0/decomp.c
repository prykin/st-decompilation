#include "../../pseudocode_runtime.h"


void __cdecl FUN_006a5be0(int param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 local_50 [52];
  byte local_1c [20];
  byte local_8;
  undefined3 uStack_7;

  iVar6 = 0;
  puVar5 = local_50;
  while( true ) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = *(int *)(param_1 + 0x10);
    if (0xf < iVar3) {
      iVar3 = 0x10;
    }
    if (iVar3 <= iVar6) break;
    bVar2 = *(byte *)(iVar6 + 0x20 + param_1);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_8 = CONCAT31(uStack_7,bVar2);
    if (DAT_007f148c < 2) {
      uVar4 = *(ushort *)(PTR_DAT_007f1280 + (uint)bVar2 * 2) & 0x157;
    }
    else {
      uVar4 = Library::MSVCRT::FUN_00730610((uint)bVar2,0x157);
    }
    if (uVar4 == 0) {
      bVar2 = 0x20;
    }
    local_1c[iVar6] = bVar2;
    Library::MSVCRT::FUN_00730c40(puVar5,0x7eca88);
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 3;
  }
  local_1c[iVar6] = 0;
  iVar6 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,(byte *)s_Data__<_s>__s_007eca74);
  if (iVar6 == 1) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return;
}

