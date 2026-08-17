#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/StartSystemTy.cpp

// 005DA610 StartSystemTy::StartSystemTy
#line 4 "decomp/ST.exe/functions/005DA610/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C1E8 (store 005DA668)
   Evidence: final_vptr=0079C1E8; returns_this=true; calls_before=7; field_writes_after=31;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005DA610 returns StartSystemTy::StartSystemTy this @ 005DA74D */

StartSystemTy * __thiscall st::fn_005DA610(StartSystemTy *this,undefined4 param_1)

{
  int iVar1;

  st::fn_006E51C0((SystemClassTy *)this,st::pointer_boundary_cast<AppClassTy *>(param_1),0x200);
  st::fn_00715820((SpriteClassTy *)&this->field_02F8);
  st::fn_00715820((SpriteClassTy *)&this->field_038D);
  st::fn_00715820((SpriteClassTy *)&this->field_041E);
  st::fn_00715820((SpriteClassTy *)&this->field_04AF);
  st::fn_00715820((SpriteClassTy *)&this->field_055C);
  st::fn_00715820((SpriteClassTy *)&this->field_05ED);
  this->vtable = &st_global_0079C1E8;
  g_startSystem_0081176C = this;
  this->field_0028 = DAT_00807332;
  this->field_02EA = 1;
  this->field_02EB = 1;
  this->field_02E6 = nullptr;
  this->field_0020 = 0;
  this->field_002C = nullptr;
  this->field_0038 = nullptr;
  this->field_0034 = nullptr;
  this->field_0030 = nullptr;
  this->field_02F4 = nullptr;
  this->field_02EC = 0xffffffff;
  this->field_02F0 = nullptr;
  this->field_0389 = 0;
  this->field_0540 = 0xffffffff;
  this->field_0544 = nullptr;
  this->field_0548 = nullptr;
  this->field_0550 = 0;
  this->field_054C = 0;
  this->field_0558 = 0xffffffff;
  this->field_0554 = 0xffffffff;
  this->field_0682 = nullptr;
  this->field_067E = nullptr;
  this->field_0686 = nullptr;
  memset(this->array_0244, 0, 0x18); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_025C, 0, 0x8a); /* compiler bulk-zero initialization */
  this->field_068A = 0;
  this->field_068E = 0;
  this->field_0692 = 0xffffffff;
  this->field_0696 = nullptr;
  this->field_069A = nullptr;
  this->field_06B2 = 0;
  this->field_06AE = 0;
  this->field_069E = 0;
  return this;
}

// 005DA910 StartSystemTy::sub_005DA910
#line 4 "decomp/ST.exe/functions/005DA910/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005DA910(StartSystemTy *this)

{
  if ((undefined4 *)this->field_068A != 0) {
    st::fn_006B6110((undefined4 *)this->field_068A);
  }
  this->field_068A = 0;
  return;
}

// 005DA940 StartSystemTy::sub_005DA940
#line 4 "decomp/ST.exe/functions/005DA940/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined1 __thiscall st::fn_005DA940(StartSystemTy *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;

  iVar3 = 4;
  piVar4 = (int *)(this->field_068A + 0xc + param_1 * 0x14);
  piVar5 = st::pointer_boundary_cast<int *>(&DAT_007cd700);
  do {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 + -1;
    iVar2 = *piVar5;
    iVar1 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar1 == iVar2);
  return 0;
}

// 005DAB30 StartSystemTy::sub_005DAB30
#line 4 "decomp/ST.exe/functions/005DAB30/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005DAB30(StartSystemTy *this)

{
  if ((undefined4 *)this->field_068E != 0) {
    st::fn_006B6110((undefined4 *)this->field_068E);
  }
  this->field_068E = 0;
  this->field_0692 = 0xffffffff;
  return;
}

// 005DAF20 StartSystemTy::sub_005DAF20
#line 4 "decomp/ST.exe/functions/005DAF20/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005DAF20(StartSystemTy *this)

