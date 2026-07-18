
void __fastcall FUN_005d81f0(void *param_1)

{
  code *pcVar1;
  void *this;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar5;
  undefined4 local_50;
  undefined4 local_4c [16];
  void *local_c;
  int local_8;
  
  local_8 = 1;
  local_c = param_1;
  DVar2 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x61) = DVar2;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  this = local_c;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x98,0,iVar3,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar3,0,0x7cd5c4,0x98);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((*(char *)((int)local_c + 0x65) == '\x01') &&
      (*(HANDLE *)((int)local_c + 0x1cc4) != (HANDLE)0x0)) &&
     (DVar2 = WaitForSingleObject(*(HANDLE *)((int)local_c + 0x1cc4),0), DVar2 == 0)) {
    FindNextChangeNotification(*(HANDLE *)((int)this + 0x1cc4));
    thunk_FUN_005d8bf0();
    *(undefined4 *)((int)this + 0x2d) = 5;
    piVar5 = (int *)((int)this + 0x1af1);
    iVar3 = 2;
    do {
      if (*piVar5 != 0) {
        FUN_006e6080(this,2,*piVar5,(undefined4 *)((int)this + 0x1d));
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(char *)((int)this + 0x65) == '\x03') {
    if (*(int *)((int)this + 0x1a68) < *(int *)((int)this + 0x1a6c) + -1) {
      *(int *)((int)this + 0x1a68) = *(int *)((int)this + 0x1a68) + 1;
      if (*(uint *)((int)this + 0x1a64) != 0xffffffff) {
        FUN_006b3730(*(uint **)((int)this + 0x1aa8),*(uint *)((int)this + 0x1a64),
                     *(uint *)((int)this + 0x1a68),*(uint *)((int)this + 0x1a7c),
                     *(uint *)((int)this + 0x1a80));
      }
      local_8 = 0;
    }
    if (local_8 != 0) {
      *(undefined1 *)((int)this + 0x65) = 1;
      thunk_FUN_005d8450();
    }
  }
  else if (*(char *)((int)this + 0x65) == '\x04') {
    if (0 < *(int *)((int)this + 0x1a68)) {
      *(int *)((int)this + 0x1a68) = *(int *)((int)this + 0x1a68) + -1;
      if (*(uint *)((int)this + 0x1a64) != 0xffffffff) {
        FUN_006b3730(*(uint **)((int)this + 0x1aa8),*(uint *)((int)this + 0x1a64),
                     *(uint *)((int)this + 0x1a68),*(uint *)((int)this + 0x1a7c),
                     *(uint *)((int)this + 0x1a80));
      }
      local_8 = 0;
    }
    if (local_8 != 0) {
      *(undefined1 *)((int)this + 0x65) = 2;
      *(undefined4 *)((int)this + 0x45) = 0x200;
      *(undefined4 *)((int)this + 0x49) = 0;
      *(undefined4 *)((int)this + 0x4d) = 0x693f;
      thunk_FUN_005b66e0(this);
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}

