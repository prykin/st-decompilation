
void __thiscall PlaySystemTy::SendClientMail(PlaySystemTy *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  PlaySystemTy *pPVar10;
  void *unaff_EDI;
  undefined4 *puVar11;
  InternalExceptionFrame IStack_58;
  uint uStack_14;
  PlaySystemTy *pPStack_10;
  int *piStack_c;
  uint uStack_8;
  
  piStack_c = *(int **)(this + 0x39);
  uStack_8 = 4;
  IStack_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_58;
  pPStack_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar10 = pPStack_10;
  if (iVar5 == 0) {
    **(undefined4 **)(pPStack_10 + 0x4f) = 0;
    if (piStack_c != (int *)0x0) {
      do {
        piVar1 = (int *)((int)piStack_c + 0x13);
        piVar2 = (int *)((int)piStack_c + 0xf);
        piStack_c = (int *)*piStack_c;
        uStack_8 = uStack_8 + 0x1b + *piVar1 + *piVar2;
      } while (piStack_c != (int *)0x0);
      piStack_c = (int *)0x0;
    }
    uVar4 = uStack_8;
    if (*(uint *)(pPStack_10 + 0x53) < uStack_8) {
      iVar5 = Library::DKW::LIB::FUN_006acf50(*(undefined4 **)(pPStack_10 + 0x4f),uStack_8);
      *(int *)(pPVar10 + 0x4f) = iVar5;
      *(uint *)(pPVar10 + 0x53) = uVar4;
    }
    piStack_c = *(int **)(pPVar10 + 0x39);
    puVar8 = (undefined4 *)(*(int *)(pPVar10 + 0x4f) + 4);
    if (piStack_c != (undefined4 *)0x0) {
      do {
        uStack_8 = *(int *)((int)piStack_c + 0x13) + 0x1b + *(int *)((int)piStack_c + 0xf);
        puVar9 = piStack_c;
        puVar11 = puVar8;
        for (uVar7 = uStack_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar7 = uStack_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        puVar8 = (undefined4 *)((int)puVar8 + uStack_8);
        **(int **)(pPStack_10 + 0x4f) = **(int **)(pPStack_10 + 0x4f) + 1;
        piStack_c = (int *)*piStack_c;
      } while (piStack_c != (undefined4 *)0x0);
      piStack_c = (undefined4 *)0x0;
      pPVar10 = pPStack_10;
    }
    uStack_14 = uVar4;
    if (*(int *)(pPVar10 + 0x39) != 0) {
      FUN_006b9890((int *)(pPVar10 + 0x39));
    }
    if ((**(int **)(pPVar10 + 0x4f) != 0) && (DAT_0080c512 == 0)) {
      iVar5 = FUN_00715360(DAT_00811764,1,'8',(char *)*(int **)(pPVar10 + 0x4f),uStack_14,1,
                           0xffffffff);
      if (iVar5 != 0) {
        thunk_FUN_00550380(4);
      }
    }
    g_currentExceptionFrame = IStack_58.previous;
    return;
  }
  g_currentExceptionFrame = IStack_58.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x4e6,0,iVar5,&DAT_007a4ccc,
                             s_PlaySystemTy__SendClientMail_007c8598);
  if (iVar6 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x4e8);
  return;
}

