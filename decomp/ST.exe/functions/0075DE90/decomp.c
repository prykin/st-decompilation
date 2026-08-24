#include "../../pseudocode_runtime.h"


void FUN_0075de90(AnonShape_0075DF10_BA4C6604 *param_1)

{
  AnonNested_0075DF10_01B2_1F0F9C79 *pAVar1;
  uint uVar2;
  pAVar1 = (AnonNested_0075DF10_01B2_1F0F9C79 *)
           /* ST_CALLSITE[0075DE9F]: CALL dword ptr [EAX] */
           (*STField<code *>(param_1->field_0000,0x0000))(param_1,1,0x30);
  param_1->field_01B2 = pAVar1;
  *(code **)pAVar1 = Library::DKW::JPG::FUN_0075dfe0;
  *(undefined4 *)&pAVar1->field_0x8 = 0;
  *(int *)&pAVar1[1].field_0x8 = *(int *)&param_1->field_0x70 * *(int *)&param_1->field_0x68;
  if (*(int *)&param_1->field_0x126 == 2) {
    uVar2 = *(undefined4 *)&pAVar1[1].field_0x8;
    *(code **)&pAVar1->field_0x4 = Library::DKW::JPG::FUN_0075e000;
    *(code **)&pAVar1->field_0xc = Library::DKW::JPG::FUN_0075e260;
    /* ST_CALLSITE[0075DEE0]: CALL dword ptr [EDX + 0x4] */
    uVar2 = (*STField<code *>(param_1->field_0000,0x0004))(param_1,1,uVar2);
    *(undefined4 *)(pAVar1 + 1) = uVar2;
    FUN_0075df10(param_1);
    return;
  }
  *(code **)&pAVar1->field_0x4 = Library::DKW::JPG::FUN_0075e0c0;
  *(code **)&pAVar1->field_0xc = Library::DKW::JPG::FUN_0075e100;
  *(undefined4 *)(pAVar1 + 1) = 0;
  FUN_0075df10(param_1);
  return;
}

