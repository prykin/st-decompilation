
void __thiscall
thunk_FUN_005a40f0(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 uStack_6c;
  undefined4 auStack_68 [16];
  undefined4 auStack_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_8;
  
  pvVar2 = DAT_00802a30;
  pvStack_8 = this;
  if (DAT_00802a30 != (void *)0x0) {
    *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
    *(undefined2 *)((int)pvVar2 + 0x494) = 0xffff;
    thunk_FUN_0054bf40(0,*(undefined4 *)((int)pvVar2 + 0xc5),*(undefined4 *)((int)pvVar2 + 0xc9));
    thunk_FUN_00543c90(pvVar2,*(int *)((int)pvVar2 + 0xc5),*(int *)((int)pvVar2 + 0xc9));
    *(undefined1 *)((int)pvVar2 + 0xd2) = 0;
    *(undefined4 *)((int)pvVar2 + 0x4df) = 0xffffffff;
  }
  if (*(char *)((int)this + 0x1a5f) == '\t') {
    uStack_6c = DAT_00858df8;
    DAT_00858df8 = &uStack_6c;
    iVar3 = __setjmp3(auStack_68,0,unaff_EDI,unaff_ESI);
    pvVar2 = pvStack_8;
    if (iVar3 == 0) {
      puVar7 = (undefined4 *)((int)pvStack_8 + 0x1edb);
      if (*(int *)((int)pvStack_8 + 0x1edb) != 0) {
        FUN_006ab060(puVar7);
      }
      *(undefined4 *)((int)pvVar2 + 0x1edf) = param_2;
      *(int *)((int)pvVar2 + 0x1ee3) = param_3;
      puVar4 = (undefined4 *)FUN_006aac70(param_3 * 0x24);
      iVar3 = *(int *)((int)pvVar2 + 0x1ee3);
      *puVar7 = puVar4;
      for (uVar6 = iVar3 * 9 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *param_4;
        param_4 = param_4 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)param_4;
        param_4 = (undefined4 *)((int)param_4 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      thunk_FUN_0059b2c0((int)pvVar2);
      puVar7 = auStack_28;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      uStack_18 = 0x20;
      if ((*(int *)((int)pvVar2 + 0x1edf) == 0) ||
         (uStack_14 = 1, *(int *)((int)pvVar2 + 0x1a6b) == 0)) {
        uStack_14 = 0;
      }
      if (*(int *)((int)pvVar2 + 0x1ed3) != 0) {
        FUN_006e6080(pvVar2,2,*(int *)((int)pvVar2 + 0x1ed3),auStack_28);
      }
      if ((0xf422f < *(uint *)((int)pvVar2 + 0x1edf)) ||
         (uStack_14 = 1, *(int *)((int)pvVar2 + 0x1a6b) == 0)) {
        uStack_14 = 0;
      }
      if (*(int *)((int)pvVar2 + 0x1ed7) != 0) {
        FUN_006e6080(pvVar2,2,*(int *)((int)pvVar2 + 0x1ed7),auStack_28);
      }
      DAT_00858df8 = (undefined4 *)uStack_6c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_6c;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xb65,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cbf70,0xb65);
  }
  return;
}

