
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::SwitchCPanel */

void __thiscall CPanelTy::SwitchCPanel(CPanelTy *this)

{
  code *pcVar1;
  bool bVar2;
  CPanelTy *this_00;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined1 *puVar7;
  undefined4 *puVar8;
  void *unaff_EDI;
  uint uVar9;
  byte bVar10;
  undefined4 *puVar11;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  int local_c;
  int local_8;
  
  if (DAT_00808784 == 0) {
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      local_54.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_54;
      local_10 = this;
      iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
      this_00 = local_10;
      if (iVar3 == 0) {
        switch(local_10->field_023F) {
        case 1:
          thunk_FUN_004a9b60(local_10->field_011C,local_10->field_0120,local_10->field_0124,
                             local_10->field_0128);
          this_00->field_023F = 6;
          if (DAT_008016e8 != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(DAT_008016e8,'\0');
          }
          if (DAT_0080167c != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(DAT_0080167c,'\0');
          }
          if (DAT_00801684 != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(DAT_00801684,'\0');
          }
          if (DAT_00801680 != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(DAT_00801680,'\0');
          }
          if (DAT_00801698 != (int *)0x0) {
            (**(code **)(*DAT_00801698 + 0x1c))(0);
          }
          if (DAT_00802a44 != (void *)0x0) {
            thunk_FUN_00552160(DAT_00802a44,'\0','\0');
          }
          if (DAT_00801678 != (int *)0x0) {
            (**(code **)(*DAT_00801678 + 0x1c))(0);
          }
          if (DAT_008016ec != (int *)0x0) {
            (**(code **)(*DAT_008016ec + 0x1c))(0);
          }
          if (DAT_00802a48 != (int *)0x0) {
            (**(code **)(*DAT_00802a48 + 0x1c))(0);
          }
          if (DAT_0080168c != (int *)0x0) {
            (**(code **)(*DAT_0080168c + 0x1c))(0);
          }
          if (DAT_00801690 != (int *)0x0) {
            (**(code **)(*DAT_00801690 + 0x18))(0);
          }
          if (DAT_008016dc != (OptPanelTy *)0x0) {
            OptPanelTy::SwitchOptPanelOff(DAT_008016dc);
          }
          ShiftControls(this_00,0);
          if (DAT_0080731a != 0) {
            puVar7 = &this_00->field_02EC;
            puVar8 = &this_00->field_02EE;
            local_8 = 2;
            do {
              puVar11 = (undefined4 *)0x0;
              iVar6 = 0;
              iVar3 = 1;
              bVar10 = 0;
              uVar9 = 6;
              pbVar4 = (byte *)thunk_FUN_00526100((undefined1 *)0x0,0);
              puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                                 (DAT_00806794,CASE_1F,pbVar4,uVar9,bVar10,iVar3,iVar6,puVar11);
              puVar8[-3] = puVar5;
              puVar7[-2] = 0;
              *puVar7 = 4;
              *puVar8 = this_00->field_0038;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            puVar8 = &this_00->field_0D53;
            puVar7 = &this_00->field_0D47;
            local_c = 2;
            do {
              local_8 = 6;
              do {
                puVar11 = (undefined4 *)0x0;
                iVar6 = 0;
                iVar3 = 1;
                bVar10 = 0;
                uVar9 = 6;
                pbVar4 = (byte *)thunk_FUN_00526100((undefined1 *)0x0,0);
                puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                                   (DAT_00806794,CASE_1F,pbVar4,uVar9,bVar10,iVar3,iVar6,puVar11);
                puVar8[-0x12] = puVar5;
                puVar7[-0xc] = 0;
                *puVar7 = 4;
                *puVar8 = this_00->field_0038;
                puVar8 = puVar8 + 1;
                puVar7 = puVar7 + 1;
                local_8 = local_8 + -1;
              } while (local_8 != 0);
              local_c = local_c + -1;
            } while (local_c != 0);
            g_currentExceptionFrame = local_54.previous;
            return;
          }
switchD_004f9f52_caseD_3:
          this_00->field_023F = 4;
          thunk_FUN_005252c0(CASE_B0);
          g_currentExceptionFrame = local_54.previous;
          return;
        case 2:
        case 4:
          local_10->field_023F = 3;
          thunk_FUN_005252c0(CASE_AF);
          if (DAT_008016e8 != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(DAT_008016e8,'\0');
          }
          if (DAT_0080167c != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(DAT_0080167c,'\0');
          }
          if (DAT_00801684 != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(DAT_00801684,'\0');
          }
          if (DAT_00801680 != (ProdPanelTy *)0x0) {
            ProdPanelTy::SetPanel(DAT_00801680,'\0');
          }
          if (DAT_00801698 != (int *)0x0) {
            (**(code **)(*DAT_00801698 + 0x1c))(0);
          }
          if (DAT_00802a44 != (void *)0x0) {
            thunk_FUN_00552160(DAT_00802a44,'\0','\0');
          }
          if (DAT_00801678 != (int *)0x0) {
            (**(code **)(*DAT_00801678 + 0x1c))(0);
          }
          if (DAT_008016ec != (int *)0x0) {
            (**(code **)(*DAT_008016ec + 0x1c))(0);
          }
          if (DAT_00802a48 != (int *)0x0) {
            (**(code **)(*DAT_00802a48 + 0x1c))(0);
          }
          if (DAT_0080168c != (int *)0x0) {
            (**(code **)(*DAT_0080168c + 0x1c))(0);
          }
          if (DAT_00801690 != (int *)0x0) {
            (**(code **)(*DAT_00801690 + 0x18))(0);
          }
          if (DAT_008016dc != (OptPanelTy *)0x0) {
            OptPanelTy::SwitchOptPanelOff(DAT_008016dc);
          }
        default:
          g_currentExceptionFrame = local_54.previous;
          return;
        case 3:
          goto switchD_004f9f52_caseD_3;
        }
      }
      g_currentExceptionFrame = local_54.previous;
      iVar6 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x40f,0,iVar3,
                                 &DAT_007a4ccc,s_CPanelTy__SwitchCPanel_007c2284);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x40f);
    }
  }
  return;
}

