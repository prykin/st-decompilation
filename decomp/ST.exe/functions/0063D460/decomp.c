#include "../../pseudocode_runtime.h"


void __thiscall
FUN_0063d460(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;

  if (param_3 < 0) {
    param_3 = 0;
  }
  if (param_4 == 10) {
    memset((void *)((int)this + 0x2a4), 0, 0x92); /* compiler bulk-zero initialization */
    iVar2 = 0;
    *(undefined4 *)((int)this + 0x2a8) = param_2;
    *(undefined4 *)((int)this + 0x2a4) = param_1;
    *(int *)((int)this + 0x2ac) = param_3;
    *(undefined4 *)((int)this + 0x2b0) = 0x6ac;
    *(undefined4 *)((int)this + 0x2b4) = 0x109;
    *(undefined1 *)((int)this + 0x328) = 4;
    *(undefined4 *)((int)this + 700) = 0x32;
    *(undefined4 *)((int)this + 0x2c0) = 0;
  }
  else {
    if (param_4 == 0xb) {
      memset((void *)((int)this + 0x2a4), 0, 0x92); /* compiler bulk-zero initialization */
      *(undefined4 *)((int)this + 0x2a8) = param_2;
      *(undefined4 *)((int)this + 0x2a4) = param_1;
      *(undefined4 *)((int)this + 0x2b4) = 0x32;
      *(undefined4 *)((int)this + 700) = 0x32;
      *(int *)((int)this + 0x2ac) = param_3;
      *(undefined4 *)((int)this + 0x2b0) = 0x3ed;
      *(undefined1 *)((int)this + 0x328) = 4;
      *(undefined4 *)((int)this + 0x2c0) = 0;
      uVar1 = PTR_00802a38->field_00E4;
      *(undefined4 *)((int)this + 0x33e) = 0;
      *(uint *)((int)this + 0x32e) = uVar1;
      return;
    }
    if (param_4 == 0xc) {
      *(undefined4 *)((int)this + 0x2a8) = param_2;
      iVar2 = *(int *)((int)this + 0x2c0);
      *(undefined4 *)((int)this + 0x2a4) = param_1;
      *(int *)((int)this + 0x2ac) = param_3;
      *(undefined4 *)((int)this + 0x2b4) = *(undefined4 *)((int)this + 0x2b8);
      *(undefined4 *)((int)this + 0x2b0) = 0x50;
      *(undefined4 *)((int)this + 0x2c0) = 0;
      *(undefined1 *)((int)this + 0x328) = 4;
      *(undefined4 *)((int)this + 700) = 0x24;
      *(int *)((int)this + 0x32a) = (iVar2 * 0x23) / 5;
      *(uint *)((int)this + 0x32e) = PTR_00802a38->field_00E4;
      return;
    }
  }
  return;
}

