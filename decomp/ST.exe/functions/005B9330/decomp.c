
undefined4 __thiscall FUN_005b9330(void *this,int param_1)

{
  code *pcVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int *local_8;
  
  local_8 = this;
  uVar4 = FUN_006e51b0(*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x61) = uVar4;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar5 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  piVar2 = local_8;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x200,0,iVar5,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    FUN_006a5e40(iVar5,0,0x7ccb74,0x200);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_8,param_1);
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((0x697e < uVar7) && (uVar7 < 0x69ff)) {
    switch(uVar7) {
    case 0x697f:
      iVar6 = -1;
      iVar5 = 3;
      uVar7 = 0;
      break;
    case 0x6980:
      iVar6 = -1;
      iVar5 = 2;
      uVar7 = 1;
      break;
    case 0x6981:
      iVar6 = -1;
      iVar5 = 2;
      uVar7 = 2;
      break;
    case 0x6982:
      iVar6 = -2;
      iVar5 = 2;
      uVar7 = 3;
      break;
    case 0x6983:
      iVar6 = 2;
      iVar5 = 2;
      uVar7 = 4;
      break;
    case 0x6984:
      iVar6 = 1;
      iVar5 = 2;
      uVar7 = 5;
      break;
    case 0x6985:
      iVar6 = 1;
      iVar5 = 2;
      uVar7 = 6;
      break;
    case 0x6986:
      iVar6 = 1;
      iVar5 = 3;
      uVar7 = 7;
      break;
    default:
      goto switchD_005b939a_default;
    }
    thunk_FUN_005b5690(param_1,uVar7,iVar5,iVar6,-1);
  }
switchD_005b939a_default:
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((0x68fe < uVar7) && (uVar7 < 0x697f)) {
    bVar3 = (char)uVar7 + 1;
    *(byte *)((int)piVar2 + 0x1a5a) = bVar3;
    if (*(char *)((int)piVar2 + (uint)bVar3 * 0x1fb + 0xe1) == '\0') {
      if (*(int *)((int)piVar2 + (uint)bVar3 * 0x1fb + 0xd1) != 0) {
        FUN_006e3b50((undefined4 *)((int)piVar2 + (uint)bVar3 * 0x1fb + 0xc1));
      }
    }
    else {
      (**(code **)(*piVar2 + 8))();
    }
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    thunk_FUN_005b7540();
    break;
  case 2:
    thunk_FUN_005b6b20();
    break;
  case 3:
    thunk_FUN_005b6f10();
    break;
  case 5:
    thunk_FUN_005b7340();
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  uVar4 = thunk_FUN_005b6430();
  return uVar4;
}

