
void FUN_005999c0(char param_1)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  undefined4 local_54;
  undefined4 local_50 [16];
  int local_10;
  int local_c;
  int local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar3 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    puVar1 = (uint *)(local_10 + 0x1ac0);
    if (*(int *)(local_10 + 0x1ac0) != 0) {
      FUN_006ab060(puVar1);
    }
    if (param_1 == '\0') {
      local_8 = 0x106;
      local_c = 0x1b8;
    }
    else {
      local_8 = (-(uint)(param_1 != '\x01') & 0xfffffffb) + 0x17a;
      local_c = (-(uint)(param_1 != '\x01') & 0x129) + 0x1b8;
    }
    iVar3 = 1;
    puVar6 = (undefined4 *)(*(int *)(local_10 + 0x5d) + 0x28);
    uVar4 = FUN_006b4fe0(*(int *)(local_10 + 0x5d));
    uVar4 = FUN_006b50c0(local_c,local_8,(uint)*(ushort *)(*(int *)(local_10 + 0x5d) + 0xe),uVar4,
                         puVar6,iVar3);
    *puVar1 = uVar4;
    FUN_006b2410((int)DAT_008075a8,*(uint *)(local_10 + 0x1abc),uVar4);
    FUN_006b2800((int)DAT_008075a8,*(uint *)(local_10 + 0x1abc),*(uint *)(*puVar1 + 4),
                 *(uint *)(*puVar1 + 8));
    if (param_1 == '\0') {
      uVar4 = 0xb4;
    }
    else {
      uVar4 = (-(uint)(param_1 != '\x01') & 0xffffff6e) + 0xb4;
    }
    FUN_006b3640(DAT_008075a8,*(uint *)(local_10 + 0x1abc),0xffffffff,uVar4,
                 (-(uint)(param_1 != '\0') & 0xffffffb4) + 0xaa);
    FUN_006b3af0(DAT_008075a8,*(uint *)(local_10 + 0x1abc));
    *(char *)(local_10 + 0x1abb) = param_1;
    DAT_00858df8 = (undefined4 *)local_54;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x3a8,0,iVar3,&DAT_007a4ccc);
  if (iVar5 == 0) {
    FUN_006a5e40(iVar3,0,0x7cbf70,0x3a8);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

