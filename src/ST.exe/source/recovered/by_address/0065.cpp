#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0065.cpp

// 00650090 FUN_00650090
#line 4 "decomp/ST.exe/functions/00650090/decomp.c"
undefined4 __cdecl st::fn_00650090(RecoveredRecord_AiEventClassTy_00650090 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  sVar1 = *(short *)param_1;
  if (sVar1 < 3) {
    *(undefined4 *)&param_1->field_0x10 = 0;
  }
  else if (param_1->field_0xd2 != '\b') {
    return 0;
  }
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0xffffffff;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0xffffffff;
  }
  else if (*(char *)(param_1 + 1) != '\b') {
    return 0;
  }
  return 1;
}

// 006501A0 FUN_006501a0
#line 4 "decomp/ST.exe/functions/006501A0/decomp.c"
undefined4 __cdecl st::fn_006501A0(RecoveredRecord_AiEventClassTy_006501A0 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  sVar1 = *(short *)param_1;
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0;
  }
  else if (param_1->field_00D5 != '\n') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0;
  }
  else if (param_1->field_0xd6 != '\n') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 1;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if ((-1 < *(int *)&param_1->field_0xc) && (*(int *)&param_1->field_0xc < 8)) {
    return 1;
  }
  return 0;
}

// 00650240 FUN_00650240
#line 4 "decomp/ST.exe/functions/00650240/decomp.c"
undefined4 __cdecl st::fn_00650240(RecoveredRecord_AiEventClassTy_00650240 *param_1)

{
  short sVar1;

  sVar1 = *(short *)param_1;
  if (sVar1 < 1) {
    *(undefined4 *)&param_1->field_0x8 = 0xffffffff;
  }
  else if (param_1->field_0xd0 != '\b') {
    return 0;
  }
  if (sVar1 < 2) {
    *(undefined4 *)&param_1->field_0xc = 0;
  }
  else if (param_1->field_00D1 != '\n') {
    return 0;
  }
  if (sVar1 < 3) {
    *(undefined4 *)&param_1->field_0x10 = 0xffffffff;
  }
  else if (param_1->field_0xd2 != '\b') {
    return 0;
  }
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0xffffffff;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0xffffffff;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0xffffffff;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0xffffffff;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 1;
  }
  else if (*(char *)(param_1 + 1) != '\b') {
    return 0;
  }
  return 1;
}

// 00650370 FUN_00650370
#line 4 "decomp/ST.exe/functions/00650370/decomp.c"
undefined4 __cdecl st::fn_00650370(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

// 006503B0 FUN_006503b0
#line 4 "decomp/ST.exe/functions/006503B0/decomp.c"
undefined4 __cdecl st::fn_006503B0(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  sVar1 = *param_1;
  if (sVar1 < 7) {
    param_1[0x10] = -1;
    param_1[0x11] = -1;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  else if (STField<char>(param_1,0xd7) != '\n') {
    return 0;
  }
  if (sVar1 < 9) {
    param_1[0x14] = 1;
    param_1[0x15] = 0;
  }
  else if ((char)param_1[0x6c] != '\b') {
    return 0;
  }
  if (9 < sVar1) {
    if (STField<char>(param_1,0xd9) != '\b') {
      return 0;
    }
    return 1;
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return 1;
}

// 00650480 FUN_00650480
#line 4 "decomp/ST.exe/functions/00650480/decomp.c"
undefined4 __cdecl st::fn_00650480(RecoveredRecord_AiEventClassTy_00650480 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  sVar1 = *(short *)param_1;
  if (sVar1 < 3) {
    *(undefined4 *)&param_1->field_0x10 = 0;
  }
  else if (param_1->field_0xd2 != '\b') {
    return 0;
  }
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0xffffffff;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0;
  }
  else if (param_1->field_0xd4 != '\n') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0xffffffff;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0xffffffff;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0xffffffff;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0xffffffff;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
  }
  else if (param_1->field_0xda != '\b') {
    return 0;
  }
  if (0xb < sVar1) {
    if (param_1->field_00DB != '\b') {
      return 0;
    }
    return 1;
  }
  *(undefined4 *)&param_1->field_0x34 = 1;
  return 1;
}

// 00650600 FUN_00650600
#line 4 "decomp/ST.exe/functions/00650600/decomp.c"
undefined4 __cdecl st::fn_00650600(RecoveredRecord_AiEventClassTy_00650600 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  sVar1 = *(short *)param_1;
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0xffffffff;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0;
  }
  else if (param_1->field_00D5 != '\n') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0xffffffff;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0xffffffff;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0xffffffff;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
  }
  else if (param_1->field_0xda != '\b') {
    return 0;
  }
  if (sVar1 < 0xc) {
    *(undefined4 *)&param_1->field_0x34 = 0xffffffff;
  }
  else if (param_1->field_00DB != '\b') {
    return 0;
  }
  return 1;
}

// 00650760 FUN_00650760
#line 4 "decomp/ST.exe/functions/00650760/decomp.c"
undefined4 __cdecl st::fn_00650760(short *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*param_1 < 4) {
    param_1[10] = 1;
    param_1[0xb] = 0;
  }
  else if (STField<char>(param_1,0xd3) != '\b') {
    return 0;
  }
  if (((*(uint *)(param_1 + 8) < 0x9b) && (0 < *(int *)(param_1 + 10))) &&
     (*(int *)(param_1 + 10) <= (int)(uint)*(byte *)((int)&DAT_00798fd8 + *(uint *)(param_1 + 8))))
  {
    return 1;
  }
  return 0;
}

// 006507E0 FUN_006507e0
#line 4 "decomp/ST.exe/functions/006507E0/decomp.c"
undefined4 __cdecl st::fn_006507E0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

// 00650820 FUN_00650820
#line 4 "decomp/ST.exe/functions/00650820/decomp.c"
undefined4 __cdecl st::fn_00650820(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  sVar1 = *param_1;
  if (sVar1 < 4) {
    param_1[10] = 1;
    param_1[0xb] = 0;
  }
  else if (STField<char>(param_1,0xd3) != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    param_1[0xc] = 0x32;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (((*(uint *)(param_1 + 8) < 0x9b) && (0 < *(int *)(param_1 + 10))) &&
     (*(int *)(param_1 + 10) <= (int)(uint)*(byte *)((int)&DAT_00798fd8 + *(uint *)(param_1 + 8))))
  {
    return 1;
  }
  return 0;
}

// 006508C0 FUN_006508c0
#line 4 "decomp/ST.exe/functions/006508C0/decomp.c"
undefined4 __cdecl st::fn_006508C0(short *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*param_1 < 4) {
    param_1[10] = 1;
    param_1[0xb] = 0;
  }
  else if (STField<char>(param_1,0xd3) != '\b') {
    return 0;
  }
  if (((*(uint *)(param_1 + 8) < 0x9b) && (0 < *(int *)(param_1 + 10))) &&
     (*(int *)(param_1 + 10) <= (int)(uint)*(byte *)((int)&DAT_00798fd8 + *(uint *)(param_1 + 8))))
  {
    return 1;
  }
  return 0;
}

// 00650940 FUN_00650940
#line 4 "decomp/ST.exe/functions/00650940/decomp.c"
undefined4 __cdecl st::fn_00650940(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  sVar1 = *param_1;
  if (sVar1 < 4) {
    param_1[10] = 1;
    param_1[0xb] = 0;
  }
  else if (STField<char>(param_1,0xd3) != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (((*(uint *)(param_1 + 8) < 0x9b) && (0 < *(int *)(param_1 + 10))) &&
     (*(int *)(param_1 + 10) <= (int)(uint)*(byte *)((int)&DAT_00798fd8 + *(uint *)(param_1 + 8))))
  {
    return 1;
  }
  return 0;
}

// 006509E0 FUN_006509e0
#line 4 "decomp/ST.exe/functions/006509E0/decomp.c"
undefined4 __cdecl st::fn_006509E0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

// 00650A20 FUN_00650a20
#line 4 "decomp/ST.exe/functions/00650A20/decomp.c"
undefined4 __cdecl st::fn_00650A20(AnonShape_00650A20_4A198923 *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*(short *)param_1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0x32;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if ((-1 < *(int *)&param_1->field_0x10) && (*(int *)&param_1->field_0x10 < 3)) {
    return 1;
  }
  return 0;
}

// 00650A90 FUN_00650a90
#line 4 "decomp/ST.exe/functions/00650A90/decomp.c"
undefined4 __cdecl st::fn_00650A90(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

// 00650AD0 FUN_00650ad0
#line 4 "decomp/ST.exe/functions/00650AD0/decomp.c"
undefined4 __cdecl st::fn_00650AD0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return 1;
}

// 00650B10 FUN_00650b10
#line 4 "decomp/ST.exe/functions/00650B10/decomp.c"
undefined4 __cdecl st::fn_00650B10(RecoveredRecord_AiEventClassTy_00650B10 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  iVar2 = 2;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\n') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  if (*(int *)&param_1->field_0x10 != 0) {
    sVar1 = *(short *)param_1;
    if (sVar1 < 4) {
      *(undefined4 *)&param_1->field_0x14 = 0xffffffff;
    }
    else if (param_1->field_00D3 != '\b') {
      return 0;
    }
    if (sVar1 < 5) {
      *(undefined4 *)&param_1->field_0x18 = 0xffffffff;
    }
    else if (param_1->field_0xd4 != '\b') {
      return 0;
    }
    if (sVar1 < 6) {
      *(undefined4 *)&param_1->field_0x1c = 0xffffffff;
    }
    else if (param_1->field_00D5 != '\b') {
      return 0;
    }
    return 1;
  }
  return 0;
}

