#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00754FF8 MOV DX,word ptr
   [EBP + 0x10] */

uint FUN_00754fd0(AnonShape_00754FD0_6B521B56 *param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  int iVar3;
  int iVar2;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte *puVar7;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1->field_0008 + 0x50);
  param_1->field_000C = iVar1;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  *(undefined2 *)(param_1->field_000C + 0x2a) = 1;
  *(ushort *)(param_1->field_000C + 0x2e) = param_3;
  *(undefined4 *)(param_1->field_000C + 0x14) = 1;
  *(undefined4 *)(param_1->field_000C + 0x1c) = 0;
  *(undefined4 *)(param_1->field_000C + 0x40) = 0;
  *(undefined4 *)(param_1->field_000C + 0x44) = 0xffffffff;
  Library::MSVCRT::FUN_00730c40((undefined1 *)(param_1->field_000C + 0x36),0x7f2ce8);
  iVar2 = FUN_00753b40((AnonShape_00753C80_4C8E695D *)param_1);
  *(int *)(param_1->field_000C + 0x24) = iVar2;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar4 = *(uint *)(param_1->field_000C + 0x24);
  if (0 < (int)uVar4) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar4 = Library::DKW::FMM::FUN_006d4c50
                      (param_1->field_0008,uVar4,(int)*(short *)(param_1->field_0008 + 0x16));
    if (uVar4 == 0) {
      iVar1 = param_1->field_0008;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = *(int *)(param_1->field_000C + 0x24);
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x10;
      puVar6 = (undefined4 *)(*(int *)(iVar1 + 0x34) + iVar3);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar5 = (uint)*(short *)(param_1->field_0008 + 0x16);
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

