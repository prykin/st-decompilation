
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PlayBriefing */

void __thiscall CPanelTy::PlayBriefing(CPanelTy *this,char *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  CPanelTy *pCVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  byte bVar7;
  byte bVar8;
  short *psVar9;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    if (g_cMf32_00806758 != (cMf32 *)0x0) {
      iVar4 = Library::Ourlib::MFDARR::mfDarLoad(g_cMf32_00806758,param_1,0);
      if (iVar4 != 0) {
        Library::MSVCRT::_strncpy(&DAT_0080c4d7,param_1,0x1f);
        pCVar3 = local_8;
        DAT_0080c4f6 = 0;
        if ((byte *)local_8->field_024B != (byte *)0x0) {
          FUN_006ae110((byte *)local_8->field_024B);
        }
        pCVar3->field_024B = iVar4;
        puVar1 = &pCVar3->field_025B;
        pCVar3->field_0257 = pCVar3->field_0253;
        pCVar3->field_024F = 0;
        if (*puVar1 != 0) {
          FUN_0070b600(puVar1);
        }
        psVar9 = (short *)0x1;
        bVar8 = 0;
        bVar7 = 6;
        pcVar5 = (char *)thunk_FUN_005260b0(0,0,0);
        psVar9 = Library::Ourlib::MFIMG::mfQmtLoad(DAT_00806790,pcVar5,bVar7,bVar8,psVar9);
        *puVar1 = psVar9;
        pCVar3->field_0260 = 1;
        pCVar3->field_025F = 0;
        FUN_006b4170(pCVar3->field_01B4,0,100,5,0x226,0x55,0);
        if ((DAT_0080c4f7 != 3) && (DAT_0080c4f7 != 1)) {
          pCVar3->field_0260 = 3;
          DAT_0080c4f7 = 3;
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pCVar3->field_017C);
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x3c8,0,iVar4,&DAT_007a4ccc,
                             s_CPanelTy__PlayBriefing_007c2268);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x3c8);
  return;
}

