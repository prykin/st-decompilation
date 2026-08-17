#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00647A60 -> 00568DD0 @ 00647A96 */

void __thiscall FUN_00647a60(void *this,int soundId)

{
  SoundPosition local_10;

  local_10.x = STField<int>(this,0x30);
  local_10.y = STField<int>(this,0x34);
  local_10.unknown = STField<int>(this,0x18);
  /* ST_CALLSITE[00647A96]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
  SoundClassTy::PlaySound((SoundClassTy *)&g_sound,SOUND_MODE_3,nullptr,soundId,&local_10,0);
  return;
}

