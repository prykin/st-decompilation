
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
  CPanelTy *pCVar7;
  void *unaff_EDI;
  CPanelTy *pCVar8;
  uint uVar9;
  byte bVar10;
  undefined4 *puVar11;
  undefined4 local_54;
  undefined4 local_50 [16];
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
      local_54 = DAT_00858df8;
      DAT_00858df8 = &local_54;
      local_10 = this;
      iVar3 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
      this_00 = local_10;
      if (iVar3 == 0) {
        switch(*(undefined2 *)(local_10 + 0x23f)) {
        case 1:
          thunk_FUN_004a9b60(*(int *)(local_10 + 0x11c),*(int *)(local_10 + 0x120),
                             *(int *)(local_10 + 0x124),*(int *)(local_10 + 0x128));
          *(undefined2 *)(this_00 + 0x23f) = 6;
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
            pCVar7 = this_00 + 0x2ec;
            pCVar8 = this_00 + 0x2ee;
            local_8 = 2;
            do {
              puVar11 = (undefined4 *)0x0;
              iVar6 = 0;
              iVar3 = 1;
              bVar10 = 0;
              uVar9 = 6;
              pbVar4 = (byte *)thunk_FUN_00526100((undefined1 *)0x0,0);
              puVar5 = FUN_00709af0(DAT_00806794,0x1f,pbVar4,uVar9,bVar10,iVar3,iVar6,puVar11);
              *(ushort **)(pCVar8 + -0xc) = puVar5;
              pCVar7[-2] = (CPanelTy)0x0;
              *pCVar7 = (CPanelTy)0x4;
              *(undefined4 *)pCVar8 = *(undefined4 *)(this_00 + 0x38);
              pCVar7 = pCVar7 + 1;
              pCVar8 = pCVar8 + 4;
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            pCVar7 = this_00 + 0xd53;
            pCVar8 = this_00 + 0xd47;
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
                puVar5 = FUN_00709af0(DAT_00806794,0x1f,pbVar4,uVar9,bVar10,iVar3,iVar6,puVar11);
                *(ushort **)(pCVar7 + -0x48) = puVar5;
                pCVar8[-0xc] = (CPanelTy)0x0;
                *pCVar8 = (CPanelTy)0x4;
                *(undefined4 *)pCVar7 = *(undefined4 *)(this_00 + 0x38);
                pCVar7 = pCVar7 + 4;
                pCVar8 = pCVar8 + 1;
                local_8 = local_8 + -1;
              } while (local_8 != 0);
              local_c = local_c + -1;
            } while (local_c != 0);
            DAT_00858df8 = (undefined4 *)local_54;
            return;
          }
switchD_004f9f52_caseD_3:
          *(undefined2 *)(this_00 + 0x23f) = 4;
          thunk_FUN_005252c0(0xb0);
          DAT_00858df8 = (undefined4 *)local_54;
          return;
        case 2:
        case 4:
          *(undefined2 *)(local_10 + 0x23f) = 3;
          thunk_FUN_005252c0(0xaf);
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
          DAT_00858df8 = (undefined4 *)local_54;
          return;
        case 3:
          goto switchD_004f9f52_caseD_3;
        }
      }
      DAT_00858df8 = (undefined4 *)local_54;
      iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x40f,0,iVar3,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_006a5e40(iVar3,0,0x7c1bd8,0x40f);
    }
  }
  return;
}

