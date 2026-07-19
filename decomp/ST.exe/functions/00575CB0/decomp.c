
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Object\To_alga.cpp
   STAlgaC::GetMessage */

int __thiscall STAlgaC::GetMessage(STAlgaC *this,int param_1)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  BOOL BVar8;
  int extraout_EAX;
  uint *puVar9;
  ushort *puVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  STAlgaC *pSVar17;
  undefined4 unaff_ESI;
  undefined4 *puVar18;
  int *piVar19;
  byte *pbVar20;
  void *unaff_EDI;
  byte *pbVar21;
  char *pcVar22;
  int iVar23;
  undefined4 *puVar24;
  bool bVar25;
  longlong lVar26;
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
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  STAlgaC *local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  byte *local_1c;
  int local_18;
  uint *local_14;
  byte *local_10;
  uint local_c;
  byte *local_8;
  
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  local_2c = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar17 = local_2c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar23 = ReportDebugMessage(s_E____titans_Object_To_alga_cpp_007cab24,0x196,0,iVar7,
                                &DAT_007a4ccc,s_STAlgaC__GetMessage_007cab0c);
    if (iVar23 != 0) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    RaiseInternalException(iVar7,0,s_E____titans_Object_To_alga_cpp_007cab24,0x197);
    return iVar7;
  }
  iVar7 = FUN_006e5fd0();
  if (iVar7 == 0xffff) {
    RaiseInternalException(-0x5001fff8,DAT_007ed77c,s_E____titans_Object_To_alga_cpp_007cab24,0x47);
  }
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 == 2) {
    pSVar17->field_0030 = 0;
    pSVar17->field_0034 = 0;
    pSVar17->field_0038 = 0;
    pSVar17->field_003C = 0;
    pSVar17->field_0044 = 0;
    pSVar17->field_0040 = 0;
    pSVar17->field_0048 = 0;
    local_30 = 0;
    local_28 = 0;
    puVar18 = *(undefined4 **)(param_1 + 0x14);
    puVar24 = (undefined4 *)&pSVar17->field_0x1c;
    for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar24 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar24 = puVar24 + 1;
    }
    local_20 = *(int *)(*(int *)(param_1 + 0x14) + 0x14);
    local_10 = (byte *)(*(int *)(param_1 + 0x14) + 0x18);
    BVar8 = IsBadReadPtr(local_10,local_20 * 0x92);
    if (BVar8 != 0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_Object_To_alga_cpp_007cab24,0x66);
      return extraout_EAX;
    }
    puVar9 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x24,10);
    local_14 = puVar9;
    local_18 = 0;
    if (0 < (int)local_20) {
      do {
        puVar9[1] = 0;
        do {
          do {
            uVar12 = local_14[1];
            if (uVar12 < local_14[3]) {
              piVar19 = (int *)(local_14[2] * uVar12 + local_14[7]);
              local_14[1] = uVar12 + 1;
            }
            else {
              piVar19 = (int *)0x0;
            }
            if (piVar19 == (int *)0x0) goto LAB_005761b9;
            pbVar15 = *(byte **)(pSVar17->field_0038 + *piVar19 * 8);
            local_8 = (byte *)(pSVar17->field_0038 + *piVar19 * 8);
            pbVar16 = (byte *)((int)local_10 + 6);
            do {
              bVar3 = *pbVar15;
              bVar25 = bVar3 < *pbVar16;
              if (bVar3 != *pbVar16) {
LAB_00576168:
                iVar7 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
                goto LAB_0057616d;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar15[1];
              bVar25 = bVar3 < pbVar16[1];
              if (bVar3 != pbVar16[1]) goto LAB_00576168;
              pbVar15 = pbVar15 + 2;
              pbVar16 = pbVar16 + 2;
            } while (bVar3 != 0);
            iVar7 = 0;
LAB_0057616d:
          } while (iVar7 != 0);
          pbVar15 = *(byte **)(local_8 + 4);
          pbVar16 = (byte *)((int)local_10 + 0x46);
          do {
            bVar3 = *pbVar15;
            bVar25 = bVar3 < *pbVar16;
            if (bVar3 != *pbVar16) {
LAB_005761a1:
              iVar7 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
              goto LAB_005761a6;
            }
            if (bVar3 == 0) break;
            bVar3 = pbVar15[1];
            bVar25 = bVar3 < pbVar16[1];
            if (bVar3 != pbVar16[1]) goto LAB_005761a1;
            pbVar15 = pbVar15 + 2;
            pbVar16 = pbVar16 + 2;
          } while (bVar3 != 0);
          iVar7 = 0;
LAB_005761a6:
        } while (iVar7 != 0);
        puVar9 = local_14;
        if (piVar19 == (int *)0x0) {
LAB_005761b9:
          local_e8.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_e8;
          iVar7 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0,unaff_EDI,unaff_ESI);
          pbVar16 = local_10;
          if (iVar7 == 0) {
            local_8 = (byte *)((int)local_10 + 6);
            local_58 = 0;
            puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                                (DAT_00806764,CASE_1D,local_8,0xffffffff,0,0,0,(undefined4 *)0x0);
            if (puVar10 == (ushort *)0x0) {
              RaiseInternalException(-4,DAT_007ed77c,s_E____titans_Object_To_alga_cpp_007cab24,0x9a)
              ;
            }
            local_5c = *(undefined4 *)puVar10;
            pbVar16 = (byte *)((int)pbVar16 + 0x46);
            local_58 = *(undefined4 *)((int)puVar10 + 0x21);
            local_4c = 0x5a;
            local_48 = 0x4b;
            local_44 = *(undefined4 *)((int)puVar10 + 0x31);
            if (*pbVar16 == 0) {
              local_54 = 0;
              local_50 = 0;
            }
            else {
              puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                                  (DAT_00806764,CASE_1D,pbVar16,0xffffffff,0,0,0,(undefined4 *)0x0);
              if (puVar10 == (ushort *)0x0) {
                RaiseInternalException
                          (-4,DAT_007ed77c,s_E____titans_Object_To_alga_cpp_007cab24,0xa3);
              }
              local_54 = *(undefined4 *)puVar10;
              local_50 = *(undefined4 *)((int)puVar10 + 0x21);
            }
            pSVar17 = local_2c;
            g_currentExceptionFrame = local_e8.previous;
            piVar19 = &local_60;
            local_60 = local_2c->field_0030;
            if ((int)local_2c->field_0034 <= local_60) {
              iVar7 = Library::DKW::LIB::FUN_006acf50
                                ((undefined4 *)local_2c->field_0038,local_2c->field_0034 * 8 + 0x50)
              ;
              pSVar17->field_0038 = iVar7;
              pSVar17->field_0034 = pSVar17->field_0034 + 10;
            }
            pcVar11 = FUN_006c49b0((char *)local_8);
            *(char **)(pSVar17->field_0038 + pSVar17->field_0030 * 8) = pcVar11;
            pcVar11 = FUN_006c49b0((char *)pbVar16);
            puVar9 = local_14;
            *(char **)(pSVar17->field_0038 + 4 + pSVar17->field_0030 * 8) = pcVar11;
            Library::DKW::TBL::FUN_006ae1c0(local_14,&local_60);
            pSVar17->field_0030 = pSVar17->field_0030 + 1;
            goto LAB_00576308;
          }
          g_currentExceptionFrame = local_e8.previous;
          pSVar17 = local_2c;
          puVar9 = local_14;
        }
        else {
LAB_00576308:
          iVar6 = local_28;
          iVar23 = local_30;
          iVar7 = *(int *)((int)local_10 + 0x86);
          if (iVar7 < 0) {
            if (local_28 <= (int)pSVar17->field_0044) {
              iVar7 = Library::DKW::LIB::FUN_006acf50
                                ((undefined4 *)pSVar17->field_0048,(local_28 * 5 + 0x32) * 4);
              pSVar17->field_0048 = iVar7;
              local_28 = iVar6 + 10;
            }
            piVar1 = (int *)(pSVar17->field_0048 + pSVar17->field_0044 * 0x14);
            *piVar1 = *piVar19;
            piVar1[1] = (int)((float)(int)*(short *)local_10 * _DAT_007904f8 * (float)_DAT_0079b168)
            ;
            piVar1[2] = (int)((float)(int)*(short *)((int)local_10 + 2) * _DAT_007904f8 *
                             (float)_DAT_0079b168);
            local_8 = (byte *)(int)*(short *)((int)local_10 + 4);
            piVar1[3] = (int)((float)(int)*(short *)((int)local_10 + 4) * _DAT_00790504 *
                              (float)_DAT_0079b168 + (float)_DAT_0079b158);
            *(short *)((int)piVar1 + 0x12) = (short)piVar19[7];
            uVar12 = Library::MSVCRT::FUN_0072e6c0();
            uVar13 = 0;
            local_34 = (int)uVar12 % piVar19[1];
            local_3c = *(int *)piVar19[2];
            lVar26 = Library::MSVCRT::__ftol();
            FUN_006e8660(DAT_00807598,(int *)&local_c,(piVar19[4] != 0) + 1,0,
                         *(uint *)(local_3c + 4),*(uint *)(local_3c + 8),piVar19[5],
                         piVar19[6] - (int)lVar26,uVar13);
            *(undefined2 *)(piVar1 + 4) = (undefined2)local_c;
            FUN_006e98e0(DAT_00807598,local_c,0,piVar19[1],piVar19[2],1);
            FUN_006e9ef0(DAT_00807598,local_c,0,1,(int)*(short *)((int)piVar1 + 0x12),0,30000);
            FUN_006ea270(DAT_00807598,local_c,0,local_34);
            if (piVar19[4] != 0) {
              FUN_006e98e0(DAT_00807598,local_c,1,piVar19[3],piVar19[4],1);
              FUN_006e9ef0(DAT_00807598,local_c,1,1,(int)*(short *)((int)piVar1 + 0x12),0,30000);
              FUN_006ea270(DAT_00807598,local_c,1,(int)local_34 % piVar19[3]);
              FUN_006ea680(DAT_00807598,local_c,DAT_008032c0);
              FUN_006ea6d0(DAT_00807598,local_c,1,1);
            }
            iVar7 = *(int *)(local_3c + 8) - piVar19[6];
            if (0xd < iVar7) {
              local_24 = FUN_006db610(iVar7 * 0x10000,-*(int *)((int)DAT_00807598 + 0x108));
              FUN_006e9210(DAT_00807598,local_c);
            }
            FUN_006ea3e0(DAT_00807598,local_c,-1);
            FUN_006ea960(DAT_00807598,local_c,(float)piVar1[1],(float)piVar1[2],(float)piVar1[3]);
            FUN_006eaaa0(DAT_00807598,local_c,0);
            pSVar17->field_0044 = pSVar17->field_0044 + 1;
            puVar9 = local_14;
          }
          else if ((iVar7 < piVar19[1]) && ((piVar19[4] == 0 || (iVar7 < piVar19[3])))) {
            if (local_30 <= (int)pSVar17->field_003C) {
              iVar7 = Library::DKW::LIB::FUN_006acf50
                                ((undefined4 *)pSVar17->field_0040,(local_30 * 0xb + 0x6e) * 4);
              pSVar17->field_0040 = iVar7;
              local_30 = iVar23 + 10;
            }
            puVar18 = (undefined4 *)(pSVar17->field_0040 + pSVar17->field_003C * 0x2c);
            *puVar18 = 0;
            puVar18[1] = *piVar19;
            puVar18[2] = (float)(int)*(short *)local_10 * _DAT_007904f8 * (float)_DAT_0079b168;
            puVar18[3] = (float)(int)*(short *)((int)local_10 + 2) * _DAT_007904f8 *
                         (float)_DAT_0079b168;
            local_8 = (byte *)(int)*(short *)((int)local_10 + 4);
            puVar18[4] = (float)(int)*(short *)((int)local_10 + 4) * _DAT_00790504 *
                         (float)_DAT_0079b168 + (float)_DAT_0079b128;
            puVar18[5] = *(undefined4 *)((int)local_10 + 0x8a);
            *(short *)(puVar18 + 7) = (short)piVar19[5];
            puVar18[8] = *(undefined4 *)(piVar19[2] + *(int *)((int)local_10 + 0x86) * 4);
            if (piVar19[4] == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = *(undefined4 *)(piVar19[4] + *(int *)((int)local_10 + 0x86) * 4);
            }
            puVar18[9] = uVar14;
            puVar18[10] = *(undefined4 *)((int)local_10 + 0x86);
            *(short *)((int)puVar18 + 0x1e) = (short)piVar19[6] + -0xe;
            iVar7 = ((int)*(short *)(puVar18[8] + 0x14) + (int)*(short *)(puVar18[8] + 0x10)) -
                    piVar19[6];
            if (iVar7 < 0xe) {
              puVar18[6] = 0;
            }
            else {
              local_24 = FUN_006db610(iVar7 * 0x10000,-*(int *)((int)DAT_00807598 + 0x108));
              lVar26 = Library::MSVCRT::__ftol();
              puVar18[6] = (int)lVar26;
            }
            pSVar17->field_003C = pSVar17->field_003C + 1;
            puVar9 = local_14;
          }
        }
        local_18 = local_18 + 1;
        local_10 = (byte *)((int)local_10 + 0x92);
      } while (local_18 < (int)local_20);
    }
    if (0 < (int)pSVar17->field_003C) {
      FUN_006accd0((undefined4 *)pSVar17->field_0040,(undefined4 *)pSVar17->field_003C,0x2c,
                   &LAB_00403ac6);
      pvVar5 = DAT_00807598;
      uVar14 = pSVar17->field_003C;
      *(undefined4 *)((int)DAT_00807598 + 0x290) = pSVar17->field_0040;
      *(undefined4 *)((int)pvVar5 + 0x28c) = uVar14;
    }
    FUN_006ae110((byte *)puVar9);
  }
  else if (iVar7 == 3) {
    if (DAT_00807598 != (void *)0x0) {
      iVar7 = 0;
      if (0 < (int)pSVar17->field_0044) {
        iVar23 = 0;
        do {
          FUN_006e8ba0(DAT_00807598,(int)*(short *)(iVar23 + 0x10 + pSVar17->field_0048));
          iVar7 = iVar7 + 1;
          iVar23 = iVar23 + 0x14;
        } while (iVar7 < (int)pSVar17->field_0044);
      }
      iVar7 = pSVar17->field_0030 + -1;
      pSVar17->field_0030 = iVar7;
      while (-1 < iVar7) {
        FUN_006ab060((undefined4 *)(pSVar17->field_0038 + iVar7 * 8));
        FUN_006ab060((undefined4 *)(pSVar17->field_0038 + 4 + pSVar17->field_0030 * 8));
        iVar7 = pSVar17->field_0030 + -1;
        pSVar17->field_0030 = iVar7;
      }
      FUN_006ab060(&pSVar17->field_0038);
      pSVar17->field_0034 = 0;
      pSVar17->field_0030 = 0;
      pvVar5 = DAT_00807598;
      *(undefined4 *)((int)DAT_00807598 + 0x290) = 0;
      *(undefined4 *)((int)pvVar5 + 0x28c) = 0;
      FUN_006ab060(&pSVar17->field_0040);
      FUN_006ab060(&pSVar17->field_0048);
      pSVar17->field_003C = 0;
      pSVar17->field_0044 = 0;
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
  }
  else if ((iVar7 == 0x10f) && (iVar7 = pSVar17->field_003C + pSVar17->field_0044, 0 < iVar7)) {
    local_20 = iVar7 * 0x92 + 0x18;
    local_1c = (byte *)Library::DKW::LIB::FUN_006aac10(local_20);
    puVar18 = (undefined4 *)&pSVar17->field_0x1c;
    pbVar16 = local_1c;
    for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pbVar16 = *puVar18;
      puVar18 = puVar18 + 1;
      pbVar16 = pbVar16 + 4;
    }
    local_18 = 0;
    local_1c[0xc] = 2;
    local_1c[0xd] = 0;
    local_1c[0xe] = 0;
    local_1c[0xf] = 0;
    *(undefined4 *)(local_1c + 0x14) = pSVar17->field_003C + pSVar17->field_0044;
    local_10 = local_1c + 0x18;
    if (0 < (int)pSVar17->field_0044) {
      local_14 = (uint *)0x0;
      do {
        piVar19 = (int *)((int)local_14 + pSVar17->field_0048);
        local_8 = (byte *)piVar19;
        lVar26 = Library::MSVCRT::__ftol();
        pbVar16 = local_10;
        *(short *)local_10 = (short)lVar26;
        lVar26 = Library::MSVCRT::__ftol();
        *(short *)(pbVar16 + 2) = (short)lVar26;
        lVar26 = Library::MSVCRT::__ftol();
        *(short *)(pbVar16 + 4) = (short)lVar26;
        pbVar16[0x8a] = 0;
        pbVar16[0x8b] = 0;
        pbVar16[0x8c] = 0;
        pbVar16[0x8d] = 0;
        uVar12 = 0xffffffff;
        pcVar11 = *(char **)(pSVar17->field_0038 + *piVar19 * 8);
        do {
          pcVar22 = pcVar11;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        pbVar15 = (byte *)(pcVar22 + -uVar12);
        pbVar16 = pbVar16 + 6;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pbVar16 = *(undefined4 *)pbVar15;
          pbVar15 = pbVar15 + 4;
          pbVar16 = pbVar16 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pbVar16 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          pbVar16 = pbVar16 + 1;
        }
        pbVar16 = local_10 + 0x46;
        pbVar15 = local_10 + 0x92;
        uVar12 = 0xffffffff;
        pcVar11 = *(char **)(pSVar17->field_0038 + 4 + *(int *)local_8 * 8);
        do {
          pcVar22 = pcVar11;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        pbVar20 = (byte *)(pcVar22 + -uVar12);
        pbVar21 = pbVar16;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pbVar21 = *(undefined4 *)pbVar20;
          pbVar20 = pbVar20 + 4;
          pbVar21 = pbVar21 + 4;
        }
        local_18 = local_18 + 1;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pbVar21 = *pbVar20;
          pbVar20 = pbVar20 + 1;
          pbVar21 = pbVar21 + 1;
        }
        local_10[0x86] = 0xff;
        local_10[0x87] = 0xff;
        local_10[0x88] = 0xff;
        local_10[0x89] = 0xff;
        local_10[0x8e] = 0;
        local_10[0x8f] = 0;
        local_10[0x90] = 0;
        local_10[0x91] = 0;
        local_14 = (uint *)((int)local_14 + 0x14);
        local_10 = pbVar15;
        local_8 = pbVar16;
      } while (local_18 < (int)pSVar17->field_0044);
    }
    local_18 = 0;
    if (0 < (int)pSVar17->field_003C) {
      local_14 = (uint *)0x0;
      do {
        iVar7 = pSVar17->field_0040 + (int)local_14;
        local_38 = iVar7;
        lVar26 = Library::MSVCRT::__ftol();
        pbVar16 = local_10;
        *(short *)local_10 = (short)lVar26;
        lVar26 = Library::MSVCRT::__ftol();
        *(short *)(pbVar16 + 2) = (short)lVar26;
        lVar26 = Library::MSVCRT::__ftol();
        *(short *)(pbVar16 + 4) = (short)lVar26;
        *(undefined4 *)(pbVar16 + 0x8a) = *(undefined4 *)(iVar7 + 0x14);
        uVar12 = 0xffffffff;
        pcVar11 = *(char **)(pSVar17->field_0038 + *(int *)(iVar7 + 4) * 8);
        do {
          pcVar22 = pcVar11;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        pbVar15 = (byte *)(pcVar22 + -uVar12);
        pbVar16 = pbVar16 + 6;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pbVar16 = *(undefined4 *)pbVar15;
          pbVar15 = pbVar15 + 4;
          pbVar16 = pbVar16 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pbVar16 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          pbVar16 = pbVar16 + 1;
        }
        local_8 = local_10 + 0x46;
        pbVar16 = local_10 + 0x92;
        uVar12 = 0xffffffff;
        pcVar11 = *(char **)(pSVar17->field_0038 + 4 + *(int *)(local_38 + 4) * 8);
        do {
          pcVar22 = pcVar11;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        pbVar15 = (byte *)(pcVar22 + -uVar12);
        pbVar20 = local_8;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pbVar20 = *(undefined4 *)pbVar15;
          pbVar15 = pbVar15 + 4;
          pbVar20 = pbVar20 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pbVar20 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          pbVar20 = pbVar20 + 1;
        }
        local_14 = (uint *)((int)local_14 + 0x2c);
        *(undefined4 *)(local_10 + 0x86) = *(undefined4 *)(local_38 + 0x28);
        local_10[0x8e] = 0;
        local_10[0x8f] = 0;
        local_10[0x90] = 0;
        local_10[0x91] = 0;
        local_18 = local_18 + 1;
        local_10 = pbVar16;
      } while (local_18 < (int)pSVar17->field_003C);
    }
    STPlaySystemC::SaveObjData(DAT_00802a38,pSVar17->field_0018,local_1c,local_20);
    FUN_006ab060(&local_1c);
    g_currentExceptionFrame = local_a4.previous;
    return 0;
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

