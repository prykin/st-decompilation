
void __thiscall CPanelTy::PlayBriefing(CPanelTy *this,char *param_1)

{
  CPanelTy *pCVar1;
  code *pcVar2;
  CPanelTy *pCVar3;
  int iVar4;
  char *pcVar5;
  short *psVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  byte bVar8;
  byte bVar9;
  InternalExceptionFrame IStack_4c;
  CPanelTy *pCStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pCStack_8 = this;
  iVar4 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    if (DAT_00806758 != 0) {
      iVar4 = FUN_00715050(DAT_00806758,param_1,0);
      if (iVar4 != 0) {
        _strncpy(&DAT_0080c4d7,param_1,0x1f);
        pCVar3 = pCStack_8;
        DAT_0080c4f6 = 0;
        if (*(byte **)(pCStack_8 + 0x24b) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(pCStack_8 + 0x24b));
        }
        *(int *)(pCVar3 + 0x24b) = iVar4;
        pCVar1 = pCVar3 + 0x25b;
        *(undefined4 *)(pCVar3 + 599) = *(undefined4 *)(pCVar3 + 0x253);
        *(undefined4 *)(pCVar3 + 0x24f) = 0;
        if (*(int *)pCVar1 != 0) {
          FUN_0070b600((int *)pCVar1);
        }
        iVar4 = 1;
        bVar9 = 0;
        bVar8 = 6;
        pcVar5 = (char *)thunk_FUN_005260b0(0,0,0);
        psVar6 = FUN_0070b430(DAT_00806790,pcVar5,bVar8,bVar9,iVar4);
        *(short **)pCVar1 = psVar6;
        pCVar3[0x260] = (CPanelTy)0x1;
        pCVar3[0x25f] = (CPanelTy)0x0;
        FUN_006b4170(*(int *)(pCVar3 + 0x1b4),0,100,5,0x226,0x55,0);
        if ((DAT_0080c4f7 != 3) && (DAT_0080c4f7 != 1)) {
          pCVar3[0x260] = (CPanelTy)0x3;
          DAT_0080c4f7 = 3;
          FUN_006b3430(DAT_008075a8,*(uint *)(pCVar3 + 0x17c));
        }
      }
    }
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x3c8,0,iVar4,&DAT_007a4ccc,
                             s_CPanelTy__PlayBriefing_007c2268);
  if (iVar7 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x3c8);
  return;
}

