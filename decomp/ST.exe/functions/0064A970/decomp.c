
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_0064a970(char *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  float fVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  undefined4 unaff_ESI;
  float *pfVar14;
  void *unaff_EDI;
  float *pfVar15;
  bool bVar16;
  float10 fVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 local_c0;
  undefined4 local_bc [16];
  undefined4 local_7c;
  char *local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  float local_34;
  int local_30;
  int local_2c;
  char *local_28;
  float local_24;
  float local_20;
  undefined4 *local_1c;
  byte *local_18;
  float local_14;
  char *local_10;
  int *local_c;
  float *local_8;
  
  local_8 = (float *)0x0;
  local_1c = (undefined4 *)0x0;
  local_c0 = DAT_00858df8;
  DAT_00858df8 = &local_c0;
  iVar5 = __setjmp3(local_bc,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_c0;
    if (local_1c != (undefined4 *)0x0) {
      FUN_006ab060(&local_1c);
    }
    if (local_8 != (float *)0x0) {
      FUN_006ab060(&local_8);
    }
    if (0 < iVar5) {
      iVar5 = -0x6b;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar5;
    }
    return (float *)0x0;
  }
  _strncpy((char *)(local_38 + 1),&DAT_008016a0,0x7f);
  local_38[0x21] = -1;
  cVar3 = *param_1;
  pcVar11 = param_1;
  for (iVar5 = 0; (cVar3 != '\a' && (iVar5 < param_2)); iVar5 = iVar5 + 1) {
    cVar3 = pcVar11[5];
    pcVar11 = pcVar11 + 5;
  }
  if (iVar5 != param_2) {
    FUN_006a5e40(-0x69,DAT_007ed77c,0x7d2a04,0x81);
  }
  local_10 = param_1 + param_2 * 5;
  if (*(short *)(param_1 + param_2 * 5 + 3) != param_2) {
    FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x82);
  }
  iVar5 = (int)*(short *)(local_10 + 1);
  if (iVar5 < 0x3e) {
    if (iVar5 == 0x3d) {
switchD_0064aa67_caseD_1:
      if (param_2 != 2) {
        FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x8a);
      }
      sVar4 = *(short *)(local_10 + 1);
      if ((sVar4 == 1) && ((*param_1 == '\x06' || (*param_1 == '\x03')))) {
        if ((param_1[5] == '\x06') || (param_1[5] == '\x03')) {
          pcVar11 = (char *)(**(code **)(*local_38 + 8))(param_1);
          pbVar7 = (byte *)(**(code **)(*local_38 + 8))(param_1 + 5);
          local_18 = pbVar7;
          if ((pcVar11 == (char *)0x0) || (pbVar7 == (byte *)0x0)) {
            FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x8e);
          }
          uVar12 = 0xffffffff;
          pbVar6 = pbVar7;
          do {
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            bVar2 = *pbVar6;
            pbVar6 = pbVar6 + 1;
          } while (bVar2 != 0);
          uVar13 = 0xffffffff;
          pcVar10 = pcVar11;
          do {
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            cVar3 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar3 != '\0');
          local_8 = (float *)FUN_006aac10(~uVar12 + ~uVar13 + 2);
          if ((local_8 != (float *)0x0) && (pcVar11 != (char *)0x0)) {
            uVar12 = 0xffffffff;
            do {
              pcVar10 = pcVar11;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar10 = pcVar11 + 1;
              cVar3 = *pcVar11;
              pcVar11 = pcVar10;
            } while (cVar3 != '\0');
            uVar12 = ~uVar12;
            pfVar14 = (float *)(pcVar10 + -uVar12);
            pfVar15 = local_8;
            for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *pfVar15 = *pfVar14;
              pfVar14 = pfVar14 + 1;
              pfVar15 = pfVar15 + 1;
            }
            for (uVar12 = uVar12 & 3; pbVar7 = local_18, uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined1 *)pfVar15 = *(undefined1 *)pfVar14;
              pfVar14 = (float *)((int)pfVar14 + 1);
              pfVar15 = (float *)((int)pfVar15 + 1);
            }
          }
          uVar12 = 0xffffffff;
          do {
            pbVar6 = pbVar7;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pbVar6 = pbVar7 + 1;
            bVar2 = *pbVar7;
            pbVar7 = pbVar6;
          } while (bVar2 != 0);
          uVar12 = ~uVar12;
          iVar5 = -1;
          pfVar14 = local_8;
          do {
            pfVar15 = pfVar14;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pfVar15 = (float *)((int)pfVar14 + 1);
            cVar3 = *(char *)pfVar14;
            pfVar14 = pfVar15;
          } while (cVar3 != '\0');
          pbVar7 = pbVar6 + -uVar12;
          pbVar6 = (byte *)((int)pfVar15 + -1);
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pbVar6 = *(undefined4 *)pbVar7;
            pbVar7 = pbVar7 + 4;
            pbVar6 = pbVar6 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pbVar6 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            pbVar6 = pbVar6 + 1;
          }
