#include "../../pseudocode_runtime.h"


/* WARNING: Unable to use type for symbol pbVar16_mg0 */
/* WARNING: Unable to use type for symbol pbVar17_mg2 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00673d20(void)

{
  ushort *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int local_EAX_1761;
  char cVar8;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  byte *pbVar14;
  char *pcVar15;
  byte *pbVar17_mg1;
  char *pcVar16;
  int local_14;
  uint local_10;
  char *pbVar16_mg0;
  char *pbVar17_mg2;

  DAT_00811954 = DAT_007d2d18;
  if (DAT_007d2d18 != 0x1d) {
    _DAT_00857550 = 0;
  }
  iVar7 = DAT_007d2d20;
  if (DAT_007d2d20 != -1) {
    DAT_007d2d18 = DAT_007d2d20;
    DAT_007d2d20 = 0xffffffff;
    return iVar7;
  }
  iVar8 = FUN_00673210(0);
  if (iVar8 < 0) {
    return iVar8;
  }
LAB_00673d71:
  local_14 = 0;
  bVar6 = true;
  DAT_0081190c = DAT_00811914;
  DAT_00857544 = DAT_00811914;
  if ((DAT_007d2d24 & 8) == 0) {
LAB_00673e66:
    if ((DAT_007d2d18 != 0x84e) && (DAT_007d2d18 != 0x11)) goto cf_common_join_006743F6;
LAB_00673e7d:
    DAT_00811914 = DAT_0081190c + 1;
    bVar3 = PTR_0085755c[DAT_0081190c];
    local_10 = (uint)bVar3;
    uVar10 = *(uint *)((int)PTR_00811924 + (uint)bVar3 * 4);
    if ((DAT_007d2d24 & 8) != 0) {
LAB_006741a7:
      if (DAT_007d2d18 != 0x84e) {
LAB_006741b3:
        if (DAT_007d2d18 != 0x11) goto cf_common_join_006743F6;
      }
LAB_006741c0:
      DAT_00811914 = DAT_0081190c + 1;
      if ((uVar10 & 0x100) != 0) {
        bVar3 = PTR_0085755c[DAT_00811914];
        uVar11 = *(uint *)((int)PTR_00811924 + (uint)bVar3 * 4);
        if ((((uVar11 & 0x100) != 0) && (((uVar11 | uVar10) & 0x200) == 0)) &&
           ((PTR_0081193c != nullptr || (PTR_00811938 != nullptr)))) {
          uVar10 = (uint)bVar3 << 8 | local_10;
          if ((PTR_0081193c != nullptr) &&
             ((*(byte *)((int)PTR_00811924 + PTR_0085755c[DAT_0081190c + 2] * 4 + 1) & 1) != 0)) {
            cVar8 = *(char *)PTR_0081193c;
            puVar12 = PTR_0081193c;
            while (cVar8 != '\0') {
              if ((*puVar12 == uVar10) && ((char)puVar12[1] == PTR_0085755c[DAT_0081190c + 2])) {
                DAT_00811914 = DAT_0081190c + 3;
                if (DAT_007d2d18 == 0x11) goto LAB_00674360;
                DAT_007d2d18 = *(int *)(puVar12 + 2);
                goto LAB_00674334;
              }
              puVar1 = puVar12 + 4;
              puVar12 = puVar12 + 4;
              cVar8 = (char)*puVar1;
            }
          }
          cVar8 = *(char *)PTR_00811938;
          puVar12 = PTR_00811938;
          while (cVar8 != '\0') {
            if (*puVar12 == uVar10) {
              DAT_00811914 = DAT_0081190c + 2;
              goto LAB_00674357;
            }
            puVar1 = puVar12 + 4;
            puVar12 = puVar12 + 4;
            cVar8 = (char)*puVar1;
          }
        }
        if (PTR_00811934 != nullptr) {
          cVar8 = *(char *)PTR_00811934;
          puVar12 = PTR_00811934;
          while (cVar8 != '\0') {
            if ((int)cVar8 == local_10) goto LAB_00674357;
            puVar1 = puVar12 + 4;
            puVar12 = puVar12 + 4;
            cVar8 = (char)*puVar1;
          }
        }
        uVar10 = *(uint *)((int)PTR_00811924 + (char)bVar3 * 4);
        while (((uVar10 & 0x100) != 0 && ((uVar10 & 0x200) == 0))) {
          DAT_00811914 = DAT_00811914 + 1;
          uVar10 = *(uint *)((int)PTR_00811924 + PTR_0085755c[DAT_00811914] * 4);
        }
      }
      goto LAB_00674334;
    }
    if (((uVar10 & 0x12) != 0) || ((DAT_0081190c == 0 && (DAT_00811930 != 0)))) {
      bVar4 = *(byte *)((int)PTR_00811924 + PTR_0085755c[DAT_00811914] * 4);
      while ((bVar4 & 4) != 0) {
        DAT_00811914 = DAT_00811914 + 1;
        bVar4 = *(byte *)((int)PTR_00811924 + PTR_0085755c[DAT_00811914] * 4);
      }
      if (((uVar10 & 0x10) != 0) && ((int)PTR_0085755c[DAT_00811914] == (uint)bVar3)) {
        DAT_00811914 = DAT_00811914 + 1;
        DAT_007d2d18 = 0x22;
      }
      if ((DAT_0081190c == 0) && (DAT_00811930 != 0)) {
        FUN_006747e0(DAT_00811930,DAT_00811920);
      }
      if (((DAT_007d2d18 == 0x84e) || (DAT_007d2d18 == 0x22)) && ((uVar10 & 0x12) != 0)) {
        FUN_006747e0(DAT_00811928,DAT_00811918);
      }
    }
    if (DAT_007d2d18 != 0x84e) goto LAB_006741b3;
    if (((uVar10 & 2) != 0) &&
       (((uVar10 & 0x100) == 0 ||
        ((1 < DAT_00811914 - DAT_0081190c &&
         ((*(uint *)((int)PTR_00811924 + PTR_0085755c[DAT_0081190c + 1] * 4) & 0x100) == 0)))))) {
      DAT_007d2d18 = 0x22;
      goto cf_common_join_006743F6;
    }
    DAT_00811914 = DAT_0081190c + 1;
    if ((uVar10 & 0x20) == 0) {
      if (((uVar10 & 0x1000) != 0) || ((uVar10 & 0x2800) != 0)) {
        if ((uVar10 & 0x1000) == 0) {
          DAT_007d2d18 = (-(uint)((uVar10 & 0x800) != 0) & 0xffffffec) + 0x22;
        }
        else {
          DAT_007d2d18 = 0x3c;
        }
        iVar7 = 0;
        *PTR_00811948 = '\0';
LAB_00674017:
        bVar4 = PTR_0085755c[DAT_00811914];
        iVar13 = iVar7;
        while ((bVar4 != bVar3 && (bVar4 != 0x5c))) {
          if (DAT_00857558 < DAT_00811914) goto LAB_00674068;
          DAT_00811914 = DAT_00811914 + 1;
          PTR_00811948[iVar13] = bVar4;
          iVar13 = iVar13 + 1;
          bVar4 = PTR_0085755c[DAT_00811914];
        }
        if (DAT_00811914 < DAT_00857558) {
          DAT_00811914 = DAT_00811914 + 1;
        }
        else {
LAB_00674068:
          local_14 = -0xd2;
        }
        if (bVar4 == 0x5c) {
          if ((int)PTR_0085755c[DAT_00811914] == (uint)bVar3) {
            DAT_00811914 = DAT_00811914 + 1;
            iVar7 = iVar13 + 1;
            PTR_00811948[iVar13] = bVar3;
          }
          else {
            cVar8 = '\\';
            switch((int)PTR_0085755c[DAT_00811914]) {
            case 0x66:
              DAT_00811914 = DAT_00811914 + 1;
              PTR_00811948[iVar13] = '\f';
              iVar7 = iVar13 + 1;
              break;
            case 0x6e:
              DAT_00811914 = DAT_00811914 + 1;
              PTR_00811948[iVar13] = '\n';
              iVar7 = iVar13 + 1;
              break;
            case 0x72:
              cVar8 = '\r';
            default:
              DAT_00811914 = DAT_00811914 + 1;
              iVar7 = iVar13 + 1;
              PTR_00811948[iVar13] = cVar8;
              break;
            case 0x74:
              DAT_00811914 = DAT_00811914 + 1;
              PTR_00811948[iVar13] = '\t';
              iVar7 = iVar13 + 1;
            }
          }
          goto LAB_00674017;
        }
        local_10 = (uint)(byte)PTR_0085755c[DAT_00811914 + -1];
        if ((PTR_0085755c[DAT_00811914 + -1] == bVar3) &&
           ((DAT_007d2d18 == 0x3c || (DAT_007d2d18 == 0x22)))) {
          PTR_00811948[iVar13] = '\0';
          PTR_00857548 = PTR_00811948;
          if (DAT_007d2d18 == 0x22) {
            bVar6 = false;
            if ((DAT_007d2d24 & 0x100) == 0) {
              FUN_006b77e0(PTR_00857528,(byte *)PTR_00811948);
            }
            else {
              if ((PTR_00857528 == nullptr) || (PTR_00811948 == nullptr))
              goto cf_common_join_006743F6;
              uVar11 = 0xffffffff;
              pbVar16_mg0 = PTR_00811948;
              do {
                pcVar15 = pbVar16_mg0;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                pcVar15 = pbVar16_mg0 + 1;
                cVar8 = *pbVar16_mg0;
                pbVar16_mg0 = pcVar15;
              } while (cVar8 != '\0');
              uVar11 = ~uVar11;
              pbVar14 = (byte *)(pcVar15 + -uVar11);
              pbVar17_mg1 = (byte *)PTR_00857528;
              memmove(pbVar17_mg1, pbVar14, uVar11); /* compiler REP MOVS byte copy */
            }
          }
        }
        else {
          PTR_00857548 = (char *)(int)*PTR_00811948;
        }
        goto LAB_006741a7;
      }
      goto LAB_006741c0;
    }
    local_14 = FUN_006748d0();
    goto LAB_0067447d;
  }
  if ((DAT_00811954 != 0x11) || (DAT_00811914 != 0)) {
    bVar3 = *(byte *)((int)PTR_00811924 + PTR_0085755c[DAT_00811914] * 4 + 1);
    iVar7 = DAT_00811914;
    while (((bVar3 & 1) == 0 && (iVar7 < DAT_00857558))) {
      iVar7 = iVar7 + 1;
      bVar3 = *(byte *)((int)PTR_00811924 + PTR_0085755c[iVar7] * 4 + 1);
    }
    switch(DAT_00811954) {
    case 7:
      DAT_007d2d18 = 0x11;
      if (iVar7 != DAT_00857558) {
LAB_00673e50:
        bVar5 = DAT_00811914 < iVar7;
        DAT_00811914 = iVar7;
        if ((bVar5) && ((DAT_007d2d24 & 4) == 0)) {
          DAT_0081190c = iVar7 + -1;
        }
        goto LAB_00673e66;
      }
      DAT_00811914 = iVar7 + 1;
      break;
    default:
      if (iVar7 != DAT_00857558) goto LAB_00673e50;
      DAT_00811914 = iVar7 + 1;
      DAT_00811954 = 0x11;
      goto LAB_00674464;
    case 0x11:
      DAT_007d2d18 = 0x11;
      bVar5 = iVar7 <= DAT_00811914;
      DAT_00811914 = iVar7;
      if (bVar5) goto LAB_00673e7d;
      break;
    case 0x12:
      DAT_007d2d24 = DAT_007d2d24 & 0xfffffff7;
      DAT_007d2d18 = 0x11;
      DAT_00811914 = DAT_00857558;
      break;
    case 0x1d:
      if (iVar7 != DAT_00857558) {
        DAT_007d2d18 = 0x11;
        goto LAB_00673e50;
      }
      DAT_00811914 = iVar7 + 1;
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
    if (*(int *)(puVar12 + 2) == 0x1b) {
      DAT_007d2d18 = 0x1b;
LAB_006743cd:
      uVar11 = DAT_007d2d24 & 0xfffffff7;
      uVar10 = DAT_007d2d24 & 4;
      DAT_007d2d24 = uVar11;
      if (uVar10 == 0) {
        DAT_00811954 = 0x1d;
        goto cf_continue_loop_006743FF;
      }
      goto cf_break_loop_006744A4;
    }
LAB_0067433f:
    if ((DAT_007d2d24 & 4) != 0) goto cf_break_loop_006744A4;
  }
  else {
    DAT_007d2d18 = *(int *)(puVar12 + 2);
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
      uVar11 = DAT_007d2d24 | 8;
      uVar10 = DAT_007d2d24 & 4;
      DAT_007d2d24 = uVar11;
      if (uVar10 == 0) goto cf_continue_loop_006743FF;
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
    *PTR_00857528 = '\n';
    PTR_00857528[1] = '\0';
    goto cf_common_exit_00674540;
  }
cf_break_loop_006744A4:
  if (!bVar6) goto cf_common_exit_00674540;
LAB_006744b5:
  cVar8 = PTR_0085755c[DAT_00811914];
  PTR_0085755c[DAT_00811914] = '\0';
  if ((DAT_007d2d24 & 0x100) == 0) {
    FUN_006b77e0(PTR_00857528,(byte *)(PTR_0085755c + DAT_0081190c));
    goto cf_common_exit_00674521;
  }
  if ((PTR_00857528 == nullptr) || (PTR_0085755c + DAT_0081190c == nullptr))
  goto cf_common_exit_00674521;
  uVar10 = 0xffffffff;
  pcVar15 = PTR_0085755c + DAT_0081190c;
  goto code_r0x006744e7;
  while( true ) {
    uVar10 = uVar10 - 1;
    pcVar16 = pcVar15 + 1;
    cVar2 = *pcVar15;
    pcVar15 = pcVar16;
    if (cVar2 == '\0') break;
code_r0x006744e7:
    pcVar16 = pcVar15;
    if (uVar10 == 0) break;
  }
  uVar10 = ~uVar10;
  pcVar15 = pcVar16 + -uVar10;
  pbVar17_mg2 = PTR_00857528;
  memmove(pbVar17_mg2, pcVar15, uVar10); /* compiler REP MOVS byte copy */
cf_common_exit_00674521:
  PTR_00857528[DAT_00811914 - DAT_0081190c] = '\0';
  PTR_0085755c[DAT_00811914] = cVar8;
cf_common_exit_00674540:
  if (local_14 == 0) {
    local_14 = DAT_007d2d18;
  }
  DAT_00857540 = DAT_00857540 + 1;
  return local_14;
}

