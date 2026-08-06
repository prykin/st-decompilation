#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STColl3C.cpp

// 005F6600 STColl3C::STColl3C
#line 1 "decomp/ST.exe/functions/005F6600/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C5AC (store 005F6618)
   Evidence: final_vptr=0079C5AC; returns_this=true; calls_before=2; field_writes_after=2;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005F6600 returns STColl3C::STColl3C this @ 005F6649 */

STColl3C * __thiscall st::fn_005F6600(STColl3C *this)

{

  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->vtable_at_1d5);
  this->vtable = &STColl3CVTable;
  this->vtable_at_1d5 = &STColl3CVTable_at_1D5;
  memset(&this->field_0x231, 0, 0xc2); /* compiler bulk-zero initialization */
  this->field_02B7 = -1;
  return this;
}

// 005F66B0 STColl3C::sub_005F66B0
#line 1 "decomp/ST.exe/functions/005F66B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 005F66B0 returns return of sub_006E60A0 @ 005F66D6 */

int __thiscall st::fn_005F66B0(STColl3C *this)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = this->field_0008;
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(this,local_24);
  return iVar1;
}

// 005F66F0 STColl3C::sub_005F66F0
#line 1 "decomp/ST.exe/functions/005F66F0/decomp.c"
/* [STPrototypeRepairApplier] Propagated return.
   Evidence: 005F66F0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005F62C9

   [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall st::fn_005F66F0(STColl3C *this,uint *param_1)

{
  uint newSize;
  STAllPlayersC *pSVar1;
  byte *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  byte *puVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *puVar12;
  uint *local_1c;
  byte *local_18;
  STAllPlayersC *local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  local_14 = (STAllPlayersC *)this;
  puVar2 = (byte *)(st::fn_006AAC70(0xc2));
  pSVar1 = local_14;
  if (this == nullptr) {
    puVar9 = nullptr;
  }
  else {
    puVar9 = (byte *)&this->field_0x231;
  }
  puVar12 = (byte *)(puVar2);
  memmove(puVar12, puVar9, 0xc2); /* compiler REP MOVS byte copy */
  puVar2[3] = 2;
  local_18 = (byte *)st::fn_004018D4((STT3DSprC *)&local_14->field_0x1d5,&local_c);
  local_1c = st::fn_0040119A(pSVar1,(int *)&local_10);
  local_8 = local_10 + 0xca + local_c;
  pbVar3 = st::fn_006ACF50(puVar2,local_8);
  *(uint *)(pbVar3 + 0xc2) = local_c;
  pbVar11 = local_18;
  pbVar4 = pbVar3 + 0xc6;
  memmove(pbVar4, pbVar11, local_c); /* compiler REP MOVS byte copy */
  uVar6 = 0;
  st::fn_006AB060(&local_18);
  puVar8 = (uint *)(pbVar3 + 0xc6 + local_c);
  *puVar8 = local_10;
  puVar10 = local_1c;
  for (uVar6 = local_10 >> 2; puVar8 = puVar8 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = *puVar10;
    puVar10 = puVar10 + 1;
  }
  for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
    *(byte *)puVar8 = (byte)*puVar10;
    puVar10 = (uint *)((int)puVar10 + 1);
    puVar8 = (uint *)((int)puVar8 + 1);
  }
  st::fn_006AB060(&local_1c);
  pSVar1 = local_14;
  iVar5 = *(int *)&local_14->field_0x2e6;
  if (iVar5 != 0) {
    if (*(int *)(iVar5 + 0x58) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(iVar5 + 0x5c) << 2;
    }
    newSize = local_8 + 0x6c + uVar6;
    local_8 = newSize;
    pbVar4 = st::fn_006ACF50(pbVar3,newSize);
    puVar2 = (byte *)(*(undefined4 **)&pSVar1->field_0x2e6);
    pbVar11 = pbVar4 + (newSize - uVar6) + -0x6c;
    memmove(pbVar11, puVar2, 0x6c); /* compiler REP MOVS byte copy */
    iVar5 = 0;
    if (uVar6 != 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pbVar11 = *(byte **)(*(int *)&local_14->field_0x2e6 + 0x58);
      pbVar3 = pbVar4 + (newSize - uVar6) + -0x6c + 0x6c;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar3 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar3 = pbVar3 + 4;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pbVar3 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar3 = pbVar3 + 1;
      }
    }
    *param_1 = local_8;
    return pbVar4;
  }
  *param_1 = local_8;
  return pbVar3;
}

// 005F68B0 STColl3C::sub_005F68B0
#line 1 "decomp/ST.exe/functions/005F68B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_005F68B0(STColl3C *this,undefined4 *param_1)

