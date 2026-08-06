#include "../../pseudocode_runtime.h"


int FUN_00748721(AnonShape_00748721_F11EED2A *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;

  piVar1 = param_2;
  if (param_2 == nullptr) {
    iVar2 = -0x7fffbffd;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*(int *)&param_1[-3].field_0x28 + 0x38))();
    if (iVar2 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)*piVar1)(piVar1,&DAT_007a1b70,&param_2);
      if (iVar2 < 0) {
        param_1->field_0010 = 0x30;
        param_1->field_0014 = 0;
        param_1->field_0030 = 0;
        param_1->field_0018 = 0;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1);
        if (iVar2 == 0) {
          param_1->field_0018 = param_1->field_0018 | 4;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
        if (iVar2 == 0) {
          param_1->field_0018 = param_1->field_0018 | 2;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
        if (iVar2 == 0) {
          param_1->field_0018 = param_1->field_0018 | 1;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,&param_1->field_0x20,&param_1->field_0x28);
        if (-1 < iVar2) {
          *(ushort *)&param_1->field_0018 = *(ushort *)&param_1->field_0018 | 0x110;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,&param_1->field_0034);
        if (iVar2 == 0) {
          param_1->field_0018 = param_1->field_0018 | 8;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 0xc))(piVar1,&param_1->field_0x38);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1);
        param_1->field_001C = uVar3;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar3 = (**(code **)(*piVar1 + 0x10))(piVar1);
        param_1->field_003C = uVar3;
      }
      else {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*param_2 + 0x4c))(param_2,0x30,&param_1->field_0010);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_2 + 8))(param_2);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((*(byte *)&param_1->field_0018 & 8) == 0) ||
         (iVar2 = (**(code **)(*(int *)&param_1[-3].field_0x28 + 0x20))(param_1->field_0034),
         iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        param_1[-1].field_0014 = 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(param_1[-3].field_0034 + 0x38))(&param_1[-3].field_0034);
        FUN_00747406((void *)param_1[-1].field_0018,3,(int *)0x8004022a,0);
        iVar2 = -0x7ffbfe00;
      }
    }
  }
  return iVar2;
}

