
void __fastcall FUN_0057cb30(int param_1)

{
  int iVar1;

  iVar1 = (int)g_worldGrid.sizeY;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((g_worldGrid.sizeX + -1 < *(int *)(param_1 + 599)) || (*(int *)(param_1 + 599) < 0)) ||
      (iVar1 + -1 < *(int *)(param_1 + 0x25b))) || (*(int *)(param_1 + 0x25b) < 0)) {
    *(int *)(param_1 + 599) = g_worldGrid.sizeX + -1 >> 1;
    *(int *)(param_1 + 0x25b) = iVar1 + -1 >> 1;
  }
  return;
}

