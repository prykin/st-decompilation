#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004ebab0(void *this,int param_1,int param_2)

{
  byte bVar1;
  int iVar2;


  iVar2 = thunk_FUN_004e1490(this);
  if ((iVar2 != 0) && (STField<int>(this,0x5b8) < g_worldGrid.sizeZ + -1)) {
    if (param_1 == 0xdc) {

      iVar2 = thunk_FUN_004d8870(STField<char>(this,0x24));
      if (iVar2 < param_2) {
        return 0;
      }

      thunk_FUN_004d8800(STField<char>(this,0x24),param_2);
    }
    else if (param_1 == 0xdd) {

      iVar2 = thunk_FUN_004d89b0(STField<char>(this,0x24));
      if (iVar2 < param_2) {
        return 0;
      }

      thunk_FUN_004d8940(STField<char>(this,0x24),param_2);
    }
    else {
      if (param_1 != 0xde) {
        return 0;
      }
      /* ST_CALLSITE[004EBAFF]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar1 = LookupRecordByte(STField<char>(this,0x24));
      if (bVar1 == 3) {

        iVar2 = thunk_FUN_004e4410(STField<byte *>(this,0x24));
        if (iVar2 < param_2) {
          return 0;
        }

        thunk_FUN_004e43c0(STField<int>(this,0x24),param_2);
      }
      else {

        iVar2 = thunk_FUN_004d8af0(STField<char>(this,0x24));
        if (iVar2 < param_2) {
          return 0;
        }

        thunk_FUN_004d8a80(STField<char>(this,0x24),param_2);
      }
    }

    thunk_FUN_004d78e0(STField<char>(this,0x24));
    if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
      /* ST_CALLSITE[004EBBE1]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
      STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)STField<uint>(this,0x24));
    }
    STField<undefined4>(this,0x4d0) = 2;
    STField<int>(this,0x4dc) = param_1;
    STField<int>(this,0x4e0) = param_2;
    STField<undefined4>(this,0x4ec) = 0;
    /* ST_CALLSITE[004EBC10]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar1 = LookupRecordByte(STField<char>(this,0x24));
    STField<uint>(this,0x50c) = (uint)bVar1;
    /* ST_CALLSITE[004EBC24]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
    TLOBaseTy::RotateSpr(this,0);
  }
  return 0;
}

