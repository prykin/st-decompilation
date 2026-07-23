
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=12; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall CGenerate::sub_0069B190(CGenerate *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_18;
  int local_14;
  int local_c;
  int local_8;

  local_c = 0;
  local_18 = 0;
  this->field_582F = param_1 * param_2;
  uVar9 = (param_3 + 1) * param_1 * param_2;
  this->field_5833 = param_1;
  this->field_5837 = param_2;
  FreeAndNull(&this->field_584F);
  uVar4 = uVar9 * 2;
  puVar2 = (ushort *)Library::DKW::LIB::FUN_006aac70(uVar4);
  this->field_584F = puVar2;
  for (uVar9 = (uVar9 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
    puVar2[0] = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (ushort *)((int)puVar2 + 1);
  }
  sub_0069ADA0(this,(int)this->field_584F,param_3 + 1);
  if (0 < param_3) {
    do {
      iVar1 = this->field_582F;
      local_14 = 0;
      if (-1 < this->field_5837) {
        do {
          iVar6 = this->field_5833;
          iVar5 = 0;
          if (-1 < iVar6) {
            iVar7 = iVar6 * local_14 + local_18 * iVar1;
            param_2 = iVar7 * 2;
            do {
              iVar8 = iVar7 + 1;
              iVar5 = iVar5 + 1;
              iVar10 = iVar8;
              if (iVar6 <= iVar5) {
                iVar10 = -1;
              }
              if (this->field_5837 < local_14 + 1) {
                iVar6 = -1;
                local_8 = -1;
              }
              else {
                iVar6 = param_1 + -1 + iVar8;
                if (iVar10 < 0) {
                  local_8 = -1;
                }
                else {
                  local_8 = iVar8 + param_1;
                }
              }
              if (-1 < iVar7) {
                psVar3 = (short *)((int)this->field_584F + param_2);
                if (*psVar3 == -1) {
                  *psVar3 = 1;
                  local_c = local_c + 1;
                }
                if ((((iVar8 != 1 && -1 < iVar7) && (0 < iVar10)) && (0 < iVar6)) && (0 < local_8))
                {
                  puVar2 = this->field_584F;
                  if (((((*(short *)(param_2 + (int)puVar2) == -1) ||
                        (0 < *(short *)(param_2 + (int)puVar2))) &&
                       ((puVar2[iVar10] == 0xffff || (0 < (short)puVar2[iVar10])))) &&
                      ((puVar2[iVar6] == 0xffff || (0 < (short)puVar2[iVar6])))) &&
                     ((puVar2[local_8] == 0xffff || (0 < (short)puVar2[local_8])))) {
                    *(undefined2 *)(param_2 + (int)puVar2) = 4;
                  }
                }
              }
              param_2 = param_2 + 2;
              iVar6 = this->field_5833;
              iVar7 = iVar8;
            } while (iVar5 <= iVar6);
          }
          local_14 = local_14 + 1;
        } while (local_14 <= this->field_5837);
      }
      local_18 = local_18 + 1;
    } while (local_18 < param_3);
  }
  return local_c;
}

