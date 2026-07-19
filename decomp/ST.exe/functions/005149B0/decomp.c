
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::LinkAct */

void __thiscall HelpPanelTy::LinkAct(HelpPanelTy *this,int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *pHVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  HelpPanelTy *pHVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  int *local_10;
  uint local_c;
  HelpPanelTy *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar4 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x350,0,iVar4,&DAT_007a4ccc
                               ,s_HelpPanelTy__LinkAct_007c3b20);
    if (iVar7 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x350);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_c = *(uint *)sizeHelp_exref;
  if (local_c != 0) {
    uVar6 = 0;
    pHVar9 = local_8;
    do {
      pHVar3 = local_8;
      iVar7 = uVar6 * 0x11;
      cVar1 = *(char *)(*(int *)(pHVar9 + 0x1c7) + 8 + iVar7);
      iVar4 = *(int *)(pHVar9 + 0x1c7) + iVar7;
      switch(cVar1) {
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x04':
      case '\v':
      case '\f':
        if ((*(int *)(iVar4 + 9) != param_1) ||
           (((cVar1 != '\x03' && (cVar1 != '\f')) && (*(int *)(iVar4 + 0xd) != param_2))))
        goto switchD_00514a29_caseD_5;
        thunk_FUN_005148a0(local_8,uVar6);
        iVar4 = *(int *)(pHVar3 + 0x1b3);
        uVar8 = 0;
        uVar6 = *(uint *)(iVar4 + 0xc);
        if (uVar6 == 0) {
LAB_00514ab9:
          uVar6 = *(uint *)sizeHelp_exref;
          pHVar9 = pHVar3;
          local_c = uVar6;
        }
        else {
          local_10 = (int *)(iVar7 + *(int *)(pHVar3 + 0x1c7));
          if (uVar6 == 0) {
            piVar5 = (int *)0x0;
            goto LAB_00514a8f;
          }
          do {
            piVar5 = (int *)(*(int *)(iVar4 + 8) * uVar8 + *(int *)(iVar4 + 0x1c));
LAB_00514a8f:
            if ((*piVar5 == *local_10) && (piVar5[1] == local_10[1])) {
              *(uint *)(pHVar3 + 0x1b7) = uVar8;
              goto LAB_00514ab9;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar6);
          uVar6 = *(uint *)sizeHelp_exref;
          pHVar9 = pHVar3;
          local_c = uVar6;
        }
        break;
      case '\x05':
      case '\x06':
      case '\a':
      case '\b':
      case '\t':
      case '\n':
switchD_00514a29_caseD_5:
        pHVar9 = pHVar3;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_c);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

