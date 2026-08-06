#include "../../pseudocode_runtime.h"


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
  int iVar9;
  int iVar8;
  int local_EAX_1761;
  byte bVar10;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17_mg1;
  char *pcVar17;
  char *pcVar18;
  int local_14;
  uint local_10;
  byte *pbVar16_mg0;
  byte *pbVar17_mg2;

  DAT_00811954 = DAT_007d2d18;
  if (DAT_007d2d18 != 0x1d) {
    _DAT_00857550 = 0;
  }
  iVar9 = DAT_007d2d20;
  if (DAT_007d2d20 != -1) {
    DAT_007d2d18 = DAT_007d2d20;
    DAT_007d2d20 = 0xffffffff;
    return iVar9;
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
    uVar12 = *(uint *)(DAT_00811924 + (uint)bVar3 * 4);
    if ((DAT_007d2d24 & 8) != 0) {
LAB_006741a7:
      if (DAT_007d2d18 != 0x84e) {
LAB_006741b3:
        if (DAT_007d2d18 != 0x11) goto cf_common_join_006743F6;
      }
LAB_006741c0:
      DAT_00811914 = DAT_0081190c + 1;
      if ((uVar12 & 0x100) != 0) {
        bVar3 = *(byte *)(DAT_0085755c + DAT_00811914);
        uVar13 = *(uint *)(DAT_00811924 + (uint)bVar3 * 4);
        if ((((uVar13 & 0x100) != 0) && (((uVar13 | uVar12) & 0x200) == 0)) &&
           ((DAT_0081193c != nullptr || (DAT_00811938 != nullptr)))) {
          uVar12 = (uint)bVar3 << 8 | local_10;
          if ((DAT_0081193c != nullptr) &&
             (cVar2 = *(char *)(DAT_0085755c + 1 + DAT_00811914),
             (*(byte *)(DAT_00811924 + 1 + cVar2 * 4) & 1) != 0)) {
            cVar4 = (char)*DAT_0081193c;
            puVar14 = DAT_0081193c;
            while (cVar4 != '\0') {
              if ((*puVar14 == uVar12) && ((char)puVar14[1] == cVar2)) {
                DAT_00811914 = DAT_0081190c + 3;
                if (DAT_007d2d18 == 0x11) goto LAB_00674360;
                DAT_007d2d18 = *(int *)(puVar14 + 2);
                goto LAB_00674334;
              }
              puVar1 = puVar14 + 4;
              puVar14 = puVar14 + 4;
              cVar4 = (char)*puVar1;
            }
          }
          cVar2 = (char)*DAT_00811938;
          puVar14 = DAT_00811938;
          while (cVar2 != '\0') {
            if (*puVar14 == uVar12) {
              DAT_00811914 = DAT_0081190c + 2;
              goto LAB_00674357;
            }
            puVar1 = puVar14 + 4;
            puVar14 = puVar14 + 4;
            cVar2 = (char)*puVar1;
          }
        }
        if (DAT_00811934 != nullptr) {
          cVar2 = (char)*DAT_00811934;
          puVar14 = DAT_00811934;
          while (cVar2 != '\0') {
            if ((int)cVar2 == local_10) goto LAB_00674357;
            puVar1 = puVar14 + 4;
            puVar14 = puVar14 + 4;
            cVar2 = (char)*puVar1;
          }
        }
        uVar12 = *(uint *)(DAT_00811924 + (char)bVar3 * 4);
        while (((uVar12 & 0x100) != 0 && ((uVar12 & 0x200) == 0))) {
          DAT_00811914 = DAT_00811914 + 1;
          uVar12 = *(uint *)(DAT_00811924 + *(char *)(DAT_0085755c + DAT_00811914) * 4);
        }
      }
      goto LAB_00674334;
    }
    if (((uVar12 & 0x12) != 0) || ((DAT_0081190c == 0 && (DAT_00811930 != 0)))) {
      bVar10 = *(byte *)(DAT_00811924 + *(char *)(DAT_0085755c + DAT_00811914) * 4);
      while ((bVar10 & 4) != 0) {
        DAT_00811914 = DAT_00811914 + 1;
        bVar10 = *(byte *)(DAT_00811924 + *(char *)(DAT_0085755c + DAT_00811914) * 4);
      }
      if (((uVar12 & 0x10) != 0) && ((int)*(char *)(DAT_0085755c + DAT_00811914) == (uint)bVar3)) {
        DAT_00811914 = DAT_00811914 + 1;
        DAT_007d2d18 = 0x22;
      }
      if ((DAT_0081190c == 0) && (DAT_00811930 != 0)) {
        FUN_006747e0(DAT_00811930,DAT_00811920);
      }
      if (((DAT_007d2d18 == 0x84e) || (DAT_007d2d18 == 0x22)) && ((uVar12 & 0x12) != 0)) {
        FUN_006747e0(DAT_00811928,DAT_00811918);
      }
    }
    if (DAT_007d2d18 != 0x84e) goto LAB_006741b3;
    if (((uVar12 & 2) != 0) &&
       (((uVar12 & 0x100) == 0 ||
        ((1 < DAT_00811914 - DAT_0081190c &&
         ((*(uint *)(DAT_00811924 + *(char *)(DAT_0085755c + 1 + DAT_0081190c) * 4) & 0x100) == 0)))
        ))) {
      DAT_007d2d18 = 0x22;
      goto cf_common_join_006743F6;
    }
    DAT_00811914 = DAT_0081190c + 1;
    if ((uVar12 & 0x20) == 0) {
      if (((uVar12 & 0x1000) != 0) || ((uVar12 & 0x2800) != 0)) {
        if ((uVar12 & 0x1000) == 0) {
          DAT_007d2d18 = (-(uint)((uVar12 & 0x800) != 0) & 0xffffffec) + 0x22;
        }
        else {
          DAT_007d2d18 = 0x3c;
        }
        iVar9 = 0;
        *DAT_00811948 = 0;
LAB_00674017:
        bVar10 = *(byte *)(DAT_0085755c + DAT_00811914);
        iVar15 = iVar9;
        while ((bVar10 != bVar3 && (bVar10 != 0x5c))) {
          if (DAT_00857558 < DAT_00811914) goto LAB_00674068;
          DAT_00811914 = DAT_00811914 + 1;
          DAT_00811948[iVar15] = bVar10;
          iVar15 = iVar15 + 1;
          bVar10 = *(byte *)(DAT_0085755c + DAT_00811914);
        }
        if (DAT_00811914 < DAT_00857558) {
          DAT_00811914 = DAT_00811914 + 1;
        }
        else {
LAB_00674068:
          local_14 = -0xd2;
        }
        if (bVar10 == 0x5c) {
          if ((int)*(char *)(DAT_0085755c + DAT_00811914) == (uint)bVar3) {
            DAT_00811914 = DAT_00811914 + 1;
            iVar9 = iVar15 + 1;
            DAT_00811948[iVar15] = bVar3;
          }
          else {
            bVar10 = 0x5c;
            switch((int)*(char *)(DAT_0085755c + DAT_00811914)) {
            case 0x66:
              DAT_00811914 = DAT_00811914 + 1;
              DAT_00811948[iVar15] = 0xc;
              iVar9 = iVar15 + 1;
              break;
            case 0x6e:
              DAT_00811914 = DAT_00811914 + 1;
              DAT_00811948[iVar15] = 10;
              iVar9 = iVar15 + 1;
              break;
            case 0x72:
              bVar10 = 0xd;
            default:
              DAT_00811914 = DAT_00811914 + 1;
              iVar9 = iVar15 + 1;
              DAT_00811948[iVar15] = bVar10;
              break;
            case 0x74:
              DAT_00811914 = DAT_00811914 + 1;
              DAT_00811948[iVar15] = 9;
              iVar9 = iVar15 + 1;
            }
          }
          goto LAB_00674017;
        }
        bVar10 = *(byte *)(DAT_0085755c + -1 + DAT_00811914);
        local_10 = (uint)bVar10;
        if ((bVar10 == bVar3) && ((DAT_007d2d18 == 0x3c || (DAT_007d2d18 == 0x22)))) {
          DAT_00811948[iVar15] = 0;
          DAT_00857548 = DAT_00811948;
          if (DAT_007d2d18 == 0x22) {
            bVar7 = false;
            if ((DAT_007d2d24 & 0x100) == 0) {
              FUN_006b77e0((char *)DAT_00857528,DAT_00811948);
            }
            else {
              if ((DAT_00857528 == nullptr) || (DAT_00811948 == nullptr))
              goto cf_common_join_006743F6;
              uVar13 = 0xffffffff;
              pbVar16_mg0 = DAT_00811948;
              do {
                pbVar16 = pbVar16_mg0;
                if (uVar13 == 0) break;
                uVar13 = uVar13 - 1;
                pbVar16 = pbVar16_mg0 + 1;
                bVar3 = *pbVar16_mg0;
                pbVar16_mg0 = pbVar16;
              } while (bVar3 != 0);
              uVar13 = ~uVar13;
              pbVar16 = pbVar16 + -uVar13;
              pbVar17_mg1 = DAT_00857528;
              memmove(pbVar17_mg1, pbVar16, uVar13); /* compiler REP MOVS byte copy */
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
    iVar9 = DAT_00811914;
    while (((bVar3 & 1) == 0 && (iVar9 < DAT_00857558))) {
      iVar9 = iVar9 + 1;
      bVar3 = *(byte *)(DAT_00811924 + 1 + *(char *)(DAT_0085755c + iVar9) * 4);
    }
    switch(DAT_00811954) {
    case 7:
      DAT_007d2d18 = 0x11;
      if (iVar9 != DAT_00857558) {
LAB_00673e50:
        bVar6 = DAT_00811914 < iVar9;
        DAT_00811914 = iVar9;
        if ((bVar6) && ((DAT_007d2d24 & 4) == 0)) {
          DAT_0081190c = iVar9 + -1;
        }
        goto LAB_00673e66;
      }
      DAT_00811914 = iVar9 + 1;
      break;
    default:
      if (iVar9 != DAT_00857558) goto LAB_00673e50;
      DAT_00811914 = iVar9 + 1;
      DAT_00811954 = 0x11;
      goto LAB_00674464;
    case 0x11:
      DAT_007d2d18 = 0x11;
      bVar6 = iVar9 <= DAT_00811914;
      DAT_00811914 = iVar9;
      if (bVar6) goto LAB_00673e7d;
      break;
    case 0x12:
      DAT_007d2d24 = DAT_007d2d24 & 0xfffffff7;
      DAT_007d2d18 = 0x11;
      DAT_00811914 = DAT_00857558;
      break;
    case 0x1d:
      if (iVar9 != DAT_00857558) {
        DAT_007d2d18 = 0x11;
        goto LAB_00673e50;
      }
      DAT_00811914 = iVar9 + 1;
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
    if (*(int *)(puVar14 + 2) == 0x1b) {
      DAT_007d2d18 = 0x1b;
LAB_006743cd:
      uVar13 = DAT_007d2d24 & 0xfffffff7;
      uVar12 = DAT_007d2d24 & 4;
      DAT_007d2d24 = uVar13;
      if (uVar12 == 0) {
        DAT_00811954 = 0x1d;
        goto cf_continue_loop_006743FF;
      }
      goto cf_break_loop_006744A4;
    }
LAB_0067433f:
    if ((DAT_007d2d24 & 4) != 0) goto cf_break_loop_006744A4;
  }
  else {
    DAT_007d2d18 = *(int *)(puVar14 + 2);
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
      uVar13 = DAT_007d2d24 | 8;
      uVar12 = DAT_007d2d24 & 4;
      DAT_007d2d24 = uVar13;
      if (uVar12 == 0) goto cf_continue_loop_006743FF;
      goto cf_break_loop_006744A4;
    }
    if (DAT_007d2d18 == 0x1b) goto LAB_006743cd;
  }
cf_common_join_006743F6:
  if ((DAT_007d2d24 & 8) != 0) {
cf_continue_loop_006743FF:
    local_EAX_1761 = FUN_00673210(0);
    if (local_EAX_1761 < 0) {
      return local_EAX_1761;
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
  if ((DAT_00857528 == nullptr) || ((char *)(DAT_0085755c + DAT_0081190c) == nullptr))
  goto cf_common_exit_00674521;
  uVar12 = 0xffffffff;
  pcVar17 = (char *)(DAT_0085755c + DAT_0081190c);
  goto code_r0x006744e7;
  while( true ) {
    uVar12 = uVar12 - 1;
    pcVar18 = pcVar17 + 1;
    cVar2 = *pcVar17;
    pcVar17 = pcVar18;
    if (cVar2 == '\0') break;
code_r0x006744e7:
    pcVar18 = pcVar17;
    if (uVar12 == 0) break;
  }
  uVar12 = ~uVar12;
  pbVar16 = (byte *)(pcVar18 + -uVar12);
  pbVar17_mg2 = DAT_00857528;
  memmove(pbVar17_mg2, pbVar16, uVar12); /* compiler REP MOVS byte copy */
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

