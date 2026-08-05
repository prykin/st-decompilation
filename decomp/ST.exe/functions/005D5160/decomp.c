#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settsobj.cpp
   SettMapSTy::PrepPlList
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall PrepPlList(SettMapSTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005D5445 RET | 005D548E RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall SettMapSTy::PrepPlList(SettMapSTy *this)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  void *pvVar5;
  DArrayTy *pDVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  SettMapTy *this_00;
  bool bVar14;
  InternalExceptionFrame local_b8;
  undefined1 local_74;
  undefined1 local_73;
  byte local_72;
  byte bStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined4 local_6e;
  char local_6a [64];
  byte local_2a;
  undefined4 local_29;
  undefined1 local_25;
  uint *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  byte *local_14;
  cMf32 *local_10;
  byte *local_c;
  SettMapTy *local_8;

  this->field_211C = DAT_008087c6;
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_8 = (SettMapTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_b8.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\settsobj.cpp",0x86,0,iVar4,"%s",
                               "SettMapSTy::PrepPlList");
    if (iVar8 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\settsobj.cpp",0x86);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_8->field_1E26 == CASE_2) {
    local_10 = local_8->field_1F3F;
  }
  else {
    local_10 = local_8->field_1F43;
  }
  pDVar6 = local_8->field_1F84;
  if (pDVar6 != nullptr) {
    uVar10 = 0;
    if (0 < (int)pDVar6->count) {
      bVar14 = pDVar6->count != 0;
      do {
        if (bVar14) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar6, uVar10) (runtime stride) */
          pvVar5 = (void *)(pDVar6->elementSize * uVar10 + (int)pDVar6->data);
        }
        else {
          pvVar5 = nullptr;
        }
        if ((pvVar5 != nullptr) && (*(DArrayTy **)((int)pvVar5 + 0x50) != nullptr)) {
          DArrayDestroy(*(DArrayTy **)((int)pvVar5 + 0x50));
        }
        pDVar6 = this_00->field_1F84;
        uVar10 = uVar10 + 1;
        bVar14 = uVar10 < pDVar6->count;
      } while ((int)uVar10 < (int)pDVar6->count);
    }
    DArrayDestroy(this_00->field_1F84);
  }
  pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,8,0x60,8);
  this_00->field_1F84 = pDVar6;
  local_c = &g_bulkInitializedRecords_008087C7[0].field_0021;
  do {
    pbVar11 = local_c;
    bVar2 = local_c[1];
    if (bVar2 != 0xff) {
      local_74 = 1;
      local_73 = 1;
      if (((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) && (*local_c == 3)) {
        bStack_71 = 1;
      }
      else {
        bStack_71 = *local_c;
      }
      local_72 = bVar2;
      if (this_00->field_1E26 == CASE_2) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_24 = CreateStrategList((int)local_10,
                                     CONCAT12(uStack_70,CONCAT11(bStack_71,bVar2)) & 0xff,0xffffffff
                                    );
      }
      else {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_24 = CreateOpponentList(local_10,CONCAT12(uStack_6f,CONCAT11(uStack_70,bStack_71)) &
                                               0xff,DAT_0080995c);
      }
      uVar10 = 0xffffffff;
      pcVar12 = (char *)&DAT_00807ddd;
      do {
        pcVar13 = pcVar12;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar13 = pcVar12 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar12 = pcVar13 + -uVar10;
      pcVar13 = local_6a;
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      cVar1 = *(char *)(pbVar11 + -0x21);
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if (cVar1 == '\0') {
        uStack_70 = 1;
      }
      else {
        uStack_70 = 4;
        uStack_6f = 0;
        if (local_8->field_1E26 == CASE_2) {
          uVar9 = 0;
          uVar10 = local_24[3];
          if (0 < (int)uVar10) {
            local_14 = pbVar11 + -0x20;
            do {
              if (uVar9 < uVar10) {
                iVar4 = local_24[2] * uVar9 + local_24[7];
              }
              else {
                iVar4 = 0;
              }
              pbVar7 = (byte *)(iVar4 + 0x4c);
              pbVar11 = local_14;
              do {
                bVar2 = *pbVar7;
                bVar14 = bVar2 < *pbVar11;
                if (bVar2 != *pbVar11) {
LAB_005d534b:
                  iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_005d5350;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar14 = bVar2 < pbVar11[1];
                if (bVar2 != pbVar11[1]) goto LAB_005d534b;
                pbVar7 = pbVar7 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar2 != 0);
              iVar4 = 0;
LAB_005d5350:
              pbVar11 = local_c;
              if (iVar4 == 0) {
                uStack_6f = (undefined1)uVar9;
                break;
              }
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar10);
          }
        }
      }
      local_2a = pbVar11[2];
      local_20 = *(uint *)(pbVar11 + 3);
      local_6e = DAT_0080877f;
      local_1c = *(uint *)(pbVar11 + 7);
      local_18 = *(uint *)(pbVar11 + 0xb);
      local_29 = 0;
      local_25 = 1;
      Library::DKW::TBL::DArrayAppend(local_8->field_1F84,&local_74);
      this_00 = local_8;
    }
    local_c = pbVar11 + 0x51;
  } while ((int)local_c < 0x808a70);
  pDVar6 = this_00->field_1F84;
  uVar9 = 0;
  uVar10 = pDVar6->count;
  if (0 < (int)uVar10) {
    bVar14 = uVar10 != 0;
    do {
      if (bVar14) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar6, uVar9) (runtime stride) */
        pvVar5 = (void *)(pDVar6->elementSize * uVar9 + (int)pDVar6->data);
      }
      else {
        pvVar5 = nullptr;
      }
      if ((pvVar5 != nullptr) && (*(char *)((int)pvVar5 + 4) == '\x01')) {
        DAT_0080874d = *(undefined1 *)((int)pvVar5 + 2);
        *(undefined1 *)((int)pvVar5 + 4) = 2;
        DAT_0080874e = *(undefined1 *)((int)pvVar5 + 3);
        uVar10 = 0xffffffff;
        pcVar12 = (char *)&DAT_00807ddd;
        goto code_r0x005d540b;
      }
      uVar9 = uVar9 + 1;
      bVar14 = uVar9 < uVar10;
    } while ((int)uVar9 < (int)uVar10);
  }
  goto LAB_005d5426;
  while( true ) {
    uVar10 = uVar10 - 1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
    if (cVar1 == '\0') break;
code_r0x005d540b:
    pcVar13 = pcVar12;
    if (uVar10 == 0) break;
  }
  uVar10 = ~uVar10;
  pcVar12 = pcVar13 + -uVar10;
  pcVar13 = (char *)((int)pvVar5 + 10);
  for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar10 = uVar10 & 3; this_00 = local_8, uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar13 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar13 = pcVar13 + 1;
  }
LAB_005d5426:
  SettMapTy::PaintSC(this_00);
  this_00->vfunc_20();
  g_currentExceptionFrame = local_b8.previous;
  return;
}

