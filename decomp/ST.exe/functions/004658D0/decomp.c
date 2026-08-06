#include "../../pseudocode_runtime.h"


int __thiscall FUN_004658d0(void *this,int param_1)

{
  int iVar1;
  STGroupBoatC *pSVar2;
  uint uVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset((void *)((int)this + 0x2cc), 0, 0x5c); /* compiler bulk-zero initialization */
    STField<undefined4>(this,0x48f) = STField<undefined4>(this,0x34b);
    STField<undefined4>(this,0x2c4) = 0;
    STField<undefined4>(this,0x497) = 0;
    STBoatC::sub_00481520
              (this,STField<int>(this,199),STField<int>(this,0xcb),STField<int>(this,0xcf));
    thunk_FUN_004601f0(this,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar1 != 0) & 0xfffffffd) + 2;
  }
  if (STField<int>(this,0x497) == 0) {
    iVar1 = thunk_FUN_004601f0(this,2);
    switch(iVar1) {
    case 0:
      pSVar2 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x30));
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar3 = STGroupBoatC::GetPatrolTask
                        (pSVar2,0,CONCAT22(extraout_var_00,STField<undefined2>(this,0x32)),
                         STField<uint>(this,0x48f));
      if (uVar3 == 0) {
        iVar1 = STBoatC::Defence(this,0);
        if (iVar1 == -1) {
          return -1;
        }
        if ((STField<int>(this,0x82e) == 0) && (STField<int>(this,0x48b) == 0xffff)) {
          STBoatC::sub_00481520
                    (this,STField<int>(this,199),STField<int>(this,0xcb),
                     STField<int>(this,0xcf));
          thunk_FUN_004601f0(this,0);
          return 2;
        }
        STField<undefined4>(this,0x497) = 1;
        STField<undefined4>(this,0x493) = 1;
        return 2;
      }
LAB_0046597c:
      STField<undefined4>(this,0x497) = 1;
      STField<undefined4>(this,0x493) = 0;
      iVar1 = STBoatC::Defence(this,0);
      return (-(uint)(iVar1 != -1) & 3) - 1;
    default:
      goto switchD_0046590f_caseD_2;
    case 2:
      break;
    case 3:
      pSVar2 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x30));
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar3 = STGroupBoatC::GetPatrolTask
                        (pSVar2,1,CONCAT22(extraout_var,STField<undefined2>(this,0x32)),
                         STField<uint>(this,0x48f));
      if (uVar3 != 0) goto LAB_0046597c;
      STBoatC::sub_00481520
                (this,STField<int>(this,199),STField<int>(this,0xcb),
                 STField<int>(this,0xcf));
      thunk_FUN_004601f0(this,0);
      break;
    case -1:
      return -1;
    }
  }
  else {
switchD_0046590f_caseD_2:
    if (STField<int>(this,0x497) == 1) {
      iVar1 = STBoatC::Defence(this,2);
      if (iVar1 == -1) {
        return -1;
      }
      if (((STField<int>(this,0x82e) == 0) && (STField<int>(this,0x48b) == 0xffff)) &&
         (STField<int>(this,0x493) == 1)) {
        STField<undefined4>(this,0x497) = 0;
        STBoatC::sub_00481520
                  (this,STField<int>(this,199),STField<int>(this,0xcb),
                   STField<int>(this,0xcf));
        thunk_FUN_004601f0(this,0);
        return 2;
      }
    }
  }
  return 2;
}

