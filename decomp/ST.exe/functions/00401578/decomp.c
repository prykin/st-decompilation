
void __thiscall STAppC::ChangeResolution(STAppC *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  InternalExceptionFrame *pIVar7;
  undefined4 unaff_ESI;
  uint uVar8;
  void *unaff_EDI;
  undefined4 *puVar9;
  undefined4 auStack_4bc [256];
  InternalExceptionFrame IStack_bc;
  undefined4 auStack_78 [4];
  undefined4 uStack_68;
  InternalExceptionFrame IStack_58;
  STAppC *pSStack_14;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  
  iStack_8 = param_1;
  uStack_c = 0;
  if ((((param_1 != 0) || (DAT_00806730 != 800)) && ((param_1 != 1 || (DAT_00806730 != 0x400)))) &&
     ((param_1 != 2 || (DAT_00806730 != 0x500)))) {
    IStack_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_58;
    pSStack_14 = this;
    iVar4 = Library::MSVCRT::__setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      FUN_006b13e0(DAT_008075a8);
      pIVar7 = g_currentExceptionFrame;
      uVar8 = uStack_c;
      for (; (uVar8 == 0 && (-1 < iStack_8)); iStack_8 = iStack_8 + -1) {
        if (iStack_8 == 0) {
          DAT_00806730 = 800;
          DAT_00806734 = 600;
        }
        else if (iStack_8 == 1) {
          DAT_00806730 = 0x400;
          DAT_00806734 = 0x300;
        }
        else if (iStack_8 == 2) {
          DAT_00806730 = 0x500;
          DAT_00806734 = 0x400;
        }
        iVar4 = 0;
        iStack_10 = 0;
        piVar2 = *(int **)(pSStack_14 + 0x115a);
        piVar1 = piVar2 + 1;
        if (0 < *piVar1) {
          do {
            if (((piVar2[2] == DAT_00806730) && (piVar2[3] == DAT_00806734)) &&
               (piVar2[4] == DAT_00806738)) {
              iStack_10 = 1;
              break;
            }
            iVar4 = iVar4 + 1;
            piVar2 = piVar2 + 3;
          } while (iVar4 < *piVar1);
        }
        if (iStack_10 != 0) {
          puVar9 = auStack_4bc;
          for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          puVar9 = auStack_78;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          g_currentExceptionFrame = &IStack_bc;
          IStack_bc.previous = pIVar7;
          iVar4 = Library::MSVCRT::__setjmp3(IStack_bc.jumpBuffer,0,unaff_EDI,unaff_ESI);
          uVar8 = uStack_c;
          if (iVar4 == 0) {
            DVar5 = Library::DKW::DDX::FUN_006b9b40
                              (DAT_0080759c,0x10000001,DAT_00806730,DAT_00806734,DAT_00806738,
                               DAT_00806730,DAT_00806734,(int)auStack_4bc,0,0x100);
            uStack_c = (uint)(DVar5 == 0);
            MoveWindow(DAT_00856d78,0,0,DAT_00806730,DAT_00806734,1);
            uStack_68 = 0x66;
            AppClassTy::SendMessage((AppClassTy *)pSStack_14,3,1,(int)auStack_78);
            uVar8 = (uint)(DVar5 == 0);
          }
          pIVar7 = IStack_bc.previous;
          g_currentExceptionFrame = IStack_bc.previous;
          if ((iStack_10 != 0) && (uVar8 != 0)) break;
        }
      }
      iVar4 = iStack_8;
      if (iStack_8 < 0) {
        RaiseInternalException(-1,DAT_007ed77c,s_E____titans_tapp_cpp_007ca0c8,0x442);
      }
      Library::DKW::DDX::FUN_006b1470(DAT_008075a8);
      Library::DKW::DDX::FUN_006b1680(DAT_008075a8,(int)DAT_0080759c);
      FUN_006b1980(DAT_008075a8,2,-1,(&DAT_00807568)[iVar4 * 4],(&DAT_0080756c)[iVar4 * 4],
                   (&DAT_00807570)[iVar4 * 4],(&DAT_00807574)[iVar4 * 4]);
      FUN_006b1cc0((int)DAT_008075a8,2,(&DAT_00807568)[iVar4 * 4],(&DAT_0080756c)[iVar4 * 4],
                   (undefined4 *)0x0);
      FUN_006b1980(DAT_008075a8,3,-1,(&DAT_00807568)[iVar4 * 4],(&DAT_0080756c)[iVar4 * 4],
                   (&DAT_00807570)[iVar4 * 4],(&DAT_00807574)[iVar4 * 4]);
      FUN_006b1cc0((int)DAT_008075a8,3,0,0,(undefined4 *)0x0);
      g_currentExceptionFrame = IStack_58.previous;
      return;
    }
    g_currentExceptionFrame = IStack_58.previous;
    iVar6 = ReportDebugMessage(s_E____titans_tapp_cpp_007ca0c8,0x44f,0,iVar4,&DAT_007a4ccc,
                               s_STAppC__ChangeResolution_007ca190);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_tapp_cpp_007ca0c8,0x44f);
  }
  return;
}

