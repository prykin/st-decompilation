
/* [STMethodOwnerApplier] Structural method owner recovered as FSGSTy.
   Evidence: this_call_owners=[FSGSTy]; agreed_this_calls=1; incoming_this_accesses=78;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall FSGSTy::sub_0059B820(FSGSTy *this)

{
  byte bVar1;
  byte *pbVar2;
  LPCSTR pCVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;

  this->field_1A6B = 1;
  this->field_0029 = 2;
  switch(this->field_1A5F) {
  case CASE_2:
  case CASE_3:
  case CASE_4:
  case CASE_5:
  case CASE_7:
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
    pCVar3 = (LPCSTR)this->field_1EB6;
    break;
  case CASE_6:
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
    if ((this->field_1B18 != 0) && (this->field_1A60 == '\0')) {
      FUN_006e6080(this,2,this->field_1B18,(undefined4 *)&this->field_0x1d);
    }
    if ((this->field_1B24 != 0) && (this->field_1A60 != '\0')) {
      FUN_006e6080(this,2,this->field_1B24,(undefined4 *)&this->field_0x1d);
    }
    if (this->field_1B1C != 0) {
      FUN_006e6080(this,2,this->field_1B1C,(undefined4 *)&this->field_0x1d);
    }
    pCVar3 = (LPCSTR)this->field_1B20;
    *(undefined4 *)&this->field_0x31 = 1;
    goto joined_r0x0059bcb0;
  case CASE_8:
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
    pCVar3 = (LPCSTR)this->field_1B20;
    *(undefined4 *)&this->field_0x31 = 1;
    break;
  case CASE_9:
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
    pCVar3 = (LPCSTR)this->field_1AC4;
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 0x89;
joined_r0x0059bcb0:
    if (pCVar3 == (LPCSTR)0x0) goto switchD_0059b84b_default;
    goto LAB_0059bcb6;
  case CASE_A:
    pbVar2 = this->field_1B0C;
    pbVar4 = &DAT_00807e1d;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_0059bb67:
        iVar5 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0059bb6c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_0059bb67;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_0059bb6c:
    this->field_002D = 0x29;
    *(undefined4 *)&this->field_0x31 = 0x89;
    if (iVar5 != 0) {
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
    if (iVar5 != 0) {
      *(undefined4 *)&this->field_0x31 = 0xcc;
    }
    pCVar3 = this->field_1AE4;
    break;
  default:
    goto switchD_0059b84b_default;
  }
  if (pCVar3 != (LPCSTR)0x0) {
LAB_0059bcb6:
    FUN_006e6080(this,2,pCVar3,(undefined4 *)&this->field_0x1d);
  }
switchD_0059b84b_default:
  this->field_002D = 0x61;
  *(undefined4 *)&this->field_0x35 = 0;
  FUN_006e6080(this,0xf,0,(undefined4 *)&this->field_0x1d);
  return;
}

