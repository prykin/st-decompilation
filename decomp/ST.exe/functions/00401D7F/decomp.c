
int thunk_FUN_006736f0(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  byte *pbVar9;
  void *unaff_EDI;
  char *pcVar10;
  bool bVar11;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  uint uStack_10;
  byte *pbStack_c;
  int *piStack_8;
  
  piStack_8 = (int *)0x0;
  uStack_10 = DAT_007d2d24;
  iVar3 = FUN_00673d20();
  if (-1 < iVar3) {
    do {
      if (DAT_007d2d18 != 0x2a) {
        DAT_007d2d24 = DAT_007d2d24 ^ (DAT_007d2d24 ^ uStack_10) & 1;
        if ((DAT_007d2d18 == 0x24) && ((DAT_007d2d24 & 0x200) != 0)) {
          if (DAT_00857558 <= DAT_00811914) goto LAB_006739be;
          goto LAB_00673990;
        }
        break;
      }
      DAT_007d2d24 = DAT_007d2d24 | 1;
      if (DAT_00811914 < DAT_00857558) {
        do {
          if ((DAT_007d2d18 == 0x3c) || (DAT_007d2d18 == 0x22)) break;
          if (DAT_007d2d18 == 0x1d) goto LAB_00673ba7;
          iVar3 = FUN_00673d20();
          if (iVar3 < 0) goto LAB_00673bb3;
        } while (DAT_00811914 < DAT_00857558);
      }
      if (DAT_007d2d18 == 0x1d) {
LAB_00673ba7:
        iVar3 = -6;
        break;
      }
      if ((DAT_007d2d24 & 0x800) == 0) {
        piStack_8 = DAT_00811908;
        if (DAT_007d2d18 == 0x3c) {
          pbStack_c = DAT_00811948;
        }
        else {
          pbStack_c = DAT_00857528;
        }
        for (; piStack_8 != (int *)0x0; piStack_8 = (int *)*piStack_8) {
          pbVar4 = (byte *)piStack_8[1];
          pbVar9 = pbStack_c;
          do {
            bVar1 = *pbVar4;
            bVar11 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_006737e2:
              iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_006737e7;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar11 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_006737e2;
            pbVar4 = pbVar4 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_006737e7:
          if (iVar3 == 0) break;
        }
        if (piStack_8 != (int *)0x0) goto LAB_0067383b;
        piVar5 = (int *)FUN_006aac70(0xc);
        if (piVar5 != (int *)0x0) {
          piStack_8 = piVar5;
          pcVar6 = FUN_006c49b0((char *)pbStack_c);
          piVar5[1] = (int)pcVar6;
          if (pcVar6 != (char *)0x0) {
            piVar5[2] = 0;
            FUN_006b9910(&DAT_00811908,piVar5);
            goto LAB_0067383b;
          }
        }
LAB_00673bae:
        iVar3 = -2;
        break;
      }
LAB_0067383b:
      if (DAT_007d2d18 != 0x1d) {
        iVar3 = FUN_00673d20();
        goto joined_r0x00673849;
      }
      while ((DAT_007d2d18 != 0x3c && (DAT_007d2d18 != 0x22))) {
        if (DAT_007d2d18 == 0x1d) goto LAB_00673ba7;
        iVar3 = FUN_00673d20();
joined_r0x00673849:
        if (iVar3 < 0) goto LAB_00673bb3;
      }
      if (DAT_007d2d18 == 0x1d) goto LAB_00673ba7;
      if ((DAT_007d2d24 & 0x800) == 0) {
        pbVar4 = DAT_00811948;
        if (DAT_007d2d18 != 0x3c) {
          pbVar4 = DAT_00857528;
        }
        pbVar4 = (byte *)FUN_006c49b0((char *)pbVar4);
        piVar5 = piStack_8;
        piStack_8[2] = (int)pbVar4;
        if (pbVar4 == (byte *)0x0) goto LAB_00673bae;
        pbVar9 = (byte *)piStack_8[1];
        do {
          bVar1 = *pbVar9;
          bVar11 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_006738e9:
            iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_006738ee;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar9[1];
          bVar11 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_006738e9;
          pbVar9 = pbVar9 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_006738ee:
        if (iVar3 == 0) {
          FUN_006b98c0((int *)&DAT_00811908,piStack_8);
          FUN_006a5e90((undefined4 *)piVar5[1]);
          FUN_006a5e90((undefined4 *)piVar5[2]);
          FUN_006a5e90(piVar5);
        }
      }
      while (DAT_007d2d18 != 0x1d) {
        iVar3 = FUN_00673d20();
        if (iVar3 < 0) goto LAB_00673bb3;
      }
      if ((uStack_10 & 1) != 0) {
        thunk_FUN_00673690(0x1d);
      }
      iVar3 = FUN_00673d20();
      if (iVar3 < 0) break;
    } while( true );
  }
  goto LAB_00673bb3;
  while( true ) {
    if (DAT_007d2d18 == 0x22) goto LAB_006739cd;
    iVar3 = FUN_00673d20();
    if (iVar3 < 0) {
      return iVar3;
    }
    if (DAT_00857558 <= DAT_00811914) break;
LAB_00673990:
    if (DAT_007d2d18 == 0x3c) break;
  }
LAB_006739be:
  if (DAT_007d2d18 == 0x22) {
LAB_006739cd:
    for (; (cVar2 = *(char *)(DAT_0085755c + DAT_00811914), cVar2 == ' ' || (cVar2 == '\t'));
        DAT_00811914 = DAT_00811914 + 1) {
    }
    if (cVar2 == ']') {
      DAT_00811914 = DAT_00811914 + 1;
      pcVar6 = (char *)(*(code *)DAT_0081194c[4])(DAT_00857528);
      if (pcVar6 == (char *)0x0) {
        *DAT_00811948 = 0;
      }
      else {
        uVar8 = 0xffffffff;
        do {
          pcVar10 = pcVar6;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar10 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar10;
        } while (cVar2 != '\0');
        uVar8 = ~uVar8;
        pbVar4 = (byte *)(pcVar10 + -uVar8);
        pbVar9 = DAT_00811948;
        for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar4;
          pbVar4 = pbVar4 + 4;
          pbVar9 = pbVar9 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar9 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          pbVar9 = pbVar9 + 1;
        }
      }
      uVar7 = 0xffffffff;
      pbVar4 = DAT_00811948;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      uVar7 = ~uVar7;
      uVar8 = uVar7 - 1;
      if (uVar8 != 0) {
        for (; (cVar2 = *(char *)(DAT_0085755c + DAT_00811914), cVar2 == ' ' || (cVar2 == '\t'));
            DAT_00811914 = DAT_00811914 + 1) {
        }
        if (cVar2 == '\\') {
          if (DAT_00811948[uVar7 - 2] == 0x5c) {
            uVar8 = uVar7 - 2;
          }
        }
        else if (((cVar2 != '>') && (cVar2 != '\0')) && (DAT_00811948[uVar7 - 2] != 0x5c)) {
          DAT_00811948[uVar8] = 0x5c;
          uVar8 = uVar7;
        }
      }
    }
    else {
      DAT_00811914 = DAT_00857544;
      uVar8 = 0;
    }
    bVar1 = *(byte *)(DAT_0085755c + DAT_00811914);
    while (((bVar1 != 0 && (bVar1 != 0x3e)) && ((bVar1 != 0x20 && (bVar1 != 9))))) {
      DAT_00811948[uVar8] = bVar1;
      DAT_00811914 = DAT_00811914 + 1;
      uVar8 = uVar8 + 1;
      bVar1 = *(byte *)(DAT_0085755c + DAT_00811914);
    }
    DAT_00811948[uVar8] = 0;
    DAT_007d2d18 = 0x3c;
  }
  if ((DAT_007d2d24 & 0x800) == 0) {
    if (DAT_007d2d18 == 0x3c) {
      uStack_54 = DAT_00858df8;
      DAT_00858df8 = &uStack_54;
      iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
      if (iVar3 != 0) {
        DAT_00858df8 = (undefined4 *)uStack_54;
        return iVar3;
      }
      thunk_FUN_00672b60((char *)DAT_00811948,DAT_0081194c);
      if ((code *)DAT_0081194c[5] != (code *)0x0) {
        (*(code *)DAT_0081194c[5])(DAT_00811948,1);
      }
      DAT_007d2d24 = DAT_007d2d24 | 0x80;
      DAT_00858df8 = (undefined4 *)uStack_54;
      iVar3 = thunk_FUN_006736f0();
      if (iVar3 < 0) {
        return iVar3;
      }
    }
  }
  else {
    do {
      if (DAT_007d2d18 == 0x1d) break;
      iVar3 = FUN_00673d20();
    } while (-1 < iVar3);
  }
LAB_00673bb3:
  DAT_007d2d24 = DAT_007d2d24 ^ (DAT_007d2d24 ^ uStack_10) & 1;
  return iVar3;
}

