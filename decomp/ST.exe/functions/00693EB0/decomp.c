#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_00693eb0(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 *in_ECX;
  int iVar7;
  byte *puVar8;
  byte *puVar9;
  int iVar10;
  undefined4 local_19ac [4];
  undefined4 auStack_199b [8];
  char acStack_1979 [614];
  undefined4 auStack_1713 [1473];
  int local_c;
  undefined1 *local_8;

  iVar10 = param_2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar8 = (byte *)(in_ECX);
  puVar9 = (byte *)(local_19ac);
  memmove(puVar9, puVar8, 0x1999); /* compiler REP MOVS byte copy */
  iVar7 = 0;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_8 = (undefined1 *)((int)in_ECX + param_1 * 0x51);
  local_c = param_2 * 0x51;
  puVar8 = (byte *)(local_8 + 0x11);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar9 = (byte *)(local_c + 0x11 + (int)in_ECX);
  memmove(puVar9, puVar8, 0x51); /* compiler REP MOVS byte copy */
  iVar7 = 0;
  *(char *)(local_c + 0x33 + (int)in_ECX) = (char)param_2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  thunk_FUN_00693cb0(in_ECX,param_1);
  if (acStack_1979[local_c] != -1) {
    puVar8 = (byte *)((int)auStack_199b + local_c);
    puVar9 = (byte *)(local_8 + 0x11);
    memmove(puVar9, puVar8, 0x51); /* compiler REP MOVS byte copy */
    local_8[0x33] = (char)param_1;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar8 = (byte *)((int)in_ECX + param_1 * 8 + 0x299);
  iVar7 = 0;
  do {
    *(undefined1 *)((int)in_ECX + iVar7 + param_2 * 8 + 0x299) =
         *(undefined1 *)((int)puVar8 + iVar7);
    *(undefined1 *)((int)puVar8 + iVar7) = 0;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  iVar7 = param_2 + param_1 * 8;
  iVar1 = param_1 + param_2 * 8;
  param_2 = 8;
  uVar2 = *(undefined1 *)((int)auStack_1713 + iVar7);
  *(undefined1 *)(iVar1 + 0x299 + (int)in_ECX) = uVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar6 = (undefined1 *)(param_1 + 0x299 + (int)in_ECX);
  puVar5 = puVar6;
  do {
    puVar5[iVar10 - param_1] = *puVar5;
    *puVar5 = 0;
    puVar5 = puVar5 + 8;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  uVar3 = *(undefined1 *)((int)auStack_1713 + iVar1);
  uVar4 = auStack_1713[iVar10 * 2];
  *(undefined1 *)(iVar7 + 0x299 + (int)in_ECX) = uVar3;
  *puVar8 = uVar4;
  puVar5 = (undefined1 *)((int)auStack_1713 + iVar10);
  puVar8[1] = auStack_1713[iVar10 * 2 + 1];
  *(undefined1 *)(iVar7 + 0x299 + (int)in_ECX) = uVar3;
  iVar10 = 8;
  do {
    uVar3 = *puVar5;
    puVar5 = puVar5 + 8;
    *puVar6 = uVar3;
    puVar6 = puVar6 + 8;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  *(undefined1 *)(iVar1 + 0x299 + (int)in_ECX) = uVar2;
  return 1;
}

