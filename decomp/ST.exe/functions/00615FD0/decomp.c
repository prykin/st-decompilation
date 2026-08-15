#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00615fd0(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  short local_6;

  iVar2 = 0;
  local_c = 0;
  STField<undefined4>(this,0x248) = 0xffffffff;
  if (param_1 != 1) {
    if (param_1 < 2) {
      return param_2;
    }
    if (3 < param_1) {
      return param_2;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    if ((STField<int *>(this,0x2ff) != nullptr) &&
       (iVar1 = (**(code **)(*STField<int *>(this,0x2ff) + 0xe0))
                          (STField<undefined4>(this,0x303),(int)&param_2 + 2,(int)&param_1 + 2,
                           &local_6,&local_c), iVar1 == 0)) {
      if (STField<int>(this,0x1f7) == 2) {
        if (STField<int>(this,0x2fb) == STField<int>(this,0x207)) {
          thunk_FUN_00601d10((int)STField<short>(this,0x201),STField<int>(this,0x21b),
                             STField<int>(this,0x2ff),(short)STField<undefined4>(this,0x1fb),
                             STField<ushort>(this,0x1ff),0xb0,0x12a);
          iVar2 = 1;
        }
        else {
          thunk_FUN_00601d10((int)STField<short>(this,0x201),STField<int>(this,0x21b),
                             STField<int>(this,0x2ff),(short)STField<undefined4>(this,0x1fb),
                             STField<ushort>(this,0x1ff),0xb0,0x110);
        }
      }
      STField<int>(this,0x30f) = (int)STPiece<2,2>(param_1);
      STField<int>(this,0x22f) = (int)STPiece<2,2>(param_1);
      STField<int>(this,0x30b) = (int)STPiece<2,2>(param_2);
      STField<int>(this,0x313) = (int)local_6;
      STField<undefined4>(this,0x307) = local_c;
      STField<int>(this,0x22b) = (int)STPiece<2,2>(param_2);
      STField<int>(this,0x233) = (int)local_6;
      iVar2 = STGenBombC::LoadImagSpr(this,0,iVar2);
      if (iVar2 != 0) {
        if (STField<int>(this,0x1f7) == 0) {
          thunk_FUN_00617560(this,0x478);
          return 7;
        }
        if (STField<int>(this,0x1f7) != 1) {
          return 7;
        }
        thunk_FUN_00617560(this,0x48c);
        return 7;
      }
    }
    goto LAB_006161d7;
  }
  STField<undefined4>(this,0x22f) = STField<undefined4>(this,0x30f);
  STField<undefined4>(this,0x22b) = STField<undefined4>(this,0x30b);
  STField<undefined4>(this,0x233) = STField<undefined4>(this,0x313);
  STField<undefined4>(this,0x2ff) = 0;
  if (STField<int>(this,0x1f7) == 0) {
    iVar2 = 0x478;
LAB_006161a8:
    thunk_FUN_00617560(this,iVar2);
  }
  else if (STField<int>(this,0x1f7) == 1) {
    iVar2 = 0x48c;
    goto LAB_006161a8;
  }
  iVar2 = STGenBombC::LoadImagSpr(this,0,0);
  if (iVar2 != 0) {
    STField<undefined4>(this,0x307) = local_c;
    return 7;
  }
LAB_006161d7:
  thunk_FUN_0060ec00(this);
  return 9;
}

