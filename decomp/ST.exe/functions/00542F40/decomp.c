
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tintersys.cpp
   InterSystemC::GetMessage */

undefined4 __thiscall InterSystemC::GetMessage(InterSystemC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  LPSTR pCVar4;
  undefined4 uVar5;
  BITMAPINFO *pBVar6;
  char *text;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char cVar7;
  byte bVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  InternalExceptionFrame local_50;
  BITMAPINFO *local_c;
  InterSystemC *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Andrey_tintersys_cpp_007c7be8,0x11f,0,iVar2,
                                &DAT_007a4ccc,s_InterSystemC__GetMessage_007c7c70);
    if (iVar11 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Andrey_tintersys_cpp_007c7be8,0x11f);
    return 0xffff;
  }
  SystemClassTy::GetMessage((SystemClassTy *)local_8,param_1);
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 < 0xb904) {
    if (uVar3 == 0xb903) {
      if (DAT_00802a30 != (void *)0x0) {
        thunk_FUN_0054b540(DAT_00802a30);
      }
      if (DAT_00801690 == (int *)0x0) {
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      (**(code **)(*DAT_00801690 + 0x18))(1);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    if (uVar3 < 0xb901) {
      if (uVar3 != 0xb900) {
        if (uVar3 == 5) {
          if (DAT_00802a58 != 0) {
            g_currentExceptionFrame = local_50.previous;
            return 0;
          }
          iVar11 = 1;
          uVar3 = _DAT_00807348 & 0xff;
          piVar9 = (int *)0x0;
          iVar2 = 1;
          pCVar4 = thunk_FUN_00571240(s_PANEL_BKGND_007c7cc8,0);
          pCVar4 = FUN_006f2c00(pCVar4,iVar2,uVar3);
          local_c = (BITMAPINFO *)cMf32::RecGet(DAT_00806790,1,pCVar4,piVar9,iVar11);
          PutDDX(0,0,'\x01',local_c);
          cMf32::RecMemFree(DAT_00806790,(uint *)&local_c);
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        if (uVar3 != 0xb8ff) {
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        if (DAT_00802a30 != (void *)0x0) {
          thunk_FUN_0054b540(DAT_00802a30);
        }
        if (g_optPanel_008016DC == (OptPanelTy *)0x0) {
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        OptPanelTy::SwitchOptPanel(g_optPanel_008016DC,'\x01');
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
    }
    else {
      if (uVar3 == 0xb901) {
        if (DAT_00802a30 != (void *)0x0) {
          thunk_FUN_0054b540(DAT_00802a30);
        }
        if (g_playPanel_008016E4 == (PlayPanelTy *)0x0) {
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        PlayPanelTy::SetPanel(g_playPanel_008016E4,'\x01');
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      if (uVar3 != 0xb902) {
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
    }
switchD_00543107_caseD_b904:
    if (DAT_00802a58 != 0) {
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    piVar9 = *(int **)(param_1 + 0x18);
    FUN_006b5f80(DAT_008075a8,*piVar9,piVar9[1],piVar9[2],piVar9[3]);
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0xb900) {
      text = s_BUT_FILEOPT_007c7c48;
    }
    else if (iVar2 == 0xb902) {
      text = s_BUT_SETOPT_007c7c9c;
    }
    else if (iVar2 == 0xb904) {
      text = s_BUT_HELPOPT_007c7cac;
    }
    else {
      text = s_BUT_AIOPT_007c7cbc;
    }
    puVar12 = (undefined4 *)0x0;
    iVar10 = 0;
    iVar11 = 1;
    bVar8 = 0;
    uVar3 = 0xffffffff;
    uVar5 = thunk_FUN_00529f90(param_1);
    iVar2 = 1;
    pCVar4 = thunk_FUN_00571240(text,0);
    pCVar4 = FUN_006f2c00(pCVar4,iVar2,uVar5);
    pBVar6 = (BITMAPINFO *)
             Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_1,pCVar4,uVar3,bVar8,iVar11,iVar10,puVar12);
    iVar2 = piVar9[1];
    iVar11 = *piVar9;
    cVar7 = '\x01';
LAB_00543291:
    PutDDX(iVar11,iVar2,cVar7,pBVar6);
  }
  else {
    switch(uVar3) {
    case 0xb904:
    case 0xb906:
      goto switchD_00543107_caseD_b904;
    case 0xb905:
      if (DAT_00802a30 != (void *)0x0) {
        thunk_FUN_0054b540(DAT_00802a30);
      }
      if (g_optPanel_008016DC != (OptPanelTy *)0x0) {
        OptPanelTy::SwitchOptPanel(g_optPanel_008016DC,'\x0e');
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      break;
    case 0xb907:
      if (DAT_00802a30 != (void *)0x0) {
        thunk_FUN_0054b540(DAT_00802a30);
        *(undefined1 *)((int)DAT_00802a30 + 0x4de) = 1;
        thunk_FUN_005252c0(0xae);
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      break;
    case 0xb908:
      if (DAT_00802a58 != 0) {
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      piVar9 = *(int **)(param_1 + 0x18);
      FUN_006b5f80(DAT_008075a8,*piVar9,piVar9[1],piVar9[2],piVar9[3]);
      puVar12 = (undefined4 *)0x0;
      iVar10 = 0;
      iVar11 = 1;
      bVar8 = 0;
      uVar3 = 0xffffffff;
      uVar5 = thunk_FUN_00529f90(param_1);
      iVar2 = 1;
      pCVar4 = thunk_FUN_00571240(s_BUT_OHELP_007c7c90,0);
      pCVar4 = FUN_006f2c00(pCVar4,iVar2,uVar5);
      pBVar6 = (BITMAPINFO *)
               Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806794,CASE_6,pCVar4,uVar3,bVar8,iVar11,iVar10,puVar12);
      iVar11 = *piVar9;
      iVar2 = piVar9[1];
      cVar7 = '\x06';
      goto LAB_00543291;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

