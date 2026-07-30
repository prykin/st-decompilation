
/* [STMethodOwnerApplier] Structural method owner recovered as
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0.
   Evidence: this_call_owners=[SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0];
   agreed_this_calls=3; incoming_this_accesses=6; incoming_edx_uses=0;
   incoming_stack_parameter_uses=96; direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0;
   attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::sub_00427090
          (AnonReceiver_004248D0 *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  AnonPointee_TLOBaseTy_0607 *pAVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_c;
  int local_8;

  iVar6 = param_2;
  if (DAT_007f4d84 <= DAT_007f4d78) {
    pAVar2 = Library::DKW::LIB::MemRealloc(DAT_007f4d6c,(DAT_007f4d84 * 3 + 0x1e) * 4);
    if (pAVar2 == (AnonPointee_TLOBaseTy_0607 *)0x0) {
      return 0;
    }
    DAT_007f4d84 = DAT_007f4d84 + 10;
    DAT_007f4d6c = pAVar2;
  }
  pvVar3 = Library::DKW::LIB::MemAlloc((param_1 * 0xfffffff + 2 + param_2) * 0x10);
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  (&DAT_007f4d6c->field_0008)[DAT_007f4d78 * 3] = pvVar3;
  (&DAT_007f4d6c->field_0000)[DAT_007f4d78 * 3] = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {
    iVar4 = param_1 * 0x10;
    (&DAT_007f4d6c->field_0000)[DAT_007f4d78 * 3] =
         (uint)(*(byte *)((*(int *)(iVar4 + DAT_007f4d74) + DAT_007f4d7c) *
                          *(int *)&this->field_0x37c + *(int *)&this->field_0x38c + DAT_007f4d80 +
                         param_1) >> 7);
    iVar5 = sub_004248D0(this,(int)pvVar3,0,*(int *)(iVar4 + DAT_007f4d74) + DAT_007f4d7c,
                         DAT_007f4d80 + param_1,CASE_0,~CASE_0);
    iVar7 = *(int *)(iVar4 + DAT_007f4d74);
    iVar9 = iVar4;
    for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
      if (*(int *)(iVar9 + DAT_007f4d74) < iVar7) {
        iVar5 = sub_004248D0(this,(int)pvVar3,iVar5,*(int *)(iVar9 + DAT_007f4d74) + DAT_007f4d7c,
                             DAT_007f4d80 + iVar8,CASE_0,~CASE_0);
      }
      if ((iVar8 < param_2) &&
         (iVar7 = *(int *)(iVar9 + DAT_007f4d74) + DAT_007f4d7c,
         iVar7 < *(int *)(iVar9 + 0x10 + DAT_007f4d74) + DAT_007f4d7c)) {
        iVar5 = sub_004248D0(this,(int)pvVar3,iVar5,iVar7,DAT_007f4d80 + iVar8,CASE_1,~CASE_0);
      }
      iVar7 = *(int *)(iVar9 + DAT_007f4d74);
      iVar9 = iVar9 + 0x10;
    }
    local_c = param_2 * 0x10;
    iVar7 = sub_004248D0(this,(int)pvVar3,iVar5,*(int *)(local_c + DAT_007f4d74) + DAT_007f4d7c,
                         DAT_007f4d80 + param_2,CASE_1,~CASE_0);
    /* ST_PSEUDO[stack_slot_reuse,raw_pointer_offset]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; candidate structure field after proof; otherwise retain buffer arithmetic */
    param_3 = sub_004248D0(this,(int)pvVar3,iVar7,
                           *(int *)(local_c + 0xc + DAT_007f4d74) + DAT_007f4d7c,
                           DAT_007f4d80 + param_2,CASE_3,~CASE_0);
    iVar7 = DAT_007f4d74;
    if (param_1 < param_2) {
      do {
        iVar9 = *(int *)(iVar7 + 0xc + local_c);
        if ((iVar9 < *(int *)(iVar7 + -4 + local_c)) && (param_2 != iVar6)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar9 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_3,~CASE_0);
          iVar7 = DAT_007f4d74;
        }
        iVar9 = *(int *)(iVar7 + 0xc + local_c);
        if (*(int *)(iVar7 + -4 + local_c) < iVar9) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar9 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_2,~CASE_0);
          iVar7 = DAT_007f4d74;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + -1;
        local_c = local_c + -0x10;
      } while (param_1 < param_2);
      iVar6 = *(int *)(iVar4 + 0xc + iVar7);
      if (*(int *)(iVar4 + 0x1c + iVar7) < iVar6) {
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_004278f1:
        param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar6 + DAT_007f4d7c,DAT_007f4d80 + param_1,
                               CASE_3,~CASE_0);
        iVar7 = DAT_007f4d74;
      }
    }
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_3 == -1) {
      iVar4 = param_1 * 0x10;
      (&DAT_007f4d6c->field_0000)[DAT_007f4d78 * 3] =
           (uint)(*(byte *)((*(int *)(iVar4 + DAT_007f4d74) + DAT_007f4d7c) *
                            *(int *)&this->field_0x37c + *(int *)&this->field_0x38c + DAT_007f4d80 +
                           param_1) >> 7);
      iVar5 = sub_004248D0(this,(int)pvVar3,0,*(int *)(iVar4 + DAT_007f4d74) + DAT_007f4d7c,
                           DAT_007f4d80 + param_1,CASE_0,~CASE_0);
      iVar7 = *(int *)(iVar4 + DAT_007f4d74);
      iVar9 = iVar4;
      for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
        if (*(int *)(iVar9 + DAT_007f4d74) < iVar7) {
          iVar5 = sub_004248D0(this,(int)pvVar3,iVar5,*(int *)(iVar9 + DAT_007f4d74) + DAT_007f4d7c,
                               DAT_007f4d80 + iVar8,CASE_0,~CASE_0);
        }
        if ((iVar8 < param_2) &&
           (iVar7 = *(int *)(iVar9 + DAT_007f4d74) + DAT_007f4d7c,
           iVar7 < *(int *)(iVar9 + 0x10 + DAT_007f4d74) + DAT_007f4d7c)) {
          iVar5 = sub_004248D0(this,(int)pvVar3,iVar5,iVar7,DAT_007f4d80 + iVar8,CASE_1,~CASE_0);
        }
        iVar7 = *(int *)(iVar9 + DAT_007f4d74);
        iVar9 = iVar9 + 0x10;
      }
      local_c = param_2 * 0x10;
      iVar7 = sub_004248D0(this,(int)pvVar3,iVar5,*(int *)(local_c + DAT_007f4d74) + DAT_007f4d7c,
                           DAT_007f4d80 + param_2,CASE_1,~CASE_0);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = sub_004248D0(this,(int)pvVar3,iVar7,
                             *(int *)(local_c + 4 + DAT_007f4d74) + DAT_007f4d7c,
                             DAT_007f4d80 + param_2,CASE_3,~CASE_0);
      iVar7 = DAT_007f4d74;
      if (param_1 < param_2) {
        do {
          iVar9 = *(int *)(local_c + 4 + iVar7);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((iVar9 < *(int *)(local_c + -0xc + iVar7)) && (param_2 != iVar6)) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar9 + DAT_007f4d7c,
                                   DAT_007f4d80 + param_2,CASE_3,~CASE_0);
            iVar7 = DAT_007f4d74;
          }
          iVar9 = *(int *)(local_c + 4 + iVar7);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)(local_c + -0xc + iVar7) < iVar9) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar9 + DAT_007f4d7c,
                                   DAT_007f4d80 + param_2,CASE_2,~CASE_0);
            iVar7 = DAT_007f4d74;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = param_2 + -1;
          local_c = local_c + -0x10;
        } while (param_1 < param_2);
        iVar6 = *(int *)(iVar4 + 4 + iVar7);
        if (*(int *)(iVar4 + 0x14 + iVar7) < iVar6) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar6 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_1,CASE_3,~CASE_0);
          iVar7 = DAT_007f4d74;
        }
      }
      iVar6 = *(int *)(iVar4 + 4 + iVar7);
      goto LAB_00427930;
    }
    iVar4 = param_1 * 0x10;
    (&DAT_007f4d6c->field_0000)[DAT_007f4d78 * 3] =
         (uint)(*(byte *)((*(int *)(iVar4 + 8 + DAT_007f4d74) + DAT_007f4d7c) *
                          *(int *)&this->field_0x37c + *(int *)&this->field_0x38c + DAT_007f4d80 +
                         param_1) >> 7);
    iVar5 = sub_004248D0(this,(int)pvVar3,0,*(int *)(iVar4 + 8 + DAT_007f4d74) + DAT_007f4d7c,
                         DAT_007f4d80 + param_1,CASE_0,~CASE_0);
    iVar7 = *(int *)(iVar4 + 8 + DAT_007f4d74);
    iVar9 = iVar4;
    for (iVar8 = param_1; iVar8 <= param_2; iVar8 = iVar8 + 1) {
      iVar1 = *(int *)(iVar9 + 8 + DAT_007f4d74);
      if (iVar1 < iVar7) {
        iVar5 = sub_004248D0(this,(int)pvVar3,iVar5,iVar1 + DAT_007f4d7c,DAT_007f4d80 + iVar8,CASE_0
                             ,~CASE_0);
      }
      if ((iVar8 < param_2) &&
         (iVar7 = *(int *)(iVar9 + 8 + DAT_007f4d74) + DAT_007f4d7c,
         iVar7 < *(int *)(iVar9 + 0x18 + DAT_007f4d74) + DAT_007f4d7c)) {
        iVar5 = sub_004248D0(this,(int)pvVar3,iVar5,iVar7,DAT_007f4d80 + iVar8,CASE_1,~CASE_0);
      }
      iVar7 = *(int *)(iVar9 + 8 + DAT_007f4d74);
      iVar9 = iVar9 + 0x10;
    }
    local_c = param_2 * 0x10;
    iVar7 = sub_004248D0(this,(int)pvVar3,iVar5,*(int *)(local_c + 8 + DAT_007f4d74) + DAT_007f4d7c,
                         DAT_007f4d80 + param_2,CASE_1,~CASE_0);
    /* ST_PSEUDO[stack_slot_reuse,raw_pointer_offset]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; candidate structure field after proof; otherwise retain buffer arithmetic */
    param_3 = sub_004248D0(this,(int)pvVar3,iVar7,
                           *(int *)(local_c + 0xc + DAT_007f4d74) + DAT_007f4d7c,
                           DAT_007f4d80 + param_2,CASE_3,~CASE_0);
    iVar7 = DAT_007f4d74;
    if (param_1 < param_2) {
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar9 = *(int *)(local_c + 0xc + iVar7);
        if ((iVar9 < *(int *)(local_c + -4 + iVar7)) && (param_2 != iVar6)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar9 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_3,~CASE_0);
          iVar7 = DAT_007f4d74;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar9 = *(int *)(local_c + 0xc + iVar7);
        if (*(int *)(local_c + -4 + iVar7) < iVar9) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = sub_004248D0(this,(int)pvVar3,param_3,iVar9 + DAT_007f4d7c,
                                 DAT_007f4d80 + param_2,CASE_2,~CASE_0);
          iVar7 = DAT_007f4d74;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + -1;
        local_c = local_c + -0x10;
      } while (param_1 < param_2);
      iVar6 = *(int *)(iVar4 + 0xc + iVar7);
      if (*(int *)(iVar4 + 0x1c + iVar7) < iVar6) goto LAB_004278f1;
    }
  }
  local_8 = param_1 * 0x10;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar6 = *(int *)(local_8 + 0xc + iVar7);
LAB_00427930:
  iVar6 = sub_004248D0(this,(int)pvVar3,param_3,iVar6 + DAT_007f4d7c,DAT_007f4d80 + param_1,CASE_2,
                       ~CASE_0);
  (&DAT_007f4d6c->field_0004)[DAT_007f4d78 * 3] = iVar6;
  DAT_007f4d78 = DAT_007f4d78 + 1;
  return 0;
}

