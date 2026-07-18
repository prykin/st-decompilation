
void FUN_00590170(void)

{
  undefined4 uVar1;
  code *pcVar2;
  void *this;
  int iVar3;
  LPSTR pCVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  byte bVar8;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (DAT_00802a30 != (void *)0x0) {
      if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
      }
      else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
      }
    }
    iVar3 = 1;
    bVar8 = 0;
    pCVar4 = FUN_006f2c00(&DAT_007cbc5c,1,(uint)(*(char *)((int)local_8 + 0x5d) != '\0'));
    uVar5 = FUN_0070a9f0(DAT_00806780,pCVar4,bVar8,iVar3);
    *(undefined4 *)((int)local_8 + 0x5e) = uVar5;
    puVar7 = (undefined4 *)((int)local_8 + 0x18);
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)((int)local_8 + 0x2c) = *(undefined4 *)((int)local_8 + 8);
    *(undefined4 *)((int)local_8 + 0x28) = 0x13;
    FUN_006e6000(local_8,3,1,(undefined4 *)((int)local_8 + 0x18));
    if (*(void **)(DAT_0081176c + 0x2e6) != (void *)0x0) {
      thunk_FUN_005b8c70(*(void **)(DAT_0081176c + 0x2e6),0,0,1);
      thunk_FUN_005b6ff0();
    }
    thunk_FUN_0055dbf0(DAT_0080759c,1,0);
    thunk_FUN_00590580();
    thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)((int)local_8 + 0x5e),10,2);
    this = DAT_00802a30;
    if (DAT_00802a30 != (void *)0x0) {
      uVar5 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
      uVar1 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
      *(undefined2 *)((int)this + 0x494) = 0xffff;
      thunk_FUN_0054bf40(0,uVar1,uVar5);
      thunk_FUN_00543c90(this,*(int *)((int)this + 0xc5),*(int *)((int)this + 0xc9));
      *(undefined1 *)((int)this + 0xd2) = 0;
      *(undefined4 *)((int)this + 0x4df) = 0xffffffff;
    }
    thunk_FUN_00540dc0(1,*(undefined4 *)((int)local_8 + 8),2,100,2,1,0,0,0,0,0,0);
    thunk_FUN_00540dc0(1,*(undefined4 *)((int)local_8 + 8),2,0x62,2,0x1c,0,0,0,0,0,0);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar6 = FUN_006ad4d0(s_E____titans_Start_adv_obj_cpp_007cbc24,0x1f,0,iVar3,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cbc24,0x1f);
  return;
}

