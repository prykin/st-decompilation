
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005e5fb0(void *this,int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar8;
  char cVar9;
  uint uVar10;
  undefined4 local_50;
  undefined4 local_4c [16];
  void *local_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  local_c = this;
  uVar5 = FUN_006e51b0(*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0xa1) = uVar5;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar6 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  pvVar4 = local_c;
  if (iVar6 == 0) {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      thunk_FUN_005e5e30();
      break;
    case 2:
      thunk_FUN_005e58d0();
      break;
    case 3:
      thunk_FUN_005e5ba0();
      break;
    case 5:
      thunk_FUN_005e5d50();
      break;
    case 0x62:
      if (*(char *)((int)local_c + 0xb3) == '\0') {
        _DAT_00811774 = FUN_006e51b0(*(int *)((int)local_c + 0x10));
        *(undefined1 *)((int)pvVar4 + 0xb3) = 1;
        if (DAT_00811778 != (undefined4 *)0x0) {
          thunk_FUN_005aafb0();
          FUN_0072e2b0(DAT_00811778);
          DAT_00811778 = (undefined4 *)0x0;
        }
        FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0xf9,0x123,DAT_0081176c + 0x140);
        FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
        DAT_00811778 = (undefined4 *)FUN_0072e530(0x33);
        if (DAT_00811778 == (undefined4 *)0x0) {
          DAT_00811778 = (undefined4 *)0x0;
        }
        else {
          *(undefined1 *)((int)DAT_00811778 + 2) = 1;
          *(undefined1 *)DAT_00811778 = 0;
          *(undefined4 *)((int)DAT_00811778 + 3) = 0xffffffff;
          *(undefined1 *)((int)DAT_00811778 + 1) = 2;
          *(undefined4 *)((int)DAT_00811778 + 7) = 0;
          *(undefined4 *)((int)DAT_00811778 + 0xb) = 0;
          *(undefined4 *)((int)DAT_00811778 + 0xf) = 0;
          *(undefined4 *)((int)DAT_00811778 + 0x1b) = 1;
          *(undefined4 *)((int)DAT_00811778 + 0x13) = 1;
          *(undefined4 *)((int)DAT_00811778 + 0x17) = 0xffffffff;
          *(undefined4 *)((int)DAT_00811778 + 0x27) = 0;
          *(undefined4 *)((int)DAT_00811778 + 0x23) = 0;
          *(undefined4 *)((int)DAT_00811778 + 0x2f) = 1;
          *(undefined4 *)((int)DAT_00811778 + 0x2b) = 1;
        }
        if (DAT_00811778 != (undefined4 *)0x0) {
          uVar10 = 0;
          cVar9 = '\x01';
          uVar8 = 0x10;
          iVar7 = 1;
          iVar6 = FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
          thunk_FUN_005aacb0(4,10,0xb4,iVar6,iVar7,uVar8,cVar9,uVar10);
          puVar3 = DAT_00811778;
          puVar1 = (undefined4 *)((int)DAT_00811778 + 0x13);
          *(undefined1 *)((int)DAT_00811778 + 2) = 1;
          *(undefined4 *)((int)puVar3 + 0x17) = *puVar1;
          if (-1 < (int)*(uint *)((int)DAT_00811778 + 3)) {
            FUN_006b3430(DAT_008075a8,*(uint *)((int)DAT_00811778 + 3));
          }
        }
        if (local_8 != 0xffffffff) {
          FUN_006b3bb0(DAT_008075a8,local_8);
          local_8 = 0xffffffff;
        }
      }
      else if (*(char *)((int)local_c + 0xb3) == '\x04') {
        _DAT_00811774 = FUN_006e51b0(*(int *)((int)local_c + 0x10));
        *(undefined1 *)((int)pvVar4 + 0xb3) = 5;
        if (DAT_00811778 != (undefined4 *)0x0) {
          thunk_FUN_005aafb0();
          FUN_0072e2b0(DAT_00811778);
          DAT_00811778 = (undefined4 *)0x0;
        }
        DAT_00811778 = (undefined4 *)FUN_0072e530(0x33);
        if (DAT_00811778 == (undefined4 *)0x0) {
          DAT_00811778 = (undefined4 *)0x0;
        }
        else {
          *(undefined1 *)((int)DAT_00811778 + 2) = 1;
          *(undefined1 *)DAT_00811778 = 0;
          *(undefined4 *)((int)DAT_00811778 + 3) = 0xffffffff;
          *(undefined1 *)((int)DAT_00811778 + 1) = 2;
          *(undefined4 *)((int)DAT_00811778 + 7) = 0;
          *(undefined4 *)((int)DAT_00811778 + 0xb) = 0;
          *(undefined4 *)((int)DAT_00811778 + 0xf) = 0;
          *(undefined4 *)((int)DAT_00811778 + 0x1b) = 1;
          *(undefined4 *)((int)DAT_00811778 + 0x13) = 1;
          *(undefined4 *)((int)DAT_00811778 + 0x17) = 0xffffffff;
          *(undefined4 *)((int)DAT_00811778 + 0x27) = 0;
          *(undefined4 *)((int)DAT_00811778 + 0x23) = 0;
          *(undefined4 *)((int)DAT_00811778 + 0x2f) = 1;
          *(undefined4 *)((int)DAT_00811778 + 0x2b) = 1;
        }
        if (DAT_00811778 != (undefined4 *)0x0) {
          FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
          thunk_FUN_005b67a0(DAT_0080759c,0,0,10,0xb4,0xf9,0x123,
                             (undefined4 *)(DAT_0081176c + 0x140));
          uVar10 = 0;
          cVar9 = '\x01';
          uVar8 = 0x10;
          iVar7 = 1;
          iVar6 = FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
          thunk_FUN_005aacb0(4,10,0xb4,iVar6,iVar7,uVar8,cVar9,uVar10);
          puVar1 = DAT_00811778;
          *(undefined1 *)((int)DAT_00811778 + 2) = 0;
          *(undefined4 *)((int)puVar1 + 0x17) = 0xffffffff;
          if (-1 < (int)*(uint *)((int)DAT_00811778 + 3)) {
            FUN_006b3430(DAT_008075a8,*(uint *)((int)DAT_00811778 + 3));
          }
          FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
          thunk_FUN_00540620(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',
                             *(BITMAPINFO **)((int)pvVar4 + 0x5d));
        }
      }
      break;
    case 100:
      thunk_FUN_005e5f60(local_c);
      *(undefined4 *)((int)pvVar4 + 0x8d) = 1;
      *(undefined4 *)((int)pvVar4 + 0x91) = 0x7102;
    }
    DAT_00858df8 = (undefined4 *)local_50;
    uVar5 = FUN_006e5fd0();
    return uVar5;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar7 = FUN_006ad4d0(s_E____titans_Start_test_obj_cpp_007cdcbc,0xb5,0,iVar6,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  FUN_006a5e40(iVar6,0,0x7cdcbc,0xb5);
  return 0xffff;
}

