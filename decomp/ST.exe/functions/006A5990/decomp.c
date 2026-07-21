#include "../../pseudocode_runtime.h"


void __cdecl FUN_006a5990(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;

  puVar5 = (undefined4 *)0x0;
  iVar3 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,"%s");
  if (iVar3 == 1) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  puVar2 = DAT_0085496c;
  if (param_1 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)*param_1;
  }
  do {
    if ((puVar2 == (undefined4 *)0x0) || (puVar2 == puVar5)) {
      iVar3 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,"%s");
      if (iVar3 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return;
    }
    uVar4 = puVar2[5] & 0xffff;
    if (((uVar4 != 3) && (uVar4 != 0)) && ((uVar4 != 2 || ((DAT_007ec178 & 0x10) != 0)))) {
      if ((void *)puVar2[2] != (void *)0x0) {
        iVar3 = thunk_FUN_006a55d0((void *)puVar2[2],1,0);
        if (iVar3 == 0) {
          iVar3 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,(byte *)"#File Error#(%d) : ");
          if (iVar3 == 1) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
        else {
          iVar3 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,(byte *)"%hs(%d) : ");
          if (iVar3 == 1) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
      }
      iVar3 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,(byte *)"{%ld} ");
      if (iVar3 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      uVar4 = puVar2[5] & 0xffff;
      if (uVar4 == 4) {
        iVar3 = Library::MSVCRT::FUN_00730fa0
                          (0,0,0,0,(byte *)"client block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar3 == 1) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (DAT_0085751c != (code *)0x0) {
          (*DAT_0085751c)(puVar2 + 8,puVar2[4]);
          goto cf_continue_loop_006A5B2E;
        }
      }
      else if (puVar2[5] == 1) {
        iVar3 = Library::MSVCRT::FUN_00730fa0
                          (0,0,0,0,(byte *)"normal block at 0x%08X, %u bytes long.\n");
        if (iVar3 == 1) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
      else {
        if (uVar4 != 2) goto cf_continue_loop_006A5B2E;
        iVar3 = Library::MSVCRT::FUN_00730fa0
                          (0,0,0,0,(byte *)"crt block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar3 == 1) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
      FUN_006a5be0((int)puVar2);
    }
cf_continue_loop_006A5B2E:
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

