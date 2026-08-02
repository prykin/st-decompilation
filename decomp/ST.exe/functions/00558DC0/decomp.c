
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00558DC0 -> 00558C00 @ 00558F0B | 00558DC0 -> 00558C00 @ 00558F93

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 00558DC0 -> 00558C00 @ 00558F0B | 00558DC0 -> 00558C00 @ 00558F93

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 00557C90 -> 00558DC0 @ 00557E59 | 00558840 -> 00558DC0 @ 00558A11 | 0055B7F0 ->
   00558DC0 @ 0055B921

   [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=4; incoming_this_accesses=18;
   incoming_edx_uses=0; incoming_stack_parameter_uses=50; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=4; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall
VisibleClassTy::sub_00558DC0
          (VisibleClassTy *this,int param_1,int param_2,undefined *param_3,int *param_4,uint param_5
          ,int *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  VisibleClassTy_sub_00558C00_param_1Enum VVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  byte *local_c;

  uVar10 = param_5;
  piVar4 = param_4;
  if ((((this->field_0114 != 0) && (-1 < (int)param_5)) && (param_4 < (int *)0x8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[(int)param_4].field_0022 < 8)))) {
    if ((param_7 & 0x1000) != 0) {
      sub_0055BB00(this,0,(short)param_1,(short)param_2,(char)param_3,(uint)param_4,(byte)param_5,
                   param_6);
    }
    if (*(char *)((int)(piVar4 + 0x3f) + (int)this) != '\0') {
      iVar2 = uVar10 * 2 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = (int *)(param_1 - uVar10);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = (int *)(param_2 - uVar10);
      pbVar5 = thunk_FUN_005532f0(uVar10);
      if (((pbVar5 != nullptr) && (this->field_0038 != nullptr)) &&
         (((param_7 & 1) != 0 && (iVar8 = 0, uVar10 = param_5, local_c = pbVar5, 0 < iVar2)))) {
        do {
          iVar6 = 0;
          do {
            if (local_c[iVar6] != 0) {
              iVar11 = iVar8 + (int)param_4;
              iVar1 = iVar6 + (int)param_6;
              if ((((-1 < iVar1) && (iVar1 < this->field_0020)) && (-1 < iVar11)) &&
                 (iVar11 < this->field_0024)) {
                bVar3 = this->field_0038[(this->field_0020 * iVar11 + iVar1) * 2];
                if (bVar3 != 0xff) {
                  this->field_0038[(this->field_0020 * iVar11 + iVar1) * 2] = bVar3 + 1;
                }
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar2);
          iVar8 = iVar8 + 1;
          local_c = local_c + iVar2;
        } while (iVar8 < iVar2);
      }
      if ((-1 < (int)param_3) && ((int)param_3 < 5)) {
        if ((param_7 & 0x2008) != 0) {
          VVar7 = CASE_0;
          puVar9 = this->field_003C;
          do {
            if (*puVar9 != 0) {
              sub_00558C00(this,VVar7,param_1,param_2,(int *)&param_6,(int *)&param_4);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_4 = (int *)((int)param_4 + g_centeredOffsets5[(int)param_3]);
              thunk_FUN_00553b00((int)param_6,(int)param_4,(byte *)*puVar9,this->field_0028,
                                 this->field_002C,(undefined *)param_5);
            }
            VVar7 = VVar7 + CASE_1;
            puVar9 = puVar9 + 1;
            uVar10 = param_5;
          } while ((int)VVar7 < 4);
        }
        if (((pbVar5 != nullptr) && (this->field_004C != nullptr)) &&
           ((this->field_0050 != nullptr && ((param_7 & 0x4000) != 0)))) {
          sub_00558C00(this,this->field_010C,param_1,param_2,(int *)&param_6,(int *)&param_4);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = (int *)((int)param_6 - uVar10);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = 0;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = (int *)((int)param_4 + (g_centeredOffsets5[(int)param_3] - uVar10));
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = pbVar5;
          if (0 < iVar2) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_7 = 0;
              do {
                if (param_3[param_7] != '\0') {
                  iVar8 = param_7 + (int)param_6;
                  iVar6 = param_5 + (int)param_4;
                  if ((((-1 < iVar8) && (uVar10 = this->field_0030, iVar8 < (int)uVar10)) &&
                      (-1 < iVar6)) &&
                     ((iVar6 < this->field_0034 && (iVar11 = uVar10 * iVar6 + iVar8, -1 < iVar11))))
                  {
                    if (this->field_0050[iVar11] == 0) {
                      thunk_FUN_00553990(iVar8,iVar6,(int)this->field_004C,uVar10,this->field_0034);
                    }
                    this->field_0050[iVar11] = this->field_0050[iVar11] + 1;
                  }
                }
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_7 = param_7 + 1;
              } while ((int)param_7 < iVar2);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_5 = param_5 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = param_3 + iVar2;
            } while ((int)param_5 < iVar2);
          }
        }
      }
    }
  }
  return;
}

