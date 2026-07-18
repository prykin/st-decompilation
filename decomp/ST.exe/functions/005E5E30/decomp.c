
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::NoneMTest */

void __thiscall MTestTy::NoneMTest(MTestTy *this)

{
  code *pcVar1;
  MTestTy *pMVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_48 [16];
  MTestTy *local_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,uVar5);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8[0xb3] == (MTestTy)0x1) {
      if (DAT_00811778 != (HoloTy *)0x0) {
        iVar3 = HoloTy::NextFas(DAT_00811778);
        if (iVar3 == 0) {
          pMVar2[0xb3] = (MTestTy)0x4;
        }
      }
    }
    else if ((local_8[0xb3] == (MTestTy)0x5) && (DAT_00811778 != (HoloTy *)0x0)) {
      iVar3 = HoloTy::NextFas(DAT_00811778);
      if (iVar3 == 0) {
        pMVar2[0xb3] = (MTestTy)0x0;
        if (-1 < (int)*(uint *)(DAT_00811778 + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_00811778 + 3));
        }
      }
    }
    _DAT_00811774 = *(undefined4 *)(pMVar2 + 0xa1);
    DAT_00858df8 = (undefined1 *)uVar5;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_test_obj_cpp_007cdcbc,0x6c,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cdcbc,0x6c);
  return;
}

