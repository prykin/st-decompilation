#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0 */

undefined4 __thiscall STJellyGunC::sub_00584380(STJellyGunC *this)

{
  undefined4 *this_00;
  int iVar1;
  uint uVar2;
  this_00 = &this->field_01D5;
  /* ST_CALLSITE[0058439F]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar1 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,8,PTR_00806774,"Expb11",CASE_1D);
  if (iVar1 == 0) {
    /* ST_CALLSITE[005843BD]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)this_00,8,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[005843D3]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    STT3DSprC::LoadSequence((STT3DSprC *)this_00,10,PTR_00806774,"expmask3",CASE_1D);
    /* ST_CALLSITE[005843DC]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
    STT3DSprC::sub_004ACFE0((STT3DSprC *)this_00,'\n');
    /* ST_CALLSITE[005843EC]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
    STT3DSprC::sub_004ACF20((STT3DSprC *)this_00,PTR_008032b8,0x10);
    /* ST_CALLSITE[00584402]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)this_00,10,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[0058440B]: CALL dword ptr [EDX + 0xd8] */
    this->vfunc_D8();
    /* ST_CALLSITE[00584422]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar1 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,9,PTR_00806764,"bulb_n5",CASE_1D);
    if (iVar1 == 0) {
      /* ST_CALLSITE[0058442F]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
      STT3DSprC::sub_004AD070((STT3DSprC *)this_00,9);
      /* ST_CALLSITE[00584438]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      uVar2 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_00,'\t');
      this->field_0x24f = (char)uVar2;
      this->field_0x250 = DAT_007cb414;
      this->field_0251 = 0;
    }
    this->field_0239 = 100;
    return 0;
  }
  return 0xffffffff;
}

