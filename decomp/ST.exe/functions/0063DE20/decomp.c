#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0063DE20 -> 00568DD0 @ 0063DEAC

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_0063de20(void *this,int soundId)

{
  int iVar1;
  short sVar2;
  SoundPosition local_10;

  iVar1 = STField<int>(this,0x266);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    local_10.x = (short)(((short)(iVar1 / 0xc9) + sVar2) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.x = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                             (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
  }
  iVar1 = STField<int>(this,0x26a);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    local_10.y = (short)(((short)(iVar1 / 0xc9) + sVar2) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.y = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                             (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
  }
  local_10.unknown = STField<int>(this,0x18);
  /* ST_CALLSITE[0063DEAC]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
  SoundClassTy::PlaySound((SoundClassTy *)&g_sound,SOUND_MODE_2,nullptr,soundId,&local_10,0);
  return;
}

