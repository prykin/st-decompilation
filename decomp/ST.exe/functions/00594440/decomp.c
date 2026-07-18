
undefined4 FUN_00594440(int param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  void *local_c;
  uint local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_combo_cpp_007cbeec,0xb7,0,iVar3,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    FUN_006a5e40(iVar3,0,0x7cbeec,0xb7);
    return 0xffff;
  }
  uVar7 = *(uint *)(param_1 + 0x10);
  if (uVar7 < 0x10000) {
    if (uVar7 == 0xffff) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((int)local_c + 0xcc);
      goto switchD_005944a8_caseD_4;
    }
    switch(uVar7) {
    case 2:
      thunk_FUN_00593b50(*(undefined4 **)(param_1 + 0x14));
      break;
    case 3:
      thunk_FUN_005941d0();
      break;
    case 5:
      FUN_006b35d0(DAT_008075a8,*(uint *)((int)local_c + 0x108));
      break;
    case 0x62:
      if (((*(int *)((int)local_c + 0xec) <= (int)(uint)*(ushort *)(param_1 + 0x18)) &&
          ((int)(uint)*(ushort *)(param_1 + 0x18) <
           *(int *)((int)local_c + 0xf4) + *(int *)((int)local_c + 0xec))) &&
         (*(int *)((int)local_c + 0xf0) <= (int)(uint)*(ushort *)(param_1 + 0x1a))) {
        if (*(int *)((int)local_c + 0xf8) + *(int *)((int)local_c + 0xf0) <=
            (int)(uint)*(ushort *)(param_1 + 0x1a)) {
          thunk_FUN_005943f0(local_c);
        }
        break;
      }
    case 100:
switchD_005944a8_caseD_64:
      thunk_FUN_005943f0(local_c);
    }
switchD_005944a8_caseD_4:
    DAT_00858df8 = (undefined4 *)local_50;
    uVar5 = FUN_006e5fd0();
    return uVar5;
  }
  switch(uVar7) {
  case 0x10001:
    iVar3 = *(int *)((int)local_c + 0x104);
    local_8 = *(uint *)(iVar3 + 0x14);
    if (local_8 == 0) {
      local_8 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar3 + 8);
    }
    uVar1 = *(undefined1 *)((int)local_c + 0xd8);
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = uVar1;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(undefined4 *)((int)local_c + 0xbc) = *(undefined4 *)(param_1 + 0x14);
    FUN_006e5fe0(local_c,(undefined4 *)((int)local_c + 0xa8));
    iVar3 = *(int *)((int)local_c + 0x104);
    FUN_006b55f0(*(undefined4 **)((int)local_c + 0xfc),0,*(ushort *)(param_1 + 0x18) + 5,
                 *(ushort *)(param_1 + 0x1a) + 5,iVar3,0,0,0,*(int *)(iVar3 + 4),*(int *)(iVar3 + 8)
                );
    goto switchD_005944a8_caseD_4;
  case 0x10002:
    if (*(int *)((int)local_c + 0x110) == 0) goto switchD_005944a8_caseD_4;
  case 0x10000:
    *(undefined4 *)((int)local_c + 0x9c) = *(undefined4 *)(param_1 + 0x14);
    break;
  case 0x10003:
    break;
  default:
    goto switchD_005944a8_caseD_4;
  }
  goto switchD_005944a8_caseD_64;
}

