
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00673d20(void)

{
  ushort *puVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  char *pcVar18;
  int local_14;
  uint local_10;
  
  DAT_00811954 = DAT_007d2d18;
  if (DAT_007d2d18 != 0x1d) {
    _DAT_00857550 = 0;
  }
  iVar8 = DAT_007d2d20;
  if (DAT_007d2d20 != -1) {
    DAT_007d2d18 = DAT_007d2d20;
    DAT_007d2d20 = 0xffffffff;
    return iVar8;
  }
  iVar8 = FUN_00673210(0);
  if (iVar8 < 0) {
    return iVar8;
  }
LAB_00673d71:
  local_14 = 0;
  bVar7 = true;
  DAT_0081190c = DAT_00811914;
  DAT_00857544 = DAT_00811914;
  if ((DAT_007d2d24 & 8) == 0) {
LAB_00673e66:
    if ((DAT_007d2d18 != 0x84e) && (DAT_007d2d18 != 0x11)) goto cf_common_join_006743F6;
LAB_00673e7d:
    DAT_00811914 = DAT_0081190c + 1;
    bVar3 = *(byte *)(DAT_0085755c + DAT_0081190c);
    local_10 = (uint)bVar3;
    uVar11 = *(uint *)(DAT_00811924 + (uint)bVar3 * 4);
    if ((DAT_007d2d24 & 8) != 0) {
LAB_006741a7:
      if (DAT_007d2d18 != 0x84e) {
LAB_006741b3:
        if (DAT_007d2d18 != 0x11) goto cf_common_join_006743F6;
      }
LAB_006741c0:
      DAT_00811914 = DAT_0081190c + 1;
      if ((uVar11 & 0x100) != 0) {
        bVar3 = *(byte *)(DAT_0085755c + DAT_00811914);
        uVar12 = *(uint *)(DAT_00811924 + (uint)bVar3 * 4);
        if ((((uVar12 & 0x100) != 0) && (((uVar12 | uVar11) & 0x200) == 0)) &&
           ((DAT_0081193c != (ushort *)0x0 || (DAT_00811938 != (ushort *)0x0)))) {
          uVar11 = (uint)bVar3 << 8 | local_10;
          if ((DAT_0081193c != (ushort *)0x0) &&
             (cVar2 = *(char *)(DAT_0085755c + 1 + DAT_00811914),
             (*(byte *)(DAT_00811924 + 1 + cVar2 * 4) & 1) != 0)) {
            cVar4 = (char)*DAT_0081193c;
            puVar13 = DAT_0081193c;
            while (cVar4 != '\0') {
              if ((*puVar13 == uVar11) && ((char)puVar13[1] == cVar2)) {
                DAT_00811914 = DAT_0081190c + 3;
                if (DAT_007d2d18 == 0x11) goto LAB_00674360;
                DAT_007d2d18 = *(int *)(puVar13 + 2);
                goto LAB_00674334;
              }
              puVar1 = puVar13 + 4;
              puVar13 = puVar13 + 4;
              cVar4 = (char)*puVar1;
            }
          }
          cVar2 = (char)*DAT_00811938;
          puVar13 = DAT_00811938;
          while (cVar2 != '\0') {
            if (*puVar13 == uVar11) {
              DAT_00811914 = DAT_0081190c + 2;
              goto LAB_00674357;
            }
            puVar1 = puVar13 + 4;
            puVar13 = puVar13 + 4;
            cVar2 = (char)*puVar1;
          }
        }
        if (DAT_00811934 != (ushort *)0x0) {
          cVar2 = (char)*DAT_00811934;
          puVar13 = DAT_00811934;
          while (cVar2 != '\0') {
            if ((int)cVar2 == local_10) goto LAB_00674357;
            puVar1 = puVar13 + 4;
            puVar13 = puVar13 + 4;
            cVar2 = (char)*puVar1;
          }
        }
        uVar11 = *(uint *)(DAT_00811924 + (char)bVar3 * 4);
        while (((uVar11 & 0x100) != 0 && ((uVar11 & 0x200) == 0))) {
          DAT_00811914 = DAT_00811914 + 1;
          uVar11 = *(uint *)(DAT_00811924 + *(char *)(DAT_0085755c + DAT_00811914) * 4);
        }
      }
      goto LAB_00674334;
    }
    if (((uVar11 & 0x12) != 0) || ((DAT_0081190c == 0 && (DAT_00811930 != 0)))) {
      bVar9 = *(byte *)(DAT_00811924 + *(char *)(DAT_0085755c + DAT_00811914) * 4);
      while ((bVar9 & 4) != 0) {
        DAT_00811914 = DAT_00811914 + 1;
        bVar9 = *(byte *)(DAT_00811924 + *(char *)(DAT_0085755c + DAT_00811914) * 4);
      }
      if (((uVar11 & 0x10) != 0) && ((int)*(char *)(DAT_0085755c + DAT_00811914) == (uint)bVar3)) {
        DAT_00811914 = DAT_00811914 + 1;
        DAT_007d2d18 = 0x22;
      }
      if ((DAT_0081190c == 0) && (DAT_00811930 != 0)) {
        FUN_006747e0(DAT_00811930,DAT_00811920);
      }
      if (((DAT_007d2d18 == 0x84e) || (DAT_007d2d18 == 0x22)) && ((uVar11 & 0x12) != 0)) {
        FUN_006747e0(DAT_00811928,DAT_00811918);
      }
    }
    if (DAT_007d2d18 != 0x84e) goto LAB_006741b3;
    if (((uVar11 & 2) != 0) &&
       (((uVar11 & 0x100) == 0 ||
        ((1 < DAT_00811914 - DAT_0081190c &&
         ((*(uint *)(DAT_00811924 + *(char *)(DAT_0085755c + 1 + DAT_0081190c) * 4) & 0x100) == 0)))
        ))) {
      DAT_007d2d18 = 0x22;
      goto cf_common_join_006743F6;
    }
    DAT_00811914 = DAT_0081190c + 1;
    if ((uVar11 & 0x20) == 0) {
      if (((uVar11 & 0x1000) != 0) || ((uVar11 & 0x2800) != 0)) {
        if ((uVar11 & 0x1000) == 0) {
          DAT_007d2d18 = (-(uint)((uVar11 & 0x800) != 0) & 0xffffffec) + 0x22;
        }
        else {
          DAT_007d2d18 = 0x3c;
        }
        iVar8 = 0;
        *DAT_00811948 = 0;
LAB_00674017:
        bVar9 = *(byte *)(DAT_0085755c + DAT_00811914);
        iVar14 = iVar8;
        while ((bVar9 != bVar3 && (bVar9 != 0x5c))) {
          if (DAT_00857558 < DAT_00811914) goto LAB_00674068;
          DAT_00811914 = DAT_00811914 + 1;
          DAT_00811948[iVar14] = bVar9;
          iVar14 = iVar14 + 1;
          bVar9 = *(byte *)(DAT_0085755c + DAT_00811914);
        }
        if (DAT_00811914 < DAT_00857558) {
          DAT_00811914 = DAT_00811914 + 1;
        }
        else {
LAB_00674068:
          local_14 = -0xd2;
        }
        if (bVar9 == 0x5c) {
          if ((int)*(char *)(DAT_0085755c + DAT_00811914) == (uint)bVar3) {
            DAT_00811914 = DAT_00811914 + 1;
            iVar8 = iVar14 + 1;
            DAT_00811948[iVar14] = bVar3;
          }
          else {
            bVar9 = 0x5c;
            switch((int)*(char *)(DAT_0085755c + DAT_00811914)) {
            case 0x66:
              DAT_00811914 = DAT_00811914 + 1;
              DAT_00811948[iVar14] = 0xc;
              iVar8 = iVar14 + 1;
              break;
            case 0x6e:
              DAT_00811914 = DAT_00811914 + 1;
              DAT_00811948[iVar14] = 10;
              iVar8 = iVar14 + 1;
              break;
            case 0x72:
              bVar9 = 0xd;
            default:
              DAT_00811914 = DAT_00811914 + 1;
              iVar8 = iVar14 + 1;
              DAT_00811948[iVar14] = bVar9;
              break;
            case 0x74:
              DAT_00811914 = DAT_00811914 + 1;
              DAT_00811948[iVar14] = 9;
              iVar8 = iVar14 + 1;
            }
          }
          goto LAB_00674017;
        }
        bVar9 = *(byte *)(DAT_0085755c + -1 + DAT_00811914);
        local_10 = (uint)bVar9;
        if ((bVar9 == bVar3) && ((DAT_007d2d18 == 0x3c || (DAT_007d2d18 == 0x22)))) {
          DAT_00811948[iVar14] = 0;
          DAT_00857548 = DAT_00811948;
          if (DAT_007d2d18 == 0x22) {
            bVar7 = false;
            if ((DAT_007d2d24 & 0x100) == 0) {
              FUN_006b77e0((char *)DAT_00857528,DAT_00811948);
            }
            else {
              if ((DAT_00857528 == (byte *)0x0) || (DAT_00811948 == (byte *)0x0))
              goto cf_common_join_006743F6;
              uVar12 = 0xffffffff;
              pbVar15 = DAT_00811948;
              do {
                pbVar16 = pbVar15;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                pbVar16 = pbVar15 + 1;
                bVar3 = *pbVar15;
                pbVar15 = pbVar16;
              } while (bVar3 != 0);
              uVar12 = ~uVar12;
              pbVar15 = pbVar16 + -uVar12;
              pbVar16 = DAT_00857528;
              for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pbVar16 = *(undefined4 *)pbVar15;
                pbVar15 = pbVar15 + 4;
                pbVar16 = pbVar16 + 4;
              }
              for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *pbVar16 = *pbVar15;
                pbVar15 = pbVar15 + 1;
                pbVar16 = pbVar16 + 1;
              }
            }
          }
        }
        else {
          DAT_00857548 = (byte *)(int)(char)*DAT_00811948;
        }
        goto LAB_006741a7;
      }
      goto LAB_006741c0;
    }
    local_14 = FUN_006748d0();
    goto LAB_0067447d;
  }
  if ((DAT_00811954 != 0x11) || (DAT_00811914 != 0)) {
    bVar3 = *(byte *)(DAT_00811924 + 1 + *(char *)(DAT_0085755c + DAT_00811914) * 4);
    iVar8 = DAT_00811914;
    while (((bVar3 & 1) == 0 && (iVar8 < DAT_00857558))) {
      iVar8 = iVar8 + 1;
      bVar3 = *(byte *)(DAT_00811924 + 1 + *(char *)(DAT_0085755c + iVar8) * 4);
    }
    switch(DAT_00811954) {
    case 7:
      DAT_007d2d18 = 0x11;
      if (iVar8 != DAT_00857558) {
LAB_00673e50:
        bVar6 = DAT_00811914 < iVar8;
        DAT_00811914 = iVar8;
        if ((bVar6) && ((DAT_007d2d24 & 4) == 0)) {
          DAT_0081190c = iVar8 + -1;
        }
        goto LAB_00673e66;
      }
      DAT_00811914 = iVar8 + 1;
      break;
    default:
      if (iVar8 != DAT_00857558) goto LAB_00673e50;
      DAT_00811914 = iVar8 + 1;
      DAT_00811954 = 0x11;
      goto LAB_00674464;
    case 0x11:
      DAT_007d2d18 = 0x11;
      bVar6 = iVar8 <= DAT_00811914;
      DAT_00811914 = iVar8;
      if (bVar6) goto LAB_00673e7d;
      break;
    case 0x12:
      DAT_007d2d24 = DAT_007d2d24 & 0xfffffff7;
      DAT_007d2d18 = 0x11;
      DAT_00811914 = DAT_00857558;
      break;
    case 0x1d:
      if (iVar8 != DAT_00857558) {
        DAT_007d2d18 = 0x11;
        goto LAB_00673e50;
      }
      DAT_00811914 = iVar8 + 1;
      DAT_007d2d18 = 0x1d;
      goto cf_common_exit_00674486;
    }
    goto LAB_006744b5;
  }
