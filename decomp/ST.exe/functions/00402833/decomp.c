
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffec : 0x00517361 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall thunk_FUN_00516a40(void *this,uint param_1,byte param_2,char param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  UINT UVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  undefined4 *puVar14;
  HINSTANCE pHVar15;
  undefined1 uVar16;
  void *pvVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 *puStack_88;
  undefined4 auStack_84 [16];
  void *pvStack_44;
  int iStack_40;
  byte *pbStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  int iStack_23;
  uint uStack_1f;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  
  pvVar17 = *(void **)((int)this + 0x248);
  uVar20 = 4;
  uStack_c = CONCAT31(uStack_c._1_3_,1);
  iStack_8 = 0;
  pvStack_44 = this;
  pbStack_3c = (byte *)FUN_0070b3a0((int)pvVar17,4);
  puStack_88 = DAT_00858df8;
  DAT_00858df8 = &puStack_88;
  iVar6 = __setjmp3(auStack_84,0,pvVar17,uVar20);
  pvVar17 = pvStack_44;
  if (iVar6 != 0) {
    DAT_00858df8 = puStack_88;
    iVar18 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x55a,0,iVar6,&DAT_007a4ccc);
    if (iVar18 == 0) {
      FUN_006a5e40(iVar6,0,0x7c383c,0x55a);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 == '\0') {
    cVar1 = *(char *)((int)pvStack_44 + 0x1a1);
    if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\n')) {
      *(char *)((int)pvStack_44 + 0x1a2) = cVar1;
      *(undefined4 *)((int)pvStack_44 + 0x1ab) = *(undefined4 *)((int)pvStack_44 + 0x1a3);
    }
    else {
      *(undefined1 *)((int)pvStack_44 + 0x1a2) = 0;
      *(undefined4 *)((int)pvStack_44 + 0x1ab) = 0;
    }
    *(undefined1 *)((int)pvStack_44 + 0x1a1) = 5;
    *(uint *)((int)pvStack_44 + 0x1a3) = param_1;
    *(uint *)((int)pvStack_44 + 0x1a7) = (uint)param_2;
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
  uVar5 = 0;
  do {
    if ((&PTR_DAT_007bfc04)[uVar5][param_1] != '\0') {
      uStack_c = CONCAT31(uStack_c._1_3_,(char)uStack_c + (char)uVar5);
      break;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  uVar12 = uStack_c & 0xff;
  uVar16 = (undefined1)param_1;
  uStack_18 = uVar12;
  UVar7 = thunk_FUN_00528060(uVar16,param_2);
  thunk_FUN_00515310(0x55fc,uVar12,UVar7);
  uVar12 = thunk_FUN_005276e0(uVar16,param_2);
  pbVar8 = (byte *)FUN_0070b3a0(*(int *)((int)pvVar17 + 0x230),uVar12);
  thunk_FUN_00540760(*(undefined4 **)((int)pvVar17 + 0x68),0x35,0x2a,'\x01',pbVar8);
  FUN_00710a90(*(int *)((int)pvVar17 + 0x218),0,0,iStack_8,0x91,0xf);
  uVar20 = 3;
  iVar18 = -1;
  iVar6 = -3;
  puVar9 = (uint *)FUN_006b0140(0x5622,DAT_00807618);
  FUN_007119c0(puVar9,iVar6,iVar18,uVar20);
  FUN_00710a90(*(int *)((int)pvVar17 + 0x218),0,0x96,iStack_8,0x106,0xf);
  if ((char)uStack_c == DAT_0080874e) {
    bVar3 = thunk_FUN_004e5910((uint)DAT_0080874d,param_1);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      uStack_38 = (uint)param_2;
      uVar4 = thunk_FUN_004e6140((uint)DAT_0080874d,param_1);
      if ((int)(uint)param_2 <= CONCAT31(extraout_var_00,uVar4)) {
        uVar4 = thunk_FUN_004e6140((uint)DAT_0080874d,param_1);
        iVar6 = thunk_FUN_004e60d0((uint)DAT_0080874d,param_1);
        if (CONCAT31(extraout_var_01,uVar4) <= iVar6) {
          uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar18 = -1;
          iVar6 = 1;
          puVar9 = (uint *)FUN_006b0140(0x5d56,DAT_00807618);
          FUN_007119c0(puVar9,iVar6,iVar18,uVar12);
          iVar6 = 2;
          goto LAB_00516f08;
        }
        bVar3 = thunk_FUN_004e5f90((uint)DAT_0080874d,param_1);
        if (CONCAT31(extraout_var_02,bVar3) == 0) {
          iVar6 = thunk_FUN_004e5cc0((uint)DAT_0080874d,param_1,uStack_38);
          if (iVar6 == 0) {
            uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
            iVar18 = -1;
            iVar6 = 1;
            puVar9 = (uint *)FUN_006b0140(0x5d55,DAT_00807618);
            FUN_007119c0(puVar9,iVar6,iVar18,uVar12);
            iVar6 = 1;
            goto LAB_00516eb8;
          }
          UVar7 = 0x5d53;
        }
        else {
          UVar7 = 0x5d54;
        }
        uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar18 = -1;
        iVar6 = 1;
        puVar9 = (uint *)FUN_006b0140(UVar7,DAT_00807618);
        FUN_007119c0(puVar9,iVar6,iVar18,uVar12);
        iVar6 = 3;
        goto LAB_00516f54;
      }
    }
    uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar18 = -1;
    iVar6 = 1;
    puVar9 = (uint *)FUN_006b0140(0x5d52,DAT_00807618);
    FUN_007119c0(puVar9,iVar6,iVar18,uVar12);
    iVar6 = 1;
  }
  else {
    uVar4 = thunk_FUN_004e6140((uint)DAT_0080874d,param_1);
    iVar6 = thunk_FUN_004e60d0((uint)DAT_0080874d,param_1);
    if (iVar6 < CONCAT31(extraout_var_03,uVar4)) {
      iVar6 = thunk_FUN_004e7f20((uint)DAT_0080874d,param_1,(uint)param_2);
      if (iVar6 == 0) {
        uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar18 = -1;
        iVar6 = 1;
        puVar9 = (uint *)FUN_006b0140(0x5d52,DAT_00807618);
        FUN_007119c0(puVar9,iVar6,iVar18,uVar12);
        iVar6 = 1;
      }
      else {
        bVar3 = thunk_FUN_004e5f90((uint)DAT_0080874d,param_1);
        if (CONCAT31(extraout_var_04,bVar3) != 0) {
          uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar18 = -1;
          iVar6 = 1;
          puVar9 = (uint *)FUN_006b0140(0x5d54,DAT_00807618);
          FUN_007119c0(puVar9,iVar6,iVar18,uVar12);
          iVar6 = 3;
LAB_00516eb8:
          pbVar8 = (byte *)FUN_0070b3a0(*(int *)((int)pvVar17 + 0x248),iVar6);
          puVar14 = *(undefined4 **)((int)pvVar17 + 0x68);
          goto LAB_00516f6b;
        }
        uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar18 = -1;
        iVar6 = 1;
        puVar9 = (uint *)FUN_006b0140(0x5d53,DAT_00807618);
        FUN_007119c0(puVar9,iVar6,iVar18,uVar12);
        iVar6 = 3;
      }
LAB_00516f08:
      pbVar8 = (byte *)FUN_0070b3a0(*(int *)((int)pvVar17 + 0x248),iVar6);
      puVar14 = *(undefined4 **)((int)pvVar17 + 0x68);
      goto LAB_00516f6b;
    }
    uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar18 = -1;
    iVar6 = 1;
    puVar9 = (uint *)FUN_006b0140(0x5d56,DAT_00807618);
    FUN_007119c0(puVar9,iVar6,iVar18,uVar12);
    iVar6 = 2;
  }
LAB_00516f54:
  pbVar8 = (byte *)FUN_0070b3a0(*(int *)((int)pvVar17 + 0x248),iVar6);
  puVar14 = *(undefined4 **)((int)pvVar17 + 0x68);
LAB_00516f6b:
  thunk_FUN_00540760(puVar14,0x33,0x28,'\x06',pbVar8);
  iStack_8 = iStack_8 + 0xf;
  FUN_00710a90(*(int *)((int)pvVar17 + 0x218),0,0,iStack_8,0x91,0xf);
  uVar20 = 3;
  iVar18 = -1;
  iVar6 = -3;
  puVar9 = (uint *)FUN_006b0140(0x5623,DAT_00807618);
  FUN_007119c0(puVar9,iVar6,iVar18,uVar20);
  FUN_00710a90(*(int *)((int)pvVar17 + 0x218),0,0x96,iStack_8,0x106,0xf);
  uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar18 = -1;
  iVar6 = 1;
  pHVar15 = DAT_00807618;
  UVar7 = thunk_FUN_005293c0(param_1);
  puVar9 = (uint *)FUN_006b0140(UVar7,pHVar15);
  FUN_007119c0(puVar9,iVar6,iVar18,uVar12);
  iStack_8 = iStack_8 + 0xf;
  FUN_00710a90(*(int *)((int)pvVar17 + 0x218),0,0,iStack_8,0x91,0xf);
  uVar20 = 3;
  iVar18 = -1;
  iVar6 = -3;
  puVar9 = (uint *)FUN_006b0140(0x55f7,DAT_00807618);
  FUN_007119c0(puVar9,iVar6,iVar18,uVar20);
  FUN_00710a90(*(int *)((int)pvVar17 + 0x218),0,0x96,iStack_8 + -3,0x106,0x14);
  uStack_38 = (uint)param_2;
  iVar6 = (uStack_38 + param_1 * 4) * 4;
  wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)(&DAT_007e4818 + iVar6));
  FUN_007119c0(&DAT_0080f33a,1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 3);
  iStack_40 = FUN_0070b3a0(*(int *)((int)pvVar17 + 0x238),
                           (-(uint)((char)uStack_c != '\x03') & 0xfffffffe) + 4);
  if (iStack_40 != 0) {
    FUN_006b5440(*(int *)((int)pvVar17 + 0x218),0,0xb4,iStack_8,iStack_40,0,0x3a);
    uStack_34 = 0xb4;
    uStack_2c = *(undefined4 *)(iStack_40 + 4);
    iStack_30 = iStack_8;
    uStack_28 = *(undefined4 *)(iStack_40 + 8);
    iStack_23 = (-(uint)((char)uStack_c != '\x03') & 0xfffffffc) + 0xe0;
    uStack_24 = 1;
    uStack_1f = uStack_18;
    FUN_006ae1c0(*(uint **)((int)pvVar17 + 0x1d7),&uStack_34);
  }
  iStack_8 = iStack_8 + 0xf;
  FUN_00710a90(*(int *)((int)pvVar17 + 0x218),0,0,iStack_8,0x91,0xf);
  uVar20 = 3;
  iVar19 = -1;
  iVar18 = -3;
  puVar9 = (uint *)FUN_006b0140(0x5624,DAT_00807618);
  FUN_007119c0(puVar9,iVar18,iVar19,uVar20);
  FUN_00710a90(*(int *)((int)pvVar17 + 0x218),0,0x96,iStack_8,0x106,0xf);
  iVar6 = (*(int *)(&DAT_007e5474 + iVar6) / 0x19) % 0xe10;
  wsprintfA((LPSTR)&DAT_0080f33a,s__02d__02d_007c3c60,iVar6 / 0x3c,iVar6 % 0x3c);
  FUN_007119c0(&DAT_0080f33a,1,-1,2);
  iStack_8 = iStack_8 + 0xf;
  FUN_00710a90(*(int *)((int)pvVar17 + 0x218),0,0,iStack_8,0x91,0xf);
  uVar20 = 3;
  iVar18 = -1;
  iVar6 = -3;
  puVar9 = (uint *)FUN_006b0140(0x5625,DAT_00807618);
  FUN_007119c0(puVar9,iVar6,iVar18,uVar20);
  FUN_00710a90(*(int *)((int)pvVar17 + 0x218),0,0x96,iStack_8,0x106,0xf);
  UVar7 = 0x5d57;
  if ((&DAT_007e53bc)[param_1] != '\0') {
    if ((char)uStack_c == '\x02') {
      UVar7 = 0x5d58;
    }
    else if ((char)uStack_c == '\x01') {
      UVar7 = 0x5d59;
    }
  }
  uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar18 = -1;
  iVar6 = 1;
  puVar9 = (uint *)FUN_006b0140(UVar7,DAT_00807618);
  FUN_007119c0(puVar9,iVar6,iVar18,uVar12);
  iStack_8 = iStack_8 + 0xf;
  if ((DAT_007fa174 != 0) &&
     ((thunk_FUN_004e6e10(uStack_18,param_1,&iStack_10,&iStack_14), iStack_10 != 0 ||
      (iStack_14 != 0)))) {
    FUN_00710a90(*(int *)((int)pvVar17 + 0x218),0,0,iStack_8,0x91,0xf);
    uVar20 = 3;
    iVar18 = -1;
    iVar6 = -3;
    puVar9 = (uint *)FUN_006b0140(0x5626,DAT_00807618);
    FUN_007119c0(puVar9,iVar6,iVar18,uVar20);
    if (iStack_10 != 0) {
      FUN_00710a90(*(int *)((int)pvVar17 + 0x218),0,0x96,iStack_8,0x106,0xf);
      pHVar15 = DAT_00807618;
      UVar7 = thunk_FUN_00523410(iStack_10,(char)uStack_c,0);
      pcVar10 = (char *)FUN_006b0140(UVar7,pHVar15);
      uVar12 = 0xffffffff;
      do {
        pcVar13 = pcVar10;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar13 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar13;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      pcVar10 = pcVar13 + -uVar12;
      pcVar13 = (char *)&DAT_0080f33a;
      for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar13 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar13 = pcVar13 + 1;
      }
      for (puVar9 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar9 != (uint *)0x0;
          puVar9 = FUN_0072e560(puVar9,'\n')) {
        *(undefined1 *)puVar9 = 0x20;
      }
      FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      iStack_8 = iStack_8 + 0xf;
      uVar12 = thunk_FUN_00526ba0(iStack_10,(char)uStack_c);
      pbVar8 = (byte *)FUN_0070b3a0(*(int *)((int)pvVar17 + 0x240),uVar12);
      thunk_FUN_00540760(*(undefined4 **)((int)pvVar17 + 0x218),0x96,iStack_8,'\x01',pbVar8);
      pbVar8 = pbStack_3c;
      thunk_FUN_00540760(*(undefined4 **)((int)pvVar17 + 0x218),0x94,iStack_8 + -2,'\x06',pbStack_3c
                        );
      uStack_34 = 0x94;
      uStack_2c = *(undefined4 *)(pbVar8 + 4);
      iStack_30 = iStack_8 + -2;
      uStack_28 = *(undefined4 *)(pbVar8 + 8);
      iStack_23 = iStack_10;
      uStack_24 = 2;
      uStack_1f = uStack_18;
      FUN_006ae1c0(*(uint **)((int)pvVar17 + 0x1d7),&uStack_34);
      iStack_8 = iStack_8 + *(int *)(pbVar8 + 8);
    }
    if (iStack_14 != 0) {
      FUN_00710a90(*(int *)((int)pvVar17 + 0x218),0,0x96,iStack_8,0x106,0xf);
      pHVar15 = DAT_00807618;
      UVar7 = thunk_FUN_00523410(iStack_14,(char)uStack_c,0);
      pcVar10 = (char *)FUN_006b0140(UVar7,pHVar15);
      uVar12 = 0xffffffff;
      do {
        pcVar13 = pcVar10;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar13 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar13;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      pcVar10 = pcVar13 + -uVar12;
      pcVar13 = (char *)&DAT_0080f33a;
      for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar13 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar13 = pcVar13 + 1;
      }
      for (puVar9 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar9 != (uint *)0x0;
          puVar9 = FUN_0072e560(puVar9,'\n')) {
        *(undefined1 *)puVar9 = 0x20;
      }
      FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      iStack_8 = iStack_8 + 0xf;
      uVar12 = thunk_FUN_00526ba0(iStack_14,(char)uStack_c);
      pbVar8 = (byte *)FUN_0070b3a0(*(int *)((int)pvVar17 + 0x23c),uVar12);
      thunk_FUN_00540760(*(undefined4 **)((int)pvVar17 + 0x218),0x96,iStack_8,'\x01',pbVar8);
      pbVar8 = pbStack_3c;
      thunk_FUN_00540760(*(undefined4 **)((int)pvVar17 + 0x218),0x94,iStack_8 + -2,'\x06',pbStack_3c
                        );
      uStack_34 = 0x94;
      uStack_2c = *(undefined4 *)(pbVar8 + 4);
      iStack_30 = iStack_8 + -2;
      uStack_28 = *(undefined4 *)(pbVar8 + 8);
      iStack_23 = iStack_14;
      uStack_24 = 3;
      uStack_1f = uStack_18;
      FUN_006ae1c0(*(uint **)((int)pvVar17 + 0x1d7),&uStack_34);
      iStack_8 = iStack_8 + *(int *)(pbVar8 + 8);
    }
  }
  UVar7 = thunk_FUN_00528a30(uVar16,param_2);
  thunk_FUN_00515c00(&iStack_8,UVar7);
  thunk_FUN_00515e30(pvVar17,&iStack_8,'\x05',param_1,uStack_38);
  DAT_00858df8 = puStack_88;
  return;
}

