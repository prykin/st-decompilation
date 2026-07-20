
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel3.cpp
   CPanelTy::UpdateStackPanel */

void __thiscall CPanelTy::UpdateStackPanel(CPanelTy *this,uint param_1)

{
  code *pcVar1;
  CPanelTy *this_00;
  byte bVar2;
  int iVar3;
  char *text;
  ushort *puVar4;
  byte bVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  int *piVar7;
  void *unaff_EDI;
  int *piVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int local_ac [17];
  InternalExceptionFrame local_68;
  CPanelTy *local_24;
  int *local_20;
  uint local_1c;
  int *local_18;
  undefined4 *local_14;
  undefined1 *local_10;
  int *local_c;
  byte local_5;
  
  if (0x3ff < g_nWidth_00806730) {
    local_68.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_68;
    local_24 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_24;
    if (iVar3 == 0) {
      local_c = (int *)(param_1 & 0xff);
      piVar7 = (int *)(&local_24->field_0xc87 + (int)local_c * 0x42);
      piVar6 = piVar7;
      piVar8 = local_ac;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      }
      local_18 = piVar7;
      *(short *)piVar8 = (short)*piVar6;
      STAllPlayersC::GetPanelInfo
                (g_sTAllPlayers_007FA174,CONCAT31((int3)(param_1 >> 8),(char)param_1 + '\x0e'),
                 piVar7);
      piVar7 = local_c;
      local_1c = local_1c & 0xffffff00;
      bVar2 = ((g_nWidth_00806730 != 0x400) - 1U & 0xfc) + 6;
      local_5 = bVar2;
      if (bVar2 != 0) {
        local_20 = local_ac;
        local_c = local_18;
        local_10 = &this_00->field_0D3B + (int)piVar7 * 6;
        local_14 = &this_00->field_0D53 + (int)piVar7 * 6;
        do {
          iVar3 = 0xb;
          bVar9 = true;
          piVar7 = local_20;
          piVar6 = local_c;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar9 = (char)*piVar7 == (char)*piVar6;
            piVar7 = (int *)((int)piVar7 + 1);
            piVar6 = (int *)((int)piVar6 + 1);
          } while (bVar9);
          if ((!bVar9) && (local_10[0xc] == '\x01')) {
            puVar12 = (undefined4 *)0x0;
            iVar11 = 0;
            iVar3 = 1;
            bVar2 = 0;
            uVar10 = 6;
            text = (char *)thunk_FUN_004f1d20((undefined1 *)local_c);
            puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                               (DAT_00806794,CASE_1F,text,uVar10,bVar2,iVar3,iVar11,puVar12);
            local_14[-0x12] = puVar4;
            *local_10 = 0;
            *local_14 = this_00->field_0038;
            thunk_FUN_004f1c80(this_00,param_1,local_1c);
            bVar5 = ((char)param_1 == '\0') + 9;
            local_18 = (int *)CONCAT31(local_18._1_3_,bVar5);
            bVar2 = local_5;
            if (bVar5 < 0xb) {
              uVar10 = (uint)bVar5;
              if (-1 < (int)(&this_00->field_0148)[uVar10]) {
                Library::DKW::DDX::FUN_006b3640
                          (DAT_008075a8,(&this_00->field_0148)[uVar10],0xffffffff,
                           (&this_00->field_003C)[uVar10],
                           *(uint *)(&this_00->field_0x94 + uVar10 * 4));
                bVar2 = local_5;
              }
            }
          }
          bVar5 = (char)local_1c + 1;
          local_14 = local_14 + 1;
          local_20 = (int *)((int)local_20 + 0xb);
          local_c = (int *)((int)local_c + 0xb);
          local_1c = CONCAT31(local_1c._1_3_,bVar5);
          local_10 = local_10 + 1;
        } while (bVar5 < bVar2);
      }
      g_currentExceptionFrame = local_68.previous;
      return;
    }
    g_currentExceptionFrame = local_68.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Andrey_cpanel3_cpp_007c26a0,0x2a,0,iVar3,&DAT_007a4ccc
                                ,s_CPanelTy__UpdateStackPanel_007c26e0);
    if (iVar11 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel3_cpp_007c26a0,0x2a);
  }
  return;
}

