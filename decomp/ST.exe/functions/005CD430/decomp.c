#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::PrepPlList

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapMTy_field_1E26State. Cases:
   CASE_4=4;CASE_5=5;CASE_7=7;CASE_C=12;CASE_F=15;CASE_10=16;CASE_13=19

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapMTy_field_1E26State. Cases:
   CASE_5=5;CASE_C=12;CASE_F=15;CASE_10=16 */

void __thiscall SettMapMTy::PrepPlList(SettMapMTy *this,int *param_1)

{
  SettMapMTy_field_1E26State SVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  void *pvVar6;
  DArrayTy *pDVar7;
  char *pcVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  SettMapMTy *pSVar12;
  uint uVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  char *pcVar16;
  bool bVar17;
  InternalExceptionFrame local_b8;
  undefined4 local_74;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  int local_6e;
  char local_2a;
  undefined4 local_29;
  undefined1 local_25;
  uint *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  byte *local_14;
  SettMapMTy *local_10;
  char *local_c;
  cMf32 *local_8;

  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  this->field_211C = DAT_008087c4._2_1_;
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0);
  pSVar12 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_b8.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x1cb,0,iVar5,"%s"
                               ,"SettMapMTy::PrepPlList");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\settmobj.cpp",0x1cb);
    return;
  }
  SVar1 = local_10->field_1E26;
  if ((((SVar1 == CASE_5) || (SVar1 == CASE_F)) || (SVar1 == CASE_C)) || (SVar1 == CASE_10)) {
    local_8 = (cMf32 *)local_10->field_1F3F;
  }
  else {
    local_8 = (cMf32 *)local_10->field_1F43;
  }
  pDVar7 = local_10->field_1F84;
  if (pDVar7 != (DArrayTy *)0x0) {
    uVar13 = 0;
    if (0 < (int)pDVar7->count) {
      bVar17 = pDVar7->count != 0;
      do {
        if (bVar17) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, uVar13) (runtime stride) */
          pvVar6 = (void *)(pDVar7->elementSize * uVar13 + (int)pDVar7->data);
        }
        else {
          pvVar6 = (void *)0x0;
        }
        if ((pvVar6 != (void *)0x0) && (*(DArrayTy **)((int)pvVar6 + 0x50) != (DArrayTy *)0x0)) {
          DArrayDestroy(*(DArrayTy **)((int)pvVar6 + 0x50));
        }
        pDVar7 = pSVar12->field_1F84;
        uVar13 = uVar13 + 1;
        bVar17 = uVar13 < pDVar7->count;
      } while ((int)uVar13 < (int)pDVar7->count);
    }
    DArrayDestroy(pSVar12->field_1F84);
  }
  pDVar7 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,8,0x60,8);
  pSVar12->field_1F84 = pDVar7;
  if ((pSVar12->field_1E26 != CASE_C) && (pSVar12->field_1E26 != CASE_10)) {
    DAT_0080874d = -1;
    DAT_0080874e = '\0';
  }
  if (DAT_0080877e != '\0') {
    local_c = &DAT_008087e8;
    do {
      pcVar8 = local_c;
      cVar2 = local_c[1];
      if (cVar2 != -1) {
        puVar15 = &local_74;
        for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_74._0_1_ = 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_74._1_1_ = 1;
        if (((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) && (*pcVar8 == '\x03')) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_74._3_1_ = '\x01';
        }
        else {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_74._3_1_ = *pcVar8;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_74._2_1_ = cVar2;
        switch(pSVar12->field_1E26) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        case CASE_5:
        case CASE_F:
          local_24 = CreateStrategList((int)local_8,
                                       CONCAT12(uStack_70,CONCAT11(local_74._3_1_,cVar2)) & 0xff,
                                       0xffffffff);
          break;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        default:
          local_24 = CreateOpponentList(local_8,CONCAT12(uStack_6f,
                                                         CONCAT11(uStack_70,local_74._3_1_)) & 0xff,
                                        DAT_0080995c);
          break;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        case CASE_C:
        case CASE_10:
          local_24 = CreateSaveStrategList
                               ((int)local_8,
                                CONCAT12(uStack_70,CONCAT11(local_74._3_1_,cVar2)) & 0xff,0xffffffff
                               );
        }
        if (pcVar8[-0x21] == '\x01') {
          SVar1 = pSVar12->field_1E26;
          if (((SVar1 == CASE_5) || (SVar1 == CASE_C)) || (SVar1 == CASE_10)) {
            uStack_70 = 4;
            uVar13 = 0;
            if (0 < (int)local_24[3]) {
              local_14 = (byte *)(pcVar8 + -0x20);
              bVar17 = local_24[3] != 0;
              do {
                if (bVar17) {
                  iVar5 = local_24[2] * uVar13 + local_24[7];
                }
                else {
                  iVar5 = 0;
                }
                pbVar10 = (byte *)(iVar5 + 0x4c);
                pbVar14 = local_14;
                do {
                  bVar3 = *pbVar10;
                  bVar17 = bVar3 < *pbVar14;
                  if (bVar3 != *pbVar14) {
LAB_005cd670:
                    iVar5 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                    goto LAB_005cd675;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar10[1];
                  bVar17 = bVar3 < pbVar14[1];
                  if (bVar3 != pbVar14[1]) goto LAB_005cd670;
                  pbVar10 = pbVar10 + 2;
                  pbVar14 = pbVar14 + 2;
                } while (bVar3 != 0);
                iVar5 = 0;
LAB_005cd675:
                pSVar12 = local_10;
                pcVar8 = local_c;
                if (iVar5 == 0) {
                  uStack_6f = (undefined1)uVar13;
                  break;
                }
                uVar13 = uVar13 + 1;
                bVar17 = uVar13 < local_24[3];
              } while ((int)uVar13 < (int)local_24[3]);
            }
          }
          else {
            uStack_70 = 1;
          }
        }
        else {
          uStack_70 = 1;
        }
        local_20 = *(undefined4 *)(pcVar8 + 3);
        local_2a = pcVar8[2];
        local_6e = DAT_0080877f;
        local_1c = *(undefined4 *)(pcVar8 + 7);
        local_18 = *(undefined4 *)(pcVar8 + 0xb);
        local_29 = 0;
        local_25 = 1;
        Library::DKW::TBL::FUN_006ae1c0(&pSVar12->field_1F84->flags,&local_74);
      }
      local_c = pcVar8 + 0x51;
    } while ((int)local_c < 0x808a70);
    if (pSVar12->field_1E26 == CASE_C) {
      pDVar7 = pSVar12->field_1F84;
      uVar11 = 0;
      uVar13 = pDVar7->count;
      if (0 < (int)uVar13) {
        bVar17 = uVar13 != 0;
        do {
          if (bVar17) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, uVar11) (runtime stride) */
            pvVar6 = (void *)(pDVar7->elementSize * uVar11 + (int)pDVar7->data);
          }
          else {
            pvVar6 = (void *)0x0;
          }
          if (((pvVar6 != (void *)0x0) && (*(char *)((int)pvVar6 + 4) == '\x01')) &&
             ((DAT_0080874d == *(char *)((int)pvVar6 + 2) &&
              (DAT_0080874e == *(char *)((int)pvVar6 + 3))))) {
            pcVar8 = &DAT_00807e1d;
            if (DAT_008067a0 == '\0') {
              pcVar8 = (char *)&DAT_00807ddd;
            }
            AddPlayerList(pSVar12,DAT_0080877f,uVar11,(DAT_0080874f != '\0') + 2,pcVar8);
            break;
          }
          uVar11 = uVar11 + 1;
          bVar17 = uVar11 < uVar13;
        } while ((int)uVar11 < (int)uVar13);
      }
    }
    else {
      pDVar7 = pSVar12->field_1F84;
      uVar11 = 0;
      uVar13 = pDVar7->count;
      if (0 < (int)uVar13) {
        bVar17 = uVar13 != 0;
        do {
          if (bVar17) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, uVar11) (runtime stride) */
            pvVar6 = (void *)(pDVar7->elementSize * uVar11 + (int)pDVar7->data);
          }
          else {
            pvVar6 = (void *)0x0;
          }
          if (((pvVar6 != (void *)0x0) && (*(char *)((int)pvVar6 + 4) == '\x01')) &&
             (*(char *)((int)pvVar6 + 2) != -1)) {
            DAT_0080874d = *(char *)((int)pvVar6 + 2);
            *(undefined1 *)((int)pvVar6 + 4) = 2;
            DAT_0080874e = *(char *)((int)pvVar6 + 3);
            pcVar8 = &DAT_00807e1d;
            if (DAT_008067a0 == '\0') {
              pcVar8 = (char *)&DAT_00807ddd;
            }
            uVar13 = 0xffffffff;
            goto code_r0x005cd7da;
          }
          uVar11 = uVar11 + 1;
          bVar17 = uVar11 < uVar13;
        } while ((int)uVar11 < (int)uVar13);
      }
    }
  }
LAB_005cd7f2:
  SettMapTy::PaintSC((SettMapTy *)pSVar12);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)pSVar12->field_0000->field_0020)();
  g_currentExceptionFrame = local_b8.previous;
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    pcVar16 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar16;
    if (cVar2 == '\0') break;
code_r0x005cd7da:
    pcVar16 = pcVar8;
    if (uVar13 == 0) break;
  }
  uVar13 = ~uVar13;
  pcVar8 = pcVar16 + -uVar13;
  pcVar16 = (char *)((int)pvVar6 + 10);
  for (uVar11 = uVar13 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar16 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar16 = pcVar16 + 1;
  }
  goto LAB_005cd7f2;
}

