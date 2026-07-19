
undefined4 __thiscall
CursorClassTy::SetGCType(CursorClassTy *this,ushort param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  CursorClassTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  char *pcVar5;
  BITMAPINFO *pBVar6;
  uint uVar7;
  InternalExceptionFrame *pIVar8;
  undefined4 auStack_54 [16];
  CursorClassTy *pCStack_14;
  undefined4 uStack_10;
  BITMAPINFO *pBStack_c;
  uint uStack_8;
  
  pIVar8 = g_currentExceptionFrame;
  uStack_10 = 1;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa8;
  pCStack_14 = this;
  iVar2 = __setjmp3(auStack_54,0,unaff_ESI,pIVar8);
  this_00 = pCStack_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = pIVar8;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x8ee,0,iVar2,
                               &DAT_007a4ccc,s_CursorClassTy__SetGCType_007c7ff0);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x8f0);
    return uStack_10;
  }
  if (*(ushort *)(pCStack_14 + 0x494) == param_1) {
switchD_0054bfbc_caseD_20:
    g_currentExceptionFrame = pIVar8;
    return uStack_10;
  }
  *(ushort *)(pCStack_14 + 0x494) = param_1;
  *(undefined4 *)(pCStack_14 + 0xc5) = param_2;
  *(undefined4 *)(pCStack_14 + 0xc9) = param_3;
  switch((uint)param_1) {
  case 0:
    switch(pCStack_14[0x493]) {
    case (CursorClassTy)0x1:
      pcVar5 = s_CUR_MENU_007c7dd4;
      break;
    default:
      pcVar5 = s_CUR_ARROW_007c8200;
      break;
    case (CursorClassTy)0x3:
      pcVar5 = s_CUR_TASK_007c8228;
      break;
    case (CursorClassTy)0x4:
      pcVar5 = s_CUR_REPORT_007c8218;
      break;
    case (CursorClassTy)0x5:
      pcVar5 = s_CUR_CLOCK_007c820c;
    }
    iVar3 = -1;
    iVar2 = -1;
    if (pCStack_14[0x493] == (CursorClassTy)0x5) {
      uVar7 = 0x12;
      pBVar6 = (BITMAPINFO *)0xd;
      uVar4 = 1000;
    }
    else {
      uVar7 = 0;
      pBVar6 = (BITMAPINFO *)0x0;
      uVar4 = 0x32;
    }
    goto LAB_0054c01c;
  case 1:
  case 6:
    iVar3 = 0x20;
    iVar2 = 0x3b;
    uVar7 = 0x14;
    pBVar6 = (BITMAPINFO *)0x22;
    pcVar5 = s_CUR_CMD_007c8134;
    goto LAB_0054c06f;
  case 2:
  case 7:
    iVar3 = 0x32;
    iVar2 = 0x43;
    uVar7 = 0x1d;
    pBVar6 = (BITMAPINFO *)0x27;
    pcVar5 = s_CUR_FIRE_007c80f4;
    break;
  case 3:
    iVar3 = 0x1f;
    iVar2 = 0x35;
    uVar7 = 0x14;
    pBVar6 = (BITMAPINFO *)0x22;
    pcVar5 = s_CUR_OWNBOAT_007c8174;
    break;
  case 4:
    iVar3 = 0x1f;
    iVar2 = 0x35;
    uVar7 = 0x14;
    pBVar6 = (BITMAPINFO *)0x22;
    pcVar5 = s_CUR_OWNOBJ_007c8164;
    goto LAB_0054c06f;
  case 5:
  case 0x14:
    iVar3 = -1;
    iVar2 = -1;
    uVar7 = 0;
    pBVar6 = (BITMAPINFO *)0x0;
    pcVar5 = s_CUR_ARROW_007c8200;
    break;
  case 8:
    iVar3 = 0x39;
    iVar2 = 0x37;
    uVar7 = 0x26;
    pBVar6 = (BITMAPINFO *)0x25;
    pcVar5 = s_CUR_DCBOMBER_007c80e4;
    goto LAB_0054c06f;
  case 9:
    iVar3 = 0x34;
    iVar2 = 0x43;
    uVar7 = 0x1b;
    pBVar6 = (BITMAPINFO *)0x24;
    pcVar5 = s_CUR_CAPTURE_007c8064;
    break;
  case 10:
    iVar3 = 0x34;
    iVar2 = 0x43;
    uVar7 = 0x1b;
    pBVar6 = (BITMAPINFO *)0x24;
    pcVar5 = s_CUR_CAPTUREUSE_007c8050;
    goto LAB_0054c06f;
  case 0xb:
    iVar3 = 0x34;
    iVar2 = 0x43;
    uVar7 = 0x1b;
    pBVar6 = (BITMAPINFO *)0x24;
    uVar4 = 0x32;
    pcVar5 = s_CUR_CAPTUREACS_007c803c;
    goto LAB_0054c01c;
  case 0xc:
  case 0x1f:
    iVar3 = 0x34;
    iVar2 = 0x43;
    uVar7 = 0x1b;
    pBVar6 = (BITMAPINFO *)0x24;
    uVar4 = 0x32;
    pcVar5 = s_CUR_PARALISE_007c8074;
    goto LAB_0054c01c;
  case 0xd:
  case 0xe:
    iVar3 = 0x2c;
    iVar2 = 0x41;
    uVar7 = 0x1d;
    pBVar6 = (BITMAPINFO *)0x2a;
    pcVar5 = s_CUR_DEFENCE_007c8084;
    goto LAB_0054c06f;
  case 0xf:
  case 0x10:
    iVar3 = 0x20;
    iVar2 = 0x3b;
    uVar7 = 0x14;
    pBVar6 = (BITMAPINFO *)0x22;
    pcVar5 = s_CUR_PATROL_007c8140;
    break;
  case 0x11:
    iVar3 = 0x20;
    iVar2 = 0x3b;
    uVar7 = 0x14;
    pBVar6 = (BITMAPINFO *)0x22;
    uVar4 = 0x32;
    pcVar5 = s_CUR_EQUIPM_007c80d4;
    goto LAB_0054c01c;
  case 0x12:
    iVar3 = 0x26;
    iVar2 = 0x43;
    uVar7 = 0x14;
    pBVar6 = (BITMAPINFO *)0x22;
    pcVar5 = s_CUR_RC_007c8110;
    goto LAB_0054c06f;
  case 0x13:
    iVar3 = 0x28;
    iVar2 = 0x3c;
    uVar7 = 0x1e;
    pBVar6 = (BITMAPINFO *)0x28;
    uVar4 = 0x32;
    pcVar5 = s_CUR_UNLOADRC_007c8100;
    goto LAB_0054c01c;
  case 0x15:
    iVar3 = -1;
    iVar2 = -1;
    uVar7 = 0x13;
    pBVar6 = (BITMAPINFO *)0x23;
    pcVar5 = s_CUR_NOBUILD_007c81f0;
    goto LAB_0054c06f;
  case 0x16:
    iVar3 = 0x3a;
    iVar2 = 0x38;
    uVar7 = 0x26;
    pBVar6 = (BITMAPINFO *)0x25;
    uVar4 = 0x32;
    pcVar5 = s_CUR_DISMANTLING_007c8150;
    goto LAB_0054c01c;
  case 0x17:
  case 0x18:
    iVar3 = 0x28;
    iVar2 = 0x32;
    uVar7 = 0x14;
    pBVar6 = (BITMAPINFO *)0x23;
    uVar4 = 0x32;
    pcVar5 = s_CUR_REPAIR_007c80a4;
    goto LAB_0054c01c;
  case 0x19:
    iVar3 = 0x20;
    iVar2 = 0x3b;
    uVar7 = 0x14;
    pBVar6 = (BITMAPINFO *)0x22;
    uVar4 = 0x32;
    pcVar5 = s_CUR_VIEW_007c8128;
    goto LAB_0054c01c;
  case 0x1a:
  case 0x1e:
    iVar3 = 0x32;
    iVar2 = 0x34;
    uVar7 = 0x25;
    pBVar6 = (BITMAPINFO *)0x25;
    pcVar5 = s_CUR_UNLOADCNT_007c8118;
    break;
  case 0x1b:
    iVar3 = 0x21;
    iVar2 = 0x3a;
    uVar7 = 0x13;
    pBVar6 = (BITMAPINFO *)0x21;
    pcVar5 = s_CUR_REPLENISH_007c8094;
    break;
  case 0x1c:
    iVar3 = 0x1b;
    iVar2 = 0x56;
    uVar7 = 0x13;
    pBVar6 = (BITMAPINFO *)0x34;
    pcVar5 = s_CUR_FORMATION_007c80c4;
    break;
  case 0x1d:
    iVar3 = 0x2e;
    iVar2 = 0x41;
    uVar7 = 0x23;
    pBVar6 = (BITMAPINFO *)0x28;
    pcVar5 = s_CUR_TELEPORT_007c80b4;
    goto LAB_0054c06f;
  default:
    goto switchD_0054bfbc_caseD_20;
  case 0x32:
    iVar3 = -1;
    iVar2 = -1;
    uVar7 = 0x1b;
    pBVar6 = (BITMAPINFO *)0x24;
    pcVar5 = s_CUR_SUP_007c81d8;
    goto LAB_0054c06f;
  case 0x33:
    iVar3 = -1;
    iVar2 = -1;
    uVar7 = 0x1b;
    pBVar6 = (BITMAPINFO *)0x24;
    uVar4 = 0x32;
    pcVar5 = s_CUR_SDN_007c81cc;
    goto LAB_0054c01c;
  case 0x34:
    iVar3 = -1;
    iVar2 = -1;
    uVar7 = 0x1b;
    pBVar6 = (BITMAPINFO *)0x24;
    pcVar5 = s_CUR_SRT_007c81c0;
    break;
  case 0x35:
    iVar3 = -1;
    iVar2 = -1;
    uVar7 = 0x1b;
    pBVar6 = (BITMAPINFO *)0x24;
    pcVar5 = s_CUR_SLT_007c81b4;
    goto LAB_0054c06f;
  case 0x36:
    iVar3 = -1;
    iVar2 = -1;
    uVar7 = 0x16;
    pBVar6 = (BITMAPINFO *)0x24;
    uVar4 = 0x32;
    pcVar5 = s_CUR_SLU_007c81a8;
    goto LAB_0054c01c;
  case 0x37:
    iVar3 = -1;
    iVar2 = -1;
    uVar7 = 0x16;
    pBVar6 = (BITMAPINFO *)0x24;
    pcVar5 = s_CUR_SRU_007c819c;
    break;
  case 0x38:
    iVar3 = -1;
    iVar2 = -1;
    uVar7 = 0x20;
    pBVar6 = (BITMAPINFO *)0x24;
    pcVar5 = s_CUR_SLD_007c8190;
LAB_0054c06f:
    SetImages(pCStack_14,1,pcVar5,0x32,pBVar6,uVar7,iVar2,iVar3);
    DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
    g_currentExceptionFrame = pIVar8;
    return 0;
  case 0x39:
    iVar3 = -1;
    iVar2 = -1;
    uVar7 = 0x20;
    pBVar6 = (BITMAPINFO *)0x24;
    uVar4 = 0x32;
    pcVar5 = s_CUR_SRD_007c8184;
LAB_0054c01c:
    SetImages(pCStack_14,1,pcVar5,uVar4,pBVar6,uVar7,iVar2,iVar3);
    DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
    g_currentExceptionFrame = pIVar8;
    return 0;
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
    iVar2 = param_1 - 0x3c;
    switch(iVar2) {
    case 0:
    case 1:
      pBStack_c = (BITMAPINFO *)0x22;
      break;
    case 2:
    case 5:
    case 7:
      pBStack_c = (BITMAPINFO *)0x3f;
      break;
    case 3:
    case 4:
    case 6:
      pBStack_c = (BITMAPINFO *)0x5;
      break;
    default:
      goto switchD_0054c0ac_default;
    }
    switch(iVar2) {
    case 0:
    case 4:
    case 5:
      uStack_8 = 4;
      break;
    case 1:
    case 6:
    case 7:
      uStack_8 = 0x22;
      break;
    case 2:
    case 3:
      uStack_8 = 0x14;
    }
switchD_0054c0ac_default:
    iVar3 = -1;
    iVar2 = -1;
    pcVar5 = s_CUR_SNO_007c81e4;
    pBVar6 = pBStack_c;
    uVar7 = uStack_8;
    break;
  case 0x46:
    SetImages(pCStack_14,1,s_CUR_HYPER_007c8030,0x32,(BITMAPINFO *)0xd,0,0x1b,0xf);
    DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
    g_currentExceptionFrame = pIVar8;
    return 0;
  case 0x47:
    SetImages(pCStack_14,1,s_CUR_HELPNO_007c8020,0x32,(BITMAPINFO *)0x1,1,0x1d,0x30);
    DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
    g_currentExceptionFrame = pIVar8;
    return 0;
  case 0x48:
    iVar3 = 0x1e;
    iVar2 = 0x36;
    pcVar5 = s_CUR_HELPYES_007c8010;
    pBVar6 = (BITMAPINFO *)0x20;
    uVar7 = 0x12;
  }
  SetImages(pCStack_14,1,pcVar5,0x32,pBVar6,uVar7,iVar2,iVar3);
  DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
  g_currentExceptionFrame = pIVar8;
  return 0;
}

