#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel3.cpp
   CPanelTy::UpdateStackPanel */

void __thiscall CPanelTy::UpdateStackPanel(CPanelTy *this,uint param_1)

{
  byte uVar2;
  byte uVar3;
  byte uVar4;
  CPanelTy *this_00;
  byte bVar5;
  int iVar6;
  char *pcVar6;
  ushort *puVar7;
  int iVar9;
  byte bVar8;
  int iVar10;
  RecoveredRecordView_0043BEB0_8330D129 *pRVar11;
  RecoveredRecordView_0043BEB0_8330D129 *pRVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  char local_ac [68];
  InternalExceptionFrame local_68;
  CPanelTy *local_24;
  char *local_20;
  uint local_1c;
  RecoveredRecordView_0043BEB0_8330D129 *local_18;
  uint *local_14;
  byte *local_10;
  RecoveredRecordView_0043BEB0_8330D129 *local_c;
  byte local_5;

  if (0x3ff < g_nWidth_00806730) {
    local_68.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_68;
    local_24 = this;

    iVar6 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
    this_00 = local_24;
    if (iVar6 == 0) {
      local_c = (RecoveredRecordView_0043BEB0_8330D129 *)(param_1 & 0xff);
      pRVar12 = (RecoveredRecordView_0043BEB0_8330D129 *)
                (&local_24->field_0xc87 + (int)local_c * 0x42);
      pRVar11 = pRVar12;
      pcVar6 = local_ac;
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        uVar2 = pRVar11->field_0001;
        uVar3 = pRVar11->field_0002;
        uVar4 = pRVar11->field_0003;
        pcVar6[0] = pRVar11->field_0x0;
        pcVar6[1] = uVar2;
        pcVar6[2] = uVar3;
        pcVar6[3] = uVar4;
        pRVar11 = (RecoveredRecordView_0043BEB0_8330D129 *)&pRVar11->field_0004;
        pcVar6 = pcVar6 + 4;
      }
      uVar2 = pRVar11->field_0001;
      local_18 = pRVar12;
      pcVar6[0] = pRVar11->field_0x0;
      pcVar6[1] = uVar2;
      /* ST_CALLSITE[00504295]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
      STAllPlayersC::GetPanelInfo
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(param_1), (uint8_t)((char)param_1 + '\x0e')),pRVar12
                );
      pRVar12 = local_c;
      local_1c = local_1c & 0xffffff00;
      bVar5 = ((g_nWidth_00806730 != 0x400) - 1U & 0xfc) + 6;
      local_5 = bVar5;
      if (bVar5 != 0) {
        local_20 = local_ac;
        local_c = local_18;
        local_10 = &this_00->field_0D3B + (int)pRVar12 * 6;
        local_14 = this_00->field_0DBF + (int)pRVar12 * 6 + -0x1b;
        do {
          iVar10 = 0xb;
          bVar13 = true;
          pcVar6 = local_20;
          pRVar12 = local_c;
          do {
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            bVar13 = *pcVar6 == *(char *)pRVar12;
            pcVar6 = pcVar6 + 1;
            pRVar12 = (RecoveredRecordView_0043BEB0_8330D129 *)&pRVar12->field_0001;
          } while (bVar13);
          if ((!bVar13) && (local_10[0xc] == '\x01')) {
            puVar16 = nullptr;
            iVar15 = 0;
            iVar10 = 1;
            bVar5 = 0;
            uVar14 = 6;
            /* ST_CALLSITE[00504314]: CALL 0x004023b5; direct=004023B5 thunk_FUN_004f1d20; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__stdcall;pointer:/char;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_004F1D20_D68BC0B9 */
            pcVar6 = thunk_FUN_004f1d20((RecoveredRecord_004F1D20_D68BC0B9 *)local_c);
            puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                               (PTR_00806794,CASE_1F,pcVar6,uVar14,bVar5,iVar10,iVar15,puVar16);
            local_14[-0x12] = (uint)puVar7;
            *local_10 = 0;
            *local_14 = this_00->field_0038;
            /* ST_CALLSITE[00504345]: CALL 0x00403b57; direct=00403B57 CPanelTy::sub_004F1C80 */
            sub_004F1C80(this_00,param_1,local_1c);
            bVar8 = ((char)param_1 == '\0') + 9;
            local_18 = (RecoveredRecordView_0043BEB0_8330D129 *)STReplaceLowByte((uint32_t)(local_18), (uint8_t)(bVar8));
            bVar5 = local_5;
            if (bVar8 < 0xb) {
              if (-1 < (int)this_00->field_0148[bVar8]) {

                Library::DKW::DDX::FUN_006b3640
                          ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[bVar8],0xffffffff,
                           (&this_00->field_003C)[bVar8],(&this_00->field_0094)[bVar8]);
                bVar5 = local_5;
              }
            }
          }
          bVar8 = (char)local_1c + 1;
          local_14 = local_14 + 1;
          local_20 = local_20 + 0xb;
          local_c = (RecoveredRecordView_0043BEB0_8330D129 *)&local_c->field_000B;
          local_1c = STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar8));
          local_10 = local_10 + 1;
        } while (bVar8 < bVar5);
      }
      g_currentExceptionFrame = local_68.previous;
      return;
    }
    g_currentExceptionFrame = local_68.previous;

    iVar9 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel3.cpp",0x2a,0,iVar6,"%s",
                               "CPanelTy::UpdateStackPanel");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\cpanel3.cpp",0x2a);
  }
  return;
}

