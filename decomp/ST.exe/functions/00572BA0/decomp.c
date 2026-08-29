#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_00572ba0(int param_1)

{
  int iVar2;
  int iVar1;
  cMf32 *this;
  byte local_154 [260];
  InternalExceptionFrame local_50;
  int local_c;
  uint local_8;
  local_8 = 1;
  local_c = param_1;
  /* ST_CALLSITE[00572BD8]: CALL dword ptr [0x0085bde8] */
  wsprintfA((LPSTR)local_154,"%s%s%s\\%s",param_1 + 0x28,PTR_s_SAVEGAME__0079b0cc,
            param_1 + 0x785,PTR_s_PL_LOG_0079b0d0);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;

  iVar1 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar1 == 0) {
    /* ST_CALLSITE[00572C15]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
    this = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,local_154,2,0,0);
    iVar2 = local_c;
    if (this != nullptr) {

      cMf32::RecPut(this,0xc,PTR_s_AIKEYS_PLAYER_0079b0dc,(byte *)(local_c + 0xd86),0x28,
                    nullptr,'\0',nullptr);

      cMf32::RecPut(this,0xc,PTR_s_ACCKEYS_PLAYER_0079b0d8,(byte *)(iVar2 + 0x80e),400,
                    nullptr,'\0',nullptr);

      cMf32::RecPut(this,0xc,PTR_s_SYSKEYS_PLAYER_0079b0e0,(byte *)(iVar2 + 0x99e),0x140,
                    nullptr,'\0',nullptr);

      cMf32::RecPut(this,0xc,PTR_s_MOUKEYS_PLAYER_0079b0e4,(byte *)(iVar2 + 0xc1e),0x78,
                    nullptr,'\0',nullptr);
      cMf32::delete(this);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

