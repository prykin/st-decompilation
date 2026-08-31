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
  int iVar3;
  PopUpTy *text;
  int uVar5_mg0;
  char *pcVar1;
  byte bVar4;
  uint uVar5;
  CHAR local_10c [260];
  uint local_8;

  if (param_2 != nullptr) {
    /* ST_CALLSITE[005505F2]: CALL 0x00404863; direct=00404863 thunk_FUN_0054eab0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__thiscall;pointer:/char;pointer:/void;/int;pointer:/undefined4 */
    pcVar2 = thunk_FUN_0054eab0(this,*param_2,&local_8);
    if (pcVar2 == nullptr) {

      FUN_00715360(g_int_00811764,param_1,'7',nullptr,0,0,0xffffffff);
      /* ST_CALLSITE[0055079F]: CALL 0x00401370; direct=00401370 STPlaySystemC::sub_005508F0 */
      sub_005508F0(this,param_1);
    }
    else {

      FUN_00715360(g_int_00811764,param_1,'1',pcVar2,local_8,1,*(undefined4 *)pcVar2);
      if (this->field_00BB < 5) {

        uVar5_mg0 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
        (&this->field_00A7)[this->field_00BB] = uVar5_mg0;
        this->field_00BB = this->field_00BB + 1;
      }
      else {
        this->field_00A7 = this->field_00AB;
        this->field_00AB = this->field_00AF;
        this->field_00AF = this->field_00B3;
        this->field_00B3 = this->field_00B7;

        iVar3 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
        this->field_00B7 = iVar3;
        if (DAT_0080735e == '\0') {
          return;
        }
        if ((iVar3 - this->field_00A7) / 5 < 0x7d1) {
          if (g_popUp_008016D8 != nullptr) {
            uVar5 = 9;
            /* ST_CALLSITE[0055069B]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/PopUpTy; signature=__stdcall;pointer:/PopUpTy;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
            text = LoadResourceString(17000,g_hINSTANCE_00807618);
            /* ST_CALLSITE[005506A7]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
            PopUpTy::sub_0052D320(g_popUp_008016D8,(char *)text,uVar5);
          }
          this->field_00BB = 0;
        }
      }
      if (DAT_0080735e != '\0') {
        bVar4 = 0;
        param_2 = nullptr;
        if (DAT_00808aaf != 0) {
          do {
            pcVar2 = &CHAR_00h_00808ab0 + (int)param_2 * 0x9c;
            if (((&DAT_00808af0)[(int)param_2 * 0x27] == param_1) &&
               ((&DAT_00808af6)[(int)param_2 * 0x9c] != '\0')) {
              pcVar1 = LoadResourceString(0x426d,g_hINSTANCE_00807618);
              /* ST_CALLSITE[0055074C]: CALL ESI */
              wsprintfA(local_10c,"%s %s",pcVar1,pcVar2);
              if (g_popUp_008016D8 != nullptr) {
                /* ST_CALLSITE[00550764]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
                PopUpTy::sub_0052D320(g_popUp_008016D8,local_10c,8);
              }
            }
            bVar4 = bVar4 + 1;
            param_2 = (int *)(uint)bVar4;
          } while (bVar4 < DAT_00808aaf);
          return;
        }
      }
    }
  }
  return;
}

