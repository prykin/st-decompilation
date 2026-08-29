#include "../../pseudocode_runtime.h"


void __fastcall FUN_00694100(RecoveredRecord_00694100_0F40F2B2 *param_1)

{
  int iVar1;
  uint uVar2;

  uVar2 = 0;
  do {

    iVar1 = thunk_FUN_00694200(param_1,uVar2);
    if (iVar1 == 0) {
      param_1->field_199D = -1;
      while( true ) {
        iVar1 = param_1->field_199D + 1;
        param_1->field_199D = iVar1;
        while( true ) {
          if (7 < iVar1) goto LAB_0069417a;

          iVar1 = thunk_FUN_00693e60(param_1,iVar1);
          if (iVar1 != 0) break;
          iVar1 = param_1->field_199D + 1;
          param_1->field_199D = iVar1;
        }

        iVar1 = thunk_FUN_00693e60(param_1,param_1->field_199D);
        if (iVar1 == 0) break;
        if ((int)uVar2 < (int)(uint)STField<byte>(iVar1,0x23)) {
          ((byte *)iVar1)[0x23] = STField<byte>(iVar1,0x23) - 1;
        }
      }
    }
LAB_0069417a:
    uVar2 = uVar2 + 1;
    if (7 < (int)uVar2) {
      return;
    }
  } while( true );
}

