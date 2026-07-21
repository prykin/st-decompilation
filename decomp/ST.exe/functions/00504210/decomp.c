#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel3.cpp
   CPanelTy::UpdateStackPanel */

void __thiscall CPanelTy::UpdateStackPanel(CPanelTy *this,uint param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  CPanelTy *this_00;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  ushort *puVar8;
  byte bVar9;
  AnonShape_0043BEB0_1C00EC12 *pAVar10;
  AnonShape_0043BEB0_1C00EC12 *pAVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  char local_ac [68];
  InternalExceptionFrame local_68;
  CPanelTy *local_24;
  char *local_20;
  uint local_1c;
  AnonShape_0043BEB0_1C00EC12 *local_18;
  undefined4 *local_14;
  undefined1 *local_10;
  AnonShape_0043BEB0_1C00EC12 *local_c;
  byte local_5;

  if (0x3ff < g_nWidth_00806730) {
    local_68.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_68;
    local_24 = this;
    iVar6 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
    this_00 = local_24;
    if (iVar6 == 0) {
      local_c = (AnonShape_0043BEB0_1C00EC12 *)(param_1 & 0xff);
      pAVar11 = (AnonShape_0043BEB0_1C00EC12 *)(&local_24->field_0xc87 + (int)local_c * 0x42);
      pAVar10 = pAVar11;
      pcVar7 = local_ac;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar2 = pAVar10->field_0001;
        uVar3 = pAVar10->field_0002;
        uVar4 = pAVar10->field_0003;
        pcVar7[0] = pAVar10->field_0x0;
        pcVar7[1] = uVar2;
        pcVar7[2] = uVar3;
        pcVar7[3] = uVar4;
        pAVar10 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar10->field_0004;
        pcVar7 = pcVar7 + 4;
      }
      uVar2 = pAVar10->field_0001;
      local_18 = pAVar11;
      pcVar7[0] = pAVar10->field_0x0;
      pcVar7[1] = uVar2;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::GetPanelInfo
                (g_sTAllPlayers_007FA174,CONCAT31((int3)(param_1 >> 8),(char)param_1 + '\x0e'),
                 pAVar11);
      pAVar11 = local_c;
      local_1c = local_1c & 0xffffff00;
      bVar5 = ((g_nWidth_00806730 != 0x400) - 1U & 0xfc) + 6;
      local_5 = bVar5;
      if (bVar5 != 0) {
        local_20 = local_ac;
        local_c = local_18;
        local_10 = &this_00->field_0D3B + (int)pAVar11 * 6;
        local_14 = &this_00->field_0D53 + (int)pAVar11 * 6;
        do {
          iVar6 = 0xb;
          bVar12 = true;
          pcVar7 = local_20;
          pAVar11 = local_c;
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar12 = *pcVar7 == *(char *)pAVar11;
            pcVar7 = pcVar7 + 1;
            pAVar11 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar11->field_0001;
          } while (bVar12);
          if ((!bVar12) && (local_10[0xc] == '\x01')) {
            puVar15 = (undefined4 *)0x0;
            iVar14 = 0;
            iVar6 = 1;
            bVar5 = 0;
            uVar13 = 6;
            pcVar7 = (char *)thunk_FUN_004f1d20((undefined1 *)local_c);
            puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                               (DAT_00806794,CASE_1F,pcVar7,uVar13,bVar5,iVar6,iVar14,puVar15);
            local_14[-0x12] = puVar8;
            *local_10 = 0;
            *local_14 = this_00->field_0038;
            thunk_FUN_004f1c80(this_00,param_1,local_1c);
            bVar9 = ((char)param_1 == '\0') + 9;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_18 = (AnonShape_0043BEB0_1C00EC12 *)CONCAT31(local_18._1_3_,bVar9);
            bVar5 = local_5;
            if (bVar9 < 0xb) {
              if (-1 < (&this_00->field_0148)[bVar9]) {
                Library::DKW::DDX::FUN_006b3640
                          ((int *)PTR_008075a8,(&this_00->field_0148)[bVar9],0xffffffff,
                           (&this_00->field_003C)[bVar9],(&this_00->field_0094)[bVar9]);
                bVar5 = local_5;
              }
            }
          }
          bVar9 = (char)local_1c + 1;
          local_14 = local_14 + 1;
          local_20 = local_20 + 0xb;
          local_c = (AnonShape_0043BEB0_1C00EC12 *)&local_c->field_000B;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_1c = CONCAT31(local_1c._1_3_,bVar9);
          local_10 = local_10 + 1;
        } while (bVar9 < bVar5);
      }
      g_currentExceptionFrame = local_68.previous;
      return;
    }
    g_currentExceptionFrame = local_68.previous;
    iVar14 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel3.cpp",0x2a,0,iVar6,"%s"
                                ,"CPanelTy::UpdateStackPanel");
    if (iVar14 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\cpanel3.cpp",0x2a);
  }
  return;
}

