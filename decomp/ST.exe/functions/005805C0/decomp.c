#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STDcResourcC.
   Evidence: this_call_owners=[STDcResourcC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STDcResourcC::sub_005805C0(STDcResourcC *this)

{
  undefined4 *this_00;
  char *text;
  int iVar1;
  Global_mfRLoad_param_2Enum GVar2;

  GVar2 = CASE_1D;
  this_00 = &this->field_01D5;
  text = thunk_FUN_0057f530(this,this->field_025D);
  /* ST_CALLSITE[005805E6]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar1 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,0xe,PTR_00806764,text,GVar2);
  if (iVar1 == 0) {
    /* ST_CALLSITE[00580606]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar1 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_00,0xd,PTR_00806764,PTR_s_termsd_007cb0b4,CASE_1D);
    if (iVar1 == 0) {
      /* ST_CALLSITE[00580624]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)this_00,0xe,g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[00580673]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
      STT3DSprC::sub_004AD3C0
                ((STT3DSprC *)this_00,(float)this->field_0245 * _DAT_007904f8 + _DAT_007904f4,
                 (float)this->field_0249 * _DAT_007904f8 + _DAT_007904f4,
                 (float)this->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
      Library::Ourlib::ST3DSMAP::SprSetLevAfter((void *)this->field_0211,this->field_01ED,-1);
      /* ST_CALLSITE[00580690]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
      STT3DSprC::sub_004ACF50((STT3DSprC *)this_00,'\r');
      /* ST_CALLSITE[005806A6]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)this_00,0xd,g_playSystem_00802A38->field_00E4);
      return 1;
    }
  }
  return 0xffffffff;
}

