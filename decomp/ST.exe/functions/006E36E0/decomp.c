
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   AppClassTy::DoneApp */

void __thiscall AppClassTy::DoneApp(AppClassTy *this)

{
  code *pcVar1;
  AppClassTy *pAVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined4 *local_c;
  AppClassTy *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar2 = local_8;
  if (iVar3 == 0) {
    local_8->field_0020 = 1;
    FUN_006e4340(local_8,0x1c,4,1,DAT_00856d6c);
    if ((byte *)pAVar2->field_0014 != (byte *)0x0) {
      FUN_006ae110((byte *)pAVar2->field_0014);
      pAVar2->field_0014 = 0;
    }
    if (pAVar2->field_0010 != 0) {
      FUN_006e3680(pAVar2->field_0010);
      FUN_006ae110((byte *)pAVar2->field_0010);
      pAVar2->field_0010 = 0;
    }
    iVar3 = pAVar2->field_000C;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
      while (iVar4 != 0) {
        FUN_006acc70(iVar3,0,&local_10);
        Library::MSVCRT::thunk_FUN_006a4950(local_c);
        FUN_006b0c70(pAVar2->field_000C,0);
        iVar3 = pAVar2->field_000C;
        iVar4 = *(int *)(iVar3 + 0xc);
      }
      FUN_006ae110((byte *)pAVar2->field_000C);
      pAVar2->field_000C = 0;
    }
    if ((byte *)pAVar2->field_0028 != (byte *)0x0) {
      FUN_006ae110((byte *)pAVar2->field_0028);
      pAVar2->field_0028 = 0;
    }
    if ((byte *)pAVar2->field_002C != (byte *)0x0) {
      FUN_006ae110((byte *)pAVar2->field_002C);
      pAVar2->field_002C = 0;
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar4 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x6d,0,iVar3,&DAT_007a4ccc,
                             s_AppClassTy__DoneApp_Error___007ee7bc);
  if (iVar4 == 0) {
    RaiseInternalException(iVar3,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x6e);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

