#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006048E0 @ 00604925 -> read as EAX on
   every CFG path | 00604970 @ 006049B5 -> read as EAX on every CFG path */

int __thiscall FUN_00604a00(void *this,int param_1)

{
  STParticleC *this_00;
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  iVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((-1 < param_1) && (param_1 <= STField<int>(this,0x269))) &&
     (this_00 = *(STParticleC **)((int)this + param_1 * 4 + 0x219), this_00 != nullptr))
  {
    pSVar2 = &local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = (STMessage *)&pSVar2->unknown_04;
    }
    local_24.id = MESS_SHARED_0003;
    /* ST_CALLSITE[00604A3E]: CALL 0x00405c9a; direct=00405C9A STParticleC::GetMessage */
    STParticleC::GetMessage(this_00,&local_24);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)this_00);
    iVar1 = 1;
    *(undefined4 *)((int)this + param_1 * 4 + 0x219) = 0;
  }
  return iVar1;
}

