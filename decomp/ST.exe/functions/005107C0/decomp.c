#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404246|005107C0; family_names=FrmPanelTy::GetMessage; ret4=8;
   direct_offsets={10:1,14:0,18:0,1c:1} */

int __thiscall FrmPanelTy::GetMessage(FrmPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  FrmPanelTy *this_00;
  int iVar2;
  LPSTR pCVar2;
  int iVar4;
  int iVar3;
  FrmPanelTyVTable *pFVar4;
  char *pcVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  InternalExceptionFrame local_60;
  uint local_1c [4];
  ushort local_c;
  FrmPanelTy *local_8;

  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_8 = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_60.previous;

    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\frmpanel.cpp",0xe0,0,iVar2,"%s"
                               ,"FrmPanelTy::GetMessage");
    if (iVar4 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\frmpanel.cpp",0xe0);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[005107FE]: CALL 0x00401401; direct=00401401 SpecPanelTy::GetMessage */
  SpecPanelTy::GetMessage((SpecPanelTy *)local_8,message);
  SVar1 = message->id;
  if (SVar1 < (MESS_BLDLABPANELTY_C0A4|MESS_ID_CREATE)) {
    if (SVar1 < MESS_SHARED_C09F) {
      if (SVar1 < 0xb10c) {
        if (SVar1 != MESS_FRMPANELTY_B10B) {
          if (SVar1 < MESS_FRMPANELTY_B109) {
            if (SVar1 != MESS_FRMPANELTY_B108) {
              if (SVar1 == MESS_ID_CREATE) {
                /* ST_CALLSITE[00510862]: CALL 0x00404584; direct=00404584 FrmPanelTy::InitFrmPanel */
                InitFrmPanel(this_00);
                g_currentExceptionFrame = local_60.previous;
                return 0;
              }
              if (SVar1 != MESS_SHARED_0003) {
                g_currentExceptionFrame = local_60.previous;
                return 0;
              }
              /* ST_CALLSITE[00510848]: CALL 0x00402b53; direct=00402B53 FrmPanelTy::DoneFrmPanel */
              DoneFrmPanel(this_00);
              g_currentExceptionFrame = local_60.previous;
              return 0;
            }
          }
          else {
            if (SVar1 == MESS_FRMPANELTY_B109) {
              pFVar4 = this_00->vtable;
              pcVar5 = "BUT_FINC";
              goto LAB_00510902;
            }
            if (SVar1 != MESS_FRMPANELTY_B10A) {
              g_currentExceptionFrame = local_60.previous;
              return 0;
            }
          }
cf_common_exit_005109A5:
          local_1c[1] = 0;
          local_1c[2] = 0;
          local_1c[3] = 0;
          local_c = 0;
          switch(SVar1) {
          case MESS_FRMPANELTY_B108:
            local_1c[0] = 9;
            break;
          default:
            local_1c[0] = 8;
            break;
          case MESS_FRMPANELTY_B10A:
            local_1c[0] = 10;
            break;
          case 0xb10c:
            local_1c[0] = 0xb;
            break;
          case MESS_CPANELTY_B10E:
            local_1c[0] = 0xc;
          }
          /* ST_CALLSITE[005109F4]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
          STPlaySystemC::sub_0054EDF0
                    (g_playSystem_00802A38,(undefined4 *)0x18,local_1c,0,0xffffffff);
          thunk_FUN_005252c0(0xae);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        pFVar4 = this_00->vtable;
        pcVar5 = "BUT_FDEC";
      }
      else {
        switch(SVar1) {
        case 0xb10c:
        case MESS_CPANELTY_B10E:
          goto cf_common_exit_005109A5;
        case MESS_CPANELTY_B10D:
          pFVar4 = this_00->vtable;
          pcVar5 = "BUT_FRLFT";
          break;
        case 0xb10f:
          pFVar4 = this_00->vtable;
          pcVar5 = "BUT_FRRT";
          break;
        default:
          goto switchD_005108d5_default;
        }
      }
LAB_00510902:
      iVar7 = 1;
      iVar3 = 0;
      pcVar6 = thunk_FUN_0052a080;
      pCVar2 = thunk_FUN_00571240(pcVar5,0);
      /* ST_CALLSITE[00510910]: CALL dword ptr [EBX + 0x8] */
      (*pFVar4->PaintBut)((PanelTy *)this_00,(int)message,6,pCVar2,pcVar6,iVar3,iVar7);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    switch(SVar1) {
    case MESS_SHARED_C09F:
      uVar8 = 1;
      break;
    case MESS_BEHPANELTY_C0A0:
      uVar8 = 3;
      break;
    case MESS_FSGSTY_C0A1:
      uVar8 = 6;
      break;
    case MESS_SHARED_C0A2:
      uVar8 = 7;
      break;
    case MESS_SHARED_C0A3:
      uVar8 = 2;
      break;
    case MESS_BLDLABPANELTY_C0A4:
      uVar8 = 4;
      break;
    case MESS_FRMPANELTY_C0A5:
      uVar8 = 5;
      break;
    default:
      goto switchD_00510930_default;
    }
    /* ST_CALLSITE[00510959]: CALL 0x004035ad; direct=004035AD CursorClassTy::sub_0054B630 */
    CursorClassTy::sub_0054B630(g_cursorClass_00802A30,0x4e,uVar8);
switchD_00510930_default:
    /* ST_CALLSITE[00510964]: CALL dword ptr [EAX + 0x1c] */
    (*this_00->vtable->SetPanel)((SpecPanelTy *)this_00,'\0');
    thunk_FUN_005252c0(0xae);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  switch(SVar1) {
  case MESS_BLDLABPANELTY_C0A4|MESS_ID_CREATE:
    goto cf_common_exit_005109A5;
  default:
    goto switchD_005108d5_default;
  case MESS_INTERCOMPANELTY_C0AF:
    pcVar5 = "BUT_FLINE";
    break;
  case 0xc0b0:
    pcVar5 = "BUT_FBENDUP";
    break;
  case MESS_BEHPANELTY_C0B1:
    pcVar5 = "BUT_FHOLD";
    break;
  case 0xc0b2:
    pcVar5 = "BUT_FLOCK";
    break;
  case MESS_BLDLABPANELTY_C0B3:
    pcVar5 = "BUT_FWALL";
    break;
  case MESS_RESEARCHPANELTY_C0B4:
    pcVar5 = "BUT_FBENDDN";
    break;
  case MESS_SHARED_C0B5:
    pcVar5 = "BUT_FSQUARE";
    break;
  case MESS_RESEARCHPANELTY_C0B4|MESS_ID_CREATE:
    pcVar5 = "BUT_FBREAK";
  }
  /* ST_CALLSITE[00510A5F]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_005105E0_C0011880; source view only; no Ghidra override */
  pCVar2 = thunk_FUN_00571240(pcVar5,0);
  /* ST_CALLSITE[00510A6B]: CALL 0x00405d9e; direct=00405D9E FrmPanelTy::PaintBut */
  PaintBut(this_00,(RecoveredRecordView_005105E0_C0011880 *)message,pCVar2);
switchD_005108d5_default:
  g_currentExceptionFrame = local_60.previous;
  return 0;
}

