
void FUN_0052d200(uint param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  uint uVar4;
  uint *puVar5;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    uVar4 = param_1 & 0xff;
    FUN_00710a90(*(int *)(local_8 + 0x90),0,0,uVar4 * 0x13,*(int *)(*(int *)(local_8 + 0x90) + 4),
                 0x13);
    if ((int)uVar4 < *(int *)(*(int *)(local_8 + 0x98) + 8)) {
      puVar5 = *(uint **)(*(int *)(*(int *)(local_8 + 0x98) + 0x14) + uVar4 * 4);
    }
    else {
      puVar5 = (uint *)0x0;
    }
    FUN_007119c0(puVar5,0,0,0);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x2d,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c6f84,0x2d);
  return;
}

