#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SaveAllPlData

   [STPrototypeApplier] Propagated return.
   Evidence: 00443F30 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00431261 */

byte * __thiscall STAllPlayersC::SaveAllPlData(STAllPlayersC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *puVar6;
  int *piVar8;
  byte *pbVar9;
  DArrayTy *pDVar10;
  AnonShape_00443F30_5DF553AC *pAVar11;
  uint *puVar12;
  uint uVar13;
  AnonShape_00443F30_9F0248D4 *pAVar14;
  InternalExceptionFrame local_88;
  STAllPlayersC *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  AnonShape_00443F30_9F0248D4 *local_34;
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

  local_34 = (AnonShape_00443F30_9F0248D4 *)0x4;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_44 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  if (iVar2 == 0) {
    iVar2 = 0x5590;
    local_14 = (AnonShape_00443F30_5DF553AC *)&g_packedRecords_A62x8[0].field393_0x1bd;
    local_28 = 0x5590;
    do {
      if (0 < (int)local_34) {
        local_10 = local_34;
        puVar6 = (byte *)&local_14[-1].field_0x68f;
        do {
          if ((uint *)*puVar6 != nullptr) {
            local_c = (byte *)FUN_006b0020((uint *)*puVar6,(int *)&local_8);
            FreeAndNull(&local_c);
            iVar2 = (int)&(local_8->field_0000).flags + iVar2;
            local_28 = iVar2;
          }
          puVar6 = (byte *)(puVar6 + 1);
          local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        } while (local_10 != nullptr);
      }
      local_10 = (AnonShape_00443F30_9F0248D4 *)0x5;
      pAVar11 = local_14;
      do {
        if (*(uint **)&pAVar11[-1].field_0x7ed != nullptr) {
          local_c = (byte *)FUN_006b0020(*(uint **)&pAVar11[-1].field_0x7ed,(int *)&local_8);
          FreeAndNull(&local_c);
          iVar2 = (int)&(local_8->field_0000).flags + iVar2;
          local_28 = iVar2;
        }
        if (*(uint **)pAVar11 != nullptr) {
          local_c = (byte *)FUN_006b0020(*(uint **)pAVar11,(int *)&local_8);
          FreeAndNull(&local_c);
          iVar2 = (int)&(local_8->field_0000).flags + iVar2;
          local_28 = iVar2;
        }
        pAVar11 = (AnonShape_00443F30_5DF553AC *)&pAVar11->field_0x10;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
      } while (local_10 != nullptr);
      local_10 = (AnonShape_00443F30_9F0248D4 *)0xa;
      puVar6 = (byte *)&local_14->field_0x54;
      do {
        if ((uint *)*puVar6 != nullptr) {
          local_c = (byte *)FUN_006b0020((uint *)*puVar6,(int *)&local_8);
          FreeAndNull(&local_c);
          iVar2 = (int)&(local_8->field_0000).flags + iVar2;
          local_28 = iVar2;
        }
        puVar6 = (byte *)(puVar6 + 4);
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
      } while (local_10 != nullptr);
      local_10 = (AnonShape_00443F30_9F0248D4 *)0x6;
      puVar12 = (uint *)&local_14->field_0x631;
      do {
        local_c = (byte *)FUN_006b0020(puVar12,(int *)&local_8);
        FreeAndNull(&local_c);
        iVar2 = (int)&(local_8->field_0000).flags + iVar2;
        puVar12 = puVar12 + 0x11;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        local_28 = iVar2;
      } while (local_10 != nullptr);
      local_20 = &local_14->field_0839->field_0000;
      local_10 = nullptr;
      if (((AnonNested_00443F30_0839_FB957E77 *)local_20 != nullptr
          ) && (local_24 = (AnonShape_00443F30_5DF553AC *)
                           (((AnonNested_00443F30_0839_FB957E77 *)local_20)->field_0000).count,
               local_24 != nullptr)) {
        uVar13 = 0;
        iVar2 = iVar2 + (int)local_24 * 0x18;
        local_28 = iVar2;
        if (0 < (int)local_24) {
          do {
            DArrayGetElement(local_20,uVar13,&local_40);
            if (local_40 != nullptr) {
              local_c = (byte *)FUN_006b0020(local_40,(int *)&local_8);
              FreeAndNull(&local_c);
              iVar2 = (int)&(local_8->field_0000).flags + iVar2;
              local_28 = iVar2;
            }
            if (local_3c != nullptr) {
              local_c = (byte *)FUN_006b0020(local_3c,(int *)&local_8);
              FreeAndNull(&local_c);
              iVar2 = (int)&(local_8->field_0000).flags + iVar2;
              local_28 = iVar2;
            }
            if (local_38 != nullptr) {
              local_c = (byte *)FUN_006b0020(local_38,(int *)&local_8);
              FreeAndNull(&local_c);
              iVar2 = (int)&(local_8->field_0000).flags + iVar2;
              local_28 = iVar2;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)local_24);
        }
      }
      local_14 = (AnonShape_00443F30_5DF553AC *)&local_14[1].field_0x225;
    } while ((int)local_14 < 0x7fa2ed);
    local_28 = iVar2 + g_worldGrid.planeStride;
    pbVar3 = Library::DKW::LIB::MemAlloc(local_28);
    pbVar4 = pbVar3 + 8;
    *(undefined4 *)pbVar3 = local_44->field_001C;
    piVar8 = &g_packedRecords_A62x8[0].field6_0x9;
    do {
      local_10 = (AnonShape_00443F30_9F0248D4 *)0x5;
      *(undefined4 *)(pbVar4 + -4) = *(undefined4 *)(piVar8[-1] + 0xc);
      *(undefined4 *)pbVar4 = *(undefined4 *)(*piVar8 + 0xc);
      *(undefined4 *)(pbVar4 + 0x24) = *(undefined4 *)((int)piVar8 + 0x16);
      *(undefined4 *)(pbVar4 + 0x28) = *(undefined4 *)((int)piVar8 + 0x1a);
      *(undefined4 *)(pbVar4 + 0x2c) = *(undefined4 *)((int)piVar8 + 0x1e);
      puVar6 = (byte *)((int)piVar8 + 0x22);
      pbVar9 = pbVar4 + 0x30;
      memmove(pbVar9, puVar6, 0x138); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      pbVar4[0x30] = 0;
      pbVar4[0x31] = 0;
      pbVar4[0x32] = 0;
      pbVar4[0x33] = 0;
      pbVar4[0x34] = 0;
      pbVar4[0x35] = 0;
      pbVar4[0x36] = 0;
      pbVar4[0x37] = 0;
      pbVar4[0x38] = 0;
      pbVar4[0x39] = 0;
      pbVar4[0x3a] = 0;
      pbVar4[0x3b] = 0;
      pbVar4[0x40] = 0;
      pbVar4[0x41] = 0;
      pbVar4[0x42] = 0;
      pbVar4[0x43] = 0;
      pbVar4[0x44] = 0;
      pbVar4[0x45] = 0;
      pbVar4[0x46] = 0;
      pbVar4[0x47] = 0;
      pbVar4[0x48] = 0;
      pbVar4[0x49] = 0;
      pbVar4[0x4a] = 0;
      pbVar4[0x4b] = 0;
      pbVar4[0x50] = 0;
      pbVar4[0x51] = 0;
      pbVar4[0x52] = 0;
      pbVar4[0x53] = 0;
      pbVar4[0x60] = 0;
      pbVar4[0x61] = 0;
      pbVar4[0x62] = 0;
      pbVar4[99] = 0;
      pbVar4[0x70] = 0;
      pbVar4[0x71] = 0;
      pbVar4[0x72] = 0;
      pbVar4[0x73] = 0;
      pbVar4[0x80] = 0;
      pbVar4[0x81] = 0;
      pbVar4[0x82] = 0;
      pbVar4[0x83] = 0;
      pbVar4[0x90] = 0;
      pbVar4[0x91] = 0;
      pbVar4[0x92] = 0;
      pbVar4[0x93] = 0;
      pbVar4[0xa0] = 0;
      pbVar4[0xa1] = 0;
      pbVar4[0xa2] = 0;
      pbVar4[0xa3] = 0;
      pbVar4[0xb0] = 0;
      pbVar4[0xb1] = 0;
      pbVar4[0xb2] = 0;
      pbVar4[0xb3] = 0;
      pbVar4[0xc0] = 0;
      pbVar4[0xc1] = 0;
      pbVar4[0xc2] = 0;
      pbVar4[0xc3] = 0;
      pbVar4[0xd0] = 0;
      pbVar4[0xd1] = 0;
      pbVar4[0xd2] = 0;
      pbVar4[0xd3] = 0;
      pbVar4[0xe0] = 0;
      pbVar4[0xe1] = 0;
      pbVar4[0xe2] = 0;
      pbVar4[0xe3] = 0;
      pbVar4[0xf0] = 0;
      pbVar4[0xf1] = 0;
      pbVar4[0xf2] = 0;
      pbVar4[0xf3] = 0;
      pbVar4[0x100] = 0;
      pbVar4[0x101] = 0;
      pbVar4[0x102] = 0;
      pbVar4[0x103] = 0;
      pbVar4[0x110] = 0;
      pbVar4[0x111] = 0;
      pbVar4[0x112] = 0;
      pbVar4[0x113] = 0;
      pbVar4[0x120] = 0;
      pbVar4[0x121] = 0;
      pbVar4[0x122] = 0;
      pbVar4[0x123] = 0;
      pbVar4[0x130] = 0;
      pbVar4[0x131] = 0;
      pbVar4[0x132] = 0;
      pbVar4[0x133] = 0;
      pbVar4[0x140] = 0;
      pbVar4[0x141] = 0;
      pbVar4[0x142] = 0;
      pbVar4[0x143] = 0;
      pbVar4[0x150] = 0;
      pbVar4[0x151] = 0;
      pbVar4[0x152] = 0;
      pbVar4[0x153] = 0;
      pbVar4[0x160] = 0;
      pbVar4[0x161] = 0;
      pbVar4[0x162] = 0;
      pbVar4[0x163] = 0;
      pbVar4[0x164] = 0;
      pbVar4[0x165] = 0;
      pbVar4[0x166] = 0;
      pbVar4[0x167] = 0;
      pbVar9 = pbVar4 + 0x16c;
      puVar6 = (byte *)((int)piVar8 + 0x15e);
      do {
        *(undefined4 *)(pbVar9 + -4) = puVar6[-1];
        *(undefined4 *)pbVar9 = *puVar6;
        *(undefined2 *)(pbVar9 + 4) = *(undefined2 *)(puVar6 + 1);
        *(undefined2 *)(pbVar9 + 0xe) = *(undefined2 *)((int)puVar6 + 10);
        *(undefined4 *)(pbVar9 + 0x60) = puVar6[0x13];
        *(undefined4 *)(pbVar9 + 100) = puVar6[0x14];
        *(undefined2 *)(pbVar9 + 0x68) = *(undefined2 *)(puVar6 + 0x15);
        *(undefined2 *)(pbVar9 + 0x72) = *(undefined2 *)((int)puVar6 + 0x5a);
        pbVar9 = pbVar9 + 0x14;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        puVar6 = (byte *)(puVar6 + 4);
      } while (local_10 != nullptr);
      pbVar9 = pbVar4 + 0x238;
      *(undefined4 *)(pbVar4 + 0x230) = *(undefined4 *)((int)piVar8 + 0x1fa);
      local_10 = (AnonShape_00443F30_9F0248D4 *)0xa;
      puVar6 = (byte *)((int)piVar8 + 0x202);
      do {
        *(undefined4 *)(pbVar9 + -4) = puVar6[-1];
        *(undefined4 *)pbVar9 = *puVar6;
        *(undefined2 *)(pbVar9 + 4) = *(undefined2 *)(puVar6 + 1);
        *(undefined2 *)(pbVar9 + 0xe) = *(undefined2 *)((int)puVar6 + 10);
        pbVar9 = pbVar9 + 0x14;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        puVar6 = (byte *)(puVar6 + 4);
      } while (local_10 != nullptr);
      *(undefined4 *)(pbVar4 + 0x2fc) = *(undefined4 *)((int)piVar8 + 0x29e);
      *(undefined4 *)(pbVar4 + 0x300) = *(undefined4 *)((int)piVar8 + 0x2a2);
      *(undefined4 *)(pbVar4 + 0x304) = *(undefined4 *)((int)piVar8 + 0x2a6);
      *(undefined4 *)(pbVar4 + 0x308) = *(undefined4 *)((int)piVar8 + 0x2aa);
      *(undefined4 *)(pbVar4 + 0x30c) = *(undefined4 *)((int)piVar8 + 0x2ae);
      *(undefined4 *)(pbVar4 + 0x310) = *(undefined4 *)((int)piVar8 + 0x2b2);
      *(undefined4 *)(pbVar4 + 0x314) = *(undefined4 *)((int)piVar8 + 0x2b6);
      *(undefined4 *)(pbVar4 + 0x318) = *(undefined4 *)((int)piVar8 + 0x2ba);
      *(undefined4 *)(pbVar4 + 0x31c) = *(undefined4 *)((int)piVar8 + 0x2be);
      *(undefined4 *)(pbVar4 + 800) = *(undefined4 *)((int)piVar8 + 0x2c2);
      *(undefined4 *)(pbVar4 + 0x324) = *(undefined4 *)((int)piVar8 + 0x2c6);
      *(undefined4 *)(pbVar4 + 0x328) = *(undefined4 *)((int)piVar8 + 0x2ca);
      *(undefined4 *)(pbVar4 + 0x32c) = *(undefined4 *)((int)piVar8 + 0x2ce);
      *(undefined4 *)(pbVar4 + 0x330) = *(undefined4 *)((int)piVar8 + 0x2d2);
      *(undefined4 *)(pbVar4 + 0x334) = *(undefined4 *)((int)piVar8 + 0x2d6);
      *(undefined4 *)(pbVar4 + 0x338) = *(undefined4 *)((int)piVar8 + 0x2da);
      puVar6 = (byte *)((int)piVar8 + 0x2e2);
      pbVar9 = pbVar4 + 0x33c;
      memmove(pbVar9, puVar6, 0x14); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0x2f6);
      pbVar9 = pbVar4 + 0x350;
      memmove(pbVar9, puVar6, 0x14); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0x30a);
      pbVar9 = pbVar4 + 0x364;
      memmove(pbVar9, puVar6, 0x14); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0x31e);
      pbVar9 = pbVar4 + 0x378;
      memmove(pbVar9, puVar6, 0x26c); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0x58a);
      pbVar9 = pbVar4 + 0x5e4;
      memmove(pbVar9, puVar6, 0x1a8); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0x732);
      pbVar9 = pbVar4 + 0x78c;
      memmove(pbVar9, puVar6, 0x9b); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      *(undefined4 *)(pbVar4 + 0x827) = *(undefined4 *)((int)piVar8 + 0x7cd);
      puVar6 = (byte *)((int)piVar8 + 0x7d1);
      pbVar9 = pbVar4 + 0x82b;
      memmove(pbVar9, puVar6, 0x198); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      *(undefined4 *)(pbVar4 + 0x9c3) = *(undefined4 *)((int)piVar8 + 0x969);
      *(undefined4 *)(pbVar4 + 0x9c7) = *(undefined4 *)((int)piVar8 + 0x96d);
      puVar6 = (byte *)((int)piVar8 + 0x971);
      pbVar9 = pbVar4 + 0x9cb;
      memmove(pbVar9, puVar6, 0x18); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      *(undefined4 *)(pbVar4 + 0x9e3) = *(undefined4 *)((int)piVar8 + 0x98d);
      *(undefined4 *)(pbVar4 + 0x9e7) = *(undefined4 *)((int)piVar8 + 0x991);
      *(undefined4 *)(pbVar4 + 0x9eb) = *(undefined4 *)((int)piVar8 + 0x995);
      puVar6 = (byte *)((int)piVar8 + 0x999);
      pbVar9 = pbVar4 + 0x9ef;
      memmove(pbVar9, puVar6, 0x28); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0xa05);
      pbVar9 = pbVar4 + 0xa17;
      memmove(pbVar9, puVar6, 0x14); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0xa19);
      pbVar9 = pbVar4 + 0xa2b;
      memmove(pbVar9, puVar6, 0x20); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      puVar6 = (byte *)((int)piVar8 + 0xa39);
      pbVar9 = pbVar4 + 0xa4b;
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      piVar8 = (int *)((int)piVar8 + 0xa62);
      pbVar4 = pbVar4 + 0xaab;
      memmove(pbVar9, puVar6, 0x20); /* compiler REP MOVS byte copy */
      iVar2 = 0;
    } while ((int)piVar8 < 0x7fa139);
    local_24 = (AnonShape_00443F30_5DF553AC *)&g_packedRecords_A62x8[0].field9_0xf;
    pbVar4 = pbVar3 + 0x5590;
    puVar6 = (byte *)(&DAT_007fa138);
    pbVar9 = pbVar3 + 0x555c;
    memmove(pbVar9, puVar6, 0x18); /* compiler REP MOVS byte copy */
    local_1c = (DArrayTy *)0x5590;
    local_20 = nullptr;
    *(dword *)(pbVar3 + 0x5574) = g_array_007FA154->count;
    *(dword *)(pbVar3 + 0x5578) = g_array_007FA158->count;
    *(dword *)(pbVar3 + 0x557c) = g_array_007FA15C->count;
    *(dword *)(pbVar3 + 0x5580) = g_array_007FA160->count;
    *(dword *)(pbVar3 + 0x5584) = g_array_007FA164->count;
    local_10 = nullptr;
    pAVar14 = local_34;
    local_2c = pbVar3;
    do {
      local_18 = nullptr;
      pDVar10 = local_20;
      local_14 = local_24;
      if (0 < (int)pAVar14) {
        do {
          if (*(uint **)local_14 == nullptr) {
            pbVar9 = pbVar3 + (int)(&pDVar10->count + (int)local_18 * 2);
            pbVar9[0] = 0xff;
            pbVar9[1] = 0xff;
            pbVar9[2] = 0xff;
            pbVar9[3] = 0xff;
            pbVar9 = pbVar3 + (int)(&pDVar10->capacity + (int)local_18 * 2);
            pbVar9[0] = 0;
            pbVar9[1] = 0;
            pbVar9[2] = 0;
            pbVar9[3] = 0;
          }
          else {
            local_c = (byte *)FUN_006b0020(*(uint **)local_14,(int *)&local_8);
            pbVar3 = local_c;
            pbVar9 = pbVar4;
            for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
              pbVar3 = pbVar3 + 4;
              pbVar9 = pbVar9 + 4;
            }
            for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *pbVar9 = *pbVar3;
              pbVar3 = pbVar3 + 1;
              pbVar9 = pbVar9 + 1;
            }
            FreeAndNull(&local_c);
            *(DArrayTy **)(local_2c + (int)(&local_20->count + (int)local_18 * 2)) = local_1c;
            *(AnonNested_00443F30_0839_FB957E77 **)
             (local_2c + (int)(&local_20->capacity + (int)local_18 * 2)) = local_8;
            pbVar4 = pbVar4 + (int)local_8;
            local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
            pbVar3 = local_2c;
            pDVar10 = local_20;
            pAVar14 = local_34;
          }
          local_18 = (DArrayTy *)((int)local_18 + 1);
          local_14 = (AnonShape_00443F30_5DF553AC *)&local_14->field_0x4;
        } while ((int)local_18 < (int)pAVar14);
      }
      local_24 = (AnonShape_00443F30_5DF553AC *)&local_24[1].field_0x225;
      local_20 = (DArrayTy *)((int)&pDVar10[0x55].elementSize + 3);
    } while ((int)local_24 < 0x7fa13f);
    local_14 = nullptr;
    local_10 = (AnonShape_00443F30_9F0248D4 *)&g_packedRecords_A62x8[0].field393_0x1bd;
    do {
      local_24 = nullptr;
      local_18 = (DArrayTy *)local_10;
      do {
        if ((uint *)((AnonShape_00443F30_9F0248D4 *)((int)local_18 + -0x54))->field_0004 ==
            nullptr) {
          local_20 = (DArrayTy *)(pbVar3 + (int)(&local_14->field_0x0 + (int)local_24));
          *(undefined4 *)((int)&local_20[0xb].growCallback + 2) = 0xffffffff;
          *(undefined4 *)((int)&local_20[0xb].data + 2) = 0;
        }
        else {
          local_c = (byte *)FUN_006b0020((uint *)((AnonShape_00443F30_9F0248D4 *)
                                                 ((int)local_18 + -0x54))->field_0004,
                                         (int *)&local_8);
          pbVar3 = local_c;
          pbVar9 = pbVar4;
          for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
            pbVar3 = pbVar3 + 4;
            pbVar9 = pbVar9 + 4;
          }
          for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pbVar9 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            pbVar9 = pbVar9 + 1;
          }
          FreeAndNull(&local_c);
          local_20 = (DArrayTy *)(local_2c + (int)(&local_14->field_0x0 + (int)local_24));
          *(DArrayTy **)((int)&local_20[0xb].growCallback + 2) = local_1c;
          *(AnonNested_00443F30_0839_FB957E77 **)((int)&local_20[0xb].data + 2) = local_8;
          pbVar4 = pbVar4 + (int)local_8;
          local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
          pbVar3 = local_2c;
        }
        if (*(uint **)local_18 == nullptr) {
          *(undefined4 *)((int)&local_20[0xe].data + 2) = 0xffffffff;
          pbVar9 = (byte *)((int)&local_20[0xf].flags + 2);
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
        }
        else {
          local_c = (byte *)FUN_006b0020(*(uint **)local_18,(int *)&local_8);
          pbVar3 = local_c;
          pbVar9 = pbVar4;
          for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
            pbVar3 = pbVar3 + 4;
            pbVar9 = pbVar9 + 4;
          }
          for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pbVar9 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            pbVar9 = pbVar9 + 1;
          }
          FreeAndNull(&local_c);
          *(DArrayTy **)((int)&local_20[0xe].data + 2) = local_1c;
          *(AnonNested_00443F30_0839_FB957E77 **)((int)&local_20[0xf].flags + 2) = local_8;
          pbVar4 = pbVar4 + (int)local_8;
          local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
          pbVar3 = local_2c;
        }
        local_24 = (AnonShape_00443F30_5DF553AC *)((int)local_24 + 0x14);
        local_18 = (DArrayTy *)&((AnonShape_00443F30_9F0248D4 *)((int)local_18 + 0xc))->field_0004;
      } while ((int)local_24 < 100);
      local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[0xdd].field_0004 + 2);
      local_14 = (AnonShape_00443F30_5DF553AC *)&local_14[1].field_0x26e;
    } while ((int)local_10 < 0x7fa2ed);
    local_18 = nullptr;
    local_10 = (AnonShape_00443F30_9F0248D4 *)&g_packedRecords_A62x8[0].field452_0x211;
    do {
      local_24 = nullptr;
      local_20 = (DArrayTy *)local_10;
      do {
        if ((uint *)local_20->flags == nullptr) {
          pbVar9 = pbVar3 + (int)local_18 + (int)local_24 + 0x246;
          pbVar9[0] = 0xff;
          pbVar9[1] = 0xff;
          pbVar9[2] = 0xff;
          pbVar9[3] = 0xff;
          pbVar9 = pbVar3 + (int)local_18 + (int)local_24 + 0x24a;
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
        }
        else {
          local_c = (byte *)FUN_006b0020((uint *)local_20->flags,(int *)&local_8);
          pbVar3 = local_c;
          pbVar9 = pbVar4;
          for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
            pbVar3 = pbVar3 + 4;
            pbVar9 = pbVar9 + 4;
          }
          for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pbVar9 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            pbVar9 = pbVar9 + 1;
          }
          FreeAndNull(&local_c);
          *(DArrayTy **)(local_2c + (int)local_18 + (int)local_24 + 0x246) = local_1c;
          *(AnonNested_00443F30_0839_FB957E77 **)(local_2c + (int)local_18 + (int)local_24 + 0x24a)
               = local_8;
          pbVar4 = pbVar4 + (int)local_8;
          local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
          pbVar3 = local_2c;
        }
        local_24 = (AnonShape_00443F30_5DF553AC *)((int)local_24 + 0x14);
        local_20 = (DArrayTy *)&local_20->capacity;
      } while ((int)local_24 < 200);
      local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[0xdd].field_0004 + 2);
      local_18 = (DArrayTy *)((int)local_18 + 0xaab);
    } while ((int)local_10 < 0x7fa341);
    local_24 = (AnonShape_00443F30_5DF553AC *)(pbVar3 + 0xa83);
    local_18 = (DArrayTy *)&g_packedRecords_A62x8[0].field_0x7ee;
    do {
      local_10 = (AnonShape_00443F30_9F0248D4 *)local_24;
      local_30 = (int *)0x6;
      local_20 = local_18;
      do {
        local_c = (byte *)FUN_006b0020(&local_20->flags,(int *)&local_8);
        pbVar3 = local_c;
        pbVar9 = pbVar4;
        for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar3;
          pbVar3 = pbVar3 + 4;
          pbVar9 = pbVar9 + 4;
        }
        for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pbVar9 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          pbVar9 = pbVar9 + 1;
        }
        FreeAndNull(&local_c);
        local_10[-1].field_0008 = local_1c;
        *(AnonNested_00443F30_0839_FB957E77 **)local_10 = local_8;
        local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
        local_10 = (AnonShape_00443F30_9F0248D4 *)&local_10->field_0008;
        pbVar4 = pbVar4 + (int)local_8;
        local_20 = (DArrayTy *)&local_20[2].iteratorIndex;
        local_30 = (int *)((int)local_30 + -1);
      } while (local_30 != nullptr);
      local_18 = (DArrayTy *)((int)&local_18[0x53].flags + 2);
      local_24 = (AnonShape_00443F30_5DF553AC *)
                 ((int)&((AnonShape_00443F30_9F0248D4 *)((int)local_24 + 0xaa4))->field_0004 + 3);
    } while ((int)local_18 < 0x7fa91e);
    local_30 = &g_packedRecords_A62x8[0].field2377_0x9f6;
    local_10 = (AnonShape_00443F30_9F0248D4 *)(local_2c + 0xa73);
    do {
      local_10->field_0008 = (DArrayTy *)local_30[5];
      local_20 = (DArrayTy *)*local_30;
      if ((local_20 == nullptr) ||
         (local_24 = (AnonShape_00443F30_5DF553AC *)local_20->count,
         local_24 == nullptr)) {
        *(undefined4 *)local_10 = 0xffffffff;
        local_10->field_0004 = 0;
        pbVar3 = pbVar4;
      }
      else {
        local_18 = nullptr;
        local_8 = (AnonNested_00443F30_0839_FB957E77 *)((int)local_24 * 0x18);
        *(DArrayTy **)local_10 = local_1c;
        local_10->field_0004 = local_8;
        pbVar3 = pbVar4 + (int)local_8;
        local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
        if (0 < (int)local_24) {
          pAVar11 = (AnonShape_00443F30_5DF553AC *)(pbVar4 + 8);
          do {
            local_14 = pAVar11;
            DArrayGetElement(local_20,(uint)local_18,&local_40);
            if (local_40 == nullptr) {
              *(undefined4 *)&pAVar11[-1].field_0x835 = 0xffffffff;
              pAVar11[-1].field_0839 = nullptr;
            }
            else {
              local_c = (byte *)FUN_006b0020(local_40,(int *)&local_8);
              pbVar4 = local_c;
              pbVar9 = pbVar3;
              for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pbVar9 = *(undefined4 *)pbVar4;
                pbVar4 = pbVar4 + 4;
                pbVar9 = pbVar9 + 4;
              }
              for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                *pbVar9 = *pbVar4;
                pbVar4 = pbVar4 + 1;
                pbVar9 = pbVar9 + 1;
              }
              FreeAndNull(&local_c);
              *(DArrayTy **)&local_14[-1].field_0x835 = local_1c;
              local_14[-1].field_0839 = local_8;
              pbVar3 = pbVar3 + (int)local_8;
              local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
              pAVar11 = local_14;
            }
            if (local_3c == nullptr) {
              *(undefined4 *)pAVar11 = 0xffffffff;
              *(undefined4 *)&pAVar11->field_0x4 = 0;
            }
            else {
              local_c = (byte *)FUN_006b0020(local_3c,(int *)&local_8);
              pbVar4 = local_c;
              pbVar9 = pbVar3;
              for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pbVar9 = *(undefined4 *)pbVar4;
                pbVar4 = pbVar4 + 4;
                pbVar9 = pbVar9 + 4;
              }
              for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                *pbVar9 = *pbVar4;
                pbVar4 = pbVar4 + 1;
                pbVar9 = pbVar9 + 1;
              }
              FreeAndNull(&local_c);
              *(DArrayTy **)local_14 = local_1c;
              *(AnonNested_00443F30_0839_FB957E77 **)&local_14->field_0x4 = local_8;
              pbVar3 = pbVar3 + (int)local_8;
              local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
              pAVar11 = local_14;
            }
            if (local_38 == nullptr) {
              *(undefined4 *)&pAVar11->field_0x8 = 0xffffffff;
              *(undefined4 *)&pAVar11->field_0xc = 0;
            }
            else {
              local_c = (byte *)FUN_006b0020(local_38,(int *)&local_8);
              pbVar4 = local_c;
              pbVar9 = pbVar3;
              for (uVar13 = (uint)local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pbVar9 = *(undefined4 *)pbVar4;
                pbVar4 = pbVar4 + 4;
                pbVar9 = pbVar9 + 4;
              }
              for (uVar13 = (uint)local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                *pbVar9 = *pbVar4;
                pbVar4 = pbVar4 + 1;
                pbVar9 = pbVar9 + 1;
              }
              FreeAndNull(&local_c);
              *(DArrayTy **)&local_14->field_0x8 = local_1c;
              *(AnonNested_00443F30_0839_FB957E77 **)&local_14->field_0xc = local_8;
              pbVar3 = pbVar3 + (int)local_8;
              local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
              pAVar11 = local_14;
            }
            local_18 = (DArrayTy *)((int)local_18 + 1);
            pAVar11 = (AnonShape_00443F30_5DF553AC *)&pAVar11->field_0x18;
          } while ((int)local_18 < (int)local_24);
        }
      }
      /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
      local_30 = (int *)((int)local_30 + 0xa62);
      local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[0xe3].field_0004 + 3);
      pbVar4 = pbVar3;
    } while ((int)local_30 < 0x7fab26);
    uVar13 = (uint)g_worldGrid.planeStride;
    pbVar4 = DAT_007fa168;
    memmove(pbVar3, pbVar4, uVar13); /* compiler REP MOVS byte copy */
    *(DArrayTy **)(local_2c + 0x5588) = local_1c;
    *(uint *)(local_2c + 0x558c) = uVar13;
    g_currentExceptionFrame = local_88.previous;
    *param_1 = local_28;
    return local_2c;
  }
  g_currentExceptionFrame = local_88.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x270e,0,iVar2,"%s",
                             "STAllPlayersC::SaveAllPlData");
  if (iVar5 == 0) {
    RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_allpl.cpp",9999);
    *param_1 = local_28;
    return local_2c;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

