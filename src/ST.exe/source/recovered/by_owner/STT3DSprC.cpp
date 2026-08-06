#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STT3DSprC.cpp

// 004ACD30 STT3DSprC::sub_004ACD30
#line 1 "decomp/ST.exe/functions/004ACD30/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=3; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004ACD30(STT3DSprC *this,char param_1)

{
  undefined4 *puVar1;

  puVar1 = *(undefined4 **)(&this->field_0020->field_0x0 + param_1 * 0x24);
  if (puVar1 == nullptr) {
    return 0;
  }
  return *puVar1;
}

// 004ACE30 STT3DSprC::sub_004ACE30
#line 1 "decomp/ST.exe/functions/004ACE30/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00480600 -> 004ACE30 @ 00480CA0;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 00480C94 establishes signed source width 2 | 004ACE30 -> 006E9350 @ 004ACE42 | 004B8C80 ->
   004ACE30 @ 004B9478; MOVSX at 004B9468 establishes signed source width 2 | 004B9FA0 -> 004ACE30 @
   004BA80A; /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c
   (entries); MOVSX at 004BA7FE establishes signed source width 2 | 004C9770 -> 004ACE30 @ 004C9D72;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 004C9D66 establishes signed source width 2 | 0057E0A0 -> 004ACE30 @ 0057EA79; MOVSX at
   0057EA64 establishes signed source width 2 | 0057E0A0 -> 004ACE30 @ 0057EAB2;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 0057EA9F establishes signed source width 2 | 0057E0A0 -> 004ACE30 @ 0057EAFB;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 0057EAF4 establishes signed source width 2 | 0057E0A0 -> 004ACE30 @ 0057EB32;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 0057EB28 establishes signed source width 2 | 00585020 -> 004ACE30 @ 0058533D;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 00585331 establishes signed source width 2 | 00585020 -> 004ACE30 @ 0058558E;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 00585582 establishes signed source width 2 | 0058BD90 -> 004ACE30 @ 0058C0E5; MOVSX at
   0058C0D5 establishes signed source width 2 | 0058BD90 -> 004ACE30 @ 0058C1EC;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 0058C1DC establishes signed source width 2 | 0058BD90 -> 004ACE30 @ 0058C296;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 0058C28A establishes signed source width 2 | 0058E570 -> 004ACE30 @ 0058E60D;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 0058E601 establishes signed source width 2 | 005F0BA0 -> 004ACE30 @ 005F0C4B;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005F0C42 establishes signed source width 2 | 005F6F60 -> 004ACE30 @ 005F70D1;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005F70C5 establishes signed source width 2 | 005F6F60 -> 004ACE30 @ 005F728A;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005F727E establishes signed source width 2 | 005F6F60 -> 004ACE30 @ 005F7335;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005F7329 establishes signed source width 2 | 005F6F60 -> 004ACE30 @ 005F7419;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005F740D establishes signed source width 2 | 005FA180 -> 004ACE30 @ 005FA1CB;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005FA1BF establishes signed source width 2 | 005FA180 -> 004ACE30 @ 005FA22D;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005FA224 establishes signed source width 2 | 005FA180 -> 004ACE30 @ 005FA24F;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005FA243 establishes signed source width 2 | 0062F150 -> 004ACE30 @ 0062F261;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 0062F250 establishes signed source width 2 */

void __thiscall st::fn_004ACE30(STT3DSprC *this,uint param_1,int entries)

{
  st::fn_006E9350(this->field_003C,this->field_0018,param_1,entries);
  return;
}

// 004ACE60 STT3DSprC::sub_004ACE60
#line 1 "decomp/ST.exe/functions/004ACE60/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_004ACE60(STT3DSprC *this,char param_1)

{
  ushort *puVar1;
  AnonPointee_STT3DSprC_0020 *pAVar2;
  int iVar3;

  iVar3 = (int)param_1;
  st::fn_006E9490(this->field_003C,(uint *)this->field_0018,iVar3,1);
  pAVar2 = this->field_0020;
  puVar1 = (ushort *)(&pAVar2->field_0xe + iVar3 * 0x24);
  *puVar1 = *puVar1 & 0xffdf;
  return (int)(&pAVar2->field_0xe + iVar3 * 0x24);
}

// 004ACEF0 STT3DSprC::sub_004ACEF0
#line 1 "decomp/ST.exe/functions/004ACEF0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004ACEF0(STT3DSprC *this,uint param_1)

