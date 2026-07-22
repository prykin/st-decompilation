
/* [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=2; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=9; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall STPlaySystemC::sub_005505D0(STPlaySystemC *this,int param_1,int *param_2)

{
  char *pcVar1;
  DWORD DVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  CHAR local_10c [260];
  uint local_8;

  if (param_2 != (int *)0x0) {
    pcVar1 = (char *)thunk_FUN_0054eab0(this,*param_2,&local_8);
    if (pcVar1 == (char *)0x0) {
      FUN_00715360(g_int_00811764,param_1,'7',(char *)0x0,0,0,0xffffffff);
      thunk_FUN_005508f0(this,param_1);
    }
    else {
      FUN_00715360(g_int_00811764,param_1,'1',pcVar1,local_8,1,*(undefined4 *)pcVar1);
      if (this->field_00BB < 5) {
        DVar2 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
        (&this->field_00A7)[this->field_00BB] = DVar2;
        this->field_00BB = this->field_00BB + 1;
      }
      else {
        this->field_00A7 = this->field_00AB;
        this->field_00AB = this->field_00AF;
        this->field_00AF = this->field_00B3;
        this->field_00B3 = this->field_00B7;
        DVar2 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
        this->field_00B7 = DVar2;
        if (DAT_0080735e == '\0') {
          return;
        }
        if ((DVar2 - this->field_00A7) / 5 < 0x7d1) {
          if (g_popUp_008016D8 != (PopUpTy *)0x0) {
            uVar4 = 9;
            pcVar1 = LoadResourceString(17000,g_module_00807618);
            thunk_FUN_0052d320(g_popUp_008016D8,pcVar1,uVar4);
          }
          this->field_00BB = 0;
        }
      }
      if (DAT_0080735e != '\0') {
        bVar3 = 0;
        param_2 = (int *)0x0;
        if (DAT_00808aaf != 0) {
          do {
            puVar5 = &DAT_00808ab0 + (int)param_2 * 0x27;
            if (((&DAT_00808af0)[(int)param_2 * 0x27] == param_1) &&
               ((&DAT_00808af6)[(int)param_2 * 0x9c] != '\0')) {
              pcVar1 = LoadResourceString(0x426d,g_module_00807618);
              wsprintfA(local_10c,"%s %s",pcVar1,puVar5);
              if (g_popUp_008016D8 != (PopUpTy *)0x0) {
                thunk_FUN_0052d320(g_popUp_008016D8,local_10c,8);
              }
            }
            bVar3 = bVar3 + 1;
            param_2 = (int *)(uint)bVar3;
          } while (bVar3 < DAT_00808aaf);
          return;
        }
      }
    }
  }
  return;
}

