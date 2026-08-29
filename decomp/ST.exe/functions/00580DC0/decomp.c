#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_00580dc0(STJellyGunC *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  RecoveredRecordView_004E0250_21BF6808 *pRVar4;
  int iVar5;
  uint uVar6;
  uVar6 = 0;

  iVar5 = thunk_FUN_005809e0((short)*(undefined4 *)&param_1->field_0x245,
                             (short)*(undefined4 *)&param_1->field_0x249,
                             *(int *)&param_1->field_0x24d,*(int *)&param_1->field_0x255);
  if (iVar5 != 0) {
    /* ST_CALLSITE[00580DFE]: CALL 0x00403cd8; direct=00403CD8 STAllPlayersC::RegisterDeposit */
    iVar5 = STAllPlayersC::RegisterDeposit(g_allPlayers_007FA174,0xffff,param_1);
    if (iVar5 != 0) {

      thunk_FUN_00580380((STResourceC *)param_1);
      return 0;
    }
    *(undefined4 *)&param_1->field_0x25d = 0;

    thunk_FUN_004d84e0((int)param_1);
    sVar1 = *(short *)&param_1->field_0x24d;
    sVar2 = *(short *)&param_1->field_0x249;
    sVar3 = *(short *)&param_1->field_0x245;
    uVar6 = 1;
    if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
        ((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)))) &&
       ((sVar1 < g_worldGrid.sizeZ &&
        (pRVar4 = (RecoveredRecordView_004E0250_21BF6808 *)
                  STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[0], pRVar4 != nullptr)))
       ) {
      /* ST_CALLSITE[00580EA0]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      iVar5 = STStructuralVirtualCall<undefined4>(pRVar4, 0x2C);
      /* ST_CALLSITE[00580EAC]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      if (((iVar5 != 0x39) && (iVar5 = STStructuralVirtualCall<undefined4>(pRVar4, 0x2C), iVar5 != 0x4f)) &&
         /* ST_CALLSITE[00580EB8]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
         (iVar5 = STStructuralVirtualCall<undefined4>(pRVar4, 0x2C), iVar5 != 0x5e)) {
        return 1;
      }
      thunk_FUN_004e0250(pRVar4);
    }
  }
  return uVar6;
}

