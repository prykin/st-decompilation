
/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall MoneyTy::sub_0052BDA0(MoneyTy *this,char param_1,int param_2)

{
  undefined1 uVar1;
  ushort *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_c [2];

  if (param_1 == DAT_0080874d) {
    if (DAT_00808a97 != -1) {
      param_2 = DAT_00808a97 - param_2;
    }
    this->field_009E = param_2;
    wsprintfA((LPSTR)local_c,"%5d",param_2);
    if (DAT_00808a97 == -1) {
      bVar3 = 0;
    }
    else {
      bVar3 = (-(0x14 < (uint)this->field_009E) & 0xfeU) + 2;
    }
    if (DAT_0080874e == '\x03') {
      bVar3 = bVar3 + 1;
    }
    puVar2 = this->field_007E;
    uVar5 = *(uint *)(puVar2 + 10);
    if (uVar5 == 0) {
      uVar5 = ((uint)puVar2[7] * *(int *)(puVar2 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar2 + 4);
    }
    uVar1 = this->field_0069;
    puVar4 = (undefined4 *)FUN_006b4fa0((int)puVar2);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
      puVar4 = puVar4 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar4 = uVar1;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    ccFntTy::SetSurf(this->field_006E,(int)this->field_007E,0,0,0,this->field_0060,this->field_0064)
    ;
    ccFntTy::WrStr(this->field_006E,local_c,-1,-1,(uint)bVar3);
    sub_0052BBE0(this);
  }
  return;
}

