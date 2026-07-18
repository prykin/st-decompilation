
void thunk_FUN_00514330(void)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined1 *puVar6;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (0 < *(int *)((int)pvStack_8 + 0x1cf)) {
      iVar3 = *(int *)((int)pvStack_8 + 0x1cb);
      uVar4 = *(int *)((int)pvStack_8 + 0x1cf) - 1;
      *(uint *)((int)pvStack_8 + 0x1cf) = uVar4;
      if (uVar4 < *(uint *)(iVar3 + 0xc)) {
        puVar6 = (undefined1 *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
      }
      else {
        puVar6 = (undefined1 *)0x0;
      }
      if (puVar6 != (undefined1 *)0x0) {
        *(undefined1 *)((int)pvStack_8 + 0x1a1) = 0;
        *(undefined4 *)((int)pvStack_8 + 0x1a7) = 0;
        *(undefined4 *)((int)pvStack_8 + 0x1a3) = 0;
        uVar4 = *(uint *)(puVar6 + 5);
        pvVar1 = *(void **)(puVar6 + 1);
        switch(*puVar6) {
        case 0:
          thunk_FUN_005135f0();
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 1:
          thunk_FUN_00517a50(pvStack_8,(int)pvVar1,uVar4,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 2:
          thunk_FUN_0051a100((int)pvVar1,uVar4,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 3:
          thunk_FUN_00518c20((int)pvVar1,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 4:
          thunk_FUN_0051b5a0(pvStack_8,(int)pvVar1,uVar4,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 5:
          thunk_FUN_00516a40(pvStack_8,(uint)pvVar1,(byte)uVar4,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 6:
          thunk_FUN_00516480((uint)pvVar1,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 7:
          thunk_FUN_00516300();
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 8:
          thunk_FUN_0051d540(pvVar1,uVar4,'\0');
          break;
        case 10:
          thunk_FUN_00513a40();
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 0xb:
          thunk_FUN_0051c980(pvStack_8,(int)pvVar1,uVar4,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        case 0xc:
          thunk_FUN_0051d360((int)pvVar1,'\0');
          DAT_00858df8 = (undefined4 *)uStack_4c;
          return;
        }
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x317,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c383c,0x317);
  return;
}

