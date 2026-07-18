
void thunk_FUN_00518c20(int param_1,char param_2)

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
  undefined4 *puStack_a4;
  undefined4 auStack_a0 [16];
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  uint uStack_4f;
  undefined4 uStack_4b;
  int iStack_44;
  void *pvStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  int iStack_2b;
  uint uStack_27;
  uint uStack_20;
  uint uStack_1c;
  byte *pbStack_18;
  uint uStack_14;
  char cStack_d;
  UINT UStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  cStack_d = '\0';
  if (DAT_007fa174 != 0) {
    puStack_a4 = DAT_00858df8;
    DAT_00858df8 = &puStack_a4;
    iVar4 = __setjmp3(auStack_a0,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      if (param_2 == '\0') {
        cVar3 = *(char *)((int)pvStack_40 + 0x1a1);
        if (((cVar3 == '\0') || (cVar3 == '\x06')) || (cVar3 == '\n')) {
          *(char *)((int)pvStack_40 + 0x1a2) = cVar3;
          *(undefined4 *)((int)pvStack_40 + 0x1ab) = *(undefined4 *)((int)pvStack_40 + 0x1a3);
        }
        else {
          *(undefined1 *)((int)pvStack_40 + 0x1a2) = 0;
          *(undefined4 *)((int)pvStack_40 + 0x1ab) = 0;
        }
        *(undefined1 *)((int)pvStack_40 + 0x1a1) = 3;
        *(int *)((int)pvStack_40 + 0x1a3) = param_1;
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
      uStack_1c = thunk_FUN_004e8030(param_1);
      cVar3 = (char)uStack_1c;
      uStack_20 = CONCAT31(uStack_20._1_3_,cVar3);
      uStack_1c = uStack_1c & 0xff;
      UVar5 = thunk_FUN_00523410(param_1,cVar3,0);
      thunk_FUN_00515310(0x55fb,uStack_1c,UVar5);
      thunk_FUN_00515650(&iStack_8,param_1,(byte)uStack_20,*(int *)((int)pvStack_40 + 0x23c));
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x19c,0xf);
      uVar14 = 3;
      iVar12 = -1;
      iVar4 = -1;
      puVar6 = (uint *)FUN_006b0140(0x564a,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      iStack_8 = iStack_8 + 0xf;
      UStack_c = 0;
      iVar4 = FUN_006b0fd0(0x801450);
      if (iVar4 == 0) {
        iVar4 = FUN_006b0fd0(0x801480);
        if (iVar4 == 0) {
          iVar4 = FUN_006b0fd0(0x800f10);
          if (iVar4 != 0) {
            UStack_c = 0x3aa2;
          }
        }
        else {
          UStack_c = 0x3aa0;
        }
      }
      else {
        UStack_c = 0x3a9f;
      }
      if (UStack_c != 0) {
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
        uVar14 = 3;
        iVar12 = -1;
        iVar4 = -3;
        puVar6 = (uint *)FUN_006b0140(0x5654,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar12 = -1;
        iVar4 = 1;
        puVar6 = (uint *)FUN_006b0140(UStack_c,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
        iStack_8 = iStack_8 + 0xf;
      }
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar14 = 3;
      iVar12 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x5656,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
      if (uStack_1c == 1) {
        UVar5 = 0x5604;
      }
      else if (uStack_1c == 2) {
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
      iStack_8 = iStack_8 + 0xf;
      uStack_14 = 0;
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar14 = 3;
      iVar12 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x55f7,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      if (cVar3 == '\x03') {
        UStack_c = *(UINT *)(&DAT_007e09dc + param_1 * 4);
      }
      else {
        UStack_c = *(UINT *)(&DAT_007e079c + param_1 * 4);
      }
      if (UStack_c != 0) {
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,UStack_c);
        FUN_007119c0(&DAT_0080f33a,1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar4 = FUN_0070b3a0(*(int *)((int)pvStack_40 + 0x238),
                             (-(uint)(cVar3 != '\x03') & 0xfffffffe) + 3);
        FUN_006b5440(*(int *)((int)pvStack_40 + 0x218),0,0xb4,iStack_8,iVar4,0,0x3a);
        uStack_3c = 0xb4;
        uStack_34 = *(undefined4 *)(iVar4 + 4);
        iStack_38 = iStack_8;
        uStack_30 = *(undefined4 *)(iVar4 + 8);
        iStack_2b = (-(uint)(cVar3 != '\x03') & 0xfffffffc) + 0xe2;
        uStack_2c = 1;
        uStack_27 = uStack_1c;
        FUN_006ae1c0(*(uint **)((int)pvStack_40 + 0x1d7),&uStack_3c);
        iStack_8 = iStack_8 + 0x14;
        uStack_14 = 1;
      }
      UStack_c = *(UINT *)(&DAT_007e055c + param_1 * 4);
      if (UStack_c != 0) {
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,UStack_c);
        FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 4);
        uStack_14 = FUN_0070b3a0(*(int *)((int)pvStack_40 + 0x238),0);
        FUN_006b5440(*(int *)((int)pvStack_40 + 0x218),0,0xb4,iStack_8,uStack_14,0,0x3a);
        uStack_3c = 0xb4;
        uStack_34 = *(undefined4 *)(uStack_14 + 4);
        iStack_38 = iStack_8;
        uStack_30 = *(undefined4 *)(uStack_14 + 8);
        uStack_2c = 1;
        iStack_2b = 0xdd;
        uStack_27 = uStack_1c;
        FUN_006ae1c0(*(uint **)((int)pvStack_40 + 0x1d7),&uStack_3c);
        uStack_14 = 1;
        iStack_8 = iStack_8 + 0x14;
      }
      UStack_c = *(UINT *)(&DAT_00854428 + param_1 * 4);
      if (UStack_c != 0) {
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8 + -3,0x106,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,UStack_c);
        FUN_007119c0(&DAT_0080f33a,1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        uStack_14 = FUN_0070b3a0(*(int *)((int)pvStack_40 + 0x238),2);
        FUN_006b5440(*(int *)((int)pvStack_40 + 0x218),0,0xb4,iStack_8,uStack_14,0,0x3a);
        uStack_3c = 0xb4;
        uStack_34 = *(undefined4 *)(uStack_14 + 4);
        iStack_38 = iStack_8;
        uStack_30 = *(undefined4 *)(uStack_14 + 8);
        uStack_2c = 1;
        iStack_2b = 0xdd;
        uStack_27 = uStack_1c;
        FUN_006ae1c0(*(uint **)((int)pvStack_40 + 0x1d7),&uStack_3c);
        uStack_14 = 1;
        iStack_8 = iStack_8 + 0x14;
      }
      if (uStack_14 == 0) {
        iStack_8 = iStack_8 + 0xf;
      }
      UStack_c = 1;
      uStack_14 = 1;
      iStack_44 = param_1 * 3;
      do {
        pbStack_18 = &DAT_007c0dd1 + iStack_44 + (uStack_14 & 0xffff);
        if (*pbStack_18 == 0) break;
        if (UStack_c != 0) {
          FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
          uVar14 = 3;
          iVar12 = -1;
          iVar4 = -3;
          puVar6 = (uint *)FUN_006b0140(0x5657,DAT_00807618);
          FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
          UStack_c = 0;
        }
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
        pbVar7 = pbStack_18;
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar12 = -1;
        iVar4 = 1;
        pHVar11 = DAT_00807618;
        UVar5 = thunk_FUN_00528060(*pbStack_18,'\0');
        puVar6 = (uint *)FUN_006b0140(UVar5,pHVar11);
        FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
        iStack_8 = iStack_8 + 0xf;
        uVar8 = thunk_FUN_005276e0(*pbVar7,0);
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)((int)pvStack_40 + 0x230),uVar8);
        thunk_FUN_00540760(*(undefined4 **)((int)pvStack_40 + 0x218),0x96,iStack_8,'\x01',pbVar7);
        uStack_60 = 0x96;
        uStack_58 = *(undefined4 *)(pbVar7 + 4);
        iStack_5c = iStack_8;
        uStack_54 = *(undefined4 *)(pbVar7 + 8);
        uStack_4f = (uint)*pbStack_18;
        uStack_50 = 5;
        uStack_4b = 0;
        FUN_006ae1c0(*(uint **)((int)pvStack_40 + 0x1d7),&uStack_60);
        iStack_8 = iStack_8 + 5 + *(int *)(pbVar7 + 8);
        uStack_14 = uStack_14 + 1;
      } while ((ushort)uStack_14 < 3);
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x19c,0xf);
      uVar14 = 3;
      iVar12 = -1;
      iVar4 = -1;
      puVar6 = (uint *)FUN_006b0140(0x564b,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      iStack_8 = iStack_8 + 0xf;
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x564c,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,*(undefined4 *)(&DAT_007dfbac + param_1 * 4));
      FUN_007119c0(&DAT_0080f33a,-3,-1,2);
      iStack_8 = iStack_8 + 0xf;
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x5658,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
      piVar9 = &DAT_007dfc70;
      UStack_c = DAT_007dfc70;
      pbStack_18 = (byte *)0x28;
      iVar4 = DAT_007dfc70;
      do {
        if (*piVar9 < (int)UStack_c) {
          UStack_c = *piVar9;
        }
        if (iVar4 < *piVar9) {
          iVar4 = *piVar9;
        }
        piVar9 = piVar9 + 1;
        pbStack_18 = (byte *)((int)pbStack_18 + -1);
      } while (pbStack_18 != (byte *)0x0);
      iVar4 = (int)(iVar4 - UStack_c) / 3;
      if (*(int *)(&DAT_007dfc6c + param_1 * 4) < (int)(UStack_c + iVar4)) {
        UStack_c = 0x5615;
      }
      else {
        UStack_c = (*(int *)(&DAT_007dfc6c + param_1 * 4) < (int)(UStack_c + iVar4 * 2)) + 0x5613;
      }
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar14 = 2;
      iVar12 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(UStack_c,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      iStack_8 = iStack_8 + 0xf;
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x564d,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
      piVar9 = &DAT_007e04a0;
      UStack_c = DAT_007e04a0;
      pbStack_18 = (byte *)0x28;
      iVar4 = DAT_007e04a0;
      do {
        if (*piVar9 < (int)UStack_c) {
          UStack_c = *piVar9;
        }
        if (iVar4 < *piVar9) {
          iVar4 = *piVar9;
        }
        piVar9 = piVar9 + 1;
        pbStack_18 = (byte *)((int)pbStack_18 + -1);
      } while (pbStack_18 != (byte *)0x0);
      iVar4 = (int)((iVar4 - UStack_c) + ((int)(iVar4 - UStack_c) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e049c + param_1 * 4) < (int)(UStack_c + iVar4)) {
        UStack_c = 0x5613;
      }
      else {
        UStack_c = (((int)(UStack_c + iVar4 * 2) <= *(int *)(&DAT_007e049c + param_1 * 4)) - 1 &
                   0xfffffffe) + 0x5616;
      }
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar14 = 2;
      iVar12 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(UStack_c,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      iStack_8 = iStack_8 + 0xf;
      iVar4 = thunk_FUN_00515900(0x96,&iStack_8,*(int *)(&DAT_007a8b18 + param_1 * 4),
                                 *(int *)(&DAT_007a8bb8 + param_1 * 4),uStack_20);
      cVar2 = cStack_d;
      if ((iVar4 != 0) || (cStack_d = '\0', cVar2 != '\0')) {
        cStack_d = '\x01';
      }
      iVar4 = thunk_FUN_00515900(0x96,&iStack_8,*(int *)(&DAT_007a8cf8 + param_1 * 4),
                                 *(int *)(&DAT_007a8d98 + param_1 * 4),uStack_20);
      cVar2 = cStack_d;
      if ((iVar4 != 0) || (cStack_d = '\0', cVar2 != '\0')) {
        cStack_d = '\x01';
      }
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x5659,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar14 = 2;
      iVar13 = -1;
      iVar12 = -3;
      pHVar11 = DAT_00807618;
      iVar4 = FUN_006b0fd0(0x800f10);
      puVar6 = (uint *)FUN_006b0140(0x273f - (iVar4 != 0),pHVar11);
      FUN_007119c0(puVar6,iVar12,iVar13,uVar14);
      iStack_8 = iStack_8 + 0xf;
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x564e,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar14 = 2;
      iVar12 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140((cVar3 != '\x03') + 0x273e,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      iStack_8 = iStack_8 + 0xf;
      if (cStack_d != '\0') {
        bVar10 = false;
        if (*(int *)(&DAT_007a8b18 + param_1 * 4) != 0) {
          bVar10 = (&DAT_007bf678)[*(int *)(&DAT_007a8b18 + param_1 * 4) * 3 + -0x1c2] != 0;
        }
        if ((*(int *)(&DAT_007a8cf8 + param_1 * 4) != 0) &&
           ((bVar10 || ((&DAT_007bf678)[*(int *)(&DAT_007a8cf8 + param_1 * 4) * 3 + -0x1c2] != 0))))
        {
          bVar10 = true;
        }
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar12 = -1;
        iVar4 = 1;
        puVar6 = (uint *)FUN_006b0140(0x564f,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
        uVar14 = 2;
        iVar12 = -1;
        iVar4 = -3;
        puVar6 = (uint *)FUN_006b0140(0x273f - bVar10,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
        iStack_8 = iStack_8 + 0xf;
      }
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar4 = 1;
      puVar6 = (uint *)FUN_006b0140(0x5650,DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
      UStack_c = *(UINT *)(&DAT_007e085c + param_1 * 4);
      FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0,iStack_8,0x91,0xf);
      uVar14 = 2;
      iVar12 = -1;
      iVar4 = -3;
      puVar6 = (uint *)FUN_006b0140(0x273f - (UStack_c != 0),DAT_00807618);
      FUN_007119c0(puVar6,iVar4,iVar12,uVar14);
      iStack_8 = iStack_8 + 0xf;
      if (UStack_c != 0) {
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x96,iStack_8,0x106,0xf);
        uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar12 = -1;
        iVar4 = 1;
        puVar6 = (uint *)FUN_006b0140(0x5651,DAT_00807618);
        FUN_007119c0(puVar6,iVar4,iVar12,uVar8);
        FUN_00710a90(*(int *)((int)pvStack_40 + 0x218),0,0x5f,iStack_8 + -3,0x16,0x14);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,UStack_c);
        FUN_007119c0(&DAT_0080f33a,1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        iVar4 = FUN_0070b3a0(*(int *)((int)pvStack_40 + 0x238),
                             (-(uint)(cVar3 != '\x03') & 0xfffffffe) + 3);
        FUN_006b5440(*(int *)((int)pvStack_40 + 0x218),0,0x7a,iStack_8,iVar4,0,0x3a);
        uStack_3c = 0x7a;
        uStack_34 = *(undefined4 *)(iVar4 + 4);
        iStack_38 = iStack_8;
        uStack_30 = *(undefined4 *)(iVar4 + 8);
        iStack_2b = (-(uint)(cVar3 != '\x03') & 0xfffffffc) + 0xe2;
        uStack_2c = 1;
        uStack_27 = uStack_1c;
        FUN_006ae1c0(*(uint **)((int)pvStack_40 + 0x1d7),&uStack_3c);
        iStack_8 = iStack_8 + 0x14;
      }
      UVar5 = thunk_FUN_00523410(param_1,(char)uStack_20,2);
      thunk_FUN_00515c00(&iStack_8,UVar5);
      thunk_FUN_00515e30(pvStack_40,&iStack_8,'\x03',param_1,0);
      DAT_00858df8 = puStack_a4;
      return;
    }
    DAT_00858df8 = puStack_a4;
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

