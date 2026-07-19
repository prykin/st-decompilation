
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * thunk_FUN_00602e90(void)

{
  int iVar1;
  byte *pbVar2;
  ushort *puVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  iVar1 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    if (*(int *)(iStack_c + 0x241) == 1) {
      pbVar2 = (&PTR_s_Dest4_0_007cec00)[*(int *)(iStack_c + 0x372)];
    }
    else {
      pbVar2 = (&PTR_s_Dest1_0_007cebec)[*(int *)(iStack_c + 0x372)];
    }
    puVar3 = FUN_00709af0(DAT_00806774,0x1d,pbVar2,0xffffffff,0,1,0,(undefined4 *)0x0);
    if (puVar3 != (ushort *)0x0) {
      if (*(int *)(iStack_c + 0x241) == 0) {
        puStack_8 = FUN_006e9000(*(void **)(iStack_c + 0x211),**(undefined4 **)((int)puVar3 + 0x21),
                                 0x5a,0x45,
                                 (float)*(int *)(iStack_c + 0x37b) * _DAT_007904f8 * _DAT_007904f0,
                                 (float)*(int *)(iStack_c + 0x37f) * _DAT_007904f8 * _DAT_007904f0,
                                 (float)*(int *)(iStack_c + 899) * _DAT_007904f8 * _DAT_007904f0 +
                                 _DAT_007904fc,0);
      }
      if (*(int *)(iStack_c + 0x241) == 1) {
        puStack_8 = FUN_006e9000(*(void **)(iStack_c + 0x211),**(undefined4 **)((int)puVar3 + 0x21),
                                 0x78,0x56,
                                 (float)*(int *)(iStack_c + 0x37b) * _DAT_007904f8 * _DAT_007904f0,
                                 (float)*(int *)(iStack_c + 0x37f) * _DAT_007904f8 * _DAT_007904f0,
                                 (float)*(int *)(iStack_c + 899) * _DAT_007904f8 * _DAT_007904f0 +
                                 _DAT_007904fc,0);
      }
    }
    g_currentExceptionFrame = IStack_50.previous;
    return puStack_8;
  }
  g_currentExceptionFrame = IStack_50.previous;
  return puStack_8;
}

