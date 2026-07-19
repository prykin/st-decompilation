
void __thiscall CPanelTy::Update2PanelSI(CPanelTy *this)

{
  CPanelTy *pCVar1;
  code *pcVar2;
  CPanelTy *this_00;
  byte bVar3;
  CPanelTy CVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  CPanelTy *pCVar8;
  void *unaff_EDI;
  int *piVar9;
  InternalExceptionFrame IStack_ac;
  int iStack_68;
  CPanelTy CStack_64;
  CPanelTy CStack_63;
  CPanelTy CStack_4b;
  CPanelTy CStack_34;
  CPanelTy *pCStack_c;
  uint uStack_8;
  
  uStack_8 = uStack_8 & 0xffffff00;
  IStack_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_ac;
  pCStack_c = this;
  iVar5 = __setjmp3(IStack_ac.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pCStack_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = IStack_ac.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x234,0,iVar5,&DAT_007a4ccc
                               ,s_CPanelTy__Update2PanelSI_007c2620);
    if (iVar7 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_cpanel2_cpp_007c2524,0x234);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pCVar1 = pCStack_c + 0xb99;
  pCVar8 = pCVar1;
  piVar9 = &iStack_68;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar9 = *(int *)pCVar8;
    pCVar8 = pCVar8 + 4;
    piVar9 = piVar9 + 1;
  }
  pCVar8 = pCVar1;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(int *)pCVar8 = 0;
    pCVar8 = pCVar8 + 4;
  }
  thunk_FUN_0043beb0(DAT_007fa174,2,(int *)pCVar1);
  if (CStack_63 == this_00[0xb9e]) {
    switch(this_00[0xb9e]) {
    case (CPanelTy)0x1:
      if ((iStack_68 == *(int *)(this_00 + 0xb99)) && (CStack_64 == this_00[0xb9d])) {
        thunk_FUN_00501d00(this_00,(int *)(this_00 + 0xb99),&iStack_68);
        switch(*(int *)(this_00 + 0xb99)) {
        case 0x1a:
          goto switchD_005030a2_caseD_1a;
        case 0x1b:
        case 0x1d:
        case 0x23:
        case 0x24:
          CVar4 = this_00[0xbcd];
          if (CVar4 == CStack_34) {
            g_currentExceptionFrame = IStack_ac.previous;
            return;
          }
          if ((CVar4 != (CPanelTy)0xff) &&
             (uStack_8 = (uint)uStack_8._1_3_ << 8, CVar4 != (CPanelTy)0x0)) {
            do {
              pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
              thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x18c),(uStack_8 & 0xff) * 4 + 0x3f,0x87
                                 ,'\x01',pbVar6);
              CVar4 = (CPanelTy)((byte)uStack_8 + 1);
              uStack_8 = CONCAT31(uStack_8._1_3_,CVar4);
            } while ((byte)CVar4 < (byte)this_00[0xbcd]);
          }
          if ((byte)uStack_8 < 0x14) {
            iVar7 = 0x14 - (uStack_8 & 0xff);
            iVar5 = (uStack_8 & 0xff) * 4 + 0x3f;
            do {
              pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
              thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x18c),iVar5,0x87,'\x01',pbVar6);
              iVar5 = iVar5 + 4;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          if ((int)*(uint *)(this_00 + 0x154) < 0) {
            g_currentExceptionFrame = IStack_ac.previous;
            return;
          }
          FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x154),0xffffffff,*(uint *)(this_00 + 0x48),
                       *(uint *)(this_00 + 0xa0));
          g_currentExceptionFrame = IStack_ac.previous;
          return;
        default:
          g_currentExceptionFrame = IStack_ac.previous;
          return;
        }
      }
      break;
    case (CPanelTy)0x2:
    case (CPanelTy)0x3:
      if ((iStack_68 == *(int *)(this_00 + 0xb99)) && (CStack_64 == this_00[0xb9d])) {
        thunk_FUN_00501d00(this_00,(int *)(this_00 + 0xb99),&iStack_68);
        g_currentExceptionFrame = IStack_ac.previous;
        return;
      }
      break;
    case (CPanelTy)0x4:
      if (iStack_68 == *(int *)(this_00 + 0xb99)) {
        g_currentExceptionFrame = IStack_ac.previous;
        return;
      }
      break;
    default:
      goto switchD_00503051_default;
    }
  }
  PaintCtrlBoatSI(this_00);
  SetControlBoatSI(this_00);
  thunk_FUN_00501a10((int)this_00);
switchD_00503051_default:
  g_currentExceptionFrame = IStack_ac.previous;
  return;
switchD_005030a2_caseD_1a:
  if (this_00[0xbb6] == CStack_4b) {
    g_currentExceptionFrame = IStack_ac.previous;
    return;
  }
  uStack_8 = (uint)uStack_8._1_3_ << 8;
  if (((byte)this_00[0xbb6] & 0xfe) != 0) {
    do {
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),3);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x18c),(uStack_8 & 0xff) * 4 + 0x3f,0x87,'\x01',
                         pbVar6);
      bVar3 = (byte)uStack_8 + 1;
      uStack_8 = CONCAT31(uStack_8._1_3_,bVar3);
    } while (bVar3 < (byte)this_00[0xbb6] >> 1);
  }
  if ((byte)uStack_8 < 0x14) {
    iVar7 = 0x14 - (uStack_8 & 0xff);
    iVar5 = (uStack_8 & 0xff) * 4 + 0x3f;
    do {
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x18c),iVar5,0x87,'\x01',pbVar6);
      iVar5 = iVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((int)*(uint *)(this_00 + 0x154) < 0) {
    g_currentExceptionFrame = IStack_ac.previous;
    return;
  }
  FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x154),0xffffffff,*(uint *)(this_00 + 0x48),
               *(uint *)(this_00 + 0xa0));
  g_currentExceptionFrame = IStack_ac.previous;
  return;
}

