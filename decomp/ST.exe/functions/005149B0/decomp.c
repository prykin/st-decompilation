#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::LinkAct

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall HelpPanelTy::LinkAct(HelpPanelTy *this,int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  AnonPointee_HelpPanelTy_01B3 *pAVar3;
  int iVar6;
  HelpPanelTy *pHVar7;
  int iVar5;
  int *piVar8;
  uint uVar9;
  int iVar8;
  uint uVar10;
  HelpPanelTy *pHVar11;
  InternalExceptionFrame local_54;
  byte *local_10;
  uint local_c;
  HelpPanelTy *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x350,0,iVar5,"%s"
                               ,"HelpPanelTy::LinkAct");
    if (iVar8 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\helppan.cpp",0x350);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_c = *(uint *)sizeHelp_exref;
  if (local_c != 0) {
    uVar9 = 0;
    pHVar11 = local_8;
    do {
      pHVar7 = local_8;
      pbVar2 = pHVar11->field_01C7;
      iVar6 = uVar9 * 0x11;
      bVar1 = pbVar2[iVar6 + 8];
      switch(bVar1) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case 1:
      case 2:
      case 3:
      case 4:
      case 0xb:
      case 0xc:
        if ((*(int *)(pbVar2 + iVar6 + 9) != param_1) ||
           (((bVar1 != 3 && (bVar1 != 0xc)) && (*(int *)(pbVar2 + iVar6 + 0xd) != param_2))))
        goto switchD_00514a29_caseD_5;
        /* ST_CALLSITE[00514A58]: CALL 0x00401a37; direct=00401A37 HelpPanelTy::sub_005148A0 */
        sub_005148A0(local_8,uVar9);
        pAVar3 = pHVar7->field_01B3;
        uVar10 = 0;
        uVar9 = *(uint *)&pAVar3->field_0xc;
        if (uVar9 == 0) {
LAB_00514ab9:
          uVar9 = *(uint *)sizeHelp_exref;
          pHVar11 = pHVar7;
          local_c = uVar9;
        }
        else {
          local_10 = pHVar7->field_01C7 + iVar6;
          if (uVar9 == 0) {
            piVar8 = nullptr;
            goto LAB_00514a8f;
          }
          do {
            piVar8 = (int *)(pAVar3->field_0008 * uVar10 + pAVar3->field_001C);
LAB_00514a8f:
            if ((*piVar8 == *(int *)local_10) && (piVar8[1] == *(int *)(local_10 + 4))) {
              pHVar7->field_01B7 = uVar10;
              goto LAB_00514ab9;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar9);
          uVar9 = *(uint *)sizeHelp_exref;
          pHVar11 = pHVar7;
          local_c = uVar9;
        }
        break;
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
switchD_00514a29_caseD_5:
        pHVar11 = pHVar7;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_c);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

