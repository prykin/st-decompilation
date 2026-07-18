
void FUN_0051a100(int param_1,uint param_2,char param_3)

{
  char cVar1;
  code *pcVar2;
  ushort uVar3;
  int iVar4;
  UINT UVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar11;
  HINSTANCE pHVar12;
  byte bVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *local_a0;
  undefined4 local_9c [16];
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  uint local_4b;
  undefined4 local_47;
  void *local_40;
  byte *local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  int local_27;
  uint local_23;
  int *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  char local_9;
  int local_8;
  
  local_8 = 0;
  local_9 = '\0';
  if (DAT_007fa174 != 0) {
    local_a0 = DAT_00858df8;
    DAT_00858df8 = &local_a0;
    iVar4 = __setjmp3(local_9c,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      if (param_3 == '\0') {
        cVar1 = *(char *)((int)local_40 + 0x1a1);
        if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\n')) {
          *(char *)((int)local_40 + 0x1a2) = cVar1;
          *(undefined4 *)((int)local_40 + 0x1ab) = *(undefined4 *)((int)local_40 + 0x1a3);
        }
        else {
          *(undefined1 *)((int)local_40 + 0x1a2) = 0;
          *(undefined4 *)((int)local_40 + 0x1ab) = 0;
        }
        *(undefined1 *)((int)local_40 + 0x1a1) = 2;
        *(int *)((int)local_40 + 0x1a3) = param_1;
        *(uint *)((int)local_40 + 0x1a7) = param_2;
        *(undefined2 *)((int)local_40 + 0x1af) = 0x32;
        *(undefined2 *)((int)local_40 + 0x1b1) = 5;
        if (*(int *)((int)local_40 + 0x178) != 0) {
          *(undefined4 *)((int)local_40 + 0x28) = 0x4202;
          *(undefined2 *)((int)local_40 + 0x2c) = 0;
          *(undefined2 *)((int)local_40 + 0x2e) = 2;
          *(int *)((int)local_40 + 0x30) = *(int *)((int)local_40 + 0x178);
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)((int)local_40 + 0x18);
          }
        }
      }
      bVar13 = (byte)param_2;
      UVar5 = thunk_FUN_00523410(param_1,bVar13,0);
      thunk_FUN_00515310(0x55fa,param_2,UVar5);
      thunk_FUN_00515650(&local_8,param_1,bVar13,*(int *)((int)local_40 + 0x240));
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar4 = -1;
      puVar6 = (uint *)FUN_006b0140(0x564a,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      UVar5 = 0;
      iVar4 = FUN_006b0fd0(0x8014a0);
      if (iVar4 == 0) {
        iVar4 = FUN_006b0fd0(0x800f90);
        if (iVar4 == 0) {
          iVar4 = FUN_006b0fd0(0x801360);
          if (iVar4 == 0) {
            iVar4 = FUN_006b0fd0(0x800f80);
            if (iVar4 != 0) {
              UVar5 = 0x3a9d;
            }
          }
          else {
            UVar5 = 0x3aa8;
          }
        }
        else {
          UVar5 = 0x3a9c;
        }
      }
      else {
        UVar5 = 0x3a9b;
      }
      if (UVar5 != 0) {
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
        uVar15 = 3;
        iVar14 = -1;
        iVar4 = -3;
        puVar6 = (uint *)FUN_006b0140(0x5654,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
        uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar4 = 1;
        puVar6 = (uint *)FUN_006b0140(UVar5,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar14,uVar7);
        local_8 = local_8 + 0xf;
      }
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x5656,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
      if (param_2 == 1) {
        UVar5 = 0x5604;
      }
      else if (param_2 == 2) {
        UVar5 = 0x5605;
      }
      else {
        UVar5 = 0x5606;
      }
      uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(UVar5,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar14,uVar7);
      local_8 = local_8 + 0xf;
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x55f7,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
      local_14 = param_1 * 3;
      if (param_2 == 3) {
        iVar4 = *(int *)(&DAT_007e2f10 + param_1 * 0xc);
      }
      else {
        iVar4 = *(int *)(&DAT_007e22a0 + (local_14 + param_2) * 4);
      }
      if (iVar4 != 0) {
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar4);
        FUN_007119c0(&DAT_0080f33a,1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar14 = FUN_0070b3a0(*(int *)((int)local_40 + 0x238),
                              (-(uint)(param_2 != 3) & 0xfffffffe) + 3);
        FUN_006b5440(*(int *)((int)local_40 + 0x218),0,0xb4,local_8,iVar14,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(iVar14 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(iVar14 + 8);
        local_27 = (-(uint)(param_2 != 3) & 0xfffffffc) + 0xe2;
        local_28 = 1;
        local_23 = param_2;
        FUN_006ae1c0(*(uint **)((int)local_40 + 0x1d7),&local_38);
        local_8 = local_8 + 0x14;
      }
      local_14 = local_14 + -0x97 + param_2;
      iVar14 = *(int *)(&DAT_007e1c50 + local_14 * 4);
      if (iVar14 != 0) {
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar14);
        FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 4);
        iVar8 = FUN_0070b3a0(*(int *)((int)local_40 + 0x238),0);
        FUN_006b5440(*(int *)((int)local_40 + 0x218),0,0xb4,local_8,iVar8,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(iVar8 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(iVar8 + 8);
        local_28 = 1;
        local_27 = 0xdd;
        local_23 = param_2;
        FUN_006ae1c0(*(uint **)((int)local_40 + 0x1d7),&local_38);
        local_8 = local_8 + 0x14;
      }
      iVar8 = *(int *)(&DAT_008545ac + local_14 * 4);
      if (iVar8 != 0) {
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar8);
        FUN_007119c0(&DAT_0080f33a,1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        iVar9 = FUN_0070b3a0(*(int *)((int)local_40 + 0x238),2);
        FUN_006b5440(*(int *)((int)local_40 + 0x218),0,0xb4,local_8,iVar9,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(iVar9 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(iVar9 + 8);
        local_28 = 1;
        local_27 = 0xdc;
        local_23 = param_2;
        FUN_006ae1c0(*(uint **)((int)local_40 + 0x1d7),&local_38);
        local_8 = local_8 + 0x14;
      }
      if (iVar8 == 0 && (iVar14 == 0 && iVar4 == 0)) {
        local_8 = local_8 + 0xf;
      }
      local_1c = (int *)0x1;
      local_10 = 1;
      local_18 = (param_1 + -0x74 + param_2 * 0x42) * 3;
      do {
        pbVar10 = &DAT_007c0e4c + local_18 + (local_10 & 0xffff);
        local_3c = pbVar10;
        if (*pbVar10 == 0) break;
        if (local_1c != (int *)0x0) {
          FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
          uVar15 = 3;
          iVar14 = -1;
          iVar4 = -3;
          puVar6 = (uint *)FUN_006b0140(0x5657,DAT_00807618);
          FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
          local_1c = (int *)0x0;
        }
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
        uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar4 = 1;
        pHVar12 = DAT_00807618;
        UVar5 = thunk_FUN_00528060(*pbVar10,'\0');
        puVar6 = (uint *)FUN_006b0140(UVar5,pHVar12);
        FUN_007119c0(puVar6,iVar4,iVar14,uVar7);
        local_8 = local_8 + 0xf;
        uVar7 = thunk_FUN_005276e0(*pbVar10,0);
        pbVar10 = (byte *)FUN_0070b3a0(*(int *)((int)local_40 + 0x230),uVar7);
        thunk_FUN_00540760(*(undefined4 **)((int)local_40 + 0x218),0x96,local_8,'\x01',pbVar10);
        local_5c = 0x96;
        local_54 = *(undefined4 *)(pbVar10 + 4);
        local_58 = local_8;
        local_50 = *(undefined4 *)(pbVar10 + 8);
        local_4b = (uint)*local_3c;
        local_4c = 5;
        local_47 = 0;
        FUN_006ae1c0(*(uint **)((int)local_40 + 0x1d7),&local_5c);
        local_10 = local_10 + 1;
        local_8 = local_8 + 5 + *(int *)(pbVar10 + 8);
      } while ((ushort)local_10 < 3);
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar4 = -1;
      puVar6 = (uint *)FUN_006b0140(0x564b,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
      uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x564c,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar14,uVar7);
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      iVar14 = local_14;
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)(&DAT_007e417c + local_14 * 4));
      FUN_007119c0(&DAT_0080f33a,-3,-1,2);
      local_8 = local_8 + 0xf;
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
      uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar8 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x564d,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar8,uVar7);
      iVar4 = *(int *)(&DAT_007e3dc0 + param_2 * 4);
      local_1c = (int *)(&DAT_007e3dc0 + param_2 * 4);
      local_18 = 0x42;
      local_10 = iVar4;
      do {
        iVar8 = *local_1c;
        if (iVar8 < (int)local_10) {
          local_10 = iVar8;
        }
        if (iVar4 < iVar8) {
          iVar4 = iVar8;
        }
        local_1c = local_1c + 3;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      iVar4 = (int)((iVar4 - local_10) + ((int)(iVar4 - local_10) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e3dc4 + iVar14 * 4) < (int)(local_10 + iVar4)) {
        local_10 = 0x5613;
      }
      else {
        local_10 = (((int)(local_10 + iVar4 * 2) <= *(int *)(&DAT_007e3dc4 + iVar14 * 4)) - 1 &
                   0xfffffffe) + 0x5616;
      }
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar8 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(local_10,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar8,uVar15);
      local_8 = local_8 + 0xf;
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
      uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar8 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x565a,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar8,uVar7);
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar8 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x273f - (*(int *)(&DAT_00791b18 + iVar14 * 4) != 0),
                                    DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar8,uVar15);
      local_8 = local_8 + 0xf;
      iVar4 = param_1 + -0x32;
      if (*(int *)(&DAT_00793e28 + iVar4 * 8) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(&DAT_00794038 + iVar4 * 8);
      }
      local_18 = iVar4 * 0x18;
      iVar4 = thunk_FUN_00515900(0x96,&local_8,(&DAT_00792ca0)[iVar4 * 6],iVar8,param_2);
      cVar1 = local_9;
      if ((iVar4 != 0) || (local_9 = '\0', cVar1 != '\0')) {
        local_9 = '\x01';
      }
      if (*(int *)(&DAT_00793e2c + (param_1 + -0x32) * 8) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(&DAT_0079403c + (param_1 + -0x32) * 8);
      }
      iVar4 = thunk_FUN_00515900(0x96,&local_8,*(int *)((int)&DAT_00792cac + local_18),iVar4,param_2
                                );
      cVar1 = local_9;
      if ((iVar4 != 0) || (local_9 = '\0', cVar1 != '\0')) {
        local_9 = '\x01';
      }
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
      uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar8 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x564e,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar8,uVar7);
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar8 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140((param_2 != 3) + 0x273e,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar8,uVar15);
      local_8 = local_8 + 0xf;
      if (local_9 != '\0') {
        bVar11 = false;
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
        uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar4 = 1;
        puVar6 = (uint *)FUN_006b0140(0x564f,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar14,uVar7);
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
        if (*(int *)((int)&DAT_00792ca0 + local_18) != 0) {
          bVar11 = (&DAT_007bf678)[*(int *)((int)&DAT_00792ca0 + local_18) * 3 + -0x1c2] != 0;
        }
        if ((*(int *)((int)&DAT_00792cac + local_18) != 0) &&
           ((bVar11 || ((&DAT_007bf678)[*(int *)((int)&DAT_00792cac + local_18) * 3 + -0x1c2] != 0))
           )) {
          bVar11 = true;
        }
        uVar15 = 2;
        iVar14 = -1;
        iVar4 = -3;
        puVar6 = (uint *)FUN_006b0140(0x273f - bVar11,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
        local_8 = local_8 + 0xf;
        iVar14 = local_14;
      }
      if (param_2 != 3) {
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
        uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar8 = -1;
        iVar4 = 1;
        puVar6 = (uint *)FUN_006b0140(0x5650,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar8,uVar7);
        iVar4 = *(int *)(&DAT_007e29f0 + iVar14 * 4);
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
        uVar15 = 2;
        iVar8 = -1;
        iVar14 = -3;
        puVar6 = (uint *)FUN_006b0140(0x273f - (iVar4 != 0),DAT_00807618);
        FUN_007119c0(puVar6,iVar14,iVar8,uVar15);
        local_8 = local_8 + 0xf;
        iVar14 = local_14;
        if (iVar4 != 0) {
          FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
          uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar8 = -1;
          iVar14 = 1;
          puVar6 = (uint *)FUN_006b0140(0x5651,DAT_00807618);
          FUN_007119c0(puVar6,iVar14,iVar8,uVar7);
          FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x5f,local_8 + -3,0x16,0x14);
          wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar4);
          FUN_007119c0(&DAT_0080f33a,1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          iVar4 = FUN_0070b3a0(*(int *)((int)local_40 + 0x238),1);
          FUN_006b5440(*(int *)((int)local_40 + 0x218),0,0x7a,local_8,iVar4,0,0x3a);
          local_38 = 0x7a;
          local_30 = *(undefined4 *)(iVar4 + 4);
          local_34 = local_8;
          local_2c = *(undefined4 *)(iVar4 + 8);
          local_28 = 1;
          local_27 = 0xde;
          local_23 = param_2;
          FUN_006ae1c0(*(uint **)((int)local_40 + 0x1d7),&local_38);
          local_8 = local_8 + 0x14;
          iVar14 = local_14;
        }
      }
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
      uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar8 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x565b,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar8,uVar7);
      local_10 = 0;
      uVar3 = 0;
      do {
        if ((&DAT_007e1988)[iVar14 * 3 + (uint)uVar3] != '\0') {
          local_10 = 0x273e;
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 3);
      if (local_10 == 0) {
        local_10 = 0x273f;
      }
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(local_10,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      UVar5 = thunk_FUN_00523410(param_1,bVar13,2);
      thunk_FUN_00515c00(&local_8,UVar5);
      thunk_FUN_00515e30(local_40,&local_8,'\x02',param_1,param_2);
      DAT_00858df8 = local_a0;
      return;
    }
    DAT_00858df8 = local_a0;
    iVar14 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x7ec,0,iVar4,&DAT_007a4ccc);
    if (iVar14 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c383c,0x7ec);
  }
  return;
}

