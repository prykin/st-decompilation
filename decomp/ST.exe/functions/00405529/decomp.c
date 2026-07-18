
void __thiscall thunk_FUN_005a0dc0(void *this,int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  uint uVar10;
  void *unaff_EDI;
  char *pcVar11;
  undefined4 *puStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  if (((*(char *)((int)this + 0x1a5f) == '\x01') && (*(int *)((int)this + 0x1ac0) != 0)) &&
     (-1 < *(int *)((int)this + 0x1abc))) {
    puStack_4c = DAT_00858df8;
    DAT_00858df8 = &puStack_4c;
    pvStack_8 = this;
    iVar4 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
    pvVar3 = pvStack_8;
    if (iVar4 == 0) {
      iVar4 = *(int *)((int)pvStack_8 + 0x1ac0);
      uVar10 = *(uint *)(iVar4 + 0x14);
      if (uVar10 == 0) {
        uVar10 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar4 + 8);
      }
      puVar5 = (undefined4 *)FUN_006b4fa0(iVar4);
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      FUN_00710a90(*(int *)((int)pvVar3 + 0x1ac0),0,0,0x16,0x1b8,0xf0);
      if (param_1 < param_2) {
        iVar4 = (param_1 * 100) / param_2;
        uVar6 = FUN_006b0140(0x2571,DAT_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_d___007cc3ec,uVar6,iVar4);
      }
      else {
        pcVar7 = (char *)FUN_006b0140(0x2570,DAT_00807618);
        uVar10 = 0xffffffff;
        do {
          pcVar11 = pcVar7;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar11 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar11;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar7 = pcVar11 + -uVar10;
        pcVar11 = (char *)&DAT_0080f33a;
        for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar11 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      FUN_00711b70(&DAT_0080f33a,-1,-1,2,-1,-1);
      FUN_006b35d0(DAT_008075a8,*(uint *)((int)pvVar3 + 0x1abc));
      DAT_00858df8 = puStack_4c;
      return;
    }
    DAT_00858df8 = puStack_4c;
    iVar8 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x909,0,iVar4,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7cbf70,0x909);
  }
  return;
}

