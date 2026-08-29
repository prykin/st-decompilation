#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006A3D40 @ 006A3D56 -> read as EAX on
   every CFG path | 006A41E0 @ 006A4243 -> read as EAX on every CFG path | 006A49C0 @ 006A49D2 ->
   read as EAX on every CFG path | 006A4F20 @ 006A4F2C -> read as EAX on every CFG path | 00718A40 @
   00718CB0 -> read as EAX on every CFG path */

int FUN_006a5210(void)

{
  bool bVar2;
  uint *puVar3;
  int iVar4;
  int local_c;

  local_c = 1;
  if ((DAT_007ec178 & 1) == 0) {
    return 1;
  }

  iVar4 = Library::MSVCRT::FUN_007318f0();
  puVar3 = PTR_0085496c;
  if ((iVar4 != -1) && (iVar4 != -2)) {
    switch(iVar4) {
    case -6:

      iVar4 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,"%s");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      break;
    case -5:

      iVar4 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,"%s");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      break;
    case -4:

      iVar4 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,"%s");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      break;
    case -3:

      iVar4 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,"%s");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      break;
    default:

      iVar4 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,"%s");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    return 0;
  }
  do {
    if (puVar3 == nullptr) {
      return local_c;
    }
    bVar2 = true;

    iVar4 = FUN_006a5130((char *)(puVar3 + 7),(char)DAT_007ec184,4);
    if (iVar4 == 0) {

      iVar4 = Library::MSVCRT::FUN_00730fa0
                        (0,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      bVar2 = false;
    }

    iVar4 = FUN_006a5130((char *)(puVar3[4] + 0x20 + (int)puVar3),(char)DAT_007ec184,4);
    if (iVar4 == 0) {

      iVar4 = Library::MSVCRT::FUN_00730fa0
                        (0,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      bVar2 = false;
    }
    if ((puVar3[5] == 0) &&

       (iVar4 = FUN_006a5130((char *)(puVar3 + 8),STPiece<1,1>(DAT_007ec184),puVar3[4]), iVar4 == 0)) {

      iVar4 = Library::MSVCRT::FUN_00730fa0
                        (0,0,0,0,(byte *)"DAMAGE: on top of Free block at 0x%08X.\n");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
LAB_006a541d:
      if ((puVar3[2] != 0) &&

         (iVar4 = Library::MSVCRT::FUN_00730fa0
                            (0,0,0,0,(byte *)"%hs allocated at file %hs(%d).\n"), iVar4 == 1)
         ) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }

      iVar4 = Library::MSVCRT::FUN_00730fa0
                        (0,0,0,0,(byte *)"%hs located at 0x%08X is %u bytes long.\n");
      if (iVar4 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      local_c = 0;
    }
    else if (!bVar2) goto LAB_006a541d;
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}

