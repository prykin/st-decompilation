
void FUN_00513fa0(void)

{
  uint uVar1;
  void *pvVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar4 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x307,0,iVar4,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar4,0,0x7c383c,0x307);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = *(int *)((int)local_8 + 0x1b3);
  uVar7 = *(uint *)((int)local_8 + 0x1b7);
  uVar1 = *(uint *)(iVar4 + 0xc);
  if (uVar7 < uVar1 - 1) {
    uVar7 = uVar7 + 1;
    if (uVar7 < uVar1) {
      piVar5 = (int *)(*(int *)(iVar4 + 8) * uVar7 + *(int *)(iVar4 + 0x1c));
    }
    else {
      piVar5 = (int *)0x0;
    }
    if (piVar5 == (int *)0x0) {
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    *(uint *)((int)local_8 + 0x1b7) = uVar7;
    if ((char)piVar5[2] != '\0') {
      *(undefined1 *)((int)local_8 + 0x1a1) = 0;
      *(undefined4 *)((int)local_8 + 0x1a7) = 0;
      *(undefined4 *)((int)local_8 + 0x1a3) = 0;
      uVar7 = *(uint *)((int)piVar5 + 0xd);
      pvVar2 = *(void **)((int)piVar5 + 9);
      switch((char)piVar5[2]) {
      case '\x01':
        thunk_FUN_00517a50(local_8,(int)pvVar2,uVar7,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      case '\x02':
        thunk_FUN_0051a100((int)pvVar2,uVar7,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      case '\x03':
        thunk_FUN_00518c20((int)pvVar2,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      case '\x04':
        thunk_FUN_0051b5a0(local_8,(int)pvVar2,uVar7,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      case '\x05':
        thunk_FUN_00516a40(local_8,(uint)pvVar2,(byte)uVar7,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      case '\x06':
        thunk_FUN_00516480((uint)pvVar2,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      case '\a':
        thunk_FUN_00516300();
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      case '\b':
        thunk_FUN_0051d540(pvVar2,uVar7,'\0');
        break;
      case '\n':
        thunk_FUN_00513a40();
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      case '\v':
        thunk_FUN_0051c980(local_8,(int)pvVar2,uVar7,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      case '\f':
        thunk_FUN_0051d360((int)pvVar2,'\0');
        thunk_FUN_005134b0((int)local_8);
        DAT_00858df8 = (undefined4 *)local_4c;
        return;
      }
      thunk_FUN_005134b0((int)local_8);
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    if (*(char *)((int)piVar5 + 0x12) != '\0') goto LAB_005141e1;
  }
  else {
    if (uVar7 < uVar1) {
      piVar5 = (int *)(*(int *)(iVar4 + 8) * uVar7 + *(int *)(iVar4 + 0x1c));
    }
    else {
      piVar5 = (int *)0x0;
    }
    if ((char)piVar5[2] != '\0') {
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    if (*(char *)((int)piVar5 + 0x12) != '\0') {
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
  }
  thunk_FUN_00513030(piVar5,uVar7);
LAB_005141e1:
  thunk_FUN_00513fa0();
  DAT_00858df8 = (undefined4 *)local_4c;
  return;
}

