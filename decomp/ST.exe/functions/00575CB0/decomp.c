#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Object\To_alga.cpp
   STAlgaC::GetMessage */

int __thiscall STAlgaC::GetMessage(STAlgaC *this,AnonShape_00575CB0_4AFBDFBD *param_1)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  AnonShape_00575CB0_065D0A66 *pAVar5;
  AnonShape_GLOBAL_00807598_0C6808FB *pAVar6;
  int iVar7;
  int iVar8;
  BOOL BVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX;
  DArrayTy *array;
  byte *pbVar10;
  ushort *puVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  STAlgaC *pSVar16;
  undefined4 *puVar17;
  AnonShape_00575CB0_0408A0C4 *pAVar18;
  int *piVar19;
  char *pcVar20;
  int iVar21;
  undefined4 *puVar22;
  byte *pbVar23;
  AnonNested_00575CB0_0004_76DA00C1 *pAVar24;
  undefined1 *puVar25;
  bool bVar26;
  longlong lVar27;
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
  pSVar16 = local_2c;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar21 = ReportDebugMessage(s_E____titans_Object_To_alga_cpp_007cab24,0x196,0,iVar8,
                                &DAT_007a4ccc,s_STAlgaC__GetMessage_007cab0c);
    if (iVar21 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar8,0,s_E____titans_Object_To_alga_cpp_007cab24,0x197);
    return iVar8;
  }
  iVar8 = FUN_006e5fd0();
  if (iVar8 == 0xffff) {
    RaiseInternalException
              (-0x5001fff8,g_overwriteContext_007ED77C,s_E____titans_Object_To_alga_cpp_007cab24,
               0x47);
  }
  iVar8 = param_1->field_0010;
  if (iVar8 == 2) {
    pSVar16->field_0030 = 0;
    pSVar16->field_0034 = 0;
    pSVar16->field_0038 = 0;
    pSVar16->field_003C = 0;
    pSVar16->field_0044 = 0;
    pSVar16->field_0040 = 0;
    pSVar16->field_0048 = 0;
    local_30 = 0;
    local_28 = 0;
    puVar17 = (undefined4 *)param_1->field_0014;
    puVar22 = (undefined4 *)&pSVar16->field_0x1c;
    for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar22 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar22 = puVar22 + 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_20 = *(AnonShape_0060EA30_DCEB68AD **)(param_1->field_0014 + 0x14);
    local_10 = (AnonShape_00575CB0_065D0A66 *)(param_1->field_0014 + 0x18);
    BVar9 = IsBadReadPtr(local_10,(int)local_20 * 0x92);
    if (BVar9 != 0) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,s_E____titans_Object_To_alga_cpp_007cab24,0x66);
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
            uVar13 = local_14->iteratorIndex;
            if (uVar13 < local_14->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_14, uVar13) (runtime stride) */
              piVar19 = (int *)(local_14->elementSize * uVar13 + (int)local_14->data);
              local_14->iteratorIndex = uVar13 + 1;
            }
            else {
              piVar19 = (int *)0x0;
            }
            if (piVar19 == (int *)0x0) goto LAB_005761b9;
            pbVar23 = *(byte **)(pSVar16->field_0038 + *piVar19 * 8);
            local_8 = (AnonShape_00575CB0_0408A0C4 *)(pSVar16->field_0038 + *piVar19 * 8);
            pbVar10 = &local_10->field_0x6;
            do {
              bVar3 = *pbVar23;
              bVar26 = bVar3 < *pbVar10;
              if (bVar3 != *pbVar10) {
LAB_00576168:
                iVar8 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
                goto LAB_0057616d;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar23[1];
              bVar26 = bVar3 < pbVar10[1];
              if (bVar3 != pbVar10[1]) goto LAB_00576168;
              pbVar23 = pbVar23 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar3 != 0);
            iVar8 = 0;
LAB_0057616d:
          } while (iVar8 != 0);
          pAVar24 = local_8->field_0004;
          pbVar10 = &local_10->field_0x46;
          do {
            bVar3 = pAVar24->field_0000;
            bVar26 = bVar3 < *pbVar10;
            if (bVar3 != *pbVar10) {
LAB_005761a1:
              iVar8 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
              goto LAB_005761a6;
            }
            if (bVar3 == 0) break;
            bVar3 = pAVar24->field_0001;
            bVar26 = bVar3 < pbVar10[1];
            if (bVar3 != pbVar10[1]) goto LAB_005761a1;
            pAVar24 = (AnonNested_00575CB0_0004_76DA00C1 *)&pAVar24->field_0x2;
            pbVar10 = pbVar10 + 2;
          } while (bVar3 != 0);
          iVar8 = 0;
