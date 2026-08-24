#include "../../pseudocode_runtime.h"


int __fastcall FUN_005fa180(AnonShape_005FA180_2D8671A3 *param_1)

{
  byte *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;

  iVar3 = param_1->field_02D1;
  if (g_playSystem_00802A38->field_00E4 % 5 != 0) {
    return iVar3;
  }
  if (param_1->field_02BB == '\x02') {
    puVar1 = &param_1->field_0x1d5;
    /* ST_CALLSITE[005FA1CB]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
    STT3DSprC::sub_004ACE30
              ((STT3DSprC *)puVar1,PTR_00806724->entries[iVar3],(int)PTR_00806724->field_002C);
    iVar3 = param_1->field_02D1 + -1;
    param_1->field_02D1 = iVar3;
    if (iVar3 == (int)PTR_00806724->entryCount / 2) {
      cVar2 = thunk_FUN_004ad610((int)puVar1);
      if (cVar2 != '\0') {
        thunk_FUN_005fa0b0((STColl3C *)param_1);
        /* ST_CALLSITE[005FA208]: CALL dword ptr [EAX] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)**(undefined4 **)puVar1)();
      }
    }
    iVar3 = param_1->field_02D1;
    if (iVar3 < 0) {
      param_1->field_02D1 = 0;
      /* ST_CALLSITE[005FA22D]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      STT3DSprC::sub_004ACE30((STT3DSprC *)puVar1,0,(int)PTR_00806724->field_002C);
    }
    return iVar3;
  }
  puVar1 = &param_1->field_0x1d5;
  /* ST_CALLSITE[005FA24F]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
  STT3DSprC::sub_004ACE30
            ((STT3DSprC *)puVar1,PTR_00806724->entries[iVar3],(int)PTR_00806724->field_002C);
  iVar3 = param_1->field_02D1;
  iVar6 = iVar3 + 1;
  param_1->field_02D1 = iVar6;
  if (PTR_00806724->entryCount <= iVar6) {
    param_1->field_02D1 = iVar3;
    thunk_FUN_00495ff0((short)param_1->field_025D,(short)param_1->field_0261,
                       (short)param_1->field_0265,0,(AnonShape_00495FF0_59081BDD *)param_1);
    thunk_FUN_004ad430((STT3DSprC *)puVar1);
    param_1->field_02BB = 0;
    /* ST_CALLSITE[005FA2B1]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
    sub_0041C5A0(param_1);
    return iVar6;
  }
  if (iVar6 == (int)PTR_00806724->entryCount / 2) {
    thunk_FUN_004ad5e0((STT3DSprC *)puVar1);
    iVar5 = (int)param_1->field_0045;
    iVar7 = (int)param_1->field_0043;
    iVar3 = (int)param_1->field_0041;
    uVar9 = 0;
    iVar8 = 0;
    uVar4 = thunk_FUN_004ad650((STT3DSprC *)puVar1);
    thunk_FUN_006377b0(uVar4,iVar8,iVar3,iVar7,iVar5,uVar9);
  }
  return iVar6;
}

