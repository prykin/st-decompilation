#include "../../pseudocode_runtime.h"


int __thiscall FUN_004658d0(void *this,int param_1)

{
  int local_EAX_48;
  STGroupBoatC *pSVar1;
  uint uVar2;
  int local_EAX_187;
  int iVar1;
  int local_EAX_382;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset((void *)((int)this + 0x2cc), 0, 0x5c); /* compiler bulk-zero initialization */
    STField<undefined4>(this,0x48f) = STField<undefined4>(this,0x34b);
    STField<undefined4>(this,0x2c4) = 0;
    STField<undefined4>(this,0x497) = 0;
    /* ST_CALLSITE[00465AFD]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
    STBoatC::sub_00481520
              (this,STField<int>(this,199),STField<int>(this,0xcb),STField<int>(this,0xcf));
    /* ST_CALLSITE[00465B05]: CALL 0x00402266; direct=00402266 STBoatC::sub_004601F0 */
    STBoatC::sub_004601F0(this,0);
    /* ST_CALLSITE[00465B0E]: CALL dword ptr [EDX + 0xd8]; [STIndirectCallsiteApplier] exact slot 0xD8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    iVar3 = STStructuralVirtualCall<undefined4>(this, 0xD8);
    return (-(uint)(iVar3 != 0) & 0xfffffffd) + 2;
  }
  if (STField<int>(this,0x497) == 0) {
    /* ST_CALLSITE[00465900]: CALL 0x00402266; direct=00402266 STBoatC::sub_004601F0 */
    local_EAX_48 = STBoatC::sub_004601F0(this,2);
    switch(local_EAX_48) {
    case 0:
      pSVar1 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x30));
      /* ST_CALLSITE[004659C3]: CALL 0x0040547f; direct=0040547F STGroupBoatC::GetPatrolTask */
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar2 = STGroupBoatC::GetPatrolTask
                        (pSVar1,0,CONCAT22(extraout_var_00,STField<undefined2>(this,0x32)),
                         STField<uint>(this,0x48f));
      if (uVar2 == 0) {
        /* ST_CALLSITE[004659CF]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
        iVar1 = STBoatC::Defence(this,0);
        if (iVar1 == -1) {
          return -1;
        }
        if ((STField<int>(this,0x82e) == 0) && (STField<int>(this,0x48b) == 0xffff)) {
          /* ST_CALLSITE[00465A0D]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
          STBoatC::sub_00481520
                    (this,STField<int>(this,199),STField<int>(this,0xcb),
                     STField<int>(this,0xcf));
          /* ST_CALLSITE[00465A15]: CALL 0x00402266; direct=00402266 STBoatC::sub_004601F0 */
          STBoatC::sub_004601F0(this,0);
          return 2;
        }
        STField<undefined4>(this,0x497) = 1;
        STField<undefined4>(this,0x493) = 1;
        return 2;
      }
LAB_0046597c:
      STField<undefined4>(this,0x497) = 1;
      STField<undefined4>(this,0x493) = 0;
      /* ST_CALLSITE[0046598B]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_187 = STBoatC::Defence(this,0);
      return (-(uint)(local_EAX_187 != -1) & 3) - 1;
    default:
      goto switchD_0046590f_caseD_2;
    case 2:
      break;
    case 3:
      pSVar1 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x30));
      /* ST_CALLSITE[00465943]: CALL 0x0040547f; direct=0040547F STGroupBoatC::GetPatrolTask */
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar2 = STGroupBoatC::GetPatrolTask
                        (pSVar1,1,CONCAT22(extraout_var,STField<undefined2>(this,0x32)),
                         STField<uint>(this,0x48f));
      if (uVar2 != 0) goto LAB_0046597c;
      /* ST_CALLSITE[00465963]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
      STBoatC::sub_00481520
                (this,STField<int>(this,199),STField<int>(this,0xcb),
                 STField<int>(this,0xcf));
      /* ST_CALLSITE[0046596B]: CALL 0x00402266; direct=00402266 STBoatC::sub_004601F0 */
      STBoatC::sub_004601F0(this,0);
      break;
    case -1:
      return -1;
    }
  }
  else {
switchD_0046590f_caseD_2:
    if (STField<int>(this,0x497) == 1) {
      /* ST_CALLSITE[00465A4E]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_382 = STBoatC::Defence(this,2);
      if (local_EAX_382 == -1) {
        return -1;
      }
      if (((STField<int>(this,0x82e) == 0) && (STField<int>(this,0x48b) == 0xffff)) &&
         (STField<int>(this,0x493) == 1)) {
        STField<undefined4>(this,0x497) = 0;
        /* ST_CALLSITE[00465AA6]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
        STBoatC::sub_00481520
                  (this,STField<int>(this,199),STField<int>(this,0xcb),
                   STField<int>(this,0xcf));
        /* ST_CALLSITE[00465AAE]: CALL 0x00402266; direct=00402266 STBoatC::sub_004601F0 */
        STBoatC::sub_004601F0(this,0);
        return 2;
      }
    }
  }
  return 2;
}

