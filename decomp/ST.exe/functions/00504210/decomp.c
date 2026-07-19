
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel3.cpp
   CPanelTy::UpdateStackPanel */

void __thiscall CPanelTy::UpdateStackPanel(CPanelTy *this,uint param_1)

{
  code *pcVar1;
  CPanelTy *this_00;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  byte bVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  int *piVar8;
  void *unaff_EDI;
  int *piVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
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
  
  if (0x3ff < DAT_00806730) {
    local_68.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_68;
    local_24 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_24;
    if (iVar3 == 0) {
      local_c = (int *)(param_1 & 0xff);
      piVar8 = (int *)(&local_24->field_0xc87 + (int)local_c * 0x42);
      piVar7 = piVar8;
      piVar9 = local_ac;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      local_18 = piVar8;
      *(short *)piVar9 = (short)*piVar7;
      STAllPlayersC::GetPanelInfo
                (DAT_007fa174,CONCAT31((int3)(param_1 >> 8),(char)param_1 + '\x0e'),piVar8);
      piVar8 = local_c;
      local_1c = local_1c & 0xffffff00;
      bVar2 = ((DAT_00806730 != 0x400) - 1U & 0xfc) + 6;
      local_5 = bVar2;
      if (bVar2 != 0) {
        local_20 = local_ac;
        local_c = local_18;
        local_10 = &this_00->field_0xd3b + (int)piVar8 * 6;
        local_14 = (undefined4 *)(&this_00->field_0xd53 + (int)piVar8 * 0x18);
        do {
          iVar3 = 0xb;
          bVar10 = true;
          piVar8 = local_20;
          piVar7 = local_c;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar10 = (char)*piVar8 == (char)*piVar7;
            piVar8 = (int *)((int)piVar8 + 1);
            piVar7 = (int *)((int)piVar7 + 1);
          } while (bVar10);
          if ((!bVar10) && (local_10[0xc] == '\x01')) {
            puVar13 = (undefined4 *)0x0;
            iVar12 = 0;
            iVar3 = 1;
            bVar2 = 0;
            uVar11 = 6;
            pbVar4 = (byte *)thunk_FUN_004f1d20((undefined1 *)local_c);
            puVar5 = FUN_00709af0(DAT_00806794,CASE_1F,pbVar4,uVar11,bVar2,iVar3,iVar12,puVar13);
            local_14[-0x12] = puVar5;
            *local_10 = 0;
            *local_14 = this_00->field_0038;
            thunk_FUN_004f1c80(this_00,param_1,local_1c);
            bVar6 = ((char)param_1 == '\0') + 9;
            local_18 = (int *)CONCAT31(local_18._1_3_,bVar6);
            bVar2 = local_5;
            if (bVar6 < 0xb) {
              uVar11 = (uint)bVar6;
              if (-1 < (int)*(uint *)(&this_00->field_0x148 + uVar11 * 4)) {
                Library::DKW::DDX::FUN_006b3640
                          (DAT_008075a8,*(uint *)(&this_00->field_0x148 + uVar11 * 4),0xffffffff,
                           *(uint *)(&this_00->field_0x3c + uVar11 * 4),
                           *(uint *)(&this_00->field_0x94 + uVar11 * 4));
                bVar2 = local_5;
              }
            }
          }
          bVar6 = (char)local_1c + 1;
          local_14 = local_14 + 1;
          local_20 = (int *)((int)local_20 + 0xb);
          local_c = (int *)((int)local_c + 0xb);
          local_1c = CONCAT31(local_1c._1_3_,bVar6);
          local_10 = local_10 + 1;
        } while (bVar6 < bVar2);
      }
      g_currentExceptionFrame = local_68.previous;
      return;
    }
    g_currentExceptionFrame = local_68.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Andrey_cpanel3_cpp_007c26a0,0x2a,0,iVar3,&DAT_007a4ccc
                                ,s_CPanelTy__UpdateStackPanel_007c26e0);
    if (iVar12 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel3_cpp_007c26a0,0x2a);
  }
  return;
}

