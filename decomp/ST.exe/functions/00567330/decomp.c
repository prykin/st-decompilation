
void __fastcall FUN_00567330(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  byte *pbVar9;
  void *unaff_EDI;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte local_150 [260];
  InternalExceptionFrame local_4c;
  int local_8;
  
  if ((*(int *)(param_1 + 0xdef) == 0) || (*(int *)(param_1 + 0xdf3) == 0)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = param_1;
    iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    iVar3 = local_8;
    if (iVar4 == 0) {
      uVar7 = 0xffffffff;
      pcVar10 = (char *)(local_8 + 0x230);
      do {
        pcVar11 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pbVar9 = (byte *)(pcVar11 + -uVar7);
      pbVar12 = local_150;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar12 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar12 = pbVar12 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar12 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar12 = pbVar12 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar10 = PTR_s_sounds_0079b028;
      do {
        pcVar11 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar4 = -1;
      pbVar9 = local_150;
      do {
        pbVar12 = pbVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pbVar12 = pbVar9 + 1;
        bVar2 = *pbVar9;
        pbVar9 = pbVar12;
      } while (bVar2 != 0);
      pbVar9 = (byte *)(pcVar11 + -uVar7);
      pbVar12 = pbVar12 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar12 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar12 = pbVar12 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar12 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar12 = pbVar12 + 1;
      }
      puVar5 = FUN_006f0ec0(0x345,local_150,0,0,0);
      *(undefined4 **)(iVar3 + 0xdef) = puVar5;
      piVar6 = FUN_0071a5e0((int)puVar5,s_SOUNDLIST_007c97f0,0);
      *(int **)(iVar3 + 0xdf3) = piVar6;
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    *(undefined4 *)(local_8 + 0xf8b) = 0;
  }
  return;
}

