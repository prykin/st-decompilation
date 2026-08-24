#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STGroupBoatC.cpp

// 004232A0 STGroupBoatC::sub_004232A0
#line 4 "decomp/ST.exe/functions/004232A0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STGroupBoatC.
   Evidence: this_call_owners=[STGroupBoatC]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790508 (store 004232AA)
   Evidence: final_vptr=00790508; returns_this=true; calls_before=1; field_writes_after=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeRepairApplier] Propagated return.
   Evidence: 004232A0 returns STGroupBoatC::sub_004232A0 this @ 004232C9

   [STSwitchEnumApplier] Switch target field_0020 uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_field_0020State. Cases:
   CASE_0=0;CASE_14=20;CASE_1AE=430 */

STGroupC * __thiscall st::fn_004232A0(STGroupBoatC *this)

{
  st::fn_006E60E0(this);
  this->vtable = (STGroupBoatCVTable *)&st_global_00790508;
  this->field_001C = 0;
  this->field_0020 = CASE_0;
  this->field_0029 = 0;
  this->field_002D = nullptr;
  this->field_0027 = 0;
  this->field_0035 = 0;
  this->field_0039 = 0;
  return (STGroupC *)this;
}

// 00497AF0 STGroupBoatC::STGroupBoatC
#line 4 "decomp/ST.exe/functions/00497AF0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790728 (store 00497B05)
   Evidence: final_vptr=00790728; returns_this=true; calls_before=1; field_writes_after=47;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00497AF0 returns STGroupBoatC::STGroupBoatC this @ 00497C6C

   [STSwitchEnumApplier] Switch target field_01E6 uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_field_01E6State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21
    */

STGroupBoatC * __thiscall st::fn_00497AF0(STGroupBoatC *this)

{
  int iVar1;
  DArrayTy **ppDVar2;
  short *psVar4;

  /* ST_CALLSITE[00497AF4]: CALL 0x004053b7; direct=004053B7 STGroupBoatC::sub_004232A0 */
  st::fn_004053B7(this);
  this->vtable = &st_global_00790728;
  this->field_0045 = 0;
  this->field_0041 = 0;
  this->field_003D = 0;
  this->field_0055 = 0;
  this->field_0051 = 0;
  this->field_004D = 0;
  this->field_0049 = 0;
  this->field_0059 = nullptr;
  memset(&this->field_005D, 0, 0x185); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_0x1e2, 0, 0x28); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_020A, 0, 0x18); /* compiler bulk-zero initialization */
  iVar1 = 0;
  ppDVar2 = &this->field_0226;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppDVar2 = nullptr;
    ppDVar2 = ppDVar2 + 1;
  }
  this->field_0232 = -1;
  this->field_0236 = 1;
  memset(&this->field_024A, 0, 0x2c); /* compiler bulk-zero initialization */
  iVar1 = 0;
  psVar4 = &this->field_0276;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar4 = 0;
    psVar4 = psVar4 + 2;
  }
  *psVar4 = 0;
  ((undefined1 *)psVar4)[1] = 0;
  this->field_0295 = 0;
  this->field_0297 = 0;
  this->field_0299 = 0;
  this->field_029B = 0;
  this->field_029F = 0;
  this->field_02A3 = 0;
  this->field_02A5 = 0;
  *(undefined4 *)&this->field_0x2a7 = 0;
  this->field_02AB = 0;
  this->field_02B3 = 0;
  this->field_02B5 = 0;
  *(undefined4 *)&this->field_0x2b7 = 0;
  this->field_02BB = 0;
  this->field_02BD = 0;
  this->field_02BF = 0;
  this->field_02C1 = 0;
  *(undefined4 *)&this->field_0x2c3 = 0;
  *(undefined4 *)&this->field_0x2c7 = 0;
  this->field_02CB = 0;
  this->field_02CD = 0;
  this->field_02CE = 0;
  this->field_02D2 = 0;
  this->field_02D4 = 0;
  this->field_02D6 = 0;
  this->field_02D8 = 0;
  this->field_02DC = 0;
  this->field_02DE = 0;
  this->field_02E0 = 0;
  this->field_02E2 = 0;
  this->field_02E4 = 0;
  this->field_02E6 = 0;
  this->field_02E8 = 0;
  this->field_02EA = 0;
  this->field_02EC = 0;
  this->field_02EE = 0;
  this->field_02F0 = 0;
  *(undefined4 *)&this->field_0x2f2 = 0;
  this->field_02F6 = 0;
  this->field_02F8 = 0;
  this->field_02FA = 0;
  this->field_02FC = 0;
  this->field_02FE = 0;
  this->field_0300 = 0;
  this->field_0302 = 0;
  this->field_0304 = 0;
  this->field_0306 = 0;
  *(undefined4 *)&this->field_0x308 = 0;
  this->field_030C = 0;
  *(undefined4 *)&this->field_0x30e = 0;
  this->field_01E6 = CASE_3;
  this->field_0039 = 0;
  return this;
}

// 004996F0 STGroupBoatC::FUN_004996f0
#line 4 "decomp/ST.exe/functions/004996F0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790728
   Entries: 00404DBD
   Slots: 0x1C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_004996F0(STGroupBoatC *this)

{
  return this->field_004D;
}

// 00499710 STGroupBoatC::FUN_00499710
#line 4 "decomp/ST.exe/functions/00499710/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790728
   Entries: 00402FA9
   Slots: 0x20
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_00499710(STGroupBoatC *this)

{
  return this->field_0051;
}

