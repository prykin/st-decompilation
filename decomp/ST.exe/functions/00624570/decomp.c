#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00624570_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __thiscall
FUN_00624570(void *this,Global_sub_00624570_param_1Enum param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  uVar1 = 0;
  switch(param_1) {
  case CASE_0:
    STField<undefined1>(this,0x61) = 0;
    STField<undefined1>(this,0x62) = 0;
    STField<uint>(this,0x30f) = g_playSystem_00802A38->field_00E4;
    return 1;
  case CASE_1:
    break;
  case CASE_2:
    iVar2 = FUN_006acf0d(STField<int>(this,0x2c2),STField<int>(this,0x2c6),
                         STField<int>(this,0x2ca),param_2,param_3,param_4);
    STField<undefined4>(this,0x306) = 3;
    if (iVar2 < 1) {
      uVar1 = 2;
    }
    else {
      STField<int>(this,0x2f6) = iVar2;
      STField<undefined2>(this,0x3c) = (undefined2)param_3;
      STField<short>(this,0x3e) = (short)param_4;
      STField<int>(this,0x2fa) = ((param_2 - STField<int>(this,0x2c2)) * 10000) / iVar2;
      STField<int>(this,0x2fe) = ((param_3 - STField<int>(this,0x2c6)) * 10000) / iVar2;
      STField<undefined2>(this,0x34) = STField<undefined2>(this,0x2c2);
      STField<undefined2>(this,0x38) = STField<undefined2>(this,0x2ca);
      STField<undefined2>(this,0x3a) = (undefined2)param_2;
      STField<int>(this,0x302) = ((param_4 - STField<int>(this,0x2ca)) * 10000) / iVar2;
      STField<undefined2>(this,0x36) = STField<undefined2>(this,0x2c6);
      uVar1 = 1;
      STField<uint>(this,0x30f) = g_playSystem_00802A38->field_00E4;
    }
    STField<uint>(this,0x30f) = g_playSystem_00802A38->field_00E4;
    return uVar1;
  case CASE_3:
    iVar3 = STBiasedDiv16(param_4, 200); /* exact signed 16-bit grid-index division */
    if (iVar3 == STField<short>(this,0x4b)) {
      uVar1 = 2;
    }
    else {
      STField<short>(this,0x3e) = (short)param_4;
      uVar4 = STField<int>(this,0x2ca) - param_4;
      STField<undefined2>(this,0x36) = STField<undefined2>(this,0x2c6);
      STField<undefined4>(this,0x2fa) = 0;
      uVar5 = (int)uVar4 >> 0x1f;
      STField<undefined4>(this,0x2fe) = 0;
      STField<uint>(this,0x2f6) = (uVar4 ^ uVar5) - uVar5;
      STField<undefined2>(this,0x3a) = (undefined2)param_2;
      STField<undefined2>(this,0x3c) = (undefined2)param_3;
      STField<undefined2>(this,0x34) = STField<undefined2>(this,0x2c2);
      STField<undefined2>(this,0x38) = STField<undefined2>(this,0x2ca);
      STField<uint>(this,0x302) = ((STField<short>(this,0x4b) <= iVar3) - 1 & 0xfffffffe) + 1;
      STField<undefined4>(this,0x306) = 3;
      uVar1 = 1;
    }
    STField<uint>(this,0x30f) = g_playSystem_00802A38->field_00E4;
  default:
    return uVar1;
  }
  iVar3 = (uint)STField<byte>(this,0x2ad) * 4;
  if (*(int *)(&DAT_007d0398 + iVar3) == 0) {
    STField<undefined1>(this,0x62) = 0;
    STField<uint>(this,0x30f) = g_playSystem_00802A38->field_00E4;
    return 1;
  }
  if (STField<int>(this,0x302) == 0) {
    STField<undefined4>(this,0x302) = 1;
  }
  else {
    STField<uint>(this,0x302) = -(((STField<int>(this,0x302) < 1) - 1 & 2) - 1);
  }
  iVar3 = *(int *)(&DAT_007d0388 + iVar3);
  uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar4;
  STField<char>(this,0x62) =
       (&DAT_007d0388)[(uint)STField<byte>(this,0x2ad) * 4] -
       (char)((uVar4 >> 0x10) % (iVar3 / 3 + 1U));
  uVar4 = g_playSystem_00802A38->field_00E4;
  STField<undefined2>(this,0x34) = STField<undefined2>(this,0x2ca);
  STField<uint>(this,0x30f) = uVar4;
  return 1;
}

