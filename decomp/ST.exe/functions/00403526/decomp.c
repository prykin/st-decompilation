
void __thiscall CPanelTy::PaintMunition(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar8;
  CPanelTy *pCVar9;
  bool bVar10;
  InternalExceptionFrame IStack_70;
  CPanelTy *pCStack_2c;
  int iStack_28;
  CPanelTy *pCStack_24;
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  int iStack_c;
  byte bStack_6;
  char cStack_5;
  
  if (DAT_0080874e == '\x01') {
    bVar10 = this[0x9d4] != (CPanelTy)0x1;
  }
  else {
    bVar10 = this[0x9d4] == (CPanelTy)0x1;
  }
  cStack_5 = bVar10 + '\x05';
  IStack_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_70;
  pCStack_2c = this;
  iVar4 = __setjmp3(IStack_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_2c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_70.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x153,0,iVar4,&DAT_007a4ccc
                               ,s_CPanelTy__PaintMunition_007c27ec);
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x153);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  thunk_FUN_00540760(*(undefined4 **)(pCStack_2c + 0x194),param_1,0x36,'\x01',
                     *(byte **)(pCStack_2c + 0x9f9));
  pCVar9 = pCVar2 + 0xc11;
  bStack_6 = 0;
  iStack_28 = -1;
  do {
    pbVar5 = (byte *)0x0;
    if (cStack_5 != '\x05') {
      switch(iStack_28) {
      case 0:
      case 1:
      case 4:
      case 5:
        goto switchD_005052d8_caseD_2;
      case 2:
        uStack_14 = CONCAT31(uStack_14._1_3_,1);
        break;
      case 3:
        goto switchD_005052d8_caseD_5;
      case 6:
        goto switchD_005052d8_caseD_4;
      case 7:
        uStack_14 = CONCAT31(uStack_14._1_3_,5);
        break;
      case 8:
        uStack_14 = CONCAT31(uStack_14._1_3_,2);
        break;
      default:
        goto switchD_005052d8_default;
      }
      goto LAB_0050530c;
    }
    switch(iStack_28) {
    case 2:
    case 3:
    case 6:
    case 7:
    case 8:
      goto switchD_005052d8_caseD_2;
    case 4:
switchD_005052d8_caseD_4:
      uStack_14 = CONCAT31(uStack_14._1_3_,3);
      break;
    case 5:
switchD_005052d8_caseD_5:
      uStack_14 = CONCAT31(uStack_14._1_3_,4);
      break;
    default:
switchD_005052d8_default:
      uStack_14 = CONCAT31(uStack_14._1_3_,bStack_6);
    }
LAB_0050530c:
    pCStack_24 = pCVar9;
    if (DAT_007fa174 != 0) {
      switch(iStack_28) {
      case 0:
        iStack_10 = 0xf;
        iStack_c = 0xe;
        if (*pCVar9 == (CPanelTy)0x0) {
LAB_005053b0:
          iVar6 = *(int *)(pCVar2 + 0x292);
          iVar4 = 1;
        }
        else {
          if (DAT_0080874e == '\x01') {
            iVar4 = 6;
          }
          else {
            if (DAT_0080874e != '\x02') goto LAB_005053b0;
            iVar4 = 0x83;
          }
          iVar4 = thunk_FUN_004e60d0((uint)DAT_0080874d,iVar4);
          iVar4 = iVar4 + 5;
          iVar6 = *(int *)(pCVar2 + 0x28e);
        }
        break;
      case 1:
        iStack_10 = 0xf;
        iStack_c = 0x1a;
        if (*pCVar9 == (CPanelTy)0x0) {
          iVar6 = *(int *)(pCVar2 + 0x292);
          iVar4 = 2;
        }
        else if (DAT_0080874e == '\x01') {
          iVar4 = thunk_FUN_004e60d0((uint)DAT_0080874d,6);
          iVar4 = iVar4 + 10;
          iVar6 = *(int *)(pCVar2 + 0x28e);
        }
        else if (DAT_0080874e == '\x02') {
          iVar4 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x83);
          iVar6 = *(int *)(pCVar2 + 0x28e);
          iVar4 = iVar4 + 10;
        }
        else {
          iVar6 = *(int *)(pCVar2 + 0x292);
          iVar4 = 2;
        }
        break;
      case 2:
        iStack_10 = 0x16;
        iStack_c = 0xf;
        if (*pCVar9 == (CPanelTy)0x0) {
          iVar4 = 9;
LAB_00505581:
          iVar6 = *(int *)(pCVar2 + 0x292);
        }
        else {
          iVar6 = *(int *)(pCVar2 + 0x28e);
          iVar4 = 0x1d;
        }
        break;
      case 3:
        iStack_10 = 0x1d;
        iStack_c = 0x31;
        if (*pCVar9 == (CPanelTy)0x0) {
          iVar6 = *(int *)(pCVar2 + 0x292);
          iVar4 = 4;
        }
        else {
          iVar6 = *(int *)(pCVar2 + 0x28e);
          iVar4 = 0x10;
        }
        break;
      case 4:
        iStack_10 = 0x1b;
        iStack_c = 0x25;
        if (*pCVar9 == (CPanelTy)0x0) {
          iVar6 = *(int *)(pCVar2 + 0x292);
          iVar4 = 6;
        }
        else {
          iVar6 = *(int *)(pCVar2 + 0x28e);
          iVar4 = 0x17;
        }
        break;
      case 5:
        iStack_10 = 0x28;
        iStack_c = 0x32;
        if (*pCVar9 == (CPanelTy)0x0) {
          iVar4 = 5;
          goto LAB_00505581;
        }
        iVar6 = *(int *)(pCVar2 + 0x28e);
        iVar4 = 0x19;
        break;
      case 6:
        iStack_10 = 0x1f;
        iStack_c = 0x22;
        if (*pCVar9 == (CPanelTy)0x0) {
          iVar6 = *(int *)(pCVar2 + 0x292);
          iVar4 = 7;
        }
        else {
          iVar6 = *(int *)(pCVar2 + 0x28e);
          iVar4 = 0x18;
        }
        break;
      case 7:
        iStack_10 = 0x1e;
        iStack_c = 0x3b;
        if (*pCVar9 == (CPanelTy)0x0) {
          iVar6 = *(int *)(pCVar2 + 0x292);
          iVar4 = 8;
        }
        else {
          iVar6 = *(int *)(pCVar2 + 0x28e);
          iVar4 = 0x16;
        }
        break;
      case 8:
        iStack_10 = 0x28;
        iStack_c = 0x19;
        if (*pCVar9 == (CPanelTy)0x0) {
          iVar4 = 3;
          goto LAB_00505581;
        }
        iVar6 = *(int *)(pCVar2 + 0x28e);
        iVar4 = 0xf;
        break;
      case -1:
        iStack_10 = 0xf;
        iStack_c = 4;
        if (DAT_0080874e == '\x01') {
          iVar4 = thunk_FUN_004e60d0((uint)DAT_0080874d,6);
          iVar6 = *(int *)(pCVar2 + 0x28e);
        }
        else if (DAT_0080874e == '\x02') {
          iVar4 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x83);
          iVar6 = *(int *)(pCVar2 + 0x28e);
        }
        else {
          iVar6 = *(int *)(pCVar2 + 0x292);
          iVar4 = 0;
        }
        break;
      default:
        goto switchD_00505324_default;
      }
      pbVar5 = (byte *)FUN_0070b3a0(iVar6,iVar4);
    }