LAB_00674464:
  DAT_007d2d18 = 0x1d;
  goto cf_common_exit_00674486;
LAB_00674357:
  if (DAT_007d2d18 == 0x11) {
LAB_00674360:
    if (*(int *)(puVar13 + 2) == 0x1b) {
      DAT_007d2d18 = 0x1b;
LAB_006743cd:
      uVar12 = DAT_007d2d24 & 0xfffffff7;
      uVar11 = DAT_007d2d24 & 4;
      DAT_007d2d24 = uVar12;
      if (uVar11 == 0) {
        DAT_00811954 = 0x1d;
        goto cf_continue_loop_006743FF;
      }
      goto cf_break_loop_006744A4;
    }
LAB_0067433f:
    if ((DAT_007d2d24 & 4) != 0) goto cf_break_loop_006744A4;
  }
  else {
    DAT_007d2d18 = *(int *)(puVar13 + 2);
LAB_00674334:
    if (DAT_007d2d18 == 0x11) goto LAB_0067433f;
    if (DAT_007d2d18 == 0x12) {
      if ((DAT_007d2d24 & 4) != 0) {
        DAT_007d2d24 = DAT_007d2d24 | 8;
        goto cf_break_loop_006744A4;
      }
      DAT_00811954 = 0x1d;
      DAT_00811914 = DAT_00857558;
      goto cf_continue_loop_006743FF;
    }
    if (DAT_007d2d18 == 7) {
      uVar12 = DAT_007d2d24 | 8;
      uVar11 = DAT_007d2d24 & 4;
      DAT_007d2d24 = uVar12;
      if (uVar11 == 0) goto cf_continue_loop_006743FF;
      goto cf_break_loop_006744A4;
    }
    if (DAT_007d2d18 == 0x1b) goto LAB_006743cd;
  }
