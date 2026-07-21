
void __fastcall FUN_006024b0(int param_1)

{
  int iVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = (int)(short)(*(short *)(param_1 + 0x255) * 0xc9 + 100);
  *(int *)(param_1 + 0x37b) = iVar2;
  iVar1 = (int)(short)(*(short *)(param_1 + 599) * 0xc9 + 100);
  *(int *)(param_1 + 0x37f) = iVar1;
  *(int *)(param_1 + 899) = (int)(short)(*(short *)(param_1 + 0x259) * 200 + 100);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x241) == 1) {
    *(int *)(param_1 + 0x37b) = iVar2 + 100;
    *(int *)(param_1 + 0x37f) = iVar1 + 100;
  }
  *(short *)(param_1 + 0x47) = *(short *)(param_1 + 0x255);
  *(undefined2 *)(param_1 + 0x41) = *(undefined2 *)(param_1 + 0x37b);
  *(undefined2 *)(param_1 + 0x43) = *(undefined2 *)(param_1 + 0x37f);
  *(short *)(param_1 + 0x4b) = *(short *)(param_1 + 0x259);
  *(undefined2 *)(param_1 + 0x45) = *(undefined2 *)(param_1 + 899);
  *(short *)(param_1 + 0x49) = *(short *)(param_1 + 599);
  *(undefined4 *)(param_1 + 0x372) = *(undefined4 *)(param_1 + 0x245);
  *(undefined4 *)(param_1 + 0x3a7) = 1;
  *(undefined4 *)(param_1 + 0x36e) = 1;
  *(undefined4 *)(param_1 + 0x249) = 0xffffffff;
  return;
}

