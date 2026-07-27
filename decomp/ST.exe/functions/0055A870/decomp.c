
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=21; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
VisibleClassTy::sub_0055A870
          (VisibleClassTy *this,int param_1,int param_2,undefined1 param_3,uint param_4,
          undefined *param_5,undefined4 param_6)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((((this->field_0114 != 0) && (-1 < (int)param_5)) && (param_4 < 8)) &&
     (((g_playSystem_00802A38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[param_4 * 0x51] < 8)
       ) && ((&this->field_00D4)[param_4] != 0)))) {
    sub_0055BBC0(this,6,(short)param_1,(short)param_2,param_3,param_4,(char)param_5,param_6);
    iVar1 = (int)param_5 * 2 + 1;
    iVar5 = param_1 - (int)param_5;
    iVar8 = param_2 - (int)param_5;
    puVar3 = thunk_FUN_005532f0((Global_sub_005532F0_param_1Enum)param_5);
    _param_3 = iVar1;
    param_5 = puVar3;
    if (0 < iVar1) {
      do {
        iVar4 = 0;
        iVar7 = iVar5;
        do {
          if (((puVar3 == (undefined *)0x0) || (param_5[iVar4] != '\0')) &&
             ((-1 < iVar7 &&
              (((iVar7 < this->field_0020 && (-1 < iVar8)) && (iVar8 < this->field_0024)))))) {
            iVar6 = iVar8 * this->field_0020 + (&this->field_00D4)[param_4];
            cVar2 = *(char *)(iVar6 + iVar7);
            if (cVar2 != '\0') {
              *(char *)(iVar6 + iVar7) = cVar2 + -1;
            }
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar4 < iVar1);
        iVar8 = iVar8 + 1;
        _param_3 = _param_3 + -1;
        param_5 = param_5 + iVar1;
      } while (_param_3 != 0);
    }
  }
  return;
}

