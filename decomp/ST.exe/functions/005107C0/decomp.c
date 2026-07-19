
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::GetMessage */

undefined4 __thiscall FrmPanelTy::GetMessage(FrmPanelTy *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  SpecPanelTy *this_00;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
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
  iVar3 = __setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_frmpanel_cpp_007c2958,0xe0,0,iVar3,&DAT_007a4ccc
                               ,s_FrmPanelTy__GetMessage_007c2ae0);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_frmpanel_cpp_007c2958,0xe0);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  SpecPanelTy::GetMessage(local_8,param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xc0a6) {
    if (uVar1 < 0xc09f) {
      if (uVar1 < 0xb10c) {
        if (uVar1 != 0xb10b) {
          if (uVar1 < 0xb109) {
            if (uVar1 != 0xb108) {
              if (uVar1 == 2) {
                InitFrmPanel((FrmPanelTy *)this_00);
                g_currentExceptionFrame = local_60.previous;
                return 0;
              }
              if (uVar1 != 3) {
                g_currentExceptionFrame = local_60.previous;
                return 0;
              }
              DoneFrmPanel((FrmPanelTy *)this_00);
              g_currentExceptionFrame = local_60.previous;
              return 0;
            }
          }
          else {
            if (uVar1 == 0xb109) {
              iVar3 = *(int *)this_00;
              pcVar7 = s_BUT_FINC_007c29d0;
              goto LAB_00510902;
            }
            if (uVar1 != 0xb10a) {
              g_currentExceptionFrame = local_60.previous;
              return 0;
            }
          }
switchD_005108d5_caseD_b10c:
          local_18 = 0;
          local_14 = 0;
          local_10 = 0;
          local_c = 0;
          switch(uVar1) {
          case 0xb108:
            local_1c = 9;
            break;
          default:
            local_1c = 8;
            break;
          case 0xb10a:
            local_1c = 10;
            break;
          case 0xb10c:
            local_1c = 0xb;
            break;
          case 0xb10e:
            local_1c = 0xc;
          }
          thunk_FUN_0054edf0((undefined4 *)0x18,&local_1c,0,0xffffffff);
          thunk_FUN_005252c0(0xae);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        iVar3 = *(int *)this_00;
        pcVar7 = s_BUT_FDEC_007c29b8;
      }
      else {
        switch(uVar1) {
        case 0xb10c:
        case 0xb10e:
          goto switchD_005108d5_caseD_b10c;
        case 0xb10d:
          iVar3 = *(int *)this_00;
          pcVar7 = s_BUT_FRLFT_007c29ac;
          break;
        case 0xb10f:
          iVar3 = *(int *)this_00;
          pcVar7 = s_BUT_FRRT_007c29a0;
          break;
        default:
          goto switchD_005108d5_default;
        }
      }
LAB_00510902:
      uVar9 = 1;
      uVar6 = 0;
      puVar8 = &LAB_004030fd;
      pCVar4 = thunk_FUN_00571240(pcVar7,0);
      (**(code **)(iVar3 + 8))(param_1,6,pCVar4,puVar8,uVar6,uVar9);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    switch(uVar1) {
    case 0xc09f:
      uVar6 = 1;
      break;
    case 0xc0a0:
      uVar6 = 3;
      break;
    case 0xc0a1:
      uVar6 = 6;
      break;
    case 0xc0a2:
      uVar6 = 7;
      break;
    case 0xc0a3:
      uVar6 = 2;
      break;
    case 0xc0a4:
      uVar6 = 4;
      break;
    case 0xc0a5:
      uVar6 = 5;
      break;
    default:
      goto switchD_00510930_default;
    }
    thunk_FUN_0054b630(DAT_00802a30,0x4e,uVar6);
switchD_00510930_default:
    (**(code **)(*(int *)this_00 + 0x1c))(0);
    thunk_FUN_005252c0(0xae);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  switch(uVar1) {
  case 0xc0a6:
    goto switchD_005108d5_caseD_b10c;
  default:
    goto switchD_005108d5_default;
  case 0xc0af:
    pcVar7 = s_BUT_FLINE_007c2a4c;
    break;
  case 0xc0b0:
    pcVar7 = s_BUT_FBENDUP_007c2a3c;
    break;
  case 0xc0b1:
    pcVar7 = s_BUT_FHOLD_007c2a30;
    break;
  case 0xc0b2:
    pcVar7 = s_BUT_FLOCK_007c2a24;
    break;
  case 0xc0b3:
    pcVar7 = s_BUT_FWALL_007c2a18;
    break;
  case 0xc0b4:
    pcVar7 = s_BUT_FBENDDN_007c2a08;
    break;
  case 0xc0b5:
    pcVar7 = s_BUT_FSQUARE_007c29f8;
    break;
  case 0xc0b6:
    pcVar7 = s_BUT_FBREAK_007c29e8;
  }
  pCVar4 = thunk_FUN_00571240(pcVar7,0);
  PaintBut((FrmPanelTy *)this_00,param_1,pCVar4);
switchD_005108d5_default:
  g_currentExceptionFrame = local_60.previous;
  return 0;
}

