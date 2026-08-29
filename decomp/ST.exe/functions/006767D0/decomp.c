#include "../../pseudocode_runtime.h"


int FUN_006767d0(void)

{
  int iVar1;
  cMf32 *this;
  byte local_150 [260];
  InternalExceptionFrame local_4c;
  cMf32 *local_8;

  local_8 = nullptr;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    /* ST_CALLSITE[00676834]: CALL EDI */
    wsprintfA((LPSTR)local_150,"%s%s%s\\%s",&CHAR_00h_00807680,PTR_s_SAVEGAME__0079d6c0,
              &CHAR_00h_00807ddd,PTR_s_PL_LOG_0079d6c4);
    /* ST_CALLSITE[00676846]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
    this = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,local_150,2,0,0);
    local_8 = this;
    /* ST_CALLSITE[00676872]: CALL EDI */
    wsprintfA((LPSTR)local_150,"%s%d%02d",PTR_DAT_0079d6c8,(uint)DAT_0080874e,DAT_0080c52a);

    cMf32::RecPut(this,0xc,(char *)local_150,(byte *)&DAT_0080c522,0x27f0,nullptr,'\0',
                  nullptr);
    cMf32::delete(this);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  cMf32::delete(local_8);
  if (iVar1 < 0) {
    return iVar1;
  }
  return -1;
}

