#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STAllPlayersC.cpp

// 0042A940 STAllPlayersC::STAllPlayersC
#line 4 "decomp/ST.exe/functions/0042A940/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079059C (store 0042A955)
   Evidence: final_vptr=0079059C; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

STAllPlayersC * __thiscall st::fn_0042A940(STAllPlayersC *this)

{
  PackedRecord_A62x8 *pPVar1;
  int iVar2;

  st::fn_006E60E0(this);
  this->vtable = &st_global_0079059C;
  pPVar1 = g_packedRecords_A62x8;
  for (iVar2 = 0x14d5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pPVar1 = 0;
    pPVar1 = (PackedRecord_A62x8 *)((int)&pPVar1->field1_0x1 + 3);
  }
  pPVar1 = g_packedRecords_A62x8;
  do {
    pPVar1->field0_0x0 = 0;
    pPVar1 = pPVar1 + 1;
  } while ((int)pPVar1 < 0x7fa130);
  return this;
}

// 004DB160 STAllPlayersC::sub_004DB160
#line 4 "decomp/ST.exe/functions/004DB160/decomp.c"
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
st::fn_004DB160
          (STAllPlayersC *this,int param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5
          ,int *param_6)

{
  STAllPlayersC *pSVar1;
  short sVar2;
  int iVar3;
  int local_EAX_191;
  int uVar4;
  int iVar4;
  STWorldObject *this_00;
  int local_EAX_744;
  int local_EAX_990;
  int local_EAX_1169;
  uint uVar5;
  short sVar6;
  int *piVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  STWorldObjectVTable *pSVar12;
  int local_60 [21];
  STAllPlayersC *local_c;
  int local_8;

  *param_6 = -1;
  sVar2 = (short)*param_3;
  local_c = this;
  if ((((((-1 < sVar2) && (sVar2 < g_worldGrid.sizeX)) && (sVar8 = (short)*param_4, -1 < sVar8)) &&
       ((sVar8 < g_worldGrid.sizeY && (sVar6 = (short)*param_5, -1 < sVar6)))) &&
      ((sVar6 < g_worldGrid.sizeZ &&
       ((this_00 = STGridAt3D(g_worldGrid, sVar2, sVar8, sVar6).objects[0], this_00 != nullptr &&
        (this_00[1].vtable != (STWorldObjectVTable *)param_1)))))) &&
     ((iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x3c ||
      (iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x53)))) {
    local_EAX_191 = st::fn_004049B7(*(char *)&this_00[1].vtable);
    local_EAX_191 = (int)(byte)local_EAX_191;
    if (local_EAX_191 == 1) {
      iVar3 = st::fn_0040186B((int)this_00[1].vtable,0x42);
    }
    else {
      if (local_EAX_191 == 2) {
        pSVar12 = this_00[1].vtable;
        iVar3 = 0x43;
      }
      else {
        if (local_EAX_191 != 3) goto LAB_004db257;
        pSVar12 = this_00[1].vtable;
        iVar3 = 99;
      }
      iVar3 = st::fn_0040186B((int)pSVar12,iVar3);
    }
    if (iVar3 != 0) {
      iVar3 = *param_5;
      iVar11 = *param_4;
      iVar10 = *param_3;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_common_join_004DB690:
      param_1 = iVar10;
      *param_6 = (int)this_00[1].vtable;
      if (param_1 < 0) {
        return;
      }
      if (iVar11 < 0) {
        return;
      }
      if (iVar3 < 0) {
        return;
      }
      iVar3 = 0;
      piVar7 = local_60;
      do {
        *piVar7 = iVar3;
        pSVar1 = local_c;
        iVar3 = iVar3 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar3 < 0x15);
      iVar3 = 0x15;
      do {
        uVar5 = pSVar1->field_001C * 0x41c64e6d + 0x3039;
        pSVar1->field_001C = uVar5;
        uVar5 = (uVar5 >> 0x10) % 0x15;
        do {
          uVar9 = pSVar1->field_001C * 0x41c64e6d + 0x3039;
          pSVar1->field_001C = uVar9;
          uVar9 = (uVar9 >> 0x10) % 0x15;
        } while (uVar9 == uVar5);
        iVar10 = local_60[uVar5];
        iVar3 = iVar3 + -1;
        local_60[uVar5] = local_60[uVar9];
        local_60[uVar9] = iVar10;
      } while (iVar3 != 0);
      iVar3 = 1;
      uVar5 = local_c->field_001C * 0x41c64e6d + 0x3039;
      local_c->field_001C = uVar5;
      uVar5 = (uVar5 >> 0x10) % 0xd2;
      iVar10 = 0;
      piVar7 = local_60;
      do {
        uVar5 = uVar5 - *piVar7;
        if ((int)uVar5 < 1) {
          iVar3 = local_60[iVar10];
          break;
        }
        iVar10 = iVar10 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar10 < 0x15);
      uVar5 = local_c->field_001C * 0x41c64e6d + 0x3039;
      local_c->field_001C = uVar5;
      uVar5 = (uVar5 >> 0x10) % 0x168;
      iVar10 = st::fn_006AFF50(uVar5);
      iVar10 = st::fn_006B1280(iVar10 * iVar3);
      iVar10 = iVar10 + param_1;
      iVar4 = st::fn_006AFF5B(uVar5);
      iVar3 = st::fn_006B1280(iVar4 * iVar3);
      iVar3 = iVar3 + iVar11;
      if (iVar10 < 0) {
        return;
      }
      if (g_worldGrid.sizeX <= iVar10) {
        return;
      }
      if (iVar3 < 0) {
        return;
      }
      if (g_worldGrid.sizeY <= iVar3) {
        return;
      }
      *param_3 = iVar10;
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
        iVar10 = *param_3 - (int)param_5;
        if (iVar10 <= *param_3 + (int)param_5) {
          do {
            if ((-1 < iVar10) && (iVar10 < g_worldGrid.sizeX)) {
              iVar11 = *param_4 - (int)param_5;
              sVar2 = (short)iVar10;
              if ((((-1 < iVar11) &&
                   (((iVar11 < g_worldGrid.sizeY && (-1 < sVar2)) && (sVar2 < g_worldGrid.sizeX))))
                  && (((sVar8 = (short)iVar11, -1 < sVar8 && (sVar8 < g_worldGrid.sizeY)) &&
                      (sVar6 = (short)local_8, -1 < sVar6)))) &&
                 (((sVar6 < g_worldGrid.sizeZ &&
                   (this_00 = STGridAt3D(g_worldGrid, sVar2, sVar8, sVar6).objects[0],
                   this_00 != nullptr)) &&
                  ((this_00[1].vtable != (STWorldObjectVTable *)param_1 &&
                   ((iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x3c ||
                    (iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x53)))))))) {
                uVar4 = st::fn_004049B7(*(char *)&this_00[1].vtable);
                uVar4 = (int)(byte)uVar4;
                if (uVar4 == 1) {
                  iVar4 = st::fn_0040186B((int)this_00[1].vtable,0x42);
                  iVar3 = local_8;
                }
                else {
                  if (uVar4 == 2) {
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 0x43;
                  }
                  else {
                    if (uVar4 != 3) goto LAB_004db3e4;
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 99;
                  }
                  iVar4 = st::fn_0040186B((int)pSVar12,iVar3);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar4 != 0) goto cf_common_join_004DB690;
              }
LAB_004db3e4:
              iVar11 = *param_4 + (int)param_5;
              if ((((-1 < iVar11) && (iVar11 < g_worldGrid.sizeY)) &&
                  (this_00 = (STWorldObject *)
                             st::fn_00401442(sVar2,(short)iVar11,(short)local_8,0),
                  this_00 != nullptr)) &&
                 ((this_00[1].vtable != (STWorldObjectVTable *)param_1 &&
                  ((iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x3c ||
                   (iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x53)))))) {
                local_EAX_744 = st::fn_004049B7(*(char *)&this_00[1].vtable);
                local_EAX_744 = (int)(byte)local_EAX_744;
                if (local_EAX_744 == 1) {
                  iVar4 = st::fn_0040186B((int)this_00[1].vtable,0x42);
                  iVar3 = local_8;
                }
                else {
                  if (local_EAX_744 == 2) {
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 0x43;
                  }
                  else {
                    if (local_EAX_744 != 3) goto LAB_004db497;
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 99;
                  }
                  iVar4 = st::fn_0040186B((int)pSVar12,iVar3);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar4 != 0) goto cf_common_join_004DB690;
              }
            }
LAB_004db497:
            iVar10 = iVar10 + 1;
          } while (iVar10 <= *param_3 + (int)param_5);
        }
        iVar11 = (*param_4 - (int)param_5) + 1;
        if (iVar11 <= *param_4 + -1 + (int)param_5) {
          do {
            if ((-1 < iVar11) && (iVar11 < g_worldGrid.sizeY)) {
              iVar10 = *param_3 - (int)param_5;
              if ((-1 < iVar10) &&
                 ((((iVar10 < g_worldGrid.sizeX &&
                    (this_00 = (STWorldObject *)
                               st::fn_00401442((short)iVar10,(short)iVar11,(short)local_8,0),
                    this_00 != nullptr)) &&
                   (this_00[1].vtable != (STWorldObjectVTable *)param_1)) &&
                  ((iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x3c ||
                   (iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x53)))))) {
                local_EAX_990 = st::fn_004049B7(*(char *)&this_00[1].vtable);
                local_EAX_990 = (int)(byte)local_EAX_990;
                if (local_EAX_990 == 1) {
                  iVar4 = st::fn_0040186B((int)this_00[1].vtable,0x42);
                  iVar3 = local_8;
                }
                else {
                  if (local_EAX_990 == 2) {
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 0x43;
                  }
                  else {
                    if (local_EAX_990 != 3) goto LAB_004db58d;
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 99;
                  }
                  iVar4 = st::fn_0040186B((int)pSVar12,iVar3);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar4 != 0) goto cf_common_join_004DB690;
              }
LAB_004db58d:
              iVar10 = *param_3 + (int)param_5;
              if ((((-1 < iVar10) && (iVar10 < g_worldGrid.sizeX)) &&
                  ((this_00 = (STWorldObject *)
                              st::fn_00401442((short)iVar10,(short)iVar11,(short)local_8,0),
                   this_00 != nullptr &&
                   (this_00[1].vtable != (STWorldObjectVTable *)param_1)))) &&
                 ((iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x3c ||
                  (iVar3 = this_00->GetObjectTypeId(), iVar3 == 0x53)))) {
                local_EAX_1169 = st::fn_004049B7(*(char *)&this_00[1].vtable);
                local_EAX_1169 = (int)(byte)local_EAX_1169;
                if (local_EAX_1169 == 1) {
                  iVar4 = st::fn_0040186B((int)this_00[1].vtable,0x42);
                  iVar3 = local_8;
                }
                else {
                  if (local_EAX_1169 == 2) {
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 0x43;
                  }
                  else {
                    if (local_EAX_1169 != 3) goto LAB_004db638;
                    pSVar12 = this_00[1].vtable;
                    iVar3 = 99;
                  }
                  iVar4 = st::fn_0040186B((int)pSVar12,iVar3);
                  iVar3 = local_8;
                }
                local_8 = iVar3;
                if (iVar4 != 0) goto cf_common_join_004DB690;
              }
            }
LAB_004db638:
            iVar11 = iVar11 + 1;
          } while (iVar11 <= *param_4 + -1 + (int)param_5);
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

// 004EB010 STAllPlayersC::sub_004EB010
#line 4 "decomp/ST.exe/functions/004EB010/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004EB010(STAllPlayersC *this,int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_8;

  iVar6 = 0;
  local_8 = 0;
  /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
  iVar7 = param_1 * 0xa62;
  g_packedRecords_A62x8[param_1].field1964_0x9c6 = 0;
  local_10 = 0;
  while( true ) {
    do {
      bVar2 = st::fn_004049B7((char)param_1);
      if (bVar2 == 3) {
        iVar5 = local_10 + iVar6 * 2;
        uVar1 = (&DAT_007c1620)[iVar5];
        *(undefined4 *)(iVar7 + 0x7f57c6 + iVar5 * 8) = uVar1;
        *(undefined4 *)(iVar7 + 0x7f57c2 + iVar5 * 8) = uVar1;
      }
      else {
        iVar6 = local_10 + iVar6 * 2;
        iVar4 = iVar6 * 8;
        iVar6 = (&DAT_007c15c4)[iVar6 * 2];
        iVar5 = *(int *)(&DAT_007c15c0 +
                        (local_10 +
                        (local_8 + g_packedRecords_A62x8[param_1].field1964_0x9c6 * 2) * 2) * 8);
        uVar3 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar3;
        iVar5 = iVar5 + (uVar3 >> 0x10) % ((iVar6 - iVar5) + 1U);
        *(int *)(iVar4 + 0x7f57c6 + iVar7) = iVar5;
        *(int *)(iVar4 + 0x7f57c2 + iVar7) = iVar5;
        iVar6 = local_8;
      }
      local_10 = local_10 + 1;
    } while (local_10 < 2);
    iVar6 = iVar6 + 1;
    if (1 < iVar6) break;
    local_10 = 0;
    local_8 = iVar6;
  }
  g_packedRecords_A62x8[param_1].field1963_0x9c2 = g_playSystem_00802A38->field_00E4;
  return 0;
}

// 005EC370 STAllPlayersC::FUN_005ec370
#line 4 "decomp/ST.exe/functions/005EC370/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005EC370 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005EB4DA */

byte * __thiscall st::fn_005EC370(STAllPlayersC *this,uint *param_1)

{
  uint newSize;
  int iVar1;
  uint uVar2;
  AnonShape_005EC370_C8356E04 *pAVar3;
  byte *puVar4;
  uint *puVar5;
  byte *puVar6;
  AnonShape_005EC370_C8356E04 *pAVar7;
  uint *puVar8;
  uint *local_18;
  undefined4 *local_14;
  AnonShape_005EC370_C8356E04 *local_10;
  uint local_c;
  uint local_8;

  local_10 = st::fn_006AAC70(0x246);
  puVar4 = (byte *)&this[1].field_0xa;
  pAVar7 = local_10;
  for (iVar1 = 0x54; iVar1 != 0; iVar1 = iVar1 + -1) {
    pAVar7->field_0000 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    pAVar7 = (AnonShape_005EC370_C8356E04 *)&pAVar7->field_0004;
  }
  *(undefined1 *)&pAVar7->field_0000 = *(undefined1 *)puVar4;
  puVar4 = (byte *)&this->field_0x231;
  puVar6 = (byte *)&local_10->field_0x151;
  memmove(puVar6, puVar4, 0xf5); /* compiler REP MOVS byte copy */
  local_10->field_000C = 2;
  local_14 = st::fn_004018D4((STT3DSprC *)&this->field_0x1d5,&local_8);
  local_18 = st::fn_0040119A(this,(int *)&local_c);
  newSize = local_c + 0x24e + local_8;
  local_10 = st::fn_006ACF50(local_10,newSize);
  local_10->field_0246 = local_8;
  pAVar3 = local_10 + 1;
  puVar4 = (byte *)(local_14);
  pAVar7 = pAVar3;
  for (uVar2 = local_8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pAVar7->field_0000 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    pAVar7 = (AnonShape_005EC370_C8356E04 *)&pAVar7->field_0004;
  }
  for (uVar2 = local_8 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)&pAVar7->field_0000 = *(undefined1 *)puVar4;
    puVar4 = (byte *)((int)puVar4 + 1);
    pAVar7 = (AnonShape_005EC370_C8356E04 *)((int)&pAVar7->field_0000 + 1);
  }
  st::fn_006AB060(&local_14);
  puVar8 = (uint *)((int)&pAVar3->field_0000 + local_8);
  *puVar8 = local_c;
  puVar5 = local_18;
  for (uVar2 = local_c >> 2; puVar8 = puVar8 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
  }
  for (local_c = local_c & 3; local_c != 0; local_c = local_c - 1) {
    *(char *)puVar8 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar8 = (uint *)((int)puVar8 + 1);
  }
  st::fn_006AB060(&local_18);
  *param_1 = newSize;
  return (byte *)local_10;
}

// 005EC850 STAllPlayersC::FUN_005ec850
#line 4 "decomp/ST.exe/functions/005EC850/decomp.c"
int __thiscall st::fn_005EC850(STAllPlayersC *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  this->field_0318 = 0;
  this->field_02D6 = 0xffffffff;
  this->field_0316 = 0;
  iVar1 = *param_1;
  local_8 = iVar1;
  local_24 = st::fn_006AAC70(0x44);
  iVar2 = 0;
  do {
    *(int **)(iVar2 + (int)local_24) = PTR_00806774;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x44);
  STField<int *>(local_24,0x24) = PTR_00806764;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x10;
  local_c = 0;
  st::fn_00404CA5
            ((STT3DSprC *)&this->field_0x1d5,(int *)&local_24,
             (AnonShape_004AD790_77673787 *)(param_1 + 1));
  iVar2 = st::fn_004052CC((STT3DSprC *)&this->field_0x1d5);
  this->field_02D6 = iVar2;
  st::fn_006AB060(&local_24);
  if ((((this->field_023A == 8) && (this->field_02B9 != '\0')) &&
      (uVar3 = (g_playSystem_00802A38->field_00E4 - this->field_028F) + 0x15, 0 < (int)uVar3)) &&
     ((int)uVar3 < 0x15)) {
    iVar2 = *(int *)&this->field_0x2c6;
    iVar7 = *(int *)&this->field_0x2be;
    iVar8 = *(int *)&this->field_0x2c2;
    iVar6 = 1;
    uVar4 = st::fn_004052CC((STT3DSprC *)&this->field_0x1d5);
    st::fn_004051A5(uVar4,iVar6,iVar7,iVar8,iVar2,uVar3);
  }
  piVar5 = (int *)(&((AnonShape_004AD790_77673787 *)(param_1 + 1))->field_0x0 + iVar1);
  iVar1 = *piVar5;
  st::fn_0040551F(this,piVar5 + 1);
  return iVar1 + local_8;
}

// 005FCAD0 STAllPlayersC::FUN_005fcad0
#line 4 "decomp/ST.exe/functions/005FCAD0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005FCAD0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005FBC32 */

byte * __thiscall st::fn_005FCAD0(STAllPlayersC *this,uint *param_1)

{
  uint newSize;
  int iVar1;
  uint uVar2;
  AnonShape_005FCAD0_CB9D1D1A *pAVar3;
  byte *puVar4;
  uint *puVar5;
  byte *puVar6;
  AnonShape_005FCAD0_CB9D1D1A *pAVar7;
  uint *puVar8;
  uint *local_18;
  undefined4 *local_14;
  AnonShape_005FCAD0_CB9D1D1A *local_10;
  uint local_c;
  uint local_8;

  local_10 = st::fn_006AAC70(0x24a);
  puVar4 = (byte *)&this[1].field_0xa;
  pAVar7 = local_10;
  for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
    pAVar7->field_0000 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    pAVar7 = (AnonShape_005FCAD0_CB9D1D1A *)&pAVar7->field_0004;
  }
  *(undefined1 *)&pAVar7->field_0000 = *(undefined1 *)puVar4;
  puVar4 = (byte *)&this->field_0x231;
  puVar6 = (byte *)&local_10->field_0x155;
  memmove(puVar6, puVar4, 0xf5); /* compiler REP MOVS byte copy */
  local_10->field_000C = 2;
  local_14 = st::fn_004018D4((STT3DSprC *)&this->field_0x1d5,&local_8);
  local_18 = st::fn_0040119A(this,(int *)&local_c);
  newSize = local_c + 0x252 + local_8;
  local_10 = st::fn_006ACF50(local_10,newSize);
  local_10->field_0246 = local_8;
  pAVar3 = local_10 + 1;
  puVar4 = (byte *)(local_14);
  pAVar7 = pAVar3;
  for (uVar2 = local_8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pAVar7->field_0000 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    pAVar7 = (AnonShape_005FCAD0_CB9D1D1A *)&pAVar7->field_0004;
  }
  for (uVar2 = local_8 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)&pAVar7->field_0000 = *(undefined1 *)puVar4;
    puVar4 = (byte *)((int)puVar4 + 1);
    pAVar7 = (AnonShape_005FCAD0_CB9D1D1A *)((int)&pAVar7->field_0000 + 1);
  }
  st::fn_006AB060(&local_14);
  puVar8 = (uint *)((int)&pAVar3->field_0000 + local_8);
  *puVar8 = local_c;
  puVar5 = local_18;
  for (uVar2 = local_c >> 2; puVar8 = puVar8 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
  }
  for (local_c = local_c & 3; local_c != 0; local_c = local_c - 1) {
    *(char *)puVar8 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar8 = (uint *)((int)puVar8 + 1);
  }
  st::fn_006AB060(&local_18);
  *param_1 = newSize;
  return (byte *)local_10;
}

