
/* WARNING: Removing unreachable block (ram,0x006611f2) */
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=26;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall AiFltClassTy::sub_00660F70(AiFltClassTy *this,uint *param_1,undefined2 param_2)

{
  Global_sub_004E80F0_param_2Enum GVar1;
  ushort *puVar2;
  bool bVar3;
  STAllPlayersC *pSVar4;
  uint uVar5;
  Global_sub_004E80F0_param_2Enum *pGVar6;
  STAllPlayersC *pSVar7;
  int iVar8;
  DArrayTy *array;
  STGameObjC *pSVar9;
  short sVar10;
  undefined4 uVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  AnonShape_0068EB30_4F4B480A *pAVar12;
  AnonShape_0068EB30_4F4B480A local_6c;
  AiPlrClassTy *local_20;
  int local_1c;
  int local_18;
  int local_14;
  STGameObjC *local_10;
  int local_c;
  Global_sub_004E80F0_param_2Enum *local_8;

  if (((this->field_0284 != (ushort *)0x0) && (this->field_020B != (DArrayTy *)0x0)) &&
     (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    local_20 = thunk_FUN_004357f0(*(char *)&this->field_0024);
    sVar10 = this->field_007B;
    local_c = 0;
    if ((-(uint)(sVar10 != 1) & 2) != 0xffffffff) {
      local_8 = param_1;
      pSVar7 = g_allPlayers_007FA174;
      do {
        GVar1 = *local_8;
        if ((GVar1 == 0) || (((GVar1 == 0 || (0x28 < GVar1)) && (sVar10 != 1))))
        goto cf_continue_loop_0066137E;
        if ((((int)GVar1 < 1) || (0x28 < (int)GVar1)) || (pSVar7 == (STAllPlayersC *)0x0)) {
          if ((((int)GVar1 < 0x32) || (0x73 < (int)GVar1)) || (pSVar7 == (STAllPlayersC *)0x0)) {
            if ((((GVar1 == CASE_A3) || (GVar1 == CASE_A8)) ||
                ((GVar1 == CASE_B2 || (GVar1 == CASE_BE)))) && (pSVar7 != (STAllPlayersC *)0x0)) {
              pSVar7 = (STAllPlayersC *)thunk_FUN_004e80f0(this->field_0024,GVar1);
              pSVar4 = g_allPlayers_007FA174;
            }
            else {
              pSVar4 = pSVar7;
              if (((GVar1 != 0xdd) && (GVar1 != 0xde)) && ((GVar1 != 0xe2 && (GVar1 != 0xdc))))
              goto cf_continue_loop_0066137E;
            }
          }
          else {
            pSVar7 = (STAllPlayersC *)thunk_FUN_004e6c20(this->field_0024,GVar1);
            pSVar4 = g_allPlayers_007FA174;
          }
        }
        else {
          pSVar7 = (STAllPlayersC *)thunk_FUN_004e6a80(this->field_0024,GVar1);
          pSVar4 = g_allPlayers_007FA174;
        }
        bVar3 = pSVar7 == (STAllPlayersC *)0x0;
        pSVar7 = pSVar4;
        if (bVar3) goto cf_continue_loop_0066137E;
        if (this->field_00FF == '\0') goto switchD_0066104e_caseD_9;
        switch(*local_8) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 8:
        case 0x14:
        case 0x1a:
        case 0x3b:
        case 0x60:
          iVar8 = *(int *)(this->field_0284 + 0x9c);
          if (this->field_0039 != 3) {
            if (iVar8 != 0) goto switchD_0066104e_caseD_9;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar8 = *(int *)(this->field_0284 + 0x9a);
          }
          if (iVar8 == 0) goto cf_continue_loop_0066137E;
        default:
          goto switchD_0066104e_caseD_9;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 0x39:
        case 0x5e:
          iVar8 = *(int *)(this->field_0284 + 0x9c);
          break;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 0x3a:
          iVar8 = *(int *)(this->field_0284 + 0x9e);
          break;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 0x4f:
        case 0x61:
          iVar8 = *(int *)(this->field_0284 + 0x9a);
          break;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 100:
          iVar8 = *(int *)(this->field_0284 + 0xa0);
        }
        if (iVar8 != 0) {
switchD_0066104e_caseD_9:
          if ((0x31 < *local_8) && (*local_8 < 0x74)) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            sVar10 = *(short *)((int)param_1 + 0xe);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar11 = CONCAT22((short)((uint)local_8 >> 0x10),sVar10);
            /* ST_PSEUDO[return_width_artifact,raw_pointer_offset]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((sVar10 < 0) ||
               ((((short)param_1[4] < 0 || (*(short *)((int)param_1 + 0x12) < 0)) ||
                (iVar8 = thunk_FUN_004ae0b0(sVar10,(int)(short)param_1[4],
                                            (int)*(short *)((int)param_1 + 0x12),*local_8,
                                            this->field_0024,(undefined4 *)0x0,(int *)0x0,(int *)0x0
                                            ,0,(int *)0x0), uVar11 = extraout_EDX, iVar8 == 0)))) {
              local_10 = (STGameObjC *)0x0;
              if (((0x53 < *local_8) && (*local_8 < 0x5b)) &&
                 (array = (DArrayTy *)sub_0065E360((AnonShape_0065E360_B94C37CB *)this,uVar11,0x53),
                 array != (DArrayTy *)0x0)) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                if (((array->count != 0) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) &&
                   (pSVar9 = STAllPlayersC::GetObjPtr
                                       (g_allPlayers_007FA174,*(char *)&this->field_0024,
                                        CONCAT22((short)((uint)array->data >> 0x10),
                                                 *(undefined2 *)array->data),CASE_1),
                   pSVar9 != (STGameObjC *)0x0)) {
                  local_10 = pSVar9;
                }
                DArrayDestroy(array);
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_14 = (int)*(short *)((int)param_1 + 0xe);
              puVar2 = this->field_0284;
              local_18 = (int)(short)param_1[4];
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_1c = (int)*(short *)((int)param_1 + 0x12);
              iVar8 = thunk_FUN_004b0d10(this->field_0024,*local_8,&local_14,&local_18,&local_1c,
                                         (int)(short)puVar2[0x41],(int)(short)puVar2[0x42],
                                         (int)(short)puVar2[0x43],(int)local_10);
              if (iVar8 == 0) {
                return;
              }
              *(undefined2 *)((int)param_1 + 0xe) = (undefined2)local_14;
              *(undefined2 *)(param_1 + 4) = (undefined2)local_18;
              *(undefined2 *)((int)param_1 + 0x12) = (undefined2)local_1c;
            }
            iVar8 = _GetEmbrGrpTobjGrpExch(this->field_0024,*local_8,(uint)(ushort)this->field_007D)
            ;
            if (0 < iVar8) {
              return;
            }
          }
          pGVar6 = local_8;
          pAVar12 = &local_6c;
          for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined4 *)pAVar12 = 0;
            pAVar12 = (AnonShape_0068EB30_4F4B480A *)((int)&pAVar12->field_0003 + 1);
          }
          uVar5 = param_1[3];
          *(undefined2 *)pAVar12 = 0;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_6c._0_4_ = *pGVar6;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_6c._4_2_ = param_2;
          if (local_20 == (AiPlrClassTy *)0x0) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_6c._8_4_ = 0;
          }
          else {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_6c._8_4_ = local_20->field_065C;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_20->field_065C = local_6c._8_4_ + 1;
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_6c._12_2_ = this->field_007D;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_6c._22_2_ = *(undefined2 *)((int)param_1 + 0xe);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_6c._24_2_ = *(undefined2 *)(param_1 + 4);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_6c._26_2_ = *(undefined2 *)((int)param_1 + 0x12);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_6c._28_1_ = SUB41(param_1[5],0);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_6c._14_4_ = 0;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if ((((char)local_6c._28_1_ < '\0') || ('\a' < (char)local_6c._28_1_)) &&
             ((local_6c._28_1_ = this->field_0081, (char)local_6c._28_1_ < '\0' ||
              ('\a' < (char)local_6c._28_1_)))) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_6c._28_1_ = *(undefined1 *)&this->field_0024;
          }
          local_6c.field_0006 = (short)uVar5;
          Library::MSVCRT::_strncpy(&local_6c.field_0x1d,(char *)((int)param_1 + 0x15),0xe);
          iVar8 = AiTactClassTy::PrepareToSave
                            ((AiTactClassTy *)this->field_0284,&local_6c,this->field_007F);
          pSVar7 = g_allPlayers_007FA174;
          if (iVar8 == 0) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            param_1[9] = local_6c._8_4_;
            return;
          }
        }
cf_continue_loop_0066137E:
        local_8 = local_8 + 1;
        local_c = local_c + 1;
        sVar10 = this->field_007B;
        if ((int)((-(uint)(sVar10 != 1) & 2) + 1) <= local_c) {
          return;
        }
      } while( true );
    }
  }
  return;
}