{
  ushort *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  int *piVar7;
  byte *puVar8;
  uint size;
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 *local_8;

  if (this == nullptr) {
    puVar8 = nullptr;
  }
  else {
    puVar8 = (byte *)&this->field_0x231;
  }
  puVar6 = (byte *)(param_1);
  memmove(puVar8, puVar6, 0xc2); /* compiler REP MOVS byte copy */
  this->field_02B7 = -1;
  local_28 = st::fn_006AAC70(0x44);
  iVar3 = 0;
  do {
    *(undefined4 *)(iVar3 + (int)local_28) = DAT_00806774;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x44);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_10 = 0;
  local_14 = 0x10;
  st::fn_00404CA5
            ((STT3DSprC *)&this->vtable_at_1d5,(int *)&local_28,
             (AnonShape_004AD790_77673787 *)((int)param_1 + 0xc6));
  st::fn_00403107(this,*(ushort *)&this->field_02C1,*(short *)&this->field_02C5,
               *(ushort *)&this->field_02C9);
  st::fn_006AB060(&local_28);
  iVar3 = STField<int>(param_1,0xc2);
  piVar7 = (int *)(&((AnonShape_004AD790_77673787 *)((int)param_1 + 0xc6))->field_0x0 + iVar3);
  st::fn_0040551F((STAllPlayersC *)this,piVar7 + 1);
  puVar8 = (byte *)((int)(piVar7 + 1) + *piVar7);
  iVar3 = iVar3 + 0xca + *piVar7;
  if (this->field_02E6 == nullptr) {
    return iVar3;
  }
  local_8 = puVar8;
  puVar1 = st::fn_006AAC70(0x6c);
  this->field_02E6 = puVar1;
  for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)puVar1 = *puVar8;
    puVar8 = (byte *)(puVar8 + 1);
    puVar1 = puVar1 + 2;
  }
  puVar1 = this->field_02E6;
  iVar3 = iVar3 + 0x6c;
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar1 = this->field_02E6;
  puVar1[2] = 0xffff;
  puVar1[3] = 0xffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(this->field_02E6 + 0x2c) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar5 = *(uint *)(this->field_02E6 + 0x2e);
    size = uVar5 * 4;
    local_c = size;
    pvVar2 = st::fn_006AAC70(size);
    *(void **)(this->field_02E6 + 0x2c) = pvVar2;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    puVar8 = (byte *)(*(undefined4 **)(this->field_02E6 + 0x2c));
    for (uVar5 = uVar5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *local_8;
      local_8 = local_8 + 1;
      puVar8 = (byte *)(puVar8 + 1);
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)local_8;
      local_8 = (undefined4 *)((int)local_8 + 1);
      puVar8 = (byte *)((int)puVar8 + 1);
    }
    return iVar3 + size;
  }
  return iVar3;
}

// 005F6EC0 STColl3C::FUN_005f6ec0
#line 1 "decomp/ST.exe/functions/005F6EC0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C5AC
   Entries: 00404737
   Slots: 0x78
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005F6EC0(STColl3C *this)

{
  return this->field_0269;
}

