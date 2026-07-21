
/* WARNING: Type propagation algorithm not settling */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0048DFD0.
   Evidence: incoming_receiver_captures=2; receiver_accesses=3; incoming_edx_uses=0; calls=30;
   ecx_pointer_setup=30; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[40];
   expected_stack=40; receiver_family_members=1 */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::FUN_0048dfd0
          (AnonReceiver_0048DFD0 *this,int param_1,int param_2,uint param_3,int param_4,int param_5,
          int *param_6,int param_7,short *param_8,short *param_9,short *param_10)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  short *psVar11;
  uint uVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short *psVar16;
  int iVar17;
  undefined4 *puVar18;
  int local_3fc [194];
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined4 local_e4;
  short local_e0 [4];
  short local_d8;
  short local_d6;
  short local_d4;
  short local_d2;
  short local_d0;
  short sStack_ce;
  short local_cc;
  short sStack_ca;
  short local_c8;
  short local_c6;
  short local_c4;
  short local_c2;
  short local_c0;
  short local_be;
  short local_bc;
  short local_ba;
  short local_b8;
  short local_b6;
  short sStack_b4;
  short local_b2;
  short sStack_b0;
  short local_ae;
  short local_ac;
  short local_aa;
  short local_a8;
  short local_a6;
  short local_a4;
  short local_a2;
  short local_a0;
  short local_9e;
  short local_9c;
  short local_9a;
  short local_98;
  short local_96;
  short sStack_94;
  short local_92;
  short local_90;
  short local_8e;
  short local_8c;
  short local_8a;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  undefined4 *local_30;
  AnonReceiver_0048DFD0 *local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  short local_10;
  short sStack_e;
  short sStack_c;
  short local_a;
  undefined4 *local_8;
  
  local_3fc[0] = 6;
  local_3fc[1] = 4;
  local_3fc[2] = 8;
  local_3fc[3] = 2;
  local_3fc[4] = 0xb;
  local_3fc[5] = 0x11;
  local_3fc[6] = 0xe;
  local_3fc[7] = 0x14;
  local_3fc[8] = 0x10;
  local_3fc[9] = 0xd;
  local_3fc[10] = 0x13;
  local_3fc[0xb] = 1;
  local_3fc[0xc] = 10;
  local_3fc[0xd] = 0xf;
  local_3fc[0xe] = 0xc;
  local_3fc[0xf] = 0x12;
  local_3fc[0x10] = 5;
  local_3fc[0x11] = 3;
  local_3fc[0x12] = 7;
  local_3fc[0x13] = 0;
  local_3fc[0x14] = 9;
  local_3fc[0x15] = 2;
  local_3fc[0x16] = 4;
  local_3fc[0x17] = 0xe;
  local_3fc[0x18] = 0xd;
  local_3fc[0x19] = 0x11;
  local_3fc[0x1a] = 1;
  local_3fc[0x1b] = 6;
  local_3fc[0x1c] = 0x10;
  local_3fc[0x1d] = 0xc;
  local_3fc[0x1e] = 8;
  local_3fc[0x1f] = 0x14;
  local_3fc[0x20] = 0;
  local_3fc[0x21] = 0xb;
  local_3fc[0x22] = 0xf;
  local_3fc[0x23] = 0x13;
  local_3fc[0x24] = 3;
  local_3fc[0x25] = 10;
  local_3fc[0x26] = 5;
  local_3fc[0x27] = 0x12;
  local_3fc[0x28] = 7;
  local_3fc[0x29] = 9;
  local_3fc[0x2a] = 1;
  local_3fc[0x2b] = 0;
  local_3fc[0x2c] = 2;
  local_3fc[0x2d] = 3;
  local_3fc[0x2e] = 4;
  local_3fc[0x2f] = 0xd;
  local_3fc[0x30] = 0xc;
  local_3fc[0x31] = 0xe;
  local_3fc[0x32] = 0x10;
  local_3fc[0x33] = 0xf;
  local_3fc[0x34] = 0x11;
  local_3fc[0x35] = 5;
  local_3fc[0x36] = 6;
  local_3fc[0x37] = 0x13;
  local_3fc[0x38] = 0x12;
  local_3fc[0x39] = 0x14;
  local_3fc[0x3a] = 7;
  local_3fc[0x3b] = 8;
  local_3fc[0x3c] = 10;
  local_3fc[0x3d] = 9;
  local_3fc[0x3e] = 0xb;
  local_3fc[0x3f] = 0;
  local_3fc[0x40] = 3;
  local_3fc[0x41] = 0xc;
  local_3fc[0x42] = 5;
  local_3fc[0x43] = 1;
  local_3fc[0x44] = 0xf;
  local_3fc[0x45] = 0xd;
  local_3fc[0x46] = 0x10;
  local_3fc[0x47] = 7;
  local_3fc[0x48] = 0x12;
  local_3fc[0x49] = 2;
  local_3fc[0x4a] = 0xe;
  local_3fc[0x4b] = 9;
  local_3fc[0x4c] = 4;
  local_3fc[0x4d] = 0x13;
  local_3fc[0x4e] = 0x11;
  local_3fc[0x4f] = 10;
  local_3fc[0x50] = 6;
  local_3fc[0x51] = 0x14;
  local_3fc[0x52] = 8;
  local_3fc[0x53] = 0xb;
  local_3fc[0x54] = 5;
  local_3fc[0x55] = 7;
  local_3fc[0x56] = 3;
  local_3fc[0x57] = 9;
  local_3fc[0x58] = 0;
  local_3fc[0x59] = 0xf;
  local_3fc[0x5a] = 0x12;
  local_3fc[0x5b] = 0xc;
  local_3fc[0x5c] = 0x10;
  local_3fc[0x5d] = 0x13;
  local_3fc[0x5e] = 0xd;
  local_3fc[0x5f] = 10;
  local_3fc[0x60] = 1;
  local_3fc[0x61] = 0x11;
  local_3fc[0x62] = 0x14;
  local_3fc[99] = 0xe;
  local_3fc[100] = 0xb;
  local_3fc[0x65] = 2;
  local_3fc[0x66] = 6;
  local_3fc[0x67] = 8;
  local_3fc[0x68] = 4;
  local_3fc[0x69] = 9;
  local_3fc[0x6a] = 7;
  local_3fc[0x6b] = 0x12;
  local_3fc[0x6c] = 10;
  local_3fc[0x6d] = 5;
  local_3fc[0x6e] = 0x13;
  local_3fc[0x6f] = 0xf;
  local_3fc[0x70] = 0x10;
  local_3fc[0x71] = 0xb;
  local_3fc[0x72] = 3;
  local_3fc[0x73] = 0x14;
  local_3fc[0x74] = 0xc;
  local_3fc[0x75] = 8;
  local_3fc[0x76] = 0;
  local_3fc[0x77] = 0x11;
  local_3fc[0x78] = 0xd;
  local_3fc[0x79] = 6;
  local_3fc[0x7a] = 1;
  local_3fc[0x7b] = 0xe;
  local_3fc[0x7c] = 4;
  local_3fc[0x7d] = 2;
  local_3fc[0x7e] = 10;
  local_3fc[0x7f] = 9;
  local_3fc[0x80] = 0xb;
  local_3fc[0x81] = 7;
  local_3fc[0x82] = 8;
  local_3fc[0x83] = 0x13;
  local_3fc[0x84] = 0x12;
  local_3fc[0x85] = 0x14;
  local_3fc[0x86] = 0x10;
  local_3fc[0x87] = 5;
  local_3fc[0x88] = 6;
  local_3fc[0x89] = 0xf;
  local_3fc[0x8a] = 0x11;
  local_3fc[0x8b] = 0xd;
  local_3fc[0x8c] = 3;
  local_3fc[0x8d] = 4;
  local_3fc[0x8e] = 0xc;
  local_3fc[0x8f] = 0xe;
  local_3fc[0x90] = 1;
  local_3fc[0x91] = 0;
  local_3fc[0x92] = 2;
  local_3fc[0x93] = 8;
  local_3fc[0x94] = 0xb;
  local_3fc[0x95] = 0x14;
  local_3fc[0x96] = 10;
  local_3fc[0x97] = 6;
  local_3fc[0x9d] = 0x12;
  local_3fc[0x9b] = 9;
  local_3fc[0xa0] = 2;
  local_3fc[0xa5] = 0xc;
  local_3fc[0xaa] = 2;
  local_3fc[0xae] = 2;
  local_3fc[0xb2] = 2;
  local_3fc[0xb9] = 2;
  local_3fc[0xbe] = 2;
  local_3fc[0x98] = 0x13;
  local_3fc[0x99] = 0x11;
  local_3fc[0x9a] = 0x10;
  local_3fc[0x9c] = 4;
  local_3fc[0x9e] = 0xe;
  local_3fc[0x9f] = 7;
  local_3fc[0xa1] = 0xf;
  local_3fc[0xa2] = 0xd;
  local_3fc[0xa3] = 5;
  local_3fc[0xa4] = 1;
  local_3fc[0xa6] = 3;
  local_3fc[0xa7] = 0;
  local_3fc[0xa8] = 0;
  local_3fc[0xa9] = 1;
  local_3fc[0xab] = 3;
  local_3fc[0xac] = 4;
  local_3fc[0xad] = 1;
  local_3fc[0xaf] = 3;
  local_3fc[0xb0] = 0;
  local_3fc[0xb1] = 4;
  local_3fc[0xb3] = 3;
  local_3fc[0xb4] = 4;
  local_3fc[0xb5] = 1;
  local_3fc[0xb6] = 0;
  local_3fc[0xb7] = 3;
  local_3fc[0xb8] = 4;
  local_3fc[0xba] = 1;
  local_3fc[0xbb] = 0;
  local_3fc[0xbc] = 4;
  local_3fc[0xbd] = 3;
  local_3fc[0xbf] = 1;
  local_3fc[0xc0] = 0;
  local_18 = param_7;
  local_e4 = 0;
  if ((((((short)param_1 < 0) || (g_worldGrid.sizeX <= (short)param_1)) ||
       (sVar9 = (short)param_2, sVar9 < 0)) ||
      ((((g_worldGrid.sizeY <= sVar9 || (sVar4 = (short)param_3, sVar4 < 0)) ||
        ((g_worldGrid.sizeZ <= sVar4 ||
         ((sVar13 = (short)param_4, sVar13 < 0 || (g_worldGrid.sizeX <= sVar13)))))) ||
       ((short)param_5 < 0)))) ||
     (((g_worldGrid.sizeY <= (short)param_5 || (sVar14 = (short)param_6, sVar14 < 0)) ||
      (g_worldGrid.sizeZ <= sVar14)))) {
    return 0;
  }
  if (param_7 < 1) {
    if (sVar4 < 1) {
      if ((g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar9 +
            (int)(short)param_1].objects[0] == (STWorldObject *)0x0) &&
         (g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar9 +
           (int)(short)param_1].objects[1] == (STWorldObject *)0x0)) {
        *param_8 = (short)param_1;
        *param_9 = sVar9;
        *param_10 = sVar4;
        return 1;
      }
    }
    else {
      local_1c = (int)sVar4;
      iVar6 = (int)g_worldGrid.sizeX * (int)sVar9;
      iVar10 = (int)(short)param_1;
      if ((((g_worldGrid.cells[local_1c * g_worldGrid.planeStride + iVar10 + iVar6].objects[0] ==
             (STWorldObject *)0x0) &&
           (g_worldGrid.cells[local_1c * g_worldGrid.planeStride + iVar10 + iVar6].objects[1] ==
            (STWorldObject *)0x0)) &&
          ((sVar15 = sVar4 + -1, sVar15 < 0 ||
           (((g_worldGrid.sizeZ <= sVar15 ||
             (g_worldGrid.cells[(int)sVar15 * (int)g_worldGrid.planeStride + iVar10 + iVar6].objects
              [0] == (STWorldObject *)0x0)) ||
            (g_pathingGrid.cells
             [(int)g_pathingGrid.sizeX * (int)sVar9 +
              iVar10 + (local_1c + -1) * (int)g_pathingGrid.planeStride] == 0)))))) &&
         (((sVar15 = sVar4 + -1, sVar15 < 0 || (g_worldGrid.sizeZ <= sVar15)) ||
          (g_worldGrid.cells[(int)sVar15 * (int)g_worldGrid.planeStride + iVar10 + iVar6].objects[1]
           == (STWorldObject *)0x0)))) {
        *param_8 = (short)param_1;
        *param_9 = sVar9;
        *param_10 = sVar4;
        return 1;
      }
    }
    local_18 = 1;
  }
  iVar6 = local_18;
  sVar15 = (short)param_1;
  sVar3 = sVar13;
  if ((short)param_1 <= sVar13) {
    sVar15 = sVar13;
    sVar3 = (short)param_1;
  }
  sVar1 = sVar9;
  sVar2 = (short)param_5;
  if (sVar9 <= (short)param_5) {
    sVar1 = (short)param_5;
    sVar2 = sVar9;
  }
  local_20 = (int)sVar3 + local_18 * -4 + -5;
  if (local_20 < 0) {
    local_20 = 0;
  }
  local_28 = (int)sVar2 + local_18 * -4 + -5;
  if (local_28 < 0) {
    local_28 = 0;
  }
  iVar10 = local_28;
  local_ec = sVar15 + 5 + local_18 * 4;
  if (g_pathingGrid.sizeX <= local_ec) {
    local_ec = g_pathingGrid.sizeX + -1;
  }
  local_e8 = sVar1 + 5 + local_18 * 4;
  if (g_pathingGrid.sizeY <= local_e8) {
    local_e8 = g_pathingGrid.sizeY + -1;
  }
  local_10 = ((short)local_ec - (short)local_20) + 1;
  sStack_e = ((short)local_e8 - (short)local_28) + 1;
  local_a = sStack_e * local_10;
  local_30 = (undefined4 *)0x0;
  local_2c = this;
  local_8 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(local_a * 10);
  iVar17 = local_20;
  local_14 = 0;
  do {
    psVar11 = g_pathingGrid.cells +
              g_pathingGrid.sizeX * iVar10 + local_20 + g_pathingGrid.planeStride * local_14;
    local_24 = (undefined4 *)((int)local_8 + local_a * local_14 * 2);
    iVar5 = 0;
    if (0 < sStack_e) {
      uVar7 = (int)local_10 << 1;
      do {
        psVar16 = psVar11;
        puVar18 = local_24;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar18 = *(undefined4 *)psVar16;
          psVar16 = psVar16 + 2;
          puVar18 = puVar18 + 1;
        }
        iVar5 = iVar5 + 1;
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)puVar18 = (char)*psVar16;
          psVar16 = (short *)((int)psVar16 + 1);
          puVar18 = (undefined4 *)((int)puVar18 + 1);
        }
        psVar11 = psVar11 + g_pathingGrid.sizeX;
        uVar7 = local_10 * 2;
        local_24 = (undefined4 *)((int)local_24 + uVar7);
        iVar10 = local_28;
      } while (iVar5 < sStack_e);
    }
    local_14 = local_14 + 1;
  } while (local_14 < 5);
  FUN_006ab090((int)local_8,(int)local_10,(int)sStack_e,5,sVar13 - local_20,(short)param_5 - iVar10,
               (int)sVar14,-1,-1,-1);
  local_1c = (int)sVar4;
  if (*(short *)((int)local_8 +
                ((((sVar9 - iVar10) * (int)local_10 + (int)local_a * (int)sVar4) - iVar17) +
                (int)(short)param_1) * 2) < 1) {
    FreeAndNull(&local_8);
    local_36 = g_pathingGrid.sizeY;
    local_34 = g_pathingGrid.sizeZ;
    local_38 = g_pathingGrid.sizeX;
    local_32 = g_pathingGrid.planeStride;
    local_30 = (undefined4 *)
               Library::DKW::LIB::FUN_006aac70
                         ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY *
                          (int)g_pathingGrid.sizeX * 2);
    uVar7 = (int)local_34 * (int)local_36 * (int)local_38;
    psVar11 = g_pathingGrid.cells;
    puVar18 = local_30;
    for (uVar8 = (uVar7 & 0x7fffffff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar18 = *(undefined4 *)psVar11;
      psVar11 = psVar11 + 2;
      puVar18 = puVar18 + 1;
    }
    for (uVar7 = uVar7 * 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar18 = (char)*psVar11;
      psVar11 = (short *)((int)psVar11 + 1);
      puVar18 = (undefined4 *)((int)puVar18 + 1);
    }
    FUN_006ab090((int)local_30,(int)local_38,(int)local_36,(int)local_34,(int)(short)param_1,
                 (int)sVar9,local_1c,-1,-1,-1);
    sStack_e = g_pathingGrid.sizeY;
    sStack_c = g_pathingGrid.sizeZ;
    local_10 = g_pathingGrid.sizeX;
    local_a = g_pathingGrid.planeStride;
    local_8 = (undefined4 *)
              Library::DKW::LIB::FUN_006aac70
                        ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY *
                         (int)g_pathingGrid.sizeX * 2);
    uVar7 = (int)sStack_c * (int)sStack_e * (int)local_10;
    psVar11 = g_pathingGrid.cells;
    puVar18 = local_8;
    for (uVar8 = (uVar7 & 0x7fffffff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar18 = *(undefined4 *)psVar11;
      psVar11 = psVar11 + 2;
      puVar18 = puVar18 + 1;
    }
    for (uVar7 = uVar7 * 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar18 = (char)*psVar11;
      psVar11 = (short *)((int)psVar11 + 1);
      puVar18 = (undefined4 *)((int)puVar18 + 1);
    }
    FUN_006ab090((int)local_8,(int)local_10,(int)sStack_e,(int)sStack_c,(int)sVar13,
                 (int)(short)param_5,(int)sVar14,-1,-1,-1);
    local_20 = 0;
    local_28 = 0;
    local_24 = local_30;
    local_ec = g_pathingGrid.sizeX + -1;
    local_e8 = g_pathingGrid.sizeY + -1;
  }
  else {
    local_24 = local_8;
  }
  if (((short)param_1 == sVar13) && (sVar9 == (short)param_5)) {
    uVar7 = *(int *)&local_2c->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&local_2c->field_0x1c = uVar7;
    param_3 = uVar7 >> 0x10 & 7;
  }
  else {
    sVar4 = (**(code **)(*(int *)local_2c + 0x10))
                      (param_1 * 0xc9 + 100,param_2 * 0xc9 + 100,param_3 * 200 + 100,
                       param_4 * 0xc9 + 100,param_5 * 0xc9 + 100,(int)param_6 * 200 + 100);
    iVar5 = (int)sVar4;
    iVar17 = (iVar5 / 0x2d) * 0x2d;
    iVar10 = iVar17 + 0x2d;
    uVar7 = iVar5 - iVar10;
    uVar8 = (int)uVar7 >> 0x1f;
    uVar12 = iVar5 % 0x2d >> 0x1f;
    if ((int)((uVar7 ^ uVar8) - uVar8) <= (int)((iVar5 % 0x2d ^ uVar12) - uVar12)) {
      iVar17 = iVar10;
    }
    if (iVar17 == 0x168) {
      param_3 = 0;
    }
    else {
      param_3 = iVar17 / 0x2d;
    }
  }
  if (local_18 / iVar6 < 5) {
    param_5 = local_18 * 2 + 1;
    do {
      local_92 = (short)local_18;
      local_84 = local_92 + (short)param_1;
      local_e0[0] = -local_92 + (short)param_1;
      local_aa = (short)(param_5 / 3);
      local_d4 = local_84 - local_aa;
      local_98 = local_e0[0];
      local_e0[2] = local_aa + -1 + local_e0[0];
      local_b8 = local_e0[0];
      local_e0[3] = -local_92 + sVar9;
      local_88 = local_d4 + 1;
      local_d8 = local_e0[2] + 1;
      _local_d0 = CONCAT22(local_e0[3],local_88);
      local_e0[1] = local_e0[3];
      _local_cc = CONCAT22(local_e0[3],local_84);
      local_d6 = local_e0[3];
      local_d2 = local_e0[3];
      local_92 = local_92 + sVar9;
      _local_96 = CONCAT22(local_e0[2],local_92);
      local_82 = local_92;
      local_86 = local_92;
      local_90 = local_d8;
      local_8e = local_92;
      local_8a = local_92;
      local_8c = local_d4;
      local_ae = local_aa + local_e0[3];
      local_aa = local_92 - local_aa;
      local_60 = local_d8;
      local_5c = local_d4;
      _local_b6 = CONCAT22(local_e0[0],local_ae);
      _local_b2 = CONCAT22(local_84,local_aa);
      local_ac = local_84;
      local_5e = local_ae;
      local_5a = local_aa;
      if (param_5 < 7) {
        local_3a = -0x7960;
        local_3e = -0x7960;
        local_3c = -0x7960;
        local_40 = -0x7960;
        local_42 = 0x86a0;
        local_46 = 0x86a0;
        local_44 = -0x7960;
        local_48 = -0x7960;
        local_4a = 0x86a0;
        local_4e = 0x86a0;
        local_4c = -0x7960;
        local_50 = -0x7960;
        local_52 = -0x7960;
        local_56 = -0x7960;
        local_54 = 0x86a0;
        local_58 = 0x86a0;
        local_62 = 0x86a0;
        local_66 = 0x86a0;
        local_64 = 0x86a0;
        local_68 = 0x86a0;
        local_6a = -0x7960;
        local_6e = -0x7960;
        local_6c = 0x86a0;
        local_70 = 0x86a0;
        local_72 = 0x86a0;
        local_76 = 0x86a0;
        local_74 = 0x86a0;
        local_78 = 0x86a0;
        local_7a = 0x86a0;
        local_7e = 0x86a0;
        local_7c = 0x86a0;
        local_80 = 0x86a0;
        local_9a = 0x86a0;
        local_9e = 0x86a0;
        local_9c = -0x7960;
        local_a0 = 0x86a0;
        local_a2 = 0x86a0;
        local_a6 = 0x86a0;
        local_a4 = -0x7960;
        local_a8 = 0x86a0;
        local_ba = 0x86a0;
        local_be = 0x86a0;
        local_bc = 0x86a0;
        local_c0 = 0x86a0;
        local_c2 = 0x86a0;
        local_c6 = 0x86a0;
        local_c4 = 0x86a0;
        local_c8 = 0x86a0;
      }
      else {
        local_c8 = local_e0[0];
        local_c6 = local_e0[3] + 1;
        local_c4 = local_e0[0];
        local_c2 = local_ae + -1;
        local_a8 = local_e0[0];
        local_be = local_c6;
        local_a4 = local_e0[0];
        local_ba = local_c2;
        local_c0 = local_84;
        local_bc = local_84;
        local_a0 = local_84;
        local_9c = local_84;
        local_a6 = local_aa + 1;
        local_a2 = local_92 + -1;
        local_80 = local_e0[0] + 1;
        local_7c = local_e0[2];
        local_7e = local_c6;
        local_7a = local_c2;
        local_78 = local_d8;
        local_74 = local_d4;
        local_76 = local_c6;
        local_72 = local_c2;
        local_6c = local_84 + -1;
        local_62 = local_aa;
        local_6e = local_c6;
        local_52 = local_aa;
        local_6a = local_c2;
        local_50 = local_80;
        local_68 = local_80;
        local_4c = local_e0[2];
        local_64 = local_e0[2];
        local_48 = local_d8;
        local_9e = local_a6;
        local_9a = local_a2;
        local_70 = local_88;
        local_66 = local_ae;
        local_58 = local_88;
        local_54 = local_6c;
        local_56 = local_ae;
        local_4e = local_a6;
        local_4a = local_a2;
        local_44 = local_d4;
        local_46 = local_a6;
        local_42 = local_a2;
        local_40 = local_88;
        local_3c = local_6c;
        local_3e = local_a6;
        local_3a = local_a2;
      }
      local_14 = 0;
      do {
        local_2c = (AnonReceiver_0048DFD0 *)0x0;
        param_6 = local_3fc + param_3 * 0x15;
        do {
          local_f4 = *param_6;
          iVar10 = (int)local_e0[local_f4 * 4];
          local_c8 = local_a4;
          local_c6 = local_6e;
          local_c4 = local_a4;
          local_c2 = local_6a;
          local_c0 = local_9c;
          local_be = local_6e;
          local_bc = local_9c;
          local_ba = local_6a;
          local_a8 = local_a4;
          local_a6 = local_3e;
          local_a2 = local_3a;
          local_a0 = local_9c;
          local_9e = local_3e;
          local_9a = local_3a;
          local_80 = local_50;
          local_7e = local_6e;
          local_7c = local_4c;
          local_7a = local_6a;
          local_78 = local_48;
          local_76 = local_6e;
          local_74 = local_44;
          local_72 = local_6a;
          local_70 = local_40;
          local_6c = local_3c;
          local_68 = local_50;
          local_66 = local_56;
          local_64 = local_4c;
          local_62 = local_52;
          local_58 = local_40;
          local_54 = local_3c;
          local_4e = local_3e;
          local_4a = local_3a;
          local_46 = local_3e;
          local_42 = local_3a;
          if ((iVar10 != 100000) &&
             ((local_f4 < 0xc ||
              (uVar7 = local_1c - local_3fc[local_14 + local_1c * 5 + 0xa8] >> 0x1f,
              iVar6 <= (int)((local_1c - local_3fc[local_14 + local_1c * 5 + 0xa8] ^ uVar7) - uVar7)
              )))) {
            local_3fc[0xc1] = (int)local_e0[local_f4 * 4 + 2];
            for (; iVar10 <= local_e0[local_f4 * 4 + 2]; iVar10 = iVar10 + 1) {
              if ((local_20 <= iVar10) && (iVar10 <= local_ec)) {
                local_f0 = (int)local_e0[local_f4 * 4 + 3];
                for (iVar17 = (int)local_e0[local_f4 * 4 + 1]; iVar17 <= local_e0[local_f4 * 4 + 3];
                    iVar17 = iVar17 + 1) {
                  if ((local_28 <= iVar17) && (iVar17 <= local_e8)) {
                    iVar5 = local_3fc[local_14 + local_1c * 5 + 0xa8];
                    sVar4 = (short)iVar5;
                    sVar13 = (short)iVar10;
                    sVar14 = (short)iVar17;
                    if (iVar5 < 1) {
                      if (sVar13 < 0) {
LAB_0048f3f7:
                        iVar5 = ((((iVar17 - local_28) * (int)local_10 + local_a * iVar5) - local_20
                                 ) + iVar10) * 2;
                        if ((0 < *(short *)(iVar5 + (int)local_24)) &&
                           (local_18 <= (*(short *)(iVar5 + (int)local_8) + -1) / 3)) {
                          local_e4 = 1;
                          *param_8 = sVar13;
                          *param_9 = sVar14;
                          *param_10 = (short)local_3fc[local_1c * 5 + local_14 + 0xa8];
                          goto LAB_0048f4e0;
                        }
                      }
                      else if (((((g_worldGrid.sizeX <= sVar13) || (sVar14 < 0)) ||
                                (g_worldGrid.sizeY <= sVar14)) ||
                               ((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)))) ||
                              (g_worldGrid.cells
                               [(int)sVar4 * (int)g_worldGrid.planeStride +
                                (int)sVar14 * (int)g_worldGrid.sizeX + (int)sVar13].objects[0] ==
                               (STWorldObject *)0x0)) {
joined_r0x0048f3a9:
                        if ((((sVar13 < 0) || (g_worldGrid.sizeX <= sVar13)) || (sVar14 < 0)) ||
                           ((((g_worldGrid.sizeY <= sVar14 || (sVar4 < 0)) ||
                             (g_worldGrid.sizeZ <= sVar4)) ||
                            (g_worldGrid.cells
                             [(int)sVar4 * (int)g_worldGrid.planeStride +
                              (int)sVar14 * (int)g_worldGrid.sizeX + (int)sVar13].objects[1] ==
                             (STWorldObject *)0x0)))) goto LAB_0048f3f7;
                      }
                    }
                    else if ((sVar13 < 0) ||
                            ((((g_worldGrid.sizeX <= sVar13 || (sVar14 < 0)) ||
                              ((g_worldGrid.sizeY <= sVar14 ||
                               (((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)) ||
                                (g_worldGrid.cells
                                 [(int)sVar4 * (int)g_worldGrid.planeStride +
                                  (int)sVar14 * (int)g_worldGrid.sizeX + (int)sVar13].objects[0] ==
                                 (STWorldObject *)0x0)))))) &&
                             (((sVar13 < 0 || (g_worldGrid.sizeX <= sVar13)) ||
                              ((sVar14 < 0 ||
                               (((g_worldGrid.sizeY <= sVar14 || (sVar4 < 0)) ||
                                ((g_worldGrid.sizeZ <= sVar4 ||
                                 (g_worldGrid.cells
                                  [(int)sVar4 * (int)g_worldGrid.planeStride +
                                   (int)sVar14 * (int)g_worldGrid.sizeX + (int)sVar13].objects[1] ==
                                  (STWorldObject *)0x0)))))))))))) {
                      sVar4 = sVar4 + -1;
                      if (sVar13 < 0) goto LAB_0048f3f7;
                      if (((((g_worldGrid.sizeX <= sVar13) || (sVar14 < 0)) ||
                           (g_worldGrid.sizeY <= sVar14)) ||
                          ((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)))) ||
                         ((g_worldGrid.cells
                           [(int)sVar4 * (int)g_worldGrid.planeStride +
                            (int)sVar14 * (int)g_worldGrid.sizeX + (int)sVar13].objects[0] ==
                           (STWorldObject *)0x0 ||
                          (g_pathingGrid.cells
                           [g_pathingGrid.sizeX * iVar17 +
                            iVar10 + (iVar5 + -1) * (int)g_pathingGrid.planeStride] == 0))))
                      goto joined_r0x0048f3a9;
                    }
                  }
                }
              }
            }
          }
          local_2c = (AnonReceiver_0048DFD0 *)&local_2c->field_0x1;
          param_6 = param_6 + 1;
        } while ((int)local_2c < 0x15);
        local_14 = local_14 + 1;
      } while (local_14 < 5);
      local_18 = local_18 + 1;
      param_5 = param_5 + 2;
    } while (local_18 / iVar6 < 5);
  }
LAB_0048f4e0:
  if (local_30 != (undefined4 *)0x0) {
    FreeAndNull(&local_30);
  }
  if (local_8 != (undefined4 *)0x0) {
    FreeAndNull(&local_8);
  }
  return local_e4;
}

