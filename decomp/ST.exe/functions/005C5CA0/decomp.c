#include "../../pseudocode_runtime.h"


void __fastcall FUN_005c5ca0(RecoveredRecordView_005C5CA0_616D4596 *param_1)

{
  byte *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;

  cVar2 = param_1->field_1E26;
  if ((((cVar2 == '\x02') || (cVar2 == '\x05')) || (cVar2 == '\x0f')) ||
     (((cVar2 == '\f' || (cVar2 == '\x10')) ||
      ((param_1->field_1E27 == 0x13 && ((DAT_00803400 == '\x14' || (DAT_00803400 == '\x15')))))))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  param_1->field_1C63 = 1;
  param_1->field_0029 = 2;
  param_1->field_002D = 0x20;
  piVar7 = (int *)&param_1->field_0x1f60;
  iVar6 = 7;
  do {
    iVar3 = *piVar7;
    if ((iVar3 != 0) && (DAT_0080877e != '\0')) {
      param_1->field_0031 = 1;
      param_1->field_0025 = iVar3;
      /* ST_CALLSITE[005C5D2D]: CALL dword ptr [EAX + 0x18] */
      (*STField<code **>(param_1->field_000C,0x0000)[6])(&param_1->field_0x1d);
    }
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if ((param_1->field_215D != 0) && (DAT_0080877e != '\0')) {
    param_1->field_0031 = 1;
    param_1->field_0025 = param_1->field_215D;
    /* ST_CALLSITE[005C5D5E]: CALL dword ptr [EAX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
    (*STField<code **>(param_1->field_000C,0x0000)[6])(&param_1->field_0x1d);
  }
  piVar7 = (int *)&param_1->field_0x2125;
  iVar6 = 0xe;
  do {
    iVar3 = *piVar7;
    if (((iVar3 != 0) && (DAT_0080877e != '\0')) && (!bVar5)) {
      param_1->field_0031 = 1;
      param_1->field_0025 = iVar3;
      /* ST_CALLSITE[005C5D97]: CALL dword ptr [EAX + 0x18] */
      (*STField<code **>(param_1->field_000C,0x0000)[6])(&param_1->field_0x1d);
    }
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (param_1->field_211D != 0) {
    param_1->field_0031 = 1;
    param_1->field_0025 = param_1->field_211D;
    puVar1 = &param_1->field_0x1d;
    /* ST_CALLSITE[005C5DBE]: CALL dword ptr [EAX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
    (*STField<code **>(param_1->field_000C,0x0000)[6])(puVar1);
    param_1->field_002D = 0x22;
    *(undefined4 *)&param_1->field_0x1f88 = 0;
    param_1->field_0031 = 0;
    /* ST_CALLSITE[005C5DD9]: CALL dword ptr [EDX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
    (*STField<code **>(param_1->field_000C,0x0000)[6])(puVar1);
    param_1->field_002D = 0x28;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar4 = *(uint *)(param_1->field_1F84 + 0xc);
    if (uVar4 < 0xb) {
      iVar6 = 1;
    }
    else {
      iVar6 = uVar4 - 9;
    }
    param_1->field_0031 = iVar6;
    /* ST_CALLSITE[005C5E04]: CALL dword ptr [EDX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
    (*STField<code **>(param_1->field_000C,0x0000)[6])(puVar1);
  }
  iVar6 = g_startSystem_0081176C->field_0389;
  if (iVar6 != 0) {
    param_1->field_0031 = 1;
    param_1->field_0025 = iVar6;
    /* ST_CALLSITE[005C5E2C]: CALL dword ptr [EDX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
    (*STField<code **>(param_1->field_000C,0x0000)[6])(&param_1->field_0x1d);
  }
  /* ST_CALLSITE[005C5E33]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  STStructuralVirtualCall<undefined4>(param_1, 0x2C);
  return;
}