{
  st::fn_006EA680(this->field_003C,this->field_0018,param_1);
  return;
}

// 004ACF20 STT3DSprC::sub_004ACF20
#line 1 "decomp/ST.exe/functions/004ACF20/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=13, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004ACF20(STT3DSprC *this,int param_1,int param_2)

{
  st::fn_006EA790(this->field_003C,this->field_0018,param_1,param_2);
  return;
}

// 004ACF50 STT3DSprC::sub_004ACF50
#line 1 "decomp/ST.exe/functions/004ACF50/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_004ACF50(STT3DSprC *this,char param_1)

{
  byte *pbVar1;
  AnonPointee_STT3DSprC_0020 *pAVar2;
  int iVar3;

  iVar3 = (int)param_1;
  st::fn_006EA6D0(this->field_003C,this->field_0018,iVar3,1);
  pAVar2 = this->field_0020;
  pbVar1 = &pAVar2->field_0xe + iVar3 * 0x24;
  *pbVar1 = *pbVar1 | 0x40;
  return (int)(&pAVar2->field_0xe + iVar3 * 0x24);
}

// 004ACF90 STT3DSprC::sub_004ACF90
#line 1 "decomp/ST.exe/functions/004ACF90/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_004ACF90(STT3DSprC *this,char param_1)

{
  ushort *puVar1;
  AnonPointee_STT3DSprC_0020 *pAVar2;
  int iVar3;

  iVar3 = (int)param_1;
  st::fn_006EA6D0(this->field_003C,this->field_0018,iVar3,0);
  pAVar2 = this->field_0020;
  puVar1 = (ushort *)(&pAVar2->field_0xe + iVar3 * 0x24);
  *puVar1 = *puVar1 & 0xffbf;
  return (int)(&pAVar2->field_0xe + iVar3 * 0x24);
}

// 004ACFE0 STT3DSprC::sub_004ACFE0
#line 1 "decomp/ST.exe/functions/004ACFE0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_004ACFE0(STT3DSprC *this,char param_1)

{
  byte *pbVar1;
  AnonPointee_STT3DSprC_0020 *pAVar2;
  int iVar3;

  iVar3 = (int)param_1;
  st::fn_006EA800(this->field_003C,this->field_0018,iVar3,1);
  pAVar2 = this->field_0020;
  pbVar1 = &pAVar2->field_0xe + iVar3 * 0x24;
  *pbVar1 = *pbVar1 | 0x80;
  return (int)(&pAVar2->field_0xe + iVar3 * 0x24);
}

// 004AD020 STT3DSprC::sub_004AD020
#line 1 "decomp/ST.exe/functions/004AD020/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_004AD020(STT3DSprC *this,char param_1)

{
  ushort *puVar1;
  AnonPointee_STT3DSprC_0020 *pAVar2;
  int iVar3;

  iVar3 = (int)param_1;
  st::fn_006EA800(this->field_003C,this->field_0018,iVar3,0);
  pAVar2 = this->field_0020;
  puVar1 = (ushort *)(&pAVar2->field_0xe + iVar3 * 0x24);
  *puVar1 = *puVar1 & 0xff7f;
  return (int)(&pAVar2->field_0xe + iVar3 * 0x24);
}

// 004AD070 STT3DSprC::sub_004AD070
#line 1 "decomp/ST.exe/functions/004AD070/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_004AD070(STT3DSprC *this,byte param_1)

{
  byte *pbVar1;

  if (((-1 < (char)param_1) && ((char)param_1 < ' ')) &&
     ((1 << (param_1 & 0x1f) & this->field_001C) != 0)) {
    pbVar1 = &this->field_0020->field_0xe + (char)param_1 * 0x24;
    *pbVar1 = *pbVar1 | 8;
    st::fn_006E9E60(this->field_003C,(uint *)this->field_0018,(int)(char)param_1);
  }
  return;
}

// 004AD3C0 STT3DSprC::sub_004AD3C0
#line 1 "decomp/ST.exe/functions/004AD3C0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_004AD3C0(STT3DSprC *this,float param_1,float param_2,float param_3)

{
  this->field_0024 = param_1;
  this->field_0028 = param_2;
  this->field_002C = param_3;
  st::fn_006EA960(this->field_003C,this->field_0018,param_1,param_2,param_3);
  return;
}

