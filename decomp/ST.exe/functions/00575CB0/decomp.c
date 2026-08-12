#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Object\To_alga.cpp
   STAlgaC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00575CB0; family_names=STAlgaC::GetMessage; ret4=5;
   direct_offsets={10:10,14:9,18:8,1c:5} */

int __thiscall STAlgaC::GetMessage(STAlgaC *this,STMessage *message)

{
  char cVar1;
  byte bVar2;
  STMessageId SVar3;
  AnonShape_00575CB0_065D0A66 *pAVar5;
  ST3DSMAPContext *pSVar6;
  int iVar7;
  int local_EAX_47;
  int iVar8;
  BOOL BVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX;
  DArrayTy *array;
  byte *pbVar9;
  int local_EAX_1322;
  ushort *local_EAX_1365;
  ushort *puVar11;
  void *pvVar10;
  char *pcVar11_mg0;
  char *pcVar11_mg1;
  ushort *puVar12;
  uint uVar14;
  int iVar22;
  int iVar13;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  STAlgaC *pSVar18;
  byte *puVar19;
  AnonShape_00575CB0_0408A0C4 *pAVar20;
  char *pcVar21;
  int *piVar22;
  char *pcVar23;
  int iVar24;
  byte *puVar25;
  byte *pbVar26;
  AnonNested_00575CB0_0004_76DA00C1 *pAVar27;
  undefined1 *puVar28;
  bool bVar29;
  longlong lVar30;
  InternalExceptionFrame local_e8;
  InternalExceptionFrame local_a4;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  AnonShape_00575CB0_C367735D *local_3c;
  int local_38;
  uint local_34;
  int local_30;
  STAlgaC *local_2c;
  int local_28;
  undefined4 local_24;
  AnonShape_0060EA30_DCEB68AD *local_20;
  byte *local_1c;
  int local_18;
  DArrayTy *local_14;
  AnonShape_00575CB0_065D0A66 *local_10;
  uint local_c;
  AnonShape_00575CB0_0408A0C4 *local_8;

  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  local_2c = this;
  local_EAX_47 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
  pSVar18 = local_2c;
  if (local_EAX_47 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar22 = ReportDebugMessage("E:\\__titans\\Object\\To_alga.cpp",0x196,0,local_EAX_47,
                                "%s","STAlgaC::GetMessage");
    if (iVar22 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_47,0,"E:\\__titans\\Object\\To_alga.cpp",0x197);
    return local_EAX_47;
  }
  iVar8 = FUN_006e5fd0(local_2c,message);
  if (iVar8 == 0xffff) {
    RaiseInternalException
              (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\Object\\To_alga.cpp",
               0x47);
  }
  SVar3 = message->id;
  if (SVar3 == MESS_ID_CREATE) {
    pSVar18->field_0030 = 0;
    pSVar18->field_0034 = 0;
    pSVar18->field_0038 = nullptr;
    pSVar18->field_003C = 0;
    pSVar18->field_0044 = 0;
    pSVar18->field_0040 = nullptr;
    pSVar18->field_0048 = nullptr;
    local_30 = 0;
    local_28 = 0;
    puVar19 = (byte *)((message->arg0).ptr);
    puVar25 = (byte *)&pSVar18->field_0x1c;
    memmove(puVar25, puVar19, 0x14); /* compiler REP MOVS byte copy */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_20 = *(AnonShape_0060EA30_DCEB68AD **)((message->arg0).u32 + 0x14);
    local_10 = (AnonShape_00575CB0_065D0A66 *)((message->arg0).u32 + 0x18);
    BVar8 = IsBadReadPtr(local_10,(int)local_20 * 0x92);
    if (BVar8 != 0) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\Object\\To_alga.cpp",0x66);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      return extraout_EAX;
    }
    array = Library::DKW::TBL::DArrayCreate(nullptr,10,0x24,10);
    local_14 = array;
    local_18 = 0;
    if (0 < (int)local_20) {
      do {
        array->iteratorIndex = 0;
        do {
          do {
            uVar15 = local_14->iteratorIndex;
            if (uVar15 < local_14->count) {
              piVar22 = DArrayAt<int>(local_14, uVar15);
              local_14->iteratorIndex = uVar15 + 1;
            }
            else {
              piVar22 = nullptr;
            }
            if (piVar22 == nullptr) goto LAB_005761b9;
            pbVar26 = *(byte **)((int)pSVar18->field_0038 + *piVar22 * 8);
            local_8 = (AnonShape_00575CB0_0408A0C4 *)((int)pSVar18->field_0038 + *piVar22 * 8);
            pbVar9 = &local_10->field_0x6;
            do {
              bVar2 = *pbVar26;
              bVar29 = bVar2 < *pbVar9;
              if (bVar2 != *pbVar9) {
LAB_00576168:
                iVar13 = (1 - (uint)bVar29) - (uint)(bVar29 != 0);
                goto LAB_0057616d;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar26[1];
              bVar29 = bVar2 < pbVar9[1];
              if (bVar2 != pbVar9[1]) goto LAB_00576168;
              pbVar26 = pbVar26 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar2 != 0);
            iVar13 = 0;
LAB_0057616d:
          } while (iVar13 != 0);
          pAVar27 = local_8->field_0004;
          pbVar9 = &local_10->field_0x46;
          do {
            bVar2 = pAVar27->field_0000;
            bVar29 = bVar2 < *pbVar9;
            if (bVar2 != *pbVar9) {
LAB_005761a1:
              iVar13 = (1 - (uint)bVar29) - (uint)(bVar29 != 0);
              goto LAB_005761a6;
            }
            if (bVar2 == 0) break;
            bVar2 = pAVar27->field_0001;
            bVar29 = bVar2 < pbVar9[1];
            if (bVar2 != pbVar9[1]) goto LAB_005761a1;
            pAVar27 = (AnonNested_00575CB0_0004_76DA00C1 *)&pAVar27->field_0x2;
            pbVar9 = pbVar9 + 2;
          } while (bVar2 != 0);
          iVar13 = 0;
LAB_005761a6:
        } while (iVar13 != 0);
        array = local_14;
        if (piVar22 == nullptr) {
LAB_005761b9:
          local_e8.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_e8;
          local_EAX_1322 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0);
          pAVar5 = local_10;
          if (local_EAX_1322 == 0) {
            local_8 = (AnonShape_00575CB0_0408A0C4 *)&local_10->field_0x6;
            local_58 = 0;
            local_EAX_1365 =
                 Library::Ourlib::MFRLOAD::mfRLoad
                           (PTR_00806764,CASE_1D,(char *)local_8,0xffffffff,0,0,0,nullptr);
            if (local_EAX_1365 == nullptr) {
              RaiseInternalException
                        (-4,g_overwriteContext_007ED77C,"E:\\__titans\\Object\\To_alga.cpp",
                         0x9a);
            }
            local_5c = *(undefined4 *)local_EAX_1365;
            puVar28 = &pAVar5->field_0x46;
            local_58 = STField<undefined4>(local_EAX_1365,0x21);
            local_4c = 0x5a;
            local_48 = 0x4b;
            local_44 = STField<undefined4>(local_EAX_1365,0x31);
            if (*puVar28 == '\0') {
              local_54 = 0;
              local_50 = 0;
            }
            else {
              puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                                  (PTR_00806764,CASE_1D,puVar28,0xffffffff,0,0,0,nullptr);
              if (puVar11 == nullptr) {
                RaiseInternalException
                          (-4,g_overwriteContext_007ED77C,"E:\\__titans\\Object\\To_alga.cpp",
                           0xa3);
              }
              local_54 = *(undefined4 *)puVar11;
              local_50 = STField<undefined4>(puVar11,0x21);
            }
            pSVar18 = local_2c;
            g_currentExceptionFrame = local_e8.previous;
            piVar22 = &local_60;
            local_60 = local_2c->field_0030;
            if ((int)local_2c->field_0034 <= local_60) {
              pvVar10 = Library::DKW::LIB::MemRealloc
                                  (local_2c->field_0038,local_2c->field_0034 * 8 + 0x50);
              pSVar18->field_0038 = pvVar10;
              pSVar18->field_0034 = pSVar18->field_0034 + 10;
            }
            pcVar11_mg0 = FUN_006c49b0((char *)local_8);
            *(char **)((int)pSVar18->field_0038 + pSVar18->field_0030 * 8) = pcVar11_mg0;
            pcVar11_mg1 = FUN_006c49b0(puVar28);
            array = local_14;
            *(char **)((int)pSVar18->field_0038 + pSVar18->field_0030 * 8 + 4) = pcVar11_mg1;
            Library::DKW::TBL::DArrayAppend(local_14,&local_60);
            pSVar18->field_0030 = pSVar18->field_0030 + 1;
            goto LAB_00576308;
          }
          g_currentExceptionFrame = local_e8.previous;
          pSVar18 = local_2c;
          array = local_14;
        }
        else {
LAB_00576308:
          iVar7 = local_28;
          iVar24 = local_30;
          iVar13 = local_10->field_0086;
          if (iVar13 < 0) {
            if (local_28 <= pSVar18->field_0044) {
              puVar12 = Library::DKW::LIB::MemRealloc(pSVar18->field_0048,(local_28 * 5 + 0x32) * 4);
              pSVar18->field_0048 = puVar12;
              local_28 = iVar7 + 10;
            }
            puVar12 = pSVar18->field_0048 + pSVar18->field_0044 * 10;
            *(int *)puVar12 = *piVar22;
            *(float *)(puVar12 + 2) =
                 (float)(int)*(short *)local_10 * _DAT_007904f8 * (float)_DAT_0079b168;
            *(float *)(puVar12 + 4) =
                 (float)(int)local_10->field_0002 * _DAT_007904f8 * (float)_DAT_0079b168;
            local_8 = (AnonShape_00575CB0_0408A0C4 *)(int)local_10->field_0004;
            *(float *)(puVar12 + 6) =
                 (float)(int)local_10->field_0004 * _DAT_00790504 * (float)_DAT_0079b168 +
                 (float)_DAT_0079b158;
            puVar12[9] = *(ushort *)(piVar22 + 7);
            uVar14 = Library::MSVCRT::FUN_0072e6c0();
            uVar15 = 0;
            local_34 = (int)uVar14 % piVar22[1];
            local_3c = *(AnonShape_00575CB0_C367735D **)piVar22[2];
            lVar30 = Library::MSVCRT::__ftol();
            ST3DSMAPContext::sub_006E8660
                      (g_sT3DSMAPContext_00807598,(int *)&local_c,(piVar22[4] != 0) + 1,0,
                       local_3c->field_0004,local_3c->field_0008,piVar22[5],piVar22[6] - (int)lVar30
                       ,uVar15);
            puVar12[8] = (ushort)local_c;
            ST3DSMAPContext::sub_006E98E0
                      (g_sT3DSMAPContext_00807598,local_c,0,piVar22[1],piVar22[2],1);
            ST3DSMAPContext::sub_006E9EF0
                      (g_sT3DSMAPContext_00807598,local_c,0,1,(int)(short)puVar12[9],0,30000);
            ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_c,0,local_34);
            if (piVar22[4] != 0) {
              ST3DSMAPContext::sub_006E98E0
                        (g_sT3DSMAPContext_00807598,local_c,1,piVar22[3],piVar22[4],1);
              ST3DSMAPContext::sub_006E9EF0
                        (g_sT3DSMAPContext_00807598,local_c,1,1,(int)(short)puVar12[9],0,30000);
              ST3DSMAPContext::sub_006EA270
                        (g_sT3DSMAPContext_00807598,local_c,1,(int)local_34 % piVar22[3]);
              Library::Ourlib::ST3DSMAP::SprSetShadowTbl
                        (g_sT3DSMAPContext_00807598,local_c,PTR_008032c0);
              ST3DSMAPContext::sub_006EA6D0(g_sT3DSMAPContext_00807598,local_c,1,1);
            }
            iVar13 = local_3c->field_0008 - piVar22[6];
            if (0xd < iVar13) {
              local_24 = FUN_006db610(iVar13 * 0x10000,-g_sT3DSMAPContext_00807598->field_0108);
              Library::Ourlib::ST3DSMAP::SprSetSplit(g_sT3DSMAPContext_00807598,local_c);
            }
            Library::Ourlib::ST3DSMAP::SprSetLevAfter(g_sT3DSMAPContext_00807598,local_c,-1);
            Library::Ourlib::ST3DSMAP::SprMove
                      (g_sT3DSMAPContext_00807598,local_c,*(float *)(puVar12 + 2),
                       *(float *)(puVar12 + 4),*(float *)(puVar12 + 6));
            Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_c,0);
            pSVar18->field_0044 = pSVar18->field_0044 + 1;
            array = local_14;
          }
          else if ((iVar13 < piVar22[1]) && ((piVar22[4] == 0 || (iVar13 < piVar22[3])))) {
            if (local_30 <= pSVar18->field_003C) {
              pvVar10 = Library::DKW::LIB::MemRealloc
                                  (pSVar18->field_0040,(local_30 * 0xb + 0x6e) * 4);
              pSVar18->field_0040 = pvVar10;
              local_30 = iVar24 + 10;
            }
            puVar19 = (byte *)((int)pSVar18->field_0040 + pSVar18->field_003C * 0x2c);
            *puVar19 = 0;
            puVar19[1] = *piVar22;
            puVar19[2] = (float)(int)*(short *)local_10 * _DAT_007904f8 * (float)_DAT_0079b168;
            puVar19[3] = (float)(int)local_10->field_0002 * _DAT_007904f8 * (float)_DAT_0079b168;
            local_8 = (AnonShape_00575CB0_0408A0C4 *)(int)local_10->field_0004;
            puVar19[4] = (float)(int)local_10->field_0004 * _DAT_00790504 * (float)_DAT_0079b168 +
                         (float)_DAT_0079b128;
            puVar19[5] = local_10->field_008A;
            *(short *)(puVar19 + 7) = (short)piVar22[5];
            puVar19[8] = *(undefined4 *)(piVar22[2] + local_10->field_0086 * 4);
            if (piVar22[4] == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined4 *)(piVar22[4] + local_10->field_0086 * 4);
            }
            puVar19[9] = uVar17;
            puVar19[10] = local_10->field_0086;
            STField<short>(puVar19,0x1e) = (short)piVar22[6] + -0xe;
            iVar13 = ((int)*(short *)(puVar19[8] + 0x14) + (int)*(short *)(puVar19[8] + 0x10)) -
                     piVar22[6];
            if (iVar13 < 0xe) {
              puVar19[6] = 0;
            }
            else {
              local_24 = FUN_006db610(iVar13 * 0x10000,-g_sT3DSMAPContext_00807598->field_0108);
              lVar30 = Library::MSVCRT::__ftol();
              puVar19[6] = (int)lVar30;
            }
            pSVar18->field_003C = pSVar18->field_003C + 1;
            array = local_14;
          }
        }
        local_18 = local_18 + 1;
        local_10 = (AnonShape_00575CB0_065D0A66 *)&local_10[1].field_0002;
      } while (local_18 < (int)local_20);
    }
    if (0 < pSVar18->field_003C) {
      FUN_006accd0(pSVar18->field_0040,(undefined4 *)pSVar18->field_003C,0x2c,thunk_FUN_00575c80);
      pSVar6 = g_sT3DSMAPContext_00807598;
      iVar13 = pSVar18->field_003C;
      g_sT3DSMAPContext_00807598->field_0290 = pSVar18->field_0040;
      pSVar6->field_028C = iVar13;
    }
    DArrayDestroy(array);
  }
  else if (SVar3 == MESS_SHARED_0003) {
    if (g_sT3DSMAPContext_00807598 != nullptr) {
      iVar13 = 0;
      if (0 < pSVar18->field_0044) {
        iVar24 = 0;
        do {
          Library::Ourlib::ST3DSMAP::SprClose
                    (g_sT3DSMAPContext_00807598,
                     (int)*(short *)(iVar24 + 0x10 + (int)pSVar18->field_0048));
          iVar13 = iVar13 + 1;
          iVar24 = iVar24 + 0x14;
        } while (iVar13 < pSVar18->field_0044);
      }
      iVar13 = pSVar18->field_0030 + -1;
      pSVar18->field_0030 = iVar13;
      while (-1 < iVar13) {
        FreeAndNull((void *)((int)pSVar18->field_0038 + iVar13 * 8));
        FreeAndNull((void *)((int)pSVar18->field_0038 + pSVar18->field_0030 * 8 + 4));
        iVar13 = pSVar18->field_0030 + -1;
        pSVar18->field_0030 = iVar13;
      }
      FreeAndNull(&pSVar18->field_0038);
      pSVar18->field_0034 = 0;
      pSVar18->field_0030 = 0;
      pSVar6 = g_sT3DSMAPContext_00807598;
      g_sT3DSMAPContext_00807598->field_0290 = 0;
      pSVar6->field_028C = 0;
      FreeAndNull(&pSVar18->field_0040);
      FreeAndNull(&pSVar18->field_0048);
      pSVar18->field_003C = 0;
      pSVar18->field_0044 = 0;
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
  }
  else if ((SVar3 == MESS_SHARED_010F) &&
          (iVar13 = pSVar18->field_003C + pSVar18->field_0044, 0 < iVar13)) {
    local_20 = (AnonShape_0060EA30_DCEB68AD *)(iVar13 * 0x92 + 0x18);
    local_1c = Library::DKW::LIB::MemAllocClear((uint)local_20);
    puVar19 = (byte *)&pSVar18->field_0x1c;
    pbVar9 = local_1c;
    memmove(pbVar9, puVar19, 0x14); /* compiler REP MOVS byte copy */
    local_18 = 0;
    local_1c[0xc] = 2;
    local_1c[0xd] = 0;
    local_1c[0xe] = 0;
    local_1c[0xf] = 0;
    *(int *)(local_1c + 0x14) = pSVar18->field_003C + pSVar18->field_0044;
    local_10 = (AnonShape_00575CB0_065D0A66 *)(local_1c + 0x18);
    if (0 < pSVar18->field_0044) {
      local_14 = nullptr;
      do {
        pAVar20 = (AnonShape_00575CB0_0408A0C4 *)((int)&local_14->flags + (int)pSVar18->field_0048);
        local_8 = pAVar20;
        lVar30 = Library::MSVCRT::__ftol();
        pAVar5 = local_10;
        *(short *)local_10 = (short)lVar30;
        lVar30 = Library::MSVCRT::__ftol();
        pAVar5->field_0002 = (short)lVar30;
        lVar30 = Library::MSVCRT::__ftol();
        pAVar5->field_0004 = (short)lVar30;
        pAVar5->field_008A = 0;
        uVar15 = 0xffffffff;
        pcVar21 = *(char **)((int)pSVar18->field_0038 + *(int *)pAVar20 * 8);
        do {
          pcVar23 = pcVar21;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        uVar15 = ~uVar15;
        pcVar21 = pcVar23 + -uVar15;
        pcVar23 = &pAVar5->field_0x6;
        memmove(pcVar23, pcVar21, uVar15); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        puVar28 = &local_10->field_0x46;
        pAVar5 = local_10 + 1;
        uVar15 = 0xffffffff;
        pcVar21 = *(char **)((int)pSVar18->field_0038 + *(int *)local_8 * 8 + 4);
        do {
          pcVar23 = pcVar21;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        uVar15 = ~uVar15;
        pcVar21 = pcVar23 + -uVar15;
        pcVar23 = puVar28;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar23 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar23 = pcVar23 + 4;
        }
        local_18 = local_18 + 1;
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar23 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar23 = pcVar23 + 1;
        }
        local_10->field_0086 = 0xffffffff;
        *(undefined4 *)&local_10->field_0x8e = 0;
        local_14 = (DArrayTy *)&local_14->growCapacity;
        local_10 = (AnonShape_00575CB0_065D0A66 *)&pAVar5->field_0002;
        local_8 = (AnonShape_00575CB0_0408A0C4 *)puVar28;
      } while (local_18 < pSVar18->field_0044);
    }
    local_18 = 0;
    if (0 < pSVar18->field_003C) {
      local_14 = nullptr;
      do {
        iVar13 = (int)pSVar18->field_0040 + (int)local_14;
        local_38 = iVar13;
        lVar30 = Library::MSVCRT::__ftol();
        pAVar5 = local_10;
        *(short *)local_10 = (short)lVar30;
        lVar30 = Library::MSVCRT::__ftol();
        pAVar5->field_0002 = (short)lVar30;
        lVar30 = Library::MSVCRT::__ftol();
        pAVar5->field_0004 = (short)lVar30;
        pAVar5->field_008A = *(undefined4 *)(iVar13 + 0x14);
        uVar15 = 0xffffffff;
        pcVar21 = *(char **)((int)pSVar18->field_0038 + *(int *)(iVar13 + 4) * 8);
        do {
          pcVar23 = pcVar21;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        uVar15 = ~uVar15;
        pcVar21 = pcVar23 + -uVar15;
        pcVar23 = &pAVar5->field_0x6;
        memmove(pcVar23, pcVar21, uVar15); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        local_8 = (AnonShape_00575CB0_0408A0C4 *)&local_10->field_0x46;
        pAVar5 = local_10 + 1;
        uVar15 = 0xffffffff;
        pcVar21 = *(char **)((int)pSVar18->field_0038 + *(int *)(local_38 + 4) * 8 + 4);
        do {
          pcVar23 = pcVar21;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        uVar15 = ~uVar15;
        pcVar21 = pcVar23 + -uVar15;
        pcVar23 = (char *)local_8;
        memmove(pcVar23, pcVar21, uVar15); /* compiler REP MOVS byte copy */
        local_14 = (DArrayTy *)&local_14[1].count;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_10->field_0086 = *(undefined4 *)(local_38 + 0x28);
        *(undefined4 *)&local_10->field_0x8e = 0;
        local_18 = local_18 + 1;
        local_10 = (AnonShape_00575CB0_065D0A66 *)&pAVar5->field_0002;
      } while (local_18 < pSVar18->field_003C);
    }
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,pSVar18->field_0018,local_1c,(uint)local_20);
    FreeAndNull(&local_1c);
    g_currentExceptionFrame = local_a4.previous;
    return 0;
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

