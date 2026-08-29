#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_004e99e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar3;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_25;
  uint local_21;
  uint local_1d;
  uint local_9;
  if (STField<int>(this,0x4f8) == 0) {
    puVar3 = &local_74;
    memset(puVar3, 0, 0x6f); /* compiler bulk-zero initialization */
    puVar3 = (undefined4 *)((byte *)puVar3 + 0x6c);
    local_70 = STField<undefined4>(this,0x24);
    local_48 = param_1;
    local_3c = (uint)STField<ushort>(this,0x30);
    local_64 = DAT_00791f18;
    local_50 = DAT_00791f18;
    local_21 = 100;
    local_1d = 100;
    local_68 = 1;
    local_6c = 1;
    local_58 = 1;
    local_44 = param_2;
    local_38 = STField<undefined4>(this,0x5c0);
    local_40 = param_3;
    local_25 = STField<undefined4>(this,0x18);
    local_74 = 0x3e9;
    local_9 = 0;
    local_54 = 3;
    local_60 = 1000;
    local_4c = 0x6c;
    local_5c = local_70;
    /* ST_CALLSITE[004E9A9C]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
    STPlaySystemC::CreateGameObject
              (g_playSystem_00802A38,0x3e9,0,(int *)((int)this + 0x61b),&local_74,0);
    uVar1 = *(undefined4 *)(STField<int>(this,0x61b) + 0x18);
    STField<undefined4>(this,0x4fc) = 0;
    STField<undefined4>(this,0x4f8) = uVar1;
    return 0;
  }
  return 0;
}

