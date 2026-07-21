#include "../../pseudocode_runtime.h"


undefined4 FUN_006a5210(void)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_c;

  local_c = 1;
  if ((DAT_007ec178 & 1) == 0) {
    return 1;
  }
  iVar4 = Library::MSVCRT::FUN_007318f0();
  puVar3 = DAT_0085496c;
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
    if (puVar3 == (undefined4 *)0x0) {
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
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((puVar3[5] == 0) &&
       (iVar4 = FUN_006a5130((char *)(puVar3 + 8),DAT_007ec184._1_1_,puVar3[4]), iVar4 == 0)) {
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

