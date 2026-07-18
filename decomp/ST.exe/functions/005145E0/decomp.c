
void FUN_005145e0(void)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  undefined1 *puVar6;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)local_8 + 0x1cb);
    if (*(int *)((int)local_8 + 0x1cf) < *(int *)(iVar3 + 0xc) + -1) {
      uVar5 = *(int *)((int)local_8 + 0x1cf) + 1;
      *(uint *)((int)local_8 + 0x1cf) = uVar5;
      if (uVar5 < *(uint *)(iVar3 + 0xc)) {
        puVar6 = (undefined1 *)(*(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c));
      }
      else {
        puVar6 = (undefined1 *)0x0;
      }
      if (puVar6 != (undefined1 *)0x0) {
        *(undefined1 *)((int)local_8 + 0x1a1) = 0;
        *(undefined4 *)((int)local_8 + 0x1a7) = 0;
        *(undefined4 *)((int)local_8 + 0x1a3) = 0;
        uVar5 = *(uint *)(puVar6 + 5);
        pvVar1 = *(void **)(puVar6 + 1);
        switch(*puVar6) {
        case 0:
          thunk_FUN_005135f0();
          DAT_00858df8 = (undefined4 *)local_4c;
          return;
        case 1:
          thunk_FUN_00517a50(local_8,(int)pvVar1,uVar5,'\0');
          DAT_00858df8 = (undefined4 *)local_4c;
          return;
        case 2:
          thunk_FUN_0051a100((int)pvVar1,uVar5,'\0');
          DAT_00858df8 = (undefined4 *)local_4c;
          return;
        case 3:
          thunk_FUN_00518c20((int)pvVar1,'\0');
          DAT_00858df8 = (undefined4 *)local_4c;
          return;
        case 4:
          thunk_FUN_0051b5a0(local_8,(int)pvVar1,uVar5,'\0');
          DAT_00858df8 = (undefined4 *)local_4c;
          return;
        case 5:
          thunk_FUN_00516a40(local_8,(uint)pvVar1,(byte)uVar5,'\0');
          DAT_00858df8 = (undefined4 *)local_4c;
          return;
        case 6:
          thunk_FUN_00516480((uint)pvVar1,'\0');
          DAT_00858df8 = (undefined4 *)local_4c;
          return;
        case 7:
          thunk_FUN_00516300();
          DAT_00858df8 = (undefined4 *)local_4c;
          return;
        case 8:
          thunk_FUN_0051d540(pvVar1,uVar5,'\0');
          break;
        case 10:
          thunk_FUN_00513a40();
          DAT_00858df8 = (undefined4 *)local_4c;
          return;
        case 0xb:
          thunk_FUN_0051c980(local_8,(int)pvVar1,uVar5,'\0');
          DAT_00858df8 = (undefined4 *)local_4c;
          return;
        case 0xc:
          thunk_FUN_0051d360((int)pvVar1,'\0');
          DAT_00858df8 = (undefined4 *)local_4c;
          return;
        }
      }
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x327,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c383c,0x327);
  return;
}

