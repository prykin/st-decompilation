
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::NoneSID */

void __thiscall SIDTy::NoneSID(SIDTy *this,void *param_1)

{
  code *pcVar1;
  SIDTy *this_00;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar5;
  InternalExceptionFrame local_50;
  SIDTy *local_c;
  int local_8;
  
  local_8 = 1;
  local_c = this;
  DVar2 = timeGetTime();
  this->field_0061 = DVar2;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x98,0,iVar3,&DAT_007a4ccc,
                               s_SIDTy__NoneSID_007cd650);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x98);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((*(char *)(local_c + 1) == '\x01') && (*(HANDLE *)&local_c[0x48].field_0x5c != (HANDLE)0x0))
     && (DVar2 = WaitForSingleObject(*(HANDLE *)&local_c[0x48].field_0x5c,0), DVar2 == 0)) {
    FindNextChangeNotification(*(HANDLE *)&this_00[0x48].field_0x5c);
    PrepFiles(this_00);
    *(undefined4 *)&this_00->field_0x2d = 5;
    piVar5 = (int *)&this_00[0x44].field_0x1d;
    iVar3 = 2;
    do {
      if (*piVar5 != 0) {
        FUN_006e6080(this_00,2,*piVar5,(undefined4 *)&this_00->field_0x1d);
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(char *)(this_00 + 1) == '\x03') {
    if (*(int *)&this_00[0x42].field_0x5e < *(int *)((int)&this_00[0x42].field_0061 + 1) + -1) {
      *(int *)&this_00[0x42].field_0x5e = *(int *)&this_00[0x42].field_0x5e + 1;
      if (*(uint *)&this_00[0x42].field_0x5a != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)&this_00[0x43].field_0x39,*(uint *)&this_00[0x42].field_0x5a,
                   *(uint *)&this_00[0x42].field_0x5e,*(uint *)&this_00[0x43].field_0xd,
                   *(uint *)((int)&this_00[0x43].field_0010 + 1));
      }
      local_8 = 0;
    }
    if (local_8 != 0) {
      *(undefined1 *)(this_00 + 1) = 1;
      CreateCtrls(this_00);
    }
  }
  else if (*(char *)(this_00 + 1) == '\x04') {
    if (0 < *(int *)&this_00[0x42].field_0x5e) {
      *(int *)&this_00[0x42].field_0x5e = *(int *)&this_00[0x42].field_0x5e + -1;
      if (*(uint *)&this_00[0x42].field_0x5a != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)&this_00[0x43].field_0x39,*(uint *)&this_00[0x42].field_0x5a,
                   *(uint *)&this_00[0x42].field_0x5e,*(uint *)&this_00[0x43].field_0xd,
                   *(uint *)((int)&this_00[0x43].field_0010 + 1));
      }
      local_8 = 0;
    }
    if (local_8 != 0) {
      *(undefined1 *)(this_00 + 1) = 2;
      *(undefined4 *)&this_00->field_0x45 = 0x200;
      *(undefined4 *)&this_00->field_0x49 = 0;
      *(undefined4 *)&this_00->field_0x4d = 0x693f;
      thunk_FUN_005b66e0(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

