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
  int iVar7;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_ECX;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  int *piVar11;
  undefined1 *puVar12;

  puVar10 = (undefined2 *)&context[0x19f].field_0x20;
  for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0x4000;
    puVar10 = puVar10 + 1;
  }
  puVar10 = (undefined2 *)&context[0x6c].field_0xe;
  for (iVar7 = 0x3001; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0x4000;
    puVar10 = puVar10 + 1;
  }
  piVar11 = &context[2].field_0030;
  for (iVar7 = 0x20fc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)piVar11 = 0;
    piVar11 = (int *)((int)piVar11 + 1);
  }
  context->field_004C = 1;
  context->field_0048 = (int)(context + 1);
  context->field_004E = 0;
  context->field_0040 = 0;
  puVar12 = (undefined1 *)((int)&context[0x65].field_0040 + 3);
  iVar7 = 0xfd;
  do {
    while( true ) {
      puVar3 = &context->field_0x20;
      *(int *)puVar3 = *(int *)puVar3 + -1;
      if (*(int *)puVar3 != 0) break;
      iVar4 = FUN_00753fd0((AnonShape_00753FD0_4E1BB8DD *)context);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      iVar7 = extraout_ECX;
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      iVar8 = extraout_ECX;
      if (iVar4 == 0) goto LAB_007541f2;
    }
    puVar3 = (undefined1 *)context->field_0018;
    context->field_0018 = context->field_0018 + 1;
    *puVar12 = *puVar3;
    puVar12 = puVar12 + 1;
    iVar7 = iVar7 + -1;
    iVar8 = 0;
  } while (iVar7 != 0);
LAB_007541f2:
  context->field_0030 = 0xfd - iVar8;
  uVar9 = 0;
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
  piVar11 = &context->field_0040;
  iVar7 = *piVar11;
  *piVar11 = *piVar11 - context->field_002C;
  if (SBORROW4(iVar7,context->field_002C) != *piVar11 < 0) {
    do {
      context->field_0040 = context->field_0040 + 0x10;
    } while (context->field_0040 < 0);
  }
  do {
    FUN_0075415c();
    do {
      puVar12 = &context->field_0x20;
      *(int *)puVar12 = *(int *)puVar12 + -1;
      if (*(int *)puVar12 != 0) {
        puVar12 = (undefined1 *)context->field_0018;
        context->field_0018 = context->field_0018 + 1;
        uVar2 = *puVar12;
        *(undefined1 *)((int)&context[2].field_0030 + uVar9) = uVar2;
        if (uVar9 < 0xfc) {
          (&context[0x69].field_0x0)[uVar9] = uVar2;
        }
        goto LAB_00754308;
      }
      iVar6 = FUN_00753fd0((AnonShape_00753FD0_4E1BB8DD *)context);
    } while (iVar6 != 0);
    context->field_0030 = context->field_0030 + -1;
LAB_00754308:
    uVar9 = uVar9 + 1 & 0x1fff;
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

