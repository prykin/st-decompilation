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
  int *piVar1;
  char cVar2;
  byte bVar3;
  STMessageId SVar4;
  code *pcVar5;
  AnonShape_00575CB0_065D0A66 *pAVar6;
  AnonShape_GLOBAL_00807598_0C6808FB *pAVar7;
  int iVar8;
  int iVar9;
  BOOL BVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX;
  DArrayTy *array;
  byte *pbVar11;
  ushort *puVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  STAlgaC *pSVar17;
  undefined4 *puVar18;
  AnonShape_00575CB0_0408A0C4 *pAVar19;
  int *piVar20;
  char *pcVar21;
  int iVar22;
  undefined4 *puVar23;
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
  iVar9 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
  pSVar17 = local_2c;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar22 = ReportDebugMessage("E:\\__titans\\Object\\To_alga.cpp",0x196,0,iVar9,
                                "%s","STAlgaC::GetMessage");
    if (iVar22 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar9,0,"E:\\__titans\\Object\\To_alga.cpp",0x197);
    return iVar9;
  }
  iVar9 = FUN_006e5fd0(local_2c,message);
  if (iVar9 == 0xffff) {
    RaiseInternalException
              (-0x5001fff8,g_overwriteContext_007ED77C,"E:\\__titans\\Object\\To_alga.cpp",
               0x47);
  }
  SVar4 = message->id;
  if (SVar4 == MESS_ID_CREATE) {
    pSVar17->field_0030 = 0;
    pSVar17->field_0034 = 0;
    pSVar17->field_0038 = 0;
    pSVar17->field_003C = 0;
    pSVar17->field_0044 = 0;
    pSVar17->field_0040 = 0;
    pSVar17->field_0048 = 0;
    local_30 = 0;
    local_28 = 0;
    puVar18 = (message->arg0).ptr;
    puVar23 = (undefined4 *)&pSVar17->field_0x1c;
    for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar23 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar23 = puVar23 + 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_20 = *(AnonShape_0060EA30_DCEB68AD **)((message->arg0).u32 + 0x14);
    local_10 = (AnonShape_00575CB0_065D0A66 *)((message->arg0).u32 + 0x18);
    BVar10 = IsBadReadPtr(local_10,(int)local_20 * 0x92);
    if (BVar10 != 0) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\Object\\To_alga.cpp",0x66);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      return extraout_EAX;
    }
    array = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x24,10);
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
              piVar20 = (int *)0x0;
            }
            if (piVar20 == (int *)0x0) goto LAB_005761b9;
            pbVar24 = *(byte **)(pSVar17->field_0038 + *piVar20 * 8);
            local_8 = (AnonShape_00575CB0_0408A0C4 *)(pSVar17->field_0038 + *piVar20 * 8);
            pbVar11 = &local_10->field_0x6;
            do {
              bVar3 = *pbVar24;
              bVar27 = bVar3 < *pbVar11;
              if (bVar3 != *pbVar11) {
LAB_00576168:
                iVar9 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                goto LAB_0057616d;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar24[1];
              bVar27 = bVar3 < pbVar11[1];
              if (bVar3 != pbVar11[1]) goto LAB_00576168;
              pbVar24 = pbVar24 + 2;
              pbVar11 = pbVar11 + 2;
            } while (bVar3 != 0);
            iVar9 = 0;
LAB_0057616d:
          } while (iVar9 != 0);
          pAVar25 = local_8->field_0004;
          pbVar11 = &local_10->field_0x46;
          do {
            bVar3 = pAVar25->field_0000;
            bVar27 = bVar3 < *pbVar11;
            if (bVar3 != *pbVar11) {
LAB_005761a1:
              iVar9 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
              goto LAB_005761a6;
            }
            if (bVar3 == 0) break;
            bVar3 = pAVar25->field_0001;
            bVar27 = bVar3 < pbVar11[1];
            if (bVar3 != pbVar11[1]) goto LAB_005761a1;
            pAVar25 = (AnonNested_00575CB0_0004_76DA00C1 *)&pAVar25->field_0x2;
            pbVar11 = pbVar11 + 2;
          } while (bVar3 != 0);
          iVar9 = 0;
