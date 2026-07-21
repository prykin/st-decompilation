#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_006a5130(char *param_1,char param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079d850;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  uVar3 = 1;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    do {
      iVar4 = param_3 + -1;
      if (param_3 == 0) {
        ExceptionList = local_14;
        return uVar3;
      }
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      param_3 = iVar4;
    } while (cVar1 == param_2);
    iVar4 = Library::MSVCRT::FUN_00730fa0
                      (0,0,0,0,(byte *)"memory check error at 0x%08X = 0x%02X, should be 0x%02X.\n");
    if (iVar4 == 1) break;
    uVar3 = 0;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