// 00622990 STAllPlayersC::FUN_00622990
#line 4 "decomp/ST.exe/functions/00622990/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00622990 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00622246 */

byte * __thiscall st::fn_00622990(STAllPlayersC *this,uint *param_1)

{
  uint newSize;
  int iVar1;
  uint uVar2;
  AnonShape_00622990_E4CFDE96 *pAVar3;
  undefined4 *puVar4;
  uint *puVar5;
  AnonShape_00622990_E4CFDE96 *pAVar6;
  uint *puVar7;
  uint *local_18;
  undefined4 *local_14;
  AnonShape_00622990_E4CFDE96 *local_10;
  uint local_c;
  uint local_8;

  local_10 = st::fn_006AAC70(0x109);
  puVar4 = (undefined4 *)&this->field_0x25e;
  pAVar6 = local_10;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    pAVar6->field_0000 = *puVar4;
    puVar4 = puVar4 + 1;
    pAVar6 = (AnonShape_00622990_E4CFDE96 *)&pAVar6->field_0004;
  }
  *(undefined1 *)&pAVar6->field_0000 = *(undefined1 *)puVar4;
  local_10->field_000C = 2;
  local_14 = st::fn_004018D4((STT3DSprC *)&this->field_0x1d5,&local_8);
  local_18 = st::fn_0040119A(this,(int *)&local_c);
  newSize = local_c + 0x111 + local_8;
  local_10 = st::fn_006ACF50(local_10,newSize);
  local_10->field_0109 = local_8;
  pAVar3 = local_10 + 1;
  puVar4 = local_14;
  pAVar6 = pAVar3;
  for (uVar2 = local_8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pAVar6->field_0000 = *puVar4;
    puVar4 = puVar4 + 1;
    pAVar6 = (AnonShape_00622990_E4CFDE96 *)&pAVar6->field_0004;
  }
  for (uVar2 = local_8 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)&pAVar6->field_0000 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    pAVar6 = (AnonShape_00622990_E4CFDE96 *)((int)&pAVar6->field_0000 + 1);
  }
  st::fn_006AB060(&local_14);
  puVar7 = (uint *)((int)&pAVar3->field_0000 + local_8);
  *puVar7 = local_c;
  puVar5 = local_18;
  for (uVar2 = local_c >> 2; puVar7 = puVar7 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
  }
  for (local_c = local_c & 3; local_c != 0; local_c = local_c - 1) {
    *(char *)puVar7 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar7 = (uint *)((int)puVar7 + 1);
  }
  st::fn_006AB060(&local_18);
  *param_1 = newSize;
  return (byte *)local_10;
}

