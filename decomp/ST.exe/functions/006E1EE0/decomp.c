
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_004248D0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=26; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=21; adopt_untyped_existing_thiscall */

bool __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e1ee0
          (AnonReceiver_004248D0 *this,AnonShape_006E1EE0_698AE49A *param_1,undefined4 *param_2,
          int param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int *piVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 *puVar14;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_14;
  int local_c;

  pbVar12 = (byte *)param_1->field_0028;
  local_3c = 0;
  if ((*(int *)&this->field_0x124 == 0) || (*(int *)&this->field_0x124 == 10)) {
    local_50 = param_1->field_003C;
  }
  else {
    local_50 = 0;
  }
  puVar14 = param_2;
  for (iVar10 = (param_1->field_001C & 0xfffffff) << 2; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar14 = 0xffffffff;
    puVar14 = puVar14 + 1;
  }
  local_30 = 0x7fffffff;
  for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined1 *)puVar14 = 0xff;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  local_34 = -0x7fffffff;
  local_20 = -0x7fffffff;
  local_14 = -0x7fffffff;
  local_1c = 0x7fffffff;
  local_c = 0x7fffffff;
  bVar1 = 0xff;
  switch(param_1->field_0024) {
  case 4:
    bVar1 = pbVar12[0x54] & 0x20;
  case 3:
    bVar1 = bVar1 & pbVar12[0x38] & 0x20;
  case 2:
    bVar1 = bVar1 & pbVar12[0x1c] & 0x20;
  case 1:
    bVar1 = bVar1 & *pbVar12 & 0x20;
    break;
  default:
    bVar1 = 0;
  }
  iVar10 = *(int *)&this->field_0xa8;
  local_28 = 0;
  local_48 = 0;
  iVar2 = 0x7fffffff;
  if (0 < param_1->field_0024) {
    do {
      if (((this->field_0xac & *pbVar12) != 0) &&
         ((local_50 == 0 ||
          (('\x02' << ((byte)(iVar10 << 1) & 0x1f) & *(byte *)(local_48 + local_50)) != 0)))) {
        iVar2 = (param_2 + (uint)pbVar12[1] * 4)[3];
        if (iVar2 == -1) {
          iVar2 = FUN_006e25d0(this,param_2 + (uint)pbVar12[1] * 4);
        }
        iVar3 = (param_2 + (uint)pbVar12[2] * 4)[3];
        if (iVar3 == -1) {
          iVar3 = FUN_006e25d0(this,param_2 + (uint)pbVar12[2] * 4);
        }
        iVar4 = (param_2 + (uint)pbVar12[3] * 4)[3];
        if (iVar4 == -1) {
          iVar4 = FUN_006e25d0(this,param_2 + (uint)pbVar12[3] * 4);
        }
        local_2c = param_2[(uint)pbVar12[1] * 4 + 1];
        piVar11 = param_2 + (uint)pbVar12[2] * 4;
        local_38 = param_2[(uint)pbVar12[1] * 4];
        iVar6 = *piVar11;
        local_40 = local_38;
        if (iVar6 < local_38) {
          local_40 = iVar6;
        }
        if (local_38 < iVar6) {
          local_38 = iVar6;
        }
        iVar6 = piVar11[1];
        local_44 = local_2c;
        if (iVar6 < local_2c) {
          local_44 = iVar6;
        }
        if (local_2c < iVar6) {
          local_2c = iVar6;
        }
        piVar5 = param_2 + (uint)pbVar12[3] * 4;
        iVar6 = *piVar5;
        if (iVar6 < local_40) {
          local_40 = iVar6;
        }
        if (local_38 < iVar6) {
          local_38 = iVar6;
        }
        iVar6 = piVar5[1];
        if (iVar6 < local_44) {
          local_44 = iVar6;
        }
        if (local_2c < iVar6) {
          local_2c = iVar6;
        }
        if (((iVar2 != 0 || iVar3 != 0) || iVar4 != 0) ||
           ((((local_40 >> 0x10 < *(int *)&this->field_0x38 &&
              (*(int *)&this->field_0x30 <= local_38 >> 0x10)) &&
             (local_44 >> 0x10 < *(int *)&this->field_0x3c)) &&
            (*(int *)&this->field_0x34 <= local_2c >> 0x10)))) {
          iVar2 = (param_2 + (uint)pbVar12[1] * 4)[2];
          if (piVar11[2] < iVar2) {
            iVar2 = piVar11[2];
          }
          if (piVar5[2] < iVar2) {
            iVar2 = piVar5[2];
          }
          iVar3 = 0;
          if (0 < local_28) {
            do {
              iVar4 = param_1->field_0028 + (uint)*(byte *)(iVar3 + param_3) * 0x1c;
              if ((((int)param_2[(uint)*(byte *)(iVar4 + 1) * 4 + 2] < iVar2) ||
                  ((int)param_2[(uint)*(byte *)(iVar4 + 2) * 4 + 2] < iVar2)) ||
                 ((int)param_2[(uint)*(byte *)(iVar4 + 3) * 4 + 2] < iVar2)) {
                if (iVar3 < local_28) {
                  Library::MSVCRT::FUN_0072da70
                            ((undefined4 *)(iVar3 + 1 + param_3),(undefined4 *)(iVar3 + param_3),
                             local_28 - iVar3);
                  *(undefined1 *)(iVar3 + param_3) = (undefined1)local_48;
                  goto LAB_006e22a2;
                }
                break;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < local_28);
          }
          *(undefined1 *)(local_28 + param_3) = (undefined1)local_48;
LAB_006e22a2:
          local_28 = local_28 + 1;
          if (bVar1 != 0) {
            local_3c = param_2[(uint)pbVar12[1] * 4 + 2];
            if ((int)param_2[(uint)pbVar12[1] * 4 + 2] < (int)param_2[(uint)pbVar12[2] * 4 + 2]) {
              local_3c = param_2[(uint)pbVar12[2] * 4 + 2];
            }
            if (local_3c < (int)param_2[(uint)pbVar12[3] * 4 + 2]) {
              local_3c = param_2[(uint)pbVar12[3] * 4 + 2];
            }
          }
          if (local_40 < local_30) {
            local_30 = local_40;
          }
          if (local_34 < local_38) {
            local_34 = local_38;
          }
          if (local_44 < local_1c) {
            local_1c = local_44;
          }
          if (local_20 < local_2c) {
            local_20 = local_2c;
          }
          if (iVar2 < local_c) {
            local_c = iVar2;
          }
          if (local_14 < local_3c) {
            local_14 = local_3c;
          }
        }
      }
      local_48 = local_48 + 1;
      pbVar12 = pbVar12 + 0x1c;
      iVar2 = local_1c;
    } while (local_48 < param_1->field_0024);
  }
  iVar10 = local_c;
  if ((*(int *)&this->field_0x2b0 != 0) && (0 < local_28)) {
    local_30 = local_30 >> 0x10;
    iVar3 = *(int *)&this->field_0x2c8;
    if (local_30 - iVar3 < 0) {
      local_30 = iVar3;
    }
    iVar4 = (local_30 - iVar3) / *(int *)&this->field_0x2c0;
    local_34 = local_34 >> 0x10;
    if (*(int *)&this->field_0x28 < local_34) {
      local_34 = *(int *)&this->field_0x28;
    }
    iVar6 = (local_34 - iVar3) / *(int *)&this->field_0x2c0;
    local_1c = iVar2 >> 0x10;
    iVar13 = local_c >> 0x10;
    iVar3 = local_20 >> 0x10;
    if (bVar1 == 0) {
      iVar2 = *(int *)&this->field_0x2cc;
      if (local_1c - iVar2 < 0) {
        local_1c = iVar2;
      }
      iVar7 = (local_1c - iVar2) / *(int *)&this->field_0x2c4;
      if (*(int *)&this->field_0x2c < iVar3) {
        iVar3 = *(int *)&this->field_0x2c;
      }
      iVar3 = (iVar3 - iVar2) / *(int *)&this->field_0x2c4;
      iVar2 = *(int *)&this->field_0x2b0 + iVar7 * *(int *)&this->field_0x2b8 * 2;
      if (iVar7 <= iVar3) {
        param_2 = (undefined4 *)((iVar3 - iVar7) + 1);
        do {
          if (iVar4 <= iVar6) {
            puVar9 = (ushort *)(iVar2 + iVar4 * 2);
            iVar3 = (iVar6 - iVar4) + 1;
            do {
              if (iVar13 < (int)(uint)*puVar9) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c._0_2_ = (ushort)((uint)iVar10 >> 0x10);
                *puVar9 = (ushort)local_c;
              }
              puVar9 = puVar9 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          param_2 = (undefined4 *)((int)param_2 + -1);
          iVar2 = iVar2 + *(int *)&this->field_0x2b8 * 2;
        } while (param_2 != (undefined4 *)0x0);
      }
    }
    else {
      iVar2 = (local_14 - local_c) / (local_20 - iVar2 >> 0x10);
      iVar10 = *(int *)&this->field_0x2cc;
      local_14 = local_14 >> 0x10;
      if (local_1c - iVar10 < 0) {
        local_14 = local_14 - ((iVar10 - local_1c) * iVar2 >> 0x10);
        local_1c = iVar10;
      }
      local_54 = *(int *)&this->field_0x2c4;
      iVar8 = (local_1c - iVar10) / local_54;
      local_14 = local_14 - ((local_54 - (local_1c - iVar10) % local_54) * iVar2 >> 0x10);
      iVar7 = *(int *)&this->field_0x2c;
      if (iVar7 < iVar3) {
        iVar13 = iVar13 + ((iVar3 - iVar7) * iVar2 >> 0x10);
        iVar3 = iVar7;
      }
      local_54 = (iVar3 - iVar10) / local_54;
      iVar10 = *(int *)&this->field_0x2b0 + iVar8 * *(int *)&this->field_0x2b8 * 2;
      if (iVar8 < local_54) {
        local_54 = local_54 - iVar8;
        do {
          if (iVar4 <= iVar6) {
            puVar9 = (ushort *)(iVar10 + iVar4 * 2);
            iVar3 = (iVar6 - iVar4) + 1;
            do {
              if (iVar13 < (int)(uint)*puVar9) {
                *puVar9 = (ushort)local_14;
              }
              puVar9 = puVar9 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          local_14 = local_14 - (iVar2 * *(int *)&this->field_0x2c4 >> 0x10);
          iVar10 = iVar10 + *(int *)&this->field_0x2b8 * 2;
          local_54 = local_54 + -1;
        } while (local_54 != 0);
      }
      if (iVar4 <= iVar6) {
        puVar9 = (ushort *)(iVar10 + iVar4 * 2);
        iVar10 = (iVar6 - iVar4) + 1;
        do {
          if (iVar13 < (int)(uint)*puVar9) {
            *puVar9 = (ushort)iVar13;
          }
          puVar9 = puVar9 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
  }
  *param_4 = local_28;
  return local_28 != 0;
}

