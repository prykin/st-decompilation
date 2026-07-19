
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SaveAllPlData */

undefined4 * __thiscall STAllPlayersC::SaveAllPlData(STAllPlayersC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  uint *puVar10;
  void *unaff_EDI;
  uint uVar11;
  InternalExceptionFrame local_88;
  STAllPlayersC *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  int local_34;
  int *local_30;
  undefined4 *local_2c;
  int local_28;
  uint *local_24;
  uint *local_20;
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
    local_14 = &DAT_007f4fdd;
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
      puVar10 = local_14;
      do {
        if ((uint *)puVar10[-0x14] != (uint *)0x0) {
          local_c = (undefined4 *)FUN_006b0020((uint *)puVar10[-0x14],(int *)&local_8);
          FUN_006ab060(&local_c);
          iVar2 = iVar2 + local_8;
          local_28 = iVar2;
        }
        if ((uint *)*puVar10 != (uint *)0x0) {
          local_c = (undefined4 *)FUN_006b0020((uint *)*puVar10,(int *)&local_8);
          FUN_006ab060(&local_c);
          iVar2 = iVar2 + local_8;
          local_28 = iVar2;
        }
        puVar10 = puVar10 + 4;
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
      puVar10 = (uint *)((int)local_14 + 0x631);
      do {
        local_c = (undefined4 *)FUN_006b0020(puVar10,(int *)&local_8);
        FUN_006ab060(&local_c);
        iVar2 = iVar2 + local_8;
        puVar10 = puVar10 + 0x11;
        local_10 = (uint *)((int)local_10 + -1);
        local_28 = iVar2;
      } while (local_10 != (uint *)0x0);
      local_20 = *(uint **)((int)local_14 + 0x839);
      local_10 = (uint *)0x0;
      if ((local_20 != (uint *)0x0) &&
         (local_24 = *(uint **)((int)local_20 + 0xc), local_24 != (uint *)0x0)) {
        uVar11 = 0;
        iVar2 = iVar2 + (int)local_24 * 0x18;
        local_28 = iVar2;
        if (0 < (int)local_24) {
          do {
            FUN_006acc70((int)local_20,uVar11,&local_40);
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
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)local_24);
        }
      }
      local_14 = (uint *)((int)local_14 + 0xa62);
    } while ((int)local_14 < 0x7fa2ed);
    local_28 = iVar2 + DAT_007fb246;
    puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(local_28);
    puVar4 = puVar3 + 2;
    *puVar3 = *(undefined4 *)(local_44 + 0x1c);
    piVar8 = &DAT_007f4e29;
    do {
      local_10 = (uint *)0x5;
      puVar4[-1] = *(undefined4 *)(piVar8[-1] + 0xc);
      *puVar4 = *(undefined4 *)(*piVar8 + 0xc);
      puVar4[9] = *(undefined4 *)((int)piVar8 + 0x16);
      puVar4[10] = *(undefined4 *)((int)piVar8 + 0x1a);
      puVar4[0xb] = *(undefined4 *)((int)piVar8 + 0x1e);
      puVar9 = (undefined4 *)((int)piVar8 + 0x22);
      puVar6 = puVar4 + 0xc;
      for (iVar2 = 0x4e; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      puVar4[0x12] = 0;
      puVar4[0x14] = 0;
      puVar4[0x18] = 0;
      puVar4[0x1c] = 0;
      puVar4[0x20] = 0;
      puVar4[0x24] = 0;
      puVar4[0x28] = 0;
      puVar4[0x2c] = 0;
      puVar4[0x30] = 0;
      puVar4[0x34] = 0;
      puVar4[0x38] = 0;
      puVar4[0x3c] = 0;
      puVar4[0x40] = 0;
      puVar4[0x44] = 0;
      puVar4[0x48] = 0;
      puVar4[0x4c] = 0;
      puVar4[0x50] = 0;
      puVar4[0x54] = 0;
      puVar4[0x58] = 0;
      puVar4[0x59] = 0;
      puVar9 = puVar4 + 0x5b;
      puVar6 = (undefined4 *)((int)piVar8 + 0x15e);
      do {
        puVar9[-1] = puVar6[-1];
        *puVar9 = *puVar6;
        *(undefined2 *)(puVar9 + 1) = *(undefined2 *)(puVar6 + 1);
        *(undefined2 *)((int)puVar9 + 0xe) = *(undefined2 *)((int)puVar6 + 10);
        puVar9[0x18] = puVar6[0x13];
        puVar9[0x19] = puVar6[0x14];
        *(undefined2 *)(puVar9 + 0x1a) = *(undefined2 *)(puVar6 + 0x15);
        *(undefined2 *)((int)puVar9 + 0x72) = *(undefined2 *)((int)puVar6 + 0x5a);
        puVar9 = puVar9 + 5;
        local_10 = (uint *)((int)local_10 + -1);
        puVar6 = puVar6 + 4;
      } while (local_10 != (uint *)0x0);
      puVar9 = puVar4 + 0x8e;
      puVar4[0x8c] = *(undefined4 *)((int)piVar8 + 0x1fa);
      local_10 = (uint *)0xa;
      puVar6 = (undefined4 *)((int)piVar8 + 0x202);
      do {
        puVar9[-1] = puVar6[-1];
        *puVar9 = *puVar6;
        *(undefined2 *)(puVar9 + 1) = *(undefined2 *)(puVar6 + 1);
        *(undefined2 *)((int)puVar9 + 0xe) = *(undefined2 *)((int)puVar6 + 10);
        puVar9 = puVar9 + 5;
        local_10 = (uint *)((int)local_10 + -1);
        puVar6 = puVar6 + 4;
      } while (local_10 != (uint *)0x0);
      puVar4[0xbf] = *(undefined4 *)((int)piVar8 + 0x29e);
      puVar4[0xc0] = *(undefined4 *)((int)piVar8 + 0x2a2);
      puVar4[0xc1] = *(undefined4 *)((int)piVar8 + 0x2a6);
      puVar4[0xc2] = *(undefined4 *)((int)piVar8 + 0x2aa);
      puVar4[0xc3] = *(undefined4 *)((int)piVar8 + 0x2ae);
      puVar4[0xc4] = *(undefined4 *)((int)piVar8 + 0x2b2);
      puVar4[0xc5] = *(undefined4 *)((int)piVar8 + 0x2b6);
      puVar4[0xc6] = *(undefined4 *)((int)piVar8 + 0x2ba);
      puVar4[199] = *(undefined4 *)((int)piVar8 + 0x2be);
      puVar4[200] = *(undefined4 *)((int)piVar8 + 0x2c2);
      puVar4[0xc9] = *(undefined4 *)((int)piVar8 + 0x2c6);
      puVar4[0xca] = *(undefined4 *)((int)piVar8 + 0x2ca);
      puVar4[0xcb] = *(undefined4 *)((int)piVar8 + 0x2ce);
      puVar4[0xcc] = *(undefined4 *)((int)piVar8 + 0x2d2);
      puVar4[0xcd] = *(undefined4 *)((int)piVar8 + 0x2d6);
      puVar4[0xce] = *(undefined4 *)((int)piVar8 + 0x2da);
      puVar9 = (undefined4 *)((int)piVar8 + 0x2e2);
      puVar6 = puVar4 + 0xcf;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar9 = (undefined4 *)((int)piVar8 + 0x2f6);
      puVar6 = puVar4 + 0xd4;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar9 = (undefined4 *)((int)piVar8 + 0x30a);
      puVar6 = puVar4 + 0xd9;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar9 = (undefined4 *)((int)piVar8 + 0x31e);
      puVar6 = puVar4 + 0xde;
      for (iVar2 = 0x9b; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar9 = (undefined4 *)((int)piVar8 + 0x58a);
      puVar6 = puVar4 + 0x179;
      for (iVar2 = 0x6a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar9 = (undefined4 *)((int)piVar8 + 0x732);
      puVar6 = puVar4 + 0x1e3;
      for (iVar2 = 0x26; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = *(undefined2 *)puVar9;
      *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)puVar9 + 2);
      *(undefined4 *)((int)puVar4 + 0x827) = *(undefined4 *)((int)piVar8 + 0x7cd);
      puVar9 = (undefined4 *)((int)piVar8 + 0x7d1);
      puVar6 = (undefined4 *)((int)puVar4 + 0x82b);
      for (iVar2 = 0x66; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined4 *)((int)puVar4 + 0x9c3) = *(undefined4 *)((int)piVar8 + 0x969);
      *(undefined4 *)((int)puVar4 + 0x9c7) = *(undefined4 *)((int)piVar8 + 0x96d);
      puVar9 = (undefined4 *)((int)piVar8 + 0x971);
      puVar6 = (undefined4 *)((int)puVar4 + 0x9cb);
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined4 *)((int)puVar4 + 0x9e3) = *(undefined4 *)((int)piVar8 + 0x98d);
      *(undefined4 *)((int)puVar4 + 0x9e7) = *(undefined4 *)((int)piVar8 + 0x991);
      *(undefined4 *)((int)puVar4 + 0x9eb) = *(undefined4 *)((int)piVar8 + 0x995);
      puVar9 = (undefined4 *)((int)piVar8 + 0x999);
      puVar6 = (undefined4 *)((int)puVar4 + 0x9ef);
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar9 = (undefined4 *)((int)piVar8 + 0xa05);
      puVar6 = (undefined4 *)((int)puVar4 + 0xa17);
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar9 = (undefined4 *)((int)piVar8 + 0xa19);
      puVar6 = (undefined4 *)((int)puVar4 + 0xa2b);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar9 = (undefined4 *)((int)piVar8 + 0xa39);
      puVar6 = (undefined4 *)((int)puVar4 + 0xa4b);
      piVar8 = (int *)((int)piVar8 + 0xa62);
      puVar4 = (undefined4 *)((int)puVar4 + 0xaab);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      }
    } while ((int)piVar8 < 0x7fa139);
    local_24 = &DAT_007f4e2f;
    puVar4 = puVar3 + 0x1564;
    puVar9 = &DAT_007fa138;
    puVar6 = puVar3 + 0x1557;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 1;
    }
    local_1c = 0x5590;
    local_20 = (uint *)0x0;
    puVar3[0x155d] = *(undefined4 *)(DAT_007fa154 + 0xc);
    puVar3[0x155e] = *(undefined4 *)(DAT_007fa158 + 0xc);
    puVar3[0x155f] = *(undefined4 *)(DAT_007fa15c + 0xc);
    puVar3[0x1560] = *(undefined4 *)(DAT_007fa160 + 0xc);
    puVar3[0x1561] = *(undefined4 *)(DAT_007fa164 + 0xc);
    local_10 = (uint *)0x0;
    iVar2 = local_34;
    local_2c = puVar3;
    do {
      local_18 = (uint *)0x0;
      puVar10 = local_20;
      local_14 = local_24;
      if (0 < iVar2) {
        do {
          if ((uint *)*local_14 == (uint *)0x0) {
            *(undefined4 *)((int)puVar10 + (int)local_18 * 8 + 0xc + (int)puVar3) = 0xffffffff;
            *(undefined4 *)((int)puVar10 + (int)local_18 * 8 + 0x10 + (int)puVar3) = 0;
          }
          else {
            local_c = (undefined4 *)FUN_006b0020((uint *)*local_14,(int *)&local_8);
            puVar3 = local_c;
            puVar9 = puVar4;
            for (uVar11 = local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar9 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar11 = local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar3;
              puVar3 = (undefined4 *)((int)puVar3 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            FUN_006ab060(&local_c);
            *(uint *)((int)local_20 + (int)local_18 * 8 + 0xc + (int)local_2c) = local_1c;
            *(uint *)((int)local_20 + (int)local_18 * 8 + 0x10 + (int)local_2c) = local_8;
            puVar4 = (undefined4 *)((int)puVar4 + local_8);
            local_1c = local_1c + local_8;
            puVar3 = local_2c;
            puVar10 = local_20;
            iVar2 = local_34;
          }
          local_18 = (uint *)((int)local_18 + 1);
          local_14 = local_14 + 1;
        } while ((int)local_18 < iVar2);
      }
      local_24 = (uint *)((int)local_24 + 0xa62);
      local_20 = (uint *)((int)puVar10 + 0xaab);
    } while ((int)local_24 < 0x7fa13f);
    local_14 = (uint *)0x0;
    local_10 = &DAT_007f4fdd;
    do {
      local_24 = (uint *)0x0;
      local_18 = local_10;
      do {
        if ((uint *)local_18[-0x14] == (uint *)0x0) {
          local_20 = (uint *)((int)local_24 + (int)local_14 + (int)puVar3);
          *(undefined4 *)((int)local_20 + 0x17a) = 0xffffffff;
          *(undefined4 *)((int)local_20 + 0x17e) = 0;
        }
        else {
          local_c = (undefined4 *)FUN_006b0020((uint *)local_18[-0x14],(int *)&local_8);
          puVar3 = local_c;
          puVar9 = puVar4;
          for (uVar11 = local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar9 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar11 = local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          FUN_006ab060(&local_c);
          local_20 = (uint *)((int)local_2c + (int)local_24 + (int)local_14);
          *(uint *)((int)local_20 + 0x17a) = local_1c;
          *(uint *)((int)local_20 + 0x17e) = local_8;
          puVar4 = (undefined4 *)((int)puVar4 + local_8);
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
          puVar9 = puVar4;
          for (uVar11 = local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar9 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar11 = local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          FUN_006ab060(&local_c);
          *(uint *)((int)local_20 + 0x1de) = local_1c;
          *(uint *)((int)local_20 + 0x1e2) = local_8;
          puVar4 = (undefined4 *)((int)puVar4 + local_8);
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
    local_10 = &DAT_007f5031;
    do {
      local_24 = (uint *)0x0;
      local_20 = local_10;
      do {
        if ((uint *)*local_20 == (uint *)0x0) {
          *(undefined4 *)((int)puVar3 + (int)local_18 + (int)local_24 + 0x246) = 0xffffffff;
          *(undefined4 *)((int)puVar3 + (int)local_18 + (int)local_24 + 0x24a) = 0;
        }
        else {
          local_c = (undefined4 *)FUN_006b0020((uint *)*local_20,(int *)&local_8);
          puVar3 = local_c;
          puVar9 = puVar4;
          for (uVar11 = local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar9 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar11 = local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          FUN_006ab060(&local_c);
          *(uint *)((int)local_2c + (int)local_18 + (int)local_24 + 0x246) = local_1c;
          *(uint *)((int)local_2c + (int)local_18 + (int)local_24 + 0x24a) = local_8;
          puVar4 = (undefined4 *)((int)puVar4 + local_8);
          local_1c = local_1c + local_8;
          puVar3 = local_2c;
        }
        local_24 = (uint *)((int)local_24 + 0x14);
        local_20 = local_20 + 4;
      } while ((int)local_24 < 200);
      local_10 = (uint *)((int)local_10 + 0xa62);
      local_18 = (uint *)((int)local_18 + 0xaab);
    } while ((int)local_10 < 0x7fa341);
    local_24 = (uint *)((int)puVar3 + 0xa83);
    local_18 = (uint *)&DAT_007f560e;
    do {
      local_10 = local_24;
      local_30 = (int *)0x6;
      local_20 = local_18;
      do {
        local_c = (undefined4 *)FUN_006b0020(local_20,(int *)&local_8);
        puVar3 = local_c;
        puVar9 = puVar4;
        for (uVar11 = local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar9 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar11 = local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        FUN_006ab060(&local_c);
        local_10[-1] = local_1c;
        *local_10 = local_8;
        local_1c = local_1c + local_8;
        local_10 = local_10 + 2;
        puVar4 = (undefined4 *)((int)puVar4 + local_8);
        local_20 = local_20 + 0x11;
        local_30 = (int *)((int)local_30 + -1);
      } while (local_30 != (int *)0x0);
      local_18 = (uint *)((int)local_18 + 0xa62);
      local_24 = (uint *)((int)local_24 + 0xaab);
    } while ((int)local_18 < 0x7fa91e);
    local_30 = &DAT_007f5816;
    local_10 = (uint *)((int)local_2c + 0xa73);
    do {
      local_10[2] = local_30[5];
      local_20 = (uint *)*local_30;
      if ((local_20 == (uint *)0x0) ||
         (local_24 = *(uint **)((int)local_20 + 0xc), local_24 == (uint *)0x0)) {
        *local_10 = 0xffffffff;
        local_10[1] = 0;
        puVar3 = puVar4;
      }
      else {
        local_18 = (uint *)0x0;
        local_8 = (int)local_24 * 0x18;
        *local_10 = local_1c;
        local_10[1] = local_8;
        puVar3 = puVar4 + (int)local_24 * 6;
        local_1c = local_1c + local_8;
        if (0 < (int)local_24) {
          puVar10 = puVar4 + 2;
          do {
            local_14 = puVar10;
            FUN_006acc70((int)local_20,(uint)local_18,&local_40);
            if (local_40 == (uint *)0x0) {
              puVar10[-2] = 0xffffffff;
              puVar10[-1] = 0;
            }
            else {
              local_c = (undefined4 *)FUN_006b0020(local_40,(int *)&local_8);
              puVar4 = local_c;
              puVar9 = puVar3;
              for (uVar11 = local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *puVar9 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar9 = puVar9 + 1;
              }
              for (uVar11 = local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
                puVar4 = (undefined4 *)((int)puVar4 + 1);
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
              FUN_006ab060(&local_c);
              local_14[-2] = local_1c;
              local_14[-1] = local_8;
              puVar3 = (undefined4 *)((int)puVar3 + local_8);
              local_1c = local_1c + local_8;
              puVar10 = local_14;
            }
            if (local_3c == (uint *)0x0) {
              *puVar10 = 0xffffffff;
              puVar10[1] = 0;
            }
            else {
              local_c = (undefined4 *)FUN_006b0020(local_3c,(int *)&local_8);
              puVar4 = local_c;
              puVar9 = puVar3;
              for (uVar11 = local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *puVar9 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar9 = puVar9 + 1;
              }
              for (uVar11 = local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
                puVar4 = (undefined4 *)((int)puVar4 + 1);
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
              FUN_006ab060(&local_c);
              *local_14 = local_1c;
              local_14[1] = local_8;
              puVar3 = (undefined4 *)((int)puVar3 + local_8);
              local_1c = local_1c + local_8;
              puVar10 = local_14;
            }
            if (local_38 == (uint *)0x0) {
              puVar10[2] = 0xffffffff;
              puVar10[3] = 0;
            }
            else {
              local_c = (undefined4 *)FUN_006b0020(local_38,(int *)&local_8);
              puVar4 = local_c;
              puVar9 = puVar3;
              for (uVar11 = local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *puVar9 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar9 = puVar9 + 1;
              }
              for (uVar11 = local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
                puVar4 = (undefined4 *)((int)puVar4 + 1);
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
              FUN_006ab060(&local_c);
              local_14[2] = local_1c;
              local_14[3] = local_8;
              puVar3 = (undefined4 *)((int)puVar3 + local_8);
              local_1c = local_1c + local_8;
              puVar10 = local_14;
            }
            local_18 = (uint *)((int)local_18 + 1);
            puVar10 = puVar10 + 6;
          } while ((int)local_18 < (int)local_24);
        }
      }
      local_30 = (int *)((int)local_30 + 0xa62);
      local_10 = (uint *)((int)local_10 + 0xaab);
      puVar4 = puVar3;
    } while ((int)local_30 < 0x7fab26);
    uVar11 = (uint)DAT_007fb246;
    puVar4 = DAT_007fa168;
    for (uVar7 = uVar11 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar7 = uVar11 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    local_2c[0x1562] = local_1c;
    local_2c[0x1563] = uVar11;
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

