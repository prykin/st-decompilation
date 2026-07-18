
void __fastcall FUN_00640240(int param_1)

{
  uint *puVar1;
  
  if (*(int **)(param_1 + 0x37f) != (int *)0x0) {
    FUN_006e8660(*(void **)(param_1 + 0x211),*(int **)(param_1 + 0x37f),0,0,0,0,0,0,0);
    FUN_006e9520(*(void **)(param_1 + 0x211),**(uint **)(param_1 + 0x37f),0,0x640320,
                 (uint)*(uint **)(param_1 + 0x37f));
    FUN_006e9720(*(void **)(param_1 + 0x211),**(uint **)(param_1 + 0x37f),
                 (uint)*(byte *)((int)*(uint **)(param_1 + 0x37f) + 0x15) * 0x100 + DAT_008032b8);
    puVar1 = *(uint **)(param_1 + 0x37f);
    FUN_006ea960(*(void **)(param_1 + 0x211),*puVar1,(float)puVar1[1],(float)puVar1[2],49.829998);
    FUN_006eaaa0(*(void **)(param_1 + 0x211),**(uint **)(param_1 + 0x37f),0);
  }
  return;
}