cf_common_join_006743F6:
  if ((DAT_007d2d24 & 8) != 0) {
cf_continue_loop_006743FF:
    iVar8 = FUN_00673210(0);
    if (iVar8 < 0) {
      return iVar8;
    }
    goto LAB_00673d71;
  }
LAB_0067447d:
  if (DAT_007d2d18 == 0x1d) {
cf_common_exit_00674486:
    *DAT_00857528 = 10;
    DAT_00857528[1] = 0;
    goto cf_common_exit_00674540;
  }
cf_break_loop_006744A4:
  if (!bVar7) goto cf_common_exit_00674540;
LAB_006744b5:
  uVar5 = *(undefined1 *)(DAT_0085755c + DAT_00811914);
  *(undefined1 *)(DAT_0085755c + DAT_00811914) = 0;
  if ((DAT_007d2d24 & 0x100) == 0) {
    FUN_006b77e0((char *)DAT_00857528,(byte *)(DAT_0085755c + DAT_0081190c));
    goto cf_common_exit_00674521;
  }
  if ((DAT_00857528 == (byte *)0x0) || ((char *)(DAT_0085755c + DAT_0081190c) == (char *)0x0))
  goto cf_common_exit_00674521;
  uVar11 = 0xffffffff;
  pcVar17 = (char *)(DAT_0085755c + DAT_0081190c);
  goto code_r0x006744e7;
  while( true ) {
    uVar11 = uVar11 - 1;
    pcVar18 = pcVar17 + 1;
    cVar2 = *pcVar17;
    pcVar17 = pcVar18;
    if (cVar2 == '\0') break;
code_r0x006744e7:
    pcVar18 = pcVar17;
    if (uVar11 == 0) break;
  }
  uVar11 = ~uVar11;
  pbVar15 = (byte *)(pcVar18 + -uVar11);
  pbVar16 = DAT_00857528;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pbVar16 = *(undefined4 *)pbVar15;
    pbVar15 = pbVar15 + 4;
    pbVar16 = pbVar16 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pbVar16 = *pbVar15;
    pbVar15 = pbVar15 + 1;
    pbVar16 = pbVar16 + 1;
  }
cf_common_exit_00674521:
  DAT_00857528[DAT_00811914 - DAT_0081190c] = 0;
  *(undefined1 *)(DAT_0085755c + DAT_00811914) = uVar5;
cf_common_exit_00674540:
  if (local_14 == 0) {
    local_14 = DAT_007d2d18;
  }
  DAT_00857540 = DAT_00857540 + 1;
  return local_14;
}

