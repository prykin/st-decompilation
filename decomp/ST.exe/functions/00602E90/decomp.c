
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00602e90(void)

{
  int iVar1;
  byte *pbVar2;
  ushort *puVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar1 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    if (*(int *)(local_c + 0x241) == 1) {
      pbVar2 = (&PTR_s_Dest4_0_007cec00)[*(int *)(local_c + 0x372)];
    }
    else {
      pbVar2 = (&PTR_s_Dest1_0_007cebec)[*(int *)(local_c + 0x372)];
    }
    puVar3 = FUN_00709af0(DAT_00806774,0x1d,pbVar2,0xffffffff,0,1,0,(undefined4 *)0x0);
    if (puVar3 != (ushort *)0x0) {
      if (*(int *)(local_c + 0x241) == 0) {
        local_8 = FUN_006e9000(*(void **)(local_c + 0x211),**(undefined4 **)((int)puVar3 + 0x21),
                               0x5a,0x45,
                               (float)*(int *)(local_c + 0x37b) * _DAT_007904f8 * _DAT_007904f0,
                               (float)*(int *)(local_c + 0x37f) * _DAT_007904f8 * _DAT_007904f0,
                               (float)*(int *)(local_c + 899) * _DAT_007904f8 * _DAT_007904f0 +
                               _DAT_007904fc,0);
      }
      if (*(int *)(local_c + 0x241) == 1) {
        local_8 = FUN_006e9000(*(void **)(local_c + 0x211),**(undefined4 **)((int)puVar3 + 0x21),
                               0x78,0x56,
                               (float)*(int *)(local_c + 0x37b) * _DAT_007904f8 * _DAT_007904f0,
                               (float)*(int *)(local_c + 0x37f) * _DAT_007904f8 * _DAT_007904f0,
                               (float)*(int *)(local_c + 899) * _DAT_007904f8 * _DAT_007904f0 +
                               _DAT_007904fc,0);
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

