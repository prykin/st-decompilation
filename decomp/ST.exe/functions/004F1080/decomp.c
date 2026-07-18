
undefined4 FUN_004f1080(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_bldobj_cpp_007c1984,0xca,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    FUN_006a5e40(iVar3,0,0x7c1984,0xca);
    return 0xffff;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    thunk_FUN_0053ee30();
  }
  thunk_FUN_005400f0(param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xb207) {
    if (uVar1 == 0xb206) {
      thunk_FUN_0053fcd0(local_8,param_1,thunk_FUN_0052a7b0);
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    }
    if (uVar1 == 2) {
      thunk_FUN_004f05c0();
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    }
    if (uVar1 == 3) {
      thunk_FUN_004f0a60((int)local_8);
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    }
    if (uVar1 == 0xb205) {
      *(char *)((int)local_8 + 0x279) = (char)local_8[0x9e];
      *(char *)(local_8 + 0x9e) = **(char **)(param_1 + 0x14) + -1;
      thunk_FUN_005252c0(0xae);
      (**(code **)(*local_8 + 0x1c))();
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    }
  }
  else {
    switch(uVar1) {
    case 0xc09f:
    case 0xc0a0:
    case 0xc0a1:
    case 0xc0a2:
    case 0xc0a3:
      iVar3 = *(int *)((int)local_8 + (uint)*(byte *)(local_8 + 0x9e) * 4 + 0x27e);
      if ((iVar3 == 0) ||
         (iVar5 = uVar1 + *(int *)((int)local_8 + 0x199), *(uint *)(iVar3 + 0xc) <= iVar5 - 0xc09fU)
         ) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)((iVar5 + -0xc09f) * *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x1c));
      }
      if ((puVar4 != (undefined4 *)0x0) && (*(char *)(puVar4 + 2) != '\0')) {
        thunk_FUN_0054b630(DAT_00802a30,0xe,*puVar4);
        thunk_FUN_0053f650(local_8,'\0');
        thunk_FUN_005252c0(0xae);
        DAT_00858df8 = (undefined4 *)local_4c;
        return 0;
      }
      break;
    case 0xc0a4:
      *(undefined4 *)((int)local_8 + 0x199) = *(undefined4 *)(param_1 + 0x14);
      thunk_FUN_004f0c80(local_8);
      thunk_FUN_005252c0(0xae);
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    case 0xc0af:
    case 0xc0b0:
    case 0xc0b1:
    case 0xc0b2:
    case 0xc0b3:
      thunk_FUN_004f0e60(local_8,param_1);
    }
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return 0;
}

