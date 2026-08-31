#include "../../pseudocode_runtime.h"


/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_004DB160.
   Evidence: incoming_receiver_captures=1; receiver_accesses=8; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[24];
   expected_stack=24; receiver_family_members=1; adopt_untyped_existing_thiscall

   [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=3; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=39; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
STAllPlayersC::sub_004DB160
          (STAllPlayersC *this,int param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5
          ,int *param_6)

{
  STAllPlayersC *pSVar1;
  short sVar2;
  int iVar4;
  int local_EAX_191;
  int uVar4;
  int iVar5;
  STWorldObject *this_00;
  int local_EAX_744;
  int local_EAX_990;
  int local_EAX_1169;
  uint uVar6;
  int iVar10;
  int iVar3;
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
       ((this_00 = STGridAt3D(g_worldGrid, sVar2, sVar9, sVar7).objects[0], this_00 != nullptr &&
        (this_00[1].vtable != (STWorldObjectVTable *)param_1)))))) &&
     /* ST_CALLSITE[004DB201]: CALL dword ptr [EAX + 0x2c] */
     ((iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x3c ||
      /* ST_CALLSITE[004DB20D]: CALL dword ptr [EDX + 0x2c] */
      (iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x53)))) {
    /* ST_CALLSITE[004DB21F]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_191 = LookupRecordByte(*(char *)&this_00[1].vtable);
    local_EAX_191 = (int)(byte)local_EAX_191;
    if (local_EAX_191 == 1) {

      iVar4 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
    }
    else {
      if (local_EAX_191 == 2) {
        pSVar13 = this_00[1].vtable;
        iVar4 = 0x43;
      }
      else {
        if (local_EAX_191 != 3) goto LAB_004db257;
        pSVar13 = this_00[1].vtable;
        iVar4 = 99;
      }

      iVar4 = thunk_FUN_004e60d0((int)pSVar13,iVar4);
    }
    if (iVar4 != 0) {
      iVar4 = *param_5;
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
      if (iVar4 < 0) {
        return;
      }
      iVar4 = 0;
      piVar8 = local_60;
      do {
        *piVar8 = iVar4;
        pSVar1 = local_c;
        iVar4 = iVar4 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar4 < 0x15);
      iVar4 = 0x15;
      do {
        uVar6 = pSVar1->field_001C * 0x41c64e6d + 0x3039;
        pSVar1->field_001C = uVar6;
        uVar6 = (uVar6 >> 0x10) % 0x15;
        do {
          uVar10 = pSVar1->field_001C * 0x41c64e6d + 0x3039;
          pSVar1->field_001C = uVar10;
          uVar10 = (uVar10 >> 0x10) % 0x15;
        } while (uVar10 == uVar6);
        iVar11 = local_60[uVar6];
        iVar4 = iVar4 + -1;
        local_60[uVar6] = local_60[uVar10];
        local_60[uVar10] = iVar11;
      } while (iVar4 != 0);
      iVar4 = 1;
      uVar6 = local_c->field_001C * 0x41c64e6d + 0x3039;
      local_c->field_001C = uVar6;
      uVar6 = (uVar6 >> 0x10) % 0xd2;
      iVar11 = 0;
      piVar8 = local_60;
      do {
        uVar6 = uVar6 - *piVar8;
        if ((int)uVar6 < 1) {
          iVar4 = local_60[iVar11];
          break;
        }
        iVar11 = iVar11 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar11 < 0x15);
      uVar6 = local_c->field_001C * 0x41c64e6d + 0x3039;
      local_c->field_001C = uVar6;
      uVar10 = (uVar6 >> 0x10) % 0x168;

      uVar6 = FUN_006aff50(uVar10);

      iVar10 = FUN_006b1280(uVar6 * iVar4);
      iVar11 = iVar10 + param_1;

      uVar6 = FUN_006aff5b(uVar10);

      iVar3 = FUN_006b1280(uVar6 * iVar4);
      iVar12 = iVar3 + iVar12;
      if (iVar11 < 0) {
        return;
      }
      if (g_worldGrid.sizeX <= iVar11) {
        return;
      }
      if (iVar12 < 0) {
        return;
      }
      if (g_worldGrid.sizeY <= iVar12) {
        return;
      }
      *param_3 = iVar11;
      *param_4 = iVar12;
      return;
    }
  }
LAB_004db257:
  uint param_5_after_write = 0x1; /* compiler stack-slot lifetime split */
  sVar2 = g_worldGrid.sizeZ;
  do {
    local_8 = 0;
    if (sVar2 != 1 && -1 < sVar2 + -1) {
      do {
        iVar11 = *param_3 - (int)param_5_after_write;
        if (iVar11 <= *param_3 + (int)param_5_after_write) {
          do {
            if ((-1 < iVar11) && (iVar11 < g_worldGrid.sizeX)) {
              iVar12 = *param_4 - (int)param_5_after_write;
              sVar2 = (short)iVar11;
              if ((((-1 < iVar12) &&
                   (((iVar12 < g_worldGrid.sizeY && (-1 < sVar2)) && (sVar2 < g_worldGrid.sizeX))))
                  && (((sVar9 = (short)iVar12, -1 < sVar9 && (sVar9 < g_worldGrid.sizeY)) &&
                      (sVar7 = (short)local_8, -1 < sVar7)))) &&
                 (((sVar7 < g_worldGrid.sizeZ &&
                   (this_00 = STGridAt3D(g_worldGrid, sVar2, sVar9, sVar7).objects[0],
                   this_00 != nullptr)) &&
                  ((this_00[1].vtable != (STWorldObjectVTable *)param_1 &&
                   /* ST_CALLSITE[004DB343]: CALL dword ptr [EDX + 0x2c] */
                   ((iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x3c ||
                    /* ST_CALLSITE[004DB34F]: CALL dword ptr [EAX + 0x2c] */
                    (iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x53)))))))) {
                /* ST_CALLSITE[004DB365]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                uVar4 = LookupRecordByte(*(char *)&this_00[1].vtable);
                uVar4 = (int)(byte)uVar4;
                if (uVar4 == 1) {

                  iVar5 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
                  iVar4 = local_8;
                }
                else {
                  if (uVar4 == 2) {
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 0x43;
                  }
                  else {
                    if (uVar4 != 3) goto LAB_004db3e4;
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 99;
                  }

                  iVar5 = thunk_FUN_004e60d0((int)pSVar13,iVar4);
                  iVar4 = local_8;
                }
                local_8 = iVar4;
                if (iVar5 != 0) goto cf_common_join_004DB690;
              }
LAB_004db3e4:
              iVar12 = *param_4 + (int)param_5_after_write;
              if ((((-1 < iVar12) && (iVar12 < g_worldGrid.sizeY)) &&
                  (this_00 = STPointerBoundaryCast<STWorldObject *>(thunk_FUN_004db980(sVar2,(short)iVar12,(short)local_8,0)),
                  this_00 != nullptr)) &&
                 ((this_00[1].vtable != (STWorldObjectVTable *)param_1 &&
                  /* ST_CALLSITE[004DB42A]: CALL dword ptr [EAX + 0x2c] */
                  ((iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x3c ||
                   /* ST_CALLSITE[004DB436]: CALL dword ptr [EDX + 0x2c] */
                   (iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x53)))))) {
                /* ST_CALLSITE[004DB448]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                local_EAX_744 = LookupRecordByte(*(char *)&this_00[1].vtable);
                local_EAX_744 = (int)(byte)local_EAX_744;
                if (local_EAX_744 == 1) {

                  iVar5 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
                  iVar4 = local_8;
                }
                else {
                  if (local_EAX_744 == 2) {
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 0x43;
                  }
                  else {
                    if (local_EAX_744 != 3) goto LAB_004db497;
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 99;
                  }

                  iVar5 = thunk_FUN_004e60d0((int)pSVar13,iVar4);
                  iVar4 = local_8;
                }
                local_8 = iVar4;
                if (iVar5 != 0) goto cf_common_join_004DB690;
              }
            }
LAB_004db497:
            iVar11 = iVar11 + 1;
          } while (iVar11 <= *param_3 + (int)param_5_after_write);
        }
        iVar12 = (*param_4 - (int)param_5_after_write) + 1;
        if (iVar12 <= *param_4 + -1 + (int)param_5_after_write) {
          do {
            if ((-1 < iVar12) && (iVar12 < g_worldGrid.sizeY)) {
              iVar11 = *param_3 - (int)param_5_after_write;
              if ((-1 < iVar11) &&
                 ((((iVar11 < g_worldGrid.sizeX &&
                    (this_00 = STPointerBoundaryCast<STWorldObject *>(thunk_FUN_004db980((short)iVar11,(short)iVar12,(short)local_8,0)),
                    this_00 != nullptr)) &&
                   (this_00[1].vtable != (STWorldObjectVTable *)param_1)) &&
                  /* ST_CALLSITE[004DB520]: CALL dword ptr [EDX + 0x2c] */
                  ((iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x3c ||
                   /* ST_CALLSITE[004DB52C]: CALL dword ptr [EAX + 0x2c] */
                   (iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x53)))))) {
                /* ST_CALLSITE[004DB53E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                local_EAX_990 = LookupRecordByte(*(char *)&this_00[1].vtable);
                local_EAX_990 = (int)(byte)local_EAX_990;
                if (local_EAX_990 == 1) {

                  iVar5 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
                  iVar4 = local_8;
                }
                else {
                  if (local_EAX_990 == 2) {
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 0x43;
                  }
                  else {
                    if (local_EAX_990 != 3) goto LAB_004db58d;
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 99;
                  }

                  iVar5 = thunk_FUN_004e60d0((int)pSVar13,iVar4);
                  iVar4 = local_8;
                }
                local_8 = iVar4;
                if (iVar5 != 0) goto cf_common_join_004DB690;
              }
LAB_004db58d:
              iVar11 = *param_3 + (int)param_5_after_write;
              if ((((-1 < iVar11) && (iVar11 < g_worldGrid.sizeX)) &&
                  ((this_00 = STPointerBoundaryCast<STWorldObject *>(thunk_FUN_004db980((short)iVar11,(short)iVar12,(short)local_8,0)),
                   this_00 != nullptr &&
                   (this_00[1].vtable != (STWorldObjectVTable *)param_1)))) &&
                 /* ST_CALLSITE[004DB5D3]: CALL dword ptr [EAX + 0x2c] */
                 ((iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x3c ||
                  /* ST_CALLSITE[004DB5DF]: CALL dword ptr [EDX + 0x2c] */
                  (iVar4 = this_00->GetObjectTypeId(), iVar4 == 0x53)))) {
                /* ST_CALLSITE[004DB5F1]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                local_EAX_1169 = LookupRecordByte(*(char *)&this_00[1].vtable);
                local_EAX_1169 = (int)(byte)local_EAX_1169;
                if (local_EAX_1169 == 1) {

                  iVar5 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x42);
                  iVar4 = local_8;
                }
                else {
                  if (local_EAX_1169 == 2) {
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 0x43;
                  }
                  else {
                    if (local_EAX_1169 != 3) goto LAB_004db638;
                    pSVar13 = this_00[1].vtable;
                    iVar4 = 99;
                  }

                  iVar5 = thunk_FUN_004e60d0((int)pSVar13,iVar4);
                  iVar4 = local_8;
                }
                local_8 = iVar4;
                if (iVar5 != 0) goto cf_common_join_004DB690;
              }
            }
LAB_004db638:
            iVar12 = iVar12 + 1;
          } while (iVar12 <= *param_4 + -1 + (int)param_5_after_write);
        }
        local_8 = local_8 + 1;
        sVar2 = g_worldGrid.sizeZ;
      } while (local_8 < g_worldGrid.sizeZ + -1);
    }
    param_5_after_write = ((int)param_5_after_write + 1);
    if (7 < (int)param_5_after_write) {
      return;
    }
  } while( true );
}

