
/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::Done */

void __thiscall HoloTy::Done(HoloTy *this)

{
  code *pcVar1;
  HoloTy *pHVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_48 [16];
  HoloTy *local_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,uVar5);
  pHVar2 = local_8;
  if (iVar3 == 0) {
    if (-1 < (int)*(uint *)(local_8 + 3)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(local_8 + 3));
    }
    *(undefined4 *)(pHVar2 + 3) = 0xffffffff;
    if (*(int *)(pHVar2 + 0xb) != 0) {
      FUN_006ab060((undefined4 *)(pHVar2 + 0xb));
    }
    if (*(int *)(pHVar2 + 7) != 0) {
      FUN_006ab060((undefined4 *)(pHVar2 + 7));
    }
    DAT_00858df8 = (undefined1 *)uVar5;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_hologram_cpp_007cc674,0xaa,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cc674,0xaa);
  return;
}

