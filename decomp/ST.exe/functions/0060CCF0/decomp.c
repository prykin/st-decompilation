#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=0060CEF0 @ 0060CFCF
   -> TEST TEST EAX,EAX */

int __thiscall
FUN_0060ccf0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  uint uVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;

  uVar1 = 0;
  if (((STField<int>(this,0x244) != 0) && (param_1 < STField<int>(this,0x23c))) &&
     (-1 < param_1)) {
    iVar4 = param_1 * 0x44;
    *(int *)(iVar4 + 0xc + STField<int>(this,0x244)) = param_5;
    *(int *)(iVar4 + 0x10 + STField<int>(this,0x244)) = param_6;
    *(int *)(iVar4 + 0x14 + STField<int>(this,0x244)) = param_7;
    *(int *)(iVar4 + 0x18 + STField<int>(this,0x244)) = param_2;
    *(int *)(iVar4 + 0x1c + STField<int>(this,0x244)) = param_3;
    *(int *)(iVar4 + 0x20 + STField<int>(this,0x244)) = param_4;
    *(int *)(iVar4 + 0x24 + STField<int>(this,0x244)) = param_5 - param_2;
    *(int *)(iVar4 + 0x28 + STField<int>(this,0x244)) = param_6 - param_3;
    *(int *)(iVar4 + 0x2c + STField<int>(this,0x244)) = param_7 - param_4;
    *(undefined4 *)(iVar4 + 0x30 + STField<int>(this,0x244)) = 0;
    *(undefined4 *)(iVar4 + 0x34 + STField<int>(this,0x244)) = 10;
    *(undefined4 *)(iVar4 + 0x38 + STField<int>(this,0x244)) = 0x14;
    puVar2 = (undefined2 *)FUN_006aadd0(param_2,param_3,param_4,param_5,param_6,param_7);
    puVar2 = thunk_FUN_0060cbe0(puVar2,(int *)(iVar4 + 4 + STField<int>(this,0x244)));
    *(undefined2 **)(iVar4 + 8 + STField<int>(this,0x244)) = puVar2;
    piVar3 = thunk_FUN_0062bbc0(param_2,param_3,param_4,param_5,param_6,param_7,0,0,7,0x1e0);
    *(int **)(iVar4 + 0x40 + STField<int>(this,0x244)) = piVar3;
    uVar1 = (uint)(*(int *)(iVar4 + 8 + STField<int>(this,0x244)) != 0);
    *(uint *)(iVar4 + STField<int>(this,0x244) + 0x3c) = g_playSystem_00802A38->field_00E4;
    *(undefined4 *)(iVar4 + STField<int>(this,0x244)) = 1;
  }
  return uVar1;
}

