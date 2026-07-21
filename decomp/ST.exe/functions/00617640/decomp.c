#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jbomb_m.Cpp
   JumpManagC::GetMessage */

undefined4 __thiscall JumpManagC::GetMessage(JumpManagC *this,AnonShape_00617640_1122A6C6 *param_1)

{
  code *pcVar1;
  JumpManagC *pJVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  AnonNested_00617640_0014_CD0B523E *pAVar6;
  undefined4 *puVar7;
  InternalExceptionFrame local_54;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  JumpManagC *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pJVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = ReportDebugMessage(s_E____titans_nick_to_jbomb_m_Cpp_007d005c,0x4b,0,iVar3,&DAT_007a4ccc
                               ,s_JumpManagC__GetMessage_007d0084);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,s_E____titans_nick_to_jbomb_m_Cpp_007d005c,0x4d);
    return 0xffff;
  }
  iVar3 = param_1->field_0010;
  if (iVar3 == 2) {
    pAVar6 = param_1->field_0014;
    if (pAVar6->field_000C != 2) {
      puVar7 = (undefined4 *)&local_8->field_0x1c;
      for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = pAVar6->field_0000;
        pAVar6 = (AnonNested_00617640_0014_CD0B523E *)&pAVar6->field_0x4;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = *(undefined2 *)&pAVar6->field_0000;
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    thunk_FUN_00618170(local_8,&pAVar6->field_0000);
    thunk_FUN_006179d0((AnonShape_006179D0_BD0E52D0 *)pJVar2);
  }
  else if (iVar3 == 3) {
    thunk_FUN_00618ad0((AnonShape_00618AD0_F1827B9B *)local_8);
    if (pJVar2->field_005E != (DArrayTy *)0x0) {
      DArrayDestroy(pJVar2->field_005E);
      pJVar2->field_005E = (DArrayTy *)0x0;
    }
    if ((DArrayTy *)pJVar2->field_0062 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pJVar2->field_0062);
      pJVar2->field_0062 = 0;
    }
    if ((DArrayTy *)pJVar2->field_0066 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pJVar2->field_0066);
      pJVar2->field_0066 = 0;
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (iVar3 == 0x10f) {
    local_10 = thunk_FUN_00617fb0(local_8,(int *)&local_c);
    STPlaySystemC::SaveObjData(PTR_00802a38,pJVar2->field_0018,local_10,local_c);
    FreeAndNull(&local_10);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

