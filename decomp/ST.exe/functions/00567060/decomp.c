#include "../../pseudocode_runtime.h"


uint __fastcall FUN_00567060(RecoveredRecord_00567060_20B54E08 *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  InternalExceptionFrame local_54;
  uint local_10;
  uint local_c;
  uint local_8;

  local_10 = 0;
  FUN_007193f0();
  uVar3 = DAT_00807300 & 0xff;
  if (uVar3 == 2) {
    if (param_1->field_0F8F != 0) {
      bVar2 = FUN_00719650((MCIDEVICEID *)&param_1->field_0F8F);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      return CONCAT31(extraout_var,bVar2);
    }
  }
  else if (((uVar3 == 4) || (uVar3 == 8)) && (param_1->field_0F8B != 0)) {
    local_c = 0;
    local_8 = local_8 & 0xffffff00;
    do {
      local_54.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_54;

      iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
      if (iVar4 == 0) {

        FUN_006c1f00(local_8 & 0xff,&local_c,nullptr);
      }
      g_currentExceptionFrame = local_54.previous;
      if (local_c == 1) {
        local_10 = 1;
      }
      bVar1 = (char)local_8 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar1));
    } while (bVar1 < 2);
    return local_10;
  }
  return 0;
}

