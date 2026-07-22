
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006E6FB0 -> 006B5B10 @ 006E77B4 | 006E6FB0 -> 006B5B10 @ 006E809F | 006E6FB0 ->
   006B5B10 @ 006E80EC | 006E6FB0 -> 006B5B10 @ 006E812A | 006E6FB0 -> 006B5B10 @ 006E8169 */

void __thiscall
FUN_006e6fb0(void *this,AnonShape_006B5B10_E0D06CF1 *param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  AnonShape_006E6AF0_D2F012A7 *pAVar2;
  undefined4 *puVar3;
  AnonShape_006E6AF0_D2F012A7 *pAVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  longlong lVar16;
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
      iVar6 = param_1->field_0008;
      DAT_00856d8c = (uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc;
      iVar5 = FUN_006b4fa0((int)param_1);
      local_2c = ((iVar6 - param_3) + -1) * DAT_00856d8c + param_2 + iVar5;
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
          iVar5 = *(int *)((int)this + 0x3dc) / 2;
          iVar6 = iVar5;
          DAT_00856d84 = iVar5;
          if (-1 < iVar5) {
            local_20 = iVar5 + 1;
            local_40 = local_20;
            do {
              if (iVar5 <= iVar6) {
                puVar9 = (undefined1 *)(local_2c + iVar5);
                iVar10 = (iVar6 - iVar5) + 1;
                do {
                  *puVar9 = puVar9[local_1c - local_2c];
                  puVar9 = puVar9 + 1;
                  iVar10 = iVar10 + -1;
                } while (iVar10 != 0);
              }
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + *(int *)((int)this + 0x424);
              iVar5 = iVar5 + -1;
              iVar6 = iVar6 + 1;
              local_40 = local_40 + -1;
            } while (local_40 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
          if (local_20 < *(int *)((int)this + 0x3dc)) {
            do {
              iVar5 = iVar5 + 1;
              iVar6 = iVar6 + -1;
              if (iVar5 <= iVar6) {
                puVar9 = (undefined1 *)(local_2c + iVar5);
                iVar10 = (iVar6 - iVar5) + 1;
                do {
                  *puVar9 = puVar9[local_1c - local_2c];
                  puVar9 = puVar9 + 1;
                  iVar10 = iVar10 + -1;
                } while (iVar10 != 0);
              }
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + *(int *)((int)this + 0x424);
              local_20 = local_20 + 1;
            } while (local_20 < *(int *)((int)this + 0x3dc));
          }
        }
        else {
          iVar14 = *(int *)((int)this + 0x3dc) / 2;
          iVar5 = (int)(*(short **)((int)this + 0x280))[1];
          iVar10 = (int)**(short **)((int)this + 0x280);
          iVar6 = ((iVar5 + iVar10) * 0xb505) / *(int *)((int)this + 0x3dc);
          switch(*(undefined4 *)((int)this + 0xa8)) {
          case 0:
            iVar5 = 0x87c3c;
            iVar11 = (*(int *)((int)this + 0x4b2) * 0x10000) / 2;
            break;
          case 1:
            iVar11 = (iVar10 + 0xc) * 0xb505;
            iVar5 = (*(int *)((int)this + 0x4b6) << 0x10) / 2 + iVar10 * -0xb505;
            break;
          case 2:
            iVar11 = (*(int *)((int)this + 0x4b2) * 0x10000) / 2;
            iVar5 = *(int *)((int)this + 0x4b6) * 0x10000 + (iVar5 + iVar10) * -0xb505 + -0x97c3c;
            break;
          case 3:
            iVar11 = *(int *)((int)this + 0x4b2) * 0x10000 + iVar5 * -0xb505 + -0x97c3c;
            iVar5 = (*(int *)((int)this + 0x4b6) << 0x10) / 2 + iVar5 * -0xb505;
            break;
          default:
            iVar11 = 0;
            iVar5 = 0;
          }
          local_20 = 0;
          DAT_00856d84 = iVar14;
          local_8 = iVar14;
          if (-1 < iVar14) {
            local_20 = iVar14 + 1;
            local_3c = local_20;
            do {
              iVar10 = *(int *)((int)this + 0x4b2);
              iVar8 = *(int *)((int)this + *(int *)((int)this + 0xa8) * 4 + 0x4a2);
              if (iVar14 <= local_8) {
                local_38 = (undefined1 *)(local_2c + iVar14);
                local_40 = (local_8 - iVar14) + 1;
                local_28 = iVar11;
                do {
                  if (*(char *)((local_28 >> 0x10) + iVar8 + (iVar5 >> 0x10) * iVar10) == '\0') {
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
              iVar5 = iVar5 + iVar6;
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + *(int *)((int)this + 0x424);
              iVar14 = iVar14 + -1;
              local_8 = local_8 + 1;
              iVar11 = iVar11 - iVar6;
              local_3c = local_3c + -1;
            } while (local_3c != 0);
          }
          iVar14 = iVar14 + 1;
          local_8 = local_8 + -1;
          iVar11 = iVar11 + iVar6;
          if (local_20 < *(int *)((int)this + 0x3dc)) {
            do {
              iVar14 = iVar14 + 1;
              local_8 = local_8 + -1;
              iVar11 = iVar11 + iVar6;
              iVar10 = *(int *)((int)this + 0x4b2);
              iVar8 = *(int *)((int)this + *(int *)((int)this + 0xa8) * 4 + 0x4a2);
              if (iVar14 <= local_8) {
                local_38 = (undefined1 *)(local_2c + iVar14);
                local_40 = (local_8 - iVar14) + 1;
                local_28 = iVar11;
                do {
                  if (*(char *)((local_28 >> 0x10) + iVar8 + (iVar5 >> 0x10) * iVar10) == '\0') {
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
              iVar5 = iVar5 + iVar6;
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + *(int *)((int)this + 0x424);
              local_20 = local_20 + 1;
            } while (local_20 < *(int *)((int)this + 0x3dc));
          }
        }
      }
      for (pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)((int)this + 0x44a);
          pAVar2 != (AnonShape_006E6AF0_D2F012A7 *)0x0;
          pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2) {
        if (pAVar2->field_0xc != '\0') {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006E6AF0::FUN_006e6af0(this,pAVar2);
        }
      }
      for (pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)((int)this + 0x446);
          pAVar2 != (AnonShape_006E6AF0_D2F012A7 *)0x0;
          pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2) {
        if (pAVar2->field_0xc != '\0') {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006E6AF0::FUN_006e6af0(this,pAVar2);
        }
      }
      DAT_00856d84 = *(int *)((int)this + 0x3dc) / 2;
      _DAT_00856d80 =
           (float)_DAT_0079cd88 /
           ((float)(int)**(short **)((int)this + 0x280) * (float)*(double *)((int)this + 200));
      for (puVar3 = *(undefined4 **)((int)this + 0x452); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        switch(*(undefined4 *)((int)this + 0xa8)) {
        case 0:
          lVar16 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar16;
          lVar16 = Library::MSVCRT::__ftol();
          iVar6 = (int)lVar16;
          lVar16 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar16;
          lVar16 = Library::MSVCRT::__ftol();
          iVar5 = (int)lVar16;
          break;
        case 1:
          lVar16 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar16;
          lVar16 = Library::MSVCRT::__ftol();
          iVar6 = (int)lVar16;
          lVar16 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar16;
          lVar16 = Library::MSVCRT::__ftol();
          iVar5 = (int)lVar16;
          break;
        case 2:
          lVar16 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar16;
          lVar16 = Library::MSVCRT::__ftol();
          iVar6 = (int)lVar16;
          lVar16 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar16;
          lVar16 = Library::MSVCRT::__ftol();
          iVar5 = (int)lVar16;
          break;
        case 3:
          lVar16 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar16;
          lVar16 = Library::MSVCRT::__ftol();
          iVar6 = (int)lVar16;
          lVar16 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar16;
          lVar16 = Library::MSVCRT::__ftol();
          iVar5 = (int)lVar16;
          break;
        default:
          goto switchD_006e74ad_default;
        }
        if (iVar6 < 1) {
          iVar6 = 1;
        }
        iVar10 = *(int *)((int)this + 0x3dc);
        if (iVar10 + -2 <= iVar6) {
          iVar6 = iVar10 + -3;
        }
        if (DAT_00856d84 < iVar6) {
          iVar14 = (DAT_00856d84 - iVar10) + iVar6;
          if (local_18 <= iVar14 + 1) {
            local_18 = iVar14 + 2;
          }
          iVar14 = (iVar10 - iVar6) + DAT_00856d84;
          if (iVar14 + -2 <= local_18) {
            local_18 = iVar14 + -3;
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
        if (iVar5 < 1) {
          iVar5 = 1;
        }
        if (iVar10 + -2 <= iVar5) {
          iVar5 = iVar10 + -3;
        }
        if (DAT_00856d84 < iVar5) {
          iVar14 = (DAT_00856d84 - iVar10) + iVar5;
          if (local_8 <= iVar14 + 1) {
            local_8 = iVar14 + 2;
          }
          iVar10 = (iVar10 - iVar5) + DAT_00856d84;
          if (iVar10 + -2 <= local_8) {
            local_8 = iVar10 + -3;
          }
        }
        else {
          if (local_8 < DAT_00856d84 - iVar5) {
            local_8 = DAT_00856d84 - iVar5;
          }
          if (DAT_00856d84 + iVar5 <= local_8) {
            local_8 = DAT_00856d84 + iVar5 + -1;
          }
        }
        FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,local_18 + param_2,iVar6 + param_3,
                     local_8 + param_2,iVar5 + param_3,(byte)puVar3[6],0xd);
switchD_006e74ad_default:
      }
      for (puVar3 = *(undefined4 **)((int)this + 0x44e); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        if (*(double *)((int)this + 200) <= (double)(int)puVar3[2]) {
          dVar1 = ((double)(int)puVar3[2] / *(double *)((int)this + 200)) *
                  (((double)*(int *)((int)this + 0x3dc) * _DAT_0079df60) /
                  (double)(int)**(short **)((int)this + 0x280));
          Library::MSVCRT::FUN_00730450(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
          lVar16 = Library::MSVCRT::__ftol();
          iVar6 = (int)lVar16;
          switch(*(undefined4 *)((int)this + 0xa8)) {
          case 0:
            lVar16 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar16;
            lVar16 = Library::MSVCRT::__ftol();
            iVar5 = (int)lVar16;
            break;
          case 1:
            lVar16 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar16;
            lVar16 = Library::MSVCRT::__ftol();
            iVar5 = (int)lVar16;
            break;
          case 2:
            lVar16 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar16;
            lVar16 = Library::MSVCRT::__ftol();
            iVar5 = (int)lVar16;
            break;
          case 3:
            lVar16 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar16;
            lVar16 = Library::MSVCRT::__ftol();
            iVar5 = (int)lVar16;
            break;
          default:
            iVar5 = 0;
            local_30 = 0;
          }
          iVar14 = local_30;
          iVar11 = iVar6 * iVar6;
          iVar10 = iVar11 * 2;
          iVar8 = 0;
          local_48 = -iVar6;
          local_34 = 0;
          local_18 = (local_48 + 1) * iVar11 + ((int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2);
          local_2c = iVar10 * iVar6;
          local_3c = iVar5 + local_48;
          local_40 = iVar5 + iVar6;
          local_24 = DAT_00856d88 - local_3c * DAT_00856d8c;
          local_28 = DAT_00856d88 - local_40 * DAT_00856d8c;
          if (local_3c < DAT_00856d84) {
            local_8 = (DAT_00856d84 - iVar5) + iVar6;
            local_c = iVar5 + DAT_00856d84 + local_48;
          }
          else {
            local_8 = (DAT_00856d84 - *(int *)((int)this + 0x3dc)) + iVar5 + 1 + local_48;
            local_c = (*(int *)((int)this + 0x3dc) - iVar5) + iVar6 + -1 + DAT_00856d84;
          }
          if (local_40 < DAT_00856d84) {
            local_10 = (DAT_00856d84 - iVar5) + local_48;
            local_14 = DAT_00856d84 + iVar6 + iVar5;
          }
          else {
            local_10 = (DAT_00856d84 - *(int *)((int)this + 0x3dc)) + iVar6 + 1 + iVar5;
            local_14 = (*(int *)((int)this + 0x3dc) - iVar5) + DAT_00856d84 + -1 + local_48;
          }
          if (0 < local_2c) {
            do {
              if ((local_8 <= iVar14 + iVar8) && (iVar14 + iVar8 <= local_c)) {
                *(undefined1 *)(local_24 + iVar14 + iVar8) = *(undefined1 *)(puVar3 + 5);
              }
              if ((local_8 <= local_30) && (local_30 <= local_c)) {
                *(undefined1 *)((local_24 - iVar8) + iVar14) = *(undefined1 *)(puVar3 + 5);
              }
              if ((local_10 <= iVar14 + iVar8) && (iVar14 + iVar8 <= local_14)) {
                *(undefined1 *)(local_28 + iVar14 + iVar8) = *(undefined1 *)(puVar3 + 5);
              }
              if ((local_10 <= local_30) && (local_30 <= local_14)) {
                *(undefined1 *)((local_28 - iVar8) + iVar14) = *(undefined1 *)(puVar3 + 5);
              }
              if (0 < local_18) {
                local_48 = local_48 + 1;
                local_3c = local_3c + 1;
                local_40 = local_40 + -1;
                local_24 = local_24 - DAT_00856d8c;
                local_28 = local_28 + DAT_00856d8c;
                local_2c = local_2c + iVar11 * -2;
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
              iVar8 = iVar8 + 1;
              local_30 = local_30 + -1;
              local_34 = local_34 + iVar10;
              local_18 = local_18 + local_34 + iVar11;
            } while (local_34 < local_2c);
          }
          local_18 = local_18 - (local_34 + local_2c) / 2;
          if (local_48 < 1) {
            local_3c = iVar5 + local_48;
            local_40 = iVar5 - local_48;
            local_20 = iVar14 - iVar8;
            local_30 = iVar14 + iVar8;
            local_48 = 1 - local_48;
            do {
              if ((local_8 <= local_30) && (local_30 <= local_c)) {
                *(undefined1 *)(local_24 + iVar14 + iVar8) = *(undefined1 *)(puVar3 + 5);
              }
              if ((local_8 <= local_20) && (local_20 <= local_c)) {
                *(undefined1 *)((local_24 - iVar8) + iVar14) = *(undefined1 *)(puVar3 + 5);
              }
              if ((local_10 <= local_30) && (local_30 <= local_14)) {
                *(undefined1 *)(local_28 + iVar14 + iVar8) = *(undefined1 *)(puVar3 + 5);
              }
              if ((local_10 <= local_20) && (local_20 <= local_14)) {
                *(undefined1 *)((local_28 - iVar8) + iVar14) = *(undefined1 *)(puVar3 + 5);
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
                iVar8 = iVar8 + 1;
                local_30 = local_30 + 1;
                local_20 = local_20 + -1;
                local_34 = local_34 + iVar10;
                local_18 = local_18 + local_34;
              }
              local_2c = local_2c + iVar11 * -2;
              local_18 = local_18 + (iVar11 - local_2c);
              local_48 = local_48 + -1;
            } while (local_48 != 0);
          }
        }
      }
      puVar12 = *(uint **)((int)this + 0x31c);
      pbVar15 = *(byte **)((int)this + 0x420);
      if (0 < local_4c) {
        do {
          if (((pbVar15[3] & 1) != 0) && ((*pbVar15 & *(byte *)((int)this + 0x418)) != 0)) {
            if (((*puVar12 & 0x800000) != 0) || (*(int *)((int)this + 0x3e0) != 0)) {
              dVar1 = (double)((float)puVar12[0x1d] / (float)*(double *)((int)this + 200));
              Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar16 = Library::MSVCRT::__ftol();
              *(byte *)(puVar12 + 0x44) = (byte)lVar16;
              if (**(short **)((int)this + 0x280) <= (short)(ushort)(byte)lVar16) {
                *(char *)(puVar12 + 0x44) = (char)**(short **)((int)this + 0x280) + -1;
              }
              dVar1 = (double)((float)puVar12[0x1e] / (float)*(double *)((int)this + 200));
              Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar16 = Library::MSVCRT::__ftol();
              *(byte *)((int)puVar12 + 0x111) = (byte)lVar16;
              if (*(short *)(*(int *)((int)this + 0x280) + 2) <= (short)(ushort)(byte)lVar16) {
                *(char *)((int)puVar12 + 0x111) = *(char *)(*(int *)((int)this + 0x280) + 2) + -1;
              }
              dVar1 = (double)((float)puVar12[0x1f] / (float)*(double *)((int)this + 0xd0));
              Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar16 = Library::MSVCRT::__ftol();
              *(byte *)((int)puVar12 + 0x112) = (byte)lVar16;
              if (4 < (byte)lVar16) {
                *(undefined1 *)((int)puVar12 + 0x112) = 4;
              }
              switch(*(undefined4 *)((int)this + 0xa8)) {
              case 0:
                lVar16 = Library::MSVCRT::__ftol();
                puVar12[0x42] = (uint)lVar16;
                break;
              case 1:
                lVar16 = Library::MSVCRT::__ftol();
                puVar12[0x42] = (uint)lVar16;
                break;
              case 2:
                lVar16 = Library::MSVCRT::__ftol();
                puVar12[0x42] = (uint)lVar16;
                break;
              case 3:
                lVar16 = Library::MSVCRT::__ftol();
                puVar12[0x42] = (uint)lVar16;
                break;
              default:
                goto switchD_006e7e25_default;
              }
              lVar16 = Library::MSVCRT::__ftol();
              puVar12[0x43] = (uint)lVar16;
switchD_006e7e25_default:
              if ((int)puVar12[0x43] < 1) {
                puVar12[0x43] = 1;
              }
              if (*(int *)((int)this + 0x3dc) + -2 <= (int)puVar12[0x43]) {
                puVar12[0x43] = *(int *)((int)this + 0x3dc) - 3;
              }
              uVar13 = puVar12[0x43];
              if (DAT_00856d84 < (int)uVar13) {
                if ((int)puVar12[0x42] <=
                    (int)((uVar13 - *(int *)((int)this + 0x3dc)) + 1 + DAT_00856d84)) {
                  puVar12[0x42] = (puVar12[0x43] - *(int *)((int)this + 0x3dc)) + 2 + DAT_00856d84;
                }
                if ((int)((*(int *)((int)this + 0x3dc) - puVar12[0x43]) + -2 + DAT_00856d84) <=
                    (int)puVar12[0x42]) {
                  uVar13 = (*(int *)((int)this + 0x3dc) - puVar12[0x43]) + -3 + DAT_00856d84;
                  goto LAB_006e7ff9;
                }
              }
              else {
                if ((int)puVar12[0x42] < (int)(DAT_00856d84 - uVar13)) {
                  puVar12[0x42] = DAT_00856d84 - puVar12[0x43];
                }
                if ((int)(puVar12[0x43] + DAT_00856d84) <= (int)puVar12[0x42]) {
                  uVar13 = (puVar12[0x43] - 1) + DAT_00856d84;
LAB_006e7ff9:
                  puVar12[0x42] = uVar13;
                }
              }
              *puVar12 = *puVar12 & 0xff7fffff;
            }
            pbVar7 = (byte *)((puVar12[0x42] - puVar12[0x43] * DAT_00856d8c) + DAT_00856d88);
            *pbVar7 = pbVar15[1];
            pbVar7[1] = pbVar15[1];
            pbVar7[-DAT_00856d8c] = pbVar15[1];
            pbVar7[1 - DAT_00856d8c] = pbVar15[1];
          }
          pbVar15 = pbVar15 + 4;
          puVar12 = puVar12 + 0x45;
          local_4c = local_4c + -1;
        } while (local_4c != 0);
      }
      if (0 < *(int *)((int)this + 1000)) {
        iVar6 = *(int *)((int)this + 0x3f0) + param_2;
        iVar5 = *(int *)((int)this + 0x3ec) + param_2;
        if (iVar5 < iVar6) {
          iVar10 = *(int *)((int)this + 1000) + param_3;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar5,iVar10,iVar6,iVar10,
                       (byte)*(undefined4 *)((int)this + 0x3e4),0xd);
        }
      }
      if ((*(int *)((int)this + 0x3f4) < *(int *)((int)this + 0x3dc) + -1) &&
         (*(int *)((int)this + 0x3f8) < *(int *)((int)this + 0x3fc))) {
        iVar6 = *(int *)((int)this + 0x3f4) + param_3;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,*(int *)((int)this + 0x3f8) + param_2,
                     iVar6,*(int *)((int)this + 0x3fc) + param_2,iVar6,
                     (byte)*(undefined4 *)((int)this + 0x3e4),0xd);
      }
      if ((0 < *(int *)((int)this + 0x400)) &&
         (*(int *)((int)this + 0x404) < *(int *)((int)this + 0x408))) {
        iVar6 = *(int *)((int)this + 0x400) + param_2;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar6,
                     *(int *)((int)this + 0x404) + param_3,iVar6,
                     *(int *)((int)this + 0x408) + param_3,(byte)*(undefined4 *)((int)this + 0x3e4),
                     0xd);
      }
      if (*(int *)((int)this + 0x40c) < *(int *)((int)this + 0x3dc) + -1) {
        if (*(int *)((int)this + 0x410) < *(int *)((int)this + 0x414)) {
          iVar6 = param_2 + *(int *)((int)this + 0x40c);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar6,
                       *(int *)((int)this + 0x410) + param_3,iVar6,
                       *(int *)((int)this + 0x414) + param_3,
                       (byte)*(undefined4 *)((int)this + 0x3e4),0xd);
        }
      }
      uVar13 = -*(int *)((int)this + 0xa8) & 3;
      iVar6 = *(int *)((int)this + uVar13 * 4 + 0x456);
      if (iVar6 != 0) {
        FUN_006d25e0((byte *)((DAT_00856d84 -
                              (DAT_00856d8c + 1) * ((int)*(short *)(iVar6 + 0x12) / 2)) +
                             DAT_00856d88),-DAT_00856d8c,
                     (byte *)((*(byte *)(iVar6 + 0xd) >> 1 & 0xe) + 0x16 + iVar6),
                     (int)*(short *)(iVar6 + 0x12),(int)*(short *)(iVar6 + 0x14));
      }
      uVar13 = uVar13 + 1 & 3;
      iVar6 = *(int *)((int)this + uVar13 * 4 + 0x456);
      if (iVar6 != 0) {
        iVar5 = (int)*(short *)(iVar6 + 0x14) / 2;
        FUN_006d25e0((byte *)((DAT_00856d88 - (DAT_00856d84 - iVar5) * DAT_00856d8c) + iVar5),
                     -DAT_00856d8c,(byte *)((*(byte *)(iVar6 + 0xd) >> 1 & 0xe) + 0x16 + iVar6),
                     (int)*(short *)(iVar6 + 0x12),(int)*(short *)(iVar6 + 0x14));
      }
      uVar13 = uVar13 + 1 & 3;
      iVar6 = *(int *)((int)this + uVar13 * 4 + 0x456);
      if (iVar6 != 0) {
        iVar5 = (int)*(short *)(iVar6 + 0x12);
        FUN_006d25e0((byte *)((-(((*(int *)((int)this + 0x3dc) - iVar5 / 2) -
                                 (int)*(short *)(iVar6 + 0x14)) * DAT_00856d8c) - iVar5 / 2) +
                              DAT_00856d84 + DAT_00856d88),-DAT_00856d8c,
                     (byte *)((*(byte *)(iVar6 + 0xd) >> 1 & 0xe) + 0x16 + iVar6),iVar5,
                     (int)*(short *)(iVar6 + 0x14));
      }
      iVar6 = *(int *)((int)this + (uVar13 + 1 & 3) * 4 + 0x456);
      if (iVar6 != 0) {
        iVar5 = (int)*(short *)(iVar6 + 0x14);
        FUN_006d25e0((byte *)(((-((DAT_00856d84 - iVar5 / 2) * DAT_00856d8c) - iVar5 / 2) -
                              (int)*(short *)(iVar6 + 0x12)) + DAT_00856d88 +
                             *(int *)((int)this + 0x3dc)),-DAT_00856d8c,
                     (byte *)((*(byte *)(iVar6 + 0xd) >> 1 & 0xe) + 0x16 + iVar6),
                     (int)*(short *)(iVar6 + 0x12),iVar5);
      }
    }
    pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)((int)this + 0x442);
    while (pAVar2 != (AnonShape_006E6AF0_D2F012A7 *)0x0) {
      if (param_4 != 0) {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006E6AF0::FUN_006e6af0(this,pAVar2);
      }
      *(short *)&pAVar2->field_0x14 = *(short *)&pAVar2->field_0x14 + -1;
      if (*(short *)&pAVar2->field_0x14 < 1) {
        *(undefined2 *)&pAVar2->field_0x14 = *(undefined2 *)&pAVar2->field_0x12;
        pAVar2->field_0x16 = pAVar2->field_0x16 + '\x01';
      }
      if ((byte)pAVar2->field_0x16 < (byte)pAVar2->field_0x17) {
        pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2;
      }
      else {
        pAVar4 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2;
        FUN_006b98c0((int *)((int)this + 0x442),(int *)pAVar2);
        FUN_006a5e90((short *)pAVar2);
        pAVar2 = pAVar4;
      }
    }
    if (param_4 != 0) {
      for (pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)((int)this + 0x44a);
          pAVar2 != (AnonShape_006E6AF0_D2F012A7 *)0x0;
          pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2) {
        if (pAVar2->field_0xc == '\0') {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006E6AF0::FUN_006e6af0(this,pAVar2);
        }
      }
      for (pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)((int)this + 0x446);
          pAVar2 != (AnonShape_006E6AF0_D2F012A7 *)0x0;
          pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2) {
        if (pAVar2->field_0xc == '\0') {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006E6AF0::FUN_006e6af0(this,pAVar2);
        }
      }
    }
    *(undefined4 *)((int)this + 0x3e0) = 0;
  }
  return;
}