// 005F6F20 STColl3C::sub_005F6F20
#line 1 "decomp/ST.exe/functions/005F6F20/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=005F5F20 @ 005F6322
   -> TEST TEST EAX,EAX

   [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_005F6F20(STColl3C *this,int param_1)

{
  int iVar1;

  iVar1 = this->field_0269 - param_1;
  this->field_0269 = iVar1;
  if (iVar1 < 1) {
    this->field_0269 = 0;
  }
  return (uint)(iVar1 < 1);
}

// 005F6F60 STColl3C::sub_005F6F60
#line 1 "decomp/ST.exe/functions/005F6F60/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_02DD uses
   /SubmarineTitans/Recovered/Enums/STColl3C_field_02DDState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12

   [STSwitchEnumApplier] Switch target field_02DD uses
   /SubmarineTitans/Recovered/Enums/STColl3C_field_02DDState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13
    */

void __thiscall st::fn_005F6F60(STColl3C *this)

{
  STColl3CVTable_at_1D5 **this_00;
  short sVar1;
  undefined1 uVar2;
  bool bVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  STColl3C_field_02DDState SVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int uVar5;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort uVar11;
  undefined4 local_2c;
  undefined4 local_28;
  ushort *local_24;
  uint local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  short local_a;
  short local_8;
  short local_6;

  switch(this->field_02DD) {
  case CASE_1:
    if ((this->field_02E1 <= g_playSystem_00802A38->field_00E4) && (this->field_02EA == 0)) {
      if (this->field_02B7 < 0) {
        iVar5 = st::fn_00402A81(this,this->field_0245,this->field_0249,this->field_024D);
        if (iVar5 != 0) {
          uVar10 = st::fn_00403963();
          this->field_02B6 = (char)uVar10;
          if ((char)uVar10 != '\0') {
            st::fn_00401D8E(this,1);
          }
          this->field_02BB = 1;
          this->field_029D = 1;
          this->field_02DD = CASE_2;
          this->field_02E5 = 0;
          return;
        }
      }
      else {
        iVar5 = st::fn_0040163B(this,&this->field_027D,&this->field_0281,&this->field_0285);
        if (((iVar5 != 0) && (iVar5 = st::fn_004013C0(this,2), iVar5 != 0)) &&
           (iVar5 = st::fn_0040295F(this,*(short *)&this->field_0291,*(short *)&this->field_0295,
                                       *(short *)&this->field_0299,1), iVar5 == 0)) {
          this->field_02DD = CASE_3;
          st::fn_00402A90((STT3DSprC *)&this->vtable_at_1d5);
          this->field_02BB = 2;
          sVar1 = PTR_00806724->entryCount;
          this->field_02D1 = sVar1 + -1;
          st::fn_0040116D
                    ((STT3DSprC *)&this->vtable_at_1d5,PTR_00806724->entries[sVar1 + -1],
                     (int)PTR_00806724->field_002C);
          st::fn_004039B3(this,0,0,2);
          if (this->field_02A0 == 0) {
            this->field_029F = 0;
            return;
          }
        }
      }
    }
    break;
  case CASE_2:
    if (this->field_02E5 != '\0') {
      this->field_02DD = CASE_1;
      return;
    }
    if (this->field_02EA != 0) {
      if (this->field_029E != '\0') {
        st::fn_00404AE3(this);
      }
      if (this->field_02A0 < 1) goto cf_common_exit_005F7A68;
      this->field_029F = 1;
    }
    if (this->field_029F == '\0') {
      if (this->field_029E == '\0') {
        if ((g_playSystem_00802A38->field_00E4 + (int)this->field_0018 & 3) != 0) {
          return;
        }
        uVar2 = st::fn_00403A49(this,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,uVar2) != 0) {
          this->field_028D = 0;
          return;
        }
        iVar5 = this->field_028D + 1;
        this->field_028D = iVar5;
        if (iVar5 < 6) {
          if (iVar5 < 0xb) {
            return;
          }
          goto LAB_005f744e;
        }
        iVar5 = st::fn_004013C0(this,2);
        if (iVar5 == 0) {
          return;
        }
        iVar5 = st::fn_0040295F(this,*(short *)&this->field_0291,*(short *)&this->field_0295,
                                   *(short *)&this->field_0299,1);
        if (iVar5 != 0) {
          return;
        }
        this->field_02DD = CASE_3;
        st::fn_00402A90((STT3DSprC *)&this->vtable_at_1d5);
        this->field_02BB = 2;
        sVar1 = PTR_00806724->entryCount;
        goto LAB_005f7400;
      }
      iVar5 = st::fn_00404EDA(this,this->field_0289,0,nullptr,nullptr,
                                 nullptr);
      if (iVar5 == 0) {
        st::fn_00404AE3(this);
        return;
      }
      iVar5 = st::fn_004013C0(this,2);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = st::fn_0040295F(this,*(short *)&this->field_0291,*(short *)&this->field_0295,
                                 *(short *)&this->field_0299,1);
      if (iVar5 != 0) {
        return;
      }
      this->field_02DD = CASE_3;
      st::fn_00402A90((STT3DSprC *)&this->vtable_at_1d5);
      this->field_02BB = 2;
      sVar1 = PTR_00806724->entryCount;
      this->field_02D1 = sVar1 + -1;
      st::fn_0040116D
                ((STT3DSprC *)&this->vtable_at_1d5,PTR_00806724->entries[sVar1 + -1],
                 (int)PTR_00806724->field_002C);
      st::fn_004039B3(this,0,0,2);
      this->field_02BB = 1;
      this->field_029D = 0;
    }
    else {
      iVar5 = st::fn_0040163B(this,&this->field_027D,&this->field_0281,&this->field_0285);
      if (iVar5 == 0) {
LAB_005f744e:
        st::fn_00404133(this,200);
        return;
      }
      iVar5 = st::fn_004013C0(this,2);
      if (iVar5 == 0) {
        return;
      }
      iVar5 = st::fn_0040295F(this,*(short *)&this->field_0291,*(short *)&this->field_0295,
                                 *(short *)&this->field_0299,1);
      if (iVar5 != 0) {
        return;
      }
      this->field_02DD = CASE_3;
      st::fn_00402A90((STT3DSprC *)&this->vtable_at_1d5);
      this->field_02BB = 2;
      sVar1 = PTR_00806724->entryCount;
LAB_005f7400:
      this->field_02D1 = sVar1 + -1;
      st::fn_0040116D
                ((STT3DSprC *)&this->vtable_at_1d5,PTR_00806724->entries[sVar1 + -1],
                 (int)PTR_00806724->field_002C);
      st::fn_004039B3(this,0,0,2);
      if (this->field_02A0 == 0) {
        this->field_029F = 0;
      }
    }
    iVar5 = st::fn_00402A81(this,(int)(short)(*(short *)&this->field_0291 * 0xc9 + 100),
                         (int)(short)(*(short *)&this->field_0295 * 0xc9 + 100),
                         (int)(short)(*(short *)&this->field_0299 * 200 + 100));
    if (iVar5 != 0) {
      st::fn_00402B12((STAllPlayersC *)this);
      st::fn_00402982(&this->vtable_at_1d5,0);
      st::fn_004023A1((TLOEmbryoTy *)this,(undefined *)0x2);
      this->field_02BB = 2;
      sVar1 = PTR_00806724->entryCount;
      this->field_02D1 = sVar1 + -1;
      st::fn_0040116D
                ((STT3DSprC *)&this->vtable_at_1d5,PTR_00806724->entries[sVar1 + -1],
                 (int)PTR_00806724->field_002C);
      return;
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case CASE_3:
    *(int *)(this->field_02E6 + 0x10) = *(int *)(this->field_02E6 + 0x10) + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(this->field_02E6 + 0x10) < 0x23) {
      st::fn_00404151((AnonShape_005F9E40_7E333F34 *)this);
    }
    else {
      this->field_02DD = CASE_4;
      uVar8 = *(uint *)(this->field_02E6 + 2);
      if (-1 < (int)uVar8) {
        st::fn_006EA050(this->field_0211,uVar8,1,0xffffffff,0);
        puVar7 = this->field_02E6;
        puVar7[2] = 0xffff;
        puVar7[3] = 0xffff;
        st::fn_00403517(this);
      }
    }
  case CASE_4:
    iVar5 = st::fn_004057B3((AnonShape_005FA180_2D8671A3 *)this);
    if (iVar5 < 0) {
      if (this->field_02EA != 0) {
        if (this->field_029E != '\0') {
          st::fn_00404AE3(this);
        }
        if (this->field_02A0 < 1) {
cf_common_exit_005F7A68:
          st::fn_00405C68((AnonShape_005FB100_42251CC8 *)this);
          return;
        }
        this->field_029F = 1;
      }
      if (this->field_029E == '\0') {
        this->field_02DD = CASE_C;
        this->field_02EF = 0;
        this->field_0076 = 1;
        this->field_02D5 = g_playSystem_00802A38->field_00E4;
        this->field_02D9 = g_playSystem_00802A38->field_00E4 + 0x32;
        return;
      }
      iVar5 = st::fn_00402FAE(this);
      if (-1 < iVar5) {
        if (iVar5 == 2) {
          this->field_02DD = (-(uint)(this->field_029F != '\0') & 2) + CASE_8;
          return;
        }
        this->field_02DD = CASE_5;
        this->field_029D = 0;
        return;
      }
      this->field_02DD = CASE_C;
      this->field_02EF = 0;
      this->field_0076 = 1;
LAB_005f79aa:
      this->field_02D5 = g_playSystem_00802A38->field_00E4;
      this->field_02D9 = g_playSystem_00802A38->field_00E4 + 0x32;
      return;
    }
    break;
  case CASE_5:
    if (this->field_02EA != 0) {
      this->vfunc_20();
    }
    SVar4 = st::fn_00401F41((int *)this);
    this->field_02DD = SVar4;
    return;
  case CASE_6:
    iVar5 = st::fn_004057B3((AnonShape_005FA180_2D8671A3 *)this);
    if (PTR_00806724->entryCount <= iVar5) {
      this->field_02DD = CASE_2;
      return;
    }
    break;
  case CASE_7:
    if (this->field_02E1 <= g_playSystem_00802A38->field_00E4) {
      this->field_02EE = 0;
      this->field_02DD = CASE_1;
      st::fn_00404EC1(this->field_005B,this->field_005D,this->field_005F,0,
                         (AnonShape_00495FF0_59081BDD *)this);
      st::fn_00403D0F((STT3DSprC *)&this->vtable_at_1d5);
      this->field_02BB = 0;
      st::fn_0040464C(this);
      return;
    }
    break;
  case CASE_8:
    if (this->field_02EA == 0) {
      st::fn_004018C5((STFishC *)this,&local_8,&local_6,&local_a);
      if ((int)local_8 != this->field_0291) {
        return;
      }
      if ((int)local_6 != this->field_0295) {
        return;
      }
      iVar5 = st::fn_00404EDA(this,this->field_0289,1,(int *)&local_24,&local_2c,&local_28);
      if (iVar5 != 0) {
        iVar5 = st::fn_00401168(this);
        if (iVar5 < 1) {
          return;
        }
        puVar7 = this->field_02E6 + 4;
        for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)puVar7 = *(undefined4 *)local_24;
          local_24 = local_24 + 2;
          puVar7 = puVar7 + 2;
        }
        *puVar7 = *local_24;
        (&this->field_0x2a4)[this->field_02A0 * 6] = 1;
        *(undefined4 *)(&this->field_0x2a6 + this->field_02A0 * 6) = local_28;
        (&this->field_0x2a5)[this->field_02A0 * 6] = this->field_0024;
        if (iVar5 == 2) {
          *(undefined4 *)this->field_02E6 = local_2c;
        }
        if (*(STT3DSprC **)this->field_02E6 != nullptr) {
          uVar11 = 30000;
          uVar9 = 0;
          iVar6 = 0;
          iVar5 = 1;
          uVar8 = 0xe;
          uVar5 = st::fn_004052CC(*(STT3DSprC **)this->field_02E6);
          st::fn_006E9EF0
                    ((ST3DSMAPContext *)this->field_0211,uVar5,uVar8,iVar5,iVar6,uVar9,uVar11);
        }
        st::fn_00403611(this,this->field_0289);
        iVar5 = st::fn_0040527C((AnonShape_005F95B0_F363C582 *)this);
        if (iVar5 == 0) {
          return;
        }
        *(uint *)(this->field_02E6 + 0x34) = g_playSystem_00802A38->field_00E4;
        puVar7 = this->field_02E6;
        this->field_02DD = CASE_9;
        puVar7[0x32] = 1;
        puVar7[0x33] = 0;
        this->field_02E6[0x19] = 0xffff;
        *(int *)(this->field_02E6 + 0x30) = *(int *)(this->field_02E6 + 0x2e) + -1;
        return;
      }
    }
    st::fn_00404AE3(this);
    this->field_02DD = CASE_C;
    this->field_02D5 = g_playSystem_00802A38->field_00E4;
    uVar8 = g_playSystem_00802A38->field_00E4;
    this->field_02BB = 1;
    this->field_02EF = 0;
    this->field_02D9 = uVar8 + 0x32;
    this->field_0076 = 1;
    if (0 < this->field_02A0) {
      this->field_029F = 1;
      return;
    }
