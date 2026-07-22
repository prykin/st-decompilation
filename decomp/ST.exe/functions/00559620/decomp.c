
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00558C00.
   Evidence: incoming_receiver_captures=1; receiver_accesses=5; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[28];
   expected_stack=28; receiver_family_members=15; adopt_untyped_existing_thiscall */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00::FUN_00559620
          (AnonReceiver_00558C00 *this,int param_1,int param_2,undefined1 param_3,undefined *param_4
          ,int param_5,undefined4 param_6,uint param_7)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((((*(int *)&this->field_0x114 != 0) && (*(int *)&this->field_0x38 != 0)) && (-1 < param_5)) &&
     ((param_4 < (undefined *)0x8 &&
      ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 ||
       ((byte)(&DAT_008087e9)[(int)param_4 * 0x51] < 8)))))) {
    if ((param_7 & 0x1000) != 0) {
      sub_0055BBC0(this,1,(short)param_1,(short)param_2,param_3,(uint)param_4,(char)param_5,param_6)
      ;
    }
    if (((param_4 + 0xfc)[(int)this] != '\0') && ((param_7 & 2) != 0)) {
      iVar1 = param_5 * 2 + 1;
      iVar5 = param_1 - param_5;
      iVar8 = param_2 - param_5;
      puVar3 = thunk_FUN_005532f0(param_5);
      param_4 = puVar3;
      param_5 = iVar1;
      if (0 < iVar1) {
        do {
          iVar4 = 0;
          iVar7 = iVar5;
          do {
            if (((((puVar3 == (undefined *)0x0) || (param_4[iVar4] != '\0')) && (-1 < iVar7)) &&
                ((iVar7 < *(int *)&this->field_0x20 && (-1 < iVar8)))) &&
               (iVar8 < *(int *)&this->field_0x24)) {
              iVar6 = iVar8 * *(int *)&this->field_0x20 + iVar7;
              cVar2 = *(char *)(*(int *)&this->field_0x38 + 1 + iVar6 * 2);
              if (cVar2 != '\0') {
                *(char *)(*(int *)&this->field_0x38 + iVar6 * 2 + 1) = cVar2 + -1;
              }
            }
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 1;
          } while (iVar4 < iVar1);
          iVar8 = iVar8 + 1;
          param_5 = param_5 + -1;
          param_4 = param_4 + iVar1;
        } while (param_5 != 0);
      }
    }
  }
  return;
}

