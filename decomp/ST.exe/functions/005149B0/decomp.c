#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::LinkAct */

void __thiscall HelpPanelTy::LinkAct(HelpPanelTy *this,int param_1,int param_2)

{
  char cVar1;
  AnonPointee_HelpPanelTy_01B3 *pAVar2;
  code *pcVar3;
  HelpPanelTy *pHVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  HelpPanelTy *pHVar10;
  InternalExceptionFrame local_54;
  int *local_10;
  uint local_c;
  HelpPanelTy *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x350,0,iVar5,&DAT_007a4ccc
                               ,s_HelpPanelTy__LinkAct_007c3b20);
    if (iVar8 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x350);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_c = *(uint *)sizeHelp_exref;
  if (local_c != 0) {
    uVar7 = 0;
    pHVar10 = local_8;
    do {
      pHVar4 = local_8;
      iVar8 = uVar7 * 0x11;
      cVar1 = *(char *)(pHVar10->field_01C7 + 8 + iVar8);
      iVar5 = pHVar10->field_01C7 + iVar8;
      switch(cVar1) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x04':
      case '\v':
      case '\f':
        if ((*(int *)(iVar5 + 9) != param_1) ||
           (((cVar1 != '\x03' && (cVar1 != '\f')) && (*(int *)(iVar5 + 0xd) != param_2))))
        goto switchD_00514a29_caseD_5;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005148A0::thunk_FUN_005148a0
                  ((AnonReceiver_005148A0 *)local_8,uVar7);
        pAVar2 = pHVar4->field_01B3;
        uVar9 = 0;
        uVar7 = *(uint *)&pAVar2->field_0xc;
        if (uVar7 == 0) {
LAB_00514ab9:
          uVar7 = *(uint *)sizeHelp_exref;
          pHVar10 = pHVar4;
          local_c = uVar7;
        }
        else {
          local_10 = (int *)(iVar8 + pHVar4->field_01C7);
          if (uVar7 == 0) {
            piVar6 = (int *)0x0;
            goto LAB_00514a8f;
          }
          do {
            piVar6 = (int *)(pAVar2->field_0008 * uVar9 + pAVar2->field_001C);
LAB_00514a8f:
            if ((*piVar6 == *local_10) && (piVar6[1] == local_10[1])) {
              pHVar4->field_01B7 = uVar9;
              goto LAB_00514ab9;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
          uVar7 = *(uint *)sizeHelp_exref;
          pHVar10 = pHVar4;
          local_c = uVar7;
        }
        break;
      case '\x05':
      case '\x06':
      case '\a':
      case '\b':
      case '\t':
      case '\n':
switchD_00514a29_caseD_5:
        pHVar10 = pHVar4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_c);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