// 00650BD0 FUN_00650bd0
#line 4 "decomp/ST.exe/functions/00650BD0/decomp.c"
undefined4 __cdecl st::fn_00650BD0(RecoveredRecord_AiEventClassTy_00650BD0 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  sVar1 = *(short *)param_1;
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0xffffffff;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0xffffffff;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0xffffffff;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  return 1;
}

// 00650CF0 FUN_00650cf0
#line 4 "decomp/ST.exe/functions/00650CF0/decomp.c"
undefined4 __cdecl st::fn_00650CF0(RecoveredRecord_AiEventClassTy_00650CF0 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  sVar1 = *(short *)param_1;
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0xffffffff;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0xffffffff;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0xffffffff;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  return 1;
}

// 00650E10 FUN_00650e10
#line 4 "decomp/ST.exe/functions/00650E10/decomp.c"
undefined4 __cdecl st::fn_00650E10(RecoveredRecord_AiEventClassTy_00650E10 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  iVar2 = 2;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\n') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  if (*(int *)&param_1->field_0x10 != 0) {
    sVar1 = *(short *)param_1;
    if (sVar1 < 4) {
      *(undefined4 *)&param_1->field_0x14 = 0xffffffff;
    }
    else if (param_1->field_00D3 != '\b') {
      return 0;
    }
    if (sVar1 < 5) {
      *(undefined4 *)&param_1->field_0x18 = 0;
    }
    else if (param_1->field_0xd4 != '\b') {
      return 0;
    }
    if (sVar1 < 6) {
      *(undefined4 *)&param_1->field_0x1c = 0;
    }
    else if (param_1->field_00D5 != '\b') {
      return 0;
    }
    if (sVar1 < 7) {
      *(undefined4 *)&param_1->field_0x20 = 0;
    }
    else if (param_1->field_0xd6 != '\b') {
      return 0;
    }
    if (sVar1 < 8) {
      *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
    }
    else if (param_1->field_00D7 != '\b') {
      return 0;
    }
    if (sVar1 < 9) {
      *(undefined4 *)&param_1->field_0x28 = 0xffffffff;
    }
    else if (param_1->field_0xd8 != '\b') {
      return 0;
    }
    if (sVar1 < 10) {
      *(undefined4 *)&param_1->field_0x2c = 0xffffffff;
    }
    else if (param_1->field_00D9 != '\b') {
      return 0;
    }
    return 1;
  }
  return 0;
}

// 00650F50 FUN_00650f50
#line 4 "decomp/ST.exe/functions/00650F50/decomp.c"
undefined4 __cdecl st::fn_00650F50(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((-1 < *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x10) < 3)) {
    return 1;
  }
  return 0;
}

// 00650F90 FUN_00650f90
#line 4 "decomp/ST.exe/functions/00650F90/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00656E01
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_00650F90(short *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  if (*param_1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((-1 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 3)) &&
      (-1 < *(int *)(param_1 + 10))) && (-1 < *(int *)(param_1 + 0xc))) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return (uint)(-1 < *(int *)(param_1 + 0xe));
  }
  return 0;
}

// 00651010 FUN_00651010
#line 4 "decomp/ST.exe/functions/00651010/decomp.c"
undefined4 __cdecl st::fn_00651010(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  iVar2 = 2;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\n') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  iVar2 = 3;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  if (*(int *)(param_1 + 8) != 0) {
    sVar1 = *param_1;
    if (sVar1 < 6) {
      param_1[0xe] = 10;
      param_1[0xf] = 0;
    }
    else if (STField<char>(param_1,0xd5) != '\b') {
      return 0;
    }
    if (sVar1 < 7) {
      param_1[0x10] = -1;
      param_1[0x11] = -1;
    }
    else if ((char)param_1[0x6b] != '\b') {
      return 0;
    }
    if (sVar1 < 8) {
      param_1[0x12] = -1;
      param_1[0x13] = -1;
    }
    else if (STField<char>(param_1,0xd7) != '\b') {
      return 0;
    }
    if ((0 < *(int *)(param_1 + 10)) && (*(int *)(param_1 + 10) < 4)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1 + 0xe) < 0) {
        param_1[0xe] = 0;
        param_1[0xf] = 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (0x13 < *(int *)(param_1 + 0xe)) {
        param_1[0xe] = 0x14;
        param_1[0xf] = 0;
      }
      return 1;
    }
  }
  return 0;
}

// 00651120 FUN_00651120
#line 4 "decomp/ST.exe/functions/00651120/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00657082
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_00651120(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(-1 < *(int *)(param_1 + 0x10));
}

// 00651160 FUN_00651160
#line 4 "decomp/ST.exe/functions/00651160/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00657153
   -> TEST TEST EAX,EAX | 00652810 @ 00657224 -> TEST TEST EAX,EAX */

int __cdecl st::fn_00651160(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(-1 < *(int *)(param_1 + 0x10));
}

// 006511A0 FUN_006511a0
#line 4 "decomp/ST.exe/functions/006511A0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00657326
   -> TEST TEST EAX,EAX | 00652810 @ 006573C8 -> TEST TEST EAX,EAX */

int __cdecl st::fn_006511A0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(-1 < *(int *)(param_1 + 0x10));
}

// 006511E0 FUN_006511e0
#line 4 "decomp/ST.exe/functions/006511E0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 0065746A
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_006511E0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 3;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(-1 < *(int *)(param_1 + 0x10));
}

// 00651250 FUN_00651250
#line 4 "decomp/ST.exe/functions/00651250/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 0065759F
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_00651250(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(-1 < *(int *)(param_1 + 0x10));
}

// 00651290 FUN_00651290
#line 4 "decomp/ST.exe/functions/00651290/decomp.c"
undefined4 __cdecl st::fn_00651290(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = -1;
    param_1[0xd] = 0x3fff;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 1;
    param_1[0xf] = 0;
  }
  else if (STField<char>(param_1,0xd5) != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = 1;
    param_1[0x13] = 0;
  }
  else if (STField<char>(param_1,0xd7) != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  else if ((char)param_1[0x6c] != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  else if ((char)param_1[0x6c] != '\b') {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 10))) &&
      (*(int *)(param_1 + 10) < 3)) &&
     ((-1 < *(int *)(param_1 + 0xe) && (-1 < *(int *)(param_1 + 0x10))))) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1 + 0x12) < 0) {
      param_1[0x12] = 1;
      param_1[0x13] = 0;
      return 1;
    }
    return 1;
  }
  return 0;
}

// 006513C0 FUN_006513c0
#line 4 "decomp/ST.exe/functions/006513C0/decomp.c"
undefined4 __cdecl st::fn_006513C0(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = 1;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 1;
    param_1[0xf] = 0;
  }
  else if (STField<char>(param_1,0xd5) != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = 1;
    param_1[0x13] = 0;
  }
  else if (STField<char>(param_1,0xd7) != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  else if ((char)param_1[0x6c] != '\b') {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 10))) &&
      (*(int *)(param_1 + 10) < 3)) &&
     ((-1 < *(int *)(param_1 + 0xe) && (-1 < *(int *)(param_1 + 0x10))))) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1 + 0x12) < 0) {
      param_1[0x12] = 1;
      param_1[0x13] = 0;
      return 1;
    }
    return 1;
  }
  return 0;
}

// 006514D0 FUN_006514d0
#line 4 "decomp/ST.exe/functions/006514D0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00657927
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_006514D0(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = -1;
    param_1[0xd] = 0x3fff;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 1;
    param_1[0xf] = 0;
  }
  else if (STField<char>(param_1,0xd5) != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  else if (STField<char>(param_1,0xd7) != '\b') {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 10))) &&
      (*(int *)(param_1 + 10) < 3)) && (-1 < *(int *)(param_1 + 0xe))) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return (uint)(-1 < *(int *)(param_1 + 0x10));
  }
  return 0;
}

// 006515B0 FUN_006515b0
#line 4 "decomp/ST.exe/functions/006515B0/decomp.c"
undefined4 __cdecl st::fn_006515B0(RecoveredRecord_AiEventClassTy_006515B0 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *(short *)param_1;
  if (sVar1 < 5) {
    param_1->field_0018 = 0;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0x19;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0xffffffff;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0xffffffff;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    *(undefined4 *)&param_1->field_0x30 = 8;
  }
  else if (param_1->field_0xda != '\b') {
    return 0;
  }
  if (sVar1 < 0xc) {
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  else if (param_1->field_00DB != '\n') {
    return 0;
  }
  if (param_1->field_0010 < 0) {
    return 0;
  }
  if (*(int *)&param_1->field_0x20 < 0) {
    *(undefined4 *)&param_1->field_0x20 = 0;
  }
  if (0x32 < *(int *)&param_1->field_0x20) {
    *(undefined4 *)&param_1->field_0x20 = 0x32;
  }
  if (*(int *)&param_1->field_0x30 < -1) {
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
  }
  if (8 < *(int *)&param_1->field_0x30) {
    *(undefined4 *)&param_1->field_0x30 = 8;
  }
  return 1;
}

// 00651730 FUN_00651730
#line 4 "decomp/ST.exe/functions/00651730/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00657BF7
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_00651730(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(-1 < *(int *)(param_1 + 0x10));
}

// 00651770 FUN_00651770
#line 4 "decomp/ST.exe/functions/00651770/decomp.c"
undefined4 __cdecl st::fn_00651770(AnonShape_00651770_8F77396F *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if (*(char *)((int)&param_1[8].field_0010 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (((-1 < param_1->field_0010) && (-1 < param_1->field_0014)) && (param_1->field_0014 < 3)) {
    return 1;
  }
  return 0;
}

// 006517C0 FUN_006517c0
#line 4 "decomp/ST.exe/functions/006517C0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00657E02
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_006517C0(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = -1;
    param_1[0xd] = 0x3fff;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 1;
    param_1[0xf] = 0;
  }
  else if (STField<char>(param_1,0xd5) != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 10))) &&
      (*(int *)(param_1 + 10) < 3)) && (-1 < *(int *)(param_1 + 0xe))) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return (uint)(-1 < *(int *)(param_1 + 0x10));
  }
  return 0;
}

