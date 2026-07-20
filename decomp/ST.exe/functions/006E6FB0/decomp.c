
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006e6fb0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  longlong lVar14;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  undefined1 *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)((int)this + 0xa8) < 4) && (*(int *)((int)this + 0x280) != 0)) {
    _DAT_00856d90 = 0;
    _DAT_00856d94 = 0;
    _DAT_00856d98 = *(undefined4 *)((int)this + 0x3dc);
    _DAT_00856d9c = *(undefined4 *)((int)this + 0x3dc);
    if (param_4 != 0) {
      iVar4 = *(int *)(param_1 + 8);
      DAT_00856d8c = (uint)*(ushort *)(param_1 + 0xe) * *(int *)(param_1 + 4) + 0x1f >> 3 &
                     0x1ffffffc;
      iVar3 = FUN_006b4fa0(param_1);
      local_2c = ((iVar4 - param_3) + -1) * DAT_00856d8c + param_2 + iVar3;
      local_4c = *(int *)((int)this + 0x41c);
      if (*(int *)((int)this + 0x310) < *(int *)((int)this + 0x41c)) {
        local_4c = *(int *)((int)this + 0x310);
      }
      local_1c = *(int *)((int)this + *(int *)((int)this + 0xa8) * 4 + 0x428);
      DAT_00856d88 = local_2c;
      if (local_1c != 0) {
        if ((*(int *)((int)this + 0x466) == 0) ||
           (*(int *)((int)this + *(int *)((int)this + 0xa8) * 4 + 0x4a2) == 0)) {
          local_20 = 0;
          iVar3 = *(int *)((int)this + 0x3dc) / 2;
          iVar4 = iVar3;
          DAT_00856d84 = iVar3;
          if (-1 < iVar3) {
            local_20 = iVar3 + 1;
            local_40 = local_20;
            do {
              if (iVar3 <= iVar4) {
                puVar7 = (undefined1 *)(local_2c + iVar3);
                iVar8 = (iVar4 - iVar3) + 1;
                do {
                  *puVar7 = puVar7[local_1c - local_2c];
                  puVar7 = puVar7 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + *(int *)((int)this + 0x424);
              iVar3 = iVar3 + -1;
              iVar4 = iVar4 + 1;
              local_40 = local_40 + -1;
            } while (local_40 != 0);
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
          if (local_20 < *(int *)((int)this + 0x3dc)) {
            do {
              iVar3 = iVar3 + 1;
              iVar4 = iVar4 + -1;
              if (iVar3 <= iVar4) {
                puVar7 = (undefined1 *)(local_2c + iVar3);
                iVar8 = (iVar4 - iVar3) + 1;
                do {
                  *puVar7 = puVar7[local_1c - local_2c];
                  puVar7 = puVar7 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + *(int *)((int)this + 0x424);
              local_20 = local_20 + 1;
            } while (local_20 < *(int *)((int)this + 0x3dc));
          }
        }
        else {
          iVar12 = *(int *)((int)this + 0x3dc) / 2;
          iVar3 = (int)(*(short **)((int)this + 0x280))[1];
          iVar8 = (int)**(short **)((int)this + 0x280);
          iVar4 = ((iVar3 + iVar8) * 0xb505) / *(int *)((int)this + 0x3dc);
          switch(*(undefined4 *)((int)this + 0xa8)) {
          case 0:
            iVar3 = 0x87c3c;
            iVar9 = (*(int *)((int)this + 0x4b2) * 0x10000) / 2;
            break;
          case 1:
            iVar9 = (iVar8 + 0xc) * 0xb505;
            iVar3 = (*(int *)((int)this + 0x4b6) << 0x10) / 2 + iVar8 * -0xb505;
            break;
          case 2:
            iVar9 = (*(int *)((int)this + 0x4b2) * 0x10000) / 2;
            iVar3 = *(int *)((int)this + 0x4b6) * 0x10000 + (iVar3 + iVar8) * -0xb505 + -0x97c3c;
            break;
          case 3:
            iVar9 = *(int *)((int)this + 0x4b2) * 0x10000 + iVar3 * -0xb505 + -0x97c3c;
            iVar3 = (*(int *)((int)this + 0x4b6) << 0x10) / 2 + iVar3 * -0xb505;
            break;
          default:
            iVar9 = 0;
            iVar3 = 0;
          }
          local_20 = 0;
          DAT_00856d84 = iVar12;
          local_8 = iVar12;
          if (-1 < iVar12) {
            local_20 = iVar12 + 1;
            local_3c = local_20;
            do {
              iVar8 = *(int *)((int)this + 0x4b2);
              iVar6 = *(int *)((int)this + *(int *)((int)this + 0xa8) * 4 + 0x4a2);
              if (iVar12 <= local_8) {
                local_38 = (undefined1 *)(local_2c + iVar12);
                local_40 = (local_8 - iVar12) + 1;
                local_28 = iVar9;
                do {
                  if (*(char *)((local_28 >> 0x10) + iVar6 + (iVar3 >> 0x10) * iVar8) == '\0') {
                    *local_38 = *(undefined1 *)((int)this + 0x49e);
                  }
                  else {
                    *local_38 = local_38[local_1c - local_2c];
                  }
                  local_28 = local_28 + iVar4;
                  local_38 = local_38 + 1;
                  local_40 = local_40 + -1;
                } while (local_40 != 0);
              }
              iVar3 = iVar3 + iVar4;
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + *(int *)((int)this + 0x424);
              iVar12 = iVar12 + -1;
              local_8 = local_8 + 1;
              iVar9 = iVar9 - iVar4;
              local_3c = local_3c + -1;
            } while (local_3c != 0);
          }
          iVar12 = iVar12 + 1;
          local_8 = local_8 + -1;
          iVar9 = iVar9 + iVar4;
          if (local_20 < *(int *)((int)this + 0x3dc)) {
            do {
              iVar12 = iVar12 + 1;
              local_8 = local_8 + -1;
              iVar9 = iVar9 + iVar4;
              iVar8 = *(int *)((int)this + 0x4b2);
              iVar6 = *(int *)((int)this + *(int *)((int)this + 0xa8) * 4 + 0x4a2);
              if (iVar12 <= local_8) {
                local_38 = (undefined1 *)(local_2c + iVar12);
                local_40 = (local_8 - iVar12) + 1;
                local_28 = iVar9;
                do {
                  if (*(char *)((local_28 >> 0x10) + iVar6 + (iVar3 >> 0x10) * iVar8) == '\0') {
                    *local_38 = *(undefined1 *)((int)this + 0x49e);
                  }
                  else {
                    *local_38 = local_38[local_1c - local_2c];
                  }
                  local_28 = local_28 + iVar4;
                  local_38 = local_38 + 1;
                  local_40 = local_40 + -1;
                } while (local_40 != 0);
              }
              iVar3 = iVar3 + iVar4;
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + *(int *)((int)this + 0x424);
              local_20 = local_20 + 1;
            } while (local_20 < *(int *)((int)this + 0x3dc));
          }
        }
      }
      for (pbVar13 = *(byte **)((int)this + 0x44a); pbVar13 != (byte *)0x0;
          pbVar13 = *(byte **)pbVar13) {
        if (pbVar13[0xc] != 0) {
          FUN_006e6af0(this,pbVar13);
        }
      }
      for (pbVar13 = *(byte **)((int)this + 0x446); pbVar13 != (byte *)0x0;
          pbVar13 = *(byte **)pbVar13) {
        if (pbVar13[0xc] != 0) {
          FUN_006e6af0(this,pbVar13);
        }
      }
      DAT_00856d84 = *(int *)((int)this + 0x3dc) / 2;
      _DAT_00856d80 =
           (float)_DAT_0079cd88 /
           ((float)(int)**(short **)((int)this + 0x280) * (float)*(double *)((int)this + 200));
      for (puVar2 = *(undefined4 **)((int)this + 0x452); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        switch(*(undefined4 *)((int)this + 0xa8)) {
        case 0:
          lVar14 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar14;
          lVar14 = Library::MSVCRT::__ftol();
          iVar4 = (int)lVar14;
          lVar14 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar14;
          lVar14 = Library::MSVCRT::__ftol();
          iVar3 = (int)lVar14;
          break;
        case 1:
          lVar14 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar14;
          lVar14 = Library::MSVCRT::__ftol();
          iVar4 = (int)lVar14;
          lVar14 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar14;
          lVar14 = Library::MSVCRT::__ftol();
          iVar3 = (int)lVar14;
          break;
        case 2:
          lVar14 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar14;
          lVar14 = Library::MSVCRT::__ftol();
          iVar4 = (int)lVar14;
          lVar14 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar14;
          lVar14 = Library::MSVCRT::__ftol();
          iVar3 = (int)lVar14;
          break;
        case 3:
          lVar14 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar14;
          lVar14 = Library::MSVCRT::__ftol();
          iVar4 = (int)lVar14;
          lVar14 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar14;
          lVar14 = Library::MSVCRT::__ftol();
          iVar3 = (int)lVar14;
          break;
        default:
          goto switchD_006e74ad_default;
        }
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        iVar8 = *(int *)((int)this + 0x3dc);
        if (iVar8 + -2 <= iVar4) {
          iVar4 = iVar8 + -3;
        }
        if (DAT_00856d84 < iVar4) {
          iVar12 = (DAT_00856d84 - iVar8) + iVar4;
          if (local_18 <= iVar12 + 1) {
            local_18 = iVar12 + 2;
          }
          iVar12 = (iVar8 - iVar4) + DAT_00856d84;
          if (iVar12 + -2 <= local_18) {
            local_18 = iVar12 + -3;
          }
        }
        else {
          if (local_18 < DAT_00856d84 - iVar4) {
            local_18 = DAT_00856d84 - iVar4;
          }
          if (DAT_00856d84 + iVar4 <= local_18) {
            local_18 = DAT_00856d84 + iVar4 + -1;
          }
        }
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        if (iVar8 + -2 <= iVar3) {
          iVar3 = iVar8 + -3;
        }
        if (DAT_00856d84 < iVar3) {
          iVar12 = (DAT_00856d84 - iVar8) + iVar3;
          if (local_8 <= iVar12 + 1) {
            local_8 = iVar12 + 2;
          }
          iVar8 = (iVar8 - iVar3) + DAT_00856d84;
          if (iVar8 + -2 <= local_8) {
            local_8 = iVar8 + -3;
          }
        }
        else {
          if (local_8 < DAT_00856d84 - iVar3) {
            local_8 = DAT_00856d84 - iVar3;
          }
          if (DAT_00856d84 + iVar3 <= local_8) {
            local_8 = DAT_00856d84 + iVar3 + -1;
          }
        }
        FUN_006b5b10(param_1,0,local_18 + param_2,iVar4 + param_3,local_8 + param_2,iVar3 + param_3,
                     (byte)puVar2[6],0xd);
switchD_006e74ad_default:
      }
      for (puVar2 = *(undefined4 **)((int)this + 0x44e); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        if (*(double *)((int)this + 200) <= (double)(int)puVar2[2]) {
          dVar1 = ((double)(int)puVar2[2] / *(double *)((int)this + 200)) *
                  (((double)*(int *)((int)this + 0x3dc) * _DAT_0079df60) /
                  (double)(int)**(short **)((int)this + 0x280));
          Library::MSVCRT::FUN_00730450(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
          lVar14 = Library::MSVCRT::__ftol();
          iVar4 = (int)lVar14;
          switch(*(undefined4 *)((int)this + 0xa8)) {
          case 0:
            lVar14 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar14;
            lVar14 = Library::MSVCRT::__ftol();
            iVar3 = (int)lVar14;
            break;
          case 1:
            lVar14 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar14;
            lVar14 = Library::MSVCRT::__ftol();
            iVar3 = (int)lVar14;
            break;
          case 2:
            lVar14 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar14;
            lVar14 = Library::MSVCRT::__ftol();
            iVar3 = (int)lVar14;
            break;
          case 3:
            lVar14 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar14;
            lVar14 = Library::MSVCRT::__ftol();
            iVar3 = (int)lVar14;
            break;
          default:
            iVar3 = 0;
            local_30 = 0;
          }
          iVar12 = local_30;
          iVar9 = iVar4 * iVar4;
          iVar8 = iVar9 * 2;
          iVar6 = 0;
          local_48 = -iVar4;
          local_34 = 0;
          local_18 = (local_48 + 1) * iVar9 + ((int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2);
          local_2c = iVar8 * iVar4;
          local_3c = iVar3 + local_48;
          local_40 = iVar3 + iVar4;
          local_24 = DAT_00856d88 - local_3c * DAT_00856d8c;
          local_28 = DAT_00856d88 - local_40 * DAT_00856d8c;
          if (local_3c < DAT_00856d84) {
            local_8 = (DAT_00856d84 - iVar3) + iVar4;
            local_c = iVar3 + DAT_00856d84 + local_48;
          }
          else {
            local_8 = (DAT_00856d84 - *(int *)((int)this + 0x3dc)) + iVar3 + 1 + local_48;
            local_c = (*(int *)((int)this + 0x3dc) - iVar3) + iVar4 + -1 + DAT_00856d84;
          }
          if (local_40 < DAT_00856d84) {
            local_10 = (DAT_00856d84 - iVar3) + local_48;
            local_14 = DAT_00856d84 + iVar4 + iVar3;
          }
          else {
            local_10 = (DAT_00856d84 - *(int *)((int)this + 0x3dc)) + iVar4 + 1 + iVar3;
            local_14 = (*(int *)((int)this + 0x3dc) - iVar3) + DAT_00856d84 + -1 + local_48;
          }
          if (0 < local_2c) {
            do {
              if ((local_8 <= iVar12 + iVar6) && (iVar12 + iVar6 <= local_c)) {
                *(undefined1 *)(local_24 + iVar12 + iVar6) = *(undefined1 *)(puVar2 + 5);
              }
              if ((local_8 <= local_30) && (local_30 <= local_c)) {
                *(undefined1 *)((local_24 - iVar6) + iVar12) = *(undefined1 *)(puVar2 + 5);
              }
              if ((local_10 <= iVar12 + iVar6) && (iVar12 + iVar6 <= local_14)) {
                *(undefined1 *)(local_28 + iVar12 + iVar6) = *(undefined1 *)(puVar2 + 5);
              }
              if ((local_10 <= local_30) && (local_30 <= local_14)) {
                *(undefined1 *)((local_28 - iVar6) + iVar12) = *(undefined1 *)(puVar2 + 5);
              }
              if (0 < local_18) {
                local_48 = local_48 + 1;
                local_3c = local_3c + 1;
                local_40 = local_40 + -1;
                local_24 = local_24 - DAT_00856d8c;
                local_28 = local_28 + DAT_00856d8c;
                local_2c = local_2c + iVar9 * -2;
                local_18 = local_18 - local_2c;
                if (DAT_00856d84 < local_3c) {
                  local_8 = local_8 + 1;
                  local_c = local_c + -1;
                }
                else {
                  local_8 = local_8 + -1;
                  local_c = local_c + 1;
                }
                if (DAT_00856d84 < local_40) {
                  local_10 = local_10 + -1;
                  local_14 = local_14 + 1;
                }
                else {
                  local_10 = local_10 + 1;
                  local_14 = local_14 + -1;
                }
              }
              iVar6 = iVar6 + 1;
              local_30 = local_30 + -1;
              local_34 = local_34 + iVar8;
              local_18 = local_18 + local_34 + iVar9;
            } while (local_34 < local_2c);
          }
          local_18 = local_18 - (local_34 + local_2c) / 2;
          if (local_48 < 1) {
            local_3c = iVar3 + local_48;
            local_40 = iVar3 - local_48;
            local_20 = iVar12 - iVar6;
            local_30 = iVar12 + iVar6;
            local_48 = 1 - local_48;
            do {
              if ((local_8 <= local_30) && (local_30 <= local_c)) {
                *(undefined1 *)(local_24 + iVar12 + iVar6) = *(undefined1 *)(puVar2 + 5);
              }
              if ((local_8 <= local_20) && (local_20 <= local_c)) {
                *(undefined1 *)((local_24 - iVar6) + iVar12) = *(undefined1 *)(puVar2 + 5);
              }
              if ((local_10 <= local_30) && (local_30 <= local_14)) {
                *(undefined1 *)(local_28 + iVar12 + iVar6) = *(undefined1 *)(puVar2 + 5);
              }
              if ((local_10 <= local_20) && (local_20 <= local_14)) {
                *(undefined1 *)((local_28 - iVar6) + iVar12) = *(undefined1 *)(puVar2 + 5);
              }
              local_3c = local_3c + 1;
              local_40 = local_40 + -1;
              if (DAT_00856d84 < local_3c) {
                local_8 = local_8 + 1;
                local_c = local_c + -1;
              }
              else {
                local_8 = local_8 + -1;
                local_c = local_c + 1;
              }
              if (DAT_00856d84 < local_40) {
                local_10 = local_10 + -1;
                local_14 = local_14 + 1;
              }
              else {
                local_10 = local_10 + 1;
                local_14 = local_14 + -1;
              }
              local_24 = local_24 - DAT_00856d8c;
              local_28 = local_28 + DAT_00856d8c;
              if (local_18 < 0) {
                iVar6 = iVar6 + 1;
                local_30 = local_30 + 1;
                local_20 = local_20 + -1;
                local_34 = local_34 + iVar8;
                local_18 = local_18 + local_34;
              }
              local_2c = local_2c + iVar9 * -2;
              local_18 = local_18 + (iVar9 - local_2c);
              local_48 = local_48 + -1;
            } while (local_48 != 0);
          }
        }
      }
      puVar10 = *(uint **)((int)this + 0x31c);
      pbVar13 = *(byte **)((int)this + 0x420);
      if (0 < local_4c) {
        do {
          if (((pbVar13[3] & 1) != 0) && ((*pbVar13 & *(byte *)((int)this + 0x418)) != 0)) {
            if (((*puVar10 & 0x800000) != 0) || (*(int *)((int)this + 0x3e0) != 0)) {
              dVar1 = (double)((float)puVar10[0x1d] / (float)*(double *)((int)this + 200));
              Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar14 = Library::MSVCRT::__ftol();
              *(byte *)(puVar10 + 0x44) = (byte)lVar14;
              if (**(short **)((int)this + 0x280) <= (short)(ushort)(byte)lVar14) {
                *(char *)(puVar10 + 0x44) = (char)**(short **)((int)this + 0x280) + -1;
              }
              dVar1 = (double)((float)puVar10[0x1e] / (float)*(double *)((int)this + 200));
              Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar14 = Library::MSVCRT::__ftol();
              *(byte *)((int)puVar10 + 0x111) = (byte)lVar14;
              if (*(short *)(*(int *)((int)this + 0x280) + 2) <= (short)(ushort)(byte)lVar14) {
                *(char *)((int)puVar10 + 0x111) = *(char *)(*(int *)((int)this + 0x280) + 2) + -1;
              }
              dVar1 = (double)((float)puVar10[0x1f] / (float)*(double *)((int)this + 0xd0));
              Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar14 = Library::MSVCRT::__ftol();
              *(byte *)((int)puVar10 + 0x112) = (byte)lVar14;
              if (4 < (byte)lVar14) {
                *(undefined1 *)((int)puVar10 + 0x112) = 4;
              }
              switch(*(undefined4 *)((int)this + 0xa8)) {
              case 0:
                lVar14 = Library::MSVCRT::__ftol();
                puVar10[0x42] = (uint)lVar14;
                break;
              case 1:
                lVar14 = Library::MSVCRT::__ftol();
                puVar10[0x42] = (uint)lVar14;
                break;
              case 2:
                lVar14 = Library::MSVCRT::__ftol();
                puVar10[0x42] = (uint)lVar14;
                break;
              case 3:
                lVar14 = Library::MSVCRT::__ftol();
                puVar10[0x42] = (uint)lVar14;
                break;
              default:
                goto switchD_006e7e25_default;
              }
              lVar14 = Library::MSVCRT::__ftol();
              puVar10[0x43] = (uint)lVar14;
switchD_006e7e25_default:
              if ((int)puVar10[0x43] < 1) {
                puVar10[0x43] = 1;
              }
              if (*(int *)((int)this + 0x3dc) + -2 <= (int)puVar10[0x43]) {
                puVar10[0x43] = *(int *)((int)this + 0x3dc) - 3;
              }
              uVar11 = puVar10[0x43];
              if (DAT_00856d84 < (int)uVar11) {
                if ((int)puVar10[0x42] <=
                    (int)((uVar11 - *(int *)((int)this + 0x3dc)) + 1 + DAT_00856d84)) {
                  puVar10[0x42] = (puVar10[0x43] - *(int *)((int)this + 0x3dc)) + 2 + DAT_00856d84;
                }
                if ((int)((*(int *)((int)this + 0x3dc) - puVar10[0x43]) + -2 + DAT_00856d84) <=
                    (int)puVar10[0x42]) {
                  uVar11 = (*(int *)((int)this + 0x3dc) - puVar10[0x43]) + -3 + DAT_00856d84;
                  goto LAB_006e7ff9;
                }
              }
              else {
                if ((int)puVar10[0x42] < (int)(DAT_00856d84 - uVar11)) {
                  puVar10[0x42] = DAT_00856d84 - puVar10[0x43];
                }
                if ((int)(puVar10[0x43] + DAT_00856d84) <= (int)puVar10[0x42]) {
                  uVar11 = (puVar10[0x43] - 1) + DAT_00856d84;
LAB_006e7ff9:
                  puVar10[0x42] = uVar11;
                }
              }
              *puVar10 = *puVar10 & 0xff7fffff;
            }
            pbVar5 = (byte *)((puVar10[0x42] - puVar10[0x43] * DAT_00856d8c) + DAT_00856d88);
            *pbVar5 = pbVar13[1];
            pbVar5[1] = pbVar13[1];
            pbVar5[-DAT_00856d8c] = pbVar13[1];
            pbVar5[1 - DAT_00856d8c] = pbVar13[1];
          }
          pbVar13 = pbVar13 + 4;
          puVar10 = puVar10 + 0x45;
          local_4c = local_4c + -1;
        } while (local_4c != 0);
      }
      if (0 < *(int *)((int)this + 1000)) {
        iVar4 = *(int *)((int)this + 0x3f0) + param_2;
        iVar3 = *(int *)((int)this + 0x3ec) + param_2;
        if (iVar3 < iVar4) {
          iVar8 = *(int *)((int)this + 1000) + param_3;
          FUN_006b5b10(param_1,0,iVar3,iVar8,iVar4,iVar8,(byte)*(undefined4 *)((int)this + 0x3e4),
                       0xd);
        }
      }
      if ((*(int *)((int)this + 0x3f4) < *(int *)((int)this + 0x3dc) + -1) &&
         (*(int *)((int)this + 0x3f8) < *(int *)((int)this + 0x3fc))) {
        iVar4 = *(int *)((int)this + 0x3f4) + param_3;
        FUN_006b5b10(param_1,0,*(int *)((int)this + 0x3f8) + param_2,iVar4,
                     *(int *)((int)this + 0x3fc) + param_2,iVar4,
                     (byte)*(undefined4 *)((int)this + 0x3e4),0xd);
      }
      if ((0 < *(int *)((int)this + 0x400)) &&
         (*(int *)((int)this + 0x404) < *(int *)((int)this + 0x408))) {
        iVar4 = *(int *)((int)this + 0x400) + param_2;
        FUN_006b5b10(param_1,0,iVar4,*(int *)((int)this + 0x404) + param_3,iVar4,
                     *(int *)((int)this + 0x408) + param_3,(byte)*(undefined4 *)((int)this + 0x3e4),
                     0xd);
      }
      if (*(int *)((int)this + 0x40c) < *(int *)((int)this + 0x3dc) + -1) {
        if (*(int *)((int)this + 0x410) < *(int *)((int)this + 0x414)) {
          iVar4 = param_2 + *(int *)((int)this + 0x40c);
          FUN_006b5b10(param_1,0,iVar4,*(int *)((int)this + 0x410) + param_3,iVar4,
                       *(int *)((int)this + 0x414) + param_3,
                       (byte)*(undefined4 *)((int)this + 0x3e4),0xd);
        }
      }
      uVar11 = -*(int *)((int)this + 0xa8) & 3;
      iVar4 = *(int *)((int)this + uVar11 * 4 + 0x456);
      if (iVar4 != 0) {
        FUN_006d25e0((byte *)((DAT_00856d84 -
                              (DAT_00856d8c + 1) * ((int)*(short *)(iVar4 + 0x12) / 2)) +
                             DAT_00856d88),-DAT_00856d8c,
                     (byte *)((*(byte *)(iVar4 + 0xd) >> 1 & 0xe) + 0x16 + iVar4),
                     (int)*(short *)(iVar4 + 0x12),(int)*(short *)(iVar4 + 0x14));
      }
      uVar11 = uVar11 + 1 & 3;
      iVar4 = *(int *)((int)this + uVar11 * 4 + 0x456);
      if (iVar4 != 0) {
        iVar3 = (int)*(short *)(iVar4 + 0x14) / 2;
        FUN_006d25e0((byte *)((DAT_00856d88 - (DAT_00856d84 - iVar3) * DAT_00856d8c) + iVar3),
                     -DAT_00856d8c,(byte *)((*(byte *)(iVar4 + 0xd) >> 1 & 0xe) + 0x16 + iVar4),
                     (int)*(short *)(iVar4 + 0x12),(int)*(short *)(iVar4 + 0x14));
      }
      uVar11 = uVar11 + 1 & 3;
      iVar4 = *(int *)((int)this + uVar11 * 4 + 0x456);
      if (iVar4 != 0) {
        iVar3 = (int)*(short *)(iVar4 + 0x12);
        FUN_006d25e0((byte *)((-(((*(int *)((int)this + 0x3dc) - iVar3 / 2) -
                                 (int)*(short *)(iVar4 + 0x14)) * DAT_00856d8c) - iVar3 / 2) +
                              DAT_00856d84 + DAT_00856d88),-DAT_00856d8c,
                     (byte *)((*(byte *)(iVar4 + 0xd) >> 1 & 0xe) + 0x16 + iVar4),iVar3,
                     (int)*(short *)(iVar4 + 0x14));
      }
      iVar4 = *(int *)((int)this + (uVar11 + 1 & 3) * 4 + 0x456);
      if (iVar4 != 0) {
        iVar3 = (int)*(short *)(iVar4 + 0x14);
        FUN_006d25e0((byte *)(((-((DAT_00856d84 - iVar3 / 2) * DAT_00856d8c) - iVar3 / 2) -
                              (int)*(short *)(iVar4 + 0x12)) + DAT_00856d88 +
                             *(int *)((int)this + 0x3dc)),-DAT_00856d8c,
                     (byte *)((*(byte *)(iVar4 + 0xd) >> 1 & 0xe) + 0x16 + iVar4),
                     (int)*(short *)(iVar4 + 0x12),iVar3);
      }
    }
    pbVar13 = *(byte **)((int)this + 0x442);
    while (pbVar13 != (byte *)0x0) {
      if (param_4 != 0) {
        FUN_006e6af0(this,pbVar13);
      }
      *(short *)(pbVar13 + 0x14) = *(short *)(pbVar13 + 0x14) + -1;
      if (*(short *)(pbVar13 + 0x14) < 1) {
        *(undefined2 *)(pbVar13 + 0x14) = *(undefined2 *)(pbVar13 + 0x12);
        pbVar13[0x16] = pbVar13[0x16] + 1;
      }
      if (pbVar13[0x16] < pbVar13[0x17]) {
        pbVar13 = *(byte **)pbVar13;
      }
      else {
        pbVar5 = *(byte **)pbVar13;
        FUN_006b98c0((int *)((int)this + 0x442),(int *)pbVar13);
        FUN_006a5e90((short *)pbVar13);
        pbVar13 = pbVar5;
      }
    }
    if (param_4 != 0) {
      for (pbVar13 = *(byte **)((int)this + 0x44a); pbVar13 != (byte *)0x0;
          pbVar13 = *(byte **)pbVar13) {
        if (pbVar13[0xc] == 0) {
          FUN_006e6af0(this,pbVar13);
        }
      }
      for (pbVar13 = *(byte **)((int)this + 0x446); pbVar13 != (byte *)0x0;
          pbVar13 = *(byte **)pbVar13) {
        if (pbVar13[0xc] == 0) {
          FUN_006e6af0(this,pbVar13);
        }
      }
    }
    *(undefined4 *)((int)this + 0x3e0) = 0;
  }
  return;
}

