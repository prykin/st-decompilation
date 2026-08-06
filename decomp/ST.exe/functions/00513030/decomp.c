#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ChangeTree */

void __thiscall HelpPanelTy::ChangeTree(HelpPanelTy *this,int *param_1,int param_2)

{
  undefined1 *puVar1;
  DArrayTy *array;
  AnonPointee_HelpPanelTy_01B3 *pAVar2;
  bool bVar4;
  HelpPanelTy *this_00;
  byte bVar5;
  int iVar7;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  int iVar10;
  byte *pbVar9;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar15;
  int local_d0 [20];
  InternalExceptionFrame local_80;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  byte local_2c;
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
  iVar7 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  piVar13 = local_14;
  this_00 = local_20;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x26d,0,iVar7,
                                "%s","HelpPanelTy::ChangeTree");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar7,0,"E:\\__titans\\Andrey\\helppan.cpp",0x26d);
    return;
  }
  if (STField<char>(local_14,0x12) == '\0') {
    uVar7 = 0;
    memset(local_d0, 0, 0x50); /* compiler bulk-zero initialization */
    local_10 = local_10 & 0xffffff00;
    local_5 = '\0';
    if (*(uint *)sizeHelp_exref != 0) {
      pbVar9 = this_00->field_01C7;
      do {
        if ((*(int *)pbVar9 == *piVar13) && (*(int *)(pbVar9 + 4) == piVar13[1])) {
          local_1c = uVar7;
          break;
        }
        uVar7 = uVar7 + 1;
        pbVar9 = pbVar9 + 0x11;
      } while (uVar7 < *(uint *)sizeHelp_exref);
    }
    iVar8 = piVar13[1];
    local_24 = local_1c & 0xffff;
    iVar11 = local_24 - 1;
    local_c = local_24;
    if (0 < iVar11) {
      iVar15 = iVar11 * 0x11;
      do {
        if (iVar8 == 0) break;
        pbVar9 = this_00->field_01C7;
        if (*(int *)(pbVar9 + iVar15) == iVar8) {
          local_d0[local_10 & 0xff] = iVar8;
          iVar8 = *(int *)(pbVar9 + iVar15 + 4);
          local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)((byte)local_10 + '\x01'));
          local_24 = local_c;
        }
        iVar11 = iVar11 + -1;
        iVar15 = iVar15 + -0x11;
      } while (0 < iVar11);
    }
    local_24 = local_24 + 1;
    uVar7 = local_18;
    if (local_24 < *(uint *)sizeHelp_exref) {
      uVar12 = local_24 * 0x11;
      local_c = uVar12;
      do {
        iVar11 = *(int *)(this_00->field_01C7 + uVar12 + 4);
        pbVar9 = this_00->field_01C7 + uVar12;
        local_c = uVar12;
        if (iVar11 == *local_14) {
          local_3c = *(undefined4 *)pbVar9;
          local_38 = *(undefined4 *)(pbVar9 + 4);
          local_34 = *(undefined4 *)(pbVar9 + 8);
          local_30 = *(undefined4 *)(pbVar9 + 0xc);
          local_2c = pbVar9[0x10];
          local_2b = STField<char>(local_14,0x11) + '\x01';
          local_2a = 0;
          local_29 = 0;
          Library::DKW::TBL::FUN_006b11d0((uint *)this_00->field_01B3,uVar7 & 0xffff,&local_3c);
          uVar7 = uVar7 + 1;
          local_5 = '\x01';
          local_18 = uVar7;
        }
        else {
          if (iVar11 == 0) break;
          bVar4 = false;
          bVar5 = 0;
          local_6 = 0;
          local_28 = local_28 & 0xffffff00;
          if ((byte)local_10 != 0) {
            do {
              if (local_d0[local_28 & 0xff] == iVar11) {
                bVar4 = true;
                goto LAB_00513233;
              }
              bVar5 = bVar5 + 1;
              local_28 = STReplaceLowByte((uint32_t)(local_28), (uint8_t)(bVar5));
            } while (bVar5 < (byte)local_10);
            bVar4 = false;
          }
LAB_00513233:
          if (bVar4) break;
        }
        local_24 = local_24 + 1;
        uVar12 = uVar12 + 0x11;
        local_c = uVar12;
      } while (local_24 < *(uint *)sizeHelp_exref);
    }
    piVar13 = local_14;
    if (local_5 != '\0') {
      pAVar2 = this_00->field_01B3;
      if ((uVar7 & 0xffff) - 1 < *(uint *)&pAVar2->field_0xc) {
        iVar11 = ((uVar7 & 0xffff) - 1) * pAVar2->field_0008 + pAVar2->field_001C;
      }
      else {
        iVar11 = 0;
      }
      if (iVar11 != 0) {
        *(undefined1 *)(iVar11 + 0x13) = 1;
      }
    }
  }
  else {
    array = (DArrayTy *)local_20->field_01B3;
    uVar7 = param_2 + 1;
    uVar12 = array->count;
    while (((uVar7 < uVar12 &&
            (pvVar6 = DArrayAt<void>(array, uVar7), pvVar6 != nullptr
            )) && (STField<byte>(piVar13,0x11) < STField<byte>(pvVar6,0x11)))) {
      DArrayRemoveAt(array,uVar7);
      array = (DArrayTy *)this_00->field_01B3;
      uVar12 = array->count;
    }
  }
  STField<bool>(piVar13,0x12) = STField<char>(piVar13,0x12) == '\0';
  if ((this_00->field_019C != 0) && (this_00->field_01A1 == 0)) {
    Library::DKW::WGR::FUN_006b55f0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,0x16,
               (byte *)this_00->field_01DC,0,0x21,0x16,0x19c,0x118);
    puVar1 = &this_00->field_0x18;
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    uVar7 = this_00->field_01B7;
    this_00->field_0028 = 0x28;
    *(undefined2 *)&this_00->field_0x2c = *(undefined2 *)&this_00->field_01B3->field_0xc;
    *(undefined2 *)&this_00->field_0x30 = 1;
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
    *(undefined2 *)&this_00->field_0x30 = 1;
    this_00->field_0032 = 1;
    this_00->field_0028 = 0x22;
    *(short *)&this_00->field_0x2c = (short)uVar7;
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
    this_00->field_0028 = 5;
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
  }
  g_currentExceptionFrame = local_80.previous;
  return;
}