// 00651880 FUN_00651880
#line 4 "decomp/ST.exe/functions/00651880/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00657F45
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_00651880(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 9);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(-1 < *(int *)(param_1 + 0x10));
}

// 006518C0 FUN_006518c0
#line 4 "decomp/ST.exe/functions/006518C0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00658097
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_006518C0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(-1 < *(int *)(param_1 + 0x10));
}

// 00651900 FUN_00651900
#line 4 "decomp/ST.exe/functions/00651900/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 006581A0
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_00651900(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = 0x32;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else if (STField<char>(param_1,0xd5) != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    param_1[0x10] = 1;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = -1;
    param_1[0x13] = 0x3fff;
  }
  else if (STField<char>(param_1,0xd7) != '\b') {
    return 0;
  }
  if (((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 10))) &&
     (*(int *)(param_1 + 10) < 3)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (99 < *(int *)(param_1 + 0xc)) {
      param_1[0xc] = 99;
      param_1[0xd] = 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return (uint)(-1 < *(int *)(param_1 + 0xe));
  }
  return 0;
}

// 006519E0 FUN_006519e0
#line 4 "decomp/ST.exe/functions/006519E0/decomp.c"
undefined4 __cdecl st::fn_006519E0(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = -1;
    param_1[0xd] = -1;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = -1;
    param_1[0xf] = -1;
  }
  else if (STField<char>(param_1,0xd5) != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    param_1[0x10] = -1;
    param_1[0x11] = -1;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  else if (STField<char>(param_1,0xd7) != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  else if ((char)param_1[0x6c] != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  else if (STField<char>(param_1,0xd9) != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  else if ((char)param_1[0x6d] != '\b') {
    return 0;
  }
  if (sVar1 < 0xc) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  else if (STField<char>(param_1,0xdb) != '\b') {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 10))) &&
      (*(int *)(param_1 + 10) < 3)) &&
     (((-1 < *(int *)(param_1 + 0x16) && (*(int *)(param_1 + 0x16) < 6)) &&
      ((-1 < *(int *)(param_1 + 0x18) && (*(int *)(param_1 + 0x18) < 10)))))) {
    return 1;
  }
  return 0;
}

// 00651B40 FUN_00651b40
#line 4 "decomp/ST.exe/functions/00651B40/decomp.c"
undefined4 __cdecl st::fn_00651B40(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = 0xdd;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else if (STField<char>(param_1,0xd5) != '\b') {
    return 0;
  }
  if (((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 10))) &&
     (*(int *)(param_1 + 10) < 3)) {
    return 1;
  }
  return 0;
}

// 00651BD0 FUN_00651bd0
#line 4 "decomp/ST.exe/functions/00651BD0/decomp.c"
undefined4 __cdecl st::fn_00651BD0(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else if (STField<char>(param_1,0xd5) != '\b') {
    return 0;
  }
  if (((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 10))) &&
     (*(int *)(param_1 + 10) < 3)) {
    return 1;
  }
  return 0;
}

// 00651C60 FUN_00651c60
#line 4 "decomp/ST.exe/functions/00651C60/decomp.c"
undefined4 __cdecl st::fn_00651C60(short *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (*param_1 < 5) {
    param_1[0xc] = -1;
    param_1[0xd] = 0x3fff;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 10))) &&
     (*(int *)(param_1 + 10) < 3)) {
    return 1;
  }
  return 0;
}

// 00651CD0 FUN_00651cd0
#line 4 "decomp/ST.exe/functions/00651CD0/decomp.c"
undefined4 __cdecl st::fn_00651CD0(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  sVar1 = *param_1;
  if (sVar1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  else if (STField<char>(param_1,0xd7) != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  else if ((char)param_1[0x6c] != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  else if (STField<char>(param_1,0xd9) != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  else if ((char)param_1[0x6d] != '\b') {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 0x14))) &&
      (*(int *)(param_1 + 0x14) < 6)) &&
     ((-1 < *(int *)(param_1 + 0x16) && (*(int *)(param_1 + 0x16) < 10)))) {
    return 1;
  }
  return 0;
}

// 00651DB0 FUN_00651db0
#line 4 "decomp/ST.exe/functions/00651DB0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 0065880B
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_00651DB0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(-1 < *(int *)(param_1 + 0x10));
}

// 00651DF0 FUN_00651df0
#line 4 "decomp/ST.exe/functions/00651DF0/decomp.c"
undefined4 __cdecl st::fn_00651DF0(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  sVar1 = *param_1;
  if (sVar1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  else if (STField<char>(param_1,0xd7) != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  else if ((char)param_1[0x6c] != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  else if (STField<char>(param_1,0xd9) != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  else if ((char)param_1[0x6d] != '\b') {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 0x14))) &&
      (*(int *)(param_1 + 0x14) < 6)) &&
     ((-1 < *(int *)(param_1 + 0x16) && (*(int *)(param_1 + 0x16) < 10)))) {
    return 1;
  }
  return 0;
}

// 00651ED0 FUN_00651ed0
#line 4 "decomp/ST.exe/functions/00651ED0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00658B99
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_00651ED0(RecoveredRecord_AiEventClassTy_00651ED0 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  sVar1 = *(short *)param_1;
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0xff;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0x3fffffff;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0xffffffff;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0;
  }
  else if (param_1->field_00D7 != '\n') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  if (10 < sVar1) {
    if (*(char *)(param_1 + 1) == '\b') {
      return (uint)(-1 < *(int *)&param_1->field_0x10);
    }
    return 0;
  }
  *(undefined4 *)&param_1->field_0x30 = 0;
  return (uint)(-1 < *(int *)&param_1->field_0x10);
}

// 00652030 FUN_00652030
#line 4 "decomp/ST.exe/functions/00652030/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00658D2A
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_00652030(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  sVar1 = *param_1;
  if (sVar1 < 10) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  else if (STField<char>(param_1,0xd9) != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  else if ((char)param_1[0x6d] != '\b') {
    return 0;
  }
  if (sVar1 < 0xc) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  else if (STField<char>(param_1,0xdb) != '\b') {
    return 0;
  }
  if (*(int *)(param_1 + 8) < 0) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x10) < 0) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (-1 < *(int *)(param_1 + 0x12)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return (uint)(-1 < *(int *)(param_1 + 0x14));
  }
  return 0;
}

// 00652100 FUN_00652100
#line 4 "decomp/ST.exe/functions/00652100/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00658EB7
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_00652100(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = -1;
    param_1[0xd] = -1;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else if (STField<char>(param_1,0xd5) != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    return (uint)(-1 < *(int *)(param_1 + 10));
  }
  return 0;
}

// 006521C0 FUN_006521c0
#line 4 "decomp/ST.exe/functions/006521C0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00658FF1
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_006521C0(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else if (STField<char>(param_1,0xd5) != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = -1;
    param_1[0x13] = -1;
  }
  else if (STField<char>(param_1,0xd7) != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    param_1[0x14] = -1;
    param_1[0x15] = -1;
  }
  else if ((char)param_1[0x6c] != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    param_1[0x16] = -1;
    param_1[0x17] = -1;
  }
  else if (STField<char>(param_1,0xd9) != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  else if ((char)param_1[0x6d] != '\b') {
    return 0;
  }
  if (sVar1 < 0xc) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  else if (STField<char>(param_1,0xdb) != '\b') {
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    return (uint)(-1 < *(int *)(param_1 + 10));
  }
  return 0;
}

// 00652300 FUN_00652300
#line 4 "decomp/ST.exe/functions/00652300/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 0065916C
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_00652300(RecoveredRecord_AiEventClassTy_00652300 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *(short *)param_1;
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0xffffffff;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0xffffffff;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0xffffffff;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0;
  }
  else if (param_1->field_0xd8 != '\n') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    *(undefined4 *)&param_1->field_0x30 = 0;
  }
  else if (param_1->field_0xda != '\b') {
    return 0;
  }
  if (0xb < sVar1) {
    if (param_1->field_00DB == '\b') {
      return (uint)(-1 < *(int *)&param_1->field_0x10);
    }
    return 0;
  }
  *(undefined4 *)&param_1->field_0x34 = 0;
  return (uint)(-1 < *(int *)&param_1->field_0x10);
}

