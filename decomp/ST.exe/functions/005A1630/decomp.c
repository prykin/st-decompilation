
void __thiscall FUN_005a1630(void *this,int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 local_6c;
  undefined4 local_68 [16];
  undefined4 local_28 [8];
  undefined4 *local_8;
  
  if (((*(char *)((int)this + 0x1a5f) == '\x01') && (*(int *)((int)this + 0x1ac0) != 0)) &&
     (-1 < *(int *)((int)this + 0x1abc))) {
    local_6c = DAT_00858df8;
    DAT_00858df8 = &local_6c;
    local_8 = this;
    iVar5 = __setjmp3(local_68,0,unaff_EDI,unaff_ESI);
    pvVar2 = DAT_00802a30;
    if (iVar5 == 0) {
      if (DAT_00802a30 != (void *)0x0) {
        uVar11 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
        uVar1 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
        *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
        *(undefined2 *)((int)pvVar2 + 0x494) = 0xffff;
        thunk_FUN_0054bf40(0,uVar1,uVar11);
        thunk_FUN_00543c90(pvVar2,*(int *)((int)pvVar2 + 0xc5),*(int *)((int)pvVar2 + 0xc9));
        *(undefined1 *)((int)pvVar2 + 0xd2) = 0;
        *(undefined4 *)((int)pvVar2 + 0x4df) = 0xffffffff;
      }
      puVar4 = local_8;
      if (param_1 != 0) {
        DAT_0080fb76 = 1;
        *(undefined4 *)((int)local_8 + 0x4d) = 0x7102;
        *(undefined4 *)((int)local_8 + 0x49) = 1;
        FUN_006e6020(local_8,(undefined4 *)((int)local_8 + 0x3d));
        DAT_00858df8 = (undefined4 *)local_6c;
        return;
      }
      iVar5 = local_8[0x6b0];
      uVar9 = *(uint *)(iVar5 + 0x14);
      if (uVar9 == 0) {
        uVar9 = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar5 + 8);
      }
      puVar6 = (undefined4 *)FUN_006b4fa0(iVar5);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar6 = 0xff;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_00710a90(puVar4[0x6b0],0,0,0x16,0x1b8,0xf0);
      iVar13 = -1;
      iVar12 = -1;
      uVar11 = 2;
      iVar10 = -1;
      iVar5 = -2;
      puVar7 = (uint *)FUN_006b0140(0x25b9,DAT_00807618);
      FUN_00711b70(puVar7,iVar5,iVar10,uVar11,iVar12,iVar13);
      FUN_006b35d0(DAT_008075a8,puVar4[0x6af]);
      iVar5 = *(int *)((int)puVar4 + 0x1a5b);
      puVar6 = local_28;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_28[2] = puVar4[2];
      local_28[3] = 2;
      local_28[4] = 0x6956;
      pvVar2 = *(void **)(iVar5 + 0x2e6);
      if (pvVar2 != (void *)0x0) {
        thunk_FUN_005b7ef0(pvVar2,0x25bc,'\0',local_28,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
        DAT_00858df8 = (undefined4 *)local_6c;
        return;
      }
      (**(code **)*puVar4)(local_28);
      DAT_00858df8 = (undefined4 *)local_6c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_6c;
    iVar10 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x95b,0,iVar5,&DAT_007a4ccc);
    if (iVar10 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7cbf70,0x95b);
  }
  return;
}

