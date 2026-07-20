
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
  dword *pdVar6;
  uint uVar7;
  DArrayTy **ppDVar8;
  undefined4 *puVar9;
  undefined4 unaff_ESI;
  dword *pdVar10;
  undefined4 *puVar11;
  DArrayTy *pDVar12;
  uint *puVar13;
  void *unaff_EDI;
  uint uVar14;
  undefined4 *puVar15;
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
  uint *local_18;
  uint *local_14;
  uint *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_34 = 4;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_44 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    iVar2 = 0x5590;
    local_14 = &g_playerRuntime[0].field387_0x1bd;
    local_28 = 0x5590;
    do {
      if (0 < local_34) {
        local_10 = (uint *)local_34;
        puVar3 = (undefined4 *)((int)local_14 + -0x1ae);
        do {
          if ((uint *)*puVar3 != (uint *)0x0) {
            local_c = (undefined4 *)FUN_006b0020((uint *)*puVar3,(int *)&local_8);
            FUN_006ab060(&local_c);
            iVar2 = iVar2 + local_8;
            local_28 = iVar2;
          }
          puVar3 = puVar3 + 1;
          local_10 = (uint *)((int)local_10 + -1);
        } while (local_10 != (uint *)0x0);
      }
      local_10 = (uint *)0x5;
      puVar13 = local_14;
      do {
        if ((uint *)puVar13[-0x14] != (uint *)0x0) {
          local_c = (undefined4 *)FUN_006b0020((uint *)puVar13[-0x14],(int *)&local_8);
          FUN_006ab060(&local_c);
          iVar2 = iVar2 + local_8;
          local_28 = iVar2;
        }
        if ((uint *)*puVar13 != (uint *)0x0) {
          local_c = (undefined4 *)FUN_006b0020((uint *)*puVar13,(int *)&local_8);
          FUN_006ab060(&local_c);
          iVar2 = iVar2 + local_8;
          local_28 = iVar2;
        }
        puVar13 = puVar13 + 4;
        local_10 = (uint *)((int)local_10 + -1);
      } while (local_10 != (uint *)0x0);
      local_10 = (uint *)0xa;
      puVar3 = local_14 + 0x15;
      do {
        if ((uint *)*puVar3 != (uint *)0x0) {
          local_c = (undefined4 *)FUN_006b0020((uint *)*puVar3,(int *)&local_8);
          FUN_006ab060(&local_c);
          iVar2 = iVar2 + local_8;
          local_28 = iVar2;
        }
        puVar3 = puVar3 + 4;
        local_10 = (uint *)((int)local_10 + -1);
      } while (local_10 != (uint *)0x0);
      local_10 = (uint *)0x6;
      puVar13 = (uint *)((int)local_14 + 0x631);
      do {
        local_c = (undefined4 *)FUN_006b0020(puVar13,(int *)&local_8);
        FUN_006ab060(&local_c);
        iVar2 = iVar2 + local_8;
        puVar13 = puVar13 + 0x11;
        local_10 = (uint *)((int)local_10 + -1);
        local_28 = iVar2;
      } while (local_10 != (uint *)0x0);
      local_20 = *(DArrayTy **)((int)local_14 + 0x839);
      local_10 = (uint *)0x0;
      if ((local_20 != (DArrayTy *)0x0) &&
         (local_24 = (uint *)((AnonShape_006ACC70_C8641025 *)local_20)->field_000C,
         local_24 != (uint *)0x0)) {
        uVar14 = 0;
        iVar2 = iVar2 + (int)local_24 * 0x18;
        local_28 = iVar2;
        if (0 < (int)local_24) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_20,uVar14,&local_40);
            if (local_40 != (uint *)0x0) {
              local_c = (undefined4 *)FUN_006b0020(local_40,(int *)&local_8);
              FUN_006ab060(&local_c);
              iVar2 = iVar2 + local_8;
              local_28 = iVar2;
            }
            if (local_3c != (uint *)0x0) {
              local_c = (undefined4 *)FUN_006b0020(local_3c,(int *)&local_8);
              FUN_006ab060(&local_c);
              iVar2 = iVar2 + local_8;
              local_28 = iVar2;
            }
            if (local_38 != (uint *)0x0) {
              local_c = (undefined4 *)FUN_006b0020(local_38,(int *)&local_8);
              FUN_006ab060(&local_c);
              iVar2 = iVar2 + local_8;
              local_28 = iVar2;
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_24);
        }
      }
      local_14 = (uint *)((int)local_14 + 0xa62);
    } while ((int)local_14 < 0x7fa2ed);
    local_28 = iVar2 + SHORT_007fb246;
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(local_28);
    pdVar4 = puVar3 + 2;
    *puVar3 = local_44->field_001C;
    ppDVar8 = &g_playerRuntime[0].objects;
    do {
      local_10 = (uint *)0x5;
      pdVar4[-1] = ppDVar8[-1]->count;
      *pdVar4 = (*ppDVar8)->count;
      pdVar4[9] = *(dword *)((int)ppDVar8 + 0x16);
      pdVar4[10] = *(dword *)((int)ppDVar8 + 0x1a);
      pdVar4[0xb] = *(dword *)((int)ppDVar8 + 0x1e);
      pdVar10 = (dword *)((int)ppDVar8 + 0x22);
      pdVar6 = pdVar4 + 0xc;
      for (iVar2 = 0x4e; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pdVar6 = *pdVar10;
        pdVar10 = pdVar10 + 1;
        pdVar6 = pdVar6 + 1;
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
      pdVar10 = pdVar4 + 0x5b;
      pdVar6 = (dword *)((int)ppDVar8 + 0x15e);
      do {
        pdVar10[-1] = pdVar6[-1];
        *pdVar10 = *pdVar6;
        *(short *)(pdVar10 + 1) = (short)pdVar6[1];
        *(undefined2 *)((int)pdVar10 + 0xe) = *(undefined2 *)((int)pdVar6 + 10);
        pdVar10[0x18] = pdVar6[0x13];
        pdVar10[0x19] = pdVar6[0x14];
        *(short *)(pdVar10 + 0x1a) = (short)pdVar6[0x15];
        *(undefined2 *)((int)pdVar10 + 0x72) = *(undefined2 *)((int)pdVar6 + 0x5a);
        pdVar10 = pdVar10 + 5;
        local_10 = (uint *)((int)local_10 + -1);
        pdVar6 = pdVar6 + 4;
      } while (local_10 != (uint *)0x0);
      pdVar10 = pdVar4 + 0x8e;
      pdVar4[0x8c] = *(dword *)((int)ppDVar8 + 0x1fa);
      local_10 = (uint *)0xa;
      pdVar6 = (dword *)((int)ppDVar8 + 0x202);
      do {
        pdVar10[-1] = pdVar6[-1];
        *pdVar10 = *pdVar6;
        *(short *)(pdVar10 + 1) = (short)pdVar6[1];
        *(undefined2 *)((int)pdVar10 + 0xe) = *(undefined2 *)((int)pdVar6 + 10);
        pdVar10 = pdVar10 + 5;
        local_10 = (uint *)((int)local_10 + -1);
        pdVar6 = pdVar6 + 4;
      } while (local_10 != (uint *)0x0);
      pdVar4[0xbf] = *(dword *)((int)ppDVar8 + 0x29e);
      pdVar4[0xc0] = *(dword *)((int)ppDVar8 + 0x2a2);
      pdVar4[0xc1] = *(dword *)((int)ppDVar8 + 0x2a6);
      pdVar4[0xc2] = *(dword *)((int)ppDVar8 + 0x2aa);
      pdVar4[0xc3] = *(dword *)((int)ppDVar8 + 0x2ae);
      pdVar4[0xc4] = *(dword *)((int)ppDVar8 + 0x2b2);
      pdVar4[0xc5] = *(dword *)((int)ppDVar8 + 0x2b6);
      pdVar4[0xc6] = *(dword *)((int)ppDVar8 + 0x2ba);
      pdVar4[199] = *(dword *)((int)ppDVar8 + 0x2be);
      pdVar4[200] = *(dword *)((int)ppDVar8 + 0x2c2);
      pdVar4[0xc9] = *(dword *)((int)ppDVar8 + 0x2c6);
      pdVar4[0xca] = *(dword *)((int)ppDVar8 + 0x2ca);
      pdVar4[0xcb] = *(dword *)((int)ppDVar8 + 0x2ce);
      pdVar4[0xcc] = *(dword *)((int)ppDVar8 + 0x2d2);
      pdVar4[0xcd] = *(dword *)((int)ppDVar8 + 0x2d6);
      pdVar4[0xce] = *(dword *)((int)ppDVar8 + 0x2da);
      pdVar10 = (dword *)((int)ppDVar8 + 0x2e2);
      pdVar6 = pdVar4 + 0xcf;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pdVar6 = *pdVar10;
        pdVar10 = pdVar10 + 1;
        pdVar6 = pdVar6 + 1;
      }
      pdVar10 = (dword *)((int)ppDVar8 + 0x2f6);
      pdVar6 = pdVar4 + 0xd4;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pdVar6 = *pdVar10;
        pdVar10 = pdVar10 + 1;
        pdVar6 = pdVar6 + 1;
      }
      pdVar10 = (dword *)((int)ppDVar8 + 0x30a);
      pdVar6 = pdVar4 + 0xd9;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pdVar6 = *pdVar10;
        pdVar10 = pdVar10 + 1;
        pdVar6 = pdVar6 + 1;
      }
      pdVar10 = (dword *)((int)ppDVar8 + 0x31e);
      pdVar6 = pdVar4 + 0xde;
      for (iVar2 = 0x9b; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pdVar6 = *pdVar10;
        pdVar10 = pdVar10 + 1;
        pdVar6 = pdVar6 + 1;
      }
      pdVar10 = (dword *)((int)ppDVar8 + 0x58a);
      pdVar6 = pdVar4 + 0x179;
      for (iVar2 = 0x6a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pdVar6 = *pdVar10;
        pdVar10 = pdVar10 + 1;
        pdVar6 = pdVar6 + 1;
      }
      pdVar10 = (dword *)((int)ppDVar8 + 0x732);
      pdVar6 = pdVar4 + 0x1e3;
      for (iVar2 = 0x26; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pdVar6 = *pdVar10;
        pdVar10 = pdVar10 + 1;
        pdVar6 = pdVar6 + 1;
      }
      *(short *)pdVar6 = (short)*pdVar10;
      *(undefined1 *)((int)pdVar6 + 2) = *(undefined1 *)((int)pdVar10 + 2);
      *(undefined4 *)((int)pdVar4 + 0x827) = *(undefined4 *)((int)ppDVar8 + 0x7cd);
      puVar9 = (undefined4 *)((int)ppDVar8 + 0x7d1);
      puVar11 = (undefined4 *)((int)pdVar4 + 0x82b);
      for (iVar2 = 0x66; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      *(undefined4 *)((int)pdVar4 + 0x9c3) = *(undefined4 *)((int)ppDVar8 + 0x969);
      *(undefined4 *)((int)pdVar4 + 0x9c7) = *(undefined4 *)((int)ppDVar8 + 0x96d);
      puVar9 = (undefined4 *)((int)ppDVar8 + 0x971);
      puVar11 = (undefined4 *)((int)pdVar4 + 0x9cb);
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      *(undefined4 *)((int)pdVar4 + 0x9e3) = *(undefined4 *)((int)ppDVar8 + 0x98d);
      *(undefined4 *)((int)pdVar4 + 0x9e7) = *(undefined4 *)((int)ppDVar8 + 0x991);
      *(undefined4 *)((int)pdVar4 + 0x9eb) = *(undefined4 *)((int)ppDVar8 + 0x995);
      puVar9 = (undefined4 *)((int)ppDVar8 + 0x999);
      puVar11 = (undefined4 *)((int)pdVar4 + 0x9ef);
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar9 = (undefined4 *)((int)ppDVar8 + 0xa05);
      puVar11 = (undefined4 *)((int)pdVar4 + 0xa17);
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar9 = (undefined4 *)((int)ppDVar8 + 0xa19);
      puVar11 = (undefined4 *)((int)pdVar4 + 0xa2b);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar9 = (undefined4 *)((int)ppDVar8 + 0xa39);
      puVar11 = (undefined4 *)((int)pdVar4 + 0xa4b);
      ppDVar8 = (DArrayTy **)((int)ppDVar8 + 0xa62);
      pdVar4 = (dword *)((int)pdVar4 + 0xaab);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
    } while ((int)ppDVar8 < 0x7fa139);
    local_24 = &g_playerRuntime[0].field9_0xf;
    puVar9 = puVar3 + 0x1564;
    puVar11 = &DAT_007fa138;
    puVar15 = puVar3 + 0x1557;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar15 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar15 = puVar15 + 1;
    }
    local_1c = 0x5590;
    local_20 = (DArrayTy *)0x0;
    puVar3[0x155d] = PTR_007fa154->count;
    puVar3[0x155e] = PTR_007fa158->count;
    puVar3[0x155f] = PTR_007fa15c->count;
    puVar3[0x1560] = PTR_007fa160->count;
    puVar3[0x1561] = PTR_007fa164->count;
    local_10 = (uint *)0x0;
    iVar2 = local_34;
    local_2c = puVar3;
    do {
      local_18 = (uint *)0x0;
      pDVar12 = local_20;
      local_14 = local_24;
      if (0 < iVar2) {
        do {
          if ((uint *)*local_14 == (uint *)0x0) {
            *(undefined4 *)((int)pDVar12 + (int)local_18 * 8 + 0xc + (int)puVar3) = 0xffffffff;
            *(undefined4 *)((int)pDVar12 + (int)local_18 * 8 + 0x10 + (int)puVar3) = 0;
          }
          else {
            local_c = (undefined4 *)FUN_006b0020((uint *)*local_14,(int *)&local_8);
            puVar3 = local_c;
            puVar11 = puVar9;
            for (uVar14 = local_8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
              *puVar11 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar11 = puVar11 + 1;
            }
            for (uVar14 = local_8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar3;
              puVar3 = (undefined4 *)((int)puVar3 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            FUN_006ab060(&local_c);
            *(uint *)((int)local_20 + (int)local_18 * 8 + 0xc + (int)local_2c) = local_1c;
            *(uint *)((int)local_20 + (int)local_18 * 8 + 0x10 + (int)local_2c) = local_8;
            puVar9 = (undefined4 *)((int)puVar9 + local_8);
            local_1c = local_1c + local_8;
            puVar3 = local_2c;
            pDVar12 = local_20;
            iVar2 = local_34;
          }
          local_18 = (uint *)((int)local_18 + 1);
          local_14 = local_14 + 1;
        } while ((int)local_18 < iVar2);
      }
      local_24 = (uint *)((int)local_24 + 0xa62);
      local_20 = (DArrayTy *)((int)pDVar12 + 0xaab);
    } while ((int)local_24 < 0x7fa13f);
    local_14 = (uint *)0x0;
    local_10 = &g_playerRuntime[0].field387_0x1bd;
    do {
      local_24 = (uint *)0x0;
      local_18 = local_10;
      do {
        if ((uint *)local_18[-0x14] == (uint *)0x0) {
          local_20 = (DArrayTy *)((int)local_24 + (int)local_14 + (int)puVar3);
          *(undefined4 *)((int)local_20 + 0x17a) = 0xffffffff;
          *(undefined4 *)((int)local_20 + 0x17e) = 0;
        }
        else {
          local_c = (undefined4 *)FUN_006b0020((uint *)local_18[-0x14],(int *)&local_8);
          puVar3 = local_c;
          puVar11 = puVar9;
          for (uVar14 = local_8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar11 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar14 = local_8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          FUN_006ab060(&local_c);
          local_20 = (DArrayTy *)((int)local_2c + (int)local_24 + (int)local_14);
          *(uint *)((int)local_20 + 0x17a) = local_1c;
          *(uint *)((int)local_20 + 0x17e) = local_8;
          puVar9 = (undefined4 *)((int)puVar9 + local_8);
          local_1c = local_1c + local_8;
          puVar3 = local_2c;
        }
        if ((uint *)*local_18 == (uint *)0x0) {
          *(undefined4 *)((int)local_20 + 0x1de) = 0xffffffff;
          *(undefined4 *)((int)local_20 + 0x1e2) = 0;
        }
        else {
          local_c = (undefined4 *)FUN_006b0020((uint *)*local_18,(int *)&local_8);
          puVar3 = local_c;
          puVar11 = puVar9;
          for (uVar14 = local_8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar11 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar14 = local_8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          FUN_006ab060(&local_c);
          *(uint *)((int)local_20 + 0x1de) = local_1c;
          *(uint *)((int)local_20 + 0x1e2) = local_8;
          puVar9 = (undefined4 *)((int)puVar9 + local_8);
          local_1c = local_1c + local_8;
          puVar3 = local_2c;
        }
        local_24 = (uint *)((int)local_24 + 0x14);
        local_18 = local_18 + 4;
      } while ((int)local_24 < 100);
      local_10 = (uint *)((int)local_10 + 0xa62);
      local_14 = (uint *)((int)local_14 + 0xaab);
    } while ((int)local_10 < 0x7fa2ed);
    local_18 = (uint *)0x0;
    local_10 = &g_playerRuntime[0].field446_0x211;
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
          puVar11 = puVar9;
          for (uVar14 = local_8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar11 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar14 = local_8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          FUN_006ab060(&local_c);
          *(uint *)((int)local_2c + (int)local_18 + (int)local_24 + 0x246) = local_1c;
          *(uint *)((int)local_2c + (int)local_18 + (int)local_24 + 0x24a) = local_8;
          puVar9 = (undefined4 *)((int)puVar9 + local_8);
          local_1c = local_1c + local_8;
          puVar3 = local_2c;
        }
        local_24 = (uint *)((int)local_24 + 0x14);
        local_20 = (DArrayTy *)((int)local_20 + 0x10);
      } while ((int)local_24 < 200);
      local_10 = (uint *)((int)local_10 + 0xa62);
      local_18 = (uint *)((int)local_18 + 0xaab);
    } while ((int)local_10 < 0x7fa341);
    local_24 = (uint *)((int)puVar3 + 0xa83);
    local_18 = (uint *)&g_playerRuntime[0].field_0x7ee;
    do {
      local_10 = local_24;
      local_30 = (DArrayTy **)0x6;
      local_20 = (DArrayTy *)local_18;
      do {
        local_c = (undefined4 *)FUN_006b0020(&local_20->flags,(int *)&local_8);
        puVar3 = local_c;
        puVar11 = puVar9;
        for (uVar14 = local_8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar11 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar14 = local_8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        FUN_006ab060(&local_c);
        local_10[-1] = local_1c;
        *local_10 = local_8;
        local_1c = local_1c + local_8;
        local_10 = local_10 + 2;
        puVar9 = (undefined4 *)((int)puVar9 + local_8);
        local_20 = (DArrayTy *)((int)local_20 + 0x44);
        local_30 = (DArrayTy **)((int)local_30 + -1);
      } while (local_30 != (DArrayTy **)0x0);
      local_18 = (uint *)((int)local_18 + 0xa62);
      local_24 = (uint *)((int)local_24 + 0xaab);
    } while ((int)local_18 < 0x7fa91e);
    local_30 = &g_playerRuntime[0].pgPairs;
    local_10 = (uint *)((int)local_2c + 0xa73);
    do {
      local_10[2] = (uint)local_30[5];
      local_20 = *local_30;
      if ((local_20 == (DArrayTy *)0x0) ||
         (local_24 = (uint *)local_20->count, local_24 == (uint *)0x0)) {
        *local_10 = 0xffffffff;
        local_10[1] = 0;
        puVar3 = puVar9;
      }
      else {
        local_18 = (uint *)0x0;
        local_8 = (int)local_24 * 0x18;
        *local_10 = local_1c;
        local_10[1] = local_8;
        puVar3 = puVar9 + (int)local_24 * 6;
        local_1c = local_1c + local_8;
        if (0 < (int)local_24) {
          puVar13 = puVar9 + 2;
          do {
            local_14 = puVar13;
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_20,(uint)local_18,&local_40);
            if (local_40 == (uint *)0x0) {
              puVar13[-2] = 0xffffffff;
              puVar13[-1] = 0;
            }
            else {
              local_c = (undefined4 *)FUN_006b0020(local_40,(int *)&local_8);
              puVar9 = local_c;
              puVar11 = puVar3;
              for (uVar14 = local_8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar11 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar11 = puVar11 + 1;
              }
              for (uVar14 = local_8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              }
              FUN_006ab060(&local_c);
              local_14[-2] = local_1c;
              local_14[-1] = local_8;
              puVar3 = (undefined4 *)((int)puVar3 + local_8);
              local_1c = local_1c + local_8;
              puVar13 = local_14;
            }
            if (local_3c == (uint *)0x0) {
              *puVar13 = 0xffffffff;
              puVar13[1] = 0;
            }
            else {
              local_c = (undefined4 *)FUN_006b0020(local_3c,(int *)&local_8);
              puVar9 = local_c;
              puVar11 = puVar3;
              for (uVar14 = local_8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar11 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar11 = puVar11 + 1;
              }
              for (uVar14 = local_8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              }
              FUN_006ab060(&local_c);
              *local_14 = local_1c;
              local_14[1] = local_8;
              puVar3 = (undefined4 *)((int)puVar3 + local_8);
              local_1c = local_1c + local_8;
              puVar13 = local_14;
            }
            if (local_38 == (uint *)0x0) {
              puVar13[2] = 0xffffffff;
              puVar13[3] = 0;
            }
            else {
              local_c = (undefined4 *)FUN_006b0020(local_38,(int *)&local_8);
              puVar9 = local_c;
              puVar11 = puVar3;
              for (uVar14 = local_8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar11 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar11 = puVar11 + 1;
              }
              for (uVar14 = local_8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              }
              FUN_006ab060(&local_c);
              local_14[2] = local_1c;
              local_14[3] = local_8;
              puVar3 = (undefined4 *)((int)puVar3 + local_8);
              local_1c = local_1c + local_8;
              puVar13 = local_14;
            }
            local_18 = (uint *)((int)local_18 + 1);
            puVar13 = puVar13 + 6;
          } while ((int)local_18 < (int)local_24);
        }
      }
      local_30 = (DArrayTy **)((int)local_30 + 0xa62);
      local_10 = (uint *)((int)local_10 + 0xaab);
      puVar9 = puVar3;
    } while ((int)local_30 < 0x7fab26);
    uVar14 = (uint)SHORT_007fb246;
    puVar9 = DAT_007fa168;
    for (uVar7 = uVar14 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar7 = uVar14 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    local_2c[0x1562] = local_1c;
    local_2c[0x1563] = uVar14;
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
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined4 *)(*pcVar1)();
  return puVar3;
}

