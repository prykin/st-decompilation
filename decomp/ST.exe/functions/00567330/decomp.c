#include "../../pseudocode_runtime.h"


void __fastcall FUN_00567330(RecoveredRecord_00567330_5C558B02 *param_1)

{
  char cVar1;
  byte bVar2;
  RecoveredRecord_00567330_5C558B02 *pRVar3;
  int iVar4;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte local_150 [260];
  InternalExceptionFrame local_4c;
  RecoveredRecord_00567330_5C558B02 *local_8;

  if ((param_1->field_0DEF == 0) || (param_1->field_0DF3 == 0)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = param_1;

    iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    pRVar3 = local_8;
    if (iVar4 == 0) {
      uVar6 = 0xffffffff;
      pcVar10 = &local_8->field_0x230;
      do {
        pcVar11 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pbVar9 = (byte *)(pcVar11 + -uVar6);
      pbVar12 = local_150;
      memmove(pbVar12, pbVar9, uVar6); /* compiler REP MOVS byte copy */
      uVar7 = 0;
      uVar6 = 0xffffffff;
      pcVar10 = PTR_s_sounds_0079b028;
      do {
        pcVar11 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pbVar9 = local_150;
      do {
        pbVar12 = pbVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pbVar12 = pbVar9 + 1;
        bVar2 = *pbVar9;
        pbVar9 = pbVar12;
      } while (bVar2 != 0);
      pbVar9 = (byte *)(pcVar11 + -uVar6);
      pbVar12 = pbVar12 + -1;
      memmove(pbVar12, pbVar9, uVar6); /* compiler REP MOVS byte copy */

      puVar4 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,local_150,0,0,0);
      pRVar3->field_0DEF = (int)puVar4;
      piVar5 = Library::Ourlib::MFWAV::mfSndTblLoad((int)puVar4,"SOUNDLIST",0);
      pRVar3->field_0DF3 = (int)piVar5;
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    *(undefined4 *)&local_8[1].field_0x194 = 0;
  }
  return;
}

