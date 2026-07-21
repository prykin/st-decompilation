#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ChangeTree */

void __thiscall HelpPanelTy::ChangeTree(HelpPanelTy *this,int *param_1,int param_2)

{
  undefined1 *puVar1;
  DArrayTy *groupContent;
  AnonPointee_HelpPanelTy_01B3 *pAVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  HelpPanelTy *this_00;
  byte bVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
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
  iVar7 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  piVar12 = local_14;
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
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(char *)((int)local_14 + 0x12) == '\0') {
    uVar9 = 0;
    memset(local_d0, 0, 0x50); /* compiler bulk-zero initialization */
    local_10 = local_10 & 0xffffff00;
    local_5 = '\0';
    if (*(uint *)sizeHelp_exref != 0) {
      piVar11 = (int *)this_00->field_01C7;
      do {
        if ((*piVar11 == *piVar12) && (piVar11[1] == piVar12[1])) {
          local_1c = uVar9;
          break;
        }
        uVar9 = uVar9 + 1;
        piVar11 = (int *)((int)piVar11 + 0x11);
      } while (uVar9 < *(uint *)sizeHelp_exref);
    }
    iVar10 = piVar12[1];
    local_24 = local_1c & 0xffff;
    iVar7 = local_24 - 1;
    local_c = local_24;
    if (0 < iVar7) {
      iVar14 = iVar7 * 0x11;
      do {
        if (iVar10 == 0) break;
        piVar12 = (int *)(this_00->field_01C7 + iVar14);
        if (*piVar12 == iVar10) {
          local_d0[local_10 & 0xff] = iVar10;
          iVar10 = piVar12[1];
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_10 = CONCAT31(local_10._1_3_,(byte)local_10 + '\x01');
          local_24 = local_c;
        }
        iVar7 = iVar7 + -1;
        iVar14 = iVar14 + -0x11;
      } while (0 < iVar7);
    }
    local_24 = local_24 + 1;
    uVar9 = local_18;
    if (local_24 < *(uint *)sizeHelp_exref) {
      uVar13 = local_24 * 0x11;
      local_c = uVar13;
      do {
        iVar7 = *(int *)(this_00->field_01C7 + 4 + uVar13);
        puVar15 = (undefined4 *)(this_00->field_01C7 + uVar13);
        local_c = uVar13;
        if (iVar7 == *local_14) {
          local_3c = *puVar15;
          local_38 = puVar15[1];
          local_34 = puVar15[2];
          local_30 = puVar15[3];
          local_2c = *(undefined1 *)(puVar15 + 4);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_2b = *(char *)((int)local_14 + 0x11) + '\x01';
          local_2a = 0;
          local_29 = 0;
          Library::DKW::TBL::FUN_006b11d0((uint *)this_00->field_01B3,uVar9 & 0xffff,&local_3c);
          uVar9 = uVar9 + 1;
          local_5 = '\x01';
          local_18 = uVar9;
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
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_28 = CONCAT31(local_28._1_3_,bVar6);
            } while (bVar6 < (byte)local_10);
            bVar5 = false;
          }
LAB_00513233:
          if (bVar5) break;
        }
        local_24 = local_24 + 1;
        uVar13 = uVar13 + 0x11;
        local_c = uVar13;
      } while (local_24 < *(uint *)sizeHelp_exref);
    }
    piVar12 = local_14;
    if (local_5 != '\0') {
      pAVar2 = this_00->field_01B3;
      if ((uVar9 & 0xffff) - 1 < *(uint *)&pAVar2->field_0xc) {
        iVar7 = ((uVar9 & 0xffff) - 1) * pAVar2->field_0008 + pAVar2->field_001C;
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
    groupContent = (DArrayTy *)local_20->field_01B3;
    uVar9 = param_2 + 1;
    uVar13 = groupContent->count;
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(groupContent, uVar9) (runtime stride) */
    while (((uVar9 < uVar13 &&
            (pvVar8 = (void *)(groupContent->elementSize * uVar9 + (int)groupContent->data),
            pvVar8 != (void *)0x0)) &&
           (*(byte *)((int)piVar12 + 0x11) < *(byte *)((int)pvVar8 + 0x11)))) {
      FUN_006b0c70(groupContent,uVar9);
      groupContent = (DArrayTy *)this_00->field_01B3;
      uVar13 = groupContent->count;
    }
  }
  *(bool *)((int)piVar12 + 0x12) = *(char *)((int)piVar12 + 0x12) == '\0';
  if ((this_00->field_019C != 0) && (this_00->field_01A1 == 0)) {
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0x21,0x16,
               (byte *)this_00->field_01DC,0,0x21,0x16,0x19c,0x118);
    puVar1 = &this_00->field_0x18;
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
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

