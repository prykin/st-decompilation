
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_006e6fb0(void *this,AnonShape_006E6FB0_BC494FEA *param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  AnonNested_006E6FB0_0008_71212DD0 *pAVar2;
  AnonShape_006E6AF0_D2F012A7 *pAVar3;
  undefined4 *puVar4;
  AnonShape_006E6AF0_D2F012A7 *pAVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  longlong lVar17;
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
      pAVar2 = param_1->field_0008;
      DAT_00856d8c = (uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc;
      iVar6 = FUN_006b4fa0((int)param_1);
      local_2c = ((int)pAVar2 + (-1 - param_3)) * DAT_00856d8c + param_2 + iVar6;
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
          iVar8 = *(int *)((int)this + 0x3dc) / 2;
          iVar6 = iVar8;
          DAT_00856d84 = iVar8;
          if (-1 < iVar8) {
            local_20 = iVar8 + 1;
            local_40 = local_20;
            do {
              if (iVar8 <= iVar6) {
                puVar10 = (undefined1 *)(local_2c + iVar8);
                iVar11 = (iVar6 - iVar8) + 1;
                do {
                  *puVar10 = puVar10[local_1c - local_2c];
                  puVar10 = puVar10 + 1;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + *(int *)((int)this + 0x424);
              iVar8 = iVar8 + -1;
              iVar6 = iVar6 + 1;
              local_40 = local_40 + -1;
            } while (local_40 != 0);
          }
          iVar8 = iVar8 + 1;
          iVar6 = iVar6 + -1;
          if (local_20 < *(int *)((int)this + 0x3dc)) {
            do {
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + -1;
              if (iVar8 <= iVar6) {
                puVar10 = (undefined1 *)(local_2c + iVar8);
                iVar11 = (iVar6 - iVar8) + 1;
                do {
                  *puVar10 = puVar10[local_1c - local_2c];
                  puVar10 = puVar10 + 1;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + *(int *)((int)this + 0x424);
              local_20 = local_20 + 1;
            } while (local_20 < *(int *)((int)this + 0x3dc));
          }
        }
        else {
          iVar15 = *(int *)((int)this + 0x3dc) / 2;
          iVar8 = (int)(*(short **)((int)this + 0x280))[1];
          iVar11 = (int)**(short **)((int)this + 0x280);
          iVar6 = ((iVar8 + iVar11) * 0xb505) / *(int *)((int)this + 0x3dc);
          switch(*(undefined4 *)((int)this + 0xa8)) {
          case 0:
            iVar8 = 0x87c3c;
            iVar12 = (*(int *)((int)this + 0x4b2) * 0x10000) / 2;
            break;
          case 1:
            iVar12 = (iVar11 + 0xc) * 0xb505;
            iVar8 = (*(int *)((int)this + 0x4b6) << 0x10) / 2 + iVar11 * -0xb505;
            break;
          case 2:
            iVar12 = (*(int *)((int)this + 0x4b2) * 0x10000) / 2;
            iVar8 = *(int *)((int)this + 0x4b6) * 0x10000 + (iVar8 + iVar11) * -0xb505 + -0x97c3c;
            break;
          case 3:
            iVar12 = *(int *)((int)this + 0x4b2) * 0x10000 + iVar8 * -0xb505 + -0x97c3c;
            iVar8 = (*(int *)((int)this + 0x4b6) << 0x10) / 2 + iVar8 * -0xb505;
            break;
          default:
            iVar12 = 0;
            iVar8 = 0;
          }
          local_20 = 0;
          DAT_00856d84 = iVar15;
          local_8 = iVar15;
          if (-1 < iVar15) {
            local_20 = iVar15 + 1;
            local_3c = local_20;
            do {
              iVar11 = *(int *)((int)this + 0x4b2);
              iVar9 = *(int *)((int)this + *(int *)((int)this + 0xa8) * 4 + 0x4a2);
              if (iVar15 <= local_8) {
                local_38 = (undefined1 *)(local_2c + iVar15);
                local_40 = (local_8 - iVar15) + 1;
                local_28 = iVar12;
                do {
                  if (*(char *)((local_28 >> 0x10) + iVar9 + (iVar8 >> 0x10) * iVar11) == '\0') {
                    *local_38 = *(undefined1 *)((int)this + 0x49e);
                  }
                  else {
                    *local_38 = local_38[local_1c - local_2c];
                  }
                  local_28 = local_28 + iVar6;
                  local_38 = local_38 + 1;
                  local_40 = local_40 + -1;
                } while (local_40 != 0);
              }
              iVar8 = iVar8 + iVar6;
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + *(int *)((int)this + 0x424);
              iVar15 = iVar15 + -1;
              local_8 = local_8 + 1;
              iVar12 = iVar12 - iVar6;
              local_3c = local_3c + -1;
            } while (local_3c != 0);
          }
          iVar15 = iVar15 + 1;
          local_8 = local_8 + -1;
          iVar12 = iVar12 + iVar6;
          if (local_20 < *(int *)((int)this + 0x3dc)) {
            do {
              iVar15 = iVar15 + 1;
              local_8 = local_8 + -1;
              iVar12 = iVar12 + iVar6;
              iVar11 = *(int *)((int)this + 0x4b2);
              iVar9 = *(int *)((int)this + *(int *)((int)this + 0xa8) * 4 + 0x4a2);
              if (iVar15 <= local_8) {
                local_38 = (undefined1 *)(local_2c + iVar15);
                local_40 = (local_8 - iVar15) + 1;
                local_28 = iVar12;
                do {
                  if (*(char *)((local_28 >> 0x10) + iVar9 + (iVar8 >> 0x10) * iVar11) == '\0') {
                    *local_38 = *(undefined1 *)((int)this + 0x49e);
                  }
                  else {
                    *local_38 = local_38[local_1c - local_2c];
                  }
                  local_28 = local_28 + iVar6;
                  local_38 = local_38 + 1;
                  local_40 = local_40 + -1;
                } while (local_40 != 0);
              }
              iVar8 = iVar8 + iVar6;
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + *(int *)((int)this + 0x424);
              local_20 = local_20 + 1;
            } while (local_20 < *(int *)((int)this + 0x3dc));
          }
        }
      }
      for (pAVar3 = *(AnonShape_006E6AF0_D2F012A7 **)((int)this + 0x44a);
          pAVar3 != (AnonShape_006E6AF0_D2F012A7 *)0x0;
          pAVar3 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar3) {
        if (pAVar3->field_0xc != '\0') {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006E6AF0::FUN_006e6af0(this,pAVar3);
        }
      }
      for (pAVar3 = *(AnonShape_006E6AF0_D2F012A7 **)((int)this + 0x446);
          pAVar3 != (AnonShape_006E6AF0_D2F012A7 *)0x0;
          pAVar3 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar3) {
        if (pAVar3->field_0xc != '\0') {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006E6AF0::FUN_006e6af0(this,pAVar3);
        }
      }
      DAT_00856d84 = *(int *)((int)this + 0x3dc) / 2;
      _DAT_00856d80 =
           (float)_DAT_0079cd88 /
           ((float)(int)**(short **)((int)this + 0x280) * (float)*(double *)((int)this + 200));
      for (puVar4 = *(undefined4 **)((int)this + 0x452); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        switch(*(undefined4 *)((int)this + 0xa8)) {
        case 0:
          lVar17 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar17;
          lVar17 = Library::MSVCRT::__ftol();
          iVar6 = (int)lVar17;
          lVar17 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar17;
          lVar17 = Library::MSVCRT::__ftol();
          iVar8 = (int)lVar17;
          break;
        case 1:
          lVar17 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar17;
          lVar17 = Library::MSVCRT::__ftol();
          iVar6 = (int)lVar17;
          lVar17 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar17;
          lVar17 = Library::MSVCRT::__ftol();
          iVar8 = (int)lVar17;
          break;
        case 2:
          lVar17 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar17;
          lVar17 = Library::MSVCRT::__ftol();
          iVar6 = (int)lVar17;
          lVar17 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar17;
          lVar17 = Library::MSVCRT::__ftol();
          iVar8 = (int)lVar17;
          break;
        case 3:
          lVar17 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar17;
          lVar17 = Library::MSVCRT::__ftol();
          iVar6 = (int)lVar17;
          lVar17 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar17;
          lVar17 = Library::MSVCRT::__ftol();
          iVar8 = (int)lVar17;
          break;
        default:
          goto switchD_006e74ad_default;
        }
        if (iVar6 < 1) {
          iVar6 = 1;
        }
        iVar11 = *(int *)((int)this + 0x3dc);
        if (iVar11 + -2 <= iVar6) {
          iVar6 = iVar11 + -3;
        }
        if (DAT_00856d84 < iVar6) {
          iVar15 = (DAT_00856d84 - iVar11) + iVar6;
          if (local_18 <= iVar15 + 1) {
            local_18 = iVar15 + 2;
          }
          iVar15 = (iVar11 - iVar6) + DAT_00856d84;
          if (iVar15 + -2 <= local_18) {
            local_18 = iVar15 + -3;
          }
        }
        else {
          if (local_18 < DAT_00856d84 - iVar6) {
            local_18 = DAT_00856d84 - iVar6;
          }
          if (DAT_00856d84 + iVar6 <= local_18) {
            local_18 = DAT_00856d84 + iVar6 + -1;
          }
        }
        if (iVar8 < 1) {
          iVar8 = 1;
        }
        if (iVar11 + -2 <= iVar8) {
          iVar8 = iVar11 + -3;
        }
        if (DAT_00856d84 < iVar8) {
          iVar15 = (DAT_00856d84 - iVar11) + iVar8;
          if (local_8 <= iVar15 + 1) {
            local_8 = iVar15 + 2;
          }
          iVar11 = (iVar11 - iVar8) + DAT_00856d84;
          if (iVar11 + -2 <= local_8) {
            local_8 = iVar11 + -3;
          }
        }
        else {
          if (local_8 < DAT_00856d84 - iVar8) {
            local_8 = DAT_00856d84 - iVar8;
          }
          if (DAT_00856d84 + iVar8 <= local_8) {
            local_8 = DAT_00856d84 + iVar8 + -1;
          }
        }
        FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)param_1,0,local_18 + param_2,iVar6 + param_3,
                     local_8 + param_2,iVar8 + param_3,(byte)puVar4[6],0xd);
switchD_006e74ad_default:
      }
      for (puVar4 = *(undefined4 **)((int)this + 0x44e); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)*puVar4) {
        if (*(double *)((int)this + 200) <= (double)(int)puVar4[2]) {
          dVar1 = ((double)(int)puVar4[2] / *(double *)((int)this + 200)) *
                  (((double)*(int *)((int)this + 0x3dc) * _DAT_0079df60) /
                  (double)(int)**(short **)((int)this + 0x280));
          Library::MSVCRT::FUN_00730450(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
          lVar17 = Library::MSVCRT::__ftol();
          iVar6 = (int)lVar17;
          switch(*(undefined4 *)((int)this + 0xa8)) {
          case 0:
            lVar17 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar17;
            lVar17 = Library::MSVCRT::__ftol();
            iVar8 = (int)lVar17;
            break;
          case 1:
            lVar17 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar17;
            lVar17 = Library::MSVCRT::__ftol();
            iVar8 = (int)lVar17;
            break;
          case 2:
            lVar17 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar17;
            lVar17 = Library::MSVCRT::__ftol();
            iVar8 = (int)lVar17;
            break;
          case 3:
            lVar17 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar17;
            lVar17 = Library::MSVCRT::__ftol();
            iVar8 = (int)lVar17;
            break;
          default:
            iVar8 = 0;
            local_30 = 0;
          }
          iVar15 = local_30;
          iVar12 = iVar6 * iVar6;
          iVar11 = iVar12 * 2;
          iVar9 = 0;
          local_48 = -iVar6;
          local_34 = 0;
          local_18 = (local_48 + 1) * iVar12 + ((int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2);
          local_2c = iVar11 * iVar6;
          local_3c = iVar8 + local_48;
          local_40 = iVar8 + iVar6;
          local_24 = DAT_00856d88 - local_3c * DAT_00856d8c;
          local_28 = DAT_00856d88 - local_40 * DAT_00856d8c;
          if (local_3c < DAT_00856d84) {
            local_8 = (DAT_00856d84 - iVar8) + iVar6;
            local_c = iVar8 + DAT_00856d84 + local_48;
          }
          else {
            local_8 = (DAT_00856d84 - *(int *)((int)this + 0x3dc)) + iVar8 + 1 + local_48;
            local_c = (*(int *)((int)this + 0x3dc) - iVar8) + iVar6 + -1 + DAT_00856d84;
          }
          if (local_40 < DAT_00856d84) {
            local_10 = (DAT_00856d84 - iVar8) + local_48;
            local_14 = DAT_00856d84 + iVar6 + iVar8;
          }
          else {
            local_10 = (DAT_00856d84 - *(int *)((int)this + 0x3dc)) + iVar6 + 1 + iVar8;
            local_14 = (*(int *)((int)this + 0x3dc) - iVar8) + DAT_00856d84 + -1 + local_48;
          }
          if (0 < local_2c) {
            do {
              if ((local_8 <= iVar15 + iVar9) && (iVar15 + iVar9 <= local_c)) {
                *(undefined1 *)(local_24 + iVar15 + iVar9) = *(undefined1 *)(puVar4 + 5);
              }
              if ((local_8 <= local_30) && (local_30 <= local_c)) {
                *(undefined1 *)((local_24 - iVar9) + iVar15) = *(undefined1 *)(puVar4 + 5);
              }
              if ((local_10 <= iVar15 + iVar9) && (iVar15 + iVar9 <= local_14)) {
                *(undefined1 *)(local_28 + iVar15 + iVar9) = *(undefined1 *)(puVar4 + 5);
              }
              if ((local_10 <= local_30) && (local_30 <= local_14)) {
                *(undefined1 *)((local_28 - iVar9) + iVar15) = *(undefined1 *)(puVar4 + 5);
              }
              if (0 < local_18) {
                local_48 = local_48 + 1;
                local_3c = local_3c + 1;
                local_40 = local_40 + -1;
                local_24 = local_24 - DAT_00856d8c;
                local_28 = local_28 + DAT_00856d8c;
                local_2c = local_2c + iVar12 * -2;
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
              iVar9 = iVar9 + 1;
              local_30 = local_30 + -1;
              local_34 = local_34 + iVar11;
              local_18 = local_18 + local_34 + iVar12;
            } while (local_34 < local_2c);
          }
          local_18 = local_18 - (local_34 + local_2c) / 2;
          if (local_48 < 1) {
            local_3c = iVar8 + local_48;
            local_40 = iVar8 - local_48;
            local_20 = iVar15 - iVar9;
            local_30 = iVar15 + iVar9;
            local_48 = 1 - local_48;
            do {
              if ((local_8 <= local_30) && (local_30 <= local_c)) {
                *(undefined1 *)(local_24 + iVar15 + iVar9) = *(undefined1 *)(puVar4 + 5);
              }
              if ((local_8 <= local_20) && (local_20 <= local_c)) {
                *(undefined1 *)((local_24 - iVar9) + iVar15) = *(undefined1 *)(puVar4 + 5);
              }
              if ((local_10 <= local_30) && (local_30 <= local_14)) {
                *(undefined1 *)(local_28 + iVar15 + iVar9) = *(undefined1 *)(puVar4 + 5);
              }
              if ((local_10 <= local_20) && (local_20 <= local_14)) {
                *(undefined1 *)((local_28 - iVar9) + iVar15) = *(undefined1 *)(puVar4 + 5);
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
                iVar9 = iVar9 + 1;
                local_30 = local_30 + 1;
                local_20 = local_20 + -1;
                local_34 = local_34 + iVar11;
                local_18 = local_18 + local_34;
              }
              local_2c = local_2c + iVar12 * -2;
              local_18 = local_18 + (iVar12 - local_2c);
              local_48 = local_48 + -1;
            } while (local_48 != 0);
          }
        }
      }
      puVar13 = *(uint **)((int)this + 0x31c);
      pbVar16 = *(byte **)((int)this + 0x420);
      if (0 < local_4c) {
        do {
          if (((pbVar16[3] & 1) != 0) && ((*pbVar16 & *(byte *)((int)this + 0x418)) != 0)) {
            if (((*puVar13 & 0x800000) != 0) || (*(int *)((int)this + 0x3e0) != 0)) {
              dVar1 = (double)((float)puVar13[0x1d] / (float)*(double *)((int)this + 200));
              Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar17 = Library::MSVCRT::__ftol();
              *(byte *)(puVar13 + 0x44) = (byte)lVar17;
              if (**(short **)((int)this + 0x280) <= (short)(ushort)(byte)lVar17) {
                *(char *)(puVar13 + 0x44) = (char)**(short **)((int)this + 0x280) + -1;
              }
              dVar1 = (double)((float)puVar13[0x1e] / (float)*(double *)((int)this + 200));
              Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar17 = Library::MSVCRT::__ftol();
              *(byte *)((int)puVar13 + 0x111) = (byte)lVar17;
              if (*(short *)(*(int *)((int)this + 0x280) + 2) <= (short)(ushort)(byte)lVar17) {
                *(char *)((int)puVar13 + 0x111) = *(char *)(*(int *)((int)this + 0x280) + 2) + -1;
              }
              dVar1 = (double)((float)puVar13[0x1f] / (float)*(double *)((int)this + 0xd0));
              Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar17 = Library::MSVCRT::__ftol();
              *(byte *)((int)puVar13 + 0x112) = (byte)lVar17;
              if (4 < (byte)lVar17) {
                *(undefined1 *)((int)puVar13 + 0x112) = 4;
              }
              switch(*(undefined4 *)((int)this + 0xa8)) {
              case 0:
                lVar17 = Library::MSVCRT::__ftol();
                puVar13[0x42] = (uint)lVar17;
                break;
              case 1:
                lVar17 = Library::MSVCRT::__ftol();
                puVar13[0x42] = (uint)lVar17;
                break;
              case 2:
                lVar17 = Library::MSVCRT::__ftol();
                puVar13[0x42] = (uint)lVar17;
                break;
              case 3:
                lVar17 = Library::MSVCRT::__ftol();
                puVar13[0x42] = (uint)lVar17;
                break;
              default:
                goto switchD_006e7e25_default;
              }
              lVar17 = Library::MSVCRT::__ftol();
              puVar13[0x43] = (uint)lVar17;
switchD_006e7e25_default:
              if ((int)puVar13[0x43] < 1) {
                puVar13[0x43] = 1;
              }
              if (*(int *)((int)this + 0x3dc) + -2 <= (int)puVar13[0x43]) {
                puVar13[0x43] = *(int *)((int)this + 0x3dc) - 3;
              }
              uVar14 = puVar13[0x43];
              if (DAT_00856d84 < (int)uVar14) {
                if ((int)puVar13[0x42] <=
                    (int)((uVar14 - *(int *)((int)this + 0x3dc)) + 1 + DAT_00856d84)) {
                  puVar13[0x42] = (puVar13[0x43] - *(int *)((int)this + 0x3dc)) + 2 + DAT_00856d84;
                }
                if ((int)((*(int *)((int)this + 0x3dc) - puVar13[0x43]) + -2 + DAT_00856d84) <=
                    (int)puVar13[0x42]) {
                  uVar14 = (*(int *)((int)this + 0x3dc) - puVar13[0x43]) + -3 + DAT_00856d84;
                  goto LAB_006e7ff9;
                }
              }
              else {
                if ((int)puVar13[0x42] < (int)(DAT_00856d84 - uVar14)) {
                  puVar13[0x42] = DAT_00856d84 - puVar13[0x43];
                }
                if ((int)(puVar13[0x43] + DAT_00856d84) <= (int)puVar13[0x42]) {
                  uVar14 = (puVar13[0x43] - 1) + DAT_00856d84;
LAB_006e7ff9:
                  puVar13[0x42] = uVar14;
                }
              }
              *puVar13 = *puVar13 & 0xff7fffff;
            }
            pbVar7 = (byte *)((puVar13[0x42] - puVar13[0x43] * DAT_00856d8c) + DAT_00856d88);
            *pbVar7 = pbVar16[1];
            pbVar7[1] = pbVar16[1];
            pbVar7[-DAT_00856d8c] = pbVar16[1];
            pbVar7[1 - DAT_00856d8c] = pbVar16[1];
          }
          pbVar16 = pbVar16 + 4;
          puVar13 = puVar13 + 0x45;
          local_4c = local_4c + -1;
        } while (local_4c != 0);
      }
      if (0 < *(int *)((int)this + 1000)) {
        iVar6 = *(int *)((int)this + 0x3f0) + param_2;
        iVar8 = *(int *)((int)this + 0x3ec) + param_2;
        if (iVar8 < iVar6) {
          iVar11 = *(int *)((int)this + 1000) + param_3;
          FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)param_1,0,iVar8,iVar11,iVar6,iVar11,
                       (byte)*(undefined4 *)((int)this + 0x3e4),0xd);
        }
      }
      if ((*(int *)((int)this + 0x3f4) < *(int *)((int)this + 0x3dc) + -1) &&
         (*(int *)((int)this + 0x3f8) < *(int *)((int)this + 0x3fc))) {
        iVar6 = *(int *)((int)this + 0x3f4) + param_3;
        FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)param_1,0,*(int *)((int)this + 0x3f8) + param_2,
                     iVar6,*(int *)((int)this + 0x3fc) + param_2,iVar6,
                     (byte)*(undefined4 *)((int)this + 0x3e4),0xd);
      }
      if ((0 < *(int *)((int)this + 0x400)) &&
         (*(int *)((int)this + 0x404) < *(int *)((int)this + 0x408))) {
        iVar6 = *(int *)((int)this + 0x400) + param_2;
        FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)param_1,0,iVar6,
                     *(int *)((int)this + 0x404) + param_3,iVar6,
                     *(int *)((int)this + 0x408) + param_3,(byte)*(undefined4 *)((int)this + 0x3e4),
                     0xd);
      }
      if (*(int *)((int)this + 0x40c) < *(int *)((int)this + 0x3dc) + -1) {
        if (*(int *)((int)this + 0x410) < *(int *)((int)this + 0x414)) {
          iVar6 = param_2 + *(int *)((int)this + 0x40c);
          FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)param_1,0,iVar6,
                       *(int *)((int)this + 0x410) + param_3,iVar6,
                       *(int *)((int)this + 0x414) + param_3,
                       (byte)*(undefined4 *)((int)this + 0x3e4),0xd);
        }
      }
      uVar14 = -*(int *)((int)this + 0xa8) & 3;
      iVar6 = *(int *)((int)this + uVar14 * 4 + 0x456);
      if (iVar6 != 0) {
        FUN_006d25e0((byte *)((DAT_00856d84 -
                              (DAT_00856d8c + 1) * ((int)*(short *)(iVar6 + 0x12) / 2)) +
                             DAT_00856d88),-DAT_00856d8c,
                     (byte *)((*(byte *)(iVar6 + 0xd) >> 1 & 0xe) + 0x16 + iVar6),
                     (int)*(short *)(iVar6 + 0x12),(int)*(short *)(iVar6 + 0x14));
      }
      uVar14 = uVar14 + 1 & 3;
      iVar6 = *(int *)((int)this + uVar14 * 4 + 0x456);
      if (iVar6 != 0) {
        iVar8 = (int)*(short *)(iVar6 + 0x14) / 2;
        FUN_006d25e0((byte *)((DAT_00856d88 - (DAT_00856d84 - iVar8) * DAT_00856d8c) + iVar8),
                     -DAT_00856d8c,(byte *)((*(byte *)(iVar6 + 0xd) >> 1 & 0xe) + 0x16 + iVar6),
                     (int)*(short *)(iVar6 + 0x12),(int)*(short *)(iVar6 + 0x14));
      }
      uVar14 = uVar14 + 1 & 3;
      iVar6 = *(int *)((int)this + uVar14 * 4 + 0x456);
      if (iVar6 != 0) {
        iVar8 = (int)*(short *)(iVar6 + 0x12);
        FUN_006d25e0((byte *)((-(((*(int *)((int)this + 0x3dc) - iVar8 / 2) -
                                 (int)*(short *)(iVar6 + 0x14)) * DAT_00856d8c) - iVar8 / 2) +
                              DAT_00856d84 + DAT_00856d88),-DAT_00856d8c,
                     (byte *)((*(byte *)(iVar6 + 0xd) >> 1 & 0xe) + 0x16 + iVar6),iVar8,
                     (int)*(short *)(iVar6 + 0x14));
      }
      iVar6 = *(int *)((int)this + (uVar14 + 1 & 3) * 4 + 0x456);
      if (iVar6 != 0) {
        iVar8 = (int)*(short *)(iVar6 + 0x14);
        FUN_006d25e0((byte *)(((-((DAT_00856d84 - iVar8 / 2) * DAT_00856d8c) - iVar8 / 2) -
                              (int)*(short *)(iVar6 + 0x12)) + DAT_00856d88 +
                             *(int *)((int)this + 0x3dc)),-DAT_00856d8c,
                     (byte *)((*(byte *)(iVar6 + 0xd) >> 1 & 0xe) + 0x16 + iVar6),
                     (int)*(short *)(iVar6 + 0x12),iVar8);
      }
    }
    pAVar3 = *(AnonShape_006E6AF0_D2F012A7 **)((int)this + 0x442);
    while (pAVar3 != (AnonShape_006E6AF0_D2F012A7 *)0x0) {
      if (param_4 != 0) {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006E6AF0::FUN_006e6af0(this,pAVar3);
      }
      *(short *)&pAVar3->field_0x14 = *(short *)&pAVar3->field_0x14 + -1;
      if (*(short *)&pAVar3->field_0x14 < 1) {
        *(undefined2 *)&pAVar3->field_0x14 = *(undefined2 *)&pAVar3->field_0x12;
        pAVar3->field_0x16 = pAVar3->field_0x16 + '\x01';
      }
      if ((byte)pAVar3->field_0x16 < (byte)pAVar3->field_0x17) {
        pAVar3 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar3;
      }
      else {
        pAVar5 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar3;
        FUN_006b98c0((int *)((int)this + 0x442),(int *)pAVar3);
        FUN_006a5e90((short *)pAVar3);
        pAVar3 = pAVar5;
      }
    }
    if (param_4 != 0) {
      for (pAVar3 = *(AnonShape_006E6AF0_D2F012A7 **)((int)this + 0x44a);
          pAVar3 != (AnonShape_006E6AF0_D2F012A7 *)0x0;
          pAVar3 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar3) {
        if (pAVar3->field_0xc == '\0') {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006E6AF0::FUN_006e6af0(this,pAVar3);
        }
      }
      for (pAVar3 = *(AnonShape_006E6AF0_D2F012A7 **)((int)this + 0x446);
          pAVar3 != (AnonShape_006E6AF0_D2F012A7 *)0x0;
          pAVar3 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar3) {
        if (pAVar3->field_0xc == '\0') {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006E6AF0::FUN_006e6af0(this,pAVar3);
        }
      }
    }
    *(undefined4 *)((int)this + 0x3e0) = 0;
  }
  return;
}