LAB_0064bbb1:
          if (param_3 == (int *)0x0) {
            DAT_00858df8 = (undefined4 *)local_c0;
            return local_8;
          }
          *param_3 = 3;
          DAT_00858df8 = (undefined4 *)local_c0;
          return local_8;
        }
      }
      switch(*param_1) {
      case '\x01':
      case '\x04':
        cVar3 = param_1[5];
        if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
          iVar5 = (**(code **)*local_38)(param_1);
          iVar8 = (**(code **)*local_38)(param_1 + 5);
          local_8 = (float *)FUN_006aac10(4);
          switch(*(undefined2 *)(local_10 + 1)) {
          case 1:
            *local_8 = (float)(iVar8 + iVar5);
            break;
          default:
            uVar19 = 0xa1;
            goto LAB_0064b368;
          case 0x16:
            if (iVar8 == 0) {
              FUN_006a5e40(-0x67,DAT_007ed77c,0x7d2a04,0x9f);
            }
            *local_8 = (float)(iVar5 / iVar8);
            break;
          case 0x2c:
            if (iVar8 == 0) {
              FUN_006a5e40(-0x67,DAT_007ed77c,0x7d2a04,0xa0);
            }
            *local_8 = (float)(iVar5 % iVar8);
            break;
          case 0x30:
            *local_8 = (float)(iVar8 * iVar5);
            break;
          case 0x3d:
            *local_8 = (float)(iVar5 - iVar8);
          }
          goto LAB_0064b36f;
        }
        if ((cVar3 != '\x05') && (cVar3 != '\x02')) {
          pcVar11 = thunk_FUN_00674af0((int)sVar4);
          if (pcVar11 != (char *)0x0) {
            _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
            local_38[0x21] = -1;
            iVar5 = -0x76;
            goto LAB_0064c2a4;
          }
          goto LAB_0064b714;
        }
        local_18 = (byte *)(**(code **)*local_38)(param_1);
        local_c = (int *)(float)(int)local_18;
        fVar17 = (float10)(**(code **)(*local_38 + 4))(param_1 + 5);
        local_14 = (float)fVar17;
        local_8 = (float *)FUN_006aac10(4);
        switch((int)*(short *)(local_10 + 1)) {
        case 1:
          *local_8 = local_14 + (float)local_c;
          break;
        default:
          pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
          goto joined_r0x0064b49a;
        case 0x16:
          if (local_14 == (float)_DAT_0079d670) {
            FUN_006a5e40(-0x67,DAT_007ed77c,0x7d2a04,0xad);
          }
          *local_8 = (float)local_c / local_14;
          break;
        case 0x30:
          *local_8 = local_14 * (float)local_c;
          break;
        case 0x3d:
          *local_8 = (float)local_c - local_14;
        }
        break;
      case '\x02':
      case '\x05':
        cVar3 = param_1[5];
        if ((cVar3 != '\x04') && (cVar3 != '\x01')) {
          if ((cVar3 != '\x05') && (cVar3 != '\x02')) {
            pcVar11 = thunk_FUN_00674af0((int)sVar4);
            if (pcVar11 != (char *)0x0) {
              _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
              local_38[0x21] = -1;
              iVar5 = -0x76;
              goto LAB_0064c2a4;
            }
            goto LAB_0064b714;
          }
          fVar17 = (float10)(**(code **)(*local_38 + 4))(param_1);
          local_c = (int *)(float)fVar17;
          fVar17 = (float10)(**(code **)(*local_38 + 4))(param_1 + 5);
          local_14 = (float)fVar17;
          local_8 = (float *)FUN_006aac10(4);
          iVar5 = (int)*(short *)(local_10 + 1);
          switch(iVar5) {
          case 1:
            *local_8 = local_14 + (float)local_c;
            break;
          default:
            goto switchD_0064b42d_caseD_2;
          case 0x16:
            if (local_14 == (float)_DAT_0079d670) {
              FUN_006a5e40(-0x67,DAT_007ed77c,0x7d2a04,0xcd);
            }
            *local_8 = (float)local_c / local_14;
            break;
          case 0x30:
            *local_8 = local_14 * (float)local_c;
            break;
          case 0x3d:
            *local_8 = (float)local_c - local_14;
          }
          break;
        }
        fVar17 = (float10)(**(code **)(*local_38 + 4))(param_1);
        local_c = (int *)(float)fVar17;
        local_18 = (byte *)(**(code **)*local_38)(param_1 + 5);
        local_14 = (float)(int)local_18;
        local_8 = (float *)FUN_006aac10(4);
        iVar5 = (int)*(short *)(local_10 + 1);
        switch(iVar5) {
        case 1:
          *local_8 = local_14 + (float)local_c;
          break;
        default:
switchD_0064b42d_caseD_2:
          pcVar11 = thunk_FUN_00674af0(iVar5);
joined_r0x0064b49a:
          if (pcVar11 != (char *)0x0) {
            _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
          }
          local_38[0x21] = -1;
          FUN_006a5e40(-0x76,DAT_007ed77c,0x7d2a24,0x79);
          break;
        case 0x16:
          if (local_14 == (float)_DAT_0079d670) {
            FUN_006a5e40(-0x67,DAT_007ed77c,0x7d2a04,0xc0);
          }
          *local_8 = (float)local_c / local_14;
          break;
        case 0x30:
          *local_8 = local_14 * (float)local_c;
          break;
        case 0x3d:
          *local_8 = (float)local_c - local_14;
        }
        break;
      default:
        pcVar11 = thunk_FUN_00674af0((int)sVar4);
        if (pcVar11 != (char *)0x0) {
          _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
          local_38[0x21] = -1;
          iVar5 = -0x76;
          goto LAB_0064c2a4;
        }
        goto LAB_0064b80a;
      }
