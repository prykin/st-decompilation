
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_004DB160.
   Evidence: incoming_receiver_captures=1; receiver_accesses=8; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[24];
   expected_stack=24; receiver_family_members=1; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=3; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=39; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
STAllPlayersC::sub_004DB160
          (STAllPlayersC *this,int param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5
          ,int *param_6)

{
  STAllPlayersC *pSVar1;
  short sVar2;
  int iVar3;
  int local_EAX_191;
  uint uVar5;
  int uVar4;
  int iVar6;
  STWorldObject *this_00;
  int local_EAX_744;
  int local_EAX_990;
  int local_EAX_1169;
  short sVar7;
  int *piVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  STWorldObjectVTable *pSVar13;
  int local_60 [21];
  STAllPlayersC *local_c;
  int local_8;

  *param_6 = -1;
  sVar2 = (short)*param_3;
  local_c = this;
  if ((((((-1 < sVar2) && (sVar2 < g_worldGrid.sizeX)) && (sVar9 = (short)*param_4, -1 < sVar9)) &&
       ((sVar9 < g_worldGrid.sizeY && (sVar7 = (short)*param_5, -1 < sVar7)))) &&
      ((sVar7 < g_worldGrid.sizeZ &&
       ((this_00 = g_worldGrid.cells
                   [(int)g_worldGrid.planeStride * (int)sVar7 + (int)g_worldGrid.sizeX * (int)sVar9
                    + (int)sVar2].objects[0], this_00 != (STWorldObject *)0x0 &&
        (this_00[1].vtable != (STWorldObjectVTable *)param_1)))))) &&
     ((iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x3c ||
      (iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x53)))) {
    local_EAX_191 = GetPlayerRaceId(*(char *)&this_00[1].vtable);
    uVar5 = local_EAX_191 & 0xff;
    if (uVar5 == 1) {
      iVar3 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
    }
    else {
      if (uVar5 == 2) {
        pSVar13 = this_00[1].vtable;
        iVar3 = 0x43;
      }
      else {
        if (uVar5 != 3) goto LAB_004db257;
        pSVar13 = this_00[1].vtable;
        iVar3 = 99;
      }
      iVar3 = thunk_FUN_004e60d0((int)pSVar13,iVar3);
    }
    if (iVar3 != 0) {
      iVar3 = *param_5;
      iVar12 = *param_4;
      iVar11 = *param_3;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_common_join_004DB690:
      param_1 = iVar11;
      *param_6 = (int)this_00[1].vtable;
      if (param_1 < 0) {
        return;
      }
      if (iVar12 < 0) {
        return;
      }
      if (iVar3 < 0) {
        return;
      }
      iVar3 = 0;
      piVar8 = local_60;
      do {
        *piVar8 = iVar3;
        pSVar1 = local_c;
        iVar3 = iVar3 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar3 < 0x15);
      iVar3 = 0x15;
      do {
        uVar5 = pSVar1->field_001C * 0x41c64e6d + 0x3039;
        pSVar1->field_001C = uVar5;
        uVar5 = (uVar5 >> 0x10) % 0x15;
        do {
          uVar10 = pSVar1->field_001C * 0x41c64e6d + 0x3039;
          pSVar1->field_001C = uVar10;
          uVar10 = (uVar10 >> 0x10) % 0x15;
        } while (uVar10 == uVar5);
        iVar11 = local_60[uVar5];
        iVar3 = iVar3 + -1;
        local_60[uVar5] = local_60[uVar10];
        local_60[uVar10] = iVar11;
      } while (iVar3 != 0);
      iVar3 = 1;
      uVar5 = local_c->field_001C * 0x41c64e6d + 0x3039;
      local_c->field_001C = uVar5;
      uVar5 = (uVar5 >> 0x10) % 0xd2;
      iVar11 = 0;
      piVar8 = local_60;
      do {
        uVar5 = uVar5 - *piVar8;
        if ((int)uVar5 < 1) {
          iVar3 = local_60[iVar11];
          break;
        }
        iVar11 = iVar11 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar11 < 0x15);
      uVar5 = local_c->field_001C * 0x41c64e6d + 0x3039;
      local_c->field_001C = uVar5;
      uVar5 = (uVar5 >> 0x10) % 0x168;
      iVar11 = FUN_006aff50(uVar5);
      iVar11 = FUN_006b1280(iVar11 * iVar3);
      iVar11 = iVar11 + param_1;
      iVar6 = FUN_006aff5b(uVar5);
      iVar3 = FUN_006b1280(iVar6 * iVar3);
      iVar3 = iVar3 + iVar12;
      if (iVar11 < 0) {
        return;
      }
      if (g_worldGrid.sizeX <= iVar11) {
        return;
      }
      if (iVar3 < 0) {
        return;
      }
      if (g_worldGrid.sizeY <= iVar3) {
        return;
      }
      *param_3 = iVar11;
      *param_4 = iVar3;
      return;
    }
  }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_004db257:
  param_5 = (int *)0x1;
  sVar2 = g_worldGrid.sizeZ;
  do {
    local_8 = 0;
    if (sVar2 != 1 && -1 < sVar2 + -1) {
      do {
        iVar11 = *param_3 - (int)param_5;
        if (iVar11 <= *param_3 + (int)param_5) {
          do {
            if ((-1 < iVar11) && (iVar11 < g_worldGrid.sizeX)) {
              iVar12 = *param_4 - (int)param_5;
              sVar2 = (short)iVar11;
              if ((((-1 < iVar12) &&
                   (((iVar12 < g_worldGrid.sizeY && (-1 < sVar2)) && (sVar2 < g_worldGrid.sizeX))))
                  && (((sVar9 = (short)iVar12, -1 < sVar9 && (sVar9 < g_worldGrid.sizeY)) &&
                      (sVar7 = (short)local_8, -1 < sVar7)))) &&
                 (((sVar7 < g_worldGrid.sizeZ &&
                   (this_00 = g_worldGrid.cells
                              [(int)sVar7 * (int)g_worldGrid.planeStride +
                               (int)sVar9 * (int)g_worldGrid.sizeX + (int)sVar2].objects[0],
                   this_00 != (STWorldObject *)0x0)) &&
                  ((this_00[1].vtable != (STWorldObjectVTable *)param_1 &&
                   ((iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x3c ||
                    (iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x53)))))))) {
                uVar4 = GetPlayerRaceId(*(char *)&this_00[1].vtable);
                uVar5 = uVar4 & 0xff;
                if (uVar5 == 1) {
                  iVar6 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
                  iVar3 = local_8;
                }
                else {
                  if (uVar5 == 2) {
                    pSVar13 = this_00[1].vtable;
                    iVar3 = 0x43;
                  }
                  else {
                    if (uVar5 != 3) goto LAB_004db3e4;
                    pSVar13 = this_00[1].vtable;
                    iVar3 = 99;
                  }
                  iVar6 = thunk_FUN_004e60d0((int)pSVar13,iVar3);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar6 != 0) goto cf_common_join_004DB690;
              }
LAB_004db3e4:
              iVar12 = *param_4 + (int)param_5;
              if ((((-1 < iVar12) && (iVar12 < g_worldGrid.sizeY)) &&
                  (this_00 = (STWorldObject *)
                             thunk_FUN_004db980(sVar2,(short)iVar12,(short)local_8,0),
                  this_00 != (STWorldObject *)0x0)) &&
                 ((this_00[1].vtable != (STWorldObjectVTable *)param_1 &&
                  ((iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x3c ||
                   (iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x53)))))) {
                local_EAX_744 = GetPlayerRaceId(*(char *)&this_00[1].vtable);
                uVar5 = local_EAX_744 & 0xff;
                if (uVar5 == 1) {
                  iVar6 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
                  iVar3 = local_8;
                }
                else {
                  if (uVar5 == 2) {
                    pSVar13 = this_00[1].vtable;
                    iVar3 = 0x43;
                  }
                  else {
                    if (uVar5 != 3) goto LAB_004db497;
                    pSVar13 = this_00[1].vtable;
                    iVar3 = 99;
                  }
                  iVar6 = thunk_FUN_004e60d0((int)pSVar13,iVar3);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar6 != 0) goto cf_common_join_004DB690;
              }
            }
LAB_004db497:
            iVar11 = iVar11 + 1;
          } while (iVar11 <= *param_3 + (int)param_5);
        }
        iVar12 = (*param_4 - (int)param_5) + 1;
        if (iVar12 <= *param_4 + -1 + (int)param_5) {
          do {
            if ((-1 < iVar12) && (iVar12 < g_worldGrid.sizeY)) {
              iVar11 = *param_3 - (int)param_5;
              if ((-1 < iVar11) &&
                 ((((iVar11 < g_worldGrid.sizeX &&
                    (this_00 = (STWorldObject *)
                               thunk_FUN_004db980((short)iVar11,(short)iVar12,(short)local_8,0),
                    this_00 != (STWorldObject *)0x0)) &&
                   (this_00[1].vtable != (STWorldObjectVTable *)param_1)) &&
                  ((iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x3c ||
                   (iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x53)))))) {
                local_EAX_990 = GetPlayerRaceId(*(char *)&this_00[1].vtable);
                uVar5 = local_EAX_990 & 0xff;
                if (uVar5 == 1) {
                  iVar6 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
                  iVar3 = local_8;
                }
                else {
                  if (uVar5 == 2) {
                    pSVar13 = this_00[1].vtable;
                    iVar3 = 0x43;
                  }
                  else {
                    if (uVar5 != 3) goto LAB_004db58d;
                    pSVar13 = this_00[1].vtable;
                    iVar3 = 99;
                  }
                  iVar6 = thunk_FUN_004e60d0((int)pSVar13,iVar3);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar6 != 0) goto cf_common_join_004DB690;
              }
LAB_004db58d:
              iVar11 = *param_3 + (int)param_5;
              if ((((-1 < iVar11) && (iVar11 < g_worldGrid.sizeX)) &&
                  ((this_00 = (STWorldObject *)
                              thunk_FUN_004db980((short)iVar11,(short)iVar12,(short)local_8,0),
                   this_00 != (STWorldObject *)0x0 &&
                   (this_00[1].vtable != (STWorldObjectVTable *)param_1)))) &&
                 ((iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x3c ||
                  (iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x53)))) {
                local_EAX_1169 = GetPlayerRaceId(*(char *)&this_00[1].vtable);
                uVar5 = local_EAX_1169 & 0xff;
                if (uVar5 == 1) {
                  iVar6 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
                  iVar3 = local_8;
                }
                else {
                  if (uVar5 == 2) {
                    pSVar13 = this_00[1].vtable;
                    iVar3 = 0x43;
                  }
                  else {
                    if (uVar5 != 3) goto LAB_004db638;
                    pSVar13 = this_00[1].vtable;
                    iVar3 = 99;
                  }
                  iVar6 = thunk_FUN_004e60d0((int)pSVar13,iVar3);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar6 != 0) goto cf_common_join_004DB690;
              }
            }
LAB_004db638:
            iVar12 = iVar12 + 1;
          } while (iVar12 <= *param_4 + -1 + (int)param_5);
        }
        local_8 = local_8 + 1;
        sVar2 = g_worldGrid.sizeZ;
      } while (local_8 < g_worldGrid.sizeZ + -1);
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = (int *)((int)param_5 + 1);
    if (7 < (int)param_5) {
      return;
    }
  } while( true );
}

