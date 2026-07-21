
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ChangeTree */

void __thiscall HelpPanelTy::ChangeTree(HelpPanelTy *this,int *param_1,int param_2)

{
  undefined1 *puVar1;
  AnonShape_006B0C70_7C4FE646 *groupContent;
  AnonPointee_HelpPanelTy_01B3 *pAVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  HelpPanelTy *this_00;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar13;
  undefined4 *puVar14;
  int local_d0 [20];
  InternalExceptionFrame local_80;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  char local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  uint local_28;
  uint local_24;
  HelpPanelTy *local_20;
  uint local_1c;
  uint local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  undefined1 local_6;
  char local_5;
  
  local_18 = param_2 + 1;
  local_14 = param_1;
  local_1c = 0;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_20 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  piVar11 = local_14;
  this_00 = local_20;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x26d,0,iVar7,&DAT_007a4ccc
                               ,s_HelpPanelTy__ChangeTree_007c3a2c);
    if (iVar9 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    RaiseInternalException(iVar7,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x26d);
    return;
  }
  if (*(char *)((int)local_14 + 0x12) == '\0') {
    uVar8 = 0;
    piVar10 = local_d0;
    for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar10 = 0;
      piVar10 = piVar10 + 1;
    }
    local_10 = local_10 & 0xffffff00;
    local_5 = '\0';
    if (*(uint *)sizeHelp_exref != 0) {
      piVar10 = (int *)this_00->field_01C7;
      do {
        if ((*piVar10 == *piVar11) && (piVar10[1] == piVar11[1])) {
          local_1c = uVar8;
          break;
        }
        uVar8 = uVar8 + 1;
        piVar10 = (int *)((int)piVar10 + 0x11);
      } while (uVar8 < *(uint *)sizeHelp_exref);
    }
    iVar9 = piVar11[1];
    local_24 = local_1c & 0xffff;
    iVar7 = local_24 - 1;
    local_c = local_24;
    if (0 < iVar7) {
      iVar13 = iVar7 * 0x11;
      do {
        if (iVar9 == 0) break;
        piVar11 = (int *)(this_00->field_01C7 + iVar13);
        if (*piVar11 == iVar9) {
          local_d0[local_10 & 0xff] = iVar9;
          iVar9 = piVar11[1];
          local_10 = CONCAT31(local_10._1_3_,(byte)local_10 + '\x01');
          local_24 = local_c;
        }
        iVar7 = iVar7 + -1;
        iVar13 = iVar13 + -0x11;
      } while (0 < iVar7);
    }
    local_24 = local_24 + 1;
    uVar8 = local_18;
    if (local_24 < *(uint *)sizeHelp_exref) {
      uVar12 = local_24 * 0x11;
      local_c = uVar12;
      do {
        iVar7 = *(int *)(this_00->field_01C7 + 4 + uVar12);
        puVar14 = (undefined4 *)(this_00->field_01C7 + uVar12);
        local_c = uVar12;
        if (iVar7 == *local_14) {
          local_3c = *puVar14;
          local_38 = puVar14[1];
          local_34 = puVar14[2];
          local_30 = puVar14[3];
          local_2c = *(undefined1 *)(puVar14 + 4);
          local_2b = *(char *)((int)local_14 + 0x11) + '\x01';
          local_2a = 0;
          local_29 = 0;
          Library::DKW::TBL::FUN_006b11d0((uint *)this_00->field_01B3,uVar8 & 0xffff,&local_3c);
          uVar8 = uVar8 + 1;
          local_5 = '\x01';
          local_18 = uVar8;
        }
        else {
          if (iVar7 == 0) break;
          bVar5 = false;
          bVar6 = 0;
          local_6 = 0;
          local_28 = local_28 & 0xffffff00;
          if ((byte)local_10 != 0) {
            do {
              if (local_d0[local_28 & 0xff] == iVar7) {
                bVar5 = true;
                goto LAB_00513233;
              }
              bVar6 = bVar6 + 1;
              local_28 = CONCAT31(local_28._1_3_,bVar6);
            } while (bVar6 < (byte)local_10);
            bVar5 = false;
          }
LAB_00513233:
          if (bVar5) break;
        }
        local_24 = local_24 + 1;
        uVar12 = uVar12 + 0x11;
        local_c = uVar12;
      } while (local_24 < *(uint *)sizeHelp_exref);
    }
    piVar11 = local_14;
    if (local_5 != '\0') {
      pAVar2 = this_00->field_01B3;
      if ((uVar8 & 0xffff) - 1 < *(uint *)&pAVar2->field_0xc) {
        iVar7 = ((uVar8 & 0xffff) - 1) * pAVar2->field_0008 + pAVar2->field_001C;
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        *(undefined1 *)(iVar7 + 0x13) = 1;
      }
    }
  }
  else {
    groupContent = (AnonShape_006B0C70_7C4FE646 *)local_20->field_01B3;
    uVar8 = param_2 + 1;
    uVar12 = groupContent->field_000C;
    while (((uVar8 < uVar12 &&
            (iVar7 = groupContent->field_0008 * uVar8 + groupContent->field_001C, iVar7 != 0)) &&
           (*(byte *)((int)piVar11 + 0x11) < *(byte *)(iVar7 + 0x11)))) {
      FUN_006b0c70(groupContent,uVar8);
      groupContent = (AnonShape_006B0C70_7C4FE646 *)this_00->field_01B3;
      uVar12 = groupContent->field_000C;
    }
  }
  *(bool *)((int)piVar11 + 0x12) = *(char *)((int)piVar11 + 0x12) == '\0';
  if ((this_00->field_019C != 0) && (this_00->field_01A1 == 0)) {
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0068,0,0x21,0x16,
               (byte *)this_00->field_01DC,0,0x21,0x16,0x19c,0x118);
    puVar1 = &this_00->field_0x18;
    puVar14 = (undefined4 *)puVar1;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    uVar3 = this_00->field_01B7;
    this_00->field_0028 = 0x28;
    *(undefined2 *)&this_00->field_0x2c = *(undefined2 *)&this_00->field_01B3->field_0xc;
    *(undefined2 *)&this_00->field_0x30 = 1;
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
    *(undefined2 *)&this_00->field_0x30 = 1;
    this_00->field_0032 = 1;
    this_00->field_0028 = 0x22;
    *(short *)&this_00->field_0x2c = (short)uVar3;
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
    this_00->field_0028 = 5;
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
  }
  g_currentExceptionFrame = local_80.previous;
  return;
}

