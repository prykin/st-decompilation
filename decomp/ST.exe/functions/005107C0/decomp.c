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
  code *pcVar2;
  SpecPanelTy *this_00;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  AnonPointee_SpecPanelTy_0000 *pAVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  InternalExceptionFrame local_60;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  SpecPanelTy *local_8;

  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_8 = (SpecPanelTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\frmpanel.cpp",0xe0,0,iVar3,"%s"
                               ,"FrmPanelTy::GetMessage");
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\frmpanel.cpp",0xe0);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SpecPanelTy::GetMessage(local_8,message);
  SVar1 = message->id;
  if (SVar1 < (MESS_BLDLABPANELTY_C0A4|MESS_ID_CREATE)) {
    if (SVar1 < MESS_SHARED_C09F) {
      if (SVar1 < 0xb10c) {
        if (SVar1 != MESS_FRMPANELTY_B10B) {
          if (SVar1 < MESS_FRMPANELTY_B109) {
            if (SVar1 != MESS_FRMPANELTY_B108) {
              if (SVar1 == MESS_ID_CREATE) {
                InitFrmPanel((FrmPanelTy *)this_00);
                g_currentExceptionFrame = local_60.previous;
                return 0;
              }
              if (SVar1 != MESS_SHARED_0003) {
                g_currentExceptionFrame = local_60.previous;
                return 0;
              }
              DoneFrmPanel((FrmPanelTy *)this_00);
              g_currentExceptionFrame = local_60.previous;
              return 0;
            }
          }
          else {
            if (SVar1 == MESS_FRMPANELTY_B109) {
              pAVar6 = this_00->field_0000;
              pcVar7 = "BUT_FINC";
              goto LAB_00510902;
            }
            if (SVar1 != MESS_FRMPANELTY_B10A) {
              g_currentExceptionFrame = local_60.previous;
              return 0;
            }
          }
cf_common_exit_005109A5:
          local_18 = 0;
          local_14 = 0;
          local_10 = 0;
          local_c = 0;
          switch(SVar1) {
          case MESS_FRMPANELTY_B108:
            local_1c = 9;
            break;
          default:
            local_1c = 8;
            break;
          case MESS_FRMPANELTY_B10A:
            local_1c = 10;
            break;
          case 0xb10c:
            local_1c = 0xb;
            break;
          case MESS_CPANELTY_B10E:
            local_1c = 0xc;
          }
          thunk_FUN_0054edf0((undefined4 *)0x18,&local_1c,0,0xffffffff);
          thunk_FUN_005252c0(0xae);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        pAVar6 = this_00->field_0000;
        pcVar7 = "BUT_FDEC";
      }
      else {
        switch(SVar1) {
        case 0xb10c:
        case MESS_CPANELTY_B10E:
          goto cf_common_exit_005109A5;
        case MESS_CPANELTY_B10D:
          pAVar6 = this_00->field_0000;
          pcVar7 = "BUT_FRLFT";
          break;
        case 0xb10f:
          pAVar6 = this_00->field_0000;
          pcVar7 = "BUT_FRRT";
          break;
        default:
          goto switchD_005108d5_default;
        }
      }
LAB_00510902:
      uVar9 = 1;
      uVar10 = 0;
      puVar8 = &LAB_004030fd;
      pCVar4 = thunk_FUN_00571240(pcVar7,0);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&pAVar6->field_0x8)(message,6,pCVar4,puVar8,uVar10,uVar9);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    switch(SVar1) {
    case MESS_SHARED_C09F:
      uVar10 = 1;
      break;
    case MESS_BEHPANELTY_C0A0:
      uVar10 = 3;
      break;
    case MESS_FSGSTY_C0A1:
      uVar10 = 6;
      break;
    case MESS_SHARED_C0A2:
      uVar10 = 7;
      break;
    case MESS_SHARED_C0A3:
      uVar10 = 2;
      break;
    case MESS_BLDLABPANELTY_C0A4:
      uVar10 = 4;
      break;
    case MESS_FRMPANELTY_C0A5:
      uVar10 = 5;
      break;
    default:
      goto switchD_00510930_default;
    }
    thunk_FUN_0054b630(PTR_00802a30,0x4e,uVar10);
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
switchD_00510930_default:
    (*(code *)this_00->field_0000->field_001C)(0);
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
    pcVar7 = "BUT_FLINE";
    break;
  case 0xc0b0:
    pcVar7 = "BUT_FBENDUP";
    break;
  case MESS_BEHPANELTY_C0B1:
    pcVar7 = "BUT_FHOLD";
    break;
  case 0xc0b2:
    pcVar7 = "BUT_FLOCK";
    break;
  case MESS_BLDLABPANELTY_C0B3:
    pcVar7 = "BUT_FWALL";
    break;
  case MESS_RESEARCHPANELTY_C0B4:
    pcVar7 = "BUT_FBENDDN";
    break;
  case MESS_SHARED_C0B5:
    pcVar7 = "BUT_FSQUARE";
    break;
  case MESS_RESEARCHPANELTY_C0B4|MESS_ID_CREATE:
    pcVar7 = "BUT_FBREAK";
  }
  pCVar4 = thunk_FUN_00571240(pcVar7,0);
  PaintBut((FrmPanelTy *)this_00,(AnonShape_005105E0_BBFE3E3B *)message,pCVar4);
switchD_005108d5_default:
  g_currentExceptionFrame = local_60.previous;
  return 0;
}

