#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tintersys.cpp
   InterSystemC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402A63|00542F40; family_names=InterSystemC::GetMessage; ret4=9;
   direct_offsets={10:2,14:0,18:3,1c:0} */

int __thiscall InterSystemC::GetMessage(InterSystemC *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  LPSTR pCVar5;
  undefined4 uVar6;
  BITMAPINFO *pBVar7;
  char *text;
  char cVar8;
  byte bVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  InternalExceptionFrame local_50;
  tagBITMAPINFO *local_c;
  SystemClassTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = (SystemClassTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Andrey\\tintersys.cpp",0x11f,0,iVar3,
                                "%s","InterSystemC::GetMessage");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\tintersys.cpp",0x11f);
    return 0xffff;
  }
  SystemClassTy::GetMessage(local_8,message);
  SVar1 = message->id;
  if (SVar1 < MESS_INTERSYSTEMC_B904) {
    if (SVar1 == MESS_INTERSYSTEMC_B903) {
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        thunk_FUN_0054b540(PTR_00802a30);
      }
      if (g_helpPanel_00801690 == (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) {
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)g_helpPanel_00801690 + 0x18))(1);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    if (SVar1 < MESS_INTERSYSTEMC_B901) {
      if (SVar1 != MESS_INTERSYSTEMC_B900) {
        if (SVar1 == MESS_SHARED_0005) {
          if (PTR_00802a58 != (cLoadingTy *)0x0) {
            g_currentExceptionFrame = local_50.previous;
            return 0;
          }
          iVar12 = 1;
          uVar4 = _DAT_00807348 & 0xff;
          piVar10 = (int *)0x0;
          iVar3 = 1;
          pCVar5 = thunk_FUN_00571240("PANEL_BKGND",0);
          pCVar5 = FUN_006f2c00(pCVar5,iVar3,uVar4);
          local_c = (tagBITMAPINFO *)cMf32::RecGet(DAT_00806790,1,pCVar5,piVar10,iVar12);
          PutDDX(0,0,'\x01',local_c);
          cMf32::RecMemFree(DAT_00806790,(uint *)&local_c);
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        if (SVar1 != MESS_INTERSYSTEMC_B8FF) {
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        if (PTR_00802a30 != (CursorClassTy *)0x0) {
          thunk_FUN_0054b540(PTR_00802a30);
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
      if (SVar1 == MESS_INTERSYSTEMC_B901) {
        if (PTR_00802a30 != (CursorClassTy *)0x0) {
          thunk_FUN_0054b540(PTR_00802a30);
        }
        if (g_playPanel_008016E4 == (PlayPanelTy *)0x0) {
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        PlayPanelTy::SetPanel(g_playPanel_008016E4,'\x01');
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      if (SVar1 != MESS_INTERSYSTEMC_B902) {
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
    }
switchD_00543107_caseD_b904:
    if (PTR_00802a58 != (cLoadingTy *)0x0) {
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    piVar10 = (message->arg1).ptr;
    FUN_006b5f80((int *)PTR_008075a8,*piVar10,piVar10[1],piVar10[2],piVar10[3]);
    SVar1 = message->id;
    if (SVar1 == MESS_INTERSYSTEMC_B900) {
      text = "BUT_FILEOPT";
    }
    else if (SVar1 == MESS_INTERSYSTEMC_B902) {
      text = "BUT_SETOPT";
    }
    else if (SVar1 == MESS_INTERSYSTEMC_B904) {
      text = "BUT_HELPOPT";
    }
    else {
      text = "BUT_AIOPT";
    }
    puVar13 = (undefined4 *)0x0;
    iVar11 = 0;
    iVar12 = 1;
    bVar9 = 0;
    uVar4 = 0xffffffff;
    uVar6 = thunk_FUN_00529f90((int)message);
    iVar3 = 1;
    pCVar5 = thunk_FUN_00571240(text,0);
    pCVar5 = FUN_006f2c00(pCVar5,iVar3,uVar6);
    pBVar7 = (BITMAPINFO *)
             Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_1,pCVar5,uVar4,bVar9,iVar12,iVar11,puVar13);
    iVar3 = piVar10[1];
    iVar12 = *piVar10;
    cVar8 = '\x01';
LAB_00543291:
    PutDDX(iVar12,iVar3,cVar8,pBVar7);
  }
  else {
    switch(SVar1) {
    case MESS_INTERSYSTEMC_B904:
    case MESS_INTERSYSTEMC_B904|MESS_ID_CREATE:
      goto switchD_00543107_caseD_b904;
    case 0xb905:
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        thunk_FUN_0054b540(PTR_00802a30);
      }
      if (g_optPanel_008016DC != (OptPanelTy *)0x0) {
        OptPanelTy::SwitchOptPanel(g_optPanel_008016DC,'\x0e');
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      break;
    case MESS_INTERSYSTEMC_B904|MESS_SHARED_0003:
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        thunk_FUN_0054b540(PTR_00802a30);
        PTR_00802a30->field_04DE = 1;
        thunk_FUN_005252c0(0xae);
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      break;
    case MESS_INTERSYSTEMC_B908:
      if (PTR_00802a58 != (cLoadingTy *)0x0) {
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      piVar10 = (message->arg1).ptr;
      FUN_006b5f80((int *)PTR_008075a8,*piVar10,piVar10[1],piVar10[2],piVar10[3]);
      puVar13 = (undefined4 *)0x0;
      iVar11 = 0;
      iVar12 = 1;
      bVar9 = 0;
      uVar4 = 0xffffffff;
      uVar6 = thunk_FUN_00529f90((int)message);
      iVar3 = 1;
      pCVar5 = thunk_FUN_00571240("BUT_OHELP",0);
      pCVar5 = FUN_006f2c00(pCVar5,iVar3,uVar6);
      pBVar7 = (BITMAPINFO *)
               Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806794,CASE_6,pCVar5,uVar4,bVar9,iVar12,iVar11,puVar13);
      iVar12 = *piVar10;
      iVar3 = piVar10[1];
      cVar8 = '\x06';
      goto LAB_00543291;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

