
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   AppClassTy::DeleteObject */

void __thiscall AppClassTy::DeleteObject(AppClassTy *this,int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  AppClassTy *pAVar3;
  int errorCode;
  uint uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined4 *local_c;
  AppClassTy *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar3 = local_8;
  if (errorCode == 0) {
    uVar6 = *(int *)(local_8->field_000C + 0xc) - 1;
    uVar4 = FUN_006acc70(local_8->field_000C,uVar6,&local_10);
    while (-1 < (int)uVar4) {
      if (local_c[2] == param_1) {
        FUN_006b0c70(pAVar3->field_000C,uVar6);
        Library::MSVCRT::thunk_FUN_006a4950(local_c);
        for (puVar1 = (undefined4 *)pAVar3->field_0030; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          uVar4 = puVar1[1];
          if ((uVar6 <= uVar4) && (uVar4 != 0)) {
            puVar1[1] = uVar4 - 1;
          }
        }
      }
      uVar6 = uVar6 - 1;
      uVar4 = FUN_006acc70(pAVar3->field_000C,uVar6,&local_10);
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar5 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0xa1,0,errorCode,&DAT_007a4ccc,
                             s_AppClassTy__DeleteObject_Error___007ee83c);
  if (iVar5 == 0) {
    RaiseInternalException(errorCode,0,s_E__Ourlib_Sapp_cpp_007ee78c,0xa2);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

