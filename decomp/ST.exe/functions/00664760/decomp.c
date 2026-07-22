
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall AiFltClassTy::sub_00664760(AiFltClassTy *this)

{
  short *psVar1;
  ushort *puVar2;
  short *psVar3;
  AnonPointee_AiFltClassTy_0223 *pAVar4;
  AnonPointee_AiFltClassTy_022F *pAVar5;
  uint uVar6;
  bool bVar7;
  short local_10;
  short local_e [5];

  uVar6 = 0;
  pAVar5 = this->field_022F;
  this->field_009B = 0;
  this->field_009F = 0;
  this->field_00A3 = 0;
  this->field_00A7 = 0;
  bVar7 = *(int *)&pAVar5->field_0xc != 0;
  if (0 < *(int *)&pAVar5->field_0xc) {
    do {
      if (bVar7) {
        psVar3 = (short *)(pAVar5->field_0008 * uVar6 + pAVar5->field_001C);
      }
      else {
        psVar3 = (short *)0x0;
      }
      thunk_FUN_006756d0(psVar3,psVar3 + 1,psVar3 + 3,psVar3 + 4);
      pAVar5 = this->field_022F;
      uVar6 = uVar6 + 1;
      bVar7 = uVar6 < *(uint *)&pAVar5->field_0xc;
    } while ((int)uVar6 < (int)*(uint *)&pAVar5->field_0xc);
  }
  pAVar4 = this->field_0223;
  uVar6 = 0;
  if (0 < *(int *)&pAVar4->field_0xc) {
    bVar7 = *(int *)&pAVar4->field_0xc != 0;
    do {
      if (bVar7) {
        psVar3 = (short *)(pAVar4->field_0008 * uVar6 + pAVar4->field_001C);
      }
      else {
        psVar3 = (short *)0x0;
      }
      psVar1 = psVar3 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_00675950(CONCAT22((short)((uint)psVar3 >> 0x10),*psVar3),
                         CONCAT22((short)((uint)psVar1 >> 0x10),*psVar1),psVar3[2],psVar3,psVar1,
                         psVar3 + 2,0);
      pAVar4 = this->field_0223;
      uVar6 = uVar6 + 1;
      bVar7 = uVar6 < *(uint *)&pAVar4->field_0xc;
    } while ((int)uVar6 < (int)*(uint *)&pAVar4->field_0xc);
  }
  if (((this->field_0163 == '\x01') && (*(int *)&this->field_022F->field_0xc == 0)) &&
     (puVar2 = this->field_0284, puVar2 != (ushort *)0x0)) {
    local_10 = puVar2[0x41] - 4;
    local_e[0] = puVar2[0x42] - 4;
    local_e[2] = 9;
    local_e[3] = 9;
    local_e[1] = 0;
    local_e[4] = 5;
    thunk_FUN_006756d0(&local_10,local_e,local_e + 2,local_e + 3);
    AppendZone(this,&local_10);
  }
  if ((this->field_0122 == '\x01') && (*(int *)&this->field_0223->field_0xc == 0)) {
    pAVar5 = this->field_022F;
    uVar6 = 0;
    if (0 < *(int *)&pAVar5->field_0xc) {
      bVar7 = *(int *)&pAVar5->field_0xc != 0;
      do {
        if (bVar7) {
          psVar3 = (short *)(pAVar5->field_0008 * uVar6 + pAVar5->field_001C);
        }
        else {
          psVar3 = (short *)0x0;
        }
        AppendPoint(this,psVar3,5);
        pAVar5 = this->field_022F;
        uVar6 = uVar6 + 1;
        bVar7 = uVar6 < *(uint *)&pAVar5->field_0xc;
      } while ((int)uVar6 < (int)*(uint *)&pAVar5->field_0xc);
    }
  }
  return;
}