// 00652460 FUN_00652460
#line 4 "decomp/ST.exe/functions/00652460/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 006593A3
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_00652460(RecoveredRecord_AiEventClassTy_00652460 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  sVar1 = *(short *)param_1;
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0xffffffff;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0xffffffff;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    *(undefined4 *)&param_1->field_0x30 = 0;
  }
  else if (*(char *)(param_1 + 1) != '\b') {
    return 0;
  }
  return (uint)(-1 < *(int *)&param_1->field_0x10);
}

// 00652540 FUN_00652540
#line 4 "decomp/ST.exe/functions/00652540/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00659515
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_00652540(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  sVar1 = *param_1;
  if (sVar1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  else if (STField<char>(param_1,0xd7) != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  else if ((char)param_1[0x6c] != '\b') {
    return 0;
  }
  return (uint)(-1 < *(int *)(param_1 + 8));
}

// 006525E0 FUN_006525e0
#line 4 "decomp/ST.exe/functions/006525E0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00659669
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_006525E0(AnonShape_006525E0_52237033 *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  if (*(short *)param_1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (7 < *(short *)param_1) {
    if (param_1->field_00D7 == '\b') {
      return (uint)(-1 < *(int *)&param_1->field_0x10);
    }
    return 0;
  }
  *(undefined4 *)&param_1->field_0x24 = 0;
  return (uint)(-1 < *(int *)&param_1->field_0x10);
}

// 00652670 FUN_00652670
#line 4 "decomp/ST.exe/functions/00652670/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 006597AE
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_00652670(AnonShape_00652670_DFEA616F *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  if (*(short *)param_1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (7 < *(short *)param_1) {
    if (param_1->field_00D7 == '\b') {
      return (uint)(-1 < *(int *)&param_1->field_0x10);
    }
    return 0;
  }
  *(undefined4 *)&param_1->field_0x24 = 0;
  return (uint)(-1 < *(int *)&param_1->field_0x10);
}

// 00652700 FUN_00652700
#line 4 "decomp/ST.exe/functions/00652700/decomp.c"
undefined4 __cdecl st::fn_00652700(RecoveredRecord_AiEventClassTy_00652700 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  sVar1 = *(short *)param_1;
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 100;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  if (*(int *)&param_1->field_0x10 < 0) {
    return 0;
  }
  if (*(int *)&param_1->field_0x24 < 0) {
    *(undefined4 *)&param_1->field_0x24 = 0;
  }
  if (100 < *(int *)&param_1->field_0x24) {
    *(undefined4 *)&param_1->field_0x24 = 100;
  }
  return 1;
}

// 006527D0 FUN_006527d0
#line 4 "decomp/ST.exe/functions/006527D0/decomp.c"
undefined4 __cdecl st::fn_006527D0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  return 1;
}

// 0065BD20 FUN_0065bd20
#line 4 "decomp/ST.exe/functions/0065BD20/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=1, reads=1, sites=0065BD23 MOV AL,byte ptr
   [EBP + 0x8]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0065BD26 MOV DX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0065BD30 MOV AX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0065BD3B MOV DX,word ptr
   [EBP + 0x14] */

void __thiscall
st::fn_0065BD20(void *this,byte param_1,ushort param_2,ushort param_3,ushort param_4,undefined4 param_5
            )

{
  STField<byte>(this,0x676) = param_1;
  STField<ushort>(this,0x677) = param_2;
  STField<ushort>(this,0x679) = param_3;
  STField<ushort>(this,0x67b) = param_4;
  STField<undefined4>(this,0x67d) = param_5;
  return;
}

// 0065D030 FUN_0065d030
#line 4 "decomp/ST.exe/functions/0065D030/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_0065D030(AnonShape_0065D030_CB0F82F0 *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;

  if (param_1->field_0005 != '\0') {
    iVar1 = param_1->field_0462;
    uVar2 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar3 = *(int *)(iVar1 + 0xc) != 0;
      do {
        if (bVar3) {
          iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
        }
        else {
          iVar1 = 0;
        }
        if (*(DArrayTy **)(iVar1 + 0xf) != nullptr) {
          st::fn_006AE110(*(DArrayTy **)(iVar1 + 0xf));
          *(undefined4 *)(iVar1 + 0xf) = 0;
        }
        iVar1 = param_1->field_0462;
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
    }
    st::fn_006AE110((DArrayTy *)param_1->field_0462);
    param_1->field_0462 = 0;
    st::fn_006B5570((DArrayTy *)param_1->field_0456);
    param_1->field_0456 = 0;
    st::fn_00402FA4((undefined4 *)&param_1[1].field_0x6);
  }
  return;
}

// 0065D0F0 FUN_0065d0f0
#line 4 "decomp/ST.exe/functions/0065D0F0/decomp.c"
void __cdecl st::fn_0065D0F0(int *param_1)

{
  if ((AnonShape_0065D030_CB0F82F0 *)*param_1 != nullptr) {
    st::fn_00402F8B((AnonShape_0065D030_CB0F82F0 *)*param_1);
    st::fn_006AB060(param_1);
  }
  return;
}

// 0065D1F0 FUN_0065d1f0
#line 4 "decomp/ST.exe/functions/0065D1F0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __cdecl st::fn_0065D1F0(int *param_1)

{
  DArrayTy *array;

  if (*param_1 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    array = *(DArrayTy **)(*param_1 + 0xf);
    if (array != nullptr) {
      st::fn_006AE110(array);
      *(undefined4 *)(*param_1 + 0xf) = 0;
    }
    st::fn_006AB060(param_1);
  }
  return;
}

// 0065D480 FUN_0065d480
#line 4 "decomp/ST.exe/functions/0065D480/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0065D2A0 -> 0065D480 @ 0065D3D6

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_0065D480(AiFltClassTy *param_1)

{
  if (param_1 != nullptr) {
    st::fn_00402293((int)&param_1->field_0020);
    return;
  }
  st::fn_00402293(0);
  return;
}

// 0065D590 FUN_0065d590
#line 4 "decomp/ST.exe/functions/0065D590/decomp.c"
void __fastcall st::fn_0065D590(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x20b);
  uVar2 = 0;
  if (0 < *(int *)(iVar1 + 0xc)) {
    bVar3 = *(int *)(iVar1 + 0xc) != 0;
    do {
      if (bVar3) {
        iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
      }
      else {
        iVar1 = 0;
      }
      *(undefined4 *)(iVar1 + 0x24) = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)(param_1 + 0x20b);
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
    } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
    *(undefined4 *)(param_1 + 0x284) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x284) = 0;
  return;
}

// 0065D600 FUN_0065d600
#line 4 "decomp/ST.exe/functions/0065D600/decomp.c"
void __fastcall st::fn_0065D600(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(AiTactClassTy **)(param_1 + 0x284) != nullptr) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00403080(*(AiTactClassTy **)(param_1 + 0x284),param_1);
  }
  return;
}

// 0065D630 FUN_0065d630
#line 4 "decomp/ST.exe/functions/0065D630/decomp.c"
void __fastcall st::fn_0065D630(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_24 [8];

  st::fn_00401EF1(param_1,param_2);
  st::fn_004037E7((int)param_1);
  uVar1 = *(undefined4 *)&param_1->field_0x8;
  memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_24[2] = *(undefined4 *)(param_1->field_000C + 0x14);
  local_24[3] = 0;
  local_24[4] = 10;
  local_24[5] = uVar1;
  st::fn_006E60A0(param_1,local_24);
  return;
}

// 0065D940 FUN_0065d940
#line 4 "decomp/ST.exe/functions/0065D940/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0068FB30 -> 0065D940 @ 0068FBC1

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0065D940(void *this,DArrayTy *param_1,int param_2)

{
  ushort *puVar1;
  STGameObjC *objPtr;
  uint uVar2;
  bool bVar3;

  if (param_1 != nullptr) {
    uVar2 = 0;
    if (0 < (int)param_1->count) {
      bVar3 = param_1->count != 0;
      do {
        if (bVar3) {
          puVar1 = DArrayAt<ushort>(param_1, uVar2);
        }
        else {
          puVar1 = nullptr;
        }
        objPtr = st::fn_004028BA
                           (g_allPlayers_007FA174,STField<char>(this,0x24),*puVar1,CASE_1);
        if (objPtr != nullptr) {
          st::fn_00404200(st::pointer_boundary_cast<AiFltClassTy *>(this),(uint)objPtr,param_2);
        }
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < param_1->count;
      } while ((int)uVar2 < (int)param_1->count);
    }
  }
  return;
}

// 0065DC00 FUN_0065dc00
#line 4 "decomp/ST.exe/functions/0065DC00/decomp.c"
int __fastcall st::fn_0065DC00(AiFltClassTy *param_1,undefined4 param_2,uint param_3,char param_4)

