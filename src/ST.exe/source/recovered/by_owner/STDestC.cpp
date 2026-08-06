#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STDestC.cpp

// 006023F0 STDestC::STDestC
#line 4 "decomp/ST.exe/functions/006023F0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C9B0 (store 00602419)
   Evidence: final_vptr=0079C9B0; returns_this=true; calls_before=2; field_writes_after=0;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 006023F0 returns STDestC::STDestC this @ 00602427 */

STDestC * __thiscall st::fn_006023F0(STDestC *this)

{

  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &st_global_0079CB10;
  this->vtable = &st_global_0079C9B0;
  memset(&this->field_0x231, 0, 0x17e); /* compiler bulk-zero initialization */
  return this;
}

// 00602440 STDestC::sub_00602440
#line 4 "decomp/ST.exe/functions/00602440/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=4; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00602440(STDestC *this)

{
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_18 = 0;
  local_10 = this->field_0008;
  local_14 = 10;
  st::fn_006E60A0(this,local_24);
  this->field_036E = 6;
  return;
}

// 006024B0 STDestC::sub_006024B0
#line 4 "decomp/ST.exe/functions/006024B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=1; incoming_this_accesses=23;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_006024B0(STDestC *this)

{
  int iVar1;
  int iVar2;

  iVar2 = (int)(short)(this->field_0255 * 0xc9 + 100);
  this->field_037B = iVar2;
  iVar1 = (int)(short)(this->field_0257 * 0xc9 + 100);
  this->field_037F = iVar1;
  this->field_0383 = (int)(short)(this->field_0259 * 200 + 100);
  if (this->field_0241 == 1) {
    this->field_037B = iVar2 + 100;
    this->field_037F = iVar1 + 100;
  }
  this->field_0047 = this->field_0255;
  this->field_0041 = (short)this->field_037B;
  this->field_0043 = (short)this->field_037F;
  this->field_004B = this->field_0259;
  this->field_0045 = (short)this->field_0383;
  this->field_0049 = this->field_0257;
  this->field_0372 = this->field_0245;
  this->field_03A7 = 1;
  this->field_036E = 1;
  this->field_0249 = 0xffffffff;
  return;
}

// 006025D0 STDestC::sub_006025D0
#line 4 "decomp/ST.exe/functions/006025D0/decomp.c"
/* [STPrototypeRepairApplier] Propagated return.
   Evidence: 006025D0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 006021E2

   [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall st::fn_006025D0(STDestC *this,undefined4 *param_1)

{
  byte *pbVar1;
  byte *puVar3;
  byte *pbVar4;

  if (this->field_036E != 3) {
    pbVar1 = st::fn_006AAC70(0x17e);
    if (this->field_036E == 2) {
      this->field_036E = (uint)(this->field_039F < '\x01');
    }
    this->field_023D = 2;
    puVar3 = (byte *)&this->field_0x231;
    pbVar4 = pbVar1;
    memmove(pbVar4, puVar3, 0x17e); /* compiler REP MOVS byte copy */
    *param_1 = 0x17e;
    return pbVar1;
  }
  *param_1 = 0;
  return nullptr;
}

// 00602660 STDestC::sub_00602660
#line 4 "decomp/ST.exe/functions/00602660/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=1; incoming_this_accesses=14;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_00602660(STDestC *this,undefined4 *param_1)

{
  byte *puVar2;

  puVar2 = (byte *)&this->field_0x231;
  memmove(puVar2, param_1, 0x17e); /* compiler REP MOVS byte copy */
  this->field_039B = -1;
  if (this->field_0241 == 1) {
    this->field_0047 = this->field_0255;
    this->field_0049 = this->field_0257;
    this->field_004B = this->field_0259;
  }
  this->field_0041 = (short)this->field_037B;
  this->field_0043 = (short)this->field_037F;
  this->field_0045 = (short)this->field_0383;
  return 0x17e;
}

// 00602BE0 STDestC::sub_00602BE0
#line 4 "decomp/ST.exe/functions/00602BE0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=2; incoming_this_accesses=27;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00602BE0(STDestC *this)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  int local_8;

  if ((this->field_039B < 0) && (iVar2 = st::fn_004013ED(), iVar2 == 0)) {
    return;
  }
  if (this->field_036E == 2) {
    if (this->field_037A == '\x01') {
      st::fn_006E9350
                (this->field_0211,this->field_01ED,PTR_00806724->entries[this->field_0397],
                 (int)PTR_00806724->field_002C);
    }
    if ((g_playSystem_00802A38->field_00E4 & 3) == 0) {
      this->field_0397 = this->field_0397 + (int)this->field_039F;
    }
    if (this->field_039F < '\x01') {
      if (this->field_0397 < 0) {
        st::fn_006E9350(this->field_0211,this->field_01ED,0,0);
        this->field_036E = 1;
      }
    }
    else if (((int)PTR_00806724->entryCount <= this->field_0397) &&
            (this->field_036E = 0, this->field_037A == '\x01')) {
      st::fn_00403D0F((STT3DSprC *)&this->field_01D5);
      this->field_037A = 0;
    }
  }
  else if (this->field_036E != 4) {
    puVar3 = st::fn_00405D30(this);
    this->field_03AB = puVar3;
    if (puVar3 != nullptr) {
      st::fn_004021D5((STT3DSprC *)&this->field_01D5);
      this->field_039B = -1;
      this->field_036E = 4;
    }
  }
  pVVar1 = g_visibleClass_00802A88;
  if ((g_visibleClass_00802A88 != nullptr) && (-1 < this->field_039B)) {
    iVar2 = (int)this->field_0259;
    if (((DAT_0080874d != -1) &&
        ((((g_visibleClass_00802A88->field_00F8 != 0 &&
           (st::fn_00403F53
                      (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                       (int)this->field_0255,(int)this->field_0257,&local_8,&local_c), -1 < iVar2))
          && (iVar2 < 5)) && ((-1 < local_8 && (local_8 < pVVar1->field_0030)))))) &&
       ((local_c = g_centeredOffsets5[iVar2] + local_c, -1 < local_c &&
        (((local_c < pVVar1->field_0034 && (pVVar1->field_004C != nullptr)) &&
         (pVVar1->field_004C[local_8 + local_c * pVVar1->field_0030] == 0)))))) {
      if (this->field_037A == '\0') {
        return;
      }
      st::fn_00403D0F((STT3DSprC *)&this->field_01D5);
      this->field_037A = 0;
      return;
    }
    this->vfunc_D8();
    if (this->field_037A == '\0') {
      st::fn_00402982(&this->field_01D5,0);
      this->field_037A = 1;
      return;
    }
  }
  return;
}