LAB_005f7efc:
    this->field_029F = 0;
    return;
  case CASE_9:
    iVar5 = st::fn_0040531C(this,g_playSystem_00802A38->field_00E4,&local_14,&local_18,&local_10);
    if (iVar5 == 1) {
      *(int *)(this->field_02E6 + 10) = local_14;
      *(int *)(this->field_02E6 + 0xc) = local_18;
      *(int *)(this->field_02E6 + 0xe) = local_10;
      *(int *)(this->field_02E6 + 0x10) = *(int *)(this->field_02E6 + 0x10) + 1;
      puVar7 = this->field_02E6;
      if (*(int *)(puVar7 + 0x12) <= *(int *)(puVar7 + 0x10)) {
        puVar7[0x10] = 0;
        puVar7[0x11] = 0;
      }
      st::fn_00404151((AnonShape_005F9E40_7E333F34 *)this);
      return;
    }
    if (iVar5 == 3) {
      st::fn_00403517(this);
      iVar5 = st::fn_0040163B(this,&this->field_027D,&this->field_0281,&this->field_0285);
      if (iVar5 == 0) {
        this->field_0281 = this->field_0261;
        this->field_027D = this->field_025D;
        this->field_0285 = this->field_0265;
        st::fn_00404AE3(this);
      }
      else {
        this->field_029E = 1;
      }
      st::fn_004018C5((STFishC *)this,&local_8,&local_6,&local_a);
      iVar5 = st::fn_004020C7(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,(int)local_a,
                                 &local_14,&local_18,&local_10);
      if (iVar5 != 0) {
        this->field_02A0 = this->field_02A0 + 1;
        iVar5 = st::fn_00401460(this);
        if (iVar5 == 0) {
          iVar5 = st::fn_00403C24(this,local_14,local_18,local_10);
          if (iVar5 == 0) {
            return;
          }
          this->field_02DD = CASE_5;
          this->field_02BB = 1;
          this->field_029D = local_1c[0];
          this->field_029F = 1;
          return;
        }
        this->field_02DD = CASE_C;
        this->field_02D5 = g_playSystem_00802A38->field_00E4;
        uVar8 = g_playSystem_00802A38->field_00E4;
        this->field_02EF = 0;
        this->field_02BB = 1;
        this->field_02D9 = uVar8 + 0x32;
        this->field_0076 = 1;
        goto LAB_005f7efc;
      }
    }
    break;
  case CASE_A:
    iVar5 = st::fn_00404070(this,&local_10,&local_20);
    if (iVar5 != 0) {
      this->field_02DD = CASE_B;
      st::fn_004039B3(this,local_10,local_20,1);
      return;
    }
    this->field_02DD = CASE_C;
    this->field_0076 = 1;
    this->field_02EF = 0;
    goto LAB_005f79aa;
  case CASE_B:
    bVar3 = st::fn_00404D4F((AnonShape_005FAEE0_B5D482C5 *)this);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (CONCAT31(extraout_var_00,bVar3) != 0) {
      iVar5 = this->field_02A0;
      if ((&this->field_029E)[iVar5 * 6] != '\0') {
        st::fn_00405AFB(this,*(int *)((int)&this->field_02A0 + iVar5 * 6),iVar5 + -1);
        (&this->field_029E)[this->field_02A0 * 6] = 0;
        iVar5 = this->field_02A0 + -1;
        this->field_02A0 = iVar5;
        if (0 < iVar5) {
          st::fn_00405763(this,1,1,0,0,0,0);
          return;
        }
      }
      st::fn_00403517(this);
      this->field_029F = 0;
      this->field_02A0 = 0;
      if (this->field_02EA != 0) goto cf_common_exit_005F7A68;
      st::fn_00403A49(this,0);
      if (this->field_029E == '\0') {
        iVar5 = st::fn_004013C0(this,2);
        if (iVar5 != 0) {
          local_20 = st::fn_00403C24(this,this->field_0291,this->field_0295,this->field_0299);
          if (-1 < (int)local_20) {
            this->field_02DD = CASE_5;
            this->field_029D = 3;
            st::fn_00404151((AnonShape_005F9E40_7E333F34 *)this);
            return;
          }
          this->field_02DD = CASE_C;
          this->field_02EF = 0;
          this->field_0076 = 1;
          this->field_02D5 = g_playSystem_00802A38->field_00E4;
          this->field_02D9 = g_playSystem_00802A38->field_00E4 + 0x32;
          st::fn_00404151((AnonShape_005F9E40_7E333F34 *)this);
          return;
        }
        this->field_02DD = CASE_C;
        this->field_02EF = 0;
        this->field_0076 = 1;
        this->field_02D5 = g_playSystem_00802A38->field_00E4;
        this->field_02D9 = g_playSystem_00802A38->field_00E4 + 0x32;
      }
      else {
        iVar5 = st::fn_004013C0(this,2);
        if (iVar5 != 0) {
          st::fn_004018C5((STFishC *)this,&local_8,&local_6,&local_a);
          iVar5 = st::fn_004020C7(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar5 != 0) &&
             (iVar5 = st::fn_00403C24(this,local_14,local_18,local_10), iVar5 != 0)) {
            this->field_02DD = CASE_5;
            this->field_02BB = 1;
            this->field_029D = local_1c[0];
            this->field_029F = 0;
            this->field_0076 = 0;
            st::fn_00404151((AnonShape_005F9E40_7E333F34 *)this);
            return;
          }
        }
      }
    }
    st::fn_00404151((AnonShape_005F9E40_7E333F34 *)this);
    return;
  case CASE_C:
    if ((this->field_0076 == 1) || ((this->field_0076 == 0 && (this->field_006E != 0x2f)))) {
      st::fn_004045AC((AnonShape_00416390_86C8F938 *)this);
    }
    if (this->field_02EA != 0) {
      if (this->field_029E != '\0') {
        st::fn_00404AE3(this);
      }
      if (this->field_02A0 < 1) goto cf_common_exit_005F7A68;
      this->field_029F = 1;
    }
    if (this->field_029F == '\0') {
      if (this->field_029E == '\0') {
        if (((int)this->field_0018 + g_playSystem_00802A38->field_00E4 & 3) == 0) {
          st::fn_00403A49(this,0);
          return;
        }
        if ((this->field_02D9 < g_playSystem_00802A38->field_00E4) &&
           (iVar5 = st::fn_006ACFD0(this->field_025D,this->field_0261,(int)this->field_005B,
                                 (int)this->field_005D), 3 < iVar5)) {
          iVar5 = this->field_02EF;
          if (iVar5 != 0) goto LAB_005f7927;
          iVar5 = st::fn_0040163B(this,&this->field_027D,&this->field_0281,&this->field_0285);
          if (iVar5 == 0) goto cf_common_exit_005F76D2;
          st::fn_004018C5((STFishC *)this,&local_8,&local_6,&local_a);
          iVar5 = st::fn_004020C7(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar5 != 0) &&
             (iVar5 = st::fn_00403C24(this,local_14,local_18,local_10), iVar5 != 0)) {
            this->field_02DD = CASE_5;
            this->field_02BB = 1;
            this->field_0076 = 0;
            this->field_029D = local_1c[0];
            this->field_029F = 0;
            return;
          }
        }
      }
      else {
        iVar5 = st::fn_00404EDA(this,this->field_0289,0,nullptr,nullptr,
                                   nullptr);
        if ((iVar5 != 0) && (iVar5 = st::fn_004013C0(this,2), iVar5 != 0)) {
          st::fn_004018C5((STFishC *)this,&local_8,&local_6,&local_a);
          iVar5 = st::fn_004020C7(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar5 != 0) &&
             (iVar5 = st::fn_00403C24(this,local_14,local_18,local_10), iVar5 != 0)) {
            this->field_02DD = CASE_5;
            this->field_02BB = 1;
            this->field_0076 = 0;
            this->field_029D = local_1c[0];
            this->field_029F = 0;
            return;
          }
        }
      }
    }
    else if (this->field_02A0 != 0) {
      iVar5 = this->field_02EF;
      if (iVar5 != 0) {
LAB_005f7927:
        this->field_02EF = iVar5 + -1;
        return;
      }
      iVar5 = st::fn_006ACFD0(this->field_025D,this->field_0261,(int)this->field_005B,
                           (int)this->field_005D);
      if (iVar5 < 4) {
        iVar5 = st::fn_0040163B(this,&this->field_027D,&this->field_0281,&this->field_0285);
        if (iVar5 == 0) goto cf_common_exit_005F76D2;
        iVar5 = st::fn_00402FAE(this);
        if (-1 < iVar5) {
          if ((iVar5 == 2) && (this->field_029F != '\0')) {
            this->field_0076 = 0;
            this->field_02DD = CASE_A;
            return;
          }
          this->field_02BB = 1;
          this->field_0076 = 0;
          this->field_029D = 0;
          this->field_02DD = CASE_5;
          return;
        }
      }
      else {
        iVar5 = st::fn_0040163B(this,&this->field_027D,&this->field_0281,&this->field_0285);
        if (iVar5 != 0) {
          st::fn_004018C5((STFishC *)this,&local_8,&local_6,&local_a);
          iVar5 = st::fn_004020C7(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar5 != 0) &&
             (iVar5 = st::fn_00403C24(this,local_14,local_18,local_10), iVar5 != 0)) {
            this->field_02DD = CASE_5;
            this->field_02BB = 1;
            this->field_029D = local_1c[0];
            this->field_0076 = 0;
          }
        }
        if (this->field_02DD != CASE_5) {
cf_common_exit_005F76D2:
          this->field_02EF = 0x10;
          return;
        }
      }
    }
    break;
  case CASE_D:
    this_00 = &this->vtable_at_1d5;
    iVar5 = st::fn_004042AF(this_00,'\b');
    if (iVar5 == 1) {
      if (this->field_02BB != '\0') {
        st::fn_0040464C(this);
        st::fn_00404629((TLOBaseTy *)this);
      }
      st::fn_00404264((STT3DSprC *)this_00,0xf);
    }
    if (iVar5 == *(int *)(&DAT_007ce73d + this->field_02CD * 0x39)) {
      st::fn_00404EC1(this->field_005B,this->field_005D,this->field_005F,0,
                         (AnonShape_00495FF0_59081BDD *)this);
      st::fn_00404264((STT3DSprC *)this_00,0xe);
      st::fn_00404264((STT3DSprC *)this_00,0xc);
      uVar10 = 0xffffffff;
      iVar6 = st::fn_004052CC((STT3DSprC *)this_00);
      st::fn_0040223E((int)this->field_0041,(int)this->field_0043,(int)this->field_0045,0x2b,
                         (int)this,(int)this->field_006C,iVar6,uVar10);
    }
    if (iVar5 == *(int *)(&DAT_007ce741 + this->field_02CD * 0x39)) {
      st::fn_00402A90((STT3DSprC *)this_00);
    }
    if (iVar5 == *(int *)(&DAT_007ce745 + this->field_02CD * 0x39)) {
      st::fn_00405240((STT3DSprC *)this_00,9,g_playSystem_00802A38->field_00E4);
    }
    if (iVar5 == *(int *)(&DAT_007ce739 + this->field_02CD * 0x39) + -1) {
      st::fn_00404264((STT3DSprC *)this_00,8);
    }
    iVar5 = st::fn_004042AF(this_00,'\t');
    if (iVar5 == *(int *)(&DAT_007ce749 + this->field_02CD * 0x39)) {
      st::fn_00401B04(this);
    }
  }
  return;
}