{
  char cVar1;

  if (g_int_00811764 == nullptr) goto LAB_005dafab;
  st::fn_006B6500(g_int_00811764,1);
  if (DAT_0080877e == '\0') {
    if (DAT_0080c50e != 0) {
      st::fn_00715360(g_int_00811764,0,'\x13',nullptr,0,0,0xffffffff);
    }
    if (DAT_0080c50a != 0) {
      cVar1 = '\x11';
      goto LAB_005daf91;
    }
  }
  else {
    cVar1 = '\x10';
LAB_005daf91:
    st::fn_00715360(g_int_00811764,0,cVar1,nullptr,0,0,0xffffffff);
  }
  st::fn_006B6500(g_int_00811764,DAT_0080733c);
LAB_005dafab:
  /* ST_CALLSITE[005DAFAD]: CALL 0x00402b30; direct=00402B30 StartSystemTy::sub_005DAB30 */
  st::fn_00402B30(this);
  st::fn_00404B83();
  st::fn_004034F4();
  if (this->field_0696 != nullptr) {
    st::fn_006B5570(this->field_0696);
  }
  this->field_0696 = nullptr;
  return;
}

// 005DB2A0 StartSystemTy::sub_005DB2A0
#line 4 "decomp/ST.exe/functions/005DB2A0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=1; incoming_this_accesses=22;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005DB2A0(StartSystemTy *this)

