#include "../../pseudocode_runtime.h"


int __thiscall FUN_00747d92(void *this,int *param_1,char *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  void *local_8;

  piVar1 = param_3;
  local_8 = this;
  /* ST_CALLSITE[00747DA3]: CALL dword ptr [EAX + 0x14] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar2 = (**(code **)(*param_3 + 0x14))(param_3);
  if (-1 < iVar2) {
    int * param_3_after_write = nullptr; /* compiler stack-slot lifetime split */
    local_8 = nullptr;
    /* ST_CALLSITE[00747DC3]: CALL dword ptr [EAX + 0xc] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,1,&param_3_after_write,&local_8);
    iVar2 = 0;
    while (iVar4 == 0) {
      if ((param_2 == nullptr) ||
         (iVar4 = FUN_0074bbc6(param_3_after_write,(AnonShape_0074BBC6_71B34D24 *)param_2), iVar4 != 0)) {
        iVar3 = FUN_00747ce5(this,param_1);
        if (((iVar3 < 0) && (((-1 < iVar2 && (iVar3 != -0x7fffbffb)) && (iVar3 != -0x7ff8ffa9)))) &&
           (iVar3 != -0x7ffbfdd6)) {
          iVar2 = iVar3;
        }
      }
      else {
        iVar3 = -0x7ffbfdf9;
      }
      FUN_0074bc50(param_3_after_write);
      if (iVar3 == 0) {
        return 0;
      }
      /* ST_CALLSITE[00747E31]: CALL dword ptr [EAX + 0xc] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,1,&param_3_after_write,&local_8);
    }
    if (iVar2 == 0) {
      iVar2 = -0x7ffbfdf9;
    }
  }
  return iVar2;
}