LAB_0064b291:
      if (param_3 == (int *)0x0) {
        DAT_00858df8 = (undefined4 *)local_c0;
        return local_8;
      }
      *param_3 = 2;
      DAT_00858df8 = (undefined4 *)local_c0;
      return local_8;
    }
    switch(iVar5) {
    case 1:
    case 0x16:
    case 0x2c:
    case 0x30:
      goto switchD_0064aa67_caseD_1;
    default:
      goto switchD_0064aa67_caseD_2;
    case 3:
    case 0x34:
switchD_0064aa67_caseD_3:
      if (param_2 != 2) {
        FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x131);
      }
      if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
        if ((param_1[5] == '\x04') || (param_1[5] == '\x01')) {
          iVar5 = (**(code **)*local_38)(param_1);
          iVar8 = (**(code **)*local_38)(param_1 + 5);
          local_8 = (float *)FUN_006aac10(4);
          sVar4 = *(short *)(local_10 + 1);
          if (sVar4 == 3) {
            if ((iVar5 != 0) && (iVar8 != 0)) {
              *local_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
          }
          else {
            if (sVar4 == 0x34) {
              if (iVar5 == 0) {
joined_r0x0064b781:
                if (iVar8 == 0) goto LAB_0064b79f;
              }
LAB_0064b78b:
              *local_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
            if (sVar4 != 0x43) {
              uVar19 = 0x139;
              goto LAB_0064b368;
            }
            if (iVar5 == 0) goto joined_r0x0064b781;
            if (iVar8 == 0) goto LAB_0064b78b;
          }
          goto LAB_0064b79f;
        }
      }
      pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
      if (pcVar11 != (char *)0x0) {
        _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
      }
LAB_0064b714:
      local_38[0x21] = -1;
      iVar5 = -0x76;
      goto LAB_0064c2a4;
    case 8:
    case 10:
    case 0xb:
      if (param_2 != 2) {
        FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x152);
      }
      if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
LAB_0064ae25:
        pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
        if (pcVar11 != (char *)0x0) {
          _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
        }
        local_38[0x21] = -1;
        iVar5 = -0x76;
        goto LAB_0064c2a4;
      }
      if ((param_1[5] != '\x04') && (param_1[5] != '\x01')) goto LAB_0064ae25;
      uVar12 = (**(code **)*local_38)(param_1);
      uVar13 = (**(code **)*local_38)(param_1 + 5);
      local_8 = (float *)FUN_006aac10(4);
      sVar4 = *(short *)(local_10 + 1);
      if (sVar4 == 8) {
        *local_8 = (float)(uVar13 & uVar12);
        goto LAB_0064b36f;
      }
      if (sVar4 == 10) {
        *local_8 = (float)(uVar13 | uVar12);
        goto LAB_0064b36f;
      }
      if (sVar4 == 0xb) {
        *local_8 = (float)(uVar13 ^ uVar12);
        goto LAB_0064b36f;
      }
      uVar19 = 0x15a;
