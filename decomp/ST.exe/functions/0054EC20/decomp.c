
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   PlaySystemTy::SendClientMail */

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
  InternalExceptionFrame local_58;
  uint local_14;
  PlaySystemTy *local_10;
  int *local_c;
  uint local_8;
  
  local_c = (int *)this->field_0039;
  local_8 = 4;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar10 = local_10;
  if (iVar5 == 0) {
    *(undefined4 *)local_10->field_004F = 0;
    if (local_c != (int *)0x0) {
      do {
        piVar1 = (int *)((int)local_c + 0x13);
        piVar2 = (int *)((int)local_c + 0xf);
        local_c = (int *)*local_c;
        local_8 = local_8 + 0x1b + *piVar1 + *piVar2;
      } while (local_c != (int *)0x0);
      local_c = (int *)0x0;
    }
    uVar4 = local_8;
    if ((uint)local_10->field_0053 < local_8) {
      iVar5 = Library::DKW::LIB::FUN_006acf50(local_10->field_004F,local_8);
      pPVar10->field_004F = iVar5;
      pPVar10->field_0053 = uVar4;
    }
    local_c = (int *)pPVar10->field_0039;
    puVar8 = (undefined4 *)(pPVar10->field_004F + 4);
    if (local_c != (undefined4 *)0x0) {
      do {
        local_8 = *(int *)((int)local_c + 0x13) + 0x1b + *(int *)((int)local_c + 0xf);
        puVar9 = local_c;
        puVar11 = puVar8;
        for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        puVar8 = (undefined4 *)((int)puVar8 + local_8);
        *(int *)local_10->field_004F = *(int *)local_10->field_004F + 1;
        local_c = (int *)*local_c;
      } while (local_c != (undefined4 *)0x0);
      local_c = (undefined4 *)0x0;
      pPVar10 = local_10;
    }
    local_14 = uVar4;
    if (pPVar10->field_0039 != 0) {
      FUN_006b9890(&pPVar10->field_0039);
    }
    if ((*(int *)pPVar10->field_004F != 0) && (DAT_0080c512 == 0)) {
      iVar5 = FUN_00715360(g_int_00811764,1,'8',(char *)pPVar10->field_004F,local_14,1,0xffffffff);
      if (iVar5 != 0) {
        thunk_FUN_00550380(4);
      }
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
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

