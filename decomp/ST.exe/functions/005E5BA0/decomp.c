
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::DoneMTest */

void __thiscall MTestTy::DoneMTest(MTestTy *this)

{
  code *pcVar1;
  MTestTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  MTestTy *pMVar4;
  undefined4 local_4c;
  undefined4 local_48 [16];
  MTestTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    thunk_FUN_00540dc0(0,*(undefined4 *)(local_8 + 8),2,100,2,1,0,0,0,0,0,0);
    thunk_FUN_00540dc0(0,*(undefined4 *)(this_00 + 8),2,0x62,2,0x1c,0,0,0,0,0,0);
    pMVar4 = this_00 + 0x61;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pMVar4 = 0;
      pMVar4 = pMVar4 + 4;
    }
    *(undefined4 *)(this_00 + 0x71) = 0x14;
    *(undefined4 *)(this_00 + 0x75) = *(undefined4 *)(this_00 + 8);
    FUN_006e6000(this_00,3,1,(undefined4 *)(this_00 + 0x61));
    cMf32::RecMemFree(DAT_00806780,(uint *)(this_00 + 0x5d));
    thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    if (DAT_00811778 != (HoloTy *)0x0) {
      HoloTy::Done(DAT_00811778);
      FUN_0072e2b0((undefined4 *)DAT_00811778);
      DAT_00811778 = (HoloTy *)0x0;
    }
    if (*(int *)(this_00 + 0x91) != 0) {
      FUN_006e3b50((undefined4 *)(this_00 + 0x81));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_test_obj_cpp_007cdcbc,0x4a,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cdcbc,0x4a);
  return;
}