LAB_0064b368:
      FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,uVar19);
      goto LAB_0064b36f;
    case 9:
      if (param_2 != 1) {
        FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x164);
      }
      if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
        local_8 = (float *)FUN_006aac10(4);
        uVar12 = (**(code **)*local_38)(param_1);
        *local_8 = (float)~uVar12;
        goto LAB_0064b36f;
      }
      break;
    case 0x13:
      if (param_2 != 3) {
        FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x171);
      }
      if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
        iVar5 = (**(code **)*local_38)(param_1);
        iVar5 = 2 - (uint)(iVar5 != 0);
        pcVar11 = param_1 + iVar5 * 5;
        cVar3 = param_1[iVar5 * 5];
        if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
          local_8 = (float *)FUN_006aac10(4);
          fVar9 = (float)(**(code **)*local_38)(pcVar11);
          *local_8 = fVar9;
          goto LAB_0064b36f;
        }
        if ((cVar3 == '\x05') || (cVar3 == '\x02')) {
          local_8 = (float *)FUN_006aac10(4);
          fVar17 = (float10)(**(code **)(*local_38 + 4))(pcVar11);
          *local_8 = (float)fVar17;
          goto LAB_0064b291;
        }
        if ((cVar3 == '\x06') || (cVar3 == '\x03')) {
          pcVar11 = (char *)(**(code **)(*local_38 + 8))(pcVar11);
          if (pcVar11 == (char *)0x0) {
            FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x182);
          }
          uVar12 = 0xffffffff;
          pcVar10 = pcVar11;
          do {
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            cVar3 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar3 != '\0');
          local_8 = (float *)FUN_006aac10(~uVar12 + 1);
          uVar12 = 0xffffffff;
          do {
            pcVar10 = pcVar11;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar10 = pcVar11 + 1;
            cVar3 = *pcVar11;
            pcVar11 = pcVar10;
          } while (cVar3 != '\0');
          uVar12 = ~uVar12;
          pfVar14 = (float *)(pcVar10 + -uVar12);
          pfVar15 = local_8;
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pfVar15 = *pfVar14;
            pfVar14 = pfVar14 + 1;
            pfVar15 = pfVar15 + 1;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined1 *)pfVar15 = *(undefined1 *)pfVar14;
            pfVar14 = (float *)((int)pfVar14 + 1);
            pfVar15 = (float *)((int)pfVar15 + 1);
          }
          goto LAB_0064bbb1;
        }
      }
      pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
      if (pcVar11 != (char *)0x0) {
        _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
      }
      local_38[0x21] = -1;
      iVar5 = -0x76;
      goto LAB_0064c2a4;
    case 0x1e:
    case 0x27:
    case 0x28:
    case 0x2e:
    case 0x2f:
    case 0x33:
      if (param_2 != 2) {
        FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0xf8);
      }
      cVar3 = *param_1;
      if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
        if ((param_1[5] == '\x04') || (param_1[5] == '\x01')) {
          iVar5 = (**(code **)*local_38)(param_1);
          iVar8 = (**(code **)*local_38)(param_1 + 5);
          local_8 = (float *)FUN_006aac10(4);
          switch(*(undefined2 *)(local_10 + 1)) {
          case 0x1e:
            *local_8 = (float)(uint)(iVar5 == iVar8);
            break;
          default:
            uVar19 = 0x104;
            goto LAB_0064b368;
          case 0x27:
            *local_8 = (float)(uint)(iVar5 < iVar8);
            break;
          case 0x28:
            *local_8 = (float)(uint)(iVar5 <= iVar8);
            break;
          case 0x2e:
            *local_8 = (float)(uint)(iVar8 < iVar5);
            break;
          case 0x2f:
            *local_8 = (float)(uint)(iVar8 <= iVar5);
            break;
          case 0x33:
            *local_8 = (float)(uint)(iVar5 != iVar8);
          }
          goto LAB_0064b36f;
        }
      }
      if ((cVar3 == '\x05') || (cVar3 == '\x02')) {
        if ((param_1[5] == '\x05') || (param_1[5] == '\x02')) {
          fVar17 = (float10)(**(code **)(*local_38 + 4))(param_1);
          local_20 = (float)fVar17;
          fVar17 = (float10)(**(code **)(*local_38 + 4))(param_1 + 5);
          local_24 = (float)fVar17;
          local_8 = (float *)FUN_006aac10(4);
          switch(*(undefined2 *)(local_10 + 1)) {
          case 0x1e:
            if (local_20 == local_24) {
              *local_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
            break;
          default:
            uVar19 = 0x114;
            goto LAB_0064b368;
          case 0x27:
            if (local_20 < local_24) {
              *local_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
            break;
          case 0x28:
            if (local_20 <= local_24) {
              *local_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
            break;
          case 0x2e:
            if (local_24 < local_20) {
              *local_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
            break;
          case 0x2f:
            if (local_24 <= local_20) {
              *local_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
            break;
          case 0x33:
            if (local_20 != local_24) {
              *local_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
          }
          *local_8 = 0.0;
          goto LAB_0064b36f;
        }
      }
      if ((cVar3 == '\x06') || (cVar3 == '\x03')) {
        if ((param_1[5] == '\x06') || (param_1[5] == '\x03')) {
          pbVar7 = (byte *)(**(code **)(*local_38 + 8))(param_1);
          pbVar6 = (byte *)(**(code **)(*local_38 + 8))(param_1 + 5);
          if ((pbVar7 == (byte *)0x0) || (pbVar6 == (byte *)0x0)) {
            FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x11c);
          }
          local_8 = (float *)FUN_006aac10(4);
          do {
            bVar2 = *pbVar7;
            bVar16 = bVar2 < *pbVar6;
            if (bVar2 != *pbVar6) {
LAB_0064ab54:
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_0064ab59;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar7[1];
            bVar16 = bVar2 < pbVar6[1];
            if (bVar2 != pbVar6[1]) goto LAB_0064ab54;
            pbVar7 = pbVar7 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar2 != 0);
          iVar5 = 0;
LAB_0064ab59:
          switch(*(undefined2 *)(local_10 + 1)) {
          case 0x1e:
            *local_8 = (float)(uint)(iVar5 == 0);
            break;
          default:
            uVar19 = 0x126;
            goto LAB_0064b368;
          case 0x27:
            *local_8 = (float)(uint)(iVar5 < 0);
            break;
          case 0x28:
            *local_8 = (float)(uint)(iVar5 < 1);
            break;
          case 0x2e:
            *local_8 = (float)(uint)(0 < iVar5);
            break;
          case 0x2f:
            *local_8 = (float)(uint)(-1 < iVar5);
            break;
          case 0x33:
            *local_8 = (float)(uint)(iVar5 != 0);
          }
          goto LAB_0064b36f;
        }
      }
      break;
    case 0x32:
      if (param_2 != 1) {
        FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x143);
      }
      if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
        pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
        if (pcVar11 != (char *)0x0) {
          _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
        }
        local_38[0x21] = -1;
        iVar5 = -0x76;
        goto LAB_0064c2a4;
      }
      local_8 = (float *)FUN_006aac10(4);
      iVar5 = (**(code **)*local_38)(param_1);
      *local_8 = (float)(uint)(iVar5 == 0);
      goto LAB_0064b36f;
    }
LAB_0064b7ea:
    pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
    if (pcVar11 != (char *)0x0) {
      _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
    }
LAB_0064b80a:
    local_38[0x21] = -1;
    iVar5 = -0x76;
    goto LAB_0064c2a4;
  }
  if (iVar5 < 0x38a) {
    if (iVar5 != 0x389) {
      if (0x385 < iVar5) {
        if (iVar5 == 0x386) {
          if (param_2 != 1) {
            FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,399);
          }
          if ((*param_1 == '\x06') || (*param_1 == '\x03')) {
            pbVar7 = (byte *)(**(code **)(*local_38 + 8))(param_1);
            if (pbVar7 == (byte *)0x0) {
              FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x192);
            }
            local_8 = (float *)FUN_006aac10(4);
            fVar9 = (float)FUN_0072ff00(pbVar7);
            *local_8 = fVar9;
            goto LAB_0064b36f;
          }
        }
        else {
          if (iVar5 == 0x387) {
            if (param_2 != 1) {
              FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x19d);
            }
            if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
              pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
              if (pcVar11 != (char *)0x0) {
                _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
              }
              local_38[0x21] = -1;
              iVar5 = -0x78;
              goto LAB_0064c2a4;
            }
            pbVar7 = (byte *)(**(code **)(*local_38 + 8))(param_1);
            if (pbVar7 == (byte *)0x0) {
              FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x1a0);
            }
            local_18 = (byte *)0x0;
            local_8 = (float *)FUN_006aac10(4);
            fVar17 = FUN_00730310(pbVar7,(int *)&local_18);
            *local_8 = (float)fVar17;
            goto LAB_0064b291;
          }
          if (iVar5 != 0x388) goto switchD_0064aa67_caseD_2;
          if (param_2 != 2) {
            FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x1ac);
          }
          if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
            if ((param_1[5] == '\x04') || (param_1[5] == '\x01')) {
              iVar5 = (**(code **)*local_38)(param_1);
              iVar8 = (**(code **)*local_38)(param_1 + 5);
              if (iVar8 < 2) {
                iVar8 = 2;
              }
              if (0x24 < iVar8) {
                iVar8 = 0x24;
              }
              local_8 = (float *)FUN_006aac10(0x40);
              __itoa(iVar5,(char *)local_8,iVar8);
              goto LAB_0064bbb1;
            }
          }
        }
        pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
        if (pcVar11 != (char *)0x0) {
          _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
        }
        local_38[0x21] = -1;
        iVar5 = -0x78;
        goto LAB_0064c2a4;
      }
      if (iVar5 == 0x385) {
        if (param_2 < 1) {
          FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x206);
        }
        local_28 = (char *)0x0;
        iVar5 = param_2;
        if (0 < param_2) {
          do {
            cVar3 = *param_1;
            local_c = (int *)0x0;
            if (cVar3 == '\x04') {
LAB_0064b8f1:
              local_18 = (byte *)(**(code **)*local_38)(param_1);
              local_c = (int *)(float)(int)local_18;
LAB_0064b901:
              if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
                fVar17 = (float10)(**(code **)(*local_38 + 4))(param_1);
                local_c = (int *)(float)fVar17;
              }
            }
            else {
              if (((cVar3 == '\x01') || (cVar3 == '\x05')) || (cVar3 == '\x02')) {
                if ((cVar3 == '\x04') || (cVar3 == '\x01')) goto LAB_0064b8f1;
                goto LAB_0064b901;
              }
              pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
              if (pcVar11 != (char *)0x0) {
                _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
              }
              local_38[0x21] = -1;
              FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
            }
            local_28 = (char *)((float)local_c + (float)local_28);
            param_1 = param_1 + 5;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_8 = (float *)FUN_006aac10(4);
        *local_8 = (float)local_28 / (float)param_2;
        goto LAB_0064b291;
      }
      if (iVar5 == 0x41) {
        if (param_2 != 1) {
          FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0xdf);
        }
        cVar3 = *param_1;
        if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
          local_8 = (float *)FUN_006aac10(4);
          iVar5 = (**(code **)*local_38)(param_1);
          *local_8 = (float)-iVar5;
          goto LAB_0064b36f;
        }
        if ((cVar3 == '\x05') || (cVar3 == '\x02')) {
          local_8 = (float *)FUN_006aac10(4);
          fVar17 = (float10)(**(code **)(*local_38 + 4))(param_1);
          *local_8 = (float)-fVar17;
          goto LAB_0064b36f;
        }
        goto LAB_0064b7ea;
      }
      if (iVar5 == 0x43) goto switchD_0064aa67_caseD_3;
      if (iVar5 == 900) {
        if (param_2 < 1) {
          FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,500);
        }
        local_28 = (char *)0x0;
        if (0 < param_2) {
          local_14 = (float)param_2;
          do {
            cVar3 = *param_1;
            local_c = (int *)0x0;
            if (cVar3 == '\x04') {
LAB_0064b659:
              local_c = (int *)(**(code **)*local_38)(param_1);
LAB_0064b663:
              if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
                fVar17 = (float10)(**(code **)(*local_38 + 4))(param_1);
                FUN_00730450(SUB84((double)fVar17,0),(uint)((ulonglong)(double)fVar17 >> 0x20));
                lVar18 = __ftol();
                local_c = (int *)lVar18;
              }
            }
            else {
              if (((cVar3 == '\x01') || (cVar3 == '\x05')) || (cVar3 == '\x02')) {
                if ((cVar3 == '\x04') || (cVar3 == '\x01')) goto LAB_0064b659;
                goto LAB_0064b663;
              }
              pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
              if (pcVar11 != (char *)0x0) {
                _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
              }
              local_38[0x21] = -1;
              FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
            }
            local_28 = local_28 + (int)local_c;
            param_1 = param_1 + 5;
            local_14 = (float)((int)local_14 + -1);
          } while (local_14 != 0.0);
        }
        local_8 = (float *)FUN_006aac10(4);
        *local_8 = (float)((int)local_28 / param_2);
        goto LAB_0064b36f;
      }
      goto switchD_0064aa67_caseD_2;
    }
    if (param_2 != 2) {
      FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x1bb);
    }
    if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
      if ((param_1[5] == '\x04') || (param_1[5] == '\x01')) {
        fVar17 = (float10)(**(code **)(*local_38 + 4))(param_1);
        local_18 = (byte *)(float)fVar17;
        iVar5 = (**(code **)*local_38)(param_1 + 5);
        if (iVar5 < 2) {
          iVar5 = 2;
        }
        if (0x40 < iVar5) {
          iVar5 = 0x40;
        }
        local_8 = (float *)FUN_006aac10(iVar5 + 10);
        FUN_007301e0(SUB84((double)(float)local_18,0),
                     (int)((ulonglong)(double)(float)local_18 >> 0x20),iVar5,(char *)local_8);
        goto LAB_0064bbb1;
      }
    }