// 005F8650 STColl3C::sub_005F8650
#line 1 "decomp/ST.exe/functions/005F8650/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=22;
   incoming_edx_uses=16; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_005F8650(STColl3C *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;

  this->field_02C9 = param_3;
  this->field_02C1 = param_1;
  this->field_02C5 = param_2;
  sVar3 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    sVar3 = (((short)(param_1 / 0xc9) + sVar3) - (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar3 = ((short)(param_1 / 0xc9) + sVar3) - (short)((longlong)param_1 * 0x28c1979 >> 0x3f);
  }
  this->field_0047 = sVar3;
  sVar4 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    sVar4 = (((short)(param_2 / 0xc9) + sVar4) - (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar4 = ((short)(param_2 / 0xc9) + sVar4) - (short)((longlong)param_2 * 0x28c1979 >> 0x3f);
  }
  this->field_0049 = sVar4;
  sVar5 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    sVar5 = (((short)(param_3 / 200) + sVar5) - (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = ((short)(param_3 / 200) + sVar5) - (short)((longlong)param_3 * 0x51eb851f >> 0x3f);
  }
  this->field_004B = sVar5;
  this->field_0041 = *(short *)&this->field_02C1;
  this->field_0043 = *(short *)&this->field_02C5;
  this->field_0045 = *(short *)&this->field_02C9;
  this->field_005B = sVar3;
  this->field_005D = sVar4;
  this->field_005F = sVar5;
  uVar1 = g_playSystem_00802A38->field_00E4;
  this->field_02D9 = 0;
  this->field_02D5 = uVar1;
  iVar2 = st::fn_004037DD(this,param_1,param_2,param_3,
                             (int)(short)(*(short *)&this->field_027D * 0xc9 + 100),
                             (int)(short)(*(short *)&this->field_0281 * 0xc9 + 100),
                             (int)(short)(*(short *)&this->field_0285 * 200 + 100));
  this->field_02BD = iVar2;
  this->field_006C = (short)iVar2;
  return 1;
}

// 005F9450 STColl3C::sub_005F9450
#line 1 "decomp/ST.exe/functions/005F9450/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005F9450(STColl3C *this)

{
  if ((g_manRub3_008117A4 != nullptr) && (this->field_029E == '\x01')) {
    st::fn_00402527(g_manRub3_008117A4,this->field_0235,this->field_027D,this->field_0281,
                       this->field_0285,this->field_0289,0xffffffff,0);
  }
  this->field_029E = 0;
  return;
}

// 005FA070 STColl3C::sub_005FA070
#line 1 "decomp/ST.exe/functions/005FA070/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005FA070(STColl3C *this)

{
  if (this->field_02DD == CASE_5) {
    this->vfunc_20();
    st::fn_00405952(this);
  }
  st::fn_00403517(this);
  return;
}

// 005FA8B0 STColl3C::sub_005FA8B0
#line 1 "decomp/ST.exe/functions/005FA8B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_005FA8B0(STColl3C *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  dword dVar4;
  int iVar5;
  STFishC *this_00;
  undefined4 uVar6;
  STFishC *local_14;
  undefined4 local_10;
  short local_a;
  short local_8;
  short local_6;

  sVar1 = *(short *)&this->field_025D;
  sVar2 = *(short *)&this->field_0265;
  sVar3 = *(short *)&this->field_0261;
  local_10 = 0;
  if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
      ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) ||
     ((g_worldGrid.sizeZ <= sVar2 ||
      (this_00 = (STFishC *)
                 STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], this_00 == nullptr)))) {
    if (((AnonShape_005EFAE0_B406B78B *)this->field_0255 == nullptr) ||
       (iVar5 = st::fn_006E62D0
                          (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)this->field_0255,
                           (int *)&local_14), iVar5 == -4)) {
      return 0;
    }
    this_00 = local_14;
    uVar6 = 1;
  }
  else {
    uVar6 = local_10;
    if ((*(int *)&this_00->field_0x20 == 1000) &&
       (dVar4 = this_00->slot_2C(), uVar6 = local_10, dVar4 == 0x6e)) {
      uVar6 = 1;
    }
  }
  if (this_00 != nullptr) {
    st::fn_004018C5(this_00,&local_6,&local_8,&local_a);
    *param_1 = (int)local_6;
    *param_2 = (int)local_8;
    *param_3 = local_a + 1;
  }
  return uVar6;
}

// 005FB5E0 STColl3C::FUN_005fb5e0
#line 1 "decomp/ST.exe/functions/005FB5E0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C5AC
   Entries: 00402649
   Slots: 0xF8
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_005FB5E0(STColl3C *this)

{
  return (uint)(0 < (int)this->field_0269);
}

