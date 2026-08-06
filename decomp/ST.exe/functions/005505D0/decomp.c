#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STPlaySystemC.
   Evidence: this_call_owners=[STPlaySystemC]; agreed_this_calls=2; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=9; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall STPlaySystemC::sub_005505D0(STPlaySystemC *this,int param_1,int *param_2)

{
  char *pcVar2;
  DWORD DVar3;
  char *pcVar1;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  CHAR local_10c [260];
  uint local_8;

  if (param_2 != nullptr) {
    pcVar2 = (char *)thunk_FUN_0054eab0(this,*param_2,&local_8);
    if (pcVar2 == nullptr) {
      FUN_00715360(g_int_00811764,param_1,'7',nullptr,0,0,0xffffffff);
      thunk_FUN_005508f0(this,param_1);
    }
    else {
      FUN_00715360(g_int_00811764,param_1,'1',pcVar2,local_8,1,*(undefined4 *)pcVar2);
      if (this->field_00BB < 5) {
        DVar3 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
        (&this->field_00A7)[this->field_00BB] = DVar3;
        this->field_00BB = this->field_00BB + 1;
      }
      else {
        this->field_00A7 = this->field_00AB;
        this->field_00AB = this->field_00AF;
        this->field_00AF = this->field_00B3;
        this->field_00B3 = this->field_00B7;
        DVar3 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
        this->field_00B7 = DVar3;
        if (DAT_0080735e == '\0') {
          return;
        }
        if ((DVar3 - this->field_00A7) / 5 < 0x7d1) {
          if (g_popUp_008016D8 != nullptr) {
            uVar5 = 9;
            pcVar2 = LoadResourceString(17000,g_hINSTANCE_00807618);
            thunk_FUN_0052d320(g_popUp_008016D8,pcVar2,uVar5);
          }
          this->field_00BB = 0;
        }
      }
      if (DAT_0080735e != '\0') {
        bVar4 = 0;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = nullptr;
        if (DAT_00808aaf != 0) {
          do {
            puVar6 = &DAT_00808ab0 + (int)param_2 * 0x27;
            if (((&DAT_00808af0)[(int)param_2 * 0x27] == param_1) &&
               ((&DAT_00808af6)[(int)param_2 * 0x9c] != '\0')) {
              pcVar1 = LoadResourceString(0x426d,g_hINSTANCE_00807618);
              wsprintfA(local_10c,"%s %s",pcVar1,puVar6);
              if (g_popUp_008016D8 != nullptr) {
                thunk_FUN_0052d320(g_popUp_008016D8,local_10c,8);
              }
            }
            bVar4 = bVar4 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = (int *)(uint)bVar4;
          } while (bVar4 < DAT_00808aaf);
          return;
        }
      }
    }
  }
  return;
}

