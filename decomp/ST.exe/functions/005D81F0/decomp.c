
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
  SIDTy *pSVar5;
  undefined4 local_50;
  undefined4 local_4c [16];
  SIDTy *local_c;
  int local_8;
  
  local_8 = 1;
  local_c = this;
  DVar2 = timeGetTime();
  *(DWORD *)(this + 0x61) = DVar2;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
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
  if (((local_c[0x65] == (SIDTy)0x1) && (*(HANDLE *)(local_c + 0x1cc4) != (HANDLE)0x0)) &&
     (DVar2 = WaitForSingleObject(*(HANDLE *)(local_c + 0x1cc4),0), DVar2 == 0)) {
    FindNextChangeNotification(*(HANDLE *)(this_00 + 0x1cc4));
    PrepFiles(this_00);
    *(undefined4 *)(this_00 + 0x2d) = 5;
    pSVar5 = this_00 + 0x1af1;
    iVar3 = 2;
    do {
      if (*(int *)pSVar5 != 0) {
        FUN_006e6080(this_00,2,*(int *)pSVar5,(undefined4 *)(this_00 + 0x1d));
      }
      pSVar5 = pSVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (this_00[0x65] == (SIDTy)0x3) {
    if (*(int *)(this_00 + 0x1a68) < *(int *)(this_00 + 0x1a6c) + -1) {
      *(int *)(this_00 + 0x1a68) = *(int *)(this_00 + 0x1a68) + 1;
      if (*(uint *)(this_00 + 0x1a64) != 0xffffffff) {
        FUN_006b3730(*(uint **)(this_00 + 0x1aa8),*(uint *)(this_00 + 0x1a64),
                     *(uint *)(this_00 + 0x1a68),*(uint *)(this_00 + 0x1a7c),
                     *(uint *)(this_00 + 0x1a80));
      }
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00[0x65] = (SIDTy)0x1;
      CreateCtrls(this_00);
    }
  }
  else if (this_00[0x65] == (SIDTy)0x4) {
    if (0 < *(int *)(this_00 + 0x1a68)) {
      *(int *)(this_00 + 0x1a68) = *(int *)(this_00 + 0x1a68) + -1;
      if (*(uint *)(this_00 + 0x1a64) != 0xffffffff) {
        FUN_006b3730(*(uint **)(this_00 + 0x1aa8),*(uint *)(this_00 + 0x1a64),
                     *(uint *)(this_00 + 0x1a68),*(uint *)(this_00 + 0x1a7c),
                     *(uint *)(this_00 + 0x1a80));
      }
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00[0x65] = (SIDTy)0x2;
      *(undefined4 *)(this_00 + 0x45) = 0x200;
      *(undefined4 *)(this_00 + 0x49) = 0;
      *(undefined4 *)(this_00 + 0x4d) = 0x693f;
      thunk_FUN_005b66e0(this_00);
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}

