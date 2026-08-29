#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SaveAllPlData

   [STPrototypeApplier] Propagated return.
   Evidence: 00443F30 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00431261 */

byte * __thiscall STAllPlayersC::SaveAllPlData(STAllPlayersC *this,int *param_1)

{
  int iVar2;
  byte *pbVar2;
  dword *pdVar3;
  int iVar7;
  char *pcVar4;
  dword *pdVar5;
  DArrayOf_STGameObjCPtr **ppDVar7;
  byte *pbVar8;
  int iVar9;
  int *piVar10;
  dword *pdVar11;
  byte *puVar12;
  DArrayTy *pDVar13;
  AnonShape_00443F30_5DF553AC *pAVar14;
  uint *puVar15;
  uint uVar16;
  byte *puVar17;
  uint pAVar18;
  byte *pbVar19;
  InternalExceptionFrame local_88;
  STAllPlayersC *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint local_34;
  int *local_30;
  byte *local_2c;
  uint local_28;
  AnonShape_00443F30_5DF553AC *local_24;
  DArrayTy *local_20;
  DArrayTy *local_1c;
  DArrayTy *local_18;
  AnonShape_00443F30_5DF553AC *local_14;
  AnonShape_00443F30_9F0248D4 *local_10;
  byte *local_c;
  AnonNested_00443F30_0839_FB957E77 *local_8;
  byte *pbVar4;

  local_34 = 0x4;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_44 = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  if (iVar2 == 0) {
    iVar9 = 0x5590;
    local_14 = (AnonShape_00443F30_5DF553AC *)&g_packedRecords_A62x8[0].field155_0x1bd;
    local_28 = 0x5590;
    do {
      if (0 < (int)local_34) {
        local_10 = local_34;
        puVar12 = (byte *)&local_14[-1].field_0x68f;
        do {
          if ((uint *)*puVar12 != nullptr) {

            local_c = FUN_006b0020((uint *)*puVar12,(int *)&local_8);
            FreeAndNull(&local_c);
            iVar9 = (int)&(local_8->field_0000).flags + iVar9;
            local_28 = iVar9;
          }
          puVar12 = (byte *)(puVar12 + 1);
          local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        } while (local_10 != nullptr);
      }
      local_10 = (AnonShape_00443F30_9F0248D4 *)0x5;
      pAVar14 = local_14;
      do {
        if (*(uint **)&pAVar14[-1].field_0x7ed != nullptr) {

          local_c = FUN_006b0020(*(uint **)&pAVar14[-1].field_0x7ed,(int *)&local_8);
          FreeAndNull(&local_c);
          iVar9 = (int)&(local_8->field_0000).flags + iVar9;
          local_28 = iVar9;
        }
        if (*(uint **)pAVar14 != nullptr) {

          local_c = FUN_006b0020(*(uint **)pAVar14,(int *)&local_8);
          FreeAndNull(&local_c);
          iVar9 = (int)&(local_8->field_0000).flags + iVar9;
          local_28 = iVar9;
        }
        pAVar14 = (AnonShape_00443F30_5DF553AC *)&pAVar14->field_0x10;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
      } while (local_10 != nullptr);
      local_10 = (AnonShape_00443F30_9F0248D4 *)0xa;
      puVar12 = (byte *)&local_14->field_0x54;
      do {
        if ((uint *)*puVar12 != nullptr) {

          local_c = FUN_006b0020((uint *)*puVar12,(int *)&local_8);
          FreeAndNull(&local_c);
          iVar9 = (int)&(local_8->field_0000).flags + iVar9;
          local_28 = iVar9;
        }
        puVar12 = (byte *)(puVar12 + 4);
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
      } while (local_10 != nullptr);
      local_10 = (AnonShape_00443F30_9F0248D4 *)0x6;
      puVar15 = (uint *)&local_14->field_0x631;
      do {

        local_c = FUN_006b0020(puVar15,(int *)&local_8);
        FreeAndNull(&local_c);
        iVar9 = (int)&(local_8->field_0000).flags + iVar9;
        puVar15 = puVar15 + 0x11;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        local_28 = iVar9;
      } while (local_10 != nullptr);
      local_20 = &local_14->field_0839->field_0000;
      local_10 = nullptr;
      if (((AnonNested_00443F30_0839_FB957E77 *)local_20 != nullptr
          ) && (local_24 = (AnonShape_00443F30_5DF553AC *)
                           (((AnonNested_00443F30_0839_FB957E77 *)local_20)->field_0000).count,
               local_24 != nullptr)) {
        uVar16 = 0;
        iVar9 = iVar9 + (int)local_24 * 0x18;
        local_28 = iVar9;
        if (0 < (int)local_24) {
          do {

            DArrayGetElement(local_20,uVar16,&local_40);
            if (local_40 != nullptr) {

              local_c = FUN_006b0020(local_40,(int *)&local_8);
              FreeAndNull(&local_c);
              iVar9 = (int)&(local_8->field_0000).flags + iVar9;
              local_28 = iVar9;
            }
            if (local_3c != nullptr) {

              local_c = FUN_006b0020(local_3c,(int *)&local_8);
              FreeAndNull(&local_c);
              iVar9 = (int)&(local_8->field_0000).flags + iVar9;
              local_28 = iVar9;
            }
            if (local_38 != nullptr) {

              local_c = FUN_006b0020(local_38,(int *)&local_8);
              FreeAndNull(&local_c);
              iVar9 = (int)&(local_8->field_0000).flags + iVar9;
              local_28 = iVar9;
            }
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < (int)local_24);
        }
      }
      local_14 = (AnonShape_00443F30_5DF553AC *)&local_14[1].field_0x225;
    } while ((int)local_14 < 0x7fa2ed);
    local_28 = iVar9 + g_worldGrid.planeStride;

    pbVar2 = Library::DKW::LIB::MemAlloc(local_28);
    pdVar3 = (dword *)(pbVar2 + 8);
    *(undefined4 *)pbVar2 = local_44->field_001C;
    ppDVar7 = &g_packedRecords_A62x8[0].field3_0x9;
    do {
      local_10 = (AnonShape_00443F30_9F0248D4 *)0x5;
      pdVar3[-1] = ((DArrayTy *)ppDVar7[-1])->count;
      *pdVar3 = (*ppDVar7)->count;
      pdVar3[9] = STField<dword>(ppDVar7,0x16);
      pdVar3[10] = STField<dword>(ppDVar7,0x1a);
      pdVar3[0xb] = STField<dword>(ppDVar7,0x1e);
      piVar10 = (int *)((int)ppDVar7 + 0x22);
      pdVar11 = pdVar3 + 0xc;
      memmove(pdVar11, piVar10, 0x138); /* compiler REP MOVS byte copy */
      iVar9 = 0;
      pdVar3[0xc] = 0;
      pdVar3[0xd] = 0;
      pdVar3[0xe] = 0;
      pdVar3[0x10] = 0;
      pdVar3[0x11] = 0;
      pdVar3[0x12] = 0;
      pdVar3[0x14] = 0;
      pdVar3[0x18] = 0;
      pdVar3[0x1c] = 0;
      pdVar3[0x20] = 0;
      pdVar3[0x24] = 0;
      pdVar3[0x28] = 0;
      pdVar3[0x2c] = 0;
      pdVar3[0x30] = 0;
      pdVar3[0x34] = 0;
      pdVar3[0x38] = 0;
      pdVar3[0x3c] = 0;
      pdVar3[0x40] = 0;
      pdVar3[0x44] = 0;
      pdVar3[0x48] = 0;
      pdVar3[0x4c] = 0;
      pdVar3[0x50] = 0;
      pdVar3[0x54] = 0;
      pdVar3[0x58] = 0;
      pdVar3[0x59] = 0;
      pdVar11 = pdVar3 + 0x5b;
      pcVar4 = (char *)((int)ppDVar7 + 0x15e);
      do {
        pdVar11[-1] = *(dword *)(pcVar4 + -4);
        *pdVar11 = *(dword *)pcVar4;
        *(short *)(pdVar11 + 1) = (short)*(dword *)(pcVar4 + 4);
        STField<undefined2>(pdVar11,0xe) = *(undefined2 *)(pcVar4 + 10);
        pdVar11[0x18] = *(dword *)(pcVar4 + 0x4c);
        pdVar11[0x19] = *(dword *)(pcVar4 + 0x50);
        *(short *)(pdVar11 + 0x1a) = (short)*(dword *)(pcVar4 + 0x54);
        STField<undefined2>(pdVar11,0x72) = *(undefined2 *)(pcVar4 + 0x5a);
        pdVar11 = pdVar11 + 5;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        pcVar4 = pcVar4 + 0x10;
      } while (local_10 != nullptr);
      pdVar11 = pdVar3 + 0x8e;
      pdVar3[0x8c] = STField<dword>(ppDVar7,0x1fa);
      local_10 = (AnonShape_00443F30_9F0248D4 *)0xa;
      pdVar5 = (dword *)((int)ppDVar7 + 0x202);
      do {
        pdVar11[-1] = pdVar5[-1];
        *pdVar11 = *pdVar5;
        *(short *)(pdVar11 + 1) = (short)pdVar5[1];
        STField<undefined2>(pdVar11,0xe) = STField<undefined2>(pdVar5,10);
        pdVar11 = pdVar11 + 5;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        pdVar5 = pdVar5 + 4;
      } while (local_10 != nullptr);
      pdVar3[0xbf] = STField<dword>(ppDVar7,0x29e);
      pdVar3[0xc0] = STField<dword>(ppDVar7,0x2a2);
      pdVar3[0xc1] = STField<dword>(ppDVar7,0x2a6);
      pdVar3[0xc2] = STField<dword>(ppDVar7,0x2aa);
      pdVar3[0xc3] = STField<dword>(ppDVar7,0x2ae);
      pdVar3[0xc4] = STField<dword>(ppDVar7,0x2b2);
      pdVar3[0xc5] = STField<dword>(ppDVar7,0x2b6);
      pdVar3[0xc6] = STField<dword>(ppDVar7,0x2ba);
      pdVar3[199] = STField<dword>(ppDVar7,0x2be);
      pdVar3[200] = STField<dword>(ppDVar7,0x2c2);
      pdVar3[0xc9] = STField<dword>(ppDVar7,0x2c6);
      pdVar3[0xca] = STField<dword>(ppDVar7,0x2ca);
      pdVar3[0xcb] = STField<dword>(ppDVar7,0x2ce);
      pdVar3[0xcc] = STField<dword>(ppDVar7,0x2d2);
      pdVar3[0xcd] = STField<dword>(ppDVar7,0x2d6);
      pdVar3[0xce] = STField<dword>(ppDVar7,0x2da);
      pdVar11 = (dword *)((int)ppDVar7 + 0x2e2);
      pdVar5 = pdVar3 + 0xcf;
      memmove(pdVar5, pdVar11, 0x14); /* compiler REP MOVS byte copy */
      iVar9 = 0;
      pdVar11 = (dword *)((int)ppDVar7 + 0x2f6);
      pdVar5 = pdVar3 + 0xd4;
      memmove(pdVar5, pdVar11, 0x14); /* compiler REP MOVS byte copy */
      iVar9 = 0;
      pdVar11 = (dword *)((int)ppDVar7 + 0x30a);
      pdVar5 = pdVar3 + 0xd9;
      memmove(pdVar5, pdVar11, 0x14); /* compiler REP MOVS byte copy */
      iVar9 = 0;
      pdVar11 = (dword *)((int)ppDVar7 + 0x31e);
      pdVar5 = pdVar3 + 0xde;
      memmove(pdVar5, pdVar11, 0x26c); /* compiler REP MOVS byte copy */
      iVar9 = 0;
      pdVar11 = (dword *)((int)ppDVar7 + 0x58a);
      pdVar5 = pdVar3 + 0x179;
      memmove(pdVar5, pdVar11, 0x1a8); /* compiler REP MOVS byte copy */
      iVar9 = 0;
      pdVar11 = (dword *)((int)ppDVar7 + 0x732);
      pdVar5 = pdVar3 + 0x1e3;
      memmove(pdVar5, pdVar11, 0x9b); /* compiler REP MOVS byte copy */
      iVar9 = 0;
      STField<undefined4>(pdVar3,0x827) = STField<undefined4>(ppDVar7,0x7cd);
      puVar12 = (byte *)((int)ppDVar7 + 0x7d1);
      puVar17 = (byte *)((int)pdVar3 + 0x82b);
      memmove(puVar17, puVar12, 0x198); /* compiler REP MOVS byte copy */
      iVar9 = 0;
      STField<undefined4>(pdVar3,0x9c3) = STField<undefined4>(ppDVar7,0x969);
      STField<undefined4>(pdVar3,0x9c7) = STField<undefined4>(ppDVar7,0x96d);
      puVar12 = (byte *)((int)ppDVar7 + 0x971);
      puVar17 = (byte *)((int)pdVar3 + 0x9cb);
      memmove(puVar17, puVar12, 0x18); /* compiler REP MOVS byte copy */
      iVar9 = 0;
      STField<undefined4>(pdVar3,0x9e3) = STField<undefined4>(ppDVar7,0x98d);
      STField<undefined4>(pdVar3,0x9e7) = STField<undefined4>(ppDVar7,0x991);
      STField<undefined4>(pdVar3,0x9eb) = STField<undefined4>(ppDVar7,0x995);
      puVar12 = (byte *)((int)ppDVar7 + 0x999);
      puVar17 = (byte *)((int)pdVar3 + 0x9ef);
      memmove(puVar17, puVar12, 0x28); /* compiler REP MOVS byte copy */
      iVar9 = 0;
      puVar12 = (byte *)((int)ppDVar7 + 0xa05);
      puVar17 = (byte *)((int)pdVar3 + 0xa17);
      memmove(puVar17, puVar12, 0x14); /* compiler REP MOVS byte copy */
      iVar9 = 0;
      puVar12 = (byte *)((int)ppDVar7 + 0xa19);
      puVar17 = (byte *)((int)pdVar3 + 0xa2b);
      memmove(puVar17, puVar12, 0x20); /* compiler REP MOVS byte copy */
      iVar9 = 0;
      puVar12 = (byte *)((int)ppDVar7 + 0xa39);
      puVar17 = (byte *)((int)pdVar3 + 0xa4b);
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      ppDVar7 = (DArrayOf_STGameObjCPtr **)((int)ppDVar7 + 0xa62);
      pdVar3 = (dword *)((int)pdVar3 + 0xaab);
      memmove(puVar17, puVar12, 0x20); /* compiler REP MOVS byte copy */
      iVar9 = 0;
    } while ((int)ppDVar7 < 0x7fa139);
    local_24 = (AnonShape_00443F30_5DF553AC *)&g_packedRecords_A62x8[0].field5_0xf;
    pbVar8 = pbVar2 + 0x5590;
    puVar12 = (byte *)(&DAT_007fa138);
    pbVar19 = pbVar2 + 0x555c;
    memmove(pbVar19, puVar12, 0x18); /* compiler REP MOVS byte copy */
    local_1c = (DArrayTy *)0x5590;
    local_20 = nullptr;
    *(dword *)(pbVar2 + 0x5574) = g_array_007FA154->count;
    *(dword *)(pbVar2 + 0x5578) = g_array_007FA158->count;
    *(dword *)(pbVar2 + 0x557c) = g_array_007FA15C->count;
    *(dword *)(pbVar2 + 0x5580) = g_array_007FA160->count;
    *(dword *)(pbVar2 + 0x5584) = g_array_007FA164->count;
    local_10 = nullptr;
    pAVar18 = local_34;
    local_2c = pbVar2;
    do {
      local_18 = nullptr;
      pDVar13 = local_20;
      local_14 = local_24;
      if (0 < (int)pAVar18) {
        do {
          if (*(uint **)local_14 == nullptr) {
            pbVar19 = pbVar2 + (int)(&pDVar13->count + (int)local_18 * 2);
            pbVar19[0] = 0xff;
            pbVar19[1] = 0xff;
            pbVar19[2] = 0xff;
            pbVar19[3] = 0xff;
            pbVar19 = pbVar2 + (int)(&pDVar13->capacity + (int)local_18 * 2);
            pbVar19[0] = 0;
            pbVar19[1] = 0;
            pbVar19[2] = 0;
            pbVar19[3] = 0;
          }
          else {

            local_c = FUN_006b0020(*(uint **)local_14,(int *)&local_8);
            pbVar2 = local_c;
            pbVar19 = pbVar8;
            for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pbVar19 = *(undefined4 *)pbVar2;
              pbVar2 = pbVar2 + 4;
              pbVar19 = pbVar19 + 4;
            }
            for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pbVar19 = *pbVar2;
              pbVar2 = pbVar2 + 1;
              pbVar19 = pbVar19 + 1;
            }
            FreeAndNull(&local_c);
            *(DArrayTy **)(local_2c + (int)(&local_20->count + (int)local_18 * 2)) = local_1c;
            *(AnonNested_00443F30_0839_FB957E77 **)
             (local_2c + (int)(&local_20->capacity + (int)local_18 * 2)) = local_8;
            pbVar8 = pbVar8 + (int)local_8;
            local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
            pbVar2 = local_2c;
            pDVar13 = local_20;
            pAVar18 = local_34;
          }
          local_18 = (DArrayTy *)((int)local_18 + 1);
          local_14 = (AnonShape_00443F30_5DF553AC *)&local_14->field_0x4;
        } while ((int)local_18 < (int)pAVar18);
      }
      local_24 = (AnonShape_00443F30_5DF553AC *)&local_24[1].field_0x225;
      local_20 = (DArrayTy *)((int)&pDVar13[0x55].elementSize + 3);
    } while ((int)local_24 < 0x7fa13f);
    local_14 = nullptr;
    local_10 = (AnonShape_00443F30_9F0248D4 *)&g_packedRecords_A62x8[0].field155_0x1bd;
    do {
      local_24 = nullptr;
      local_18 = (DArrayTy *)local_10;
      do {
        if ((uint *)((AnonShape_00443F30_9F0248D4 *)((int)local_18 + -0x54))->field_0004 ==
            nullptr) {
          local_20 = (DArrayTy *)(pbVar2 + (int)(&local_14->field_0x0 + (int)local_24));
          *(undefined4 *)((int)&local_20[0xb].growCallback + 2) = 0xffffffff;
          *(undefined4 *)((int)&local_20[0xb].data + 2) = 0;
        }
        else {

          local_c = FUN_006b0020((uint *)((AnonShape_00443F30_9F0248D4 *)((int)local_18 + -0x54))->
                                         field_0004,(int *)&local_8);
          pbVar2 = local_c;
          pbVar19 = pbVar8;
          for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pbVar19 = *(undefined4 *)pbVar2;
            pbVar2 = pbVar2 + 4;
            pbVar19 = pbVar19 + 4;
          }
          for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pbVar19 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            pbVar19 = pbVar19 + 1;
          }
          FreeAndNull(&local_c);
          local_20 = (DArrayTy *)(local_2c + (int)(&local_14->field_0x0 + (int)local_24));
          *(DArrayTy **)((int)&local_20[0xb].growCallback + 2) = local_1c;
          *(AnonNested_00443F30_0839_FB957E77 **)((int)&local_20[0xb].data + 2) = local_8;
          pbVar8 = pbVar8 + (int)local_8;
          local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
          pbVar2 = local_2c;
        }
        if (*(uint **)local_18 == nullptr) {
          *(undefined4 *)((int)&local_20[0xe].data + 2) = 0xffffffff;
          pbVar19 = (byte *)((int)&local_20[0xf].flags + 2);
          pbVar19[0] = 0;
          pbVar19[1] = 0;
          pbVar19[2] = 0;
          pbVar19[3] = 0;
        }
        else {

          local_c = FUN_006b0020(*(uint **)local_18,(int *)&local_8);
          pbVar2 = local_c;
          pbVar19 = pbVar8;
          for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pbVar19 = *(undefined4 *)pbVar2;
            pbVar2 = pbVar2 + 4;
            pbVar19 = pbVar19 + 4;
          }
          for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pbVar19 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            pbVar19 = pbVar19 + 1;
          }
          FreeAndNull(&local_c);
          *(DArrayTy **)((int)&local_20[0xe].data + 2) = local_1c;
          *(AnonNested_00443F30_0839_FB957E77 **)((int)&local_20[0xf].flags + 2) = local_8;
          pbVar8 = pbVar8 + (int)local_8;
          local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
          pbVar2 = local_2c;
        }
        local_24 = (AnonShape_00443F30_5DF553AC *)((int)local_24 + 0x14);
        local_18 = (DArrayTy *)&((AnonShape_00443F30_9F0248D4 *)((int)local_18 + 0xc))->field_0004;
      } while ((int)local_24 < 100);
      local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[0xdd].field_0004 + 2);
      local_14 = (AnonShape_00443F30_5DF553AC *)&local_14[1].field_0x26e;
    } while ((int)local_10 < 0x7fa2ed);
    local_18 = nullptr;
    local_10 = (AnonShape_00443F30_9F0248D4 *)&g_packedRecords_A62x8[0].field204_0x211;
    do {
      local_24 = nullptr;
      local_20 = (DArrayTy *)local_10;
      do {
        if ((uint *)local_20->flags == nullptr) {
          pbVar19 = pbVar2 + (int)local_18 + (int)local_24 + 0x246;
          pbVar19[0] = 0xff;
          pbVar19[1] = 0xff;
          pbVar19[2] = 0xff;
          pbVar19[3] = 0xff;
          pbVar19 = pbVar2 + (int)local_18 + (int)local_24 + 0x24a;
          pbVar19[0] = 0;
          pbVar19[1] = 0;
          pbVar19[2] = 0;
          pbVar19[3] = 0;
        }
        else {

          local_c = FUN_006b0020((uint *)local_20->flags,(int *)&local_8);
          pbVar2 = local_c;
          pbVar19 = pbVar8;
          for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pbVar19 = *(undefined4 *)pbVar2;
            pbVar2 = pbVar2 + 4;
            pbVar19 = pbVar19 + 4;
          }
          for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pbVar19 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            pbVar19 = pbVar19 + 1;
          }
          FreeAndNull(&local_c);
          *(DArrayTy **)(local_2c + (int)local_18 + (int)local_24 + 0x246) = local_1c;
          *(AnonNested_00443F30_0839_FB957E77 **)(local_2c + (int)local_18 + (int)local_24 + 0x24a)
               = local_8;
          pbVar8 = pbVar8 + (int)local_8;
          local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
          pbVar2 = local_2c;
        }
        local_24 = (AnonShape_00443F30_5DF553AC *)((int)local_24 + 0x14);
        local_20 = (DArrayTy *)&local_20->capacity;
      } while ((int)local_24 < 200);
      local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[0xdd].field_0004 + 2);
      local_18 = (DArrayTy *)((int)local_18 + 0xaab);
    } while ((int)local_10 < 0x7fa341);
    local_24 = (AnonShape_00443F30_5DF553AC *)(pbVar2 + 0xa83);
    local_18 = (DArrayTy *)&g_packedRecords_A62x8[0].field_0x7ee;
    do {
      local_10 = (AnonShape_00443F30_9F0248D4 *)local_24;
      local_30 = (int *)0x6;
      local_20 = local_18;
      do {

        local_c = FUN_006b0020(&local_20->flags,(int *)&local_8);
        pbVar2 = local_c;
        pbVar19 = pbVar8;
        for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pbVar19 = *(undefined4 *)pbVar2;
          pbVar2 = pbVar2 + 4;
          pbVar19 = pbVar19 + 4;
        }
        for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pbVar19 = *pbVar2;
          pbVar2 = pbVar2 + 1;
          pbVar19 = pbVar19 + 1;
        }
        FreeAndNull(&local_c);
        local_10[-1].field_0008 = local_1c;
        *(AnonNested_00443F30_0839_FB957E77 **)local_10 = local_8;
        local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
        local_10 = (AnonShape_00443F30_9F0248D4 *)&local_10->field_0008;
        pbVar8 = pbVar8 + (int)local_8;
        local_20 = (DArrayTy *)&local_20[2].iteratorIndex;
        local_30 = (int *)((int)local_30 + -1);
      } while (local_30 != nullptr);
      local_18 = (DArrayTy *)((int)&local_18[0x53].flags + 2);
      local_24 = (AnonShape_00443F30_5DF553AC *)
                 ((int)&((AnonShape_00443F30_9F0248D4 *)((int)local_24 + 0xaa4))->field_0004 + 3);
    } while ((int)local_18 < 0x7fa91e);
    local_30 = &g_packedRecords_A62x8[0].field1976_0x9f6;
    local_10 = (AnonShape_00443F30_9F0248D4 *)(local_2c + 0xa73);
    do {
      local_10->field_0008 = (DArrayTy *)local_30[5];
      local_20 = (DArrayTy *)*local_30;
      if ((local_20 == nullptr) ||
         (local_24 = (AnonShape_00443F30_5DF553AC *)local_20->count,
         local_24 == nullptr)) {
        *(undefined4 *)local_10 = 0xffffffff;
        local_10->field_0004 = 0;
        pbVar2 = pbVar8;
      }
      else {
        local_18 = nullptr;
        local_8 = (AnonNested_00443F30_0839_FB957E77 *)((int)local_24 * 0x18);
        *(DArrayTy **)local_10 = local_1c;
        local_10->field_0004 = local_8;
        pbVar2 = pbVar8 + (int)local_8;
        local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
        if (0 < (int)local_24) {
          pAVar14 = (AnonShape_00443F30_5DF553AC *)(pbVar8 + 8);
          do {
            local_14 = pAVar14;

            DArrayGetElement(local_20,(uint)local_18,&local_40);
            if (local_40 == nullptr) {
              *(undefined4 *)&pAVar14[-1].field_0x835 = 0xffffffff;
              pAVar14[-1].field_0839 = nullptr;
            }
            else {

              local_c = FUN_006b0020(local_40,(int *)&local_8);
              pbVar8 = local_c;
              pbVar19 = pbVar2;
              for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pbVar19 = *(undefined4 *)pbVar8;
                pbVar8 = pbVar8 + 4;
                pbVar19 = pbVar19 + 4;
              }
              for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *pbVar19 = *pbVar8;
                pbVar8 = pbVar8 + 1;
                pbVar19 = pbVar19 + 1;
              }
              FreeAndNull(&local_c);
              *(DArrayTy **)&local_14[-1].field_0x835 = local_1c;
              local_14[-1].field_0839 = local_8;
              pbVar2 = pbVar2 + (int)local_8;
              local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
              pAVar14 = local_14;
            }
            if (local_3c == nullptr) {
              *(undefined4 *)pAVar14 = 0xffffffff;
              *(undefined4 *)&pAVar14->field_0x4 = 0;
            }
            else {

              local_c = FUN_006b0020(local_3c,(int *)&local_8);
              pbVar8 = local_c;
              pbVar19 = pbVar2;
              for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pbVar19 = *(undefined4 *)pbVar8;
                pbVar8 = pbVar8 + 4;
                pbVar19 = pbVar19 + 4;
              }
              for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *pbVar19 = *pbVar8;
                pbVar8 = pbVar8 + 1;
                pbVar19 = pbVar19 + 1;
              }
              FreeAndNull(&local_c);
              *(DArrayTy **)local_14 = local_1c;
              *(AnonNested_00443F30_0839_FB957E77 **)&local_14->field_0x4 = local_8;
              pbVar2 = pbVar2 + (int)local_8;
              local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
              pAVar14 = local_14;
            }
            if (local_38 == nullptr) {
              *(undefined4 *)&pAVar14->field_0x8 = 0xffffffff;
              *(undefined4 *)&pAVar14->field_0xc = 0;
            }
            else {

              local_c = FUN_006b0020(local_38,(int *)&local_8);
              pbVar8 = local_c;
              pbVar19 = pbVar2;
              for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pbVar19 = *(undefined4 *)pbVar8;
                pbVar8 = pbVar8 + 4;
                pbVar19 = pbVar19 + 4;
              }
              for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *pbVar19 = *pbVar8;
                pbVar8 = pbVar8 + 1;
                pbVar19 = pbVar19 + 1;
              }
              FreeAndNull(&local_c);
              *(DArrayTy **)&local_14->field_0x8 = local_1c;
              *(AnonNested_00443F30_0839_FB957E77 **)&local_14->field_0xc = local_8;
              pbVar2 = pbVar2 + (int)local_8;
              local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
              pAVar14 = local_14;
            }
            local_18 = (DArrayTy *)((int)local_18 + 1);
            pAVar14 = (AnonShape_00443F30_5DF553AC *)&pAVar14->field_0x18;
          } while ((int)local_18 < (int)local_24);
        }
      }
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      local_30 = (int *)((int)local_30 + 0xa62);
      local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[0xe3].field_0004 + 3);
      pbVar8 = pbVar2;
    } while ((int)local_30 < 0x7fab26);
    uVar16 = (uint)g_worldGrid.planeStride;
    pbVar4 = DAT_007fa168;
    memmove(pbVar2, pbVar4, uVar16); /* compiler REP MOVS byte copy */
    *(DArrayTy **)(local_2c + 0x5588) = local_1c;
    *(uint *)(local_2c + 0x558c) = uVar16;
    g_currentExceptionFrame = local_88.previous;
    *param_1 = local_28;
    return local_2c;
  }
  g_currentExceptionFrame = local_88.previous;

  iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x270e,0,iVar2,"%s",
                             "STAllPlayersC::SaveAllPlData");
  if (iVar7 == 0) {
    RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",9999);
    *param_1 = local_28;
    return local_2c;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