{
  char cVar1;
  DArrayTy *array;
  dword dVar2;
  ushort *puVar3;
  STGameObjC *this;
  int iVar4;
  IMAGE_DOS_HEADER *pIVar5;
  uint uVar6;
  int local_8;

  local_8 = 0;
  array = (DArrayTy *)st::fn_004018CF(param_1,param_2);
  if (array != nullptr) {
    cVar1 = param_1->field_0081;
    if ((cVar1 < '\0') || ('\a' < cVar1)) {
      cVar1 = (char)param_1->field_0024;
    }
    if ((param_4 != '\b') && ((param_4 < '\0' || (cVar1 = param_4, '\b' < param_4)))) {
      param_4 = -1;
      cVar1 = param_4;
    }
    param_4 = cVar1;
    dVar2 = array->count;
    uVar6 = 0;
    if (0 < (int)dVar2) {
      do {
        if (uVar6 < dVar2) {
          puVar3 = DArrayAt<ushort>(array, uVar6);
        }
        else {
          puVar3 = nullptr;
        }
        this = st::fn_004028BA
                         (g_allPlayers_007FA174,*(char *)&param_1->field_0024,*puVar3,CASE_1);
        if (((this != nullptr) && (iVar4 = this->vfunc_F8(), iVar4 != 0))
           && ((param_4 < '\0' || (iVar4 = this->vfunc_6C(), param_4 == iVar4)))) {
          iVar4 = (*this->vtable->vfunc_2C)();
          pIVar5 = st::fn_0040410B(iVar4);
          if ((param_3 & (uint)pIVar5) != 0) {
            local_8 = local_8 + 1;
          }
        }
        dVar2 = array->count;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)dVar2);
    }
    st::fn_006AE110(array);
    return local_8;
  }
  return 0;
}

// 0065DD30 FUN_0065dd30
#line 4 "decomp/ST.exe/functions/0065DD30/decomp.c"
int __fastcall
st::fn_0065DD30(AiFltClassTy *param_1,undefined4 param_2,uint param_3,uint param_4,char param_5,
            byte *param_6,short param_7,short param_8,short param_9,short param_10,short param_11,
            short param_12)

