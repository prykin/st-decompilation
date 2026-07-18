
/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::GetMessage */

undefined4 __thiscall MAdvTy::GetMessage(MAdvTy *this,int param_1)

{
  code *pcVar1;
  MAdvTy *pMVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  MAdvTy *local_8;
  
  local_8 = this;
  uVar3 = FUN_006e51b0(*(int *)(this + 0x10));
  *(undefined4 *)(this + 0x58) = uVar3;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar4 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_8;
  if (iVar4 == 0) {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      NoneMAdv(local_8);
      break;
    case 2:
      local_8[0x5d] = *(MAdvTy *)(*(int *)(param_1 + 0x14) + 0x14);
      InitMAdv(local_8);
      break;
    case 3:
      DoneMAdv(local_8);
      break;
    case 5:
      PaintMAdv(local_8);
      break;
    case 0x62:
    case 100:
      thunk_FUN_00590860(local_8);
      if (pMVar2[0x5d] == (MAdvTy)0x0) {
        *(undefined4 *)(pMVar2 + 0x40) = 0x200;
        *(undefined4 *)(pMVar2 + 0x44) = 0;
        *(undefined4 *)(pMVar2 + 0x48) = 0x6102;
      }
      else {
        *(undefined4 *)(pMVar2 + 0x44) = 1;
        *(undefined4 *)(pMVar2 + 0x48) = 0x7102;
      }
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    uVar3 = FUN_006e5fd0();
    return uVar3;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_adv_obj_cpp_007cbc24,0x87,0,iVar4,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_006a5e40(iVar4,0,0x7cbc24,0x87);
  return 0xffff;
}

