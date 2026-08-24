#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as FSGSTy.
   Evidence: this_call_owners=[FSGSTy]; agreed_this_calls=1; incoming_this_accesses=78;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10 */

void __thiscall FSGSTy::sub_0059B820(FSGSTy *this)

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
      FUN_006e6080(this,2,this->field_1AC4,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AD8 != 0) {
      FUN_006e6080(this,2,this->field_1AD8,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1ADC != 0) {
      FUN_006e6080(this,2,this->field_1ADC,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AE0 != 0) {
      FUN_006e6080(this,2,this->field_1AE0,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 0x29;
    if (this->field_1AC8 != 0) {
      FUN_006e6080(this,2,this->field_1AC8,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1ACC != 0) {
      FUN_006e6080(this,2,this->field_1ACC,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AD4 != 0) {
      FUN_006e6080(this,2,this->field_1AD4,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 200;
    if (this->field_1AE4 != (LPCSTR)0x0) {
      FUN_006e6080(this,2,this->field_1AE4,(undefined4 *)&this->field_0x1d);
    }
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 1;
    if (this->field_1B14 != 0) {
      FUN_006e6080(this,2,this->field_1B14,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 1;
    if (this->field_1AD0 != 0) {
      FUN_006e6080(this,2,this->field_1AD0,(undefined4 *)&this->field_0x1d);
    }
    pCVar4 = (LPCSTR)this->field_1EB6;
    break;
  case 6:
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 9;
    if (this->field_1B10 != 0) {
      FUN_006e6080(this,2,this->field_1B10,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 0x89;
    if (this->field_1AC4 != 0) {
      FUN_006e6080(this,2,this->field_1AC4,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AC8 != 0) {
      FUN_006e6080(this,2,this->field_1AC8,(undefined4 *)&this->field_0x1d);
    }
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 1;
    if (this->field_1B14 != 0) {
      FUN_006e6080(this,2,this->field_1B14,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 1;
    if ((this->field_1B18 != 0) && (this->array_00BC[0xc].field_01E0 == '\0')) {
      FUN_006e6080(this,2,this->field_1B18,(undefined4 *)&this->field_0x1d);
    }
    if ((this->field_1B24 != 0) && (this->array_00BC[0xc].field_01E0 != '\0')) {
      FUN_006e6080(this,2,this->field_1B24,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1B1C != 0) {
      FUN_006e6080(this,2,this->field_1B1C,(undefined4 *)&this->field_0x1d);
    }
    pCVar4 = (LPCSTR)this->field_1B20;
    *(undefined4 *)&this->field_0x31 = 1;
    goto joined_r0x0059bcb0;
  case 8:
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 0x99;
    if (this->field_1AC4 != 0) {
      FUN_006e6080(this,2,this->field_1AC4,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 0x89;
    if (this->field_1AC8 != 0) {
      FUN_006e6080(this,2,this->field_1AC8,(undefined4 *)&this->field_0x1d);
    }
    this->field_002D = 0x20;
    *(undefined4 *)&this->field_0x31 = 1;
    if (this->field_1EB6 != 0) {
      FUN_006e6080(this,2,this->field_1EB6,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1B24 != 0) {
      FUN_006e6080(this,2,this->field_1B24,(undefined4 *)&this->field_0x1d);
    }
    *(uint *)&this->field_0x31 = (uint)(this->field_1EC2 == 0x100);
    if (this->field_1EBA != 0) {
      FUN_006e6080(this,2,this->field_1EBA,(undefined4 *)&this->field_0x1d);
    }
    pCVar4 = (LPCSTR)this->field_1B20;
    *(undefined4 *)&this->field_0x31 = 1;
    break;
  case 9:
    *(uint *)&this->field_0x31 = (uint)(this->field_1EDF != 0);
    this->field_002D = 0x20;
    if (this->field_1ED3 != 0) {
      FUN_006e6080(this,2,this->field_1ED3,(undefined4 *)&this->field_0x1d);
    }
    *(uint *)&this->field_0x31 = (uint)(this->field_1EDF < 0xf4230);
    if (this->field_1ED7 != 0) {
      FUN_006e6080(this,2,this->field_1ED7,(undefined4 *)&this->field_0x1d);
    }
    *(undefined4 *)&this->field_0x31 = 1;
    if (this->field_1EB6 != 0) {
      FUN_006e6080(this,2,this->field_1EB6,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1EBA != 0) {
      FUN_006e6080(this,2,this->field_1EBA,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1B24 != 0) {
      FUN_006e6080(this,2,this->field_1B24,(undefined4 *)&this->field_0x1d);
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
      FUN_006e6080(this,2,this->field_1AD8,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1ADC != 0) {
      FUN_006e6080(this,2,this->field_1ADC,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1AE0 != 0) {
      FUN_006e6080(this,2,this->field_1AE0,(undefined4 *)&this->field_0x1d);
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
    FUN_006e6080(this,2,pCVar4,(undefined4 *)&this->field_0x1d);
  }
switchD_0059b84b_default:
  this->field_002D = 0x61;
  this->field_0035 = 0;
  this->field_0037 = 0;
  FUN_006e6080(this,0xf,0,(undefined4 *)&this->field_0x1d);
  return;
}

