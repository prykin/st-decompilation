
undefined4 FUN_004f0210(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_bldlab_cpp_007c18b4,0x9a,0,iVar3,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar3,0,0x7c18b4,0x9a);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    thunk_FUN_0053ee30();
  }
  thunk_FUN_005400f0(param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xc0a4) {
    if (uVar1 < 0xc09f) {
      if (uVar1 == 2) {
        thunk_FUN_004efb60();
        DAT_00858df8 = (undefined4 *)local_4c;
        return 0;
      }
      if (uVar1 != 3) {
        DAT_00858df8 = (undefined4 *)local_4c;
        return 0;
      }
      if (*(byte **)((int)local_8 + 0x27a) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_8 + 0x27a));
      }
      *(undefined4 *)((int)local_8 + 0x27a) = 0;
      DAT_00801680 = 0;
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    }
    iVar3 = *(int *)((int)local_8 + 0x27a);
    if ((iVar3 == 0) ||
       (iVar4 = uVar1 + *(int *)((int)local_8 + 0x199), *(uint *)(iVar3 + 0xc) <= iVar4 - 0xc09fU))
    {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)((iVar4 + -0xc09f) * *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x1c));
    }
    if (puVar5 == (undefined4 *)0x0) {
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    }
    if (*(char *)(puVar5 + 2) == '\0') {
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    }
    thunk_FUN_0054b630(DAT_00802a30,0xe,*puVar5);
    thunk_FUN_0053f650(local_8,'\0');
  }
  else {
    if (uVar1 != 0xc0a4) {
      if (uVar1 < 0xc0af) {
        DAT_00858df8 = (undefined4 *)local_4c;
        return 0;
      }
      if (0xc0b3 < uVar1) {
        DAT_00858df8 = (undefined4 *)local_4c;
        return 0;
      }
      thunk_FUN_004effe0(local_8,param_1);
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    }
    *(undefined4 *)((int)local_8 + 0x199) = *(undefined4 *)(param_1 + 0x14);
    thunk_FUN_004efe20(local_8);
  }
  thunk_FUN_005252c0(0xae);
  DAT_00858df8 = (undefined4 *)local_4c;
  return 0;
}

