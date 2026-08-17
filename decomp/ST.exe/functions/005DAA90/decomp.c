#include "../../pseudocode_runtime.h"


undefined4 FUN_005daa90(void)

{
  int iVar1;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  if (g_int_00811764 != nullptr) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (iVar1 == 0) {
      /* ST_CALLSITE[005DAACB]: CALL 0x00402b30; direct=00402B30 StartSystemTy::sub_005DAB30 */
      StartSystemTy::sub_005DAB30(local_8);
      Library::DKW::DDX::FUN_006b65f0(g_int_00811764,&local_8->field_068E);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    g_currentExceptionFrame = local_4c.previous;
    /* ST_CALLSITE[005DAAFE]: CALL 0x00402b30; direct=00402B30 StartSystemTy::sub_005DAB30 */
    StartSystemTy::sub_005DAB30(local_8);
  }
  return 0xfffffffa;
}