// 00602E90 STDestC::sub_00602E90
#line 4 "decomp/ST.exe/functions/00602E90/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00602E90.
   Evidence: incoming_receiver_captures=1; receiver_accesses=13; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[0];
   expected_stack=0; receiver_family_members=1

   [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=1; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 * __thiscall st::fn_00602E90(STDestC *this)

{
  STDestC *pSVar1;
  int iVar2;
  char *text;
  ushort *puVar3;
  InternalExceptionFrame local_50;
  STDestC *local_c;
  ushort *local_8;

  local_8 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pSVar1 = local_c;
  if (iVar2 == 0) {
    if (local_c->field_0241 == 1) {
      text = (&PTR_s_Dest4_0_007cec00)[local_c->field_0372];
    }
    else {
      text = (&PTR_s_Dest1_0_007cebec)[local_c->field_0372];
    }
    puVar3 = st::fn_00709AF0
                       (PTR_00806774,CASE_1D,text,0xffffffff,0,1,0,nullptr);
    if (puVar3 != nullptr) {
      if (pSVar1->field_0241 == 0) {
        local_8 = st::fn_006E9000
                            (pSVar1->field_0211,*STField<undefined4 *>(puVar3,0x21),0x5a,0x45,
                             (float)pSVar1->field_037B * _DAT_007904f8 * _DAT_007904f0,
                             (float)pSVar1->field_037F * _DAT_007904f8 * _DAT_007904f0,
                             (float)pSVar1->field_0383 * _DAT_007904f8 * _DAT_007904f0 +
                             _DAT_007904fc,0);
      }
      if (pSVar1->field_0241 == 1) {
        local_8 = st::fn_006E9000
                            (pSVar1->field_0211,*STField<undefined4 *>(puVar3,0x21),0x78,0x56,
                             (float)pSVar1->field_037B * _DAT_007904f8 * _DAT_007904f0,
                             (float)pSVar1->field_037F * _DAT_007904f8 * _DAT_007904f0,
                             (float)pSVar1->field_0383 * _DAT_007904f8 * _DAT_007904f0 +
                             _DAT_007904fc,0);
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return (undefined4 *)local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  return (undefined4 *)local_8;
}

// 00603120 STDestC::sub_00603120
#line 4 "decomp/ST.exe/functions/00603120/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_00603120(STDestC *this)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;

  sVar1 = this->field_0259;
  sVar3 = this->field_0255;
  sVar4 = this->field_0257;
  if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar4 < 0)) ||
      (((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)) ||
       ((g_worldGrid.sizeZ <= sVar1 ||
        ((STGridAt3D(g_worldGrid, sVar3, sVar4, sVar1).objects[0] == nullptr ||
         (STGridAt3D(g_worldGrid, sVar3, sVar4, sVar1).objects[0]->value_20 != 1000)))))))) &&
     ((this->field_0245 != 0 ||
      ((((((((short)(sVar3 + 1) < 0 || (g_worldGrid.sizeX <= (short)(sVar3 + 1))) || (sVar4 < 0)) ||
          ((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) ||
        ((STGridAt3D(g_worldGrid, sVar3 + 1, sVar4, sVar1).objects[0] == nullptr ||
         (STGridAt3D(g_worldGrid, sVar3 + 1, sVar4, sVar1).objects[0]->value_20 != 1000)))) &&
       (((((sVar4 = sVar4 + 1, sVar3 < 0 ||
           (((g_worldGrid.sizeX <= sVar3 || (sVar4 < 0)) || (g_worldGrid.sizeY <= sVar4)))) ||
          (((sVar1 < 0 || (g_worldGrid.sizeZ <= sVar1)) ||
           (STGridAt3D(g_worldGrid, sVar3, sVar4, sVar1).objects[0] == nullptr)))) ||
         (STGridAt3D(g_worldGrid, sVar3, sVar4, sVar1).objects[0]->value_20 != 1000)) &&
        ((((sVar3 = sVar3 + 1, sVar3 < 0 || (g_worldGrid.sizeX <= sVar3)) ||
          ((sVar4 < 0 ||
           (((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))))) ||
         ((STGridAt3D(g_worldGrid, sVar3, sVar4, sVar1).objects[0] == nullptr ||
          (STGridAt3D(g_worldGrid, sVar3, sVar4, sVar1).objects[0]->value_20 != 1000)))))))))))) {
    if (this->field_03A6 != '\0') {
      this->field_03A6 = 0;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (this->field_03A6 == '\0') {
      this->field_03A6 = 1;
      return uVar2;
    }
  }
  return uVar2;
}

