#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::AddNewRub3 */

uint __thiscall STManRub3C::AddNewRub3(STManRub3C *this,int *param_1)

{
  code *pcVar1;
  STManRub3C *pSVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  InternalExceptionFrame local_74;
  int local_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  uint local_10;
  STManRub3C *local_c;
  int *local_8;

  local_10 = 0xffffffff;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  local_8 = param_1;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  piVar3 = local_8;
  pSVar2 = local_c;
  if (iVar4 == 0) {
    if (*(int *)(&local_c->field_0x30 + *local_8 * 4) == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x20,10);
      *(uint **)(&pSVar2->field_0x30 + *piVar3 * 4) = puVar5;
    }
    if (*(int *)(&pSVar2->field_0x30 + *piVar3 * 4) != 0) {
      piVar8 = local_30;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
      local_20 = piVar3[4];
      local_18 = piVar3[6];
      local_1c = piVar3[5];
      local_30[1] = piVar3[1];
      local_30[2] = piVar3[2];
      local_30[3] = piVar3[3];
      uVar6 = Library::DKW::TBL::FUN_006ae1c0
                        (*(uint **)(&pSVar2->field_0x30 + *piVar3 * 4),local_30);
      g_currentExceptionFrame = local_74.previous;
      return uVar6;
    }
    g_currentExceptionFrame = local_74.previous;
    return local_10;
  }
  g_currentExceptionFrame = local_74.previous;
  iVar7 = ReportDebugMessage(s_E____titans_nick_to_rab3m_cpp_007d13ec,0x86,0,iVar4,&DAT_007a4ccc,
                             s_STManRub3C__AddNewRub3_007d142c);
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,s_E____titans_nick_to_rab3m_cpp_007d13ec,0x88);
  return 0xffff;
}