LAB_005761a6:
        } while (iVar9 != 0);
        array = local_14;
        if (piVar20 == (int *)0x0) {
LAB_005761b9:
          local_e8.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_e8;
          iVar9 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0);
          pAVar6 = local_10;
          if (iVar9 == 0) {
            local_8 = (AnonShape_00575CB0_0408A0C4 *)&local_10->field_0x6;
            local_58 = 0;
            puVar12 = Library::Ourlib::MFRLOAD::mfRLoad
                                (DAT_00806764,CASE_1D,(char *)local_8,0xffffffff,0,0,0,
                                 (undefined4 *)0x0);
            if (puVar12 == (ushort *)0x0) {
              RaiseInternalException
                        (-4,g_overwriteContext_007ED77C,"E:\\__titans\\Object\\To_alga.cpp",
                         0x9a);
            }
            local_5c = *(undefined4 *)puVar12;
            puVar26 = &pAVar6->field_0x46;
            local_58 = *(undefined4 *)((int)puVar12 + 0x21);
            local_4c = 0x5a;
            local_48 = 0x4b;
            local_44 = *(undefined4 *)((int)puVar12 + 0x31);
            if (*puVar26 == '\0') {
              local_54 = 0;
              local_50 = 0;
            }
            else {
              puVar12 = Library::Ourlib::MFRLOAD::mfRLoad
                                  (DAT_00806764,CASE_1D,puVar26,0xffffffff,0,0,0,(undefined4 *)0x0);
              if (puVar12 == (ushort *)0x0) {
                RaiseInternalException
                          (-4,g_overwriteContext_007ED77C,"E:\\__titans\\Object\\To_alga.cpp",
                           0xa3);
              }
              local_54 = *(undefined4 *)puVar12;
              local_50 = *(undefined4 *)((int)puVar12 + 0x21);
            }
            pSVar17 = local_2c;
            g_currentExceptionFrame = local_e8.previous;
            piVar20 = &local_60;
            local_60 = local_2c->field_0030;
            if ((int)local_2c->field_0034 <= local_60) {
              uVar14 = Library::DKW::LIB::FUN_006acf50
                                 (local_2c->field_0038,local_2c->field_0034 * 8 + 0x50);
              pSVar17->field_0038 = uVar14;
              pSVar17->field_0034 = pSVar17->field_0034 + 10;
            }
            pcVar13 = FUN_006c49b0((char *)local_8);
            *(char **)(pSVar17->field_0038 + pSVar17->field_0030 * 8) = pcVar13;
            pcVar13 = FUN_006c49b0(puVar26);
            array = local_14;
            *(char **)(pSVar17->field_0038 + 4 + pSVar17->field_0030 * 8) = pcVar13;
            Library::DKW::TBL::FUN_006ae1c0(&local_14->flags,&local_60);
            pSVar17->field_0030 = pSVar17->field_0030 + 1;
            goto LAB_00576308;
          }
          g_currentExceptionFrame = local_e8.previous;
          pSVar17 = local_2c;
          array = local_14;
        }
        else {
LAB_00576308:
          iVar8 = local_28;
          iVar22 = local_30;
          iVar9 = local_10->field_0086;
          if (iVar9 < 0) {
            if (local_28 <= pSVar17->field_0044) {
              iVar9 = Library::DKW::LIB::FUN_006acf50(pSVar17->field_0048,(local_28 * 5 + 0x32) * 4)
              ;
              pSVar17->field_0048 = iVar9;
              local_28 = iVar8 + 10;
            }
            piVar1 = (int *)(pSVar17->field_0048 + pSVar17->field_0044 * 0x14);
            *piVar1 = *piVar20;
            piVar1[1] = (int)((float)(int)*(short *)local_10 * _DAT_007904f8 * (float)_DAT_0079b168)
            ;
            piVar1[2] = (int)((float)(int)local_10->field_0002 * _DAT_007904f8 *
                             (float)_DAT_0079b168);
            local_8 = (AnonShape_00575CB0_0408A0C4 *)(int)local_10->field_0004;
            piVar1[3] = (int)((float)(int)local_10->field_0004 * _DAT_00790504 *
                              (float)_DAT_0079b168 + (float)_DAT_0079b158);
            *(short *)((int)piVar1 + 0x12) = (short)piVar20[7];
            uVar14 = Library::MSVCRT::FUN_0072e6c0();
            uVar15 = 0;
            local_34 = (int)uVar14 % piVar20[1];
            local_3c = *(AnonShape_00575CB0_C367735D **)piVar20[2];
            lVar28 = Library::MSVCRT::__ftol();
            FUN_006e8660(PTR_00807598,(int *)&local_c,(piVar20[4] != 0) + 1,0,local_3c->field_0004,
                         local_3c->field_0008,piVar20[5],piVar20[6] - (int)lVar28,uVar15);
            *(undefined2 *)(piVar1 + 4) = (undefined2)local_c;
            FUN_006e98e0(PTR_00807598,local_c,0,piVar20[1],piVar20[2],1);
            FUN_006e9ef0(PTR_00807598,local_c,0,1,(int)*(short *)((int)piVar1 + 0x12),0,30000);
            FUN_006ea270(PTR_00807598,local_c,0,local_34);
            if (piVar20[4] != 0) {
              FUN_006e98e0(PTR_00807598,local_c,1,piVar20[3],piVar20[4],1);
              FUN_006e9ef0(PTR_00807598,local_c,1,1,(int)*(short *)((int)piVar1 + 0x12),0,30000);
              FUN_006ea270(PTR_00807598,local_c,1,(int)local_34 % piVar20[3]);
              FUN_006ea680(PTR_00807598,local_c,DAT_008032c0);
              FUN_006ea6d0(PTR_00807598,local_c,1,1);
            }
            iVar9 = local_3c->field_0008 - piVar20[6];
            if (0xd < iVar9) {
              local_24 = FUN_006db610(iVar9 * 0x10000,-PTR_00807598->field_0108);
              FUN_006e9210(PTR_00807598,local_c);
            }
            FUN_006ea3e0(PTR_00807598,local_c,-1);
            FUN_006ea960(PTR_00807598,local_c,(float)piVar1[1],(float)piVar1[2],(float)piVar1[3]);
            FUN_006eaaa0(PTR_00807598,local_c,0);
            pSVar17->field_0044 = pSVar17->field_0044 + 1;
            array = local_14;
          }
          else if ((iVar9 < piVar20[1]) && ((piVar20[4] == 0 || (iVar9 < piVar20[3])))) {
            if (local_30 <= pSVar17->field_003C) {
              iVar9 = Library::DKW::LIB::FUN_006acf50
                                (pSVar17->field_0040,(local_30 * 0xb + 0x6e) * 4);
              pSVar17->field_0040 = iVar9;
              local_30 = iVar22 + 10;
            }
            puVar18 = (undefined4 *)(pSVar17->field_0040 + pSVar17->field_003C * 0x2c);
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
            iVar9 = ((int)*(short *)(puVar18[8] + 0x14) + (int)*(short *)(puVar18[8] + 0x10)) -
                    piVar20[6];
            if (iVar9 < 0xe) {
              puVar18[6] = 0;
            }
            else {
              local_24 = FUN_006db610(iVar9 * 0x10000,-PTR_00807598->field_0108);
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
      FUN_006accd0((undefined4 *)pSVar17->field_0040,(undefined4 *)pSVar17->field_003C,0x2c,
                   &LAB_00403ac6);
      pAVar7 = PTR_00807598;
      iVar9 = pSVar17->field_003C;
      PTR_00807598->field_0290 = pSVar17->field_0040;
      *(int *)&pAVar7->field_0x28c = iVar9;
    }
    DArrayDestroy(array);
  }
  else if (SVar4 == MESS_SHARED_0003) {
    if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
      iVar9 = 0;
      if (0 < pSVar17->field_0044) {
        iVar22 = 0;
        do {
          FUN_006e8ba0(PTR_00807598,(int)*(short *)(iVar22 + 0x10 + pSVar17->field_0048));
          iVar9 = iVar9 + 1;
          iVar22 = iVar22 + 0x14;
        } while (iVar9 < pSVar17->field_0044);
      }
      iVar9 = pSVar17->field_0030 + -1;
      pSVar17->field_0030 = iVar9;
      while (-1 < iVar9) {
        FreeAndNull((void **)(pSVar17->field_0038 + iVar9 * 8));
        FreeAndNull((void **)(pSVar17->field_0038 + 4 + pSVar17->field_0030 * 8));
        iVar9 = pSVar17->field_0030 + -1;
        pSVar17->field_0030 = iVar9;
      }
      FreeAndNull((void **)&pSVar17->field_0038);
      pSVar17->field_0034 = 0;
      pSVar17->field_0030 = 0;
      pAVar7 = PTR_00807598;
      PTR_00807598->field_0290 = 0;
      *(undefined4 *)&pAVar7->field_0x28c = 0;
      FreeAndNull((void **)&pSVar17->field_0040);
      FreeAndNull((void **)&pSVar17->field_0048);
      pSVar17->field_003C = 0;
      pSVar17->field_0044 = 0;
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
  }
  else if ((SVar4 == MESS_SHARED_010F) &&
          (iVar9 = pSVar17->field_003C + pSVar17->field_0044, 0 < iVar9)) {
    local_20 = (AnonShape_0060EA30_DCEB68AD *)(iVar9 * 0x92 + 0x18);
    local_1c = (byte *)Library::DKW::LIB::FUN_006aac10((uint)local_20);
    puVar18 = (undefined4 *)&pSVar17->field_0x1c;
    pbVar11 = local_1c;
    for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined4 *)pbVar11 = *puVar18;
      puVar18 = puVar18 + 1;
      pbVar11 = pbVar11 + 4;
    }
    local_18 = 0;
    local_1c[0xc] = 2;
    local_1c[0xd] = 0;
    local_1c[0xe] = 0;
    local_1c[0xf] = 0;
    *(int *)(local_1c + 0x14) = pSVar17->field_003C + pSVar17->field_0044;
    local_10 = (AnonShape_00575CB0_065D0A66 *)(local_1c + 0x18);
    if (0 < pSVar17->field_0044) {
      local_14 = (DArrayTy *)0x0;
      do {
        pAVar19 = (AnonShape_00575CB0_0408A0C4 *)((int)&local_14->flags + pSVar17->field_0048);
        local_8 = pAVar19;
        lVar28 = Library::MSVCRT::__ftol();
        pAVar6 = local_10;
        *(short *)local_10 = (short)lVar28;
        lVar28 = Library::MSVCRT::__ftol();
        pAVar6->field_0002 = (short)lVar28;
        lVar28 = Library::MSVCRT::__ftol();
        pAVar6->field_0004 = (short)lVar28;
        pAVar6->field_008A = 0;
        uVar14 = 0xffffffff;
        pcVar13 = *(char **)(pSVar17->field_0038 + *(int *)pAVar19 * 8);
        do {
          pcVar21 = pcVar13;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar21 = pcVar13 + 1;
          cVar2 = *pcVar13;
          pcVar13 = pcVar21;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        pcVar13 = pcVar21 + -uVar14;
        pcVar21 = &pAVar6->field_0x6;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar21 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar21 = pcVar21 + 1;
        }
        puVar26 = &local_10->field_0x46;
        pAVar6 = local_10 + 1;
        uVar14 = 0xffffffff;
        pcVar13 = *(char **)(pSVar17->field_0038 + 4 + *(int *)local_8 * 8);
        do {
          pcVar21 = pcVar13;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar21 = pcVar13 + 1;
          cVar2 = *pcVar13;
          pcVar13 = pcVar21;
        } while (cVar2 != '\0');
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
        local_10 = (AnonShape_00575CB0_065D0A66 *)&pAVar6->field_0002;
        local_8 = (AnonShape_00575CB0_0408A0C4 *)puVar26;
      } while (local_18 < pSVar17->field_0044);
    }
    local_18 = 0;
    if (0 < pSVar17->field_003C) {
      local_14 = (DArrayTy *)0x0;
      do {
        iVar9 = (int)&local_14->flags + pSVar17->field_0040;
        local_38 = iVar9;
        lVar28 = Library::MSVCRT::__ftol();
        pAVar6 = local_10;
        *(short *)local_10 = (short)lVar28;
        lVar28 = Library::MSVCRT::__ftol();
        pAVar6->field_0002 = (short)lVar28;
        lVar28 = Library::MSVCRT::__ftol();
        pAVar6->field_0004 = (short)lVar28;
        pAVar6->field_008A = *(undefined4 *)(iVar9 + 0x14);
        uVar14 = 0xffffffff;
        pcVar13 = *(char **)(pSVar17->field_0038 + *(int *)(iVar9 + 4) * 8);
        do {
          pcVar21 = pcVar13;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar21 = pcVar13 + 1;
          cVar2 = *pcVar13;
          pcVar13 = pcVar21;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        pcVar13 = pcVar21 + -uVar14;
        pcVar21 = &pAVar6->field_0x6;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar21 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar21 = pcVar21 + 1;
        }
        local_8 = (AnonShape_00575CB0_0408A0C4 *)&local_10->field_0x46;
        pAVar6 = local_10 + 1;
        uVar14 = 0xffffffff;
        pcVar13 = *(char **)(pSVar17->field_0038 + 4 + *(int *)(local_38 + 4) * 8);
        do {
          pcVar21 = pcVar13;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar21 = pcVar13 + 1;
          cVar2 = *pcVar13;
          pcVar13 = pcVar21;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        pcVar13 = pcVar21 + -uVar14;
        pcVar21 = (char *)local_8;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar21 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar21 = pcVar21 + 1;
        }
        local_14 = (DArrayTy *)&local_14[1].count;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_10->field_0086 = *(undefined4 *)(local_38 + 0x28);
        *(undefined4 *)&local_10->field_0x8e = 0;
        local_18 = local_18 + 1;
        local_10 = (AnonShape_00575CB0_065D0A66 *)&pAVar6->field_0002;
      } while (local_18 < pSVar17->field_003C);
    }
    STPlaySystemC::SaveObjData(PTR_00802a38,pSVar17->field_0018,local_1c,local_20);
    FreeAndNull(&local_1c);
    g_currentExceptionFrame = local_a4.previous;
    return 0;
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