{
  byte bVar1;
  char cVar2;
  ushort *puVar3;
  STGameObjC *this;
  uint uVar4;
  uint uVar5;
  IMAGE_DOS_HEADER *pIVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  byte local_2c [16];
  DArrayTy *local_1c;
  AiFltClassTy *local_18;
  uint local_14;
  int local_10;
  short local_a;
  short local_8;
  short local_6;

  iVar9 = 0;
  local_10 = 0;
  local_18 = param_1;
  local_1c = (DArrayTy *)st::fn_004018CF(param_1,param_2);
  if (local_1c != nullptr) {
    cVar2 = param_1->field_0081;
    if ((cVar2 < '\0') || ('\a' < cVar2)) {
      cVar2 = (char)param_1->field_0024;
    }
    if ((param_5 != '\b') && ((param_5 < '\0' || (cVar2 = param_5, '\b' < param_5)))) {
      param_5 = -1;
      cVar2 = param_5;
    }
    param_5 = cVar2;
    uVar4 = local_1c->count;
    local_14 = 0;
    if (0 < (int)uVar4) {
      do {
        if (local_14 < uVar4) {
          puVar3 = DArrayAt<ushort>(local_1c, local_14);
        }
        else {
          puVar3 = nullptr;
        }
        this = st::fn_004028BA
                         (g_allPlayers_007FA174,*(char *)&param_1->field_0024,*puVar3,CASE_1);
        if ((this == nullptr) || (iVar9 = this->vfunc_F8(), iVar9 == 0))
        goto cf_common_join_0065DF91;
        uVar4 = (*this->vtable->vfunc_2C)();
        if (param_4 != 0) {
          if (uVar4 == 0x78) {
            if ((param_4 & 0x80000000) == 0) {
              if ((param_4 & 0x3fffffff) != 0) {
                iVar9 = (*this->vtable->vfunc_2C)();
                if (iVar9 == 0x78) {
                  uVar5 = this->field_0259;
                }
                else {
                  uVar5 = 0;
                }
                if ((param_4 & 0x3fffffff) != uVar5) goto cf_common_join_0065DF91;
              }
              goto LAB_0065de3c;
            }
          }
          else if (((param_4 & 0x40000000) == 0) &&
                  (((param_4 & 0x3fffffff) == 0 || ((param_4 & 0x3fffffff) == uVar4))))
          goto LAB_0065de3c;
          goto cf_common_join_0065DF91;
        }
LAB_0065de3c:
        if (param_3 == 0x3fffffff) {
LAB_0065dea6:
          if ((param_6 != nullptr) && (*param_6 != 0)) {
            (*this->vtable->vfunc_74)((short)local_2c);
            pbVar8 = local_2c;
            pbVar7 = param_6;
            do {
              bVar1 = *pbVar7;
              bVar10 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_0065deea:
                iVar9 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_0065deef;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar10 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_0065deea;
              pbVar7 = pbVar7 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar9 = 0;
LAB_0065deef:
            if (iVar9 != 0) goto cf_common_join_0065DF91;
          }
          if (((param_5 == -1) || (iVar9 = this->vfunc_6C(), param_5 == iVar9)) &&
             (((param_10 < 1 || ((param_11 < 1 || (param_12 < 1)))) ||
              ((st::fn_004018C5((STFishC *)this,&local_6,&local_8,&local_a),
               param_7 <= local_6 &&
               ((((param_8 <= local_8 && (param_9 <= local_a)) &&
                 ((int)local_6 < (int)param_7 + (int)param_10)) &&
                (((int)local_8 < (int)param_8 + (int)param_11 &&
                 ((int)local_a < (int)param_9 + (int)param_12)))))))))) {
            local_10 = local_10 + 1;
          }
        }
        else if (uVar4 == 0x78) {
          if ((param_3 & 0x80000000) == 0) {
            iVar9 = (*this->vtable->vfunc_2C)();
            if (iVar9 == 0x78) {
              iVar9 = this->field_0259;
            }
            else {
              iVar9 = 0;
            }
            pIVar6 = st::fn_0040410B(iVar9);
joined_r0x0065dea0:
            if (((uint)pIVar6 & param_3 & 0x3fffffff) != 0) goto LAB_0065dea6;
          }
        }
        else if ((param_3 & 0x40000000) == 0) {
          pIVar6 = st::fn_0040410B(uVar4);
          goto joined_r0x0065dea0;
        }
cf_common_join_0065DF91:
        local_14 = local_14 + 1;
        uVar4 = local_1c->count;
        param_1 = local_18;
        iVar9 = local_10;
      } while ((int)local_14 < (int)uVar4);
    }
    st::fn_006AE110(local_1c);
  }
  return iVar9;
}

// 0065E070 FUN_0065e070
#line 4 "decomp/ST.exe/functions/0065E070/decomp.c"
int __fastcall
st::fn_0065E070(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,char param_6,
            byte *param_7)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  ushort *puVar4;
  STGameObjC *this;
  uint uVar5;
  uint uVar6;
  IMAGE_DOS_HEADER *pIVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  bool bVar13;
  int local_4c [8];
  byte local_2c [16];
  DArrayTy *local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  int local_c;
  short local_8;
  short local_6;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar2 = *(undefined2 *)(param_1 + 0x7d);
  memset(local_4c, 0, 0x20); /* compiler bulk-zero initialization */
  iVar9 = 0;
  local_14 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_004026C1(STReplaceLowByte((uint32_t)(local_4c), (uint8_t)(*(undefined1 *)(param_1 + 0x24))),
                     STReplaceLowWord((uint32_t)(param_2), (uint16_t)(uVar2)),param_3,local_4c);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  cVar3 = *(char *)(param_1 + 0x81);
  if ((cVar3 < '\0') || ('\a' < cVar3)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    cVar3 = (char)*(undefined4 *)(param_1 + 0x24);
  }
  if ((param_6 != '\b') && ((param_6 < '\0' || (cVar3 = param_6, '\b' < param_6)))) {
    param_6 = -1;
    cVar3 = param_6;
  }
  param_6 = cVar3;
  local_10 = local_4c;
  local_c = 0;
  do {
    local_1c = (DArrayTy *)*local_10;
    if (local_1c != nullptr) {
      local_18 = 0;
      if (0 < (int)local_1c->count) {
        bVar13 = local_1c->count != 0;
        do {
          if (bVar13) {
            puVar4 = DArrayAt<ushort>(local_1c, local_18);
          }
          else {
            puVar4 = nullptr;
          }
          this = st::fn_004028BA(g_allPlayers_007FA174,(char)local_c,*puVar4,CASE_1);
          if ((this == nullptr) || (iVar9 = this->vfunc_F8(), iVar9 == 0))
          goto cf_continue_loop_0065E27E;
          uVar5 = (*this->vtable->vfunc_2C)();
          st::fn_004018C5((STFishC *)this,&local_8,&local_6,(short *)((int)&param_3 + 2));
          if (param_5 != 0) {
            if (uVar5 == 0x78) {
              if ((param_5 & 0x80000000) == 0) {
                uVar10 = param_5 & 0x3fffffff;
                if (uVar10 != 0) {
                  iVar9 = (*this->vtable->vfunc_2C)();
                  if (iVar9 == 0x78) {
                    uVar6 = this->field_0259;
                  }
                  else {
                    uVar6 = 0;
                  }
                  if (uVar10 != uVar6) goto cf_continue_loop_0065E27E;
                }
                goto LAB_0065e1b6;
              }
            }
            else if (((param_5 & 0x40000000) == 0) &&
                    (((param_5 & 0x3fffffff) == 0 || ((param_5 & 0x3fffffff) == uVar5))))
            goto LAB_0065e1b6;
            goto cf_continue_loop_0065E27E;
          }
LAB_0065e1b6:
          uVar10 = param_4;
          if (param_4 == 0x3fffffff) {
LAB_0065e218:
            pbVar8 = param_7;
            if ((param_7 != nullptr) && (*param_7 != 0)) {
              (*this->vtable->vfunc_74)((short)local_2c);
              pbVar11 = local_2c;
              do {
                bVar1 = *pbVar8;
                bVar13 = bVar1 < *pbVar11;
                if (bVar1 != *pbVar11) {
LAB_0065e25c:
                  iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                  goto LAB_0065e261;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar8[1];
                bVar13 = bVar1 < pbVar11[1];
                if (bVar1 != pbVar11[1]) goto LAB_0065e25c;
                pbVar8 = pbVar8 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar1 != 0);
              iVar9 = 0;
LAB_0065e261:
              if (iVar9 != 0) goto cf_continue_loop_0065E27E;
            }
            cVar3 = param_6;
            if ((param_6 == -1) || (iVar9 = this->vfunc_6C(), cVar3 == iVar9)) {
              local_14 = local_14 + 1;
            }
          }
          else if (uVar5 == 0x78) {
            if ((param_4 & 0x80000000) == 0) {
              iVar9 = (*this->vtable->vfunc_2C)();
              if (iVar9 == 0x78) {
                iVar9 = this->field_0259;
              }
              else {
                iVar9 = 0;
              }
              pIVar7 = st::fn_0040410B(iVar9);
joined_r0x0065e216:
              if (((uint)pIVar7 & uVar10 & 0x3fffffff) != 0) goto LAB_0065e218;
            }
          }
          else if ((param_4 & 0x40000000) == 0) {
            pIVar7 = st::fn_0040410B(uVar5);
            goto joined_r0x0065e216;
          }
cf_continue_loop_0065E27E:
          local_18 = local_18 + 1;
          bVar13 = local_18 < local_1c->count;
        } while ((int)local_18 < (int)local_1c->count);
      }
      st::fn_006AE110(local_1c);
    }
    local_c = local_c + 1;
    local_10 = local_10 + 1;
    if (7 < local_c) {
      return local_14;
    }
  } while( true );
}

// 0065E3B0 FUN_0065e3b0
#line 4 "decomp/ST.exe/functions/0065E3B0/decomp.c"
int __fastcall st::fn_0065E3B0(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  DArrayTy *array;
  ushort *puVar1;
  STGameObjC *this;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int local_8;

  uVar3 = 0;
  local_8 = 0;
  array = (DArrayTy *)st::fn_004018CF((AiFltClassTy *)param_1,param_2);
  if (array != nullptr) {
    if (0 < (int)array->count) {
      bVar4 = array->count != 0;
      do {
        if (bVar4) {
          puVar1 = DArrayAt<ushort>(array, uVar3);
        }
        else {
          puVar1 = nullptr;
        }
        this = st::fn_004028BA(g_allPlayers_007FA174,param_1->field_0024,*puVar1,CASE_1);
        if (this != nullptr) {
          iVar2 = this->vfunc_D4();
          local_8 = local_8 + iVar2;
        }
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < array->count;
      } while ((int)uVar3 < (int)array->count);
    }
    st::fn_006AE110(array);
    return local_8;
  }
  return 0;
}

// 0065E450 FUN_0065e450
#line 4 "decomp/ST.exe/functions/0065E450/decomp.c"
/* [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0065E450_param_3Enum. Cases:
   CASE_A3=163;CASE_A8=168;CASE_B2=178;CASE_BE=190

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0065E450 -> 004C5350 @ 0065E520

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0065E450 -> 004C5350 @ 0065E520 */

int __fastcall
st::fn_0065E450(AnonShape_0065E360_B94C37CB *param_1,undefined4 param_2,
            Global_sub_0065E450_param_3Enum param_3,int param_4,int param_5)

{
  byte bVar1;
  Global_sub_0065E450_param_3Enum GVar2;
  int iVar3;
  DArrayTy *array;
  Global_sub_0065E450_param_3Enum GVar4;
  ushort *puVar5;
  STGameObjC *this;
  uint uVar8;
  int uVar6;
  int uVar7;
  int local_8;

  GVar2 = param_3;
  local_8 = 0;
  switch(param_3) {
  case CASE_A3:
    iVar3 = 0x4e;
    break;
  default:
    iVar3 = 0;
    break;
  case CASE_A8:
    iVar3 = 0x45;
    break;
  case CASE_B2:
    iVar3 = 0x70;
    break;
  case CASE_BE:
    iVar3 = 0x72;
  }
  array = (DArrayTy *)st::fn_004059B6((AiFltClassTy *)param_1,param_2,iVar3);
  if (array == nullptr) {
    return 0;
  }
  GVar4 = array->count;
  param_3 = 0;
  if (0 < (int)GVar4) {
    do {
      if (param_3 < GVar4) {
        puVar5 = DArrayAt<ushort>(array, param_3);
      }
      else {
        puVar5 = nullptr;
      }
      this = st::fn_004028BA(g_allPlayers_007FA174,param_1->field_0024,*puVar5,CASE_1);
      switch(GVar2) {
      case 0:
      case 5:
      case 0x1b:
                    /* WARNING: This code block may not be properly labeled as switch case */
        uVar8 = st::fn_004012C1(this,0,nullptr,param_4,param_5,0,0,0);
        local_8 = local_8 + (uint)(uVar8 != 0);
        break;
      case 0xf:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (this->field_0024 == this->field_023D) {
LAB_0065e58d:
          if ((this->field_0245 != 0) || (this->field_04EC < 100)) goto LAB_0065e5a7;
          bVar1 = 1;
        }
        else {
          uVar6 = st::fn_004049B7((char)this->field_023D);
          iVar3 = this->field_0235;
          uVar7 = st::fn_004049B7(*(char *)&this->field_0024);
          uVar7 = (int)(byte)uVar7;
          if ((&DAT_007e1984)[uVar7 + ((uint)(byte)uVar6 + iVar3 * 3) * 3] != '\0')
          goto LAB_0065e58d;
LAB_0065e5a7:
          bVar1 = 0;
        }
        local_8 = local_8 + (uint)bVar1;
      }
                    /* WARNING: This code block may not be properly labeled as switch case */
      GVar4 = array->count;
      param_3 = param_3 + 1;
    } while ((int)param_3 < (int)GVar4);
  }
  st::fn_006AE110(array);
  return local_8;
}

// 0065E6C0 FUN_0065e6c0
#line 4 "decomp/ST.exe/functions/0065E6C0/decomp.c"
void __fastcall st::fn_0065E6C0(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  DArrayTy *array;

  array = (DArrayTy *)st::fn_004018CF((AiFltClassTy *)param_1,param_2);
  if (array != nullptr) {
    if (array->count != 0) {
      st::fn_00402270(*(uint *)&param_1->field_0024,array);
    }
    st::fn_006AE110(array);
  }
  return;
}

// 0065E700 FUN_0065e700
#line 4 "decomp/ST.exe/functions/0065E700/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0065ED90 -> 0065E700 @ 0065EDAD */

undefined4 __fastcall
st::fn_0065E700(AnonReceiver_0065ED90 *param_1,undefined4 param_2,int *param_3,int *param_4,
            int *param_5)

{
  DArrayTy *array;
  ushort *puVar1;
  STGameObjC *this;
  uint uVar2;
  bool bVar3;
  short local_a;
  short local_8;
  short local_6;

  array = (DArrayTy *)st::fn_004018CF((AiFltClassTy *)param_1,param_2);
  if ((array == nullptr) || (array->count == 0)) {
    return 0xffffffff;
  }
  uVar2 = 0;
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  if (0 < (int)array->count) {
    bVar3 = array->count != 0;
    do {
      if (bVar3) {
        puVar1 = DArrayAt<ushort>(array, uVar2);
      }
      else {
        puVar1 = nullptr;
      }
      this = st::fn_004028BA(g_allPlayers_007FA174,param_1[1].field_0x4,*puVar1,CASE_1);
      if (this != nullptr) {
        st::fn_004018C5((STFishC *)this,&local_6,&local_8,&local_a);
        *param_3 = *param_3 + (int)local_6;
        *param_4 = *param_4 + (int)local_8;
        *param_5 = *param_5 + (int)local_a;
      }
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < array->count;
    } while ((int)uVar2 < (int)array->count);
  }
  st::fn_006AE110(array);
  if (0 < (int)uVar2) {
    *param_3 = *param_3 / (int)uVar2;
    *param_4 = *param_4 / (int)uVar2;
    *param_5 = *param_5 / (int)uVar2;
    return 0;
  }
  return 0xffffffff;
}

// 0065E860 FUN_0065e860
#line 4 "decomp/ST.exe/functions/0065E860/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0065E885 MOV ECX,dword ptr [EBP + 0x8];
   first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0065E8AF MOV ECX,dword ptr [EBP + 0xc];
   first-use mask */

undefined4 __cdecl st::fn_0065E860(ushort param_1,ushort param_2,int param_3,int param_4)

{
  uint uVar1;

  if (param_4 != 0) {
    uVar1 = st::fn_0040579F(param_3);
    if ((uVar1 & 0x10) == 0) {
      *(undefined4 *)(param_4 + DAT_00811900 * 0x2c) = 0x14;
      *(uint *)(param_4 + 4 + DAT_00811900 * 0x2c) = (uint)param_1;
      *(int *)(param_4 + 0xc + DAT_00811900 * 0x2c) = param_3;
      *(uint *)(param_4 + 0x10 + DAT_00811900 * 0x2c) = (uint)param_2;
      DAT_00811900 = DAT_00811900 + 1;
    }
  }
  return 0;
}

// 0065E900 FUN_0065e900
#line 4 "decomp/ST.exe/functions/0065E900/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0065E925 MOV ECX,dword ptr [EBP + 0x8];
   first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0065E94F MOV ECX,dword ptr [EBP + 0xc];
   first-use mask */

undefined4 __cdecl st::fn_0065E900(ushort param_1,ushort param_2,int param_3,int param_4)

{
  uint uVar1;

  if (param_4 != 0) {
    uVar1 = st::fn_0040579F(param_3);
    if ((uVar1 & 0x10) == 0) {
      *(undefined4 *)(param_4 + DAT_00811900 * 0x2c) = 1;
      *(uint *)(param_4 + 4 + DAT_00811900 * 0x2c) = (uint)param_1;
      *(int *)(param_4 + 0xc + DAT_00811900 * 0x2c) = param_3;
      *(uint *)(param_4 + 0x10 + DAT_00811900 * 0x2c) = (uint)param_2;
      DAT_00811900 = DAT_00811900 + 1;
    }
  }
  return 0;
}

// 0065E9A0 FUN_0065e9a0
#line 4 "decomp/ST.exe/functions/0065E9A0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0065E9A0 -> 004162B0 @ 0065EAAE */

undefined4 __thiscall
st::fn_0065E9A0(void *this,short *param_1,short *param_2,uint param_3,uint param_4,byte *param_5,
            undefined4 param_6,int param_7)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  short local_14 [2];
  void *local_10;
  undefined4 local_c;
  uint *local_8;

  psVar1 = param_2;
  local_c = 0;
  local_8 = nullptr;
  if ((g_allPlayers_007FA174 == nullptr) || (param_2 == nullptr)) {
    return 0xffffffff;
  }
  if (((int)param_1 < 0) || (psVar4 = param_1, 8 < (int)param_1)) {
    psVar4 = STField<short *>(this,0x97);
  }
  if (psVar4 == (short *)0x8) {
    psVar4 = (short *)(uint)DAT_0080874d;
  }
  if (psVar4 == (short *)0xff) {
    return 0xffffffff;
  }
  local_10 = this;
  uVar2 = st::fn_00401E7E((char)psVar4);
  if (uVar2 != 0) {
    local_8 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10((uint)uVar2 * 0x2c));
    DAT_00811900 = 0;
    if ((char)param_6 == '\b') {
      param_6 = STReplaceLowByte((uint32_t)(param_6), (uint8_t)((char)psVar4));
    }
    else if (((char)param_6 < '\0') || ('\b' < (char)param_6)) {
      param_6 = STReplaceLowByte((uint32_t)(param_6), (uint8_t)(0xff));
    }
    st::fn_004012F8(st::machine_word_boundary_cast<undefined4>(psVar4),param_3,param_4,param_5,(char)param_6,0,0,0,-1,-1,-1,st::pointer_boundary_cast<undefined *>(st::fn_0040559C),
               local_8,(undefined *)(~-(uint)(param_7 != 0) & 0x404935));
    if (DAT_00811900 != 0) {
      iVar3 = st::fn_00402423((void *)((int)local_10 + 0x1c),(int *)local_8,DAT_00811900);
      if ((STFishC *)local_8[iVar3 * 0xb + 3] != nullptr) {
        st::fn_004018C5
                  ((STFishC *)local_8[iVar3 * 0xb + 3],(short *)&param_1,local_14,
                   (short *)((int)&param_2 + 2));
        *psVar1 = (short)param_1 + -1;
        psVar1[2] = 0;
        psVar1[1] = local_14[0] + -1;
        psVar1[3] = 3;
        psVar1[4] = 3;
        psVar1[5] = 5;
        st::fn_00401906(psVar1,psVar1 + 1,psVar1 + 3,psVar1 + 4);
        goto LAB_0065eaf3;
      }
    }
  }
  local_c = 0xffffffff;
