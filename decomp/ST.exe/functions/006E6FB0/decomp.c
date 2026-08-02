
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006E6FB0 -> 006B5B10 @ 006E77B4 | 006E6FB0 -> 006B5B10 @ 006E809F | 006E6FB0 ->
   006B5B10 @ 006E80EC | 006E6FB0 -> 006B5B10 @ 006E812A | 006E6FB0 -> 006B5B10 @ 006E8169

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=95;
   incoming_edx_uses=0; incoming_stack_parameter_uses=19; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_00A8 uses
   /SubmarineTitans/Recovered/Enums/ST3DSMAPContext_field_00A8State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __thiscall
ST3DSMAPContext::sub_006E6FB0
          (ST3DSMAPContext *this,AnonShape_006B5B10_E0D06CF1 *param_1,int param_2,int param_3,
          int param_4)

{
  double dVar1;
  AnonShape_006E6AF0_D2F012A7 *pAVar2;
  AnonPointee_ST3DSMAPContext_0452 *pAVar3;
  AnonPointee_ST3DSMAPContext_044E *pAVar4;
  void *pvVar5;
  AnonShape_006E6AF0_D2F012A7 *pAVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  longlong lVar18;
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

  if (((int)this->field_00A8 < 4) && (this->field_0280 != nullptr))
  {
    _DAT_00856d90 = 0;
    _DAT_00856d94 = 0;
    _DAT_00856d98 = this->field_03DC;
    _DAT_00856d9c = this->field_03DC;
    if (param_4 != 0) {
      iVar8 = param_1->field_0008;
      DAT_00856d8c = (uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc;
      iVar7 = FUN_006b4fa0((int *)param_1);
      local_2c = ((iVar8 - param_3) + -1) * DAT_00856d8c + param_2 + iVar7;
      local_4c = this->field_041C;
      if ((int)this->field_0310 < this->field_041C) {
        local_4c = this->field_0310;
      }
      local_1c = (&this->field_0428)[this->field_00A8];
      DAT_00856d88 = local_2c;
      if (local_1c != 0) {
        if ((this->field_0466 == 0) || ((&this->field_04A2)[this->field_00A8] == 0)) {
          local_20 = 0;
          iVar7 = this->field_03DC / 2;
          iVar8 = iVar7;
          DAT_00856d84 = iVar7;
          if (-1 < iVar7) {
            local_20 = iVar7 + 1;
            local_40 = local_20;
            do {
              if (iVar7 <= iVar8) {
                puVar11 = (undefined1 *)(local_2c + iVar7);
                iVar12 = (iVar8 - iVar7) + 1;
                do {
                  *puVar11 = puVar11[local_1c - local_2c];
                  puVar11 = puVar11 + 1;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
              }
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + this->field_0424;
              iVar7 = iVar7 + -1;
              iVar8 = iVar8 + 1;
              local_40 = local_40 + -1;
            } while (local_40 != 0);
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + -1;
          if (local_20 < this->field_03DC) {
            do {
              iVar7 = iVar7 + 1;
              iVar8 = iVar8 + -1;
              if (iVar7 <= iVar8) {
                puVar11 = (undefined1 *)(local_2c + iVar7);
                iVar12 = (iVar8 - iVar7) + 1;
                do {
                  *puVar11 = puVar11[local_1c - local_2c];
                  puVar11 = puVar11 + 1;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
              }
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + this->field_0424;
              local_20 = local_20 + 1;
            } while (local_20 < this->field_03DC);
          }
        }
        else {
          iVar16 = this->field_03DC / 2;
          iVar7 = (int)*(short *)&this->field_0280->field_0x2;
          iVar12 = (int)*(short *)this->field_0280;
          iVar8 = ((iVar7 + iVar12) * 0xb505) / this->field_03DC;
          switch(this->field_00A8) {
          case CASE_0:
            iVar7 = 0x87c3c;
            iVar13 = (this->field_04B2 * 0x10000) / 2;
            break;
          case CASE_1:
            iVar13 = (iVar12 + 0xc) * 0xb505;
            iVar7 = (int)(this->field_04B6 << 0x10) / 2 + iVar12 * -0xb505;
            break;
          case CASE_2:
            iVar13 = (this->field_04B2 * 0x10000) / 2;
            iVar7 = this->field_04B6 * 0x10000 + (iVar7 + iVar12) * -0xb505 + -0x97c3c;
            break;
          case CASE_3:
            iVar13 = this->field_04B2 * 0x10000 + iVar7 * -0xb505 + -0x97c3c;
            iVar7 = (int)(this->field_04B6 << 0x10) / 2 + iVar7 * -0xb505;
            break;
          default:
            iVar13 = 0;
            iVar7 = 0;
          }
          local_20 = 0;
          DAT_00856d84 = iVar16;
          local_8 = iVar16;
          if (-1 < iVar16) {
            local_20 = iVar16 + 1;
            local_3c = local_20;
            do {
              iVar12 = this->field_04B2;
              iVar10 = (&this->field_04A2)[this->field_00A8];
              if (iVar16 <= local_8) {
                local_38 = (undefined1 *)(local_2c + iVar16);
                local_40 = (local_8 - iVar16) + 1;
                local_28 = iVar13;
                do {
                  if (*(char *)((local_28 >> 0x10) + iVar10 + (iVar7 >> 0x10) * iVar12) == '\0') {
                    *local_38 = this->field_049E;
                  }
                  else {
                    *local_38 = local_38[local_1c - local_2c];
                  }
                  local_28 = local_28 + iVar8;
                  local_38 = local_38 + 1;
                  local_40 = local_40 + -1;
                } while (local_40 != 0);
              }
              iVar7 = iVar7 + iVar8;
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + this->field_0424;
              iVar16 = iVar16 + -1;
              local_8 = local_8 + 1;
              iVar13 = iVar13 - iVar8;
              local_3c = local_3c + -1;
            } while (local_3c != 0);
          }
          iVar16 = iVar16 + 1;
          local_8 = local_8 + -1;
          iVar13 = iVar13 + iVar8;
          if (local_20 < this->field_03DC) {
            do {
              iVar16 = iVar16 + 1;
              local_8 = local_8 + -1;
              iVar13 = iVar13 + iVar8;
              iVar12 = this->field_04B2;
              iVar10 = (&this->field_04A2)[this->field_00A8];
              if (iVar16 <= local_8) {
                local_38 = (undefined1 *)(local_2c + iVar16);
                local_40 = (local_8 - iVar16) + 1;
                local_28 = iVar13;
                do {
                  if (*(char *)((local_28 >> 0x10) + iVar10 + (iVar7 >> 0x10) * iVar12) == '\0') {
                    *local_38 = this->field_049E;
                  }
                  else {
                    *local_38 = local_38[local_1c - local_2c];
                  }
                  local_28 = local_28 + iVar8;
                  local_38 = local_38 + 1;
                  local_40 = local_40 + -1;
                } while (local_40 != 0);
              }
              iVar7 = iVar7 + iVar8;
              local_2c = local_2c - DAT_00856d8c;
              local_1c = local_1c + this->field_0424;
              local_20 = local_20 + 1;
            } while (local_20 < this->field_03DC);
          }
        }
      }
      for (pAVar2 = (AnonShape_006E6AF0_D2F012A7 *)this->field_044A;
          pAVar2 != nullptr;
          pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2) {
        if (pAVar2->field_0xc != '\0') {
          sub_006E6AF0(this,pAVar2);
        }
      }
      for (pAVar2 = (AnonShape_006E6AF0_D2F012A7 *)this->field_0446;
          pAVar2 != nullptr;
          pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2) {
        if (pAVar2->field_0xc != '\0') {
          sub_006E6AF0(this,pAVar2);
        }
      }
      DAT_00856d84 = this->field_03DC / 2;
      _DAT_00856d80 =
           (float)_DAT_0079cd88 / ((float)(int)*(short *)this->field_0280 * (float)this->field_00C8);
      for (pAVar3 = this->field_0452; pAVar3 != nullptr;
          pAVar3 = (AnonPointee_ST3DSMAPContext_0452 *)pAVar3->field_0000) {
        switch(this->field_00A8) {
        case CASE_0:
          lVar18 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar18;
          lVar18 = Library::MSVCRT::__ftol();
          iVar8 = (int)lVar18;
          lVar18 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar18;
          lVar18 = Library::MSVCRT::__ftol();
          iVar7 = (int)lVar18;
          break;
        case CASE_1:
          lVar18 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar18;
          lVar18 = Library::MSVCRT::__ftol();
          iVar8 = (int)lVar18;
          lVar18 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar18;
          lVar18 = Library::MSVCRT::__ftol();
          iVar7 = (int)lVar18;
          break;
        case CASE_2:
          lVar18 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar18;
          lVar18 = Library::MSVCRT::__ftol();
          iVar8 = (int)lVar18;
          lVar18 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar18;
          lVar18 = Library::MSVCRT::__ftol();
          iVar7 = (int)lVar18;
          break;
        case CASE_3:
          lVar18 = Library::MSVCRT::__ftol();
          local_18 = (int)lVar18;
          lVar18 = Library::MSVCRT::__ftol();
          iVar8 = (int)lVar18;
          lVar18 = Library::MSVCRT::__ftol();
          local_8 = (int)lVar18;
          lVar18 = Library::MSVCRT::__ftol();
          iVar7 = (int)lVar18;
          break;
        default:
          goto switchD_006e74ad_default;
        }
        if (iVar8 < 1) {
          iVar8 = 1;
        }
        iVar12 = this->field_03DC;
        if (iVar12 + -2 <= iVar8) {
          iVar8 = iVar12 + -3;
        }
        if (DAT_00856d84 < iVar8) {
          iVar16 = (DAT_00856d84 - iVar12) + iVar8;
          if (local_18 <= iVar16 + 1) {
            local_18 = iVar16 + 2;
          }
          iVar16 = (iVar12 - iVar8) + DAT_00856d84;
          if (iVar16 + -2 <= local_18) {
            local_18 = iVar16 + -3;
          }
        }
        else {
          if (local_18 < DAT_00856d84 - iVar8) {
            local_18 = DAT_00856d84 - iVar8;
          }
          if (DAT_00856d84 + iVar8 <= local_18) {
            local_18 = DAT_00856d84 + iVar8 + -1;
          }
        }
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        if (iVar12 + -2 <= iVar7) {
          iVar7 = iVar12 + -3;
        }
        if (DAT_00856d84 < iVar7) {
          iVar16 = (DAT_00856d84 - iVar12) + iVar7;
          if (local_8 <= iVar16 + 1) {
            local_8 = iVar16 + 2;
          }
          iVar12 = (iVar12 - iVar7) + DAT_00856d84;
          if (iVar12 + -2 <= local_8) {
            local_8 = iVar12 + -3;
          }
        }
        else {
          if (local_8 < DAT_00856d84 - iVar7) {
            local_8 = DAT_00856d84 - iVar7;
          }
          if (DAT_00856d84 + iVar7 <= local_8) {
            local_8 = DAT_00856d84 + iVar7 + -1;
          }
        }
        FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,local_18 + param_2,iVar8 + param_3,
                     local_8 + param_2,iVar7 + param_3,(byte)pAVar3->field_0018,0xd);
switchD_006e74ad_default:
      }
      for (pAVar4 = this->field_044E; pAVar4 != nullptr;
          pAVar4 = (AnonPointee_ST3DSMAPContext_044E *)pAVar4->field_0000) {
        if (this->field_00C8 <= (double)pAVar4->field_0008) {
          dVar1 = ((double)pAVar4->field_0008 / this->field_00C8) *
                  (((double)this->field_03DC * _DAT_0079df60) /
                  (double)(int)*(short *)this->field_0280);
          Library::MSVCRT::FUN_00730450(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
          lVar18 = Library::MSVCRT::__ftol();
          iVar8 = (int)lVar18;
          switch(this->field_00A8) {
          case CASE_0:
            lVar18 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar18;
            lVar18 = Library::MSVCRT::__ftol();
            iVar7 = (int)lVar18;
            break;
          case CASE_1:
            lVar18 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar18;
            lVar18 = Library::MSVCRT::__ftol();
            iVar7 = (int)lVar18;
            break;
          case CASE_2:
            lVar18 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar18;
            lVar18 = Library::MSVCRT::__ftol();
            iVar7 = (int)lVar18;
            break;
          case CASE_3:
            lVar18 = Library::MSVCRT::__ftol();
            local_30 = (int)lVar18;
            lVar18 = Library::MSVCRT::__ftol();
            iVar7 = (int)lVar18;
            break;
          default:
            iVar7 = 0;
            local_30 = 0;
          }
          iVar16 = local_30;
          iVar13 = iVar8 * iVar8;
          iVar12 = iVar13 * 2;
          iVar10 = 0;
          local_48 = -iVar8;
          local_34 = 0;
          local_18 = (local_48 + 1) * iVar13 + ((int)(iVar13 + (iVar13 >> 0x1f & 3U)) >> 2);
          local_2c = iVar12 * iVar8;
          local_3c = iVar7 + local_48;
          local_40 = iVar7 + iVar8;
          local_24 = DAT_00856d88 - local_3c * DAT_00856d8c;
          local_28 = DAT_00856d88 - local_40 * DAT_00856d8c;
          if (local_3c < DAT_00856d84) {
            local_8 = (DAT_00856d84 - iVar7) + iVar8;
            local_c = iVar7 + DAT_00856d84 + local_48;
          }
          else {
            local_8 = (DAT_00856d84 - this->field_03DC) + iVar7 + 1 + local_48;
            local_c = (this->field_03DC - iVar7) + iVar8 + -1 + DAT_00856d84;
          }
          if (local_40 < DAT_00856d84) {
            local_10 = (DAT_00856d84 - iVar7) + local_48;
            local_14 = DAT_00856d84 + iVar8 + iVar7;
          }
          else {
            local_10 = (DAT_00856d84 - this->field_03DC) + iVar8 + 1 + iVar7;
            local_14 = (this->field_03DC - iVar7) + DAT_00856d84 + -1 + local_48;
          }
          if (0 < local_2c) {
            do {
              if ((local_8 <= iVar16 + iVar10) && (iVar16 + iVar10 <= local_c)) {
                *(undefined1 *)(local_24 + iVar16 + iVar10) = pAVar4->field_0014;
              }
              if ((local_8 <= local_30) && (local_30 <= local_c)) {
                *(undefined1 *)((local_24 - iVar10) + iVar16) = pAVar4->field_0014;
              }
              if ((local_10 <= iVar16 + iVar10) && (iVar16 + iVar10 <= local_14)) {
                *(undefined1 *)(local_28 + iVar16 + iVar10) = pAVar4->field_0014;
              }
              if ((local_10 <= local_30) && (local_30 <= local_14)) {
                *(undefined1 *)((local_28 - iVar10) + iVar16) = pAVar4->field_0014;
              }
              if (0 < local_18) {
                local_48 = local_48 + 1;
                local_3c = local_3c + 1;
                local_40 = local_40 + -1;
                local_24 = local_24 - DAT_00856d8c;
                local_28 = local_28 + DAT_00856d8c;
                local_2c = local_2c + iVar13 * -2;
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
              iVar10 = iVar10 + 1;
              local_30 = local_30 + -1;
              local_34 = local_34 + iVar12;
              local_18 = local_18 + local_34 + iVar13;
            } while (local_34 < local_2c);
          }
          local_18 = local_18 - (local_34 + local_2c) / 2;
          if (local_48 < 1) {
            local_3c = iVar7 + local_48;
            local_40 = iVar7 - local_48;
            local_20 = iVar16 - iVar10;
            local_30 = iVar16 + iVar10;
            local_48 = 1 - local_48;
            do {
              if ((local_8 <= local_30) && (local_30 <= local_c)) {
                *(undefined1 *)(local_24 + iVar16 + iVar10) = pAVar4->field_0014;
              }
              if ((local_8 <= local_20) && (local_20 <= local_c)) {
                *(undefined1 *)((local_24 - iVar10) + iVar16) = pAVar4->field_0014;
              }
              if ((local_10 <= local_30) && (local_30 <= local_14)) {
                *(undefined1 *)(local_28 + iVar16 + iVar10) = pAVar4->field_0014;
              }
              if ((local_10 <= local_20) && (local_20 <= local_14)) {
                *(undefined1 *)((local_28 - iVar10) + iVar16) = pAVar4->field_0014;
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
                iVar10 = iVar10 + 1;
                local_30 = local_30 + 1;
                local_20 = local_20 + -1;
                local_34 = local_34 + iVar12;
                local_18 = local_18 + local_34;
              }
              local_2c = local_2c + iVar13 * -2;
              local_18 = local_18 + (iVar13 - local_2c);
              local_48 = local_48 + -1;
            } while (local_48 != 0);
          }
        }
      }
      puVar14 = (uint *)this->field_031C;
      pbVar17 = this->field_0420;
      if (0 < local_4c) {
        do {
          if (((pbVar17[3] & 1) != 0) && ((*pbVar17 & (byte)this->field_0418) != 0)) {
            if (((*puVar14 & 0x800000) != 0) || (this->field_03E0 != 0)) {
              dVar1 = (double)((float)puVar14[0x1d] / (float)this->field_00C8);
              Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar18 = Library::MSVCRT::__ftol();
              *(byte *)(puVar14 + 0x44) = (byte)lVar18;
              if (*(short *)this->field_0280 <= (short)(ushort)(byte)lVar18) {
                *(char *)(puVar14 + 0x44) = *(char *)this->field_0280 + -1;
              }
              dVar1 = (double)((float)puVar14[0x1e] / (float)this->field_00C8);
              Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar18 = Library::MSVCRT::__ftol();
              *(byte *)((int)puVar14 + 0x111) = (byte)lVar18;
              if (*(short *)&this->field_0280->field_0x2 <= (short)(ushort)(byte)lVar18) {
                *(char *)((int)puVar14 + 0x111) = this->field_0280->field_0x2 + -1;
              }
              dVar1 = (double)((float)puVar14[0x1f] / (float)this->field_00D0);
              Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
              lVar18 = Library::MSVCRT::__ftol();
              *(byte *)((int)puVar14 + 0x112) = (byte)lVar18;
              if (4 < (byte)lVar18) {
                *(undefined1 *)((int)puVar14 + 0x112) = 4;
              }
              switch(this->field_00A8) {
              case CASE_0:
                lVar18 = Library::MSVCRT::__ftol();
                puVar14[0x42] = (uint)lVar18;
                break;
              case CASE_1:
                lVar18 = Library::MSVCRT::__ftol();
                puVar14[0x42] = (uint)lVar18;
                break;
              case CASE_2:
                lVar18 = Library::MSVCRT::__ftol();
                puVar14[0x42] = (uint)lVar18;
                break;
              case CASE_3:
                lVar18 = Library::MSVCRT::__ftol();
                puVar14[0x42] = (uint)lVar18;
                break;
              default:
                goto switchD_006e7e25_default;
              }
              lVar18 = Library::MSVCRT::__ftol();
              puVar14[0x43] = (uint)lVar18;
switchD_006e7e25_default:
              if ((int)puVar14[0x43] < 1) {
                puVar14[0x43] = 1;
              }
              if (this->field_03DC + -2 <= (int)puVar14[0x43]) {
                puVar14[0x43] = this->field_03DC - 3;
              }
              uVar15 = puVar14[0x43];
              if (DAT_00856d84 < (int)uVar15) {
                if ((int)puVar14[0x42] <= (int)((uVar15 - this->field_03DC) + 1 + DAT_00856d84)) {
                  puVar14[0x42] = (puVar14[0x43] - this->field_03DC) + 2 + DAT_00856d84;
                }
                if ((int)((this->field_03DC - puVar14[0x43]) + -2 + DAT_00856d84) <=
                    (int)puVar14[0x42]) {
                  uVar15 = (this->field_03DC - puVar14[0x43]) + -3 + DAT_00856d84;
                  goto LAB_006e7ff9;
                }
              }
              else {
                if ((int)puVar14[0x42] < (int)(DAT_00856d84 - uVar15)) {
                  puVar14[0x42] = DAT_00856d84 - puVar14[0x43];
                }
                if ((int)(puVar14[0x43] + DAT_00856d84) <= (int)puVar14[0x42]) {
                  uVar15 = (puVar14[0x43] - 1) + DAT_00856d84;
LAB_006e7ff9:
                  puVar14[0x42] = uVar15;
                }
              }
              *puVar14 = *puVar14 & 0xff7fffff;
            }
            pbVar9 = (byte *)((puVar14[0x42] - puVar14[0x43] * DAT_00856d8c) + DAT_00856d88);
            *pbVar9 = pbVar17[1];
            pbVar9[1] = pbVar17[1];
            pbVar9[-DAT_00856d8c] = pbVar17[1];
            pbVar9[1 - DAT_00856d8c] = pbVar17[1];
          }
          pbVar17 = pbVar17 + 4;
          puVar14 = puVar14 + 0x45;
          local_4c = local_4c + -1;
        } while (local_4c != 0);
      }
      if (0 < this->field_03E8) {
        iVar8 = this->field_03F0 + param_2;
        iVar7 = this->field_03EC + param_2;
        if (iVar7 < iVar8) {
          iVar12 = this->field_03E8 + param_3;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar7,iVar12,iVar8,iVar12,
                       (byte)this->field_03E4,0xd);
        }
      }
      if ((this->field_03F4 < this->field_03DC + -1) && (this->field_03F8 < this->field_03FC)) {
        iVar8 = this->field_03F4 + param_3;
        FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,this->field_03F8 + param_2,iVar8,
                     this->field_03FC + param_2,iVar8,(byte)this->field_03E4,0xd);
      }
      if ((0 < this->field_0400) && (this->field_0404 < this->field_0408)) {
        iVar8 = this->field_0400 + param_2;
        FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar8,this->field_0404 + param_3,iVar8
                     ,this->field_0408 + param_3,(byte)this->field_03E4,0xd);
      }
      if (this->field_040C < this->field_03DC + -1) {
        if (this->field_0410 < this->field_0414) {
          iVar8 = param_2 + this->field_040C;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar8,this->field_0410 + param_3,
                       iVar8,this->field_0414 + param_3,(byte)this->field_03E4,0xd);
        }
      }
      uVar15 = -this->field_00A8 & 3;
      pvVar5 = (&this->field_0456)[uVar15];
      if (pvVar5 != nullptr) {
        FUN_006d25e0((byte *)((DAT_00856d84 -
                              (DAT_00856d8c + 1) * ((int)*(short *)((int)pvVar5 + 0x12) / 2)) +
                             DAT_00856d88),-DAT_00856d8c,
                     (byte *)((*(byte *)((int)pvVar5 + 0xd) >> 1 & 0xe) + 0x16 + (int)pvVar5),
                     (int)*(short *)((int)pvVar5 + 0x12),(int)*(short *)((int)pvVar5 + 0x14));
      }
      uVar15 = uVar15 + 1 & 3;
      pvVar5 = (&this->field_0456)[uVar15];
      if (pvVar5 != nullptr) {
        iVar8 = (int)*(short *)((int)pvVar5 + 0x14) / 2;
        FUN_006d25e0((byte *)((DAT_00856d88 - (DAT_00856d84 - iVar8) * DAT_00856d8c) + iVar8),
                     -DAT_00856d8c,
                     (byte *)((*(byte *)((int)pvVar5 + 0xd) >> 1 & 0xe) + 0x16 + (int)pvVar5),
                     (int)*(short *)((int)pvVar5 + 0x12),(int)*(short *)((int)pvVar5 + 0x14));
      }
      uVar15 = uVar15 + 1 & 3;
      pvVar5 = (&this->field_0456)[uVar15];
      if (pvVar5 != nullptr) {
        iVar8 = (int)*(short *)((int)pvVar5 + 0x12);
        FUN_006d25e0((byte *)((-(((this->field_03DC - iVar8 / 2) -
                                 (int)*(short *)((int)pvVar5 + 0x14)) * DAT_00856d8c) - iVar8 / 2) +
                              DAT_00856d84 + DAT_00856d88),-DAT_00856d8c,
                     (byte *)((*(byte *)((int)pvVar5 + 0xd) >> 1 & 0xe) + 0x16 + (int)pvVar5),iVar8,
                     (int)*(short *)((int)pvVar5 + 0x14));
      }
      pvVar5 = (&this->field_0456)[uVar15 + 1 & 3];
      if (pvVar5 != nullptr) {
        iVar8 = (int)*(short *)((int)pvVar5 + 0x14);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        FUN_006d25e0((byte *)(((-((DAT_00856d84 - iVar8 / 2) * DAT_00856d8c) - iVar8 / 2) -
                              (int)*(short *)((int)pvVar5 + 0x12)) + DAT_00856d88 + this->field_03DC
                             ),-DAT_00856d8c,
                     (byte *)((*(byte *)((int)pvVar5 + 0xd) >> 1 & 0xe) + 0x16 + (int)pvVar5),
                     (int)*(short *)((int)pvVar5 + 0x12),iVar8);
      }
    }
    pAVar2 = (AnonShape_006E6AF0_D2F012A7 *)this->field_0442;
    while (pAVar2 != nullptr) {
      if (param_4 != 0) {
        sub_006E6AF0(this,pAVar2);
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
        pAVar6 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2;
        FUN_006b98c0((int *)&this->field_0442,(int *)pAVar2);
        FUN_006a5e90((short *)pAVar2);
        pAVar2 = pAVar6;
      }
    }
    if (param_4 != 0) {
      for (pAVar2 = (AnonShape_006E6AF0_D2F012A7 *)this->field_044A;
          pAVar2 != nullptr;
          pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2) {
        if (pAVar2->field_0xc == '\0') {
          sub_006E6AF0(this,pAVar2);
        }
      }
      for (pAVar2 = (AnonShape_006E6AF0_D2F012A7 *)this->field_0446;
          pAVar2 != nullptr;
          pAVar2 = *(AnonShape_006E6AF0_D2F012A7 **)pAVar2) {
        if (pAVar2->field_0xc == '\0') {
          sub_006E6AF0(this,pAVar2);
        }
      }
    }
    this->field_03E0 = 0;
  }
  return;
}

