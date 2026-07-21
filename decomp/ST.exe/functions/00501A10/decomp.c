#include "../../pseudocode_runtime.h"


void __fastcall FUN_00501a10(AnonShape_00501A10_7BD31715 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;

  puVar1 = &param_1->field_0x434;
  memset((void *)puVar1, 0, 0x118); /* compiler bulk-zero initialization */
  if (param_1->field_0B9E == '\x01') {
    if (DAT_0080874e == '\x03') {
      if (param_1->field_0B99 == 0x1a) {
        *(int *)puVar1 = param_1->field_0048 + 0x3c;
        param_1->field_0438 = param_1->field_00A0 + 0x84;
        param_1->field_043C = 0x55;
        param_1->field_0440 = 0xe;
        param_1->field_044C = 0x2ef3;
      }
      param_1->field_0450 = param_1->field_0048 + 4;
      param_1->field_0454 = param_1->field_00A0 + 8;
      param_1->field_0458 = 100;
      param_1->field_045C = 0x3c;
      uVar2 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)param_1->field_077C,0);
      param_1->field_0460 = uVar2;
      param_1->field_0464 = param_1->field_0458;
      param_1->field_0468 = 0x4e87;
      param_1->field_046C = param_1->field_0048 + 2;
      param_1->field_0470 = param_1->field_00A0 + 6;
      param_1->field_0474 = 0x20;
      param_1->field_0478 = 0x35;
      uVar2 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)param_1->field_077C,2);
      param_1->field_047C = uVar2;
      param_1->field_0484 = 0x2ef0;
      param_1->field_0480 = param_1->field_0474;
      return;
    }
    switch(param_1->field_0B99) {
    case 8:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x25:
      iVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)param_1->field_02B2,0);
      param_1->field_043C = *(undefined4 *)(iVar3 + 4);
      iVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)param_1->field_02B2,0);
      param_1->field_0440 = *(undefined4 *)(iVar3 + 8);
      *(int *)puVar1 =
           (*(int *)(param_1->field_018C + 4) - param_1->field_043C) / 2 + param_1->field_0048;
      param_1->field_0438 = param_1->field_00A0 + 0x50;
    }
    switch(param_1->field_0B99) {
    case 8:
    case 0x14:
      param_1->field_044C = 0x2ef3;
      break;
    case 0x16:
    case 0x17:
      param_1->field_044C = 0x2ef0;
    }
    param_1->field_0450 = param_1->field_0044;
    param_1->field_0454 = param_1->field_009C;
    param_1->field_0458 = param_1->field_0070;
    param_1->field_045C = param_1->field_00C8;
    param_1->field_0468 = 0x4e87;
  }
  return;
}

