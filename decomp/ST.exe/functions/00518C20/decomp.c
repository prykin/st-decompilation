
void FUN_00518c20(int param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  UINT UVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  int *piVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar10;
  HINSTANCE pHVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *local_a4;
  undefined4 local_a0 [16];
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  uint local_4f;
  undefined4 local_4b;
  int local_44;
  void *local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  int local_2b;
  uint local_27;
  uint local_20;
  uint local_1c;
  byte *local_18;
  uint local_14;
  char local_d;
  UINT local_c;
  int local_8;
  
  local_8 = 0;
  local_d = '\0';
  if (DAT_007fa174 != 0) {
    local_a4 = DAT_00858df8;
    DAT_00858df8 = &local_a4;
    iVar4 = __setjmp3(local_a0,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      if (param_2 == '\0') {
        cVar3 = *(char *)((int)local_40 + 0x1a1);
        if (((cVar3 == '\0') || (cVar3 == '\x06')) || (cVar3 == '\n')) {
          *(char *)((int)local_40 + 0x1a2) = cVar3;
          *(undefined4 *)((int)local_40 + 0x1ab) = *(undefined4 *)((int)local_40 + 0x1a3);
        }
        else {
          *(undefined1 *)((int)local_40 + 0x1a2) = 0;
          *(undefined4 *)((int)local_40 + 0x1ab) = 0;
        }
        *(undefined1 *)((int)local_40 + 0x1a1) = 3;
        *(int *)((int)local_40 + 0x1a3) = param_1;
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
      local_1c = thunk_FUN_004e8030(param_1);
      cVar3 = (char)local_1c;
      local_20 = CONCAT31(local_20._1_3_,cVar3);
      local_1c = local_1c & 0xff;
      UVar5 = thunk_FUN_00523410(param_1,cVar3,0);
      thunk_FUN_00515310(0x55fb,local_1c,UVar5);
      thunk_FUN_00515650(&local_8,param_1,(byte)local_20,*(int *)((int)local_40 + 0x23c));
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x19c,0xf);
      uVar14 = 3;
      iVar12 = -1;
      iVar4 = -1;
      puVar6 = (uint *)FUN_006b0140(0x564a,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      local_8 = local_8 + 0xf;
      local_c = 0;
      iVar4 = FUN_006b0fd0(0x801450);
      if (iVar4 == 0) {
        iVar4 = FUN_006b0fd0(0x801480);
        if (iVar4 == 0) {
          iVar4 = FUN_006b0fd0(0x800f10);
          if (iVar4 != 0) {
            local_c = 0x3aa2;
          }
        }
        else {
          local_c = 0x3aa0;
        }
      }
      else {
        local_c = 0x3a9f;
      }
      if (local_c != 0) {
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
        uVar14 = 3;
        iVar12 = -1;
        iVar4 = -3;
        puVar6 = (uint *)FUN_006b0140(0x5654,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar12 = -1;
        iVar4 = 1;
        puVar6 = (uint *)FUN_006b0140(local_c,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
        local_8 = local_8 + 0xf;
      }
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      uVar14 = 3;
      iVar12 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x5656,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
      if (local_1c == 1) {
        UVar5 = 0x5604;
      }
      else if (local_1c == 2) {
        UVar5 = 0x5605;
      }
      else {
        UVar5 = 0x5606;
      }
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(UVar5,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
      local_8 = local_8 + 0xf;
      local_14 = 0;
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      uVar14 = 3;
      iVar12 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x55f7,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      if (cVar3 == '\x03') {
        local_c = *(UINT *)(&DAT_007e09dc + param_1 * 4);
      }
      else {
        local_c = *(UINT *)(&DAT_007e079c + param_1 * 4);
      }
      if (local_c != 0) {
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,local_c);
        FUN_007119c0(&DAT_0080f33a,1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar4 = FUN_0070b3a0(*(int *)((int)local_40 + 0x238),
                             (-(uint)(cVar3 != '\x03') & 0xfffffffe) + 3);
        FUN_006b5440(*(int *)((int)local_40 + 0x218),0,0xb4,local_8,iVar4,0,0x3a);
        local_3c = 0xb4;
        local_34 = *(undefined4 *)(iVar4 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(iVar4 + 8);
        local_2b = (-(uint)(cVar3 != '\x03') & 0xfffffffc) + 0xe2;
        local_2c = 1;
        local_27 = local_1c;
        FUN_006ae1c0(*(uint **)((int)local_40 + 0x1d7),&local_3c);
        local_8 = local_8 + 0x14;
        local_14 = 1;
      }
      local_c = *(UINT *)(&DAT_007e055c + param_1 * 4);
      if (local_c != 0) {
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,local_c);
        FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 4);
        local_14 = FUN_0070b3a0(*(int *)((int)local_40 + 0x238),0);
        FUN_006b5440(*(int *)((int)local_40 + 0x218),0,0xb4,local_8,local_14,0,0x3a);
        local_3c = 0xb4;
        local_34 = *(undefined4 *)(local_14 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(local_14 + 8);
        local_2c = 1;
        local_2b = 0xdd;
        local_27 = local_1c;
        FUN_006ae1c0(*(uint **)((int)local_40 + 0x1d7),&local_3c);
        local_14 = 1;
        local_8 = local_8 + 0x14;
      }
      local_c = *(UINT *)(&DAT_00854428 + param_1 * 4);
      if (local_c != 0) {
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,local_c);
        FUN_007119c0(&DAT_0080f33a,1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        local_14 = FUN_0070b3a0(*(int *)((int)local_40 + 0x238),2);
        FUN_006b5440(*(int *)((int)local_40 + 0x218),0,0xb4,local_8,local_14,0,0x3a);
        local_3c = 0xb4;
        local_34 = *(undefined4 *)(local_14 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(local_14 + 8);
        local_2c = 1;
        local_2b = 0xdd;
        local_27 = local_1c;
        FUN_006ae1c0(*(uint **)((int)local_40 + 0x1d7),&local_3c);
        local_14 = 1;
        local_8 = local_8 + 0x14;
      }
      if (local_14 == 0) {
        local_8 = local_8 + 0xf;
      }
      local_c = 1;
      local_14 = 1;
      local_44 = param_1 * 3;
      do {
        local_18 = &DAT_007c0dd1 + local_44 + (local_14 & 0xffff);
        if (*local_18 == 0) break;
        if (local_c != 0) {
          FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
          uVar14 = 3;
          iVar12 = -1;
          iVar4 = -3;
          puVar6 = (uint *)FUN_006b0140(0x5657,DAT_00807618);
          FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
          local_c = 0;
        }
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
        pbVar7 = local_18;
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar12 = -1;
        iVar4 = 1;
        pHVar11 = DAT_00807618;
        UVar5 = thunk_FUN_00528060(*local_18,'\0');
        puVar6 = (uint *)FUN_006b0140(UVar5,pHVar11);
        FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
        local_8 = local_8 + 0xf;
        uVar8 = thunk_FUN_005276e0(*pbVar7,0);
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)((int)local_40 + 0x230),uVar8);
        thunk_FUN_00540760(*(undefined4 **)((int)local_40 + 0x218),0x96,local_8,'\x01',pbVar7);
        local_60 = 0x96;
        local_58 = *(undefined4 *)(pbVar7 + 4);
        local_5c = local_8;
        local_54 = *(undefined4 *)(pbVar7 + 8);
        local_4f = (uint)*local_18;
        local_50 = 5;
        local_4b = 0;
        FUN_006ae1c0(*(uint **)((int)local_40 + 0x1d7),&local_60);
        local_8 = local_8 + 5 + *(int *)(pbVar7 + 8);
        local_14 = local_14 + 1;
      } while ((ushort)local_14 < 3);
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x19c,0xf);
      uVar14 = 3;
      iVar12 = -1;
      iVar4 = -1;
      puVar6 = (uint *)FUN_006b0140(0x564b,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      local_8 = local_8 + 0xf;
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x564c,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)(&DAT_007dfbac + param_1 * 4));
      FUN_007119c0(&DAT_0080f33a,-3,-1,2);
      local_8 = local_8 + 0xf;
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x5658,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
      piVar9 = &DAT_007dfc70;
      local_c = DAT_007dfc70;
      local_18 = (byte *)0x28;
      iVar4 = DAT_007dfc70;
      do {
        if (*piVar9 < (int)local_c) {
          local_c = *piVar9;
        }
        if (iVar4 < *piVar9) {
          iVar4 = *piVar9;
        }
        piVar9 = piVar9 + 1;
        local_18 = (byte *)((int)local_18 + -1);
      } while (local_18 != (byte *)0x0);
      iVar4 = (int)(iVar4 - local_c) / 3;
      if (*(int *)(&DAT_007dfc6c + param_1 * 4) < (int)(local_c + iVar4)) {
        local_c = 0x5615;
      }
      else {
        local_c = (*(int *)(&DAT_007dfc6c + param_1 * 4) < (int)(local_c + iVar4 * 2)) + 0x5613;
      }
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      uVar14 = 2;
      iVar12 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(local_c,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      local_8 = local_8 + 0xf;
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x564d,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
      piVar9 = &DAT_007e04a0;
      local_c = DAT_007e04a0;
      local_18 = (byte *)0x28;
      iVar4 = DAT_007e04a0;
      do {
        if (*piVar9 < (int)local_c) {
          local_c = *piVar9;
        }
        if (iVar4 < *piVar9) {
          iVar4 = *piVar9;
        }
        piVar9 = piVar9 + 1;
        local_18 = (byte *)((int)local_18 + -1);
      } while (local_18 != (byte *)0x0);
      iVar4 = (int)((iVar4 - local_c) + ((int)(iVar4 - local_c) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e049c + param_1 * 4) < (int)(local_c + iVar4)) {
        local_c = 0x5613;
      }
      else {
        local_c = (((int)(local_c + iVar4 * 2) <= *(int *)(&DAT_007e049c + param_1 * 4)) - 1 &
                  0xfffffffe) + 0x5616;
      }
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      uVar14 = 2;
      iVar12 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(local_c,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      local_8 = local_8 + 0xf;
      iVar4 = thunk_FUN_00515900(0x96,&local_8,*(int *)(&DAT_007a8b18 + param_1 * 4),
                                 *(int *)(&DAT_007a8bb8 + param_1 * 4),local_20);
      cVar2 = local_d;
      if ((iVar4 != 0) || (local_d = '\0', cVar2 != '\0')) {
        local_d = '\x01';
      }
      iVar4 = thunk_FUN_00515900(0x96,&local_8,*(int *)(&DAT_007a8cf8 + param_1 * 4),
                                 *(int *)(&DAT_007a8d98 + param_1 * 4),local_20);
      cVar2 = local_d;
      if ((iVar4 != 0) || (local_d = '\0', cVar2 != '\0')) {
        local_d = '\x01';
      }
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x5659,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      uVar14 = 2;
      iVar13 = -1;
      iVar12 = -3;
      pHVar11 = DAT_00807618;
      iVar4 = FUN_006b0fd0(0x800f10);
      puVar6 = (uint *)FUN_006b0140(0x273f - (iVar4 != 0),pHVar11);
      FUN_007119c0(puVar6,iVar12,iVar13,uVar14);
      local_8 = local_8 + 0xf;
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x564e,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      uVar14 = 2;
      iVar12 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140((cVar3 != '\x03') + 0x273e,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      local_8 = local_8 + 0xf;
      if (local_d != '\0') {
        bVar10 = false;
        if (*(int *)(&DAT_007a8b18 + param_1 * 4) != 0) {
          bVar10 = (&DAT_007bf678)[*(int *)(&DAT_007a8b18 + param_1 * 4) * 3 + -0x1c2] != 0;
        }
        if ((*(int *)(&DAT_007a8cf8 + param_1 * 4) != 0) &&
           ((bVar10 || ((&DAT_007bf678)[*(int *)(&DAT_007a8cf8 + param_1 * 4) * 3 + -0x1c2] != 0))))
        {
          bVar10 = true;
        }
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar12 = -1;
        iVar4 = 1;
        puVar6 = (uint *)FUN_006b0140(0x564f,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
        uVar14 = 2;
        iVar12 = -1;
        iVar4 = -3;
        puVar6 = (uint *)FUN_006b0140(0x273f - bVar10,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
        local_8 = local_8 + 0xf;
      }
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x5650,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
      local_c = *(UINT *)(&DAT_007e085c + param_1 * 4);
      FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0,local_8,0x91,0xf);
      uVar14 = 2;
      iVar12 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x273f - (local_c != 0),DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      local_8 = local_8 + 0xf;
      if (local_c != 0) {
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x96,local_8,0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar12 = -1;
        iVar4 = 1;
        puVar6 = (uint *)FUN_006b0140(0x5651,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
        FUN_00710a90(*(int *)((int)local_40 + 0x218),0,0x5f,local_8 + -3,0x16,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,local_c);
        FUN_007119c0(&DAT_0080f33a,1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar4 = FUN_0070b3a0(*(int *)((int)local_40 + 0x238),
                             (-(uint)(cVar3 != '\x03') & 0xfffffffe) + 3);
        FUN_006b5440(*(int *)((int)local_40 + 0x218),0,0x7a,local_8,iVar4,0,0x3a);
        local_3c = 0x7a;
        local_34 = *(undefined4 *)(iVar4 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(iVar4 + 8);
        local_2b = (-(uint)(cVar3 != '\x03') & 0xfffffffc) + 0xe2;
        local_2c = 1;
        local_27 = local_1c;
        FUN_006ae1c0(*(uint **)((int)local_40 + 0x1d7),&local_3c);
        local_8 = local_8 + 0x14;
      }
      UVar5 = thunk_FUN_00523410(param_1,(char)local_20,2);
      thunk_FUN_00515c00(&local_8,UVar5);
      thunk_FUN_00515e30(local_40,&local_8,'\x03',param_1,0);
      DAT_00858df8 = local_a4;
      return;
    }
    DAT_00858df8 = local_a4;
    iVar12 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x6f4,0,iVar4,&DAT_007a4ccc);
    if (iVar12 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c383c,0x6f4);
  }
  return;
}

