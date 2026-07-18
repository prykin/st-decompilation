
void FUN_00513bc0(void)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  undefined4 local_50;
  undefined4 local_4c [16];
  uint local_c;
  void *local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x2e9,0,iVar3,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar3,0,0x7c383c,0x2e9);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = *(int *)((int)local_8 + 0x1b7);
  iVar3 = *(int *)((int)local_8 + 0x1b3);
  if (iVar5 == 0) {
    iVar5 = *(int *)(iVar3 + 0xc);
    if (iVar5 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(iVar3 + 0x1c);
    }
    if ((char)piVar4[2] != '\0') {
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    if (*(char *)((int)piVar4 + 0x12) != '\0') {
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = iVar5 - 1;
    if (uVar6 < *(uint *)(iVar3 + 0xc)) {
      piVar4 = (int *)(*(int *)(iVar3 + 8) * (iVar5 + -1) + *(int *)(iVar3 + 0x1c));
    }
    else {
      piVar4 = (int *)0x0;
    }
    if (piVar4 == (int *)0x0) {
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    local_c = uVar6;
    if ((char)piVar4[2] != '\0') {
      *(uint *)((int)local_8 + 0x1b7) = uVar6;
      *(undefined1 *)((int)local_8 + 0x1a1) = 0;
      *(undefined4 *)((int)local_8 + 0x1a7) = 0;
      *(undefined4 *)((int)local_8 + 0x1a3) = 0;
      uVar6 = *(uint *)((int)piVar4 + 0xd);
      pvVar1 = *(void **)((int)piVar4 + 9);
      switch((char)piVar4[2]) {
      case '\x01':
        thunk_FUN_00517a50(local_8,(int)pvVar1,uVar6,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_50;
        return;
      case '\x02':
        thunk_FUN_0051a100((int)pvVar1,uVar6,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_50;
        return;
      case '\x03':
        thunk_FUN_00518c20((int)pvVar1,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_50;
        return;
      case '\x04':
        thunk_FUN_0051b5a0(local_8,(int)pvVar1,uVar6,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_50;
        return;
      case '\x05':
        thunk_FUN_00516a40(local_8,(uint)pvVar1,(byte)uVar6,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_50;
        return;
      case '\x06':
        thunk_FUN_00516480((uint)pvVar1,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_50;
        return;
      case '\a':
        thunk_FUN_00516300();
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_50;
        return;
      case '\b':
        thunk_FUN_0051d540(pvVar1,uVar6,'\0');
        break;
      case '\n':
        thunk_FUN_00513a40();
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_50;
        return;
      case '\v':
        thunk_FUN_0051c980(local_8,(int)pvVar1,uVar6,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_50;
        return;
      case '\f':
        thunk_FUN_0051d360((int)pvVar1,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_50;
        return;
      }
      thunk_FUN_005134b0((int)local_8);
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    iVar5 = *(uint *)(iVar3 + 0xc) - iVar5;
    if (*(char *)((int)piVar4 + 0x12) != '\0') {
      *(uint *)((int)local_8 + 0x1b7) = uVar6;
      goto LAB_00513e3e;
    }
  }
  thunk_FUN_00513030(piVar4,uVar6);
  *(int *)((int)local_8 + 0x1b7) = *(int *)(*(int *)((int)local_8 + 0x1b3) + 0xc) - iVar5;
LAB_00513e3e:
  thunk_FUN_00513bc0();
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}