LAB_005761a6:
        } while (iVar8 != 0);
        array = local_14;
        if (piVar19 == (int *)0x0) {
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
                                 (undefined4 *)0x0);
            if (puVar11 == (ushort *)0x0) {
              RaiseInternalException
                        (-4,g_overwriteContext_007ED77C,s_E____titans_Object_To_alga_cpp_007cab24,
                         0x9a);
            }
            local_5c = *(undefined4 *)puVar11;
            puVar25 = &pAVar5->field_0x46;
            local_58 = *(undefined4 *)((int)puVar11 + 0x21);
            local_4c = 0x5a;
            local_48 = 0x4b;
            local_44 = *(undefined4 *)((int)puVar11 + 0x31);
            if (*puVar25 == '\0') {
              local_54 = 0;
              local_50 = 0;
            }
            else {
              puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                                  (DAT_00806764,CASE_1D,puVar25,0xffffffff,0,0,0,(undefined4 *)0x0);
              if (puVar11 == (ushort *)0x0) {
                RaiseInternalException
                          (-4,g_overwriteContext_007ED77C,s_E____titans_Object_To_alga_cpp_007cab24,
                           0xa3);
              }
              local_54 = *(undefined4 *)puVar11;
              local_50 = *(undefined4 *)((int)puVar11 + 0x21);
            }
            pSVar16 = local_2c;
            g_currentExceptionFrame = local_e8.previous;
            piVar19 = &local_60;
            local_60 = local_2c->field_0030;
            if ((int)local_2c->field_0034 <= local_60) {
              iVar8 = Library::DKW::LIB::FUN_006acf50
                                (local_2c->field_0038,local_2c->field_0034 * 8 + 0x50);
              pSVar16->field_0038 = iVar8;
              pSVar16->field_0034 = pSVar16->field_0034 + 10;
            }
            pcVar12 = FUN_006c49b0((char *)local_8);
            *(char **)(pSVar16->field_0038 + pSVar16->field_0030 * 8) = pcVar12;
            pcVar12 = FUN_006c49b0(puVar25);
            array = local_14;
            *(char **)(pSVar16->field_0038 + 4 + pSVar16->field_0030 * 8) = pcVar12;
            Library::DKW::TBL::FUN_006ae1c0(&local_14->flags,&local_60);
            pSVar16->field_0030 = pSVar16->field_0030 + 1;
            goto LAB_00576308;
          }
          g_currentExceptionFrame = local_e8.previous;
          pSVar16 = local_2c;
          array = local_14;
        }
        else {
LAB_00576308:
          iVar7 = local_28;
          iVar21 = local_30;
          iVar8 = local_10->field_0086;
          if (iVar8 < 0) {
            if (local_28 <= (int)pSVar16->field_0044) {
              iVar8 = Library::DKW::LIB::FUN_006acf50(pSVar16->field_0048,(local_28 * 5 + 0x32) * 4)
              ;
              pSVar16->field_0048 = iVar8;
              local_28 = iVar7 + 10;
            }
            piVar1 = (int *)(pSVar16->field_0048 + pSVar16->field_0044 * 0x14);
            *piVar1 = *piVar19;
            piVar1[1] = (int)((float)(int)*(short *)local_10 * _DAT_007904f8 * (float)_DAT_0079b168)
            ;
            piVar1[2] = (int)((float)(int)local_10->field_0002 * _DAT_007904f8 *
                             (float)_DAT_0079b168);
            local_8 = (AnonShape_00575CB0_0408A0C4 *)(int)local_10->field_0004;
            piVar1[3] = (int)((float)(int)local_10->field_0004 * _DAT_00790504 *
                              (float)_DAT_0079b168 + (float)_DAT_0079b158);
            *(short *)((int)piVar1 + 0x12) = (short)piVar19[7];
            uVar13 = Library::MSVCRT::FUN_0072e6c0();
            uVar14 = 0;
            local_34 = (int)uVar13 % piVar19[1];
            local_3c = *(AnonShape_00575CB0_C367735D **)piVar19[2];
            lVar27 = Library::MSVCRT::__ftol();
            FUN_006e8660(PTR_00807598,(int *)&local_c,(piVar19[4] != 0) + 1,0,local_3c->field_0004,
                         local_3c->field_0008,piVar19[5],piVar19[6] - (int)lVar27,uVar14);
            *(undefined2 *)(piVar1 + 4) = (undefined2)local_c;
            FUN_006e98e0(PTR_00807598,local_c,0,piVar19[1],piVar19[2],1);
            FUN_006e9ef0(PTR_00807598,local_c,0,1,(int)*(short *)((int)piVar1 + 0x12),0,30000);
            FUN_006ea270(PTR_00807598,local_c,0,local_34);
            if (piVar19[4] != 0) {
              FUN_006e98e0(PTR_00807598,local_c,1,piVar19[3],piVar19[4],1);
              FUN_006e9ef0(PTR_00807598,local_c,1,1,(int)*(short *)((int)piVar1 + 0x12),0,30000);
              FUN_006ea270(PTR_00807598,local_c,1,(int)local_34 % piVar19[3]);
              FUN_006ea680(PTR_00807598,local_c,DAT_008032c0);
              FUN_006ea6d0(PTR_00807598,local_c,1,1);
            }
            iVar8 = local_3c->field_0008 - piVar19[6];
            if (0xd < iVar8) {
              local_24 = FUN_006db610(iVar8 * 0x10000,-PTR_00807598->field_0108);
              FUN_006e9210(PTR_00807598,local_c);
            }
            FUN_006ea3e0(PTR_00807598,local_c,-1);
            FUN_006ea960(PTR_00807598,local_c,(float)piVar1[1],(float)piVar1[2],(float)piVar1[3]);
            FUN_006eaaa0(PTR_00807598,local_c,0);
            pSVar16->field_0044 = pSVar16->field_0044 + 1;
            array = local_14;
          }
          else if ((iVar8 < piVar19[1]) && ((piVar19[4] == 0 || (iVar8 < piVar19[3])))) {
            if (local_30 <= (int)pSVar16->field_003C) {
              iVar8 = Library::DKW::LIB::FUN_006acf50
                                (pSVar16->field_0040,(local_30 * 0xb + 0x6e) * 4);
              pSVar16->field_0040 = iVar8;
              local_30 = iVar21 + 10;
            }
            puVar17 = (undefined4 *)(pSVar16->field_0040 + pSVar16->field_003C * 0x2c);
            *puVar17 = 0;
            puVar17[1] = *piVar19;
            puVar17[2] = (float)(int)*(short *)local_10 * _DAT_007904f8 * (float)_DAT_0079b168;
            puVar17[3] = (float)(int)local_10->field_0002 * _DAT_007904f8 * (float)_DAT_0079b168;
            local_8 = (AnonShape_00575CB0_0408A0C4 *)(int)local_10->field_0004;
            puVar17[4] = (float)(int)local_10->field_0004 * _DAT_00790504 * (float)_DAT_0079b168 +
                         (float)_DAT_0079b128;
            puVar17[5] = local_10->field_008A;
            *(short *)(puVar17 + 7) = (short)piVar19[5];
            puVar17[8] = *(undefined4 *)(piVar19[2] + local_10->field_0086 * 4);
            if (piVar19[4] == 0) {
              uVar15 = 0;
            }
            else {
              uVar15 = *(undefined4 *)(piVar19[4] + local_10->field_0086 * 4);
            }
            puVar17[9] = uVar15;
            puVar17[10] = local_10->field_0086;
            *(short *)((int)puVar17 + 0x1e) = (short)piVar19[6] + -0xe;
            iVar8 = ((int)*(short *)(puVar17[8] + 0x14) + (int)*(short *)(puVar17[8] + 0x10)) -
                    piVar19[6];
            if (iVar8 < 0xe) {
              puVar17[6] = 0;
            }
            else {
              local_24 = FUN_006db610(iVar8 * 0x10000,-PTR_00807598->field_0108);
              lVar27 = Library::MSVCRT::__ftol();
              puVar17[6] = (int)lVar27;
            }
            pSVar16->field_003C = pSVar16->field_003C + 1;
            array = local_14;
          }
        }
        local_18 = local_18 + 1;
        local_10 = (AnonShape_00575CB0_065D0A66 *)&local_10[1].field_0002;
      } while (local_18 < (int)local_20);
    }
    if (0 < (int)pSVar16->field_003C) {
      FUN_006accd0((undefined4 *)pSVar16->field_0040,(undefined4 *)pSVar16->field_003C,0x2c,
                   &LAB_00403ac6);
      pAVar6 = PTR_00807598;
      uVar15 = pSVar16->field_003C;
      PTR_00807598->field_0290 = pSVar16->field_0040;
      *(undefined4 *)&pAVar6->field_0x28c = uVar15;
    }
    DArrayDestroy(array);
  }
  else if (iVar8 == 3) {
    if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
      iVar8 = 0;
      if (0 < (int)pSVar16->field_0044) {
        iVar21 = 0;
        do {
          FUN_006e8ba0(PTR_00807598,(int)*(short *)(iVar21 + 0x10 + pSVar16->field_0048));
          iVar8 = iVar8 + 1;
          iVar21 = iVar21 + 0x14;
        } while (iVar8 < (int)pSVar16->field_0044);
      }
      iVar8 = pSVar16->field_0030 + -1;
      pSVar16->field_0030 = iVar8;
      while (-1 < iVar8) {
        FreeAndNull((void **)(pSVar16->field_0038 + iVar8 * 8));
        FreeAndNull((void **)(pSVar16->field_0038 + 4 + pSVar16->field_0030 * 8));
        iVar8 = pSVar16->field_0030 + -1;
        pSVar16->field_0030 = iVar8;
      }
      FreeAndNull((void **)&pSVar16->field_0038);
      pSVar16->field_0034 = 0;
      pSVar16->field_0030 = 0;
      pAVar6 = PTR_00807598;
      PTR_00807598->field_0290 = 0;
      *(undefined4 *)&pAVar6->field_0x28c = 0;
      FreeAndNull((void **)&pSVar16->field_0040);
      FreeAndNull((void **)&pSVar16->field_0048);
      pSVar16->field_003C = 0;
      pSVar16->field_0044 = 0;
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
  }
  else if ((iVar8 == 0x10f) && (iVar8 = pSVar16->field_003C + pSVar16->field_0044, 0 < iVar8)) {
    local_20 = (AnonShape_0060EA30_DCEB68AD *)(iVar8 * 0x92 + 0x18);
    local_1c = (byte *)Library::DKW::LIB::FUN_006aac10((uint)local_20);
    puVar17 = (undefined4 *)&pSVar16->field_0x1c;
    pbVar10 = local_1c;
    for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pbVar10 = *puVar17;
      puVar17 = puVar17 + 1;
      pbVar10 = pbVar10 + 4;
    }
    local_18 = 0;
    local_1c[0xc] = 2;
    local_1c[0xd] = 0;
    local_1c[0xe] = 0;
    local_1c[0xf] = 0;
    *(undefined4 *)(local_1c + 0x14) = pSVar16->field_003C + pSVar16->field_0044;
    local_10 = (AnonShape_00575CB0_065D0A66 *)(local_1c + 0x18);
    if (0 < (int)pSVar16->field_0044) {
      local_14 = (DArrayTy *)0x0;
      do {
        pAVar18 = (AnonShape_00575CB0_0408A0C4 *)((int)&local_14->flags + pSVar16->field_0048);
        local_8 = pAVar18;
        lVar27 = Library::MSVCRT::__ftol();
        pAVar5 = local_10;
        *(short *)local_10 = (short)lVar27;
        lVar27 = Library::MSVCRT::__ftol();
        pAVar5->field_0002 = (short)lVar27;
        lVar27 = Library::MSVCRT::__ftol();
        pAVar5->field_0004 = (short)lVar27;
        pAVar5->field_008A = 0;
        uVar13 = 0xffffffff;
        pcVar12 = *(char **)(pSVar16->field_0038 + *(int *)pAVar18 * 8);
        do {
          pcVar20 = pcVar12;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar20 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar20;
        } while (cVar2 != '\0');
        uVar13 = ~uVar13;
        pcVar12 = pcVar20 + -uVar13;
        pcVar20 = &pAVar5->field_0x6;
        for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar20 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar20 = pcVar20 + 1;
        }
        puVar25 = &local_10->field_0x46;
        pAVar5 = local_10 + 1;
        uVar13 = 0xffffffff;
        pcVar12 = *(char **)(pSVar16->field_0038 + 4 + *(int *)local_8 * 8);
        do {
          pcVar20 = pcVar12;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar20 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar20;
        } while (cVar2 != '\0');
        uVar13 = ~uVar13;
        pcVar12 = pcVar20 + -uVar13;
        pcVar20 = puVar25;
        for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar20 = pcVar20 + 4;
        }
        local_18 = local_18 + 1;
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar20 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar20 = pcVar20 + 1;
        }
        local_10->field_0086 = 0xffffffff;
        *(undefined4 *)&local_10->field_0x8e = 0;
        local_14 = (DArrayTy *)&local_14->growCapacity;
        local_10 = (AnonShape_00575CB0_065D0A66 *)&pAVar5->field_0002;
        local_8 = (AnonShape_00575CB0_0408A0C4 *)puVar25;
      } while (local_18 < (int)pSVar16->field_0044);
    }
    local_18 = 0;
    if (0 < (int)pSVar16->field_003C) {
      local_14 = (DArrayTy *)0x0;
      do {
        iVar8 = (int)&local_14->flags + pSVar16->field_0040;
        local_38 = iVar8;
        lVar27 = Library::MSVCRT::__ftol();
        pAVar5 = local_10;
        *(short *)local_10 = (short)lVar27;
        lVar27 = Library::MSVCRT::__ftol();
        pAVar5->field_0002 = (short)lVar27;
        lVar27 = Library::MSVCRT::__ftol();
        pAVar5->field_0004 = (short)lVar27;
        pAVar5->field_008A = *(undefined4 *)(iVar8 + 0x14);
        uVar13 = 0xffffffff;
        pcVar12 = *(char **)(pSVar16->field_0038 + *(int *)(iVar8 + 4) * 8);
        do {
          pcVar20 = pcVar12;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar20 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar20;
        } while (cVar2 != '\0');
        uVar13 = ~uVar13;
        pcVar12 = pcVar20 + -uVar13;
        pcVar20 = &pAVar5->field_0x6;
        for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar20 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar20 = pcVar20 + 1;
        }
        local_8 = (AnonShape_00575CB0_0408A0C4 *)&local_10->field_0x46;
        pAVar5 = local_10 + 1;
        uVar13 = 0xffffffff;
        pcVar12 = *(char **)(pSVar16->field_0038 + 4 + *(int *)(local_38 + 4) * 8);
        do {
          pcVar20 = pcVar12;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar20 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar20;
        } while (cVar2 != '\0');
        uVar13 = ~uVar13;
        pcVar12 = pcVar20 + -uVar13;
        pcVar20 = (char *)local_8;
        for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar20 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar20 = pcVar20 + 1;
        }
        local_14 = (DArrayTy *)&local_14[1].count;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_10->field_0086 = *(undefined4 *)(local_38 + 0x28);
        *(undefined4 *)&local_10->field_0x8e = 0;
        local_18 = local_18 + 1;
        local_10 = (AnonShape_00575CB0_065D0A66 *)&pAVar5->field_0002;
      } while (local_18 < (int)pSVar16->field_003C);
    }
    STPlaySystemC::SaveObjData(PTR_00802a38,pSVar16->field_0018,local_1c,local_20);
    FreeAndNull(&local_1c);
    g_currentExceptionFrame = local_a4.previous;
    return 0;
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

