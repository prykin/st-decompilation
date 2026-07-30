
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=12;
   incoming_edx_uses=2; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_0069ADA0(CGenerate *this,int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  short *psVar6;
  byte bVar7;
  int iVar8;
  int uVar10;
  short *psVar9;
  int uVar12;
  uint uVar13;
  int uVar11;
  int local_18;
  int local_14;
  int local_10;

  iVar1 = param_2;
  pbVar5 = this->field_000C;
  iVar3 = (int)*(short *)(pbVar5 + 2) * (int)*(short *)pbVar5;
  local_18 = 0;
  if (0 < *(int *)(pbVar5 + 0x455)) {
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar8 = *(int *)(pbVar5 + local_18 * 4 + 0x459);
      if (iVar8 != 0) {
        iVar4 = (int)*(short *)(iVar8 + 8);
        psVar6 = (short *)(param_1 +
                          ((int)*(short *)(iVar8 + 6) * (int)*(short *)pbVar5 + iVar4 * iVar3 +
                          (int)*(short *)(iVar8 + 4)) * 2);
        if (*(short *)(iVar8 + 8) == 0) {
          *psVar6 = -1;
          psVar6[1] = -1;
          psVar6[*(short *)this->field_000C] = -1;
          psVar6[*(short *)this->field_000C + 1] = -1;
        }
        else {
          uVar10 = 0x8000;
          local_14 = 0;
          uVar11 = 8;
          uVar12 = 0x80;
          if (param_2 <= iVar4) {
            local_14 = (iVar4 - param_2) + 1;
            bVar7 = (byte)local_14;
            uVar11 = 8 >> (bVar7 & 0x1f);
            psVar6 = psVar6 + -(local_14 * iVar3);
            uVar12 = 0x80 >> (bVar7 & 0x1f);
            uVar10 = 0x8000 >> (bVar7 & 0x1f);
          }
          if (local_14 < (int)(uint)*(byte *)(iVar8 + 0x48)) {
            local_14 = (uint)*(byte *)(iVar8 + 0x48) - local_14;
            do {
              uVar13 = *(uint *)(iVar8 + 0x2c);
              if ((uVar11 & uVar13) != 0) {
                if ((uVar12 & uVar13) == 0) {
                  sVar2 = (-(ushort)((uVar13 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar2 = -1;
                }
                *psVar6 = sVar2;
              }
              uVar13 = *(uint *)(iVar8 + 0x30);
              if ((uVar11 & uVar13) != 0) {
                if ((uVar12 & uVar13) == 0) {
                  sVar2 = (-(ushort)((uVar13 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar2 = -1;
                }
                psVar6[1] = sVar2;
              }
              uVar13 = *(uint *)(iVar8 + 0x34);
              if ((uVar11 & uVar13) != 0) {
                if ((uVar12 & uVar13) == 0) {
                  sVar2 = (-(ushort)((uVar13 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar2 = -1;
                }
                psVar6[*(short *)this->field_000C] = sVar2;
              }
              uVar13 = *(uint *)(iVar8 + 0x38);
              if ((uVar11 & uVar13) != 0) {
                if ((uVar12 & uVar13) == 0) {
                  sVar2 = (-(ushort)((uVar13 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar2 = -1;
                }
                psVar6[*(short *)this->field_000C + 1] = sVar2;
              }
              psVar6 = psVar6 + -iVar3;
              uVar11 = uVar11 >> 1;
              uVar12 = uVar12 >> 1;
              uVar10 = uVar10 >> 1;
              local_14 = local_14 + -1;
            } while (local_14 != 0);
          }
          if ((*(byte *)(iVar8 + 0x4f) & 0x10) != 0) {
            if (uVar12 == 0) {
              uVar13 = 1;
            }
            else {
              uVar13 = uVar12 << 1;
            }
            if ((uVar13 & *(uint *)(iVar8 + 0x2c)) == 0) {
              sVar2 = (-(ushort)((*(uint *)(iVar8 + 0x2c) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              sVar2 = -1;
            }
            *psVar6 = sVar2;
            if ((uVar13 & *(uint *)(iVar8 + 0x30)) == 0) {
              sVar2 = (-(ushort)((*(uint *)(iVar8 + 0x30) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              sVar2 = -1;
            }
            psVar6[1] = sVar2;
            if ((uVar13 & *(uint *)(iVar8 + 0x34)) == 0) {
              sVar2 = (-(ushort)((*(uint *)(iVar8 + 0x34) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              sVar2 = -1;
            }
            psVar6[*(short *)this->field_000C] = sVar2;
            if ((uVar13 & *(uint *)(iVar8 + 0x38)) == 0) {
              psVar6[*(short *)this->field_000C + 1] =
                   (-(ushort)((*(uint *)(iVar8 + 0x38) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              psVar6[*(short *)this->field_000C + 1] = -1;
            }
          }
        }
      }
      pbVar5 = this->field_000C;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(pbVar5 + 0x455));
  }
  local_10 = 0;
  if (0 < param_2) {
    do {
      pbVar5 = this->field_000C;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = 0;
      if (0 < *(short *)(pbVar5 + 2)) {
        do {
          psVar6 = (short *)(param_1 + (*(short *)pbVar5 * param_2 + local_10 * iVar3) * 2);
          iVar8 = 0;
          if (0 < *(short *)pbVar5) {
            psVar9 = psVar6 + iVar3;
            do {
              if ((*psVar6 == -1) && ((3 < local_10 || ((local_10 + 1 < iVar1 && (*psVar9 != 0))))))
              {
                *psVar6 = -2;
              }
              iVar8 = iVar8 + 1;
              psVar9 = psVar9 + 1;
              psVar6 = psVar6 + 1;
            } while (iVar8 < *(short *)this->field_000C);
          }
          pbVar5 = this->field_000C;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = param_2 + 1;
        } while (param_2 < *(short *)(pbVar5 + 2));
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar1);
  }
  return;
}