// 00499730 STGroupBoatC::FUN_00499730
#line 4 "decomp/ST.exe/functions/00499730/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790728
   Entries: 00404674
   Slots: 0x24
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_00499730(STGroupBoatC *this)

{
  return this->field_0055;
}

// 0049A500 STGroupBoatC::sub_0049A500
#line 4 "decomp/ST.exe/functions/0049A500/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STGroupBoatC.
   Evidence: this_call_owners=[STGroupBoatC]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=2; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_0049A500
          (STGroupBoatC *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  uint uVar1;
  STGameObjC *this_00;
  uint index;
  short sVar2;
  short sVar4;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  uint local_c;
  int local_8;
  int iVar3;
  int iVar5;

  index = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  if (this->field_0027 != 0) {
    iVar3 = 0;
    sVar2 = 0;
    iVar5 = 0;
    sVar4 = 0;
    local_8 = 0;
    local_c = 0;
    if (uVar1 != 0) {
      do {
        st::fn_006ACC70((DArrayTy *)this->field_0029,index,local_10);
        if (STPiece<0,2>(local_10) != 0xffff) {
          /* ST_CALLSITE[0049A550]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          this_00 = st::fn_004028BA
                              (g_allPlayers_007FA174,this->field_0024,STPiece<0,2>(local_10),CASE_1);
          /* ST_CALLSITE[0049A563]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          st::fn_004018C5
                    ((STFishC *)this_00,(short *)&local_14,(short *)&local_18,(short *)&local_1c);
          iVar5 = iVar5 + local_14;
          iVar3 = iVar3 + local_18;
          local_8 = local_8 + local_1c;
        }
        sVar4 = (short)iVar5;
        sVar2 = (short)iVar3;
        local_c = local_c + 1;
        index = local_c & 0xffff;
      } while (index < uVar1);
    }
    if (param_1 != nullptr) {
      *param_1 = (short)((int)sVar4 / (int)(uint)(ushort)this->field_0027);
    }
    if (param_2 != nullptr) {
      *param_2 = (short)((int)sVar2 / (int)(uint)(ushort)this->field_0027);
    }
    if (param_3 != nullptr) {
      *param_3 = (short)((int)(short)local_8 / (int)(uint)(ushort)this->field_0027);
    }
  }
  return;
}

// 004A0EC0 STGroupBoatC::FUN_004a0ec0
#line 4 "decomp/ST.exe/functions/004A0EC0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790728
   Entries: 00404453
   Slots: 0xC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_004A0EC0(STGroupBoatC *this)

{
  return this->field_01E6;
}

// 004A7E30 STGroupBoatC::sub_004A7E30
#line 4 "decomp/ST.exe/functions/004A7E30/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STGroupBoatC.
   Evidence: this_call_owners=[STGroupBoatC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1 */

undefined4 __thiscall st::fn_004A7E30(STGroupBoatC *this,int param_1)

{
  dword dVar1;
  DArrayTy *array;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_14 [6];
  int local_e;
  int local_a;

  if (this->field_023E < (int)this->field_023A) {
    if (param_1 != 1) {
      return 1;
    }
    iVar5 = 0;
    dVar1 = this->field_022E->count;
    piVar3 = static_cast<int *>(this->field_022E->data);
    if (0 < (int)dVar1) {
      do {
        if (((short)piVar3[1] != -1) && (*piVar3 == 0)) {
          return 1;
        }
        iVar5 = iVar5 + 1;
        piVar3 = (int *)((int)piVar3 + 0x16);
      } while (iVar5 < (int)dVar1);
    }
  }
  if (this->field_0236 == 1) {
    array = this->field_022A;
    iVar5 = this->field_0232;
    if (iVar5 == array->count - 1) {
      if (this->field_0246 != 0) {
        return 2;
      }
      if (iVar5 < 1) {
        return 1;
      }
      this->field_0236 = 0;
      this->field_023E = 0;
      this->field_0232 = iVar5 - 1U;
      st::fn_006ACC70(array,iVar5 - 1U,local_14);
      bVar2 = st::fn_004025AE(CASE_8);
      uVar4 = (uint)bVar2;
      local_e = local_e * 0xc9;
    }
    else {
      this->field_023E = 0;
      this->field_0232 = iVar5 + 1U;
      st::fn_006ACC70(array,iVar5 + 1U,local_14);
      bVar2 = st::fn_004025AE(CASE_8);
      uVar4 = (uint)bVar2;
      local_e = local_a * 0xc9;
    }
  }
  else {
    if (this->field_0232 == 0) {
      this->field_0232 = 1;
      this->field_0236 = 1;
      this->field_023E = 0;
      st::fn_006ACC70(this->field_022A,1,local_14);
      bVar2 = st::fn_004025AE(CASE_8);
    }
    else {
      uVar4 = st::machine_word_boundary_cast<uint>(this->field_0232 - 1);
      this->field_0232 = uVar4;
      this->field_023E = 0;
      st::fn_006ACC70(this->field_022A,uVar4,local_14);
      bVar2 = st::fn_004025AE(CASE_8);
      local_a = local_e;
    }
    uVar4 = (uint)bVar2;
    local_e = local_a * 0xc9;
  }
  this->field_023A = (local_e / (int)uVar4) / 3;
  /* ST_CALLSITE[004A7FFA]: CALL 0x00404b1a; direct=00404B1A STGroupBoatC::SetPatrolCmdToBoat */
  st::fn_00404B1A(this);
  return 0;
}