LAB_0064bd33:
    pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
    if (pcVar11 != (char *)0x0) {
      _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
    }
    local_38[0x21] = -1;
    iVar5 = -0x78;
    goto LAB_0064c2a4;
  }
  switch(iVar5) {
  case 0x38a:
    if (param_2 != 1) {
      FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x1ca);
    }
    if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
      local_18 = (byte *)(**(code **)*local_38)(param_1);
      local_8 = (float *)FUN_006aac10(4);
      *local_8 = (float)(int)local_18;
      goto LAB_0064b291;
    }
    pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
    if (pcVar11 != (char *)0x0) {
      _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
    }
    local_38[0x21] = -1;
    iVar5 = -0x78;
    break;
  case 0x38b:
    if (param_2 != 1) {
      FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x1d8);
    }
    if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
      fVar17 = (float10)(**(code **)(*local_38 + 4))(param_1);
      local_18 = (byte *)(float)fVar17;
      local_8 = (float *)FUN_006aac10(4);
      FUN_0072e150(SUB84((double)(float)local_18,0),
                   (uint)((ulonglong)(double)(float)local_18 >> 0x20));
      lVar18 = __ftol();
      *local_8 = (float)lVar18;
      goto LAB_0064b36f;
    }
    pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
    if (pcVar11 != (char *)0x0) {
      _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
    }
    local_38[0x21] = -1;
    iVar5 = -0x78;
    break;
  case 0x38c:
    if (param_2 != 1) {
      FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x1e6);
    }
    if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
      fVar17 = (float10)(**(code **)(*local_38 + 4))(param_1);
      local_18 = (byte *)(float)fVar17;
      local_8 = (float *)FUN_006aac10(4);
      FUN_00730450(SUB84((double)(float)local_18,0),
                   (uint)((ulonglong)(double)(float)local_18 >> 0x20));
      lVar18 = __ftol();
      *local_8 = (float)lVar18;
      goto LAB_0064b36f;
    }
    goto LAB_0064bd33;
  case 0x38d:
    if (param_2 < 2) {
      FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x218);
    }
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
      if (pcVar11 != (char *)0x0) {
        _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
      }
      local_38[0x21] = -1;
      FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
    }
    local_18 = (byte *)(**(code **)(*local_38 + 8))(param_1);
    if (local_18 == (byte *)0x0) {
      FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x21a);
    }
    uVar12 = 0xffffffff;
    pbVar7 = local_18;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
    local_20 = (float)(~uVar12 + 1);
    local_14 = 0.0;
    local_28 = (char *)0x200;
    local_1c = (undefined4 *)FUN_006aac70(0x200);
    if (1 < param_2) {
      local_c = (int *)(param_1 + 5);
      local_30 = param_2 + -1;
      local_2c = 4;
      local_24 = 1.12104e-44;
      pcVar11 = local_28;
      do {
        cVar3 = (char)*local_c;
        if ((cVar3 == '\x06') || (cVar3 == '\x03')) {
          pcVar10 = (char *)(**(code **)(*local_38 + 8))(local_c);
          local_78 = pcVar10;
          if (pcVar10 == (char *)0x0) {
            FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x220);
          }
          if ((int)pcVar11 <= local_2c) {
            local_28 = (char *)((int)pcVar11 + 0x200);
            local_1c = (undefined4 *)FUN_006acf50(local_1c,(uint)local_28);
          }
          puVar1 = (undefined4 *)((int)local_14 + (int)local_1c);
          local_14 = (float)((int)local_14 + 4);
          local_2c = local_2c + 4;
          local_24 = (float)((int)local_24 + 4);
          uVar12 = 0xffffffff;
          *puVar1 = pcVar10;
          do {
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            cVar3 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar3 != '\0');
          local_20 = (float)((int)local_20 + ~uVar12 + 1);
          pcVar11 = local_28;
        }
        else if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
          uVar19 = (**(code **)*local_38)(local_c);
          local_7c = uVar19;
          if ((int)pcVar11 <= local_2c) {
            pcVar11 = (char *)((int)pcVar11 + 0x200);
            local_28 = pcVar11;
            local_1c = (undefined4 *)FUN_006acf50(local_1c,(uint)pcVar11);
          }
          puVar1 = (undefined4 *)((int)local_14 + (int)local_1c);
          local_14 = (float)((int)local_14 + 4);
          *puVar1 = uVar19;
          local_24 = (float)((int)local_24 + 4);
          local_2c = local_2c + 4;
          local_20 = (float)((int)local_20 + 0xc);
        }
        else if ((cVar3 == '\x05') || (cVar3 == '\x02')) {
          fVar17 = (float10)(**(code **)(*local_38 + 4))(local_c);
          local_34 = (float)fVar17;
          if ((int)pcVar11 <= (int)local_24) {
            pcVar11 = (char *)((int)pcVar11 + 0x200);
            local_28 = pcVar11;
            local_1c = (undefined4 *)FUN_006acf50(local_1c,(uint)pcVar11);
          }
          *(double *)((int)local_14 + (int)local_1c) = (double)local_34;
          local_14 = (float)((int)local_14 + 8);
          local_24 = (float)((int)local_24 + 8);
          local_2c = local_2c + 8;
          local_20 = (float)((int)local_20 + 0x20);
        }
        else {
          pcVar10 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
          if (pcVar10 != (char *)0x0) {
            _strncpy((char *)(local_38 + 1),pcVar10,0x7f);
          }
          local_38[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        local_c = (int *)((int)local_c + 5);
        local_30 = local_30 + -1;
      } while (local_30 != 0);
    }
    fVar9 = local_20;
    local_8 = (float *)FUN_006aac10((uint)local_20);
    FUN_007300e0((undefined1 *)local_8,(int)fVar9,local_18,local_1c);
    if (param_3 != (int *)0x0) {
      *param_3 = 3;
    }
    if (local_1c == (undefined4 *)0x0) {
      DAT_00858df8 = (undefined4 *)local_c0;
      return local_8;
    }
    FUN_006ab060(&local_1c);
    DAT_00858df8 = (undefined4 *)local_c0;
    return local_8;
  case 0x38e:
    if (param_2 != 9) {
      FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x24f);
    }
    if (0 < param_2) {
      local_c = &local_74;
      do {
        if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
          iVar5 = (**(code **)*local_38)(param_1);
          *local_c = iVar5;
        }
        else {
          pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
          if (pcVar11 != (char *)0x0) {
            _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
          }
          local_38[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        param_1 = param_1 + 5;
        local_c = local_c + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    local_8 = (float *)FUN_006aac10(4);
    if (((local_68 <= local_74) && (local_74 < local_5c + local_68)) &&
       ((local_64 <= local_70 &&
        (((local_70 < local_58 + local_64 && (local_60 <= local_6c)) &&
         (local_6c < local_54 + local_60)))))) {
      *local_8 = 1.4013e-45;
      goto LAB_0064b36f;
    }
    goto LAB_0064b79f;
  case 0x38f:
    if (param_2 != 6) {
      FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d2a04,0x240);
    }
    if (0 < param_2) {
      local_c = &local_50;
      do {
        if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
          iVar5 = (**(code **)*local_38)(param_1);
          *local_c = iVar5;
        }
        else {
          pcVar11 = thunk_FUN_00674af0((int)*(short *)(local_10 + 1));
          if (pcVar11 != (char *)0x0) {
            _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
          }
          local_38[0x21] = -1;
          FUN_006a5e40(-0x78,DAT_007ed77c,0x7d2a24,0x79);
        }
        param_1 = param_1 + 5;
        local_c = local_c + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    local_8 = (float *)FUN_006aac10(4);
    if ((((local_48 <= local_50) && (local_50 < local_40 + local_48)) && (local_44 <= local_4c)) &&
       (local_4c < local_3c + local_44)) {
      *local_8 = 1.4013e-45;
      goto LAB_0064b36f;
    }
LAB_0064b79f:
    *local_8 = 0.0;
LAB_0064b36f:
    if (param_3 == (int *)0x0) {
      DAT_00858df8 = (undefined4 *)local_c0;
      return local_8;
    }
    *param_3 = 1;
    DAT_00858df8 = (undefined4 *)local_c0;
    return local_8;
  default:
switchD_0064aa67_caseD_2:
    pcVar11 = thunk_FUN_00674af0(iVar5);
    if (pcVar11 != (char *)0x0) {
      _strncpy((char *)(local_38 + 1),pcVar11,0x7f);
    }
    local_38[0x21] = -1;
    iVar5 = -0x75;
  }
LAB_0064c2a4:
  FUN_006a5e40(iVar5,DAT_007ed77c,0x7d2a24,0x79);
  DAT_00858df8 = (undefined4 *)local_c0;
  return local_8;
}

