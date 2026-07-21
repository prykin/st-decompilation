#include "../../pseudocode_runtime.h"


void __fastcall FUN_00506040(AnonShape_00506040_A874E362 *param_1)

{
  undefined4 uVar1;

  memset(&param_1->field_0x54c, 0, 0x118); /* compiler bulk-zero initialization */
  if (param_1->field_0BFA == '\x01') {
    if (DAT_0080874e == '\x03') {
      param_1->field_0568 = param_1->field_0050 + 0x81;
      param_1->field_056C = param_1->field_00A8 + 8;
      param_1->field_0570 = 100;
      param_1->field_0574 = 0x3c;
      uVar1 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)param_1->field_077C,1);
      param_1->field_0578 = uVar1;
      param_1->field_057C = param_1->field_0570;
      param_1->field_0580 = 0x4e87;
      param_1->field_0584 = param_1->field_0050 + 199;
      param_1->field_0588 = param_1->field_00A8 + 6;
      param_1->field_058C = 0x20;
      param_1->field_0590 = 0x35;
      uVar1 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)param_1->field_077C,3);
      param_1->field_0594 = uVar1;
      param_1->field_0598 = param_1->field_058C;
      param_1->field_059C = 0x2ef0;
      return;
    }
    param_1->field_0568 = param_1->field_0054;
    param_1->field_056C = param_1->field_00AC;
    param_1->field_0570 = param_1->field_0080;
    param_1->field_0574 = param_1->field_00D8;
    param_1->field_0580 = 0x4e87;
  }
  return;
}

