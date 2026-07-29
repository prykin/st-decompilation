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
  SettMapMTy_field_1F84DArray *pSVar6;
  char *pcVar7;
  SettMapMTy_field_1F84Element *element_1f84;
  SettMapMTy_field_1F84Element *element_1f84_2;
  SettMapMTy_field_1F84Element *element_1f84_3;
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
  pSVar11 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_b8.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x1cb,0,iVar5,"%s"
                               ,"SettMapMTy::PrepPlList");
    if (iVar8 != 0) {
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
    local_8 = local_10->field_1F43;
  }
  pSVar6 = local_10->field_1F84;
  if (pSVar6 != (SettMapMTy_field_1F84DArray *)0x0) {
    uVar12 = 0;
    if (0 < (int)pSVar6->count) {
      bVar17 = pSVar6->count != 0;
      do {
        if (bVar17) {
          element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar6, uVar12);
        }
        else {
          element_1f84 = (SettMapMTy_field_1F84Element *)0x0;
        }
        if ((element_1f84 != (SettMapMTy_field_1F84Element *)0x0) && (element_1f84->handle != (DArrayTy *)0x0)) {
          DArrayDestroy(element_1f84->handle);
        }
        pSVar6 = pSVar11->field_1F84;
        uVar12 = uVar12 + 1;
        bVar17 = uVar12 < pSVar6->count;
      } while ((int)uVar12 < (int)pSVar6->count);
    }
    DArrayDestroy((DArrayTy *)pSVar11->field_1F84);
  }
  pSVar6 = (SettMapMTy_field_1F84DArray *)Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,8,0x60,8);
  pSVar11->field_1F84 = pSVar6;
  if ((pSVar11->field_1E26 != CASE_C) && (pSVar11->field_1E26 != CASE_10)) {
    DAT_0080874d = -1;
    DAT_0080874e = '\0';
  }
  if (DAT_0080877e != '\0') {
    local_c = &DAT_008087e8;
    do {
      pcVar7 = local_c;
      cVar2 = local_c[1];
      if (cVar2 != -1) {
        memset(&local_74, 0, 0x60); /* compiler bulk-zero initialization */
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_74._0_1_ = 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_74._1_1_ = 1;
        if (((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) && (*pcVar7 == '\x03')) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_74._3_1_ = '\x01';
        }
        else {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_74._3_1_ = *pcVar7;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_74._2_1_ = cVar2;
        switch(pSVar11->field_1E26) {
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
        if (pcVar7[-0x21] == '\x01') {
          SVar1 = pSVar11->field_1E26;
          if (((SVar1 == CASE_5) || (SVar1 == CASE_C)) || (SVar1 == CASE_10)) {
            uStack_70 = 4;
            uVar12 = 0;
            if (0 < (int)local_24[3]) {
              local_14 = (byte *)(pcVar7 + -0x20);
              bVar17 = local_24[3] != 0;
              do {
                if (bVar17) {
                  iVar5 = local_24[2] * uVar12 + local_24[7];
                }
                else {
                  iVar5 = 0;
                }
                pbVar9 = (byte *)(iVar5 + 0x4c);
                pbVar13 = local_14;
                do {
                  bVar3 = *pbVar9;
                  bVar17 = bVar3 < *pbVar13;
                  if (bVar3 != *pbVar13) {
LAB_005cd670:
                    iVar5 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                    goto LAB_005cd675;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar9[1];
                  bVar17 = bVar3 < pbVar13[1];
                  if (bVar3 != pbVar13[1]) goto LAB_005cd670;
                  pbVar9 = pbVar9 + 2;
                  pbVar13 = pbVar13 + 2;
                } while (bVar3 != 0);
                iVar5 = 0;
LAB_005cd675:
                pSVar11 = local_10;
                pcVar7 = local_c;
                if (iVar5 == 0) {
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
        local_20 = *(undefined4 *)(pcVar7 + 3);
        local_2a = pcVar7[2];
        local_6e = DAT_0080877f;
        local_1c = *(undefined4 *)(pcVar7 + 7);
        local_18 = *(undefined4 *)(pcVar7 + 0xb);
        local_29 = 0;
        local_25 = 1;
        Library::DKW::TBL::FUN_006ae1c0(&pSVar11->field_1F84->flags,&local_74);
      }
      local_c = pcVar7 + 0x51;
    } while ((int)local_c < 0x808a70);
    if (pSVar11->field_1E26 == CASE_C) {
      pSVar6 = pSVar11->field_1F84;
      uVar10 = 0;
      uVar12 = pSVar6->count;
      if (0 < (int)uVar12) {
        bVar17 = uVar12 != 0;
        do {
          if (bVar17) {
            element_1f84_2 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar6, uVar10);
          }
          else {
            element_1f84_2 = (SettMapMTy_field_1F84Element *)0x0;
          }
          if (((element_1f84_2 != (SettMapMTy_field_1F84Element *)0x0) && (element_1f84_2->field_0004 == '\x01')) &&
             ((DAT_0080874d == element_1f84_2->state && (DAT_0080874e == element_1f84_2->field_0003)))) {
            pcVar7 = &DAT_00807e1d;
            if (DAT_008067a0 == '\0') {
              pcVar7 = (char *)&DAT_00807ddd;
            }
            AddPlayerList(pSVar11,DAT_0080877f,uVar10,(DAT_0080874f != '\0') + 2,pcVar7);
            break;
          }
          uVar10 = uVar10 + 1;
          bVar17 = uVar10 < uVar12;
        } while ((int)uVar10 < (int)uVar12);
      }
    }
    else {
      pSVar6 = pSVar11->field_1F84;
      uVar10 = 0;
      uVar12 = pSVar6->count;
      if (0 < (int)uVar12) {
        bVar17 = uVar12 != 0;
        do {
          if (bVar17) {
            element_1f84_3 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar6, uVar10);
          }
          else {
            element_1f84_3 = (SettMapMTy_field_1F84Element *)0x0;
          }
          if (((element_1f84_3 != (SettMapMTy_field_1F84Element *)0x0) && (element_1f84_3->field_0004 == '\x01')) && (element_1f84_3->state != -1)) {
            DAT_0080874d = element_1f84_3->state;
            element_1f84_3->field_0004 = '\x02';
            DAT_0080874e = element_1f84_3->field_0003;
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
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)pSVar11->field_0000->field_0020)();
  g_currentExceptionFrame = local_b8.previous;
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar15 + 1;
    cVar2 = *pcVar15;
    pcVar15 = pcVar16;
    if (cVar2 == '\0') break;
code_r0x005cd7da:
    pcVar16 = pcVar15;
    if (uVar12 == 0) break;
  }
  uVar12 = ~uVar12;
  pcVar15 = pcVar16 + -uVar12;
  pcVar7 = pcVar7 + 10;
  for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pcVar7 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar7 = pcVar7 + 1;
  }
  goto LAB_005cd7f2;
}

