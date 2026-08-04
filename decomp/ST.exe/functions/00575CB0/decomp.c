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
  code *pcVar4;
  AnonShape_00575CB0_065D0A66 *pAVar5;
  ST3DSMAPContext *pSVar6;
  int iVar7;
  int iVar8;
  BOOL BVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX;
  DArrayTy *array;
  byte *pbVar10;
  ushort *puVar11;
  void *pvVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  STAlgaC *pSVar17;
  byte *puVar18;
  AnonShape_00575CB0_0408A0C4 *pAVar19;
  int *piVar20;
  char *pcVar21;
  int iVar22;
  byte *puVar23;
  byte *pbVar24;
  AnonNested_00575CB0_0004_76DA00C1 *pAVar25;
  undefined1 *puVar26;
  bool bVar27;
  longlong lVar28;
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
  iVar8 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
  pSVar17 = local_2c;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar22 = ReportDebugMessage("E:\\__titans\\Object\\To_alga.cpp",0x196,0,iVar8,
                                "%s","STAlgaC::GetMessage");
    if (iVar22 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar8,0,"E:\\__titans\\Object\\To_alga.cpp",0x197);
    return iVar8;
  }
  iVar8 = FUN_006e5fd0(local_2c,message);
  if (iVar8 == 0xffff) {
    RaiseInternalException
              (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\Object\\To_alga.cpp",
               0x47);
  }
  SVar3 = message->id;
  if (SVar3 == MESS_ID_CREATE) {
    pSVar17->field_0030 = 0;
    pSVar17->field_0034 = 0;
    pSVar17->field_0038 = nullptr;
    pSVar17->field_003C = 0;
    pSVar17->field_0044 = 0;
    pSVar17->field_0040 = nullptr;
    pSVar17->field_0048 = nullptr;
    local_30 = 0;
    local_28 = 0;
    puVar18 = (byte *)((message->arg0).ptr);
    puVar23 = (byte *)&pSVar17->field_0x1c;
    memmove(puVar23, puVar18, 0x14); /* compiler REP MOVS byte copy */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_20 = *(AnonShape_0060EA30_DCEB68AD **)((message->arg0).u32 + 0x14);
    local_10 = (AnonShape_00575CB0_065D0A66 *)((message->arg0).u32 + 0x18);
    BVar9 = IsBadReadPtr(local_10,(int)local_20 * 0x92);
    if (BVar9 != 0) {
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
            uVar14 = local_14->iteratorIndex;
            if (uVar14 < local_14->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_14, uVar14) (runtime stride) */
              piVar20 = (int *)(local_14->elementSize * uVar14 + (int)local_14->data);
              local_14->iteratorIndex = uVar14 + 1;
            }
            else {
              piVar20 = nullptr;
            }
            if (piVar20 == nullptr) goto LAB_005761b9;
            pbVar24 = *(byte **)((int)pSVar17->field_0038 + *piVar20 * 8);
            local_8 = (AnonShape_00575CB0_0408A0C4 *)((int)pSVar17->field_0038 + *piVar20 * 8);
            pbVar10 = &local_10->field_0x6;
            do {
              bVar2 = *pbVar24;
              bVar27 = bVar2 < *pbVar10;
              if (bVar2 != *pbVar10) {
LAB_00576168:
                iVar8 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                goto LAB_0057616d;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar24[1];
              bVar27 = bVar2 < pbVar10[1];
              if (bVar2 != pbVar10[1]) goto LAB_00576168;
              pbVar24 = pbVar24 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar2 != 0);
            iVar8 = 0;
LAB_0057616d:
          } while (iVar8 != 0);
          pAVar25 = local_8->field_0004;
          pbVar10 = &local_10->field_0x46;
          do {
            bVar2 = pAVar25->field_0000;
            bVar27 = bVar2 < *pbVar10;
            if (bVar2 != *pbVar10) {
LAB_005761a1:
              iVar8 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
              goto LAB_005761a6;
            }
            if (bVar2 == 0) break;
            bVar2 = pAVar25->field_0001;
            bVar27 = bVar2 < pbVar10[1];
            if (bVar2 != pbVar10[1]) goto LAB_005761a1;
            pAVar25 = (AnonNested_00575CB0_0004_76DA00C1 *)&pAVar25->field_0x2;
            pbVar10 = pbVar10 + 2;
          } while (bVar2 != 0);
          iVar8 = 0;
LAB_005761a6:
        } while (iVar8 != 0);
        array = local_14;
        if (piVar20 == nullptr) {
LAB_005761b9:
          local_e8.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_e8;
          iVar8 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0);
          pAVar5 = local_10;
          if (iVar8 == 0) {
            local_8 = (AnonShape_00575CB0_0408A0C4 *)&local_10->field_0x6;
            local_58 = 0;
            puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                                (DAT_00806764,CASE_1D,(char *)local_8,0xffffffff,0,0,0,
                                 nullptr);
            if (puVar11 == nullptr) {
              RaiseInternalException
                        (-4,g_overwriteContext_007ED77C,"E:\\__titans\\Object\\To_alga.cpp",
                         0x9a);
            }
            local_5c = *(undefined4 *)puVar11;
            puVar26 = &pAVar5->field_0x46;
            local_58 = *(undefined4 *)((int)puVar11 + 0x21);
            local_4c = 0x5a;
            local_48 = 0x4b;
            local_44 = *(undefined4 *)((int)puVar11 + 0x31);
            if (*puVar26 == '\0') {
              local_54 = 0;
              local_50 = 0;
            }
            else {
              puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                                  (DAT_00806764,CASE_1D,puVar26,0xffffffff,0,0,0,nullptr);
              if (puVar11 == nullptr) {
                RaiseInternalException
                          (-4,g_overwriteContext_007ED77C,"E:\\__titans\\Object\\To_alga.cpp",
                           0xa3);
              }
              local_54 = *(undefined4 *)puVar11;
              local_50 = *(undefined4 *)((int)puVar11 + 0x21);
            }
            pSVar17 = local_2c;
            g_currentExceptionFrame = local_e8.previous;
            piVar20 = &local_60;
            local_60 = local_2c->field_0030;
            if ((int)local_2c->field_0034 <= local_60) {
              pvVar12 = Library::DKW::LIB::MemRealloc
                                  (local_2c->field_0038,local_2c->field_0034 * 8 + 0x50);
              pSVar17->field_0038 = pvVar12;
              pSVar17->field_0034 = pSVar17->field_0034 + 10;
            }
            pcVar13 = FUN_006c49b0((char *)local_8);
            *(char **)((int)pSVar17->field_0038 + pSVar17->field_0030 * 8) = pcVar13;
            pcVar13 = FUN_006c49b0(puVar26);
            array = local_14;
            *(char **)((int)pSVar17->field_0038 + pSVar17->field_0030 * 8 + 4) = pcVar13;
            Library::DKW::TBL::DArrayAppend(local_14,&local_60);
            pSVar17->field_0030 = pSVar17->field_0030 + 1;
            goto LAB_00576308;
          }
          g_currentExceptionFrame = local_e8.previous;
          pSVar17 = local_2c;
          array = local_14;
        }
        else {
LAB_00576308:
          iVar7 = local_28;
          iVar22 = local_30;
          iVar8 = local_10->field_0086;
          if (iVar8 < 0) {
            if (local_28 <= pSVar17->field_0044) {
              puVar11 = Library::DKW::LIB::MemRealloc(pSVar17->field_0048,(local_28 * 5 + 0x32) * 4);
              pSVar17->field_0048 = puVar11;
              local_28 = iVar7 + 10;
            }
            puVar11 = pSVar17->field_0048 + pSVar17->field_0044 * 10;
            *(int *)puVar11 = *piVar20;
            *(float *)(puVar11 + 2) =
                 (float)(int)*(short *)local_10 * _DAT_007904f8 * (float)_DAT_0079b168;
            *(float *)(puVar11 + 4) =
                 (float)(int)local_10->field_0002 * _DAT_007904f8 * (float)_DAT_0079b168;
            local_8 = (AnonShape_00575CB0_0408A0C4 *)(int)local_10->field_0004;
            *(float *)(puVar11 + 6) =
                 (float)(int)local_10->field_0004 * _DAT_00790504 * (float)_DAT_0079b168 +
                 (float)_DAT_0079b158;
            puVar11[9] = *(ushort *)(piVar20 + 7);
            uVar14 = Library::MSVCRT::FUN_0072e6c0();
            uVar15 = 0;
            local_34 = (int)uVar14 % piVar20[1];
            local_3c = *(AnonShape_00575CB0_C367735D **)piVar20[2];
            lVar28 = Library::MSVCRT::__ftol();
            ST3DSMAPContext::sub_006E8660
                      (g_sT3DSMAPContext_00807598,(int *)&local_c,(piVar20[4] != 0) + 1,0,
                       local_3c->field_0004,local_3c->field_0008,piVar20[5],piVar20[6] - (int)lVar28
                       ,uVar15);
            puVar11[8] = (ushort)local_c;
            ST3DSMAPContext::sub_006E98E0
                      (g_sT3DSMAPContext_00807598,local_c,0,piVar20[1],piVar20[2],1);
            ST3DSMAPContext::sub_006E9EF0
                      (g_sT3DSMAPContext_00807598,local_c,0,1,(int)(short)puVar11[9],0,30000);
            ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_c,0,local_34);
            if (piVar20[4] != 0) {
              ST3DSMAPContext::sub_006E98E0
                        (g_sT3DSMAPContext_00807598,local_c,1,piVar20[3],piVar20[4],1);
              ST3DSMAPContext::sub_006E9EF0
                        (g_sT3DSMAPContext_00807598,local_c,1,1,(int)(short)puVar11[9],0,30000);
              ST3DSMAPContext::sub_006EA270
                        (g_sT3DSMAPContext_00807598,local_c,1,(int)local_34 % piVar20[3]);
              Library::Ourlib::ST3DSMAP::SprSetShadowTbl
                        (g_sT3DSMAPContext_00807598,local_c,DAT_008032c0);
              ST3DSMAPContext::sub_006EA6D0(g_sT3DSMAPContext_00807598,local_c,1,1);
            }
            iVar8 = local_3c->field_0008 - piVar20[6];
            if (0xd < iVar8) {
              local_24 = FUN_006db610(iVar8 * 0x10000,-g_sT3DSMAPContext_00807598->field_0108);
              Library::Ourlib::ST3DSMAP::SprSetSplit(g_sT3DSMAPContext_00807598,local_c);
            }
            Library::Ourlib::ST3DSMAP::SprSetLevAfter(g_sT3DSMAPContext_00807598,local_c,-1);
            Library::Ourlib::ST3DSMAP::SprMove
                      (g_sT3DSMAPContext_00807598,local_c,*(float *)(puVar11 + 2),
                       *(float *)(puVar11 + 4),*(float *)(puVar11 + 6));
            Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_c,0);
            pSVar17->field_0044 = pSVar17->field_0044 + 1;
            array = local_14;
          }
          else if ((iVar8 < piVar20[1]) && ((piVar20[4] == 0 || (iVar8 < piVar20[3])))) {
            if (local_30 <= pSVar17->field_003C) {
              pvVar12 = Library::DKW::LIB::MemRealloc
                                  (pSVar17->field_0040,(local_30 * 0xb + 0x6e) * 4);
              pSVar17->field_0040 = pvVar12;
              local_30 = iVar22 + 10;
            }
            puVar18 = (byte *)((int)pSVar17->field_0040 + pSVar17->field_003C * 0x2c);
            *puVar18 = 0;
            puVar18[1] = *piVar20;
            puVar18[2] = (float)(int)*(short *)local_10 * _DAT_007904f8 * (float)_DAT_0079b168;
            puVar18[3] = (float)(int)local_10->field_0002 * _DAT_007904f8 * (float)_DAT_0079b168;
            local_8 = (AnonShape_00575CB0_0408A0C4 *)(int)local_10->field_0004;
            puVar18[4] = (float)(int)local_10->field_0004 * _DAT_00790504 * (float)_DAT_0079b168 +
                         (float)_DAT_0079b128;
            puVar18[5] = local_10->field_008A;
            *(short *)(puVar18 + 7) = (short)piVar20[5];
            puVar18[8] = *(undefined4 *)(piVar20[2] + local_10->field_0086 * 4);
            if (piVar20[4] == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = *(undefined4 *)(piVar20[4] + local_10->field_0086 * 4);
            }
            puVar18[9] = uVar16;
            puVar18[10] = local_10->field_0086;
            *(short *)((int)puVar18 + 0x1e) = (short)piVar20[6] + -0xe;
            iVar8 = ((int)*(short *)(puVar18[8] + 0x14) + (int)*(short *)(puVar18[8] + 0x10)) -
                    piVar20[6];
            if (iVar8 < 0xe) {
              puVar18[6] = 0;
            }
            else {
              local_24 = FUN_006db610(iVar8 * 0x10000,-g_sT3DSMAPContext_00807598->field_0108);
              lVar28 = Library::MSVCRT::__ftol();
              puVar18[6] = (int)lVar28;
            }
            pSVar17->field_003C = pSVar17->field_003C + 1;
            array = local_14;
          }
        }
        local_18 = local_18 + 1;
        local_10 = (AnonShape_00575CB0_065D0A66 *)&local_10[1].field_0002;
      } while (local_18 < (int)local_20);
    }
    if (0 < pSVar17->field_003C) {
      FUN_006accd0(pSVar17->field_0040,(undefined4 *)pSVar17->field_003C,0x2c,thunk_FUN_00575c80);
      pSVar6 = g_sT3DSMAPContext_00807598;
      iVar8 = pSVar17->field_003C;
      g_sT3DSMAPContext_00807598->field_0290 = pSVar17->field_0040;
      pSVar6->field_028C = iVar8;
    }
    DArrayDestroy(array);
  }
  else if (SVar3 == MESS_SHARED_0003) {
    if (g_sT3DSMAPContext_00807598 != nullptr) {
      iVar8 = 0;
      if (0 < pSVar17->field_0044) {
        iVar22 = 0;
        do {
          Library::Ourlib::ST3DSMAP::SprClose
                    (g_sT3DSMAPContext_00807598,
                     (int)*(short *)(iVar22 + 0x10 + (int)pSVar17->field_0048));
          iVar8 = iVar8 + 1;
          iVar22 = iVar22 + 0x14;
        } while (iVar8 < pSVar17->field_0044);
      }
      iVar8 = pSVar17->field_0030 + -1;
      pSVar17->field_0030 = iVar8;
      while (-1 < iVar8) {
        FreeAndNull((void **)((int)pSVar17->field_0038 + iVar8 * 8));
        FreeAndNull((void **)((int)pSVar17->field_0038 + pSVar17->field_0030 * 8 + 4));
        iVar8 = pSVar17->field_0030 + -1;
        pSVar17->field_0030 = iVar8;
      }
      FreeAndNull(&pSVar17->field_0038);
      pSVar17->field_0034 = 0;
      pSVar17->field_0030 = 0;
      pSVar6 = g_sT3DSMAPContext_00807598;
      g_sT3DSMAPContext_00807598->field_0290 = 0;
      pSVar6->field_028C = 0;
      FreeAndNull(&pSVar17->field_0040);
      FreeAndNull(&pSVar17->field_0048);
      pSVar17->field_003C = 0;
      pSVar17->field_0044 = 0;
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
  }
  else if ((SVar3 == MESS_SHARED_010F) &&
          (iVar8 = pSVar17->field_003C + pSVar17->field_0044, 0 < iVar8)) {
    local_20 = (AnonShape_0060EA30_DCEB68AD *)(iVar8 * 0x92 + 0x18);
    local_1c = Library::DKW::LIB::MemAllocClear((uint)local_20);
    puVar18 = (byte *)&pSVar17->field_0x1c;
    pbVar10 = local_1c;
    memmove(pbVar10, puVar18, 0x14); /* compiler REP MOVS byte copy */
    local_18 = 0;
    local_1c[0xc] = 2;
    local_1c[0xd] = 0;
    local_1c[0xe] = 0;
    local_1c[0xf] = 0;
    *(int *)(local_1c + 0x14) = pSVar17->field_003C + pSVar17->field_0044;
    local_10 = (AnonShape_00575CB0_065D0A66 *)(local_1c + 0x18);
    if (0 < pSVar17->field_0044) {
      local_14 = nullptr;
      do {
        pAVar19 = (AnonShape_00575CB0_0408A0C4 *)((int)&local_14->flags + (int)pSVar17->field_0048);
        local_8 = pAVar19;
        lVar28 = Library::MSVCRT::__ftol();
        pAVar5 = local_10;
        *(short *)local_10 = (short)lVar28;
        lVar28 = Library::MSVCRT::__ftol();
        pAVar5->field_0002 = (short)lVar28;
        lVar28 = Library::MSVCRT::__ftol();
        pAVar5->field_0004 = (short)lVar28;
        pAVar5->field_008A = 0;
        uVar14 = 0xffffffff;
        pcVar13 = *(char **)((int)pSVar17->field_0038 + *(int *)pAVar19 * 8);
        do {
          pcVar21 = pcVar13;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar21 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar21;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar13 = pcVar21 + -uVar14;
        pcVar21 = &pAVar5->field_0x6;
        memmove(pcVar21, pcVar13, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        puVar26 = &local_10->field_0x46;
        pAVar5 = local_10 + 1;
        uVar14 = 0xffffffff;
        pcVar13 = *(char **)((int)pSVar17->field_0038 + *(int *)local_8 * 8 + 4);
        do {
          pcVar21 = pcVar13;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar21 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar21;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar13 = pcVar21 + -uVar14;
        pcVar21 = puVar26;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar21 = pcVar21 + 4;
        }
        local_18 = local_18 + 1;
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar21 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar21 = pcVar21 + 1;
        }
        local_10->field_0086 = 0xffffffff;
        *(undefined4 *)&local_10->field_0x8e = 0;
        local_14 = (DArrayTy *)&local_14->growCapacity;
        local_10 = (AnonShape_00575CB0_065D0A66 *)&pAVar5->field_0002;
        local_8 = (AnonShape_00575CB0_0408A0C4 *)puVar26;
      } while (local_18 < pSVar17->field_0044);
    }
    local_18 = 0;
    if (0 < pSVar17->field_003C) {
      local_14 = nullptr;
      do {
        iVar8 = (int)pSVar17->field_0040 + (int)local_14;
        local_38 = iVar8;
        lVar28 = Library::MSVCRT::__ftol();
        pAVar5 = local_10;
        *(short *)local_10 = (short)lVar28;
        lVar28 = Library::MSVCRT::__ftol();
        pAVar5->field_0002 = (short)lVar28;
        lVar28 = Library::MSVCRT::__ftol();
        pAVar5->field_0004 = (short)lVar28;
        pAVar5->field_008A = *(undefined4 *)(iVar8 + 0x14);
        uVar14 = 0xffffffff;
        pcVar13 = *(char **)((int)pSVar17->field_0038 + *(int *)(iVar8 + 4) * 8);
        do {
          pcVar21 = pcVar13;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar21 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar21;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar13 = pcVar21 + -uVar14;
        pcVar21 = &pAVar5->field_0x6;
        memmove(pcVar21, pcVar13, uVar14); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        local_8 = (AnonShape_00575CB0_0408A0C4 *)&local_10->field_0x46;
        pAVar5 = local_10 + 1;
        uVar14 = 0xffffffff;
        pcVar13 = *(char **)((int)pSVar17->field_0038 + *(int *)(local_38 + 4) * 8 + 4);
        do {
          pcVar21 = pcVar13;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar21 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar21;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar13 = pcVar21 + -uVar14;
        pcVar21 = (char *)local_8;
        memmove(pcVar21, pcVar13, uVar14); /* compiler REP MOVS byte copy */
        local_14 = (DArrayTy *)&local_14[1].count;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_10->field_0086 = *(undefined4 *)(local_38 + 0x28);
        *(undefined4 *)&local_10->field_0x8e = 0;
        local_18 = local_18 + 1;
        local_10 = (AnonShape_00575CB0_065D0A66 *)&pAVar5->field_0002;
      } while (local_18 < pSVar17->field_003C);
    }
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,pSVar17->field_0018,local_1c,local_20);
    FreeAndNull(&local_1c);
    g_currentExceptionFrame = local_a4.previous;
    return 0;
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

