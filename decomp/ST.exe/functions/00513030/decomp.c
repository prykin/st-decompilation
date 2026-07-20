
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ChangeTree */

void __thiscall HelpPanelTy::ChangeTree(HelpPanelTy *this,int *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  HelpPanelTy *this_00;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar12;
  undefined4 *puVar13;
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
  iVar6 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  piVar10 = local_14;
  this_00 = local_20;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x26d,0,iVar6,&DAT_007a4ccc
                               ,s_HelpPanelTy__ChangeTree_007c3a2c);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x26d);
    return;
  }
  if (*(char *)((int)local_14 + 0x12) == '\0') {
    uVar8 = 0;
    piVar9 = local_d0;
    for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar9 = 0;
      piVar9 = piVar9 + 1;
    }
    local_10 = local_10 & 0xffffff00;
    local_5 = '\0';
    if (*(uint *)sizeHelp_exref != 0) {
      piVar9 = (int *)this_00->field_01C7;
      do {
        if ((*piVar9 == *piVar10) && (piVar9[1] == piVar10[1])) {
          local_1c = uVar8;
          break;
        }
        uVar8 = uVar8 + 1;
        piVar9 = (int *)((int)piVar9 + 0x11);
      } while (uVar8 < *(uint *)sizeHelp_exref);
    }
    iVar7 = piVar10[1];
    local_24 = local_1c & 0xffff;
    iVar6 = local_24 - 1;
    local_c = local_24;
    if (0 < iVar6) {
      iVar12 = iVar6 * 0x11;
      do {
        if (iVar7 == 0) break;
        piVar10 = (int *)(this_00->field_01C7 + iVar12);
        if (*piVar10 == iVar7) {
          local_d0[local_10 & 0xff] = iVar7;
          iVar7 = piVar10[1];
          local_10 = CONCAT31(local_10._1_3_,(byte)local_10 + '\x01');
          local_24 = local_c;
        }
        iVar6 = iVar6 + -1;
        iVar12 = iVar12 + -0x11;
      } while (0 < iVar6);
    }
    local_24 = local_24 + 1;
    uVar8 = local_18;
    if (local_24 < *(uint *)sizeHelp_exref) {
      uVar11 = local_24 * 0x11;
      local_c = uVar11;
      do {
        iVar6 = *(int *)(this_00->field_01C7 + 4 + uVar11);
        puVar13 = (undefined4 *)(this_00->field_01C7 + uVar11);
        local_c = uVar11;
        if (iVar6 == *local_14) {
          local_3c = *puVar13;
          local_38 = puVar13[1];
          local_34 = puVar13[2];
          local_30 = puVar13[3];
          local_2c = *(undefined1 *)(puVar13 + 4);
          local_2b = *(char *)((int)local_14 + 0x11) + '\x01';
          local_2a = 0;
          local_29 = 0;
          Library::DKW::TBL::FUN_006b11d0((uint *)this_00->field_01B3,uVar8 & 0xffff,&local_3c);
          uVar8 = uVar8 + 1;
          local_5 = '\x01';
          local_18 = uVar8;
        }
        else {
          if (iVar6 == 0) break;
          bVar4 = false;
          bVar5 = 0;
          local_6 = 0;
          local_28 = local_28 & 0xffffff00;
          if ((byte)local_10 != 0) {
            do {
              if (local_d0[local_28 & 0xff] == iVar6) {
                bVar4 = true;
                goto LAB_00513233;
              }
              bVar5 = bVar5 + 1;
              local_28 = CONCAT31(local_28._1_3_,bVar5);
            } while (bVar5 < (byte)local_10);
            bVar4 = false;
          }
LAB_00513233:
          if (bVar4) break;
        }
        local_24 = local_24 + 1;
        uVar11 = uVar11 + 0x11;
        local_c = uVar11;
      } while (local_24 < *(uint *)sizeHelp_exref);
    }
    piVar10 = local_14;
    if (local_5 != '\0') {
      iVar6 = this_00->field_01B3;
      if ((uVar8 & 0xffff) - 1 < *(uint *)(iVar6 + 0xc)) {
        iVar6 = ((uVar8 & 0xffff) - 1) * *(int *)(iVar6 + 8) + *(int *)(iVar6 + 0x1c);
      }
      else {
        iVar6 = 0;
      }
      if (iVar6 != 0) {
        *(undefined1 *)(iVar6 + 0x13) = 1;
      }
    }
  }
  else {
    iVar6 = local_20->field_01B3;
    uVar8 = param_2 + 1;
    uVar11 = *(uint *)(iVar6 + 0xc);
    while (((uVar8 < uVar11 &&
            (iVar7 = *(int *)(iVar6 + 8) * uVar8 + *(int *)(iVar6 + 0x1c), iVar7 != 0)) &&
           (*(byte *)((int)piVar10 + 0x11) < *(byte *)(iVar7 + 0x11)))) {
      FUN_006b0c70(iVar6,uVar8);
      iVar6 = this_00->field_01B3;
      uVar11 = *(uint *)(iVar6 + 0xc);
    }
  }
  *(bool *)((int)piVar10 + 0x12) = *(char *)((int)piVar10 + 0x12) == '\0';
  if ((this_00->field_019C != 0) && (this_00->field_01A1 == '\0')) {
    Library::DKW::WGR::FUN_006b55f0
              ((undefined4 *)this_00->field_0068,0,0x21,0x16,(byte *)this_00->field_01DC,0,0x21,0x16
               ,0x19c,0x118);
    puVar1 = &this_00->field_0x18;
    puVar13 = (undefined4 *)puVar1;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    uVar2 = this_00->field_01B7;
    this_00->field_0028 = 0x28;
    *(undefined2 *)&this_00->field_0x2c = *(undefined2 *)(this_00->field_01B3 + 0xc);
    *(undefined2 *)&this_00->field_0x30 = 1;
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
    *(undefined2 *)&this_00->field_0x30 = 1;
    this_00->field_0032 = 1;
    this_00->field_0028 = 0x22;
    *(short *)&this_00->field_0x2c = (short)uVar2;
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
    this_00->field_0028 = 5;
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
  }
  g_currentExceptionFrame = local_80.previous;
  return;
}

