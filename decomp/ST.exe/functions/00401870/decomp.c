
void __thiscall thunk_FUN_00511ab0(void *this,int param_1,uint param_2)

{
  int *piVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar8;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  void *pvStack_c;
  uint uStack_8;
  
  if ((*(int *)((int)this + 0x218) != 0) &&
     (*(int *)(*(int *)((int)this + 0x218) + 8) < (int)((param_2 & 0xffff) + param_1))) {
    uStack_50 = DAT_00858df8;
    DAT_00858df8 = &uStack_50;
    pvStack_c = this;
    iVar4 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
    pvVar3 = pvStack_c;
    if (iVar4 == 0) {
      iVar8 = 1;
      iVar4 = *(int *)((int)pvStack_c + 0x218);
      piVar1 = (int *)((int)pvStack_c + 0x218);
      puVar6 = (undefined4 *)(*(int *)((int)pvStack_c + 0x1dc) + 0x28);
      uVar5 = FUN_006b4fe0(*(int *)((int)pvStack_c + 0x1dc));
      puVar6 = (undefined4 *)
               FUN_006b50c0(*(int *)(iVar4 + 4),*(int *)(iVar4 + 8) + 0x32,
                            (uint)*(ushort *)(*(int *)((int)pvVar3 + 0x1dc) + 0xe),uVar5,puVar6,
                            iVar8);
      uStack_8 = puVar6[5];
      if (uStack_8 == 0) {
        uStack_8 = ((uint)*(ushort *)((int)puVar6 + 0xe) * puVar6[1] + 0x1f >> 3 & 0x1ffffffc) *
                   puVar6[2];
      }
      puVar7 = (undefined4 *)FUN_006b4fa0((int)puVar6);
      for (uVar5 = uStack_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uStack_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = 0xff;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      iVar4 = *piVar1;
      FUN_006b55f0(puVar6,0,0,0,iVar4,0,0,0,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8));
      FUN_006ab060(piVar1);
      *piVar1 = (int)puVar6;
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0xdc,0,iVar4,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c383c,0xdc);
  }
  return;
}

