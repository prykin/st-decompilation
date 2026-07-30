#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SaveAllPlData */

undefined4 * __thiscall STAllPlayersC::SaveAllPlData(STAllPlayersC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  byte *puVar3;
  dword *pdVar4;
  int iVar5;
  int *piVar6;
  dword *pdVar7;
  DArrayTy **ppDVar9;
  byte *puVar10;
  dword *pdVar11;
  byte *puVar12;
  DArrayTy *pDVar13;
  AnonShape_00443F30_5DF553AC *pAVar14;
  uint *puVar15;
  uint uVar16;
  byte *puVar17;
  AnonShape_00443F30_9F0248D4 *pAVar18;
  InternalExceptionFrame local_88;
  STAllPlayersC *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  AnonShape_00443F30_9F0248D4 *local_34;
  DArrayTy **local_30;
  undefined4 *local_2c;
  uint local_28;
  AnonShape_00443F30_5DF553AC *local_24;
  DArrayTy *local_20;
  DArrayTy *local_1c;
  DArrayTy *local_18;
  AnonShape_00443F30_5DF553AC *local_14;
  AnonShape_00443F30_9F0248D4 *local_10;
  undefined4 *local_c;
  AnonNested_00443F30_0839_FB957E77 *local_8;

  local_34 = (AnonShape_00443F30_9F0248D4 *)0x4;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_44 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  if (iVar2 == 0) {
    iVar2 = 0x5590;
    local_14 = (AnonShape_00443F30_5DF553AC *)&g_playerRuntime[0].tempSlots[1][0].objectIds;
    local_28 = 0x5590;
    do {
      if (0 < (int)local_34) {
        local_10 = local_34;
        puVar3 = (byte *)&local_14[-1].field_0x68f;
        do {
          if ((uint *)*puVar3 != (uint *)0x0) {
            local_c = (undefined4 *)FUN_006b0020((uint *)*puVar3,(int *)&local_8);
            FreeAndNull(&local_c);
            iVar2 = (int)&(local_8->field_0000).flags + iVar2;
            local_28 = iVar2;
          }
          puVar3 = (byte *)(puVar3 + 1);
          local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        } while (local_10 != (AnonShape_00443F30_9F0248D4 *)0x0);
      }
      local_10 = (AnonShape_00443F30_9F0248D4 *)0x5;
      pAVar14 = local_14;
      do {
        if (*(uint **)&pAVar14[-1].field_0x7ed != (uint *)0x0) {
          local_c = (undefined4 *)FUN_006b0020(*(uint **)&pAVar14[-1].field_0x7ed,(int *)&local_8);
          FreeAndNull(&local_c);
          iVar2 = (int)&(local_8->field_0000).flags + iVar2;
          local_28 = iVar2;
        }
        if (*(uint **)pAVar14 != (uint *)0x0) {
          local_c = (undefined4 *)FUN_006b0020(*(uint **)pAVar14,(int *)&local_8);
          FreeAndNull(&local_c);
          iVar2 = (int)&(local_8->field_0000).flags + iVar2;
          local_28 = iVar2;
        }
        pAVar14 = (AnonShape_00443F30_5DF553AC *)&pAVar14->field_0x10;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
      } while (local_10 != (AnonShape_00443F30_9F0248D4 *)0x0);
      local_10 = (AnonShape_00443F30_9F0248D4 *)0xa;
      puVar3 = (byte *)&local_14->field_0x54;
      do {
        if ((uint *)*puVar3 != (uint *)0x0) {
          local_c = (undefined4 *)FUN_006b0020((uint *)*puVar3,(int *)&local_8);
          FreeAndNull(&local_c);
          iVar2 = (int)&(local_8->field_0000).flags + iVar2;
          local_28 = iVar2;
        }
        puVar3 = (byte *)(puVar3 + 4);
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
      } while (local_10 != (AnonShape_00443F30_9F0248D4 *)0x0);
      local_10 = (AnonShape_00443F30_9F0248D4 *)0x6;
      puVar15 = (uint *)&local_14->field_0x631;
      do {
        local_c = (undefined4 *)FUN_006b0020(puVar15,(int *)&local_8);
        FreeAndNull(&local_c);
        iVar2 = (int)&(local_8->field_0000).flags + iVar2;
        puVar15 = puVar15 + 0x11;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        local_28 = iVar2;
      } while (local_10 != (AnonShape_00443F30_9F0248D4 *)0x0);
      local_20 = &local_14->field_0839->field_0000;
      local_10 = (AnonShape_00443F30_9F0248D4 *)0x0;
      if (((AnonNested_00443F30_0839_FB957E77 *)local_20 != (AnonNested_00443F30_0839_FB957E77 *)0x0
          ) && (local_24 = (AnonShape_00443F30_5DF553AC *)
                           (((AnonNested_00443F30_0839_FB957E77 *)local_20)->field_0000).count,
               local_24 != (AnonShape_00443F30_5DF553AC *)0x0)) {
        uVar16 = 0;
        iVar2 = iVar2 + (int)local_24 * 0x18;
        local_28 = iVar2;
        if (0 < (int)local_24) {
          do {
            DArrayGetElement(local_20,uVar16,&local_40);
            if (local_40 != (uint *)0x0) {
              local_c = (undefined4 *)FUN_006b0020(local_40,(int *)&local_8);
              FreeAndNull(&local_c);
              iVar2 = (int)&(local_8->field_0000).flags + iVar2;
              local_28 = iVar2;
            }
            if (local_3c != (uint *)0x0) {
              local_c = (undefined4 *)FUN_006b0020(local_3c,(int *)&local_8);
              FreeAndNull(&local_c);
              iVar2 = (int)&(local_8->field_0000).flags + iVar2;
              local_28 = iVar2;
            }
            if (local_38 != (uint *)0x0) {
              local_c = (undefined4 *)FUN_006b0020(local_38,(int *)&local_8);
              FreeAndNull(&local_c);
              iVar2 = (int)&(local_8->field_0000).flags + iVar2;
              local_28 = iVar2;
            }
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < (int)local_24);
        }
      }
      local_14 = (AnonShape_00443F30_5DF553AC *)&local_14[1].field_0x225;
    } while ((int)local_14 < 0x7fa2ed);
    local_28 = iVar2 + g_worldGrid.planeStride;
    puVar3 = (byte *)(Library::DKW::LIB::MemAlloc(local_28));
    pdVar4 = puVar3 + 2;
    *puVar3 = local_44->field_001C;
    ppDVar9 = &g_playerRuntime[0].objects;
    do {
      local_10 = (AnonShape_00443F30_9F0248D4 *)0x5;
      pdVar4[-1] = ppDVar9[-1]->count;
      *pdVar4 = (*ppDVar9)->count;
      pdVar4[9] = *(dword *)((int)ppDVar9 + 0x16);
      pdVar4[10] = *(dword *)((int)ppDVar9 + 0x1a);
      pdVar4[0xb] = *(dword *)((int)ppDVar9 + 0x1e);
      pdVar11 = (dword *)((int)ppDVar9 + 0x22);
      pdVar7 = pdVar4 + 0xc;
      memmove(pdVar7, pdVar11, 0x138); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      pdVar4[0xc] = 0;
      pdVar4[0xd] = 0;
      pdVar4[0xe] = 0;
      pdVar4[0x10] = 0;
      pdVar4[0x11] = 0;
      pdVar4[0x12] = 0;
      pdVar4[0x14] = 0;
      pdVar4[0x18] = 0;
      pdVar4[0x1c] = 0;
      pdVar4[0x20] = 0;
      pdVar4[0x24] = 0;
      pdVar4[0x28] = 0;
      pdVar4[0x2c] = 0;
      pdVar4[0x30] = 0;
      pdVar4[0x34] = 0;
      pdVar4[0x38] = 0;
      pdVar4[0x3c] = 0;
      pdVar4[0x40] = 0;
      pdVar4[0x44] = 0;
      pdVar4[0x48] = 0;
      pdVar4[0x4c] = 0;
      pdVar4[0x50] = 0;
      pdVar4[0x54] = 0;
      pdVar4[0x58] = 0;
      pdVar4[0x59] = 0;
      pdVar11 = pdVar4 + 0x5b;
      piVar6 = (int *)((int)ppDVar9 + 0x15e);
      do {
        pdVar11[-1] = ((STPlayerTempSlot *)(piVar6 + -1))->objectType;
        *pdVar11 = *piVar6;
        *(short *)(pdVar11 + 1) = *(short *)(piVar6 + 1);
        *(short *)((int)pdVar11 + 0xe) = *(short *)((int)piVar6 + 10);
        pdVar11[0x18] = piVar6[0x13];
        pdVar11[0x19] = piVar6[0x14];
        *(short *)(pdVar11 + 0x1a) = (short)piVar6[0x15];
        *(undefined2 *)((int)pdVar11 + 0x72) = *(undefined2 *)((int)piVar6 + 0x5a);
        pdVar11 = pdVar11 + 5;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        piVar6 = piVar6 + 4;
      } while (local_10 != (AnonShape_00443F30_9F0248D4 *)0x0);
      pdVar11 = pdVar4 + 0x8e;
      pdVar4[0x8c] = *(dword *)((int)ppDVar9 + 0x1fa);
      local_10 = (AnonShape_00443F30_9F0248D4 *)0xa;
      pdVar7 = (dword *)((int)ppDVar9 + 0x202);
      do {
        pdVar11[-1] = pdVar7[-1];
        *pdVar11 = *pdVar7;
        *(short *)(pdVar11 + 1) = (short)pdVar7[1];
        *(undefined2 *)((int)pdVar11 + 0xe) = *(undefined2 *)((int)pdVar7 + 10);
        pdVar11 = pdVar11 + 5;
        local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[-1].field_0008 + 3);
        pdVar7 = pdVar7 + 4;
      } while (local_10 != (AnonShape_00443F30_9F0248D4 *)0x0);
      pdVar4[0xbf] = *(dword *)((int)ppDVar9 + 0x29e);
      pdVar4[0xc0] = *(dword *)((int)ppDVar9 + 0x2a2);
      pdVar4[0xc1] = *(dword *)((int)ppDVar9 + 0x2a6);
      pdVar4[0xc2] = *(dword *)((int)ppDVar9 + 0x2aa);
      pdVar4[0xc3] = *(dword *)((int)ppDVar9 + 0x2ae);
      pdVar4[0xc4] = *(dword *)((int)ppDVar9 + 0x2b2);
      pdVar4[0xc5] = *(dword *)((int)ppDVar9 + 0x2b6);
      pdVar4[0xc6] = *(dword *)((int)ppDVar9 + 0x2ba);
      pdVar4[199] = *(dword *)((int)ppDVar9 + 0x2be);
      pdVar4[200] = *(dword *)((int)ppDVar9 + 0x2c2);
      pdVar4[0xc9] = *(dword *)((int)ppDVar9 + 0x2c6);
      pdVar4[0xca] = *(dword *)((int)ppDVar9 + 0x2ca);
      pdVar4[0xcb] = *(dword *)((int)ppDVar9 + 0x2ce);
      pdVar4[0xcc] = *(dword *)((int)ppDVar9 + 0x2d2);
      pdVar4[0xcd] = *(dword *)((int)ppDVar9 + 0x2d6);
      pdVar4[0xce] = *(dword *)((int)ppDVar9 + 0x2da);
      pdVar11 = (dword *)((int)ppDVar9 + 0x2e2);
      pdVar7 = pdVar4 + 0xcf;
      memmove(pdVar7, pdVar11, 0x14); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      pdVar11 = (dword *)((int)ppDVar9 + 0x2f6);
      pdVar7 = pdVar4 + 0xd4;
      memmove(pdVar7, pdVar11, 0x14); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      pdVar11 = (dword *)((int)ppDVar9 + 0x30a);
      pdVar7 = pdVar4 + 0xd9;
      memmove(pdVar7, pdVar11, 0x14); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      pdVar11 = (dword *)((int)ppDVar9 + 0x31e);
      pdVar7 = pdVar4 + 0xde;
      memmove(pdVar7, pdVar11, 0x26c); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      pdVar11 = (dword *)((int)ppDVar9 + 0x58a);
      pdVar7 = pdVar4 + 0x179;
      memmove(pdVar7, pdVar11, 0x1a8); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      pdVar11 = (dword *)((int)ppDVar9 + 0x732);
      pdVar7 = pdVar4 + 0x1e3;
      memmove(pdVar7, pdVar11, 0x9b); /* compiler REP MOVS byte copy */
      iVar2 = 0;
      *(undefined4 *)((int)pdVar4 + 0x827) = *(undefined4 *)((int)ppDVar9 + 0x7cd);
      puVar10 = (byte *)((int)ppDVar9 + 0x7d1);
      puVar12 = (byte *)((int)pdVar4 + 0x82b);
      for (iVar2 = 0x66; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar10;
        puVar10 = (byte *)(puVar10 + 1);
        puVar12 = (byte *)(puVar12 + 1);
      }
      *(undefined4 *)((int)pdVar4 + 0x9c3) = *(undefined4 *)((int)ppDVar9 + 0x969);
      *(undefined4 *)((int)pdVar4 + 0x9c7) = *(undefined4 *)((int)ppDVar9 + 0x96d);
      puVar10 = (byte *)((int)ppDVar9 + 0x971);
      puVar12 = (byte *)((int)pdVar4 + 0x9cb);
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar10;
        puVar10 = (byte *)(puVar10 + 1);
        puVar12 = (byte *)(puVar12 + 1);
      }
      *(undefined4 *)((int)pdVar4 + 0x9e3) = *(undefined4 *)((int)ppDVar9 + 0x98d);
      *(undefined4 *)((int)pdVar4 + 0x9e7) = *(undefined4 *)((int)ppDVar9 + 0x991);
      *(undefined4 *)((int)pdVar4 + 0x9eb) = *(undefined4 *)((int)ppDVar9 + 0x995);
      puVar10 = (byte *)((int)ppDVar9 + 0x999);
      puVar12 = (byte *)((int)pdVar4 + 0x9ef);
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar10;
        puVar10 = (byte *)(puVar10 + 1);
        puVar12 = (byte *)(puVar12 + 1);
      }
      puVar10 = (byte *)((int)ppDVar9 + 0xa05);
      puVar12 = (byte *)((int)pdVar4 + 0xa17);
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar10;
        puVar10 = (byte *)(puVar10 + 1);
        puVar12 = (byte *)(puVar12 + 1);
      }
      puVar10 = (byte *)((int)ppDVar9 + 0xa19);
      puVar12 = (byte *)((int)pdVar4 + 0xa2b);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar10;
        puVar10 = (byte *)(puVar10 + 1);
        puVar12 = (byte *)(puVar12 + 1);
      }
      puVar10 = (byte *)((int)ppDVar9 + 0xa39);
      puVar12 = (byte *)((int)pdVar4 + 0xa4b);
      /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
      ppDVar9 = (DArrayTy **)((int)ppDVar9 + 0xa62);
      pdVar4 = (dword *)((int)pdVar4 + 0xaab);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar10;
        puVar10 = (byte *)(puVar10 + 1);
        puVar12 = (byte *)(puVar12 + 1);
      }
    } while ((int)ppDVar9 < 0x7fa139);
    local_24 = (AnonShape_00443F30_5DF553AC *)&g_playerRuntime[0].field6_0xf;
    puVar10 = (byte *)(puVar3 + 0x1564);
    puVar12 = (byte *)(&DAT_007fa138);
    puVar17 = (byte *)(puVar3 + 0x1557);
    memmove(puVar17, puVar12, 0x18); /* compiler REP MOVS byte copy */
    local_1c = (DArrayTy *)0x5590;
    local_20 = (DArrayTy *)0x0;
    puVar3[0x155d] = PTR_007fa154->count;
    puVar3[0x155e] = PTR_007fa158->count;
    puVar3[0x155f] = PTR_007fa15c->count;
    puVar3[0x1560] = PTR_007fa160->count;
    puVar3[0x1561] = PTR_007fa164->count;
    local_10 = (AnonShape_00443F30_9F0248D4 *)0x0;
    pAVar18 = local_34;
    local_2c = puVar3;
    do {
      local_18 = (DArrayTy *)0x0;
      pDVar13 = local_20;
      local_14 = local_24;
      if (0 < (int)pAVar18) {
        do {
          if (*(uint **)local_14 == (uint *)0x0) {
            *(undefined4 *)((int)(&pDVar13->count + (int)local_18 * 2) + (int)puVar3) = 0xffffffff;
            *(undefined4 *)((int)(&pDVar13->capacity + (int)local_18 * 2) + (int)puVar3) = 0;
          }
          else {
            local_c = (undefined4 *)FUN_006b0020(*(uint **)local_14,(int *)&local_8);
            puVar3 = (byte *)(local_c);
            puVar12 = (byte *)(puVar10);
            for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *puVar12 = *puVar3;
              puVar3 = (byte *)(puVar3 + 1);
              puVar12 = (byte *)(puVar12 + 1);
            }
            for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined1 *)puVar12 = *(undefined1 *)puVar3;
              puVar3 = (byte *)((int)puVar3 + 1);
              puVar12 = (byte *)((int)puVar12 + 1);
            }
            FreeAndNull(&local_c);
            *(DArrayTy **)((int)(&local_20->count + (int)local_18 * 2) + (int)local_2c) = local_1c;
            *(AnonNested_00443F30_0839_FB957E77 **)
             ((int)(&local_20->capacity + (int)local_18 * 2) + (int)local_2c) = local_8;
            puVar10 = (byte *)((int)puVar10 + (int)local_8);
            local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
            puVar3 = (byte *)(local_2c);
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
    local_14 = (AnonShape_00443F30_5DF553AC *)0x0;
    local_10 = (AnonShape_00443F30_9F0248D4 *)&g_playerRuntime[0].tempSlots[1][0].objectIds;
    do {
      local_24 = (AnonShape_00443F30_5DF553AC *)0x0;
      local_18 = (DArrayTy *)local_10;
      do {
        if ((uint *)((AnonShape_00443F30_9F0248D4 *)((int)local_18 + -0x54))->field_0004 ==
            (uint *)0x0) {
          local_20 = (DArrayTy *)(&local_14->field_0x0 + (int)local_24 + (int)puVar3);
          *(undefined4 *)((int)&local_20[0xb].growCallback + 2) = 0xffffffff;
          *(undefined4 *)((int)&local_20[0xb].data + 2) = 0;
        }
        else {
          local_c = (undefined4 *)
                    FUN_006b0020((uint *)((AnonShape_00443F30_9F0248D4 *)((int)local_18 + -0x54))->
                                         field_0004,(int *)&local_8);
          puVar3 = (byte *)(local_c);
          puVar12 = (byte *)(puVar10);
          for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *puVar12 = *puVar3;
            puVar3 = (byte *)(puVar3 + 1);
            puVar12 = (byte *)(puVar12 + 1);
          }
          for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar3;
            puVar3 = (byte *)((int)puVar3 + 1);
            puVar12 = (byte *)((int)puVar12 + 1);
          }
          FreeAndNull(&local_c);
          local_20 = (DArrayTy *)((int)local_2c + (int)(&local_14->field_0x0 + (int)local_24));
          *(DArrayTy **)((int)&local_20[0xb].growCallback + 2) = local_1c;
          *(AnonNested_00443F30_0839_FB957E77 **)((int)&local_20[0xb].data + 2) = local_8;
          puVar10 = (byte *)((int)puVar10 + (int)local_8);
          local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
          puVar3 = (byte *)(local_2c);
        }
        if (*(uint **)local_18 == (uint *)0x0) {
          *(undefined4 *)((int)&local_20[0xe].data + 2) = 0xffffffff;
          *(undefined4 *)((int)&local_20[0xf].flags + 2) = 0;
        }
        else {
          local_c = (undefined4 *)FUN_006b0020(*(uint **)local_18,(int *)&local_8);
          puVar3 = (byte *)(local_c);
          puVar12 = (byte *)(puVar10);
          for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *puVar12 = *puVar3;
            puVar3 = (byte *)(puVar3 + 1);
            puVar12 = (byte *)(puVar12 + 1);
          }
          for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar3;
            puVar3 = (byte *)((int)puVar3 + 1);
            puVar12 = (byte *)((int)puVar12 + 1);
          }
          FreeAndNull(&local_c);
          *(DArrayTy **)((int)&local_20[0xe].data + 2) = local_1c;
          *(AnonNested_00443F30_0839_FB957E77 **)((int)&local_20[0xf].flags + 2) = local_8;
          puVar10 = (byte *)((int)puVar10 + (int)local_8);
          local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
          puVar3 = (byte *)(local_2c);
        }
        local_24 = (AnonShape_00443F30_5DF553AC *)((int)local_24 + 0x14);
        local_18 = (DArrayTy *)&((AnonShape_00443F30_9F0248D4 *)((int)local_18 + 0xc))->field_0004;
      } while ((int)local_24 < 100);
      local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[0xdd].field_0004 + 2);
      local_14 = (AnonShape_00443F30_5DF553AC *)&local_14[1].field_0x26e;
    } while ((int)local_10 < 0x7fa2ed);
    local_18 = (DArrayTy *)0x0;
    local_10 = (AnonShape_00443F30_9F0248D4 *)&g_playerRuntime[0].field328_0x211;
    do {
      local_24 = (AnonShape_00443F30_5DF553AC *)0x0;
      local_20 = (DArrayTy *)local_10;
      do {
        if ((uint *)local_20->flags == (uint *)0x0) {
          *(undefined4 *)((int)puVar3 + (int)local_18 + (int)local_24 + 0x246) = 0xffffffff;
          *(undefined4 *)((int)puVar3 + (int)local_18 + (int)local_24 + 0x24a) = 0;
        }
        else {
          local_c = (undefined4 *)FUN_006b0020((uint *)local_20->flags,(int *)&local_8);
          puVar3 = (byte *)(local_c);
          puVar12 = (byte *)(puVar10);
          for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *puVar12 = *puVar3;
            puVar3 = (byte *)(puVar3 + 1);
            puVar12 = (byte *)(puVar12 + 1);
          }
          for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar3;
            puVar3 = (byte *)((int)puVar3 + 1);
            puVar12 = (byte *)((int)puVar12 + 1);
          }
          FreeAndNull(&local_c);
          *(DArrayTy **)((int)local_2c + (int)local_18 + (int)local_24 + 0x246) = local_1c;
          *(AnonNested_00443F30_0839_FB957E77 **)
           ((int)local_2c + (int)local_18 + (int)local_24 + 0x24a) = local_8;
          puVar10 = (byte *)((int)puVar10 + (int)local_8);
          local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
          puVar3 = (byte *)(local_2c);
        }
        local_24 = (AnonShape_00443F30_5DF553AC *)((int)local_24 + 0x14);
        local_20 = (DArrayTy *)&local_20->capacity;
      } while ((int)local_24 < 200);
      local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[0xdd].field_0004 + 2);
      local_18 = (DArrayTy *)((int)local_18 + 0xaab);
    } while ((int)local_10 < 0x7fa341);
    local_24 = (AnonShape_00443F30_5DF553AC *)((int)puVar3 + 0xa83);
    local_18 = (DArrayTy *)&g_playerRuntime[0].field_0x7ee;
    do {
      local_10 = (AnonShape_00443F30_9F0248D4 *)local_24;
      local_30 = (DArrayTy **)0x6;
      local_20 = local_18;
      do {
        local_c = (undefined4 *)FUN_006b0020(&local_20->flags,(int *)&local_8);
        puVar3 = (byte *)(local_c);
        puVar12 = (byte *)(puVar10);
        for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar12 = *puVar3;
          puVar3 = (byte *)(puVar3 + 1);
          puVar12 = (byte *)(puVar12 + 1);
        }
        for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar3;
          puVar3 = (byte *)((int)puVar3 + 1);
          puVar12 = (byte *)((int)puVar12 + 1);
        }
        FreeAndNull(&local_c);
        local_10[-1].field_0008 = local_1c;
        *(AnonNested_00443F30_0839_FB957E77 **)local_10 = local_8;
        local_1c = (DArrayTy *)((int)&local_1c->flags + (int)local_8);
        local_10 = (AnonShape_00443F30_9F0248D4 *)&local_10->field_0008;
        puVar10 = (byte *)((int)puVar10 + (int)local_8);
        local_20 = (DArrayTy *)&local_20[2].iteratorIndex;
        local_30 = (DArrayTy **)((int)local_30 + -1);
      } while (local_30 != (DArrayTy **)0x0);
      local_18 = (DArrayTy *)((int)&local_18[0x53].flags + 2);
      local_24 = (AnonShape_00443F30_5DF553AC *)
                 ((int)&((AnonShape_00443F30_9F0248D4 *)((int)local_24 + 0xaa4))->field_0004 + 3);
    } while ((int)local_18 < 0x7fa91e);
    local_30 = &g_playerRuntime[0].pgPairs;
    local_10 = (AnonShape_00443F30_9F0248D4 *)((int)local_2c + 0xa73);
    do {
      local_10->field_0008 = local_30[5];
      local_20 = *local_30;
      if ((local_20 == (DArrayTy *)0x0) ||
         (local_24 = (AnonShape_00443F30_5DF553AC *)local_20->count,
         local_24 == (AnonShape_00443F30_5DF553AC *)0x0)) {
        *(int *)local_10 = -1;
        local_10->field_0004 = 0;
        puVar3 = (byte *)(puVar10);
      }
      else {
        local_18 = (DArrayTy *)0x0;
        local_8 = (AnonNested_00443F30_0839_FB957E77 *)((int)local_24 * 0x18);
        *(DArrayTy **)local_10 = local_1c;
        local_10->field_0004 = local_8;
        puVar3 = (byte *)(puVar10 + (int)local_24 * 6);
        local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
        if (0 < (int)local_24) {
          pAVar14 = (AnonShape_00443F30_5DF553AC *)(puVar10 + 2);
          do {
            local_14 = pAVar14;
            DArrayGetElement(local_20,(uint)local_18,&local_40);
            if (local_40 == (uint *)0x0) {
              *(undefined4 *)&pAVar14[-1].field_0x835 = 0xffffffff;
              pAVar14[-1].field_0839 = (AnonNested_00443F30_0839_FB957E77 *)0x0;
            }
            else {
              local_c = (undefined4 *)FUN_006b0020(local_40,(int *)&local_8);
              puVar10 = (byte *)(local_c);
              puVar12 = (byte *)(puVar3);
              for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *puVar12 = *puVar10;
                puVar10 = (byte *)(puVar10 + 1);
                puVar12 = (byte *)(puVar12 + 1);
              }
              for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                puVar10 = (byte *)((int)puVar10 + 1);
                puVar12 = (byte *)((int)puVar12 + 1);
              }
              FreeAndNull(&local_c);
              *(DArrayTy **)&local_14[-1].field_0x835 = local_1c;
              local_14[-1].field_0839 = local_8;
              puVar3 = (byte *)((int)puVar3 + (int)local_8);
              local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
              pAVar14 = local_14;
            }
            if (local_3c == (uint *)0x0) {
              *(undefined4 *)pAVar14 = 0xffffffff;
              *(undefined4 *)&pAVar14->field_0x4 = 0;
            }
            else {
              local_c = (undefined4 *)FUN_006b0020(local_3c,(int *)&local_8);
              puVar10 = (byte *)(local_c);
              puVar12 = (byte *)(puVar3);
              for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *puVar12 = *puVar10;
                puVar10 = (byte *)(puVar10 + 1);
                puVar12 = (byte *)(puVar12 + 1);
              }
              for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                puVar10 = (byte *)((int)puVar10 + 1);
                puVar12 = (byte *)((int)puVar12 + 1);
              }
              FreeAndNull(&local_c);
              *(DArrayTy **)local_14 = local_1c;
              *(AnonNested_00443F30_0839_FB957E77 **)&local_14->field_0x4 = local_8;
              puVar3 = (byte *)((int)puVar3 + (int)local_8);
              local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
              pAVar14 = local_14;
            }
            if (local_38 == (uint *)0x0) {
              *(undefined4 *)&pAVar14->field_0x8 = 0xffffffff;
              *(undefined4 *)&pAVar14->field_0xc = 0;
            }
            else {
              local_c = (undefined4 *)FUN_006b0020(local_38,(int *)&local_8);
              puVar10 = (byte *)(local_c);
              puVar12 = (byte *)(puVar3);
              for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *puVar12 = *puVar10;
                puVar10 = (byte *)(puVar10 + 1);
                puVar12 = (byte *)(puVar12 + 1);
              }
              for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                puVar10 = (byte *)((int)puVar10 + 1);
                puVar12 = (byte *)((int)puVar12 + 1);
              }
              FreeAndNull(&local_c);
              *(DArrayTy **)&local_14->field_0x8 = local_1c;
              *(AnonNested_00443F30_0839_FB957E77 **)&local_14->field_0xc = local_8;
              puVar3 = (byte *)((int)puVar3 + (int)local_8);
              local_1c = (DArrayTy *)((int)&(local_8->field_0000).flags + (int)&local_1c->flags);
              pAVar14 = local_14;
            }
            local_18 = (DArrayTy *)((int)local_18 + 1);
            pAVar14 = (AnonShape_00443F30_5DF553AC *)&pAVar14->field_0x18;
          } while ((int)local_18 < (int)local_24);
        }
      }
      /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
      local_30 = (DArrayTy **)((int)local_30 + 0xa62);
      local_10 = (AnonShape_00443F30_9F0248D4 *)((int)&local_10[0xe3].field_0004 + 3);
      puVar10 = (byte *)(puVar3);
    } while ((int)local_30 < 0x7fab26);
    uVar16 = (uint)g_worldGrid.planeStride;
    puVar10 = (byte *)(DAT_007fa168);
    memmove(puVar3, puVar10, uVar16); /* compiler REP MOVS byte copy */
    local_2c[0x1562] = local_1c;
    local_2c[0x1563] = uVar16;
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

