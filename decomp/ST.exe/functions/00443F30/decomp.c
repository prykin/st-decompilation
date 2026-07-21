#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SaveAllPlData */

undefined4 * __thiscall STAllPlayersC::SaveAllPlData(STAllPlayersC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  dword *pdVar4;
  int iVar5;
  int *piVar6;
  dword *pdVar7;
  uint uVar8;
  DArrayTy **ppDVar9;
  undefined4 *puVar10;
  dword *pdVar11;
  undefined4 *puVar12;
  DArrayTy *pDVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  InternalExceptionFrame local_88;
  STAllPlayersC *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  int local_34;
  DArrayTy **local_30;
  undefined4 *local_2c;
  int local_28;
  uint *local_24;
  DArrayTy *local_20;
  uint local_1c;
  DArrayTy **local_18;
  DArrayTy **local_14;
  DArrayTy **local_10;
  undefined4 *local_c;
  uint local_8;

  local_34 = 4;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_44 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  if (iVar2 == 0) {
    iVar2 = 0x5590;
    local_14 = &g_playerRuntime[0].tempSlots[1][0].objectIds;
    local_28 = 0x5590;
    do {
      if (0 < local_34) {
        local_10 = (DArrayTy **)local_34;
        puVar3 = (undefined4 *)((int)local_14 + -0x1ae);
        do {
          if ((uint *)*puVar3 != (uint *)0x0) {
            local_c = (undefined4 *)FUN_006b0020((uint *)*puVar3,(int *)&local_8);
            FreeAndNull(&local_c);
            iVar2 = iVar2 + local_8;
            local_28 = iVar2;
          }
          puVar3 = puVar3 + 1;
          local_10 = (DArrayTy **)((int)local_10 + -1);
        } while (local_10 != (DArrayTy **)0x0);
      }
      local_10 = (DArrayTy **)0x5;
      ppDVar9 = local_14;
      do {
        if (ppDVar9[-0x14] != (DArrayTy *)0x0) {
          local_c = (undefined4 *)FUN_006b0020(&ppDVar9[-0x14]->flags,(int *)&local_8);
          FreeAndNull(&local_c);
          iVar2 = iVar2 + local_8;
          local_28 = iVar2;
        }
        if (*ppDVar9 != (DArrayTy *)0x0) {
          local_c = (undefined4 *)FUN_006b0020(&(*ppDVar9)->flags,(int *)&local_8);
          FreeAndNull(&local_c);
          iVar2 = iVar2 + local_8;
          local_28 = iVar2;
        }
        ppDVar9 = ppDVar9 + 4;
        local_10 = (DArrayTy **)((int)local_10 + -1);
      } while (local_10 != (DArrayTy **)0x0);
      local_10 = (DArrayTy **)0xa;
      puVar3 = local_14 + 0x15;
      do {
        if ((uint *)*puVar3 != (uint *)0x0) {
          local_c = (undefined4 *)FUN_006b0020((uint *)*puVar3,(int *)&local_8);
          FreeAndNull(&local_c);
          iVar2 = iVar2 + local_8;
          local_28 = iVar2;
        }
        puVar3 = puVar3 + 4;
        local_10 = (DArrayTy **)((int)local_10 + -1);
      } while (local_10 != (DArrayTy **)0x0);
      local_10 = (DArrayTy **)0x6;
      puVar14 = (uint *)((int)local_14 + 0x631);
      do {
        local_c = (undefined4 *)FUN_006b0020(puVar14,(int *)&local_8);
        FreeAndNull(&local_c);
        iVar2 = iVar2 + local_8;
        puVar14 = puVar14 + 0x11;
        local_10 = (DArrayTy **)((int)local_10 + -1);
        local_28 = iVar2;
      } while (local_10 != (DArrayTy **)0x0);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_20 = *(DArrayTy **)((int)local_14 + 0x839);
      local_10 = (DArrayTy **)0x0;
      if ((local_20 != (DArrayTy *)0x0) &&
         (local_24 = (uint *)local_20->count, local_24 != (uint *)0x0)) {
        uVar15 = 0;
        iVar2 = iVar2 + (int)local_24 * 0x18;
        local_28 = iVar2;
        if (0 < (int)local_24) {
          do {
            DArrayGetElement(local_20,uVar15,&local_40);
            if (local_40 != (uint *)0x0) {
              local_c = (undefined4 *)FUN_006b0020(local_40,(int *)&local_8);
              FreeAndNull(&local_c);
              iVar2 = iVar2 + local_8;
              local_28 = iVar2;
            }
            if (local_3c != (uint *)0x0) {
              local_c = (undefined4 *)FUN_006b0020(local_3c,(int *)&local_8);
              FreeAndNull(&local_c);
              iVar2 = iVar2 + local_8;
              local_28 = iVar2;
            }
            if (local_38 != (uint *)0x0) {
              local_c = (undefined4 *)FUN_006b0020(local_38,(int *)&local_8);
              FreeAndNull(&local_c);
              iVar2 = iVar2 + local_8;
              local_28 = iVar2;
            }
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)local_24);
        }
      }
      /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
      local_14 = (DArrayTy **)((int)local_14 + 0xa62);
    } while ((int)local_14 < 0x7fa2ed);
    local_28 = iVar2 + g_worldGrid.planeStride;
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(local_28);
    pdVar4 = puVar3 + 2;
    *puVar3 = local_44->field_001C;
    ppDVar9 = &g_playerRuntime[0].objects;
    do {
      local_10 = (DArrayTy **)0x5;
      pdVar4[-1] = ppDVar9[-1]->count;
      *pdVar4 = (*ppDVar9)->count;
      pdVar4[9] = *(dword *)((int)ppDVar9 + 0x16);
      pdVar4[10] = *(dword *)((int)ppDVar9 + 0x1a);
      pdVar4[0xb] = *(dword *)((int)ppDVar9 + 0x1e);
      pdVar11 = (dword *)((int)ppDVar9 + 0x22);
      pdVar7 = pdVar4 + 0xc;
      for (iVar2 = 0x4e; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pdVar7 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar7 = pdVar7 + 1;
      }
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
        local_10 = (DArrayTy **)((int)local_10 + -1);
        piVar6 = piVar6 + 4;
      } while (local_10 != (DArrayTy **)0x0);
      pdVar11 = pdVar4 + 0x8e;
      pdVar4[0x8c] = *(dword *)((int)ppDVar9 + 0x1fa);
      local_10 = (DArrayTy **)0xa;
      pdVar7 = (dword *)((int)ppDVar9 + 0x202);
      do {
        pdVar11[-1] = pdVar7[-1];
        *pdVar11 = *pdVar7;
        *(short *)(pdVar11 + 1) = (short)pdVar7[1];
        *(undefined2 *)((int)pdVar11 + 0xe) = *(undefined2 *)((int)pdVar7 + 10);
        pdVar11 = pdVar11 + 5;
        local_10 = (DArrayTy **)((int)local_10 + -1);
        pdVar7 = pdVar7 + 4;
      } while (local_10 != (DArrayTy **)0x0);
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
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pdVar7 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar7 = pdVar7 + 1;
      }
      pdVar11 = (dword *)((int)ppDVar9 + 0x2f6);
      pdVar7 = pdVar4 + 0xd4;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pdVar7 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar7 = pdVar7 + 1;
      }
      pdVar11 = (dword *)((int)ppDVar9 + 0x30a);
      pdVar7 = pdVar4 + 0xd9;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pdVar7 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar7 = pdVar7 + 1;
      }
      pdVar11 = (dword *)((int)ppDVar9 + 0x31e);
      pdVar7 = pdVar4 + 0xde;
      for (iVar2 = 0x9b; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pdVar7 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar7 = pdVar7 + 1;
      }
      pdVar11 = (dword *)((int)ppDVar9 + 0x58a);
      pdVar7 = pdVar4 + 0x179;
      for (iVar2 = 0x6a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pdVar7 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar7 = pdVar7 + 1;
      }
      pdVar11 = (dword *)((int)ppDVar9 + 0x732);
      pdVar7 = pdVar4 + 0x1e3;
      for (iVar2 = 0x26; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pdVar7 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar7 = pdVar7 + 1;
      }
      *(short *)pdVar7 = (short)*pdVar11;
      *(undefined1 *)((int)pdVar7 + 2) = *(undefined1 *)((int)pdVar11 + 2);
      *(undefined4 *)((int)pdVar4 + 0x827) = *(undefined4 *)((int)ppDVar9 + 0x7cd);
      puVar10 = (undefined4 *)((int)ppDVar9 + 0x7d1);
      puVar12 = (undefined4 *)((int)pdVar4 + 0x82b);
      for (iVar2 = 0x66; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      *(undefined4 *)((int)pdVar4 + 0x9c3) = *(undefined4 *)((int)ppDVar9 + 0x969);
      *(undefined4 *)((int)pdVar4 + 0x9c7) = *(undefined4 *)((int)ppDVar9 + 0x96d);
      puVar10 = (undefined4 *)((int)ppDVar9 + 0x971);
      puVar12 = (undefined4 *)((int)pdVar4 + 0x9cb);
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      *(undefined4 *)((int)pdVar4 + 0x9e3) = *(undefined4 *)((int)ppDVar9 + 0x98d);
      *(undefined4 *)((int)pdVar4 + 0x9e7) = *(undefined4 *)((int)ppDVar9 + 0x991);
      *(undefined4 *)((int)pdVar4 + 0x9eb) = *(undefined4 *)((int)ppDVar9 + 0x995);
      puVar10 = (undefined4 *)((int)ppDVar9 + 0x999);
      puVar12 = (undefined4 *)((int)pdVar4 + 0x9ef);
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar10 = (undefined4 *)((int)ppDVar9 + 0xa05);
      puVar12 = (undefined4 *)((int)pdVar4 + 0xa17);
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar10 = (undefined4 *)((int)ppDVar9 + 0xa19);
      puVar12 = (undefined4 *)((int)pdVar4 + 0xa2b);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar10 = (undefined4 *)((int)ppDVar9 + 0xa39);
      puVar12 = (undefined4 *)((int)pdVar4 + 0xa4b);
      /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
      ppDVar9 = (DArrayTy **)((int)ppDVar9 + 0xa62);
      pdVar4 = (dword *)((int)pdVar4 + 0xaab);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
    } while ((int)ppDVar9 < 0x7fa139);
    local_24 = &g_playerRuntime[0].field6_0xf;
    puVar10 = puVar3 + 0x1564;
    puVar12 = &DAT_007fa138;
    puVar16 = puVar3 + 0x1557;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    local_1c = 0x5590;
    local_20 = (DArrayTy *)0x0;
    puVar3[0x155d] = PTR_007fa154->count;
    puVar3[0x155e] = PTR_007fa158->count;
    puVar3[0x155f] = PTR_007fa15c->count;
    puVar3[0x1560] = PTR_007fa160->count;
    puVar3[0x1561] = PTR_007fa164->count;
    local_10 = (DArrayTy **)0x0;
    iVar2 = local_34;
    local_2c = puVar3;
    do {
      local_18 = (DArrayTy **)0x0;
      pDVar13 = local_20;
      local_14 = (DArrayTy **)local_24;
      if (0 < iVar2) {
        do {
          if (*local_14 == (DArrayTy *)0x0) {
            *(undefined4 *)((int)pDVar13 + (int)local_18 * 8 + 0xc + (int)puVar3) = 0xffffffff;
            *(undefined4 *)((int)pDVar13 + (int)local_18 * 8 + 0x10 + (int)puVar3) = 0;
          }
          else {
            local_c = (undefined4 *)FUN_006b0020(&(*local_14)->flags,(int *)&local_8);
            puVar3 = local_c;
            puVar12 = puVar10;
            for (uVar15 = local_8 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *puVar12 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar12 = puVar12 + 1;
            }
            for (uVar15 = local_8 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined1 *)puVar12 = *(undefined1 *)puVar3;
              puVar3 = (undefined4 *)((int)puVar3 + 1);
              puVar12 = (undefined4 *)((int)puVar12 + 1);
            }
            FreeAndNull(&local_c);
            *(uint *)((int)local_20 + (int)local_18 * 8 + 0xc + (int)local_2c) = local_1c;
            *(uint *)((int)local_20 + (int)local_18 * 8 + 0x10 + (int)local_2c) = local_8;
            puVar10 = (undefined4 *)((int)puVar10 + local_8);
            local_1c = local_1c + local_8;
            puVar3 = local_2c;
            pDVar13 = local_20;
            iVar2 = local_34;
          }
          local_18 = (DArrayTy **)((int)local_18 + 1);
          local_14 = local_14 + 1;
        } while ((int)local_18 < iVar2);
      }
      /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
      local_24 = (uint *)((int)local_24 + 0xa62);
      local_20 = (DArrayTy *)((int)pDVar13 + 0xaab);
    } while ((int)local_24 < 0x7fa13f);
    local_14 = (DArrayTy **)0x0;
    local_10 = &g_playerRuntime[0].tempSlots[1][0].objectIds;
    do {
      local_24 = (uint *)0x0;
      local_18 = local_10;
      do {
        if (local_18[-0x14] == (DArrayTy *)0x0) {
          local_20 = (DArrayTy *)((int)local_24 + (int)local_14 + (int)puVar3);
          *(undefined4 *)((int)local_20 + 0x17a) = 0xffffffff;
          *(undefined4 *)((int)local_20 + 0x17e) = 0;
        }
        else {
          local_c = (undefined4 *)FUN_006b0020(&local_18[-0x14]->flags,(int *)&local_8);
          puVar3 = local_c;
          puVar12 = puVar10;
          for (uVar15 = local_8 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *puVar12 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar15 = local_8 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          FreeAndNull(&local_c);
          local_20 = (DArrayTy *)((int)local_2c + (int)local_24 + (int)local_14);
          *(uint *)((int)local_20 + 0x17a) = local_1c;
          *(uint *)((int)local_20 + 0x17e) = local_8;
          puVar10 = (undefined4 *)((int)puVar10 + local_8);
          local_1c = local_1c + local_8;
          puVar3 = local_2c;
        }
        if (*local_18 == (DArrayTy *)0x0) {
          *(undefined4 *)((int)local_20 + 0x1de) = 0xffffffff;
          *(undefined4 *)((int)local_20 + 0x1e2) = 0;
        }
        else {
          local_c = (undefined4 *)FUN_006b0020(&(*local_18)->flags,(int *)&local_8);
          puVar3 = local_c;
          puVar12 = puVar10;
          for (uVar15 = local_8 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *puVar12 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar15 = local_8 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          FreeAndNull(&local_c);
          *(uint *)((int)local_20 + 0x1de) = local_1c;
          *(uint *)((int)local_20 + 0x1e2) = local_8;
          puVar10 = (undefined4 *)((int)puVar10 + local_8);
          local_1c = local_1c + local_8;
          puVar3 = local_2c;
        }
        local_24 = (uint *)((int)local_24 + 0x14);
        local_18 = local_18 + 4;
      } while ((int)local_24 < 100);
      /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
      local_10 = (DArrayTy **)((int)local_10 + 0xa62);
      local_14 = (DArrayTy **)((int)local_14 + 0xaab);
    } while ((int)local_10 < 0x7fa2ed);
    local_18 = (DArrayTy **)0x0;
    local_10 = (DArrayTy **)&g_playerRuntime[0].field328_0x211;
    do {
      local_24 = (uint *)0x0;
      local_20 = (DArrayTy *)local_10;
      do {
        if (*(uint **)local_20 == (uint *)0x0) {
          *(undefined4 *)((int)puVar3 + (int)local_18 + (int)local_24 + 0x246) = 0xffffffff;
          *(undefined4 *)((int)puVar3 + (int)local_18 + (int)local_24 + 0x24a) = 0;
        }
        else {
          local_c = (undefined4 *)FUN_006b0020(*(uint **)local_20,(int *)&local_8);
          puVar3 = local_c;
          puVar12 = puVar10;
          for (uVar15 = local_8 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *puVar12 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar15 = local_8 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          FreeAndNull(&local_c);
          *(uint *)((int)local_2c + (int)local_18 + (int)local_24 + 0x246) = local_1c;
          *(uint *)((int)local_2c + (int)local_18 + (int)local_24 + 0x24a) = local_8;
          puVar10 = (undefined4 *)((int)puVar10 + local_8);
          local_1c = local_1c + local_8;
          puVar3 = local_2c;
        }
        local_24 = (uint *)((int)local_24 + 0x14);
        local_20 = (DArrayTy *)((int)local_20 + 0x10);
      } while ((int)local_24 < 200);
      /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
      local_10 = (DArrayTy **)((int)local_10 + 0xa62);
      local_18 = (DArrayTy **)((int)local_18 + 0xaab);
    } while ((int)local_10 < 0x7fa341);
    local_24 = (uint *)((int)puVar3 + 0xa83);
    local_18 = (DArrayTy **)&g_playerRuntime[0].field_0x7ee;
    do {
      local_10 = (DArrayTy **)local_24;
      local_30 = (DArrayTy **)0x6;
      local_20 = (DArrayTy *)local_18;
      do {
        local_c = (undefined4 *)FUN_006b0020(&local_20->flags,(int *)&local_8);
        puVar3 = local_c;
        puVar12 = puVar10;
        for (uVar15 = local_8 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar12 = puVar12 + 1;
        }
        for (uVar15 = local_8 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        FreeAndNull(&local_c);
        local_10[-1] = (DArrayTy *)local_1c;
        *local_10 = (DArrayTy *)local_8;
        local_1c = local_1c + local_8;
        local_10 = local_10 + 2;
        puVar10 = (undefined4 *)((int)puVar10 + local_8);
        local_20 = (DArrayTy *)((int)local_20 + 0x44);
        local_30 = (DArrayTy **)((int)local_30 + -1);
      } while (local_30 != (DArrayTy **)0x0);
      /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
      local_18 = (DArrayTy **)((int)local_18 + 0xa62);
      local_24 = (uint *)((int)local_24 + 0xaab);
    } while ((int)local_18 < 0x7fa91e);
    local_30 = &g_playerRuntime[0].pgPairs;
    local_10 = (DArrayTy **)((int)local_2c + 0xa73);
    do {
      local_10[2] = local_30[5];
      local_20 = *local_30;
      if ((local_20 == (DArrayTy *)0x0) ||
         (local_24 = (uint *)local_20->count, local_24 == (uint *)0x0)) {
        *local_10 = (DArrayTy *)0xffffffff;
        local_10[1] = (DArrayTy *)0x0;
        puVar3 = puVar10;
      }
      else {
        local_18 = (DArrayTy **)0x0;
        local_8 = (int)local_24 * 0x18;
        *local_10 = (DArrayTy *)local_1c;
        local_10[1] = (DArrayTy *)local_8;
        puVar3 = puVar10 + (int)local_24 * 6;
        local_1c = local_1c + local_8;
        if (0 < (int)local_24) {
          ppDVar9 = (DArrayTy **)(puVar10 + 2);
          do {
            local_14 = ppDVar9;
            DArrayGetElement(local_20,(uint)local_18,&local_40);
            if (local_40 == (uint *)0x0) {
              ppDVar9[-2] = (DArrayTy *)0xffffffff;
              ppDVar9[-1] = (DArrayTy *)0x0;
            }
            else {
              local_c = (undefined4 *)FUN_006b0020(local_40,(int *)&local_8);
              puVar10 = local_c;
              puVar12 = puVar3;
              for (uVar15 = local_8 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                *puVar12 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
              }
              for (uVar15 = local_8 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                puVar10 = (undefined4 *)((int)puVar10 + 1);
                puVar12 = (undefined4 *)((int)puVar12 + 1);
              }
              FreeAndNull(&local_c);
              local_14[-2] = (DArrayTy *)local_1c;
              local_14[-1] = (DArrayTy *)local_8;
              puVar3 = (undefined4 *)((int)puVar3 + local_8);
              local_1c = local_1c + local_8;
              ppDVar9 = local_14;
            }
            if (local_3c == (uint *)0x0) {
              *ppDVar9 = (DArrayTy *)0xffffffff;
              ppDVar9[1] = (DArrayTy *)0x0;
            }
            else {
              local_c = (undefined4 *)FUN_006b0020(local_3c,(int *)&local_8);
              puVar10 = local_c;
              puVar12 = puVar3;
              for (uVar15 = local_8 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                *puVar12 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
              }
              for (uVar15 = local_8 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                puVar10 = (undefined4 *)((int)puVar10 + 1);
                puVar12 = (undefined4 *)((int)puVar12 + 1);
              }
              FreeAndNull(&local_c);
              *local_14 = (DArrayTy *)local_1c;
              local_14[1] = (DArrayTy *)local_8;
              puVar3 = (undefined4 *)((int)puVar3 + local_8);
              local_1c = local_1c + local_8;
              ppDVar9 = local_14;
            }
            if (local_38 == (uint *)0x0) {
              ppDVar9[2] = (DArrayTy *)0xffffffff;
              ppDVar9[3] = (DArrayTy *)0x0;
            }
            else {
              local_c = (undefined4 *)FUN_006b0020(local_38,(int *)&local_8);
              puVar10 = local_c;
              puVar12 = puVar3;
              for (uVar15 = local_8 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                *puVar12 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
              }
              for (uVar15 = local_8 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                puVar10 = (undefined4 *)((int)puVar10 + 1);
                puVar12 = (undefined4 *)((int)puVar12 + 1);
              }
              FreeAndNull(&local_c);
              local_14[2] = (DArrayTy *)local_1c;
              local_14[3] = (DArrayTy *)local_8;
              puVar3 = (undefined4 *)((int)puVar3 + local_8);
              local_1c = local_1c + local_8;
              ppDVar9 = local_14;
            }
            local_18 = (DArrayTy **)((int)local_18 + 1);
            ppDVar9 = ppDVar9 + 6;
          } while ((int)local_18 < (int)local_24);
        }
      }
      /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
      local_30 = (DArrayTy **)((int)local_30 + 0xa62);
      local_10 = (DArrayTy **)((int)local_10 + 0xaab);
      puVar10 = puVar3;
    } while ((int)local_30 < 0x7fab26);
    uVar15 = (uint)g_worldGrid.planeStride;
    puVar10 = DAT_007fa168;
    for (uVar8 = uVar15 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar3 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar8 = uVar15 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    local_2c[0x1562] = local_1c;
    local_2c[0x1563] = uVar15;
    g_currentExceptionFrame = local_88.previous;
    *param_1 = local_28;
    return local_2c;
  }
  g_currentExceptionFrame = local_88.previous;
  iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x270e,0,iVar2,&DAT_007a4ccc,
                             s_STAllPlayersC__SaveAllPlData_007a8230);
  if (iVar5 == 0) {
    RaiseInternalException(iVar2,0,s_E____titans_wlad_to_allpl_cpp_007a6004,9999);
    *param_1 = local_28;
    return local_2c;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

