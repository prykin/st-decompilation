#include "../../pseudocode_runtime.h"


void __thiscall FUN_007109f0(void *this,AnonShape_007109F0_BD33A2FF *param_1)

{
  if (param_1 != nullptr) {
    STField<undefined4>(this,0x44) = *(undefined4 *)param_1;
    STField<undefined4>(this,0x48) = *(undefined4 *)((int)&param_1->field_0001 + 3);
    STField<undefined4>(this,0x4c) = *(undefined4 *)&param_1->field_0x8;
    STField<undefined4>(this,0x50) = *(undefined4 *)((int)&param_1->field_000B + 1);
    STField<undefined4>(this,0x54) = *(undefined4 *)&param_1->field_0x10;
    STField<undefined4>(this,0x58) = *(undefined4 *)&param_1->field_0x14;
    STField<undefined4>(this,0x5c) = *(undefined4 *)&param_1->field_0x18;
    STField<undefined4>(this,0x60) = *(undefined4 *)&param_1->field_0x1c;
    STField<undefined4>(this,100) = *(undefined4 *)&param_1->field_0x20;
    STField<undefined4>(this,0x68) = *(undefined4 *)&param_1->field_0x24;
    STField<undefined4>(this,0x6c) = *(undefined4 *)&param_1->field_0x28;
    STField<undefined2>(this,0x70) = *(undefined2 *)&param_1->field_0x2c;
    STField<undefined4>(this,0x72) = param_1->field_002E;
    STField<undefined4>(this,0x76) = param_1->field_0032;
    STField<undefined4>(this,0x7a) = param_1->field_0036;
    STField<undefined4>(this,0x7e) = param_1->field_003A;
    STField<undefined2>(this,0x9e) = param_1->field_003E;
    STField<undefined4>(this,0x82) = *(undefined4 *)(param_1 + 1);
    STField<undefined4>(this,0x96) = *(undefined4 *)((int)&param_1[1].field_0001 + 3);
  }
  return;
}