// 00622AB0 STAllPlayersC::FUN_00622ab0
#line 4 "decomp/ST.exe/functions/00622AB0/decomp.c"
int __thiscall st::fn_00622AB0(STAllPlayersC *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  int *piVar4;
  byte *puVar5;
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar3 = (byte *)(param_1);
  puVar5 = (byte *)&this->field_0x25e;
  memmove(puVar5, puVar3, 0x109); /* compiler REP MOVS byte copy */
  this->field_02BA = 0xffffffff;
  iVar2 = STField<int>(param_1,0x109);
  local_20 = st::fn_006AAC70(0x44);
  iVar1 = 0;
  do {
    *(int **)(iVar1 + (int)local_20) = PTR_00806774;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x44);
  STField<int *>(local_20,0x24) = PTR_00806764;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x10;
  local_8 = 0;
  st::fn_00404CA5
            ((STT3DSprC *)&this->field_0x1d5,(int *)&local_20,
             (AnonShape_004AD790_77673787 *)((int)param_1 + 0x10d));
  st::fn_006AB060(&local_20);
  piVar4 = (int *)(&((AnonShape_004AD790_77673787 *)((int)param_1 + 0x10d))->field_0x0 + iVar2);
  iVar1 = *piVar4;
  st::fn_0040551F(this,piVar4 + 1);
  return iVar1 + iVar2 + 0x109;
}

