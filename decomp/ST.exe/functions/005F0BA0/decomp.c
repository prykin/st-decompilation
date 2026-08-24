#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_005f0ba0(AnonShape_005F0BA0_C8D654C5 *param_1)

{
  byte *this;
  char cVar1;
  int iVar2;
  int iVar3;

  if (g_playSystem_00802A38->field_00E4 % 5 == 0) {
    this = &param_1->field_0x1d5;
    if (param_1->field_02B5 == 1) {
      /* ST_CALLSITE[005F0BEB]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)this,PTR_00806724->entries[param_1->field_02D2],
                 (int)PTR_00806724->field_002C);
      iVar2 = param_1->field_02D2 + -1;
      param_1->field_02D2 = iVar2;
      if (iVar2 == (int)PTR_00806724->entryCount / 2) {
        cVar1 = thunk_FUN_004ad610((int)this);
        if (cVar1 != '\0') {
          thunk_FUN_005ef5f0((int)param_1);
          /* ST_CALLSITE[005F0C27]: CALL dword ptr [EDX] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (*(code *)**(undefined4 **)this)();
        }
      }
      if ((int)param_1->field_02D2 < 0) {
        param_1->field_02D2 = 0;
        /* ST_CALLSITE[005F0C4B]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
        STT3DSprC::sub_004ACE30((STT3DSprC *)this,0,(int)PTR_00806724->field_002C);
        return 1;
      }
    }
    else {
      /* ST_CALLSITE[005F0C59]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)this,PTR_00806724->entries[param_1->field_02D2],
                 (int)PTR_00806724->field_002C);
      iVar2 = param_1->field_02D2;
      iVar3 = iVar2 + 1;
      param_1->field_02D2 = iVar3;
      if (PTR_00806724->entryCount <= iVar3) {
        param_1->field_02D2 = iVar2;
        thunk_FUN_004ad430((STT3DSprC *)this);
        return 1;
      }
      if (iVar3 == (int)PTR_00806724->entryCount / 2) {
        thunk_FUN_004ad5e0((STT3DSprC *)this);
      }
    }
  }
  return 0;
}

