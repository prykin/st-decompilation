#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/FSGSTy.cpp

// 0059B820 FSGSTy::sub_0059B820
#line 4 "decomp/ST.exe/functions/0059B820/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as FSGSTy.
   Evidence: this_call_owners=[FSGSTy]; agreed_this_calls=1; incoming_this_accesses=78;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10 */

void __thiscall st::fn_0059B820(FSGSTy *this)

{
  byte uVar1;
  byte bVar2;
  byte *pbVar3;
  LPCSTR pCVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;

  uVar1 = this->array_00BC[0xc].field_01DF;
  this->array_00BC[0xc].field_01EB = 1;
  this->field_0029 = 2;
  switch(uVar1) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 7:
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 0x89;
    if (this->field_1AC4 != 0) {
      st::fn_006E6080(this,2,this->field_1AC4,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AD8 != 0) {
      st::fn_006E6080(this,2,this->field_1AD8,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1ADC != 0) {
      st::fn_006E6080(this,2,this->field_1ADC,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AE0 != 0) {
      st::fn_006E6080(this,2,this->field_1AE0,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 0x29;
    if (this->field_1AC8 != 0) {
      st::fn_006E6080(this,2,this->field_1AC8,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1ACC != 0) {
      st::fn_006E6080(this,2,this->field_1ACC,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AD4 != 0) {
      st::fn_006E6080(this,2,this->field_1AD4,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 200;
    if (this->field_1AE4 != (LPCSTR)0x0) {
      st::fn_006E6080(this,2,st::machine_word_boundary_cast<undefined4>(this->field_1AE4),(undefined4 *)&this->field_0x1d);
    }
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 1;
    if (this->field_1B14 != 0) {
      st::fn_006E6080(this,2,this->field_1B14,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 1;
    if (this->field_1AD0 != 0) {
      st::fn_006E6080(this,2,this->field_1AD0,(undefined4 *)&this->field_0x1d);
    }
    pCVar4 = (LPCSTR)this->field_1EB6;
    break;
  case 6:
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 9;
    if (this->field_1B10 != 0) {
      st::fn_006E6080(this,2,this->field_1B10,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 0x89;
    if (this->field_1AC4 != 0) {
      st::fn_006E6080(this,2,this->field_1AC4,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AC8 != 0) {
      st::fn_006E6080(this,2,this->field_1AC8,(undefined4 *)&this->field_0x1d);
    }
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 1;
    if (this->field_1B14 != 0) {
      st::fn_006E6080(this,2,this->field_1B14,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 1;
    if ((this->field_1B18 != 0) && (this->array_00BC[0xc].field_01E0 == '\0')) {
      st::fn_006E6080(this,2,this->field_1B18,(undefined4 *)&this->field_0x1d);
    }
    if ((this->field_1B24 != 0) && (this->array_00BC[0xc].field_01E0 != '\0')) {
      st::fn_006E6080(this,2,this->field_1B24,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1B1C != 0) {
      st::fn_006E6080(this,2,this->field_1B1C,(undefined4 *)&this->field_0x1d);
    }
    pCVar4 = (LPCSTR)this->field_1B20;
    *(undefined4 *)&this->field_0x31 = 1;
    goto joined_r0x0059bcb0;
  case 8:
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 0x99;
    if (this->field_1AC4 != 0) {
      st::fn_006E6080(this,2,this->field_1AC4,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 0x89;
    if (this->field_1AC8 != 0) {
      st::fn_006E6080(this,2,this->field_1AC8,(undefined4 *)&this->field_0x1d);
    }
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 1;
    if (this->field_1EB6 != 0) {
      st::fn_006E6080(this,2,this->field_1EB6,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1B24 != 0) {
      st::fn_006E6080(this,2,this->field_1B24,(undefined4 *)&this->field_0x1d);
    }
    *(uint *)&this->field_0x31 = (uint)(this->field_1EC2 == 0x100);
    if (this->field_1EBA != 0) {
      st::fn_006E6080(this,2,this->field_1EBA,(undefined4 *)&this->field_0x1d);
    }
    pCVar4 = (LPCSTR)this->field_1B20;
    *(undefined4 *)&this->field_0x31 = 1;
    break;
  case 9:
    *(uint *)&this->field_0x31 = (uint)(this->field_1EDF != 0);
    this->field_002D = 0x20;
    if (this->field_1ED3 != 0) {
      st::fn_006E6080(this,2,this->field_1ED3,(undefined4 *)&this->field_0x1d);
    }
    *(uint *)&this->field_0x31 = (uint)(this->field_1EDF < 0xf4230);
    if (this->field_1ED7 != 0) {
      st::fn_006E6080(this,2,this->field_1ED7,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 1;
    if (this->field_1EB6 != 0) {
      st::fn_006E6080(this,2,this->field_1EB6,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1EBA != 0) {
      st::fn_006E6080(this,2,this->field_1EBA,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1B24 != 0) {
      st::fn_006E6080(this,2,this->field_1B24,(undefined4 *)&this->field_0x1d);
    }
    pCVar4 = (LPCSTR)this->field_1AC4;
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 0x89;
joined_r0x0059bcb0:
    if (pCVar4 == (LPCSTR)0x0) goto switchD_0059b84b_default;
    goto LAB_0059bcb6;
  case 10:
    pbVar3 = this->field_1B0C;
    pcVar5 = &CHAR_00h_00807e1d;
    do {
      bVar2 = *pbVar3;
      bVar7 = bVar2 < (byte)*pcVar5;
      if (bVar2 != *pcVar5) {
LAB_0059bb67:
        iVar6 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0059bb6c;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar7 = bVar2 < (byte)pcVar5[1];
      if (bVar2 != pcVar5[1]) goto LAB_0059bb67;
      pbVar3 = pbVar3 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_0059bb6c:
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 0x89;
    if (iVar6 != 0) {
      *(undefined4 *)&this->field_0x31 = 0x99;
    }
    if (this->field_1AD8 != 0) {
      st::fn_006E6080(this,2,this->field_1AD8,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1ADC != 0) {
      st::fn_006E6080(this,2,this->field_1ADC,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AE0 != 0) {
      st::fn_006E6080(this,2,this->field_1AE0,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 200;
    if (iVar6 != 0) {
      *(undefined4 *)&this->field_0x31 = 0xcc;
    }
    pCVar4 = this->field_1AE4;
    break;
  default:
    goto switchD_0059b84b_default;
  }
  if (pCVar4 != (LPCSTR)0x0) {
LAB_0059bcb6:
    st::fn_006E6080(this,2,st::machine_word_boundary_cast<undefined4>(pCVar4),(undefined4 *)&this->field_0x1d);
  }
switchD_0059b84b_default:
  this->field_002D = 0x61;
  this->field_0035 = 0;
  this->field_0037 = 0;
  st::fn_006E6080(this,0xf,0,(undefined4 *)&this->field_0x1d);
  return;
}

// 0059BE50 FSGSTy::sub_0059BE50
#line 4 "decomp/ST.exe/functions/0059BE50/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as FSGSTy.
   Evidence: this_call_owners=[FSGSTy]; agreed_this_calls=1; incoming_this_accesses=55;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10 */

void __thiscall st::fn_0059BE50(FSGSTy *this)

{
  byte uVar1;
  int iVar2;

  uVar1 = this->array_00BC[0xc].field_01DF;
  this->array_00BC[0xc].field_01EB = 0;
  this->field_0029 = 2;
  switch(uVar1) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 7:
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 0;
    if (this->field_1AC4 != 0) {
      st::fn_006E6080(this,2,this->field_1AC4,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AC8 != 0) {
      st::fn_006E6080(this,2,this->field_1AC8,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1ACC != 0) {
      st::fn_006E6080(this,2,this->field_1ACC,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AD4 != 0) {
      st::fn_006E6080(this,2,this->field_1AD4,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AD8 != 0) {
      st::fn_006E6080(this,2,this->field_1AD8,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1ADC != 0) {
      st::fn_006E6080(this,2,this->field_1ADC,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AE0 != 0) {
      st::fn_006E6080(this,2,this->field_1AE0,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AE4 != (LPCSTR)0x0) {
      st::fn_006E6080(this,2,st::machine_word_boundary_cast<undefined4>(this->field_1AE4),(undefined4 *)&this->field_0x1d);
    }
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 0x99;
    if (this->field_1AC4 != 0) {
      st::fn_006E6080(this,2,this->field_1AC4,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AD8 != 0) {
      st::fn_006E6080(this,2,this->field_1AD8,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1ADC != 0) {
      st::fn_006E6080(this,2,this->field_1ADC,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AE0 != 0) {
      st::fn_006E6080(this,2,this->field_1AE0,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 0x39;
    if (this->field_1AC8 != 0) {
      st::fn_006E6080(this,2,this->field_1AC8,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1ACC != 0) {
      st::fn_006E6080(this,2,this->field_1ACC,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AD4 != 0) {
      st::fn_006E6080(this,2,this->field_1AD4,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 0xd8;
    if (this->field_1AE4 != (LPCSTR)0x0) {
      st::fn_006E6080(this,2,st::machine_word_boundary_cast<undefined4>(this->field_1AE4),(undefined4 *)&this->field_0x1d);
    }
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 0;
    if (this->field_1B14 != 0) {
      st::fn_006E6080(this,2,this->field_1B14,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 0;
    if (this->field_1AD0 != 0) {
      st::fn_006E6080(this,2,this->field_1AD0,(undefined4 *)&this->field_0x1d);
    }
    iVar2 = this->field_1EB6;
    goto LAB_0059c1ca;
  case 6:
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 0x19;
    if (this->field_1B10 != 0) {
      st::fn_006E6080(this,2,this->field_1B10,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 0x99;
    if (this->field_1AC4 != 0) {
      st::fn_006E6080(this,2,this->field_1AC4,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AC8 != 0) {
      st::fn_006E6080(this,2,this->field_1AC8,(undefined4 *)&this->field_0x1d);
    }
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 0;
    if (this->field_1B14 != 0) {
      st::fn_006E6080(this,2,this->field_1B14,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 0;
    if (this->field_1B18 != 0) {
      st::fn_006E6080(this,2,this->field_1B18,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1B24 != 0) {
      st::fn_006E6080(this,2,this->field_1B24,(undefined4 *)&this->field_0x1d);
    }
    iVar2 = this->field_1B1C;
    goto joined_r0x0059c1b1;
  case 8:
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 0x99;
    if (this->field_1AC4 != 0) {
      st::fn_006E6080(this,2,this->field_1AC4,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AC8 != 0) {
      st::fn_006E6080(this,2,this->field_1AC8,(undefined4 *)&this->field_0x1d);
    }
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 0;
    if (this->field_1EB6 != 0) {
      st::fn_006E6080(this,2,this->field_1EB6,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1EBA != 0) {
      st::fn_006E6080(this,2,this->field_1EBA,(undefined4 *)&this->field_0x1d);
    }
    iVar2 = this->field_1B24;
joined_r0x0059c1b1:
    if (iVar2 != 0) {
      st::fn_006E6080(this,2,iVar2,(undefined4 *)&this->field_0x1d);
    }
    iVar2 = this->field_1B20;
    *(undefined4 *)&this->field_0x31 = 0;
LAB_0059c1ca:
    if (iVar2 != 0) {
      st::fn_006E6080(this,2,iVar2,(undefined4 *)&this->field_0x1d);
      return;
    }
    break;
  case 9:
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 0;
    if (this->field_1ED3 != 0) {
      st::fn_006E6080(this,2,this->field_1ED3,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1ED7 != 0) {
      st::fn_006E6080(this,2,this->field_1ED7,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1EB6 != 0) {
      st::fn_006E6080(this,2,this->field_1EB6,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1EBA != 0) {
      st::fn_006E6080(this,2,this->field_1EBA,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1B24 != 0) {
      st::fn_006E6080(this,2,this->field_1B24,(undefined4 *)&this->field_0x1d);
    }
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 0;
    if (this->field_1AC4 != 0) {
      st::fn_006E6080(this,2,this->field_1AC4,(undefined4 *)&this->field_0x1d);
    }
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 0x99;
    if (this->field_1AC4 != 0) {
      st::fn_006E6080(this,2,this->field_1AC4,(undefined4 *)&this->field_0x1d);
    }
    break;
  case 10:
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 0;
    if (this->field_1AD8 != 0) {
      st::fn_006E6080(this,2,this->field_1AD8,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1ADC != 0) {
      st::fn_006E6080(this,2,this->field_1ADC,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AE0 != 0) {
      st::fn_006E6080(this,2,this->field_1AE0,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AE4 != (LPCSTR)0x0) {
      st::fn_006E6080(this,2,st::machine_word_boundary_cast<undefined4>(this->field_1AE4),(undefined4 *)&this->field_0x1d);
    }
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 0x99;
    if (this->field_1AD8 != 0) {
      st::fn_006E6080(this,2,this->field_1AD8,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1ADC != 0) {
      st::fn_006E6080(this,2,this->field_1ADC,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AE0 != 0) {
      st::fn_006E6080(this,2,this->field_1AE0,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 0xd8;
    if (this->field_1AE4 != (LPCSTR)0x0) {
      st::fn_006E6080(this,2,st::machine_word_boundary_cast<undefined4>(this->field_1AE4),(undefined4 *)&this->field_0x1d);
      return;
    }
  }
  return;
}

// 005A0590 FSGSTy::sub_005A0590
#line 4 "decomp/ST.exe/functions/005A0590/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as FSGSTy.
   Evidence: this_call_owners=[FSGSTy]; agreed_this_calls=3; incoming_this_accesses=48;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005A0590(FSGSTy *this)

{
  if (this->field_1AC4 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1AC4);
  }
  this->field_1AC4 = 0;
  if (this->field_1AC8 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1AC8);
  }
  this->field_1AC8 = 0;
  if (this->field_1AD0 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1AD0);
  }
  this->field_1AD0 = 0;
  if (this->field_1ACC != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1ACC);
  }
  this->field_1ACC = 0;
  if (this->field_1AD4 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1AD4);
  }
  this->field_1AD4 = 0;
  if (this->field_1AD8 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1AD8);
  }
  this->field_1AD8 = 0;
  if (this->field_1ADC != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1ADC);
  }
  this->field_1ADC = 0;
  if (this->field_1AE0 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1AE0);
  }
  this->field_1AE0 = 0;
  if (this->field_1AE4 != (LPCSTR)0x0) {
    st::fn_006E56B0(this->field_000C,(uint)this->field_1AE4);
  }
  this->field_1AE4 = (LPCSTR)0x0;
  if (this->field_1B14 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1B14);
  }
  this->field_1B14 = 0;
  if (this->field_1AE8 != nullptr) {
    st::fn_006B5570(this->field_1AE8);
  }
  this->field_1AE8 = nullptr;
  if (this->field_1AEC != nullptr) {
    st::fn_006B5570(this->field_1AEC);
  }
  this->field_1AEC = nullptr;
  if (this->field_1AF0 != nullptr) {
    st::fn_006B5570(this->field_1AF0);
  }
  this->field_1AF0 = nullptr;
  if (this->field_1AF4 != nullptr) {
    st::fn_006B5570(this->field_1AF4);
  }
  this->field_1AF4 = nullptr;
  if (this->field_1AF8 != nullptr) {
    st::fn_006B5570(this->field_1AF8);
  }
  this->field_1AF8 = nullptr;
  if (this->field_1AFC != nullptr) {
    st::fn_006B5570(this->field_1AFC);
  }
  this->field_1AFC = nullptr;
  if (this->field_1B00 != nullptr) {
    st::fn_006B5570(this->field_1B00);
  }
  this->field_1B00 = nullptr;
  if ((DArrayTy *)this->field_1B04 != nullptr) {
    st::fn_006B5570((DArrayTy *)this->field_1B04);
  }
  this->field_1B04 = nullptr;
  if (this->field_1E8E != 0) {
    st::fn_006AB060(&this->field_1E8E);
  }
  if (this->field_1E92 != nullptr) {
    st::fn_006AB060(&this->field_1E92);
  }
  return;
}

// 005A07F0 FSGSTy::sub_005A07F0
#line 4 "decomp/ST.exe/functions/005A07F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as FSGSTy.
   Evidence: this_call_owners=[FSGSTy]; agreed_this_calls=2; incoming_this_accesses=40;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005A07F0(FSGSTy *this)

{
  /* ST_CALLSITE[005A080F]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
  st::fn_00402DBF(0,this->field_0008,2,0xc0a5,2,0x4000002f,0,0,0,0,0,0);
  /* ST_CALLSITE[005A082D]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
  st::fn_00402DBF(0,this->field_0008,2,0xc0a4,2,0x8000031,0,0,0,0,0,0);
  /* ST_CALLSITE[005A084B]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
  st::fn_00402DBF(0,this->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  if (this->field_1B10 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1B10);
  }
  this->field_1B10 = 0;
  if (this->field_1B14 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1B14);
  }
  this->field_1B14 = 0;
  if (this->field_1B18 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1B18);
  }
  this->field_1B18 = 0;
  if (this->field_1B1C != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1B1C);
  }
  this->field_1B1C = 0;
  if (this->field_1B20 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1B20);
  }
  this->field_1B20 = 0;
  if (this->field_1B24 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1B24);
  }
  this->field_1B24 = 0;
  if (this->field_1AC4 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1AC4);
  }
  this->field_1AC4 = 0;
  if (this->field_1AC8 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1AC8);
  }
  this->field_1AC8 = 0;
  if (this->field_1EA2 != nullptr) {
    st::fn_006B5570(this->field_1EA2);
  }
  this->field_1EA2 = nullptr;
  if (this->field_1AE8 != nullptr) {
    st::fn_006B5570(this->field_1AE8);
  }
  this->field_1AE8 = nullptr;
  if (this->field_1AEC != nullptr) {
    st::fn_006B5570(this->field_1AEC);
  }
  this->field_1AEC = nullptr;
  if (this->field_1EA6 != nullptr) {
    st::fn_006AE110((DArrayTy *)this->field_1EA6);
  }
  this->field_1EA6 = nullptr;
  if (this->field_1EAA != nullptr) {
    st::fn_006AE110((DArrayTy *)this->field_1EAA);
  }
  this->field_1EAA = nullptr;
  if (this->field_1E8E != 0) {
    st::fn_006AB060(&this->field_1E8E);
  }
  if (this->field_1E92 != nullptr) {
    st::fn_006AB060(&this->field_1E92);
  }
  if (this->field_1E9A != nullptr) {
    st::fn_006AB060(&this->field_1E9A);
  }
  return;
}

// 005A0A50 FSGSTy::sub_005A0A50
#line 4 "decomp/ST.exe/functions/005A0A50/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as FSGSTy.
   Evidence: this_call_owners=[FSGSTy]; agreed_this_calls=2; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005A0A50(FSGSTy *this)

{
  if (this->field_1AC4 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1AC4);
  }
  this->field_1AC4 = 0;
  if (this->field_1AC8 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1AC8);
  }
  this->field_1AC8 = 0;
  if (this->field_1EB6 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1EB6);
  }
  this->field_1EB6 = 0;
  if (this->field_1AE8 != nullptr) {
    st::fn_006B5570(this->field_1AE8);
  }
  this->field_1AE8 = nullptr;
  if (this->field_1AEC != nullptr) {
    st::fn_006B5570(this->field_1AEC);
  }
  this->field_1AEC = nullptr;
  return;
}

// 005A0AF0 FSGSTy::sub_005A0AF0
#line 4 "decomp/ST.exe/functions/005A0AF0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as FSGSTy.
   Evidence: this_call_owners=[FSGSTy]; agreed_this_calls=2; incoming_this_accesses=29;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005A0AF0(FSGSTy *this)

{
  if (this->field_1AC4 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1AC4);
  }
  this->field_1AC4 = 0;
  if (this->field_1AC8 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1AC8);
  }
  this->field_1AC8 = 0;
  if (this->field_1B20 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1B20);
  }
  this->field_1B20 = 0;
  if (this->field_1EB6 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1EB6);
  }
  this->field_1EB6 = 0;
  if (this->field_1EBA != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1EBA);
  }
  this->field_1EBA = 0;
  if (this->field_1B24 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1B24);
  }
  this->field_1B24 = 0;
  if (this->field_1AE8 != nullptr) {
    st::fn_006B5570(this->field_1AE8);
  }
  this->field_1AE8 = nullptr;
  if (this->field_1AEC != nullptr) {
    st::fn_006B5570(this->field_1AEC);
  }
  this->field_1AEC = nullptr;
  if ((DArrayTy *)this->field_1B04 != nullptr) {
    st::fn_006B5570((DArrayTy *)this->field_1B04);
  }
  this->field_1B04 = nullptr;
  if (this->field_1EBE != nullptr) {
    st::fn_006AE110((DArrayTy *)this->field_1EBE);
  }
  this->field_1EBE = nullptr;
  if (this->field_1E8E != 0) {
    st::fn_006AB060(&this->field_1E8E);
  }
  if (this->field_1E92 != nullptr) {
    st::fn_006AB060(&this->field_1E92);
  }
  if (this->field_1E9A != nullptr) {
    st::fn_006AB060(&this->field_1E9A);
  }
  return;
}

// 005A0C80 FSGSTy::sub_005A0C80
#line 4 "decomp/ST.exe/functions/005A0C80/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as FSGSTy.
   Evidence: this_call_owners=[FSGSTy]; agreed_this_calls=2; incoming_this_accesses=23;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005A0C80(FSGSTy *this)

{
  if (this->field_1AC4 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1AC4);
  }
  this->field_1AC4 = 0;
  if (this->field_1EB6 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1EB6);
  }
  this->field_1EB6 = 0;
  if (this->field_1EBA != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1EBA);
  }
  this->field_1EBA = 0;
  if (this->field_1ED3 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1ED3);
  }
  this->field_1ED3 = 0;
  if (this->field_1ED7 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1ED7);
  }
  this->field_1ED7 = 0;
  if (this->field_1B24 != 0) {
    st::fn_006E56B0(this->field_000C,this->field_1B24);
  }
  this->field_1B24 = 0;
  if (this->field_1AE8 != nullptr) {
    st::fn_006B5570(this->field_1AE8);
  }
  this->field_1AE8 = nullptr;
  if (this->field_1EDB != nullptr) {
    st::fn_006AB060(&this->field_1EDB);
  }
  if (this->field_1E8E != 0) {
    st::fn_006AB060(&this->field_1E8E);
  }
  if (this->field_1E92 != nullptr) {
    st::fn_006AB060(&this->field_1E92);
  }
  return;
}

// 005A39A0 FSGSTy::sub_005A39A0
#line 4 "decomp/ST.exe/functions/005A39A0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 005A3AB0 -> 005A39A0 @ 005A3D10 | 005A3AB0 -> 005A39A0 @ 005A3D30 | 005A3AB0 ->
   005A39A0 @ 005A3D53 | 005A3AB0 -> 005A39A0 @ 005A3D76 | 005A3AB0 -> 005A39A0 @ 005A3D96 |
   005A3AB0 -> 005A39A0 @ 005A3DB6 | 005A3AB0 -> 005A39A0 @ 005A3ED2 | 005A3AB0 -> 005A39A0 @
   005A3EF2 | 005A3AB0 -> 005A39A0 @ 005A3F15 | 005A3AB0 -> 005A39A0 @ 005A3F38

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005A39A0 parameter used as this of ccFntTy::SetSurf @ 005A3A50 | 005A39A0 parameter
   used as this of ccFntTy::WrStr @ 005A3A61

   [STMethodOwnerApplier] Structural method owner recovered as FSGSTy.
   Evidence: this_call_owners=[FSGSTy]; agreed_this_calls=10; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=10; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_005A39A0
          (FSGSTy *this,ccFntTy *param_1,char *text,uint param_3,byte *param_4,int param_5,
          int param_6,int param_7,int param_8)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  CHAR local_10 [12];

  pbVar3 = st::fn_00403EC7(text,param_3,param_4);
  if (pbVar3 != nullptr) {
    iVar5 = -1;
    pbVar9 = pbVar3;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar1 != 0);
    if (iVar5 != -2) {
      uVar4 = st::fn_0072FF00(pbVar3);
      /* ST_CALLSITE[005A39E5]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(local_10,st::mutable_c_string("%6d"),uVar4);
      goto LAB_005a3a15;
    }
  }
  uVar6 = 0xffffffff;
  pcVar8 = &st_global_007CC58C;
  do {
    pcVar10 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar10 + -uVar6;
  pcVar10 = local_10;
  memmove(pcVar10, pcVar8, uVar6); /* compiler REP MOVS byte copy */
LAB_005a3a15:
  st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this->field_1AC0,0,param_5,param_6,param_7,param_8,
               0xff);
  st::fn_00710A90(param_1,(int)this->field_1AC0,0,param_5,param_6,param_7,param_8);
  st::fn_007119C0(param_1,local_10,-1,-1,0);
  return;
}

