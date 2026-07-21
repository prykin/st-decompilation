#include "../../pseudocode_runtime.h"


void __fastcall FUN_00754185(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_ECX;
  int iVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  undefined4 uVar8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;
  uint uVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar10 = (undefined2 *)(unaff_EBP + 0x81d0);
  for (iVar5 = 0x2000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0x4000;
    puVar10 = puVar10 + 1;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar10 = (undefined2 *)(unaff_EBP + 0x21ce);
  for (iVar5 = 0x3001; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0x4000;
    puVar10 = puVar10 + 1;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  memset((undefined1 *)(unaff_EBP + 0xd0), 0, 0x83f0); /* compiler bulk-zero initialization */
  *(undefined2 *)(unaff_EBP + 0x4c) = 1;
  *(int *)(unaff_EBP + 0x48) = unaff_EBP + 0x50;
  *(undefined2 *)(unaff_EBP + 0x4e) = 0;
  *(undefined4 *)(unaff_EBP + 0x40) = 0;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar11 = (undefined1 *)(unaff_EBP + 0x1fd3);
  iVar5 = 0xfd;
  do {
    while( true ) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      piVar1 = (int *)(unaff_EBP + 0x20);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) break;
      uVar12 = FUN_00753fd0(iVar5,param_2);
      param_2 = (undefined4)((ulonglong)uVar12 >> 0x20);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar5 = extraout_ECX;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar6 = extraout_ECX;
      if ((int)uVar12 == 0) goto LAB_007541f2;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    puVar3 = *(undefined1 **)(unaff_EBP + 0x18);
    *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + 1;
    *puVar11 = *puVar3;
    puVar11 = puVar11 + 1;
    iVar5 = iVar5 + -1;
    iVar6 = 0;
  } while (iVar5 != 0);
/* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
LAB_007541f2:
  *(int *)(unaff_EBP + 0x30) = 0xfd - iVar6;
  uVar9 = 0;
  FUN_007540ac();
/* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
LAB_00754208:
  uVar4 = *(uint *)(unaff_EBP + 0x2c);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (*(int *)(unaff_EBP + 0x30) < (int)uVar4) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    uVar4 = *(uint *)(unaff_EBP + 0x30);
    *(uint *)(unaff_EBP + 0x2c) = uVar4;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if ((uVar4 < 2) || ((uVar4 < 3 && (0xff < *(uint *)(unaff_EBP + 0x34))))) {
    *(undefined4 *)(unaff_EBP + 0x2c) = 1;
    FUN_00754047();
    FUN_0075405f();
  }
  else {
    FUN_00754047();
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if ((*(uint *)(unaff_EBP + 0x2c) < 6) && (*(uint *)(unaff_EBP + 0x34) < 0x100)) {
      FUN_00754047();
      FUN_00754047();
      FUN_00754047();
      FUN_0075405f();
    }
    else {
      FUN_00754047();
      FUN_0075405f();
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      if (*(uint *)(unaff_EBP + 0x2c) < 10) {
        FUN_0075405f();
      }
      else {
        FUN_0075405f();
        FUN_0075405f();
      }
    }
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  piVar1 = (int *)(unaff_EBP + 0x40);
  iVar5 = *piVar1;
  *piVar1 = *piVar1 - *(int *)(unaff_EBP + 0x2c);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (SBORROW4(iVar5,*(int *)(unaff_EBP + 0x2c)) != *piVar1 < 0) {
    do {
      *(int *)(unaff_EBP + 0x40) = *(int *)(unaff_EBP + 0x40) + 0x10;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    } while (*(int *)(unaff_EBP + 0x40) < 0);
  }
  do {
    FUN_0075415c();
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar7 = extraout_ECX_00;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar8 = extraout_EDX;
    do {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      piVar1 = (int *)(unaff_EBP + 0x20);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        puVar11 = *(undefined1 **)(unaff_EBP + 0x18);
        *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + 1;
        uVar2 = *puVar11;
        *(undefined1 *)(unaff_EBP + 0xd0 + uVar9) = uVar2;
        if (uVar9 < 0xfc) {
          *(undefined1 *)(unaff_EBP + 0x20d0 + uVar9) = uVar2;
        }
        goto LAB_00754308;
      }
      uVar12 = FUN_00753fd0(uVar7,uVar8);
      uVar8 = (undefined4)((ulonglong)uVar12 >> 0x20);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar7 = extraout_ECX_01;
    } while ((int)uVar12 != 0);
    *(int *)(unaff_EBP + 0x30) = *(int *)(unaff_EBP + 0x30) + -1;
LAB_00754308:
    uVar9 = uVar9 + 1 & 0x1fff;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    piVar1 = (int *)(unaff_EBP + 0x2c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) break;
    FUN_00754068();
  } while( true );
  FUN_007540ac();
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (*(short *)(unaff_EBP + 0x30) < 1) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if ((*(byte *)(unaff_EBP + 0x3f) & 0x80) == 0) {
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

