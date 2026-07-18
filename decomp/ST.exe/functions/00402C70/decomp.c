
void __thiscall thunk_FUN_005a1430(void *this,undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  if (((*(char *)((int)this + 0x1a5f) == '\x01') && (*(int *)((int)this + 0x1ac0) != 0)) &&
     (-1 < *(int *)((int)this + 0x1abc))) {
    puStack_4c = DAT_00858df8;
    DAT_00858df8 = &puStack_4c;
    pvStack_8 = this;
    iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
    pvVar2 = pvStack_8;
    if (iVar3 == 0) {
      iVar3 = *(int *)((int)pvStack_8 + 0x1ac0);
      uVar9 = *(uint *)(iVar3 + 0x14);
      if (uVar9 == 0) {
        uVar9 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar3 + 8);
      }
      puVar4 = (undefined4 *)FUN_006b4fa0(iVar3);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar4 = 0xff;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      FUN_00710a90(*(int *)((int)pvVar2 + 0x1ac0),0,0,0x16,0x1b8,0xf0);
      uVar5 = FUN_006b0140(0x25bb,DAT_00807618);
      uVar6 = FUN_006b0140(0x25ba,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__s__d_____d__s__007cc434,uVar6,param_1,param_2,uVar5);
      FUN_00711b70(&DAT_0080f33a,-2,-1,2,-1,-1);
      FUN_006b35d0(DAT_008075a8,*(uint *)((int)pvVar2 + 0x1abc));
      DAT_00858df8 = puStack_4c;
      return;
    }
    DAT_00858df8 = puStack_4c;
    iVar7 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x941,0,iVar3,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cbf70,0x941);
  }
  return;
}

