
void thunk_FUN_0051a100(int param_1,uint param_2,char param_3)

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
  undefined4 *puStack_a0;
  undefined4 auStack_9c [16];
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  uint uStack_4b;
  undefined4 uStack_47;
  void *pvStack_40;
  byte *pbStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  int iStack_27;
  uint uStack_23;
  int *piStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  char cStack_9;
  int iStack_8;
  
  iStack_8 = 0;
  cStack_9 = '\0';
  if (DAT_007fa174 != 0) {
    puStack_a0 = DAT_00858df8;
    DAT_00858df8 = &puStack_a0;
    iVar4 = __setjmp3(auStack_9c,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      if (param_3 == '\0') {
        cVar1 = *(char *)((int)pvStack_40 + 0x1a1);
        if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\n')) {
          *(char *)((int)pvStack_40 + 0x1a2) = cVar1;
          *(undefined4 *)((int)pvStack_40 + 0x1ab) = *(undefined4 *)((int)pvStack_40 + 0x1a3);
        }
        else {
          *(undefined1 *)((int)pvStack_40 + 0x1a2) = 0;
          *(undefined4 *)((int)pvStack_40 + 0x1ab) = 0;
        }
        *(undefined1 *)((int)pvStack_40 + 0x1a1) = 2;
        *(int *)((int)pvStack_40 + 0x1a3) = param_1;
        *(uint *)((int)pvStack_40 + 0x1a7) = param_2;
        *(undefined2 *)((int)pvStack_40 + 0x1af) = 0x32;
        *(undefined2 *)((int)pvStack_40 + 0x1b1) = 5;
        if (*(int *)((int)pvStack_40 + 0x178) != 0) {
          *(undefined4 *)((int)pvStack_40 + 0x28) = 0x4202;
          *(undefined2 *)((int)pvStack_40 + 0x2c) = 0;
          *(undefined2 *)((int)pvStack_40 + 0x2e) = 2;
          *(int *)((int)pvStack_40 + 0x30) = *(int *)((int)pvStack_40 + 0x178);
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)((int)pvStack_40 + 0x18);
          }
        }
      }
      bVar13 = (byte)param_2;
      UVar5 = thunk_FUN_00523410(param_1,bVar13,0);
      thunk_FUN_00515310(0x55fa,param_2,UVar5);
      thunk_FUN_00515650(&iStack_8,param_1,bVar13,*(int *)((int)pvStack_40 + 0x240));
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x19c,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar4 = -1;
      puVar6 = (uint *)FUN_006b0140(0x564a,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
      iStack_8 = iStack_8 + 0xf;
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
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
        uVar15 = 3;
        iVar14 = -1;
        iVar4 = -3;
        puVar6 = (uint *)FUN_006b0140(0x5654,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
        uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar4 = 1;
        puVar6 = (uint *)FUN_006b0140(UVar5,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar14,uVar7);
        iStack_8 = iStack_8 + 0xf;
      }
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x5656,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
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
      iStack_8 = iStack_8 + 0xf;
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x55f7,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
      iStack_14 = param_1 * 3;
      if (param_2 == 3) {
        iVar4 = *(int *)(&DAT_007e2f10 + param_1 * 0xc);
      }
      else {
        iVar4 = *(int *)(&DAT_007e22a0 + (iStack_14 + param_2) * 4);
      }
      if (iVar4 != 0) {
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar4);
        FUN_007119c0(&DAT_0080f33a,1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar14 = FUN_0070b3a0(*(int *)((int)pvStack_40 + 0x238),
                              (-(uint)(param_2 != 3) & 0xfffffffe) + 3);
        FUN_006b5440(*(int *)((int)pvStack_40 + 0x218),0,0xb4,iStack_8,iVar14,0,0x3a);
        uStack_38 = 0xb4;
        uStack_30 = *(undefined4 *)(iVar14 + 4);
        iStack_34 = iStack_8;
        uStack_2c = *(undefined4 *)(iVar14 + 8);
        iStack_27 = (-(uint)(param_2 != 3) & 0xfffffffc) + 0xe2;
        uStack_28 = 1;
        uStack_23 = param_2;
        FUN_006ae1c0(*(uint **)((int)pvStack_40 + 0x1d7),&uStack_38);
        iStack_8 = iStack_8 + 0x14;
      }
      iStack_14 = iStack_14 + -0x97 + param_2;
      iVar14 = *(int *)(&DAT_007e1c50 + iStack_14 * 4);
      if (iVar14 != 0) {
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar14);
        FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 4);
        iVar8 = FUN_0070b3a0(*(int *)((int)pvStack_40 + 0x238),0);
        FUN_006b5440(*(int *)((int)pvStack_40 + 0x218),0,0xb4,iStack_8,iVar8,0,0x3a);
        uStack_38 = 0xb4;
        uStack_30 = *(undefined4 *)(iVar8 + 4);
        iStack_34 = iStack_8;
        uStack_2c = *(undefined4 *)(iVar8 + 8);
        uStack_28 = 1;
        iStack_27 = 0xdd;
        uStack_23 = param_2;
        FUN_006ae1c0(*(uint **)((int)pvStack_40 + 0x1d7),&uStack_38);
        iStack_8 = iStack_8 + 0x14;
      }
      iVar8 = *(int *)(&DAT_008545ac + iStack_14 * 4);
      if (iVar8 != 0) {
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar8);
        FUN_007119c0(&DAT_0080f33a,1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        iVar9 = FUN_0070b3a0(*(int *)((int)pvStack_40 + 0x238),2);
        FUN_006b5440(*(int *)((int)pvStack_40 + 0x218),0,0xb4,iStack_8,iVar9,0,0x3a);
        uStack_38 = 0xb4;
        uStack_30 = *(undefined4 *)(iVar9 + 4);
        iStack_34 = iStack_8;
        uStack_2c = *(undefined4 *)(iVar9 + 8);
        uStack_28 = 1;
        iStack_27 = 0xdc;
        uStack_23 = param_2;
        FUN_006ae1c0(*(uint **)((int)pvStack_40 + 0x1d7),&uStack_38);
        iStack_8 = iStack_8 + 0x14;
      }
      if (iVar8 == 0 && (iVar14 == 0 && iVar4 == 0)) {
        iStack_8 = iStack_8 + 0xf;
      }
      piStack_1c = (int *)0x1;
      uStack_10 = 1;
      iStack_18 = (param_1 + -0x74 + param_2 * 0x42) * 3;
      do {
        pbVar10 = &DAT_007c0e4c + iStack_18 + (uStack_10 & 0xffff);
        pbStack_3c = pbVar10;
        if (*pbVar10 == 0) break;
        if (piStack_1c != (int *)0x0) {
          FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
          uVar15 = 3;
          iVar14 = -1;
          iVar4 = -3;
          puVar6 = (uint *)FUN_006b0140(0x5657,DAT_00807618);
          FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
          piStack_1c = (int *)0x0;
        }
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
        uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar4 = 1;
        pHVar12 = DAT_00807618;
        UVar5 = thunk_FUN_00528060(*pbVar10,'\0');
        puVar6 = (uint *)FUN_006b0140(UVar5,pHVar12);
        FUN_007119c0(puVar6,iVar4,iVar14,uVar7);
        iStack_8 = iStack_8 + 0xf;
        uVar7 = thunk_FUN_005276e0(*pbVar10,0);
        pbVar10 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_40 + 0x230),uVar7);
        thunk_FUN_00540760(*(undefined4 **)((int)pvStack_40 + 0x218),0x96,iStack_8,'\x01',pbVar10);
        uStack_5c = 0x96;
        uStack_54 = *(undefined4 *)(pbVar10 + 4);
        iStack_58 = iStack_8;
        uStack_50 = *(undefined4 *)(pbVar10 + 8);
        uStack_4b = (uint)*pbStack_3c;
        uStack_4c = 5;
        uStack_47 = 0;
        FUN_006ae1c0(*(uint **)((int)pvStack_40 + 0x1d7),&uStack_5c);
        uStack_10 = uStack_10 + 1;
        iStack_8 = iStack_8 + 5 + *(int *)(pbVar10 + 8);
      } while ((ushort)uStack_10 < 3);
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x19c,0xf);
      uVar15 = 3;
      iVar14 = -1;
      iVar4 = -1;
      puVar6 = (uint *)FUN_006b0140(0x564b,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
      iStack_8 = iStack_8 + 0xf;
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
      uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x564c,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar14,uVar7);
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      iVar14 = iStack_14;
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)(&DAT_007e417c + iStack_14 * 4));
      FUN_007119c0(&DAT_0080f33a,-3,-1,2);
      iStack_8 = iStack_8 + 0xf;
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
      uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar8 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x564d,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar8,uVar7);
      iVar4 = *(int *)(&DAT_007e3dc0 + param_2 * 4);
      piStack_1c = (int *)(&DAT_007e3dc0 + param_2 * 4);
      iStack_18 = 0x42;
      uStack_10 = iVar4;
      do {
        iVar8 = *piStack_1c;
        if (iVar8 < (int)uStack_10) {
          uStack_10 = iVar8;
        }
        if (iVar4 < iVar8) {
          iVar4 = iVar8;
        }
        piStack_1c = piStack_1c + 3;
        iStack_18 = iStack_18 + -1;
      } while (iStack_18 != 0);
      iVar4 = (int)((iVar4 - uStack_10) + ((int)(iVar4 - uStack_10) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e3dc4 + iVar14 * 4) < (int)(uStack_10 + iVar4)) {
        uStack_10 = 0x5613;
      }
      else {
        uStack_10 = (((int)(uStack_10 + iVar4 * 2) <= *(int *)(&DAT_007e3dc4 + iVar14 * 4)) - 1 &
                    0xfffffffe) + 0x5616;
      }
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar15 = 2;
      iVar8 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(uStack_10,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar8,uVar15);
      iStack_8 = iStack_8 + 0xf;
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
      uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar8 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x565a,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar8,uVar7);
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar15 = 2;
      iVar8 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x273f - (*(int *)(&DAT_00791b18 + iVar14 * 4) != 0),
                                    DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar8,uVar15);
      iStack_8 = iStack_8 + 0xf;
      iVar4 = param_1 + -0x32;
      if (*(int *)(&DAT_00793e28 + iVar4 * 8) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(&DAT_00794038 + iVar4 * 8);
      }
      iStack_18 = iVar4 * 0x18;
      iVar4 = thunk_FUN_00515900(0x96,&iStack_8,(&DAT_00792ca0)[iVar4 * 6],iVar8,param_2);
      cVar1 = cStack_9;
      if ((iVar4 != 0) || (cStack_9 = '\0', cVar1 != '\0')) {
        cStack_9 = '\x01';
      }
      if (*(int *)(&DAT_00793e2c + (param_1 + -0x32) * 8) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(&DAT_0079403c + (param_1 + -0x32) * 8);
      }
      iVar4 = thunk_FUN_00515900(0x96,&iStack_8,*(int *)((int)&DAT_00792cac + iStack_18),iVar4,
                                 param_2);
      cVar1 = cStack_9;
      if ((iVar4 != 0) || (cStack_9 = '\0', cVar1 != '\0')) {
        cStack_9 = '\x01';
      }
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
      uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar8 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x564e,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar8,uVar7);
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar15 = 2;
      iVar8 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140((param_2 != 3) + 0x273e,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar8,uVar15);
      iStack_8 = iStack_8 + 0xf;
      if (cStack_9 != '\0') {
        bVar11 = false;
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
        uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar4 = 1;
        puVar6 = (uint *)FUN_006b0140(0x564f,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar14,uVar7);
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
        if (*(int *)((int)&DAT_00792ca0 + iStack_18) != 0) {
          bVar11 = (&DAT_007bf678)[*(int *)((int)&DAT_00792ca0 + iStack_18) * 3 + -0x1c2] != 0;
        }
        if ((*(int *)((int)&DAT_00792cac + iStack_18) != 0) &&
           ((bVar11 || ((&DAT_007bf678)[*(int *)((int)&DAT_00792cac + iStack_18) * 3 + -0x1c2] != 0)
            ))) {
          bVar11 = true;
        }
        uVar15 = 2;
        iVar14 = -1;
        iVar4 = -3;
        puVar6 = (uint *)FUN_006b0140(0x273f - bVar11,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
        iStack_8 = iStack_8 + 0xf;
        iVar14 = iStack_14;
      }
      if (param_2 != 3) {
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
        uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar8 = -1;
        iVar4 = 1;
        puVar6 = (uint *)FUN_006b0140(0x5650,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar8,uVar7);
        iVar4 = *(int *)(&DAT_007e29f0 + iVar14 * 4);
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
        uVar15 = 2;
        iVar8 = -1;
        iVar14 = -3;
        puVar6 = (uint *)FUN_006b0140(0x273f - (iVar4 != 0),DAT_00807618);
        FUN_007119c0(puVar6,iVar14,iVar8,uVar15);
        iStack_8 = iStack_8 + 0xf;
        iVar14 = iStack_14;
        if (iVar4 != 0) {
          FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
          uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar8 = -1;
          iVar14 = 1;
          puVar6 = (uint *)FUN_006b0140(0x5651,DAT_00807618);
          FUN_007119c0(puVar6,iVar14,iVar8,uVar7);
          FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x5f,iStack_8 + -3,0x16,0x14);
          wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,iVar4);
          FUN_007119c0(&DAT_0080f33a,1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          iVar4 = FUN_0070b3a0(*(int *)((int)pvStack_40 + 0x238),1);
          FUN_006b5440(*(int *)((int)pvStack_40 + 0x218),0,0x7a,iStack_8,iVar4,0,0x3a);
          uStack_38 = 0x7a;
          uStack_30 = *(undefined4 *)(iVar4 + 4);
          iStack_34 = iStack_8;
          uStack_2c = *(undefined4 *)(iVar4 + 8);
          uStack_28 = 1;
          iStack_27 = 0xde;
          uStack_23 = param_2;
          FUN_006ae1c0(*(uint **)((int)pvStack_40 + 0x1d7),&uStack_38);
          iStack_8 = iStack_8 + 0x14;
          iVar14 = iStack_14;
        }
      }
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
      uVar7 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar8 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x565b,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar8,uVar7);
      uStack_10 = 0;
      uVar3 = 0;
      do {
        if ((&DAT_007e1988)[iVar14 * 3 + (uint)uVar3] != '\0') {
          uStack_10 = 0x273e;
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 3);
      if (uStack_10 == 0) {
        uStack_10 = 0x273f;
      }
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(uStack_10,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar14,uVar15);
      iStack_8 = iStack_8 + 0xf;
      UVar5 = thunk_FUN_00523410(param_1,bVar13,2);
      thunk_FUN_00515c00(&iStack_8,UVar5);
      thunk_FUN_00515e30(pvStack_40,&iStack_8,'\x02',param_1,param_2);
      DAT_00858df8 = puStack_a0;
      return;
    }
    DAT_00858df8 = puStack_a0;
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

