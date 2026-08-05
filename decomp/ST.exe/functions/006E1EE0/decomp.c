
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_004248D0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=26; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=21; adopt_untyped_existing_thiscall */

bool __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006E1EE0::FUN_006e1ee0
          (AnonReceiver_006E1EE0 *this,AnonShape_006E1EE0_698AE49A *param_1,undefined4 *param_2,
          int param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  int *piVar13;
  byte *pbVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
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

  iVar17 = *(int *)&param_1->field_0x20;
  pbVar14 = (byte *)param_1->field_0028;
  dVar1 = (double)(int)*(short *)&param_1->field_0x4 * *(double *)&this->field_0xc8;
  local_3c = 0;
  dVar2 = (double)(int)*(short *)&param_1->field_0x6 * *(double *)&this->field_0xc8;
  dVar3 = (double)(int)*(short *)&param_1->field_0x8 * *(double *)&this->field_0xd0;
  if ((*(int *)&this->field_0x124 == 0) || (*(int *)&this->field_0x124 == 10)) {
    local_50 = param_1->field_003C;
  }
  else {
    local_50 = 0;
  }
  puVar16 = param_2;
  for (iVar12 = (param_1->field_001C & 0xfffffff) << 2; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar16 = 0xffffffff;
    puVar16 = puVar16 + 1;
  }
  local_30 = 0x7fffffff;
  for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
    *(undefined1 *)puVar16 = 0xff;
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  }
  local_34 = -0x7fffffff;
  local_20 = -0x7fffffff;
  local_14 = -0x7fffffff;
  local_1c = 0x7fffffff;
  local_c = 0x7fffffff;
  bVar4 = 0xff;
  switch(param_1->field_0024) {
  case 4:
    bVar4 = pbVar14[0x54] & 0x20;
  case 3:
    bVar4 = bVar4 & pbVar14[0x38] & 0x20;
  case 2:
    bVar4 = bVar4 & pbVar14[0x1c] & 0x20;
  case 1:
    bVar4 = bVar4 & *pbVar14 & 0x20;
    break;
  default:
    bVar4 = 0;
  }
  iVar12 = *(int *)&this->field_0xa8;
  local_28 = 0;
  local_48 = 0;
  iVar5 = 0x7fffffff;
  if (0 < param_1->field_0024) {
    do {
      if (((this->field_0xac & *pbVar14) != 0) &&
         ((local_50 == 0 ||
          (('\x02' << ((byte)(iVar12 << 1) & 0x1f) & *(byte *)(local_48 + local_50)) != 0)))) {
        iVar5 = (param_2 + (uint)pbVar14[1] * 4)[3];
        if (iVar5 == -1) {
          iVar5 = ST3DSMAPContext::sub_006E25D0
                            ((ST3DSMAPContext *)this,param_2 + (uint)pbVar14[1] * 4,
                             (float *)(iVar17 + (uint)pbVar14[1] * 0xc),dVar1,dVar2,dVar3,1);
        }
        iVar6 = (param_2 + (uint)pbVar14[2] * 4)[3];
        if (iVar6 == -1) {
          iVar6 = ST3DSMAPContext::sub_006E25D0
                            ((ST3DSMAPContext *)this,param_2 + (uint)pbVar14[2] * 4,
                             (float *)(iVar17 + (uint)pbVar14[2] * 0xc),dVar1,dVar2,dVar3,1);
        }
        iVar7 = (param_2 + (uint)pbVar14[3] * 4)[3];
        if (iVar7 == -1) {
          iVar7 = ST3DSMAPContext::sub_006E25D0
                            ((ST3DSMAPContext *)this,param_2 + (uint)pbVar14[3] * 4,
                             (float *)(iVar17 + (uint)pbVar14[3] * 0xc),dVar1,dVar2,dVar3,1);
        }
        local_2c = param_2[(uint)pbVar14[1] * 4 + 1];
        piVar13 = param_2 + (uint)pbVar14[2] * 4;
        local_38 = param_2[(uint)pbVar14[1] * 4];
        iVar15 = *piVar13;
        local_40 = local_38;
        if (iVar15 < local_38) {
          local_40 = iVar15;
        }
        if (local_38 < iVar15) {
          local_38 = iVar15;
        }
        iVar15 = piVar13[1];
        local_44 = local_2c;
        if (iVar15 < local_2c) {
          local_44 = iVar15;
        }
        if (local_2c < iVar15) {
          local_2c = iVar15;
        }
        piVar8 = param_2 + (uint)pbVar14[3] * 4;
        iVar15 = *piVar8;
        if (iVar15 < local_40) {
          local_40 = iVar15;
        }
        if (local_38 < iVar15) {
          local_38 = iVar15;
        }
        iVar15 = piVar8[1];
        if (iVar15 < local_44) {
          local_44 = iVar15;
        }
        if (local_2c < iVar15) {
          local_2c = iVar15;
        }
        if (((iVar5 != 0 || iVar6 != 0) || iVar7 != 0) ||
           ((((local_40 >> 0x10 < *(int *)&this->field_0x38 &&
              (*(int *)&this->field_0x30 <= local_38 >> 0x10)) &&
             (local_44 >> 0x10 < *(int *)&this->field_0x3c)) &&
            (*(int *)&this->field_0x34 <= local_2c >> 0x10)))) {
          iVar5 = (param_2 + (uint)pbVar14[1] * 4)[2];
          if (piVar13[2] < iVar5) {
            iVar5 = piVar13[2];
          }
          if (piVar8[2] < iVar5) {
            iVar5 = piVar8[2];
          }
          iVar6 = 0;
          if (0 < local_28) {
            do {
              iVar7 = param_1->field_0028 + (uint)*(byte *)(iVar6 + param_3) * 0x1c;
              if ((((int)param_2[(uint)*(byte *)(iVar7 + 1) * 4 + 2] < iVar5) ||
                  ((int)param_2[(uint)*(byte *)(iVar7 + 2) * 4 + 2] < iVar5)) ||
                 ((int)param_2[(uint)*(byte *)(iVar7 + 3) * 4 + 2] < iVar5)) {
                if (iVar6 < local_28) {
                  Library::MSVCRT::FUN_0072da70
                            ((undefined4 *)(iVar6 + 1 + param_3),
                             (AnonPointee_TLOBaseTy_0607 *)(iVar6 + param_3),local_28 - iVar6);
                  *(undefined1 *)&((AnonPointee_TLOBaseTy_0607 *)(iVar6 + param_3))->field_0000 =
                       (undefined1)local_48;
                  goto LAB_006e22a2;
                }
                break;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < local_28);
          }
          *(undefined1 *)(local_28 + param_3) = (undefined1)local_48;
LAB_006e22a2:
          local_28 = local_28 + 1;
          if (bVar4 != 0) {
            local_3c = param_2[(uint)pbVar14[1] * 4 + 2];
            if ((int)param_2[(uint)pbVar14[1] * 4 + 2] < (int)param_2[(uint)pbVar14[2] * 4 + 2]) {
              local_3c = param_2[(uint)pbVar14[2] * 4 + 2];
            }
            if (local_3c < (int)param_2[(uint)pbVar14[3] * 4 + 2]) {
              local_3c = param_2[(uint)pbVar14[3] * 4 + 2];
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
          if (iVar5 < local_c) {
            local_c = iVar5;
          }
          if (local_14 < local_3c) {
            local_14 = local_3c;
          }
        }
      }
      local_48 = local_48 + 1;
      pbVar14 = pbVar14 + 0x1c;
      iVar5 = local_1c;
    } while (local_48 < param_1->field_0024);
  }
  iVar17 = local_c;
  if ((*(int *)&this->field_0x2b0 != 0) && (0 < local_28)) {
    local_30 = local_30 >> 0x10;
    iVar12 = *(int *)&this->field_0x2c8;
    if (local_30 - iVar12 < 0) {
      local_30 = iVar12;
    }
    iVar6 = (local_30 - iVar12) / *(int *)&this->field_0x2c0;
    local_34 = local_34 >> 0x10;
    if (*(int *)&this->field_0x28 < local_34) {
      local_34 = *(int *)&this->field_0x28;
    }
    iVar7 = (local_34 - iVar12) / *(int *)&this->field_0x2c0;
    local_1c = iVar5 >> 0x10;
    iVar15 = local_c >> 0x10;
    iVar12 = local_20 >> 0x10;
    if (bVar4 == 0) {
      iVar5 = *(int *)&this->field_0x2cc;
      if (local_1c - iVar5 < 0) {
        local_1c = iVar5;
      }
      iVar9 = (local_1c - iVar5) / *(int *)&this->field_0x2c4;
      if (*(int *)&this->field_0x2c < iVar12) {
        iVar12 = *(int *)&this->field_0x2c;
      }
      iVar5 = (iVar12 - iVar5) / *(int *)&this->field_0x2c4;
      iVar12 = *(int *)&this->field_0x2b0 + iVar9 * *(int *)&this->field_0x2b8 * 2;
      if (iVar9 <= iVar5) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (undefined4 *)((iVar5 - iVar9) + 1);
        do {
          if (iVar6 <= iVar7) {
            puVar11 = (ushort *)(iVar12 + iVar6 * 2);
            iVar5 = (iVar7 - iVar6) + 1;
            do {
              if (iVar15 < (int)(uint)*puVar11) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c._0_2_ = (ushort)((uint)iVar17 >> 0x10);
                *puVar11 = (ushort)local_c;
              }
              puVar11 = puVar11 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (undefined4 *)((int)param_2 + -1);
          iVar12 = iVar12 + *(int *)&this->field_0x2b8 * 2;
        } while (param_2 != nullptr);
      }
    }
    else {
      iVar5 = (local_14 - local_c) / (local_20 - iVar5 >> 0x10);
      iVar17 = *(int *)&this->field_0x2cc;
      local_14 = local_14 >> 0x10;
      if (local_1c - iVar17 < 0) {
        local_14 = local_14 - ((iVar17 - local_1c) * iVar5 >> 0x10);
        local_1c = iVar17;
      }
      local_54 = *(int *)&this->field_0x2c4;
      iVar10 = (local_1c - iVar17) / local_54;
      local_14 = local_14 - ((local_54 - (local_1c - iVar17) % local_54) * iVar5 >> 0x10);
      iVar9 = *(int *)&this->field_0x2c;
      if (iVar9 < iVar12) {
        iVar15 = iVar15 + ((iVar12 - iVar9) * iVar5 >> 0x10);
        iVar12 = iVar9;
      }
      local_54 = (iVar12 - iVar17) / local_54;
      iVar17 = *(int *)&this->field_0x2b0 + iVar10 * *(int *)&this->field_0x2b8 * 2;
      if (iVar10 < local_54) {
        local_54 = local_54 - iVar10;
        do {
          if (iVar6 <= iVar7) {
            puVar11 = (ushort *)(iVar17 + iVar6 * 2);
            iVar12 = (iVar7 - iVar6) + 1;
            do {
              if (iVar15 < (int)(uint)*puVar11) {
                *puVar11 = (ushort)local_14;
              }
              puVar11 = puVar11 + 1;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          local_14 = local_14 - (iVar5 * *(int *)&this->field_0x2c4 >> 0x10);
          iVar17 = iVar17 + *(int *)&this->field_0x2b8 * 2;
          local_54 = local_54 + -1;
        } while (local_54 != 0);
      }
      if (iVar6 <= iVar7) {
        puVar11 = (ushort *)(iVar17 + iVar6 * 2);
        iVar17 = (iVar7 - iVar6) + 1;
        do {
          if (iVar15 < (int)(uint)*puVar11) {
            *puVar11 = (ushort)iVar15;
          }
          puVar11 = puVar11 + 1;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
    }
  }
  *param_4 = local_28;
  return local_28 != 0;
}