switchD_00505324_default:
    if (pbVar5 != (byte *)0x0) {
      thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),iStack_10 + 0xf + param_1,iStack_c + 0x36,
                         '\x06',pbVar5);
    }
    uVar3 = uStack_14;
    if (*pCVar9 == (CPanelTy)0x0) {
      uStack_1c = 0;
    }
    else {
      uStack_1c = ((uint)*(ushort *)(pCVar9 + 2) * 0xf) / (uint)*(ushort *)(pCVar9 + 4);
    }
    uStack_18 = uStack_18 & 0xffffff00;
    if (uStack_1c != 0) {
      uVar8 = 0;
      iStack_20 = (uStack_14 & 0xff) * 0xb + 0x3b;
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),3);
        thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),param_1 + 0x4d + uVar8 * 4,iStack_20,
                           '\x01',pbVar5);
        bVar7 = (byte)uStack_18 + 1;
        uStack_18 = CONCAT31(uStack_18._1_3_,bVar7);
        uVar8 = (uint)bVar7;
      } while (uVar8 < uStack_1c);
    }
    if ((byte)uStack_18 < 0xf) {
      iStack_20 = (uVar3 & 0xff) * 0xb + 0x3b;
      iVar4 = 0xf - (uStack_18 & 0xff);
      uStack_1c = param_1 + 0x4d + (uStack_18 & 0xff) * 4;
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),0);
        thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),uStack_1c,iStack_20,'\x01',pbVar5);
        uStack_1c = uStack_1c + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    wsprintfA((LPSTR)(pCVar2 + 0x1e1),&DAT_007c1890,(uint)*(ushort *)(pCStack_24 + 2));
    ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1b8),*(int *)(pCVar2 + 0x194),0,param_1 + 0x8f,
                     (uVar3 & 0xff) * 0xb + 0x39,0x23,0xc);
    ccFntTy::WrTxt(*(ccFntTy **)(pCVar2 + 0x1b8),(uint *)(pCVar2 + 0x1e1),-3,-1,0,-1,-1);
    pCVar9 = pCStack_24;
switchD_005052d8_caseD_2:
    bStack_6 = bStack_6 + 1;
    iStack_28 = iStack_28 + 1;
    pCVar9 = pCVar9 + 6;
    if (9 < bStack_6) {
      g_currentExceptionFrame = IStack_70.previous;
      return;
    }
  } while( true );
}

