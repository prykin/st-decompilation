
undefined4 FUN_0053ca80(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 local_58;
  undefined4 local_54 [16];
  uint local_14;
  undefined1 local_10;
  undefined2 uStack_f;
  undefined1 uStack_d;
  undefined2 local_c;
  undefined1 local_a;
  int *local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar3 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_research_cpp_007c76c8,200,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    FUN_006a5e40(iVar3,0,0x7c76c8,200);
    return 0xffff;
  }
  iVar3 = 2;
  if (*(int *)(param_1 + 0x10) == 2) {
    thunk_FUN_0053ee30();
  }
  thunk_FUN_005400f0(param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xc0a4) {
    if (uVar1 < 0xc09f) {
      if (uVar1 == 2) {
        thunk_FUN_0053c120();
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      if (uVar1 == 3) {
        puVar7 = (undefined4 *)((int)local_8 + 0x27a);
        do {
          if ((byte *)*puVar7 != (byte *)0x0) {
            FUN_006ae110((byte *)*puVar7);
            *puVar7 = 0;
          }
          puVar7 = puVar7 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (*(uint *)((int)local_8 + 0x282) != 0) {
          FUN_006e56b0((void *)local_8[3],*(uint *)((int)local_8 + 0x282));
        }
        *(undefined4 *)((int)local_8 + 0x282) = 0;
        DAT_008016e8 = 0;
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      if (uVar1 == 0xb207) {
        *(char *)((int)local_8 + 0x279) = (char)local_8[0x9e];
        *(char *)(local_8 + 0x9e) = **(char **)(param_1 + 0x14) + -1;
        thunk_FUN_005252c0(0xae);
        (**(code **)(*local_8 + 0x1c))();
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
    }
    else {
      iVar3 = *(int *)((int)local_8 + (uint)*(byte *)(local_8 + 0x9e) * 4 + 0x27a);
      if ((iVar3 == 0) ||
         (iVar4 = uVar1 + *(int *)((int)local_8 + 0x199), *(uint *)(iVar3 + 0xc) <= iVar4 - 0xc09fU)
         ) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)((iVar4 + -0xc09f) * *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x1c));
      }
      if ((puVar5 != (undefined1 *)0x0) && (puVar5[8] != '\0')) {
        uStack_d = 0;
        local_c = 0;
        local_a = 0;
        local_14 = (uint)CONCAT11(*puVar5,2);
        local_10 = 0;
        uStack_f = 1;
        thunk_FUN_0054edf0((undefined4 *)0x1e,&local_14,0,0xffffffff);
        thunk_FUN_0053f650(local_8,'\0');
        thunk_FUN_005252c0(0xae);
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
    }
  }
  else {
    switch(uVar1) {
    case 0xc0a4:
      *(undefined4 *)((int)local_8 + 0x199) = *(undefined4 *)(param_1 + 0x14);
      thunk_FUN_0053c620(local_8);
      thunk_FUN_005252c0(0xae);
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    case 0xc0af:
    case 0xc0b0:
    case 0xc0b1:
    case 0xc0b2:
    case 0xc0b3:
      thunk_FUN_0053c820(local_8,param_1);
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    case 0xc0b4:
      thunk_FUN_0053fee0(local_8,param_1,thunk_FUN_0052a7b0);
    }
  }
  DAT_00858df8 = (undefined4 *)local_58;
  return 0;
}

