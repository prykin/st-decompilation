
void FUN_006cee60(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;

  piVar1 = (int *)(param_1 + 0x1a0);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar4 = (uint *)**(undefined4 **)(param_1 + 0x1ac);
  param_1 = *piVar1;
  if (0 < *piVar1) {
    do {
      uVar2 = *puVar4;
      if (((uVar2 & 0x8000) != 0) && ((uVar2 & 0xa0000000) != 0)) {
        if ((uVar2 & 0x20000000) == 0) {
          uVar2 = puVar4[0x32];
          iVar3 = 0;
          if (0 < (int)uVar2) {
            do {
              piVar1 = *(int **)(puVar4[0x33] + iVar3 * 4);
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(*piVar1 + 0x6c))(piVar1);
              iVar3 = iVar3 + 1;
            } while (iVar3 < (int)uVar2);
          }
        }
        else {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)puVar4[0x33] + 0x6c))((int *)puVar4[0x33]);
        }
      }
      puVar4 = puVar4 + 0x35;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

