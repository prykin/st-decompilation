#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_00510c80(AnonShape_00510C80_2C2DC38C *param_1)

{
  undefined4 uVar1;
  int iVar2;

  sub_006E5FB0(param_1);
  param_1->field_005C = 0;
  param_1->field_0044 = 0;
  param_1->field_003C = 0;
  param_1->field_0060 = 0xffffffff;
  param_1->field_0064 = 3;
  param_1->field_0068 = 0;
  param_1->field_0172 = 2;
  param_1->field_0178 = 0;
  *(VTable_0079AC48 **)param_1 = &VTable_0079AC48;
  param_1->field_0040 = 500;
  param_1->field_0048 = 400;
  param_1->field_01A0 = 0;
  param_1->field_01A2 = 0;
  param_1->field_01A1 = 0;
  param_1->field_01A7 = 0;
  param_1->field_01A3 = 0;
  param_1->field_01DC = 0;
  param_1->field_01E8 = 0;
  param_1->field_01E4 = 0;
  param_1->field_01E0 = 0;
  param_1->field_0218 = 0;
  param_1->field_01EC = 0;
  memset(&param_1->field_0x1f0, 0, 0x28); /* compiler bulk-zero initialization */
  iVar2 = 0;
  param_1->field_017C = 0;
  memset(&param_1->field_0x180, 0, 0x1c); /* compiler bulk-zero initialization */
  param_1->field_019C = 0;
  param_1->field_01CB = 0;
  param_1->field_01BB = 0;
  param_1->field_01B3 = 0;
  uVar1 = *(undefined4 *)structHelp_exref;
  param_1->field_01CF = 0xffffffff;
  param_1->field_01C7 = uVar1;
  param_1->field_01BF = 0;
  param_1->field_01B7 = 0;
  param_1->field_01D7 = 0;
  param_1->field_01DB = 0;
  param_1->field_024C = 0;
  param_1->field_021C = 0;
  param_1->field_0238 = 0;
  param_1->field_0248 = 0;
  param_1->field_022C = 0;
  param_1->field_0228 = 0;
  param_1->field_0234 = 0;
  param_1->field_0230 = 0;
  param_1->field_0220 = 0;
  param_1->field_0224 = 0;
  param_1->field_0244 = 0;
  param_1->field_0240 = 0;
  param_1->field_023C = 0;
  param_1->field_01D3 = 0;
  return (undefined4 *)param_1;
}

