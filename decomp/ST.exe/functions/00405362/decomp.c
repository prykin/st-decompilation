
void __thiscall HelpPanelTy::ChangeTree(HelpPanelTy *this,int *param_1,int param_2)

{
  HelpPanelTy *pHVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  HelpPanelTy *this_00;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar14;
  HelpPanelTy *pHVar15;
  int aiStack_d0 [20];
  InternalExceptionFrame IStack_80;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  char cStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  uint uStack_28;
  uint uStack_24;
  HelpPanelTy *pHStack_20;
  uint uStack_1c;
  uint uStack_18;
  int *piStack_14;
  uint uStack_10;
  uint uStack_c;
  undefined1 uStack_6;
  char cStack_5;
  
  uStack_18 = param_2 + 1;
  piStack_14 = param_1;
  uStack_1c = 0;
  IStack_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_80;
  pHStack_20 = this;
  iVar8 = Library::MSVCRT::__setjmp3(IStack_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  piVar13 = piStack_14;
  this_00 = pHStack_20;
  if (iVar8 != 0) {
    g_currentExceptionFrame = IStack_80.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x26d,0,iVar8,&DAT_007a4ccc
                               ,s_HelpPanelTy__ChangeTree_007c3a2c);
    if (iVar9 != 0) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    RaiseInternalException(iVar8,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x26d);
    return;
  }
  if (*(char *)((int)piStack_14 + 0x12) == '\0') {
    uVar10 = 0;
    piVar11 = aiStack_d0;
    for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar11 = 0;
      piVar11 = piVar11 + 1;
    }
    uStack_10 = uStack_10 & 0xffffff00;
    cStack_5 = '\0';
    if (*(uint *)sizeHelp_exref != 0) {
      piVar11 = *(int **)(this_00 + 0x1c7);
      do {
        if ((*piVar11 == *piVar13) && (piVar11[1] == piVar13[1])) {
          uStack_1c = uVar10;
          break;
        }
        uVar10 = uVar10 + 1;
        piVar11 = (int *)((int)piVar11 + 0x11);
      } while (uVar10 < *(uint *)sizeHelp_exref);
    }
    iVar9 = piVar13[1];
    uStack_24 = uStack_1c & 0xffff;
    iVar8 = uStack_24 - 1;
    uStack_c = uStack_24;
    if (0 < iVar8) {
      iVar14 = iVar8 * 0x11;
      do {
        if (iVar9 == 0) break;
        iVar3 = *(int *)(this_00 + 0x1c7);
        if (*(int *)(iVar3 + iVar14) == iVar9) {
          aiStack_d0[uStack_10 & 0xff] = iVar9;
          iVar9 = ((int *)(iVar3 + iVar14))[1];
          uStack_10 = CONCAT31(uStack_10._1_3_,(byte)uStack_10 + '\x01');
          uStack_24 = uStack_c;
        }
        iVar8 = iVar8 + -1;
        iVar14 = iVar14 + -0x11;
      } while (0 < iVar8);
    }
    uStack_24 = uStack_24 + 1;
    uVar10 = uStack_18;
    if (uStack_24 < *(uint *)sizeHelp_exref) {
      uVar12 = uStack_24 * 0x11;
      uStack_c = uVar12;
      do {
        iVar8 = *(int *)(*(int *)(this_00 + 0x1c7) + 4 + uVar12);
        puVar2 = (undefined4 *)(*(int *)(this_00 + 0x1c7) + uVar12);
        uStack_c = uVar12;
        if (iVar8 == *piStack_14) {
          uStack_3c = *puVar2;
          uStack_38 = puVar2[1];
          uStack_34 = puVar2[2];
          uStack_30 = puVar2[3];
          uStack_2c = *(undefined1 *)(puVar2 + 4);
          cStack_2b = *(char *)((int)piStack_14 + 0x11) + '\x01';
          uStack_2a = 0;
          uStack_29 = 0;
          Library::DKW::TBL::FUN_006b11d0(*(uint **)(this_00 + 0x1b3),uVar10 & 0xffff,&uStack_3c);
          uVar10 = uVar10 + 1;
          cStack_5 = '\x01';
          uStack_18 = uVar10;
        }
        else {
          if (iVar8 == 0) break;
          bVar6 = false;
          bVar7 = 0;
          uStack_6 = 0;
          uStack_28 = uStack_28 & 0xffffff00;
          if ((byte)uStack_10 != 0) {
            do {
              if (aiStack_d0[uStack_28 & 0xff] == iVar8) {
                bVar6 = true;
                goto LAB_00513233;
              }
              bVar7 = bVar7 + 1;
              uStack_28 = CONCAT31(uStack_28._1_3_,bVar7);
            } while (bVar7 < (byte)uStack_10);
            bVar6 = false;
          }
LAB_00513233:
          if (bVar6) break;
        }
        uStack_24 = uStack_24 + 1;
        uVar12 = uVar12 + 0x11;
        uStack_c = uVar12;
      } while (uStack_24 < *(uint *)sizeHelp_exref);
    }
    piVar13 = piStack_14;
    if (cStack_5 != '\0') {
      iVar8 = *(int *)(this_00 + 0x1b3);
      if ((uVar10 & 0xffff) - 1 < *(uint *)(iVar8 + 0xc)) {
        iVar8 = ((uVar10 & 0xffff) - 1) * *(int *)(iVar8 + 8) + *(int *)(iVar8 + 0x1c);
      }
      else {
        iVar8 = 0;
      }
      if (iVar8 != 0) {
        *(undefined1 *)(iVar8 + 0x13) = 1;
      }
    }
  }
  else {
    iVar8 = *(int *)(pHStack_20 + 0x1b3);
    uVar10 = param_2 + 1;
    uVar12 = *(uint *)(iVar8 + 0xc);
    while (((uVar10 < uVar12 &&
            (iVar9 = *(int *)(iVar8 + 8) * uVar10 + *(int *)(iVar8 + 0x1c), iVar9 != 0)) &&
           (*(byte *)((int)piVar13 + 0x11) < *(byte *)(iVar9 + 0x11)))) {
      FUN_006b0c70(iVar8,uVar10);
      iVar8 = *(int *)(this_00 + 0x1b3);
      uVar12 = *(uint *)(iVar8 + 0xc);
    }
  }
  *(bool *)((int)piVar13 + 0x12) = *(char *)((int)piVar13 + 0x12) == '\0';
  if ((*(int *)(this_00 + 0x19c) != 0) && (this_00[0x1a1] == (HelpPanelTy)0x0)) {
    Library::DKW::WGR::FUN_006b55f0
              (*(undefined4 **)(this_00 + 0x68),0,0x21,0x16,*(int *)(this_00 + 0x1dc),0,0x21,0x16,
               0x19c,0x118);
    pHVar1 = this_00 + 0x18;
    pHVar15 = pHVar1;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pHVar15 = 0;
      pHVar15 = pHVar15 + 4;
    }
    uVar4 = *(undefined4 *)(this_00 + 0x1b7);
    *(undefined4 *)(this_00 + 0x28) = 0x28;
    *(undefined2 *)(this_00 + 0x2c) = *(undefined2 *)(*(int *)(this_00 + 0x1b3) + 0xc);
    *(undefined2 *)(this_00 + 0x30) = 1;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x19c),(undefined4 *)pHVar1);
    *(undefined2 *)(this_00 + 0x30) = 1;
    *(undefined2 *)(this_00 + 0x32) = 1;
    *(undefined4 *)(this_00 + 0x28) = 0x22;
    *(short *)(this_00 + 0x2c) = (short)uVar4;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x19c),(undefined4 *)pHVar1);
    *(undefined4 *)(this_00 + 0x28) = 5;
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x19c),(undefined4 *)pHVar1);
  }
  g_currentExceptionFrame = IStack_80.previous;
  return;
}

