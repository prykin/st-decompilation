#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::CreateTab
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0052FB00 @ 00530B86 -> read as EAX on
   every CFG path | 0052FB00 @ 00530BB8 -> read as EAX on every CFG path | 0052FB00 @ 00530BE4 ->
   read as EAX on every CFG path | 0052FB00 @ 00530F57 -> read as EAX on every CFG path */

int __thiscall
UPanelTy::CreateTab(UPanelTy *this,byte param_1,byte param_2,int param_3,int param_4,uint param_5,
                   uint param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  byte bVar2;
  int iVar3;
  int iVar5;
  int iVar4;
  int iVar6;
  uint *puVar7;
  uint uVar9;
  uint local_510 [280];
  InternalExceptionFrame local_b0;
  uint local_6c [4];
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  UPanelTy *local_c;
  int local_8;

  local_8 = 0;
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_c = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
  if (iVar3 == 0) {
    memset(local_6c, 0, 0x58); /* compiler bulk-zero initialization */
    iVar4 = 0;
    memset(local_510, 0, 0x460); /* compiler bulk-zero initialization */
    bVar2 = 0;
    if (param_1 != 0) {
      local_14 = local_c->field_005C;
      iVar4 = 0;
      local_10 = 1;
      puVar7 = local_510 + 1;
      uVar9 = local_c->field_003C + param_3;
      do {
        puVar7[-1] = local_10;
        iVar6 = local_14;
        *puVar7 = (uint)(bVar2 == param_2);
        puVar7[2] = uVar9;
        if (iVar6 == 0) {
          iVar6 = -local_c->field_0048;
        }
        else {
          iVar6 = local_c->field_0044;
        }
        puVar7[3] = iVar6 + iVar4 + param_4;
        puVar7[4] = param_5;
        puVar7[5] = param_6;
        bVar2 = bVar2 + 1;
        local_10 = local_10 + 1;
        iVar4 = iVar4 + param_8;
        uVar9 = uVar9 + param_7;
        puVar7 = puVar7 + 0x1c;
      } while (bVar2 < param_1);
    }
    local_24 = local_510;
    local_5c = local_c->field_0008;
    local_20 = param_2 + 1;
    local_34 = param_10;
    local_58 = 2;
    local_38 = 2;
    local_6c[0] = 1;
    local_6c[1] = 0;
    local_54 = param_9;
    local_1c = 1;
    local_18 = 1;
    local_3c = local_5c;
    /* ST_CALLSITE[0053E30F]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    STStructuralVirtualCall<void>(STField<int *>(local_c,0xC), 0x8, 5, &local_8, 0, local_6c, 0);
    g_currentExceptionFrame = local_b0.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_b0.previous;

  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0xd1,0,iVar3,"%s",
                             "UPanelTy::CreateTab");
  if (iVar5 == 0) {
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\specpan.cpp",0xd1);
    return -1;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

