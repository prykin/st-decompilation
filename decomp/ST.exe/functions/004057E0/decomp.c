
void __thiscall thunk_FUN_0051b5a0(void *this,int param_1,int param_2,char param_3)

{
  char cVar1;
  code *pcVar2;
  void *this_00;
  int iVar3;
  UINT UVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar11;
  char *pcVar12;
  HINSTANCE pHVar13;
  char cVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined2 uVar18;
  undefined4 uVar19;
  undefined4 *puStack_a4;
  undefined4 auStack_a0 [16];
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  void *pvStack_44;
  int iStack_40;
  int iStack_3c;
  byte *pbStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  int iStack_23;
  int iStack_1f;
  int iStack_18;
  int *piStack_14;
  char cStack_d;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  pvStack_44 = this;
  pbStack_38 = (byte *)FUN_0070b3a0(*(int *)((int)this + 0x248),4);
  if (DAT_007fa174 != 0) {
    puStack_a4 = DAT_00858df8;
    DAT_00858df8 = &puStack_a4;
    iVar3 = __setjmp3(auStack_a0,0,unaff_EDI,unaff_ESI);
    this_00 = pvStack_44;
    if (iVar3 == 0) {
      if (param_3 == '\0') {
        cVar14 = *(char *)((int)pvStack_44 + 0x1a1);
        if (((cVar14 == '\0') || (cVar14 == '\x06')) || (cVar14 == '\n')) {
          *(char *)((int)pvStack_44 + 0x1a2) = cVar14;
          *(undefined4 *)((int)pvStack_44 + 0x1ab) = *(undefined4 *)((int)pvStack_44 + 0x1a3);
        }
        else {
          *(undefined1 *)((int)pvStack_44 + 0x1a2) = 0;
          *(undefined4 *)((int)pvStack_44 + 0x1ab) = 0;
        }
        *(undefined1 *)((int)pvStack_44 + 0x1a1) = 4;
        *(int *)((int)pvStack_44 + 0x1a3) = param_1;
        *(int *)((int)pvStack_44 + 0x1a7) = param_2;
        *(undefined2 *)((int)pvStack_44 + 0x1af) = 0x32;
        *(undefined2 *)((int)pvStack_44 + 0x1b1) = 5;
        if (*(int *)((int)pvStack_44 + 0x178) != 0) {
          *(undefined4 *)((int)pvStack_44 + 0x28) = 0x4202;
          *(undefined2 *)((int)pvStack_44 + 0x2c) = 0;
          *(undefined2 *)((int)pvStack_44 + 0x2e) = 2;
          *(int *)((int)pvStack_44 + 0x30) = *(int *)((int)pvStack_44 + 0x178);
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)((int)pvStack_44 + 0x18);
          }
        }
      }
      uVar18 = (undefined2)param_1;
      UVar4 = thunk_FUN_00524fe0(uVar18);
      thunk_FUN_00515310(0x55fd,param_2,UVar4);
      uVar5 = thunk_FUN_005259b0(uVar18,0,'\x01');
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x244),uVar5);
      if (pbVar6 != (byte *)0x0) {
        thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x68),0x35,
                           (0x1e - *(int *)(pbVar6 + 8)) / 2 + 0x2a,'\x06',pbVar6);
      }
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar19 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar7 = (uint *)FUN_006b0140(0x55f8,DAT_00807618);
      FUN_007119c0(puVar7,iVar3,iVar16,uVar19);
      iVar16 = 0;
      iVar3 = thunk_FUN_006460c0(param_1);
      if (0 < iVar3) {
        do {
          iVar3 = thunk_FUN_00646110(param_1,iVar16,&iStack_c,&piStack_14,&iStack_18);
          if (iVar3 != 0) {
            FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0x96,iStack_8,0x106,0xf);
            if ((piStack_14 == (int *)0x0) || (iStack_18 == 0)) {
              if (iVar16 == 0) {
                uVar19 = FUN_006b0140(0x565c,DAT_00807618);
                uVar15 = 2;
                uVar8 = FUN_006b0140(0x564c,DAT_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,s___d_d___d_s___d__s__007c3cdc,2,iStack_c,
                          (DAT_0080874e != '\x03') - 1 & 5,uVar8,uVar15,uVar19);
              }
              else {
                uVar19 = FUN_006b0140(0x565d,DAT_00807618);
                uVar15 = 2;
                iVar3 = iVar16;
                uVar8 = FUN_006b0140(0x564c,DAT_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,s___d_d___d_s___d__d__s__007c3cf4,2,iStack_c,
                          (DAT_0080874e != '\x03') - 1 & 5,uVar8,uVar15,iVar3,uVar19);
              }
            }
            else if (iVar16 == 0) {
              uVar19 = FUN_006b0140(0x565c,DAT_00807618);
              uVar15 = 2;
              uVar8 = FUN_006b0140(0x564c,DAT_00807618);
              wsprintfA((LPSTR)&DAT_0080f33a,s___d_d__d__d___d_s___d__s__007c3d10,2,iStack_c,
                        piStack_14,iStack_18,(DAT_0080874e != '\x03') - 1 & 5,uVar8,uVar15,uVar19);
            }
            else {
              uVar19 = FUN_006b0140(0x565d,DAT_00807618);
              uVar15 = 2;
              iVar3 = iVar16;
              uVar8 = FUN_006b0140(0x564c,DAT_00807618);
              wsprintfA((LPSTR)&DAT_0080f33a,s___d_d__d__d___d_s___d__d__s__007c3d30,2,iStack_c,
                        piStack_14,iStack_18,(DAT_0080874e != '\x03') - 1 & 5,uVar8,uVar15,iVar3,
                        uVar19);
            }
            FUN_007119c0(&DAT_0080f33a,1,-1,0);
            iStack_8 = iStack_8 + 0xf;
          }
          iVar16 = iVar16 + 1;
          iVar3 = thunk_FUN_006460c0(param_1);
        } while (iVar16 < iVar3);
      }
      iVar3 = param_1 * 3 + -0x1c2;
      piStack_14 = (int *)(iVar3 * 4);
      if ((&DAT_007bf67c)[iVar3] != 0) {
        FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,iStack_8,0x91,0xf);
        uVar19 = 3;
        iVar16 = -1;
        iVar3 = -3;
        puVar7 = (uint *)FUN_006b0140(0x5657,DAT_00807618);
        FUN_007119c0(puVar7,iVar3,iVar16,uVar19);
        FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0x96,iStack_8,0x106,0xf);
        piVar11 = piStack_14;
        uVar5 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar16 = -1;
        iVar3 = 1;
        pHVar13 = DAT_00807618;
        UVar4 = thunk_FUN_00528060(*(undefined1 *)((int)&DAT_007bf67c + (int)piStack_14),'\0');
        puVar7 = (uint *)FUN_006b0140(UVar4,pHVar13);
        FUN_007119c0(puVar7,iVar3,iVar16,uVar5);
        iStack_8 = iStack_8 + 0xf;
        uVar5 = thunk_FUN_005276e0(*(undefined1 *)((int)&DAT_007bf67c + (int)piVar11),0);
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x230),uVar5);
        thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0x96,iStack_8,'\x01',pbVar6);
        uStack_60 = 0x96;
        uStack_58 = *(undefined4 *)(pbVar6 + 4);
        iStack_5c = iStack_8;
        uStack_54 = *(undefined4 *)(pbVar6 + 8);
        uStack_50 = 5;
        uStack_4b = 0;
        uStack_4f = *(undefined4 *)((int)&DAT_007bf67c + (int)piStack_14);
        FUN_006ae1c0(*(uint **)((int)this_00 + 0x1d7),&uStack_60);
        iStack_8 = iStack_8 + 5 + *(int *)(pbVar6 + 8);
      }
      iVar3 = (&DAT_007e6024)[param_1 * 5 + -0x2ee];
      if (iVar3 != 0) {
        FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,iStack_8,0x91,0xf);
        uVar19 = 3;
        iVar17 = -1;
        iVar16 = -3;
        puVar7 = (uint *)FUN_006b0140(0x55f7,DAT_00807618);
        FUN_007119c0(puVar7,iVar16,iVar17,uVar19);
        FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0x96,iStack_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar3);
        FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 4);
        iVar3 = FUN_0070b3a0(*(int *)((int)this_00 + 0x238),0);
        FUN_006b5440(*(int *)((int)this_00 + 0x218),0,0xb4,iStack_8,iVar3,0,0x3a);
        uStack_34 = 0xb4;
        uStack_2c = *(undefined4 *)(iVar3 + 4);
        iStack_30 = iStack_8;
        uStack_28 = *(undefined4 *)(iVar3 + 8);
        uStack_24 = 1;
        iStack_23 = 0xdd;
        iStack_1f = param_2;
        FUN_006ae1c0(*(uint **)((int)this_00 + 0x1d7),&uStack_34);
        iStack_8 = iStack_8 + 0x14;
      }
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar19 = FUN_006b0140(0x5658,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c3cd8,uVar19);
      FUN_007119c0(&DAT_0080f33a,-3,-1,3);
      iVar3 = *(int *)(&DAT_007d1fdc + param_1 * 4);
      if (iVar3 == -1) {
        UVar4 = 0x5617;
      }
      else {
        iVar16 = 0;
        piVar11 = &DAT_007d2234;
        do {
          if (*piVar11 != -1) {
            iStack_40 = (&DAT_007d2234)[iVar16];
            iStack_3c = iStack_40;
            break;
          }
          piVar11 = piVar11 + 1;
          iVar16 = iVar16 + 1;
        } while ((int)piVar11 < 0x7d22e8);
        piVar11 = &DAT_007d2234;
        do {
          iVar16 = *piVar11;
          if (iVar16 != -1) {
            if (iVar16 < iStack_3c) {
              iStack_3c = iVar16;
            }
            if (iStack_40 < iVar16) {
              iStack_40 = iVar16;
            }
          }
          piVar11 = piVar11 + 1;
        } while ((int)piVar11 < 0x7d22e8);
        iVar16 = (iStack_40 - iStack_3c) / 3;
        if (iVar3 < iVar16 + iStack_3c) {
          UVar4 = 0x5615;
        }
        else {
          UVar4 = (iVar3 < iStack_3c + iVar16 * 2) + 0x5613;
        }
      }
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0x96,iStack_8,0x106,0xf);
      uVar5 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar3 = 1;
      puVar7 = (uint *)FUN_006b0140(UVar4,DAT_00807618);
      FUN_007119c0(puVar7,iVar3,iVar16,uVar5);
      iStack_8 = iStack_8 + 0xf;
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar19 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar7 = (uint *)FUN_006b0140(0x565e,DAT_00807618);
      FUN_007119c0(puVar7,iVar3,iVar16,uVar19);
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0x96,iStack_8,0x106,0xf);
      uVar5 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar3 = 1;
      puVar7 = (uint *)FUN_006b0140(0x273f - (*(int *)(s_blast_p_007d2090 + param_1 * 4) != 0),
                                    DAT_00807618);
      FUN_007119c0(puVar7,iVar3,iVar16,uVar5);
      piVar11 = piStack_14;
      iStack_8 = iStack_8 + 0xf;
      cVar14 = (char)param_2;
      if (*(int *)((int)&DAT_007bf678 + (int)piStack_14) != 0) {
        iStack_c = 0x34;
        FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,iStack_8,0x91,0xf);
        uVar19 = 3;
        iVar16 = -1;
        iVar3 = -3;
        puVar7 = (uint *)FUN_006b0140(0x565f,DAT_00807618);
        FUN_007119c0(puVar7,iVar3,iVar16,uVar19);
        FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0x96,iStack_8,0x106,0xf);
        switch(*(undefined4 *)((int)&DAT_007bf678 + (int)piVar11)) {
        case 1:
          iStack_c = 0x34;
          break;
        case 2:
          iStack_c = 0x5b;
          break;
        case 3:
          iStack_c = 0x44;
          break;
        case 4:
          iStack_c = 0x4e;
        }
        pHVar13 = DAT_00807618;
        UVar4 = thunk_FUN_00523410(iStack_c,cVar14,0);
        pcVar9 = (char *)FUN_006b0140(UVar4,pHVar13);
        uVar5 = 0xffffffff;
        do {
          pcVar12 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar12;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar9 = pcVar12 + -uVar5;
        pcVar12 = (char *)&DAT_0080f33a;
        for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar12 = pcVar12 + 1;
        }
        for (puVar7 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != (uint *)0x0;
            puVar7 = FUN_0072e560(puVar7,'\n')) {
          *(undefined1 *)puVar7 = 0x20;
        }
        FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        iVar3 = iStack_c;
        iStack_8 = iStack_8 + 0xf;
        uVar5 = thunk_FUN_00526ba0(iStack_c,cVar14);
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x240),uVar5);
        thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0x96,iStack_8,'\x01',pbVar6);
        pbVar6 = pbStack_38;
        thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0x94,iStack_8 + -2,'\x06',
                           pbStack_38);
        uStack_34 = 0x94;
        uStack_2c = *(undefined4 *)(pbVar6 + 4);
        iStack_30 = iStack_8 + -2;
        uStack_28 = *(undefined4 *)(pbVar6 + 8);
        uStack_24 = 2;
        iStack_23 = iVar3;
        iStack_1f = param_2;
        FUN_006ae1c0(*(uint **)((int)this_00 + 0x1d7),&uStack_34);
        iStack_8 = iStack_8 + *(int *)(pbVar6 + 8);
      }
      cStack_d = '\0';
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar19 = 3;
      iVar16 = -1;
      iVar3 = -3;
      puVar7 = (uint *)FUN_006b0140(0x5660,DAT_00807618);
      FUN_007119c0(puVar7,iVar3,iVar16,uVar19);
      piStack_14 = &DAT_007a8b1c;
      iStack_c = 1;
      do {
        iVar3 = iStack_c;
        if ((*piStack_14 == param_1) && (iVar16 = thunk_FUN_004e8030(iStack_c), iVar16 == param_2))
        {
          FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0x96,iStack_8,0x106,0xf);
          pHVar13 = DAT_00807618;
          UVar4 = thunk_FUN_00523410(iStack_c,cVar14,0);
          pcVar9 = (char *)FUN_006b0140(UVar4,pHVar13);
          uVar5 = 0xffffffff;
          do {
            pcVar12 = pcVar9;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar12 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar12;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar9 = pcVar12 + -uVar5;
          pcVar12 = (char *)&DAT_0080f33a;
          for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar12 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar12 = pcVar12 + 1;
          }
          for (puVar7 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != (uint *)0x0;
              puVar7 = FUN_0072e560(puVar7,'\n')) {
            *(undefined1 *)puVar7 = 0x20;
          }
          FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
          iVar3 = iStack_c;
          iStack_8 = iStack_8 + 0xf;
          uVar5 = thunk_FUN_00526ba0(iStack_c,cVar14);
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x23c),uVar5);
          thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0x96,iStack_8,'\x01',pbVar6);
          pbVar6 = pbStack_38;
          thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0x94,iStack_8 + -2,'\x06',
                             pbStack_38);
          uStack_34 = 0x94;
          uStack_2c = *(undefined4 *)(pbVar6 + 4);
          iStack_30 = iStack_8 + -2;
          uStack_28 = *(undefined4 *)(pbVar6 + 8);
          uStack_24 = 3;
          iStack_23 = iVar3;
          iStack_1f = param_2;
          FUN_006ae1c0(*(uint **)((int)this_00 + 0x1d7),&uStack_34);
          iStack_8 = iStack_8 + *(int *)(pbVar6 + 8);
          cStack_d = '\x01';
        }
        piStack_14 = piStack_14 + 1;
        iStack_c = iVar3 + 1;
      } while (iVar3 < 0x28);
      piStack_14 = &DAT_007a8cfc;
      iStack_c = 1;
      do {
        iVar3 = iStack_c;
        if ((*piStack_14 == param_1) && (iVar16 = thunk_FUN_004e8030(iStack_c), iVar16 == param_2))
        {
          FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0x96,iStack_8,0x106,0xf);
          pHVar13 = DAT_00807618;
          UVar4 = thunk_FUN_00523410(iStack_c,cVar14,0);
          pcVar9 = (char *)FUN_006b0140(UVar4,pHVar13);
          uVar5 = 0xffffffff;
          do {
            pcVar12 = pcVar9;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar12 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar12;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar9 = pcVar12 + -uVar5;
          pcVar12 = (char *)&DAT_0080f33a;
          for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar12 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar12 = pcVar12 + 1;
          }
          for (puVar7 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != (uint *)0x0;
              puVar7 = FUN_0072e560(puVar7,'\n')) {
            *(undefined1 *)puVar7 = 0x20;
          }
          FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
          iVar3 = iStack_c;
          iStack_8 = iStack_8 + 0xf;
          uVar5 = thunk_FUN_00526ba0(iStack_c,cVar14);
          pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x23c),uVar5);
          thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0x96,iStack_8,'\x01',pbVar6);
          pbVar6 = pbStack_38;
          thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0x94,iStack_8 + -2,'\x06',
                             pbStack_38);
          uStack_34 = 0x94;
          uStack_2c = *(undefined4 *)(pbVar6 + 4);
          iStack_30 = iStack_8 + -2;
          uStack_28 = *(undefined4 *)(pbVar6 + 8);
          uStack_24 = 3;
          iStack_23 = iVar3;
          iStack_1f = param_2;
          FUN_006ae1c0(*(uint **)((int)this_00 + 0x1d7),&uStack_34);
          iStack_8 = iStack_8 + *(int *)(pbVar6 + 8);
          cStack_d = '\x01';
        }
        piStack_14 = piStack_14 + 1;
        iStack_c = iVar3 + 1;
        if (0x27 < iVar3) {
          piVar11 = &DAT_00792ca0;
          iStack_c = 0x32;
          do {
            iStack_18 = 2;
            iVar3 = iStack_c;
            do {
              if ((*piVar11 == param_1) &&
                 (piStack_14 = piVar11, iVar16 = thunk_FUN_004e8030(iVar3), iVar16 == param_2)) {
                FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0x96,iStack_8,0x106,0xf);
                pHVar13 = DAT_00807618;
                UVar4 = thunk_FUN_00523410(iStack_c,cVar14,0);
                pcVar9 = (char *)FUN_006b0140(UVar4,pHVar13);
                uVar5 = 0xffffffff;
                do {
                  pcVar12 = pcVar9;
                  if (uVar5 == 0) break;
                  uVar5 = uVar5 - 1;
                  pcVar12 = pcVar9 + 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar12;
                } while (cVar1 != '\0');
                uVar5 = ~uVar5;
                pcVar9 = pcVar12 + -uVar5;
                pcVar12 = (char *)&DAT_0080f33a;
                for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
                  pcVar9 = pcVar9 + 4;
                  pcVar12 = pcVar12 + 4;
                }
                for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *pcVar12 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                  pcVar12 = pcVar12 + 1;
                }
                for (puVar7 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != (uint *)0x0;
                    puVar7 = FUN_0072e560(puVar7,'\n')) {
                  *(undefined1 *)puVar7 = 0x20;
                }
                FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
                iVar3 = iStack_c;
                iStack_8 = iStack_8 + 0xf;
                uVar5 = thunk_FUN_00526ba0(iStack_c,cVar14);
                pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x240),uVar5);
                thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0x96,iStack_8,'\x01',
                                   pbVar6);
                pbVar6 = pbStack_38;
                thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0x94,iStack_8 + -2,'\x06',
                                   pbStack_38);
                uStack_34 = 0x94;
                uStack_2c = *(undefined4 *)(pbVar6 + 4);
                iStack_30 = iStack_8 + -2;
                uStack_28 = *(undefined4 *)(pbVar6 + 8);
                uStack_24 = 2;
                iStack_23 = iVar3;
                iStack_1f = param_2;
                FUN_006ae1c0(*(uint **)((int)this_00 + 0x1d7),&uStack_34);
                iStack_8 = iStack_8 + *(int *)(pbVar6 + 8);
                cStack_d = '\x01';
                iVar3 = iStack_c;
                piVar11 = piStack_14;
              }
              piVar11 = piVar11 + 3;
              iStack_18 = iStack_18 + -1;
            } while (iStack_18 != 0);
            iStack_c = iVar3 + 1;
            if (0x41 < iVar3 + -0x31) {
              if (cStack_d == '\0') {
                iStack_8 = iStack_8 + 0xf;
              }
              piStack_14 = piVar11;
              UVar4 = thunk_FUN_00525ca0(uVar18);
              thunk_FUN_00515c00(&iStack_8,UVar4);
              thunk_FUN_00515e30(this_00,&iStack_8,'\x04',param_1,param_2);
              DAT_00858df8 = puStack_a4;
              return;
            }
          } while( true );
        }
      } while( true );
    }
    DAT_00858df8 = puStack_a4;
    iVar16 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x8c4,0,iVar3,&DAT_007a4ccc);
    if (iVar16 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c383c,0x8c4);
  }
  return;
}

