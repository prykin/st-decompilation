
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=12;
   incoming_edx_uses=2; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_0069ADA0(CGenerate *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  short *psVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  short *psVar11;
  uint uVar12;
  uint uVar13;
  int local_18;
  int local_14;
  int local_10;

  iVar2 = param_2;
  pbVar6 = this->field_000C;
  iVar4 = (int)*(short *)(pbVar6 + 2) * (int)*(short *)pbVar6;
  local_18 = 0;
  if (0 < *(int *)(pbVar6 + 0x455)) {
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar9 = *(int *)(pbVar6 + local_18 * 4 + 0x459);
      if (iVar9 != 0) {
        iVar5 = (int)*(short *)(iVar9 + 8);
        psVar7 = (short *)(param_1 +
                          ((int)*(short *)(iVar9 + 6) * (int)*(short *)pbVar6 + iVar5 * iVar4 +
                          (int)*(short *)(iVar9 + 4)) * 2);
        if (*(short *)(iVar9 + 8) == 0) {
          *psVar7 = -1;
          psVar7[1] = -1;
          psVar7[*(short *)this->field_000C] = -1;
          psVar7[*(short *)this->field_000C + 1] = -1;
        }
        else {
          uVar10 = 0x8000;
          local_14 = 0;
          uVar13 = 8;
          uVar12 = 0x80;
          if (param_2 <= iVar5) {
            local_14 = (iVar5 - param_2) + 1;
            bVar8 = (byte)local_14;
            uVar13 = 8 >> (bVar8 & 0x1f);
            psVar7 = psVar7 + -(local_14 * iVar4);
            uVar12 = 0x80 >> (bVar8 & 0x1f);
            uVar10 = 0x8000 >> (bVar8 & 0x1f);
          }
          if (local_14 < (int)(uint)*(byte *)(iVar9 + 0x48)) {
            local_14 = (uint)*(byte *)(iVar9 + 0x48) - local_14;
            do {
              uVar1 = *(uint *)(iVar9 + 0x2c);
              if ((uVar13 & uVar1) != 0) {
                if ((uVar12 & uVar1) == 0) {
                  sVar3 = (-(ushort)((uVar1 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar3 = -1;
                }
                *psVar7 = sVar3;
              }
              uVar1 = *(uint *)(iVar9 + 0x30);
              if ((uVar13 & uVar1) != 0) {
                if ((uVar12 & uVar1) == 0) {
                  sVar3 = (-(ushort)((uVar1 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar3 = -1;
                }
                psVar7[1] = sVar3;
              }
              uVar1 = *(uint *)(iVar9 + 0x34);
              if ((uVar13 & uVar1) != 0) {
                if ((uVar12 & uVar1) == 0) {
                  sVar3 = (-(ushort)((uVar1 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar3 = -1;
                }
                psVar7[*(short *)this->field_000C] = sVar3;
              }
              uVar1 = *(uint *)(iVar9 + 0x38);
              if ((uVar13 & uVar1) != 0) {
                if ((uVar12 & uVar1) == 0) {
                  sVar3 = (-(ushort)((uVar1 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar3 = -1;
                }
                psVar7[*(short *)this->field_000C + 1] = sVar3;
              }
              psVar7 = psVar7 + -iVar4;
              uVar13 = (int)uVar13 >> 1;
              uVar12 = (int)uVar12 >> 1;
              uVar10 = (int)uVar10 >> 1;
              local_14 = local_14 + -1;
            } while (local_14 != 0);
          }
          if ((*(byte *)(iVar9 + 0x4f) & 0x10) != 0) {
            if (uVar12 == 0) {
              uVar12 = 1;
            }
            else {
              uVar12 = uVar12 << 1;
            }
            if ((uVar12 & *(uint *)(iVar9 + 0x2c)) == 0) {
              sVar3 = (-(ushort)((*(uint *)(iVar9 + 0x2c) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              sVar3 = -1;
            }
            *psVar7 = sVar3;
            if ((uVar12 & *(uint *)(iVar9 + 0x30)) == 0) {
              sVar3 = (-(ushort)((*(uint *)(iVar9 + 0x30) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              sVar3 = -1;
            }
            psVar7[1] = sVar3;
            if ((uVar12 & *(uint *)(iVar9 + 0x34)) == 0) {
              sVar3 = (-(ushort)((*(uint *)(iVar9 + 0x34) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              sVar3 = -1;
            }
            psVar7[*(short *)this->field_000C] = sVar3;
            if ((uVar12 & *(uint *)(iVar9 + 0x38)) == 0) {
              psVar7[*(short *)this->field_000C + 1] =
                   (-(ushort)((*(uint *)(iVar9 + 0x38) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              psVar7[*(short *)this->field_000C + 1] = -1;
            }
          }
        }
      }
      pbVar6 = this->field_000C;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(pbVar6 + 0x455));
  }
  local_10 = 0;
  if (0 < param_2) {
    do {
      pbVar6 = this->field_000C;
      param_2 = 0;
      if (0 < *(short *)(pbVar6 + 2)) {
        do {
          psVar7 = (short *)(param_1 + (*(short *)pbVar6 * param_2 + local_10 * iVar4) * 2);
          iVar9 = 0;
          if (0 < *(short *)pbVar6) {
            psVar11 = psVar7 + iVar4;
            do {
              if ((*psVar7 == -1) && ((3 < local_10 || ((local_10 + 1 < iVar2 && (*psVar11 != 0)))))
                 ) {
                *psVar7 = -2;
              }
              iVar9 = iVar9 + 1;
              psVar11 = psVar11 + 1;
              psVar7 = psVar7 + 1;
            } while (iVar9 < *(short *)this->field_000C);
          }
          pbVar6 = this->field_000C;
          param_2 = param_2 + 1;
        } while (param_2 < *(short *)(pbVar6 + 2));
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar2);
  }
  return;
}

