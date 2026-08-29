#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004845E0 @ 004851C1 -> read as EAX on
   every CFG path | 004845E0 @ 004856AE -> read as EAX on every CFG path | 004C21A0 @ 004C2483 ->
   read as EAX on every CFG path | 004C21A0 @ 004C255E -> read as EAX on every CFG path | 004EA530 @
   004EA5CA -> read as EAX on every CFG path */

int __thiscall FUN_004e8b10(void *this,uint param_1)

{
  byte bVar1;
  int iVar3;
  int iVar2;
  uint uVar4;
  bool bVar5;

  uVar4 = param_1;
  if ((7 < param_1) ||
     ((g_playSystem_00802A38 != nullptr &&
      (7 < g_bulkInitializedRecords_008087C7[param_1].field_0022)))) {
    return 0;
  }
  /* ST_CALLSITE[004E8B44]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar3 = STStructuralVirtualCall<undefined4>(this, 0x2C);
  if (iVar3 == 0x37) {
    if (param_1 == STField<uint>(this,0x24)) {
      return 1;
    }
    return 0;
  }
  /* ST_CALLSITE[004E8B63]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar3 = STStructuralVirtualCall<undefined4>(this, 0x2C);
  if (iVar3 != 0x6c) {
    return 0;
  }

  iVar2 = thunk_FUN_004e9930(this);
  if (iVar2 == 0) {
    return 0;
  }

  iVar3 = thunk_FUN_004e60d0(STField<int>(this,0x24),0x62);
  if (iVar3 == 0) {
    return 1;
  }
  param_1 = (uint)STField<byte>(this,0x24);
  if (DAT_00808a8f != '\0') {
    bVar5 = g_bulkInitializedRecords_008087C7[param_1].field_0023 !=
            g_bulkInitializedRecords_008087C7[uVar4 & 0xff].field_0023;
    goto LAB_004e8c3b;
  }
  if ((byte)uVar4 == STField<byte>(this,0x24)) {
LAB_004e8c30:
    iVar3 = 0;
  }
  else {
    uVar4 = uVar4 & 0xff;
    bVar1 = g_playerRelationMatrix[uVar4][param_1];
    if ((bVar1 == 0) && (g_playerRelationMatrix[param_1][uVar4] == 0)) {
      iVar3 = -2;
    }
    else if ((bVar1 == 1) && (g_playerRelationMatrix[param_1][uVar4] == 0)) {
      iVar3 = -1;
    }
    else if ((bVar1 == 0) && (g_playerRelationMatrix[param_1][uVar4] == 1)) {
      iVar3 = 1;
    }
    else {
      if ((bVar1 != 1) || (g_playerRelationMatrix[param_1][uVar4] != 1)) goto LAB_004e8c30;
      iVar3 = 2;
    }
  }
  bVar5 = iVar3 < 0;
LAB_004e8c3b:
  if (!bVar5) {
    return 1;
  }
  return 0;
}