{
  int iVar1;
  uint *puVar2;

  st::fn_00404304();
  if (this->field_002C != nullptr) {
    st::fn_006F20E0(g_cMf32_00806780,(uint *)&this->field_002C);
  }
  if (this->field_0030 != nullptr) {
    st::fn_00710560((uint *)this->field_0030);
    this->field_0030 = nullptr;
  }
  if (this->field_0034 != nullptr) {
    st::fn_00710560((uint *)this->field_0034);
    this->field_0034 = nullptr;
  }
  puVar2 = this->array_0244;
  iVar1 = 6;
  do {
    st::fn_0070B1D0((int *)puVar2);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  st::fn_00715AB0((SpriteClassTy *)&this->field_038D);
  st::fn_00715AB0((SpriteClassTy *)&this->field_041E);
  st::fn_00715AB0((SpriteClassTy *)&this->field_04AF);
  if (-1 < (int)this->field_02EC) {
    st::fn_006B3BB0((int *)g_ddxContext_008075A8,this->field_02EC);
    this->field_02EC = 0xffffffff;
  }
  if (this->field_02F0 != nullptr) {
    st::fn_006AB060(&this->field_02F0);
  }
  if (this->field_02F4 != nullptr) {
    st::fn_006AB060(&this->field_02F4);
  }
  st::fn_00715AB0((SpriteClassTy *)&this->field_02F8);
  if ((DArrayTy *)this->field_0548 != nullptr) {
    st::fn_006B5570((DArrayTy *)this->field_0548);
  }
  this->field_0548 = nullptr;
  if (-1 < (int)this->field_0540) {
    st::fn_006B3BB0((int *)g_ddxContext_008075A8,this->field_0540);
    this->field_0540 = 0xffffffff;
  }
  if (this->field_0544 != nullptr) {
    st::fn_006AB060(&this->field_0544);
  }
  if (this->field_067E != nullptr) {
    st::fn_006AB060(&this->field_067E);
  }
  st::fn_00715AB0((SpriteClassTy *)&this->field_055C);
  st::fn_00715AB0((SpriteClassTy *)&this->field_05ED);
  if (-1 < (int)this->field_0558) {
    st::fn_006B3BB0((int *)g_ddxContext_008075A8,this->field_0558);
    this->field_0558 = 0xffffffff;
  }
  if (this->field_0682 != nullptr) {
    st::fn_006AB060(&this->field_0682);
  }
  if (-1 < (int)this->field_0554) {
    st::fn_006B3BB0((int *)g_ddxContext_008075A8,this->field_0554);
    this->field_0554 = 0xffffffff;
  }
  if (this->field_0686 != nullptr) {
    st::fn_006B5570(this->field_0686);
  }
  this->field_0686 = nullptr;
  return;
}

// 005DCD90 StartSystemTy::CreateSystemObjects
#line 4 "decomp/ST.exe/functions/005DCD90/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079C1E8
   Entries: 00402171
   Slots: 0x14
   Anchor:
   Evidence: unique_named_method_in_slot_family; unique_owner_for_target;
   no_qualified_signature_anchor */

undefined4 __thiscall st::fn_005DCD90(StartSystemTy *this)

{
  /* ST_CALLSITE[005DCD99]: CALL dword ptr [EAX + 0x10] */
  this->vfunc_10(0x303,0);
  return 0;
}

// 005DCDB0 StartSystemTy::DoneSystem
#line 4 "decomp/ST.exe/functions/005DCDB0/decomp.c"
/* [STDestructorApplier] Recovered destructor for StartSystemTy.
   Evidence: cleanup_only_vtable_method; zeroed_this_fields=4; same_this_calls=6;
   field_cleanup_calls=1; 005DCDBE FUN_006e56b0; 005DCDD3 FUN_006e56b0; 005DCDEB FUN_006e56b0;
   005DCE03 FUN_006e56b0; 005DCE2B FUN_005db2a0; 005DCE3C FUN_005daf20; 005DCE43 FUN_005db010;
   005DCE4A FUN_005da910; 005DCE51 FUN_006e52d0 */

void __thiscall st::fn_005DCDB0(StartSystemTy *this)

{
  if (this->field_0020 != 0) {
    st::fn_006E56B0(this,this->field_0020);
  }
  this->field_0020 = 0;
  if (this->field_0389 != 0) {
    st::fn_006E56B0(this,this->field_0389);
  }
  this->field_0389 = 0;
  if (this->field_054C != 0) {
    st::fn_006E56B0(this,this->field_054C);
  }
  this->field_054C = 0;
  if (this->field_0550 != 0) {
    st::fn_006E56B0(this,this->field_0550);
  }
  this->field_0550 = 0;
  if (this->field_069A != nullptr) {
    st::fn_006AB060(&this->field_069A);
  }
  /* ST_CALLSITE[005DCE24]: CALL 0x004039ea; direct=004039EA DelAllAccelerators */
  st::fn_004039EA();
  /* ST_CALLSITE[005DCE2B]: CALL 0x00402f86; direct=00402F86 StartSystemTy::sub_005DB2A0 */
  st::fn_00402F86(this);
  DAT_0080c50a = 1;
  /* ST_CALLSITE[005DCE3C]: CALL 0x0040590c; direct=0040590C StartSystemTy::sub_005DAF20 */
  st::fn_0040590C(this);
  st::fn_0040550B();
  /* ST_CALLSITE[005DCE4A]: CALL 0x004055f6; direct=004055F6 StartSystemTy::sub_005DA910 */
  st::fn_004055F6(this);
  st::fn_006E52D0((AnonShape_006E52D0_AF06BCD2 *)this);
  return;
}

// 006E5360 StartSystemTy::sub_006E5360
#line 4 "decomp/ST.exe/functions/006E5360/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3

   [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /undefined4; every later accumulator definition is an exact full-width integer transform of that
   value; machine CFG audit: used=3, ignored=0, unknown=0 */

undefined4 __thiscall
st::fn_006E5360(StartSystemTy *this,int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;

  uVar1 = st::fn_006E3450(this->field_0010,param_1,param_2,param_3);
  return uVar1;
}

// 006E56B0 StartSystemTy::sub_006E56B0
#line 4 "decomp/ST.exe/functions/006E56B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=4; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5 */

void __thiscall st::fn_006E56B0(StartSystemTy *this,uint param_1)

{
  AnonPointee_StartSystemTy_000C *pAVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 *local_8;

  uVar2 = param_1;
  local_8 = nullptr;
  iVar3 = st::fn_006E5360(this,param_1,(int *)&param_1,(undefined4 *)&local_8);
  if (iVar3 == 0) {
    local_18 = 3;
    /* ST_CALLSITE[006E56E8]: CALL dword ptr [EDX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)*local_8)(local_28);
  }
  iVar3 = st::fn_006E5360(this,uVar2,(int *)&param_1,(undefined4 *)&local_8);
  if (iVar3 == 0) {
    st::fn_006B0C70(this->field_0010,param_1);
    st::fn_006E3970(this->field_0018,uVar2);
    for (pAVar1 = this->field_000C; pAVar1 != nullptr;
        pAVar1 = (AnonPointee_StartSystemTy_000C *)pAVar1->field_0000) {
      uVar2 = pAVar1->field_0004;
      if ((param_1 <= uVar2) && (uVar2 != 0)) {
        pAVar1->field_0004 = uVar2 - 1;
      }
    }
  }
  return;
}

