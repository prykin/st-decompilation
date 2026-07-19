
undefined4 FUN_005da7a0(void)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  int local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar3 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    piVar1 = (int *)(local_8 + 0x68a);
    if (*(int *)(local_8 + 0x68a) == 0) {
      FUN_006b62d0(piVar1);
      piVar4 = (int *)*piVar1;
      bVar2 = true;
      if (*piVar4 <= piVar4[1]) {
        piVar4 = (int *)FUN_006bfb50(piVar4,*piVar4 * 0x14 + 0x1c);
        if (piVar4 == (int *)0x0) {
          bVar2 = false;
        }
        else {
          *piVar1 = (int)piVar4;
          *piVar4 = *piVar4 + 1;
        }
      }
      if (bVar2) {
        pcVar5 = (char *)FUN_006b0140(0x254b,DAT_00807618);
        pcVar5 = FUN_006c8170(pcVar5);
        if (pcVar5 != (char *)0x0) {
          iVar3 = *piVar1;
          FUN_0072da70((undefined4 *)(iVar3 + 0x1c),(undefined4 *)(iVar3 + 8),
                       *(int *)(iVar3 + 4) * 0x14);
          iVar3 = *piVar1;
          *(undefined4 *)(iVar3 + 0xc) = DAT_007cd700;
          *(undefined4 *)(iVar3 + 0x10) = DAT_007cd704;
          *(undefined4 *)(iVar3 + 0x14) = DAT_007cd708;
          *(undefined4 *)(iVar3 + 0x18) = DAT_007cd70c;
          *(char **)(*piVar1 + 8) = pcVar5;
          *(int *)(*piVar1 + 4) = *(int *)(*piVar1 + 4) + 1;
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_005da910(local_8);
  return 0xfffffffa;
}

