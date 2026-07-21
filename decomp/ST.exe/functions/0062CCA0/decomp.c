#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::GetMessage */

undefined4 __thiscall STManRub3C::GetMessage(STManRub3C *this,int param_1)

{
  code *pcVar1;
  STManRub3C *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  InternalExceptionFrame local_58;
  byte *local_14;
  uint local_10;
  STManRub3C *local_c;
  ushort *local_8;

  local_8 = (ushort *)0x0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar4 = ReportDebugMessage(s_E____titans_nick_to_rab3m_cpp_007d13ec,0x4e,0,iVar3,&DAT_007a4ccc,
                               s_STManRub3C__GetMessage_007d1410);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_nick_to_rab3m_cpp_007d13ec,0x50);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 2) {
    if (g_cMf32_00806754 != (cMf32 *)0x0) {
      local_8 = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,PTR_s_RUBBISH_3_0079d080,0,0);
    }
    if ((local_8 == (ushort *)0x0) || (*(int *)(local_8 + 6) != 2)) {
      local_c->field_001C = 0;
      local_c->field_0028 = 1;
      local_c->field_0024 = 1;
      local_c->field_0020 = 0xff;
      local_c->field_00B4 = DAT_00808754;
    }
    else {
      thunk_FUN_0062d840(local_c,(undefined4 *)local_8);
    }
    if ((local_8 != (ushort *)0x0) && (g_cMf32_00806754 != (cMf32 *)0x0)) {
      cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_8);
    }
  }
  else {
    if (iVar3 == 3) {
      thunk_FUN_0062cf50((int)local_c);
      thunk_FUN_0062dd40((int)pSVar2);
      thunk_FUN_0062e130((int)pSVar2);
      DAT_008117a4 = 0;
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (iVar3 == 0x10f) {
      local_14 = thunk_FUN_0062d670(local_c,&local_10);
      STPlaySystemC::SaveObjData(PTR_00802a38,PTR_s_RUBBISH_3_0079d080,local_14,local_10,0xc);
      FreeAndNull(&local_14);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

