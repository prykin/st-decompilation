
void __fastcall FUN_005eff00(int param_1)

{
  int iVar1;
  short sVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x277);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    sVar2 = (((short)(iVar1 / 0xc9) + sVar2) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar2 = ((short)(iVar1 / 0xc9) + sVar2) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x27b);
  *(short *)(param_1 + 0x47) = sVar2;
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    sVar2 = (((short)(iVar1 / 0xc9) + sVar2) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar2 = ((short)(iVar1 / 0xc9) + sVar2) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x27f);
  *(short *)(param_1 + 0x49) = sVar2;
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    sVar2 = (((short)(iVar1 / 200) + sVar2) - (short)((longlong)iVar1 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    sVar2 = ((short)(iVar1 / 200) + sVar2) - (short)((longlong)iVar1 * 0x51eb851f >> 0x3f);
  }
  *(short *)(param_1 + 0x4b) = sVar2;
  *(undefined2 *)(param_1 + 0x41) = *(undefined2 *)(param_1 + 0x277);
  *(undefined2 *)(param_1 + 0x45) = *(undefined2 *)(param_1 + 0x27f);
  *(undefined2 *)(param_1 + 0x5d) = *(undefined2 *)(param_1 + 0x244);
  *(undefined2 *)(param_1 + 0x43) = *(undefined2 *)(param_1 + 0x27b);
  *(undefined2 *)(param_1 + 0x5b) = *(undefined2 *)(param_1 + 0x242);
  *(undefined2 *)(param_1 + 0x5f) = *(undefined2 *)(param_1 + 0x246);
  *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x2ba) * 0xf;
  return;
}

