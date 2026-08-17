#include "../../pseudocode_runtime.h"


void __thiscall
FUN_004ebda0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;

  if ((STField<int>(this,0x508) == param_1) && (STField<int>(this,0x4d0) == 3)) {
    iVar1 = thunk_FUN_004ac910((void *)((int)this + 0x1d5),'\x0e');
    if (iVar1 == *(int *)(STField<int>(this,0x1f5) + 0x20c)) {
      if (param_2 == 0xdc) {
        thunk_FUN_004d87b0(STField<char>(this,0x24),param_3);
      }
      else if (param_2 == 0xdd) {
        thunk_FUN_004d88f0(STField<char>(this,0x24),param_3);
      }
      else if (param_2 == 0xde) {
        thunk_FUN_004d8a30(STField<char>(this,0x24),param_3);
      }
      thunk_FUN_004d78e0(STField<char>(this,0x24));
      if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
        thunk_FUN_004d8b70((char)STField<uint>(this,0x24));
      }
      STField<undefined4>(this,0x4fc) = param_4;
      STField<undefined4>(this,0x500) = param_5;
      STField<undefined4>(this,0x504) = param_6;
      STField<undefined4>(this,0x4d0) = 6;
      STField<undefined4>(this,0x510) = 0;
      STField<uint>(this,0x514) = g_playSystem_00802A38->field_00E4;
      thunk_FUN_004ec0f0(this);
      /* ST_CALLSITE[004EBEAA]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(this,0);
    }
  }
  return;
}

