#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00754FF8 MOV DX,word ptr
   [EBP + 0x10] */

uint FUN_00754fd0(AnonShape_00754FD0_6B521B56 *param_1,undefined4 param_2,ushort param_3)

{
  AnonNested_AnonShape_00754FD0_6B521B56_000C_1591C729 *pAVar1;
  AnonNested_AnonShape_00754FD0_6B521B56_0008_2A163446 *pAVar2;
  int iVar3;
  int iVar2;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  byte *puVar7;

  pAVar1 = (AnonNested_AnonShape_00754FD0_6B521B56_000C_1591C729 *)param_1->field_0008->field_0050;
  param_1->field_000C = pAVar1;
  pAVar1->field_0018 = param_2;
  param_1->field_000C->field_002A = 1;
  param_1->field_000C->field_002E = param_3;
  param_1->field_000C->field_0014 = 1;
  param_1->field_000C->field_001C = 0;
  param_1->field_000C->field_0040 = 0;
  param_1->field_000C->field_0044 = 0xffffffff;
  Library::MSVCRT::FUN_00730c40(&param_1->field_000C->field_0x36,0x7f2ce8);
  iVar2 = FUN_00753b40((AnonShape_00753C80_4C8E695D *)param_1);
  param_1->field_000C->field_0024 = iVar2;
  uVar4 = param_1->field_000C->field_0024;
  if (0 < (int)uVar4) {
    uVar4 = Library::DKW::FMM::FUN_006d4c50
                      ((AnonNested_00757670_0008_104EC36D *)param_1->field_0008,uVar4,
                       (int)(short)param_1->field_0008->field_0016);
    if (uVar4 == 0) {
      pAVar2 = param_1->field_0008;
      iVar3 = param_1->field_000C->field_0024;
      *(uint *)&pAVar2->field_0x8 = *(uint *)&pAVar2->field_0x8 | 0x10;
      puVar6 = (undefined4 *)(*(int *)&pAVar2->field_0x34 + iVar3);
      uVar5 = (uint)(short)param_1->field_0008->field_0016;
      puVar7 = (byte *)(puVar6);
      memset(puVar7, 0, uVar5); /* compiler bulk-zero initialization */
      *puVar6 = 0xffffffff;
      puVar6[1] = 0xffffffff;
      *(undefined2 *)(puVar6 + 2) = 0;
      uVar4 = FUN_00757360((AnonShape_00757360_9C23D284 *)param_1,
                           (AnonShape_00757360_9B4621C9 *)param_1->field_000C);
    }
    else if (0 < (int)uVar4) {
      return uVar4 | 0xffff0000;
    }
  }
  return uVar4;
}

