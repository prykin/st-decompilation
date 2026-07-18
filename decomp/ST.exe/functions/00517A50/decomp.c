
void __thiscall FUN_00517a50(void *this,int param_1,uint param_2,char param_3)

{
  char cVar1;
  code *pcVar2;
  void *this_00;
  int iVar3;
  UINT UVar4;
  uint *puVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 unaff_ESI;
  byte *pbVar13;
  void *unaff_EDI;
  char *pcVar14;
  byte bVar15;
  int iVar16;
  undefined4 uVar17;
  HINSTANCE pHVar18;
  undefined4 local_7c [16];
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_2b;
  uint local_27;
  void *local_20;
  int local_1c;
  byte *local_18;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  int local_8;
  
  pbVar13 = (byte *)0x0;
  local_8 = 0;
  local_c = (byte *)0x0;
  local_20 = this;
  local_10 = (byte *)FUN_0070b3a0(*(int *)((int)this + 0x248),4);
  uVar12 = 0;
  do {
    if ((*(int *)((int)&DAT_007c3469 + (uint)uVar12 * 0x27) == param_1) &&
       ((byte)(&DAT_007c3468)[(uint)uVar12 * 0x27] == param_2)) {
      pbVar13 = &DAT_007c3468 + (uint)uVar12 * 0x27;
      local_c = pbVar13;
      break;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 0xb);
  if (pbVar13 != (byte *)0x0) {
    uVar11 = (uint)DAT_00858df8;
    DAT_00858df8 = &stack0xffffff80;
    iVar3 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
    this_00 = local_20;
    if (iVar3 == 0) {
      if (param_3 == '\0') {
        cVar1 = *(char *)((int)local_20 + 0x1a1);
        if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\n')) {
          *(char *)((int)local_20 + 0x1a2) = cVar1;
          *(undefined4 *)((int)local_20 + 0x1ab) = *(undefined4 *)((int)local_20 + 0x1a3);
        }
        else {
          *(undefined1 *)((int)local_20 + 0x1a2) = 0;
          *(undefined4 *)((int)local_20 + 0x1ab) = 0;
        }
        *(undefined1 *)((int)local_20 + 0x1a1) = 1;
        *(int *)((int)local_20 + 0x1a3) = param_1;
        *(uint *)((int)local_20 + 0x1a7) = param_2;
        *(undefined2 *)((int)local_20 + 0x1af) = 0x32;
        *(undefined2 *)((int)local_20 + 0x1b1) = 5;
        if (*(int *)((int)local_20 + 0x178) != 0) {
          *(undefined4 *)((int)local_20 + 0x28) = 0x4202;
          *(undefined2 *)((int)local_20 + 0x2c) = 0;
          *(undefined2 *)((int)local_20 + 0x2e) = 2;
          *(int *)((int)local_20 + 0x30) = *(int *)((int)local_20 + 0x178);
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)((int)local_20 + 0x18);
          }
        }
      }
      UVar4 = thunk_FUN_005293f0(param_1);
      thunk_FUN_00515310(0x55fe,param_2,UVar4);
      bVar15 = (byte)param_2;
      thunk_FUN_00515650(&local_8,param_1,bVar15,0);
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,200,0xf);
      uVar17 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x5627,DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar16,uVar17);
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0xcd,local_8,0xcf,0xf);
      pbVar13 = local_c;
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar3 = 1;
      puVar5 = (uint *)FUN_006b0140(*(UINT *)(local_c + 5),DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar16,uVar9);
      local_8 = local_8 + 0xf;
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,200,0xf);
      uVar17 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x5628,DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar16,uVar17);
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0xcd,local_8,0xcf,0xf);
      pHVar18 = DAT_00807618;
      UVar4 = thunk_FUN_00523410(*(undefined4 *)(pbVar13 + 9),bVar15,0);
      pcVar6 = (char *)FUN_006b0140(UVar4,pHVar18);
      uVar9 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = (char *)&DAT_0080f33a;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
      for (puVar5 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar5 != (uint *)0x0;
          puVar5 = FUN_0072e560(puVar5,'\n')) {
        *(undefined1 *)puVar5 = 0x20;
      }
      FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      pbVar7 = local_c;
      local_8 = local_8 + 0xf;
      uVar9 = thunk_FUN_00526ba0(*(undefined4 *)(local_c + 9),*local_c);
      pbVar13 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x240),uVar9);
      thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0xcd,local_8,'\x01',pbVar13);
      pbVar13 = local_10;
      thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0xcb,local_8 + -2,'\x06',local_10);
      local_3c = 0xcb;
      local_34 = *(undefined4 *)(pbVar13 + 4);
      local_38 = local_8 + -2;
      local_30 = *(undefined4 *)(pbVar13 + 8);
      local_2c = 2;
      local_2b = *(undefined4 *)(pbVar7 + 9);
      local_27 = param_2;
      FUN_006ae1c0(*(uint **)((int)this_00 + 0x1d7),&local_3c);
      local_8 = local_8 + *(int *)(pbVar13 + 8);
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,200,0xf);
      uVar17 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x5629,DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar16,uVar17);
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0xcd,local_8,0xcf,0xf);
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar3 = 1;
      puVar5 = (uint *)FUN_006b0140(0x273f - (*(int *)(pbVar7 + 0xd) != 0),DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar16,uVar9);
      local_8 = local_8 + 0xf;
      if (*(int *)(pbVar7 + 0xd) != 0) {
        FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,200,0xf);
        uVar17 = 3;
        iVar16 = -1;
        iVar3 = -3;
        puVar5 = (uint *)FUN_006b0140(0x562a,DAT_00807618);
        FUN_007119c0(puVar5,iVar3,iVar16,uVar17);
        FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0xcd,local_8,0xcf,0xf);
        pHVar18 = DAT_00807618;
        UVar4 = thunk_FUN_00523410(*(undefined4 *)(pbVar7 + 0xd),bVar15,0);
        pcVar6 = (char *)FUN_006b0140(UVar4,pHVar18);
        uVar9 = 0xffffffff;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar6 = pcVar14 + -uVar9;
        pcVar14 = (char *)&DAT_0080f33a;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        for (puVar5 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar5 != (uint *)0x0;
            puVar5 = FUN_0072e560(puVar5,'\n')) {
          *(undefined1 *)puVar5 = 0x20;
        }
        FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        pbVar7 = local_c;
        local_8 = local_8 + 0xf;
        uVar9 = thunk_FUN_00526ba0(*(undefined4 *)(local_c + 0xd),*local_c);
        pbVar13 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x23c),uVar9);
        thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0xcd,local_8,'\x01',pbVar13);
        pbVar13 = local_10;
        thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0xcd,local_8,'\x06',local_10);
        local_3c = 0xcd;
        local_34 = *(undefined4 *)(pbVar13 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(pbVar13 + 8);
        local_2c = 3;
        local_2b = *(undefined4 *)(pbVar7 + 0xd);
        local_27 = (uint)*pbVar7;
        FUN_006ae1c0(*(uint **)((int)this_00 + 0x1d7),&local_3c);
        local_8 = local_8 + *(int *)(pbVar13 + 8);
      }
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,200,0xf);
      uVar17 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x562b,DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar16,uVar17);
      local_18 = pbVar7 + 0x19;
      pbVar13 = pbVar7 + 0x11;
      local_1c = 2;
      do {
        local_14 = pbVar13;
        if (*(int *)pbVar13 != 0) {
          FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0xcd,local_8,0xcf,0xf);
          pHVar18 = DAT_00807618;
          UVar4 = thunk_FUN_00523410(*(undefined4 *)pbVar13,bVar15,0);
          pcVar6 = (char *)FUN_006b0140(UVar4,pHVar18);
          uVar11 = 0xffffffff;
          do {
            pcVar14 = pcVar6;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar14 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar14;
          } while (cVar1 != '\0');
          uVar11 = ~uVar11;
          pcVar6 = pcVar14 + -uVar11;
          pcVar14 = (char *)&DAT_0080f33a;
          for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar14 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar14 = pcVar14 + 1;
          }
          for (puVar5 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar5 != (uint *)0x0;
              puVar5 = FUN_0072e560(puVar5,'\n')) {
            *(undefined1 *)puVar5 = 0x20;
          }
          FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
          pbVar13 = local_14;
          local_8 = local_8 + 0xf;
          uVar11 = thunk_FUN_00526ba0(*(undefined4 *)local_14,*local_c);
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x240),uVar11);
          thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0xcd,local_8,'\x01',pbVar7);
          pbVar7 = local_10;
          thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0xcb,local_8 + -2,'\x06',
                             local_10);
          local_3c = 0xcb;
          local_34 = *(undefined4 *)(pbVar7 + 4);
          local_38 = local_8 + -2;
          local_30 = *(undefined4 *)(pbVar7 + 8);
          local_2c = 2;
          local_2b = *(undefined4 *)pbVar13;
          local_27 = (uint)*local_c;
          FUN_006ae1c0(*(uint **)((int)this_00 + 0x1d7),&local_3c);
          local_8 = local_8 + *(int *)(pbVar7 + 8);
          FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,200,0xf);
          uVar17 = 3;
          iVar16 = -1;
          iVar3 = -3;
          puVar5 = (uint *)FUN_006b0140(0x562c,DAT_00807618);
          FUN_007119c0(puVar5,iVar3,iVar16,uVar17);
          FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0xcd,local_8,0xcf,0xf);
          uVar11 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar16 = -1;
          iVar3 = 1;
          puVar5 = (uint *)FUN_006b0140((-(uint)(*local_18 != 0) & 0xffffffef) + 0x5641,DAT_00807618
                                       );
          FUN_007119c0(puVar5,iVar3,iVar16,uVar11);
          local_8 = local_8 + 0xf;
          pbVar7 = local_c;
        }
        pbVar13 = local_14 + 4;
        local_18 = local_18 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      local_14 = pbVar13;
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,200,0xf);
      uVar17 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x562d,DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar16,uVar17);
      pcVar6 = (char *)FUN_006b0140(*(UINT *)(pbVar7 + 0x1b),DAT_00807618);
      uVar9 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = (char *)&DAT_0080f33a;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
      FUN_00712c10((char *)&DAT_0080f33a,&DAT_0080f33a,(uint *)s________________007c21d8,0xcf,1);
      uVar9 = FUN_007113e0(*(void **)((int)this_00 + 0x1e0),&DAT_0080f33a);
      thunk_FUN_00511ab0(this_00,local_8,uVar9);
      uVar10 = uVar9 & 0xffff;
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0xcd,local_8,0xcf,uVar10 + 2);
      FUN_00711b70(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
      if ((ushort)uVar9 < 0x10) {
        uVar10 = 0xf;
      }
      local_8 = local_8 + uVar10;
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,200,0xf);
      uVar17 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x562e,DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar16,uVar17);
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0xcd,local_8,0xcf,0xf);
      pbVar13 = local_c;
      uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar3 = 1;
      puVar5 = (uint *)FUN_006b0140(0x273f - (*(int *)(local_c + 0x1f) != 0),DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar16,uVar9);
      local_8 = local_8 + 0xf;
      if (*(int *)(pbVar13 + 0x1f) != 0) {
        thunk_FUN_00511ab0(this_00,local_8,0xf);
        FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,200,0xf);
        uVar17 = 3;
        iVar16 = -1;
        iVar3 = -3;
        puVar5 = (uint *)FUN_006b0140(0x562a,DAT_00807618);
        FUN_007119c0(puVar5,iVar3,iVar16,uVar17);
        FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0xcd,local_8,0xcf,0xf);
        pHVar18 = DAT_00807618;
        UVar4 = thunk_FUN_00523410(*(undefined4 *)(pbVar13 + 0x1f),bVar15,0);
        pcVar6 = (char *)FUN_006b0140(UVar4,pHVar18);
        uVar9 = 0xffffffff;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar6 = pcVar14 + -uVar9;
        pcVar14 = (char *)&DAT_0080f33a;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        for (puVar5 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar5 != (uint *)0x0;
            puVar5 = FUN_0072e560(puVar5,'\n')) {
          *(undefined1 *)puVar5 = 0x20;
        }
        FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        pbVar7 = local_10;
        local_8 = local_8 + 0xf;
        thunk_FUN_00511ab0(this_00,local_8,CONCAT22(extraout_var,*(undefined2 *)(local_10 + 8)));
        pbVar13 = local_c;
        uVar9 = thunk_FUN_00526ba0(*(undefined4 *)(local_c + 0x1f),*local_c);
        pbVar8 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x23c),uVar9);
        thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0xcd,local_8,'\x01',pbVar8);
        thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0xcd,local_8,'\x06',pbVar7);
        local_3c = 0xcd;
        local_34 = *(undefined4 *)(pbVar7 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(pbVar7 + 8);
        local_2c = 0xb;
        local_2b = *(undefined4 *)(pbVar13 + 0x1f);
        local_27 = (uint)*pbVar13;
        FUN_006ae1c0(*(uint **)((int)this_00 + 0x1d7),&local_3c);
        local_8 = local_8 + *(int *)(pbVar7 + 8);
      }
      if (*(int *)(pbVar13 + 0x23) != 0) {
        thunk_FUN_00511ab0(this_00,local_8,0xf);
        FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,200,0xf);
        uVar17 = 3;
        iVar16 = -1;
        iVar3 = -3;
        puVar5 = (uint *)FUN_006b0140(0x562f,DAT_00807618);
        FUN_007119c0(puVar5,iVar3,iVar16,uVar17);
        FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0xcd,local_8,0xcf,0xf);
        pHVar18 = DAT_00807618;
        UVar4 = thunk_FUN_00523410(*(undefined4 *)(pbVar13 + 0x23),bVar15,0);
        pcVar6 = (char *)FUN_006b0140(UVar4,pHVar18);
        uVar9 = 0xffffffff;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar6 = pcVar14 + -uVar9;
        pcVar14 = (char *)&DAT_0080f33a;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar14 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar14 = pcVar14 + 1;
        }
        for (puVar5 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar5 != (uint *)0x0;
            puVar5 = FUN_0072e560(puVar5,'\n')) {
          *(undefined1 *)puVar5 = 0x20;
        }
        FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        local_8 = local_8 + 0xf;
        iVar3 = FUN_0070b3a0(*(int *)((int)this_00 + 0x248),4);
        thunk_FUN_00511ab0(this_00,local_8,CONCAT22(extraout_var_00,*(undefined2 *)(iVar3 + 8)));
        pbVar7 = local_c;
        uVar9 = thunk_FUN_00526ba0(*(undefined4 *)(local_c + 0x23),*local_c);
        pbVar13 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x240),uVar9);
        thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0xcd,local_8,'\x01',pbVar13);
        pbVar13 = local_10;
        thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0xcb,local_8 + -2,'\x06',local_10)
        ;
        local_3c = 0xcb;
        local_34 = *(undefined4 *)(pbVar13 + 4);
        local_38 = local_8 + -2;
        local_30 = *(undefined4 *)(pbVar13 + 8);
        local_2c = 2;
        local_2b = *(undefined4 *)(pbVar7 + 0x23);
        local_27 = (uint)*pbVar7;
        FUN_006ae1c0(*(uint **)((int)this_00 + 0x1d7),&local_3c);
        local_8 = local_8 + *(int *)(pbVar13 + 8);
      }
      thunk_FUN_00515e30(this_00,&local_8,'\x01',param_1,param_2);
      DAT_00858df8 = (undefined1 *)uVar11;
      return;
    }
    DAT_00858df8 = (undefined1 *)uVar11;
    iVar16 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x5f8,0,iVar3,&DAT_007a4ccc);
    if (iVar16 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c383c,0x5f8);
  }
  return;
}

