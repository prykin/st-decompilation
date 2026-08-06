#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0041C380 -> 00568DD0 @ 0041C3BA

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0041C380 -> 00568DD0 @ 0041C3BA */

void __thiscall FUN_0041c380(void *this,SoundPlayMode mode,int soundId)

{
  SoundPosition local_10;

  local_10.x = (int)STField<short>(this,0x47);
  local_10.y = (int)STField<short>(this,0x49);
  local_10.unknown = STField<int>(this,8);
  SoundClassTy::PlaySound((SoundClassTy *)&g_sound,mode,nullptr,soundId,&local_10,0);
  return;
}