LAB_0065eaf3:
  if (local_8 != nullptr) {
    st::fn_006AB060(&local_8);
  }
  return local_c;
}

// 0065EB70 FUN_0065eb70
#line 4 "decomp/ST.exe/functions/0065EB70/decomp.c"
int __thiscall
st::fn_0065EB70(void *this,uint param_1,int param_2,uint *param_3,uint param_4,uint param_5,
            byte *param_6,undefined4 param_7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint *local_c;
  int local_8;

  iVar5 = param_2;
  iVar3 = 0;
  local_8 = 0;
  local_c = nullptr;
  if (((g_allPlayers_007FA174 != nullptr) && (param_3 != nullptr)) && (0 < param_2)
     ) {
    if (((int)param_1 < 0) || (8 < (int)param_1)) {
      param_1 = STField<uint>(this,0x97);
    }
    if (param_1 == 8) {
      param_1 = (uint)DAT_0080874d;
    }
    if (param_1 != 0xff) {
      cVar6 = (char)param_1;
      uVar1 = st::fn_00401E7E(cVar6);
      if (uVar1 == 0) {
        local_8 = 0;
      }
      else {
        local_c = st::pointer_boundary_cast<uint *>(st::fn_006AAC10((uint)uVar1 * 0x2c));
        DAT_00811900 = 0;
        if ((char)param_7 == '\b') {
          param_7 = STReplaceLowByte((uint32_t)(param_7), (uint8_t)(cVar6));
        }
        else if (((char)param_7 < '\0') || ('\b' < (char)param_7)) {
          param_7 = STReplaceLowByte((uint32_t)(param_7), (uint8_t)(0xff));
        }
        st::fn_004012F8(param_1,param_4,param_5,param_6,(char)param_7,0,0,0,-1,-1,-1,st::pointer_boundary_cast<undefined *>(st::fn_0040559C),
                   local_c,nullptr);
        if (DAT_00811900 == 0) {
          local_8 = 0;
        }
        else if (iVar5 < DAT_00811900) {
          if (0 < iVar5) {
            do {
              iVar2 = st::fn_00402423((void *)((int)this + 0x1c),(int *)local_c,DAT_00811900);
              if (local_c[iVar2 * 0xb + 3] != 0) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                STPiece<0,2>(param_2) = CONCAT11(1,cVar6);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                param_2 = CONCAT22((short)local_c[iVar2 * 0xb + 4],(undefined2)param_2);
                st::fn_006AE1C0((DArrayTy *)param_3,&param_2);
                local_8 = local_8 + 1;
              }
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else {
          iVar4 = 0;
          iVar5 = DAT_00811900;
          if (0 < DAT_00811900) {
            do {
              if (*(int *)(iVar3 + 0xc + (int)local_c) != 0) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                STPiece<0,2>(param_2) = CONCAT11(1,cVar6);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                param_2 = CONCAT22(*(undefined2 *)(iVar3 + 0x10 + (int)local_c),(undefined2)param_2);
                st::fn_006AE1C0((DArrayTy *)param_3,&param_2);
                local_8 = local_8 + 1;
                iVar5 = DAT_00811900;
              }
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + 0x2c;
            } while (iVar4 < iVar5);
          }
        }
      }
      if (local_c != nullptr) {
        st::fn_006AB060(&local_c);
      }
      return local_8;
    }
  }
  return -1;
}

// 0065EF70 FUN_0065ef70
#line 4 "decomp/ST.exe/functions/0065EF70/decomp.c"
undefined4 __fastcall st::fn_0065EF70(AnonShape_0065EF70_E78A8204 *param_1)

{
  byte bVar1;
  byte bVar2;
  DArrayTy *pDVar3;
  int iVar4;
  byte bVar5;
  short *psVar6;
  byte *pbVar7;
  bool bVar8;
  uint local_1c;
  int local_14;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  AnonShape_0065EF70_EB9B857D *local_8;

  if (g_allPlayers_007FA174 != nullptr) {
    pDVar3 = param_1->field_022F;
    local_1c = 0;
    if (0 < (int)pDVar3->count) {
      bVar8 = pDVar3->count != 0;
      local_8 = (AnonShape_0065EF70_EB9B857D *)param_1;
      do {
        if (bVar8) {
          psVar6 = DArrayAt<short>(pDVar3, local_1c);
          bVar5 = 0;
          pbVar7 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        }
        else {
          psVar6 = nullptr;
          bVar5 = 0;
          pbVar7 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        }
        do {
          if (((int)pbVar7 < 0x808a71) &&
             ((g_playSystem_00802A38 == nullptr || (*pbVar7 < 8)))) {
            bVar1 = local_8->field_0024;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            auto _local_c = CONCAT31(uStack_b,bVar1);
            if (DAT_00808a8f == '\0') {
              if (bVar5 == bVar1) {
LAB_0065f095:
                iVar4 = 0;
              }
              else {
                bVar2 = g_playerRelationMatrix[bVar5][bVar1];
                if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar5] == 0)) {
                  iVar4 = -2;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar5] == 0)) {
                  iVar4 = -1;
                }
                else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar5] == 1)) {
                  iVar4 = 1;
                }
                else {
                  if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar5] != 1))
                  goto LAB_0065f095;
                  iVar4 = 2;
                }
              }
              bVar8 = iVar4 < 0;
            }
            else {
              bVar8 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                      g_bulkInitializedRecords_008087C7[bVar5].field_0023;
            }
            if (bVar8) {
              local_10 = 0;
              local_14 = 0;
              st::fn_00403869
                        (g_allPlayers_007FA174,bVar5,*psVar6,psVar6[1],psVar6[2],psVar6[3],psVar6[4]
                         ,psVar6[5],nullptr,nullptr,&local_10,&local_14);
              if ((0 < local_10) || (0 < local_14)) {
                local_8->field_0195 = *(undefined4 *)psVar6;
                local_8->field_0199 = *(undefined4 *)(psVar6 + 2);
                local_8->field_019D = *(undefined4 *)(psVar6 + 4);
                return 1;
              }
            }
          }
          pbVar7 = pbVar7 + 0x51;
          bVar5 = bVar5 + 1;
        } while ((int)pbVar7 < 0x808a71);
        local_1c = local_1c + 1;
        pDVar3 = (DArrayTy *)local_8->field_022F;
        bVar8 = local_1c < pDVar3->count;
      } while ((int)local_1c < (int)pDVar3->count);
    }
  }
  return 0;
}

