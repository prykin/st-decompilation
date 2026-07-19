
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::InitOptPanel */

void __thiscall OptPanelTy::InitOptPanel(OptPanelTy *this)

{
  code *pcVar1;
  OptPanelTy *this_00;
  int iVar2;
  undefined4 *puVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  uint *puVar8;
  ccFntTy *this_01;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar9;
  short sVar10;
  undefined2 uVar11;
  uint uVar12;
  byte bVar13;
  undefined4 uVar14;
  char *pcVar15;
  int *piVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    DAT_008016dc = local_8;
    puVar3 = ccFntTy::operator(*(ccFntTy **)(DAT_00802a28 + 0x28),0x19d,
                               (int)*(ccFntTy **)(DAT_00802a28 + 0x28));
    *(undefined4 **)(this_00 + 0x17c) = puVar3;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3 = ccFntTy::operator(this_01,0x19d,*(int *)(DAT_00802a28 + 0x2c));
    *(undefined4 **)(this_00 + 0x180) = puVar3;
    puVar3[0x16] = 1;
    puVar3[0x17] = 0;
    iVar2 = 1;
    piVar16 = (int *)0x0;
    pCVar4 = thunk_FUN_00571240(s_BKG_OPTIONS_007c713c,0);
    puVar5 = cMf32::RecGet(DAT_00806790,1,pCVar4,piVar16,iVar2);
    iVar2 = 1;
    piVar16 = (int *)0x0;
    *(ushort **)(this_00 + 0x184) = puVar5;
    *(undefined4 *)(this_00 + 0x188) = 0;
    pCVar4 = thunk_FUN_00571240(s_BKG_OPT_NUM_007c712c,0);
    puVar5 = cMf32::RecGet(DAT_00806790,1,pCVar4,piVar16,iVar2);
    iVar2 = 1;
    piVar16 = (int *)0x0;
    *(ushort **)(this_00 + 0x18c) = puVar5;
    pCVar4 = thunk_FUN_00571240(s_BKG_OPT_SAVE_007c711c,0);
    puVar5 = cMf32::RecGet(DAT_00806790,1,pCVar4,piVar16,iVar2);
    iVar2 = 1;
    piVar16 = (int *)0x0;
    *(ushort **)(this_00 + 400) = puVar5;
    pCVar4 = thunk_FUN_00571240(s_BKG_OPT_MOBJ_007c710c,0);
    puVar5 = cMf32::RecGet(DAT_00806790,1,pCVar4,piVar16,iVar2);
    puVar3 = (undefined4 *)0x0;
    iVar17 = 0;
    iVar2 = 1;
    bVar13 = 0;
    uVar12 = 0xffffffff;
    *(ushort **)(this_00 + 0x194) = puVar5;
    pbVar6 = (byte *)thunk_FUN_00571240(s_IND_PNT_007c2078,0);
    puVar5 = FUN_00709af0(DAT_00806794,0xb,pbVar6,uVar12,bVar13,iVar2,iVar17,puVar3);
    *(ushort **)(this_00 + 0x198) = puVar5;
    puVar3 = (undefined4 *)(*(int *)(this_00 + 0x184) + 0x28);
    iVar2 = 1;
    uVar12 = FUN_006b4fe0(*(int *)(this_00 + 0x184));
    uVar7 = FUN_006b50c0(0xde,0xb,(uint)*(ushort *)(*(int *)(this_00 + 0x184) + 0xe),uVar12,puVar3,
                         iVar2);
    *(undefined4 *)(this_00 + 0x1e5) = uVar7;
    puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(this_00 + 0x1f1) = puVar8;
    Library::DKW::TBL::FUN_006b6020((int)puVar8,0,&DAT_008016a0);
    PrepMissObj(this_00);
    SetOptControls(this_00);
    uVar19 = 0;
    uVar18 = 0;
    pcVar15 = (char *)0x0;
    uVar14 = 0;
    uVar11 = 0;
    sVar10 = 0;
    uVar9 = 0xc002;
    uVar7 = 0xc001;
    pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar7 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0xc9,0x9f,1,(int)pCVar4,uVar7,uVar9,sVar10,
                                uVar11,uVar14,pcVar15,uVar18,uVar19);
    uVar20 = 0;
    uVar19 = 0;
    pcVar15 = (char *)0x0;
    uVar18 = 0;
    uVar11 = 0;
    sVar10 = 0;
    uVar14 = 0xc004;
    uVar9 = 0xc003;
    *(undefined4 *)(this_00 + 0x1ad) = uVar7;
    pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar7 = UPanelTy::CreateBut((UPanelTy *)this_00,0,0,0x93,0x9f,1,(int)pCVar4,uVar9,uVar14,sVar10,
                                uVar11,uVar18,pcVar15,uVar19,uVar20);
    *(undefined4 *)(this_00 + 0x1b1) = uVar7;
    *(undefined4 *)(this_00 + 0x301) = *(undefined4 *)(this_00 + 0x38);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar17 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x5b,0,iVar2,&DAT_007a4ccc,
                              s_OptPanelTy__InitOptPanel_007c70ec);
  if (iVar17 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x5b);
  return;
}

