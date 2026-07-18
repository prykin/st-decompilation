
void __fastcall FUN_005a2d70(void *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_7c;
  undefined4 local_78 [16];
  undefined4 local_38 [11];
  undefined1 local_b;
  void *local_8;
  
  if (*(char *)((int)param_1 + 0x1a5f) == '\x06') {
    *(undefined1 *)((int)param_1 + 0x1a60) = 0;
    local_7c = DAT_00858df8;
    DAT_00858df8 = &local_7c;
    local_8 = param_1;
    iVar5 = __setjmp3(local_78,0,unaff_EDI,unaff_ESI);
    pvVar4 = DAT_00802a30;
    if (iVar5 == 0) {
      if (DAT_00802a30 != (void *)0x0) {
        uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
        uVar2 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
        *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
        *(undefined2 *)((int)pvVar4 + 0x494) = 0xffff;
        thunk_FUN_0054bf40(0,uVar2,uVar6);
        thunk_FUN_00543c90(pvVar4,*(int *)((int)pvVar4 + 0xc5),*(int *)((int)pvVar4 + 0xc9));
        *(undefined1 *)((int)pvVar4 + 0xd2) = 0;
        *(undefined4 *)((int)pvVar4 + 0x4df) = 0xffffffff;
      }
      FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0xf3);
      pvVar4 = local_8;
      thunk_FUN_00540620(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',
                         *(BITMAPINFO **)((int)local_8 + 0x1e9a));
      *(undefined4 *)(*(int *)((int)pvVar4 + 0x1ea6) + 0xc) = 0;
      local_b = 1;
      FUN_006ae1c0(*(uint **)((int)pvVar4 + 0x1ea6),local_38);
      *(undefined4 *)((int)pvVar4 + 0x2d) = 0x28;
      puVar1 = (undefined4 *)((int)pvVar4 + 0x1d);
      *(undefined4 *)((int)pvVar4 + 0x31) = *(undefined4 *)(*(int *)((int)pvVar4 + 0x1ea6) + 0xc);
      *(undefined2 *)((int)pvVar4 + 0x35) = 1;
      FUN_006e6080(pvVar4,2,*(undefined4 *)((int)pvVar4 + 0x1b20),puVar1);
      *(undefined4 *)((int)pvVar4 + 0x2d) = 0x20;
      if ((*(int *)(*(int *)((int)pvVar4 + 0x1ea6) + 0xc) == 0) ||
         (*(int *)((int)pvVar4 + 0x1a6b) == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(undefined4 *)((int)pvVar4 + 0x31) = uVar6;
      FUN_006e6080(pvVar4,2,*(undefined4 *)((int)pvVar4 + 0x1b20),puVar1);
      *(undefined4 *)((int)pvVar4 + 0x2d) = 0x20;
      *(undefined4 *)((int)pvVar4 + 0x31) = 0;
      if (*(int *)((int)pvVar4 + 0x1b24) != 0) {
        FUN_006e6080(pvVar4,2,*(int *)((int)pvVar4 + 0x1b24),puVar1);
      }
      *(undefined4 *)((int)pvVar4 + 0x31) = 1;
      if ((*(int *)((int)pvVar4 + 0x1b18) != 0) && (*(int *)((int)pvVar4 + 0x1a6b) != 0)) {
        FUN_006e6080(pvVar4,2,*(int *)((int)pvVar4 + 0x1b18),puVar1);
      }
      DAT_00858df8 = (undefined4 *)local_7c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_7c;
    iVar7 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa7d,0,iVar5,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7cbf70,0xa7d);
  }
  return;
}