// 0065F840 FUN_0065f840
#line 4 "decomp/ST.exe/functions/0065F840/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

uint * st::fn_0065F840(DArrayTy *param_1,uint param_2,int param_3)

{
  int iVar1;
  DArrayTy *array;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined2 local_c;
  DArrayTy *local_8;

  local_8 = nullptr;
  if ((((param_1 != nullptr) && (param_1->count != 0)) &&
      ((int)param_2 < (int)param_1->count)) && (0 < param_3)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar1 = st::fn_0072D7F0(local_54.jumpBuffer,0);
    if (iVar1 != 0) {
      g_currentExceptionFrame = local_54.previous;
      if (local_8 != nullptr) {
        st::fn_006AE110(local_8);
      }
      return nullptr;
    }
    array = st::fn_006AE290(nullptr,5,6,5);
    uVar2 = param_1->count;
    uVar4 = param_2;
    local_8 = array;
    if ((int)param_2 < (int)uVar2) {
      do {
        if (param_3 <= (int)(uVar4 - param_2)) {
          g_currentExceptionFrame = local_54.previous;
          return st::pointer_boundary_cast<uint *>(&array->flags);
        }
        if (uVar4 < uVar2) {
          puVar3 = DArrayAt<undefined4>(param_1, uVar4);
        }
        else {
          puVar3 = nullptr;
        }
        local_10 = *puVar3;
        local_c = *(undefined2 *)(puVar3 + 1);
        st::fn_006AE1C0(array,&local_10);
        uVar2 = param_1->count;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar2);
    }
    g_currentExceptionFrame = local_54.previous;
    return st::pointer_boundary_cast<uint *>(&array->flags);
  }
  return nullptr;
}

// 0065FA10 FUN_0065fa10
#line 4 "decomp/ST.exe/functions/0065FA10/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00664960 -> 0065FA10 @ 00665541; MOVSX at 00665534 establishes signed source width 2 |
   00664960 -> 0065FA10 @ 006657D4; MOVSX at 006657C1 establishes signed source width 2 | 00664960
   -> 0065FA10 @ 00666A37; MOVSX at 00666A24 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00664960 -> 0065FA10 @ 00665541; MOVSX at 00665538 establishes signed source width 2 |
   00664960 -> 0065FA10 @ 006657D4; MOVSX at 006657C8 establishes signed source width 2 | 00664960
   -> 0065FA10 @ 00666A37; MOVSX at 00666A2B establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00664960 -> 0065FA10 @ 00665541; MOVSX at 00665534 establishes signed source width 2 |
   00664960 -> 0065FA10 @ 006657D4; MOVSX at 006657C1 establishes signed source width 2 | 00664960
   -> 0065FA10 @ 00666A37; MOVSX at 00666A24 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00664960 -> 0065FA10 @ 00665541; MOVSX at 00665530 establishes signed source width 2 |
   00664960 -> 0065FA10 @ 006657D4; MOVSX at 006657BA establishes signed source width 2 | 00664960
   -> 0065FA10 @ 00666A37; MOVSX at 00666A1D establishes signed source width 2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0), and
   decompilation contains no value return */

void __fastcall
st::fn_0065FA10(AnonShape_0065FA10_37C5A4D3 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  STGroupBoatC *pSVar1;

  if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    pSVar1 = st::fn_00405CF9(param_1->field_0024,param_1->field_007D);
    if (pSVar1 != nullptr) {
      (*pSVar1->vtable->vfunc_18)((short)pSVar1,(short)param_3,(short)param_4,(short)param_5);
    }
  }
  return;
}

// 0065FD00 FUN_0065fd00
#line 4 "decomp/ST.exe/functions/0065FD00/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0065FD00 returns zeroed full register at 0065FD30 @ 0065FD32 */

uint __fastcall st::fn_0065FD00(AnonShape_0065FD00_EB74ED0C *param_1,undefined4 param_2)

{
  STGroupBoatC *this;

  if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    this = st::fn_00405CF9(param_1->field_0024,param_1->field_007D);
    if (this != nullptr) {
      this->sub_00498D20(3,0);
      return 0;
    }
  }
  return 0xffffffff;
}

// 0065FD50 FUN_0065fd50
#line 4 "decomp/ST.exe/functions/0065FD50/decomp.c"
undefined4 __thiscall
st::fn_0065FD50(void *this,int param_1,int param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  STGroupBoatC *this_00;
  short local_10 [3];
  undefined4 uStack_a;

  local_10[0] = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  STPiece<0,2>(uStack_a) = 0;
  STPiece<2,2>(uStack_a) = 0;
  STField<undefined4>(this,0xa7) = 0;
  iVar1 = st::fn_00404D54(param_1,param_2,param_3,local_10,local_10 + 1,local_10 + 2,0);
  if (iVar1 != 0) {
    if ((STField<ushort>(this,0x7d) != 0xfffe) && (g_allPlayers_007FA174 != nullptr)
       ) {
      uStack_a = param_4;
      this_00 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x7d));
      if (this_00 != nullptr) {
        this_00->sub_00498D20(1,(short)local_10);
        return 0;
      }
    }
  }
  return 0xffffffff;
}

// 0065FE10 FUN_0065fe10
#line 4 "decomp/ST.exe/functions/0065FE10/decomp.c"
undefined4 __fastcall
st::fn_0065FE10(AiFltClassTy *param_1,undefined4 param_2,int param_3,short *param_4)

{
  short sVar1;
  undefined2 uVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar3;
  DArrayTy *array;
  STGroupBoatC *this;
  int iVar4;
  DArrayTy **ppDVar5;
  DArrayTy *local_38 [5];
  uint local_24;
  undefined4 local_20;
  DArrayTy *local_1c;
  DArrayTy *local_c;
  undefined4 local_8;

  ppDVar5 = local_38;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppDVar5 = nullptr;
    ppDVar5 = ppDVar5 + 1;
  }
  local_c = nullptr;
  local_8 = 0;
  param_1->field_00A7 = 0;
  uVar2 = st::fn_0040343B(param_1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT22(extraout_var,uVar2) == 0) {
    return 0xffffffff;
  }
  sVar1 = param_1->field_0039;
  if (param_3 == 0xdd) {
    uVar3 = (-(uint)(sVar1 != 3) & 0xffffffdb) + 0x5e;
  }
  else if (param_3 == 0xde) {
    uVar3 = -(uint)(sVar1 != 3) & 0x4f;
  }
  else if (param_3 == 0xe0) {
    uVar3 = (sVar1 != 3) - 1 & 0x61;
  }
  else {
    uVar3 = 0;
  }
  array = (DArrayTy *)st::fn_004038E1(param_1,uVar3,1,param_4);
  if (array != nullptr) {
    sVar1 = param_1->field_0039;
    if (sVar1 < 1) {
LAB_0065fec9:
      iVar4 = 0;
    }
    else if (sVar1 < 3) {
      iVar4 = 0x3b;
    }
    else {
      if (sVar1 != 3) goto LAB_0065fec9;
      iVar4 = 0x60;
    }
    local_c = (DArrayTy *)st::fn_004038E1(param_1,iVar4,1,nullptr);
    if (local_c != nullptr) {
      sVar1 = param_1->field_0039;
      local_38[0] = nullptr;
      if (param_3 == 0xdd) {
        local_24 = (-(uint)(sVar1 != 3) & 0xffffffdb) + 0x5e;
      }
      else if (param_3 == 0xde) {
        local_24 = -(uint)(sVar1 != 3) & 0x4f;
      }
      else if (param_3 == 0xe0) {
        local_24 = (sVar1 != 3) - 1 & 0x61;
      }
      else {
        local_24 = 0;
      }
      local_20 = 0;
      local_38[1] = array;
      local_1c = local_c;
      if (((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) &&
         (this = st::fn_00405CF9(*(char *)&param_1->field_0024,param_1->field_007D),
         this != nullptr)) {
        this->sub_00498D20(8,(short)local_38);
        goto LAB_0065ff72;
      }
    }
  }
  local_8 = 0xffffffff;
LAB_0065ff72:
  if (array != nullptr) {
    st::fn_006AE110(array);
  }
  if (local_c != nullptr) {
    st::fn_006AE110(local_c);
  }
  return local_8;
}

