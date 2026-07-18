
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::GetMessage */

undefined4 __thiscall MMsgTy::GetMessage(MMsgTy *this,int param_1)

{
  code *pcVar1;
  MMsgTy *this_00;
  MMObjTy MVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  undefined4 local_4c;
  undefined4 local_48 [16];
  MMsgTy *local_8;
  
  local_8 = this;
  uVar3 = FUN_006e51b0(*(int *)(this + 0x10));
  *(undefined4 *)(this + 0x61) = uVar3;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar4 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x200,0,iVar4,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_006a5e40(iVar4,0,0x7ccb74,0x200);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_8,param_1);
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((0x697e < uVar6) && (uVar6 < 0x69ff)) {
    switch(uVar6) {
    case 0x697f:
      iVar5 = -1;
      iVar4 = 3;
      uVar6 = 0;
      break;
    case 0x6980:
      iVar5 = -1;
      iVar4 = 2;
      uVar6 = 1;
      break;
    case 0x6981:
      iVar5 = -1;
      iVar4 = 2;
      uVar6 = 2;
      break;
    case 0x6982:
      iVar5 = -2;
      iVar4 = 2;
      uVar6 = 3;
      break;
    case 0x6983:
      iVar5 = 2;
      iVar4 = 2;
      uVar6 = 4;
      break;
    case 0x6984:
      iVar5 = 1;
      iVar4 = 2;
      uVar6 = 5;
      break;
    case 0x6985:
      iVar5 = 1;
      iVar4 = 2;
      uVar6 = 6;
      break;
    case 0x6986:
      iVar5 = 1;
      iVar4 = 3;
      uVar6 = 7;
      break;
    default:
      goto switchD_005b939a_default;
    }
    MMObjTy::PaintSprBut((MMObjTy *)this_00,param_1,uVar6,iVar4,iVar5,-1);
  }
switchD_005b939a_default:
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((0x68fe < uVar6) && (uVar6 < 0x697f)) {
    MVar2 = (MMObjTy)((char)uVar6 + 1);
    *(MMObjTy *)(this_00 + 0x1a5a) = MVar2;
    if (*(MMObjTy *)(this_00 + (uint)(byte)MVar2 * 0x1fb + 0xe1) == (MMObjTy)0x0) {
      if (*(int *)(this_00 + (uint)(byte)MVar2 * 0x1fb + 0xd1) != 0) {
        FUN_006e3b50((undefined4 *)(this_00 + (uint)(byte)MVar2 * 0x1fb + 0xc1));
      }
    }
    else {
      (**(code **)(*(int *)this_00 + 8))();
    }
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    NoneMMsg(this_00);
    break;
  case 2:
    InitMMsg(this_00);
    break;
  case 3:
    DoneMMsg(this_00);
    break;
  case 5:
    PaintMMsg(this_00);
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  uVar3 = thunk_FUN_005b6430();
  return uVar3;
}

