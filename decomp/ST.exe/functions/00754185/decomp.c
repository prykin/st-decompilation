#include "../../pseudocode_runtime.h"


/* WARNING: Unknown calling convention */
/* [STAbiConsistencyApplier] ebp_context_register target=function:-1: prototype=void
   FUN_00754185(void * context) previous_return_type=/undefined Evidence: incoming EBP is
   dereferenced before any EBP definition; all current explicit parameters are generic ECX/EDX
   words; ECX/EDX are overwritten or preserved without semantic incoming use; return=/void;
   caller_return_uses=0, ignored=1 */

void FUN_00754185(AnonShape_00754185_34BF31BE *context)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_ECX;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  int *piVar10;
  undefined1 *puVar11;

  puVar9 = (undefined2 *)&context[0x19f].field_0x20;
  for (iVar6 = 0x2000; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0x4000;
    puVar9 = puVar9 + 1;
  }
  puVar9 = (undefined2 *)&context[0x6c].field_0xe;
  for (iVar6 = 0x3001; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0x4000;
    puVar9 = puVar9 + 1;
  }
  piVar10 = &context[2].field_0030;
  for (iVar6 = 0x20fc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)piVar10 = 0;
    piVar10 = (int *)((int)piVar10 + 1);
  }
  context->field_004C = 1;
  context->field_0048 = (int)(context + 1);
  context->field_004E = 0;
  context->field_0040 = 0;
  puVar11 = (undefined1 *)((int)&context[0x65].field_0040 + 3);
  iVar6 = 0xfd;
  do {
    while( true ) {
      puVar3 = &context->field_0x20;
      *(int *)puVar3 = *(int *)puVar3 + -1;
      if (*(int *)puVar3 != 0) break;
      iVar4 = FUN_00753fd0((AnonShape_00753FD0_4E1BB8DD *)context);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar6 = extraout_ECX;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar7 = extraout_ECX;
      if (iVar4 == 0) goto LAB_007541f2;
    }
    puVar3 = (undefined1 *)context->field_0018;
    context->field_0018 = context->field_0018 + 1;
    *puVar11 = *puVar3;
    puVar11 = puVar11 + 1;
    iVar6 = iVar6 + -1;
    iVar7 = 0;
  } while (iVar6 != 0);
LAB_007541f2:
  context->field_0030 = 0xfd - iVar7;
  uVar8 = 0;
  FUN_007540ac();
LAB_00754208:
  uVar5 = context->field_002C;
  if (context->field_0030 < (int)uVar5) {
    uVar5 = context->field_0030;
    context->field_002C = uVar5;
  }
  if ((uVar5 < 2) || ((uVar5 < 3 && (0xff < context->field_0034)))) {
    context->field_002C = 1;
    FUN_00754047();
    FUN_0075405f();
  }
  else {
    FUN_00754047();
    if ((context->field_002C < 6) && (context->field_0034 < 0x100)) {
      FUN_00754047();
      FUN_00754047();
      FUN_00754047();
      FUN_0075405f();
    }
    else {
      FUN_00754047();
      FUN_0075405f();
      if (context->field_002C < 10) {
        FUN_0075405f();
      }
      else {
        FUN_0075405f();
        FUN_0075405f();
      }
    }
  }
  piVar10 = &context->field_0040;
  iVar6 = *piVar10;
  *piVar10 = *piVar10 - context->field_002C;
  if (SBORROW4(iVar6,context->field_002C) != *piVar10 < 0) {
    do {
      context->field_0040 = context->field_0040 + 0x10;
    } while (context->field_0040 < 0);
  }
  do {
    FUN_0075415c();
    do {
      puVar11 = &context->field_0x20;
      *(int *)puVar11 = *(int *)puVar11 + -1;
      if (*(int *)puVar11 != 0) {
        puVar11 = (undefined1 *)context->field_0018;
        context->field_0018 = context->field_0018 + 1;
        uVar2 = *puVar11;
        *(undefined1 *)((int)&context[2].field_0030 + uVar8) = uVar2;
        if (uVar8 < 0xfc) {
          (&context[0x69].field_0x0)[uVar8] = uVar2;
        }
        goto LAB_00754308;
      }
      iVar6 = FUN_00753fd0((AnonShape_00753FD0_4E1BB8DD *)context);
    } while (iVar6 != 0);
    context->field_0030 = context->field_0030 + -1;
LAB_00754308:
    uVar8 = uVar8 + 1 & 0x1fff;
    puVar1 = &context->field_002C;
    *puVar1 = *puVar1 - 1;
    if (*puVar1 == 0) break;
    FUN_00754068();
  } while( true );
  FUN_007540ac();
  if ((short)context->field_0030 < 1) {
    if ((context->field_003F & 0x80) == 0) {
      FUN_00754047();
      FUN_00754047();
      FUN_0075405f();
      FUN_0075405f();
      FUN_0075405f();
      FUN_00753ff7();
      FUN_00753fa7();
    }
    return;
  }
  goto LAB_00754208;
}

