#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::PrepPlList

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapMTy_field_1E26State. Cases:
   CASE_4=4;CASE_5=5;CASE_7=7;CASE_C=12;CASE_F=15;CASE_10=16;CASE_13=19

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapMTy_field_1E26State. Cases:
   CASE_5=5;CASE_C=12;CASE_F=15;CASE_10=16
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall PrepPlList(SettMapMTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005CD811 RET | 005CD85A RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall SettMapMTy::PrepPlList(SettMapMTy *this)

{
  char cVar1;
  SettMapMTy_field_1E26State SVar2;
  byte bVar3;
  int iVar5;
  SettMapMTy_field_1F84DArray *pSVar5;
  char *pcVar6;
  SettMapMTy_field_1F84Element *element_1f84;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  SettMapMTy *pSVar11;
  uint uVar12;
  byte *pbVar13;
  char *pcVar15;
  char *pcVar16;
  bool bVar17;
  InternalExceptionFrame local_b8;
  undefined4 local_74;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  int local_6e;
  byte local_2a;
  undefined4 local_29;
  undefined1 local_25;
  uint *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  byte *local_14;
  SettMapMTy *local_10;
  byte *local_c;
  cMf32 *local_8;

  this->field_211C = DAT_008087c6;
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0);
  pSVar11 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_b8.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x1cb,0,iVar5,"%s"
                               ,"SettMapMTy::PrepPlList");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\settmobj.cpp",0x1cb);
    return;
  }
  SVar2 = local_10->field_1E26;
  if ((((SVar2 == CASE_5) || (SVar2 == CASE_F)) || (SVar2 == CASE_C)) || (SVar2 == CASE_10)) {
    local_8 = local_10->field_1F3F;
  }
  else {
    local_8 = local_10->field_1F43;
  }
  pSVar5 = local_10->field_1F84;
  if (pSVar5 != nullptr) {
    uVar12 = 0;
    if (0 < (int)pSVar5->count) {
      bVar17 = pSVar5->count != 0;
      do {
        if (bVar17) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pcVar6 = &pSVar5->data->field_0000 + pSVar5->elementSize * uVar12;
        }
        else {
          pcVar6 = nullptr;
        }
        if ((pcVar6 != nullptr) && (*(DArrayTy **)(pcVar6 + 0x50) != nullptr)) {
          DArrayDestroy(*(DArrayTy **)(pcVar6 + 0x50));
        }
        pSVar5 = pSVar11->field_1F84;
        uVar12 = uVar12 + 1;
        bVar17 = uVar12 < pSVar5->count;
      } while ((int)uVar12 < (int)pSVar5->count);
    }
    DArrayDestroy((DArrayTy *)pSVar11->field_1F84);
  }
  pSVar5 = (SettMapMTy_field_1F84DArray *)Library::DKW::TBL::DArrayCreate(nullptr,8,0x60,8);
  pSVar11->field_1F84 = pSVar5;
  if ((pSVar11->field_1E26 != CASE_C) && (pSVar11->field_1E26 != CASE_10)) {
    DAT_0080874d = -1;
    DAT_0080874e = '\0';
  }
  if (DAT_0080877e != '\0') {
    local_c = &g_bulkInitializedRecords_008087C7[0].field_0021;
    do {
      pbVar13 = local_c;
      bVar3 = local_c[1];
      if (bVar3 != 0xff) {
        memset(&local_74, 0, 0x60); /* compiler bulk-zero initialization */
        STPiece<0,1>(local_74) = 1;
        STPiece<1,1>(local_74) = 1;
        if (((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) && (*pbVar13 == 3)) {
          STPiece<3,1>(local_74) = 1;
        }
        else {
          STPiece<3,1>(local_74) = *pbVar13;
        }
        STPiece<2,1>(local_74) = bVar3;
        switch(pSVar11->field_1E26) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        case CASE_5:
        case CASE_F:
          local_24 = CreateStrategList((int)local_8,
                                       CONCAT12(uStack_70,CONCAT11(STPiece<3,1>(local_74),bVar3)) & 0xff,
                                       0xffffffff);
          break;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        default:
          local_24 = CreateOpponentList(local_8,CONCAT12(uStack_6f,
                                                         CONCAT11(uStack_70,STPiece<3,1>(local_74))) & 0xff,
                                        DAT_0080995c);
          break;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        case CASE_C:
        case CASE_10:
          local_24 = CreateSaveStrategList
                               ((int)local_8,
                                CONCAT12(uStack_70,CONCAT11(STPiece<3,1>(local_74),bVar3)) & 0xff,0xffffffff
                               );
        }
        if (*(char *)(pbVar13 + -0x21) == '\x01') {
          SVar2 = pSVar11->field_1E26;
          if (((SVar2 == CASE_5) || (SVar2 == CASE_C)) || (SVar2 == CASE_10)) {
            uStack_70 = 4;
            uVar12 = 0;
            if (0 < (int)local_24[3]) {
              local_14 = pbVar13 + -0x20;
              bVar17 = local_24[3] != 0;
              do {
                if (bVar17) {
                  iVar8 = local_24[2] * uVar12 + local_24[7];
                }
                else {
                  iVar8 = 0;
                }
                pbVar9 = (byte *)(iVar8 + 0x4c);
                pbVar13 = local_14;
                do {
                  bVar3 = *pbVar9;
                  bVar17 = bVar3 < *pbVar13;
                  if (bVar3 != *pbVar13) {
LAB_005cd670:
                    iVar8 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                    goto LAB_005cd675;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar9[1];
                  bVar17 = bVar3 < pbVar13[1];
                  if (bVar3 != pbVar13[1]) goto LAB_005cd670;
                  pbVar9 = pbVar9 + 2;
                  pbVar13 = pbVar13 + 2;
                } while (bVar3 != 0);
                iVar8 = 0;
LAB_005cd675:
                pSVar11 = local_10;
                pbVar13 = local_c;
                if (iVar8 == 0) {
                  uStack_6f = (undefined1)uVar12;
                  break;
                }
                uVar12 = uVar12 + 1;
                bVar17 = uVar12 < local_24[3];
              } while ((int)uVar12 < (int)local_24[3]);
            }
          }
          else {
            uStack_70 = 1;
          }
        }
        else {
          uStack_70 = 1;
        }
        local_20 = *(uint *)(pbVar13 + 3);
        local_2a = pbVar13[2];
        local_6e = DAT_0080877f;
        local_1c = *(uint *)(pbVar13 + 7);
        local_18 = *(uint *)(pbVar13 + 0xb);
        local_29 = 0;
        local_25 = 1;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)pSVar11->field_1F84,&local_74);
      }
      local_c = pbVar13 + 0x51;
    } while ((int)local_c < 0x808a70);
    if (pSVar11->field_1E26 == CASE_C) {
      pSVar5 = pSVar11->field_1F84;
      uVar10 = 0;
      uVar12 = pSVar5->count;
      if (0 < (int)uVar12) {
        bVar17 = uVar12 != 0;
        do {
          if (bVar17) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar6 = &pSVar5->data->field_0000 + pSVar5->elementSize * uVar10;
          }
          else {
            pcVar6 = nullptr;
          }
          if (((pcVar6 != nullptr) && (pcVar6[4] == '\x01')) &&
             ((DAT_0080874d == pcVar6[2] && (DAT_0080874e == pcVar6[3])))) {
            pcVar6 = &DAT_00807e1d;
            if (DAT_008067a0 == '\0') {
              pcVar6 = (char *)&DAT_00807ddd;
            }
            AddPlayerList(pSVar11,DAT_0080877f,uVar10,(DAT_0080874f != '\0') + 2,pcVar6);
            break;
          }
          uVar10 = uVar10 + 1;
          bVar17 = uVar10 < uVar12;
        } while ((int)uVar10 < (int)uVar12);
      }
    }
    else {
      pSVar5 = pSVar11->field_1F84;
      uVar10 = 0;
      uVar12 = pSVar5->count;
      if (0 < (int)uVar12) {
        bVar17 = uVar12 != 0;
        do {
          if (bVar17) {
            element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar5, uVar10);
          }
          else {
            element_1f84 = nullptr;
          }
          if (((element_1f84 != nullptr) && (element_1f84->field_0004 == '\x01')) && (element_1f84->state != -1)) {
            DAT_0080874d = element_1f84->state;
            element_1f84->field_0004 = '\x02';
            DAT_0080874e = element_1f84->field_0003;
            pcVar15 = &DAT_00807e1d;
            if (DAT_008067a0 == '\0') {
              pcVar15 = (char *)&DAT_00807ddd;
            }
            uVar12 = 0xffffffff;
            goto code_r0x005cd7da;
          }
          uVar10 = uVar10 + 1;
          bVar17 = uVar10 < uVar12;
        } while ((int)uVar10 < (int)uVar12);
      }
    }
  }
LAB_005cd7f2:
  SettMapTy::PaintSC((SettMapTy *)pSVar11);
  pSVar11->vfunc_20();
  g_currentExceptionFrame = local_b8.previous;
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar16;
    if (cVar1 == '\0') break;
code_r0x005cd7da:
    pcVar16 = pcVar15;
    if (uVar12 == 0) break;
  }
  uVar12 = ~uVar12;
  pcVar15 = pcVar16 + -uVar12;
  pcVar6 = pcVar6 + 10;
  memmove(pcVar6, pcVar15, uVar12); /* compiler REP MOVS byte copy */
  goto LAB_005cd7f2;
}

