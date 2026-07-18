
void __thiscall thunk_FUN_004f0e60(void *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  int iStack_18;
  void *pvStack_14;
  int iStack_10;
  byte *pbStack_c;
  undefined4 *puStack_8;
  
  piVar1 = *(int **)(param_1 + 0x18);
  iStack_18 = *piVar1 - *(int *)((int)this + 0x3c);
  if (*(int *)((int)this + 0x5c) == 0) {
    iStack_10 = piVar1[1] - DAT_00806734;
  }
  else {
    iStack_10 = piVar1[1] - *(int *)((int)this + 0x44);
  }
  uVar5 = *(int *)((int)this + 0x199) + -0xc0af + *(int *)(param_1 + 0x10);
  iVar8 = *(int *)((int)this + (uint)*(byte *)((int)this + 0x278) * 4 + 0x27e);
  if ((iVar8 == 0) || (*(uint *)(iVar8 + 0xc) <= uVar5)) {
    puStack_8 = (undefined4 *)0x0;
  }
  else {
    puStack_8 = (undefined4 *)(*(int *)(iVar8 + 8) * uVar5 + *(int *)(iVar8 + 0x1c));
  }
  pvStack_14 = this;
  if ((*(short *)(param_1 + 0x14) == 0) || (puStack_8 == (undefined4 *)0x0)) {
    pbStack_c = *(byte **)((int)this + 0x27a);
  }
  else {
    if (*(char *)(puStack_8 + 2) == '\0') {
      iVar8 = *(int *)((int)this + 0x18c);
    }
    else {
      iVar8 = *(int *)((int)this + 0x188);
    }
    uVar5 = thunk_FUN_00526ba0(*puStack_8,*(char *)((int)puStack_8 + 9));
    pbStack_c = (byte *)FUN_0070b3a0(iVar8,uVar5);
  }
  uStack_5c = DAT_00858df8;
  DAT_00858df8 = &uStack_5c;
  iVar6 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
  iVar4 = iStack_10;
  pvVar3 = pvStack_14;
  iVar8 = iStack_18;
  if (iVar6 == 0) {
    thunk_FUN_00540760(*(undefined4 **)((int)pvStack_14 + 0x68),iStack_18,iStack_10,'\x01',pbStack_c
                      );
    if ((*(short *)(param_1 + 0x14) == 3) && (puStack_8 != (undefined4 *)0x0)) {
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)((int)pvVar3 + 400),
                                    9 - (uint)(*(char *)(puStack_8 + 2) != '\0'));
      thunk_FUN_00540760(*(undefined4 **)((int)pvVar3 + 0x68),iVar8,iVar4,'\x06',pbVar7);
    }
    FUN_006b3640(DAT_008075a8,*(uint *)((int)pvVar3 + 0x60),0xffffffff,*(uint *)((int)pvVar3 + 0x3c)
                 ,*(uint *)((int)pvVar3 + 0x44));
    DAT_00858df8 = (undefined4 *)uStack_5c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_5c;
  iVar8 = FUN_006ad4d0(s_E____titans_Andrey_bldobj_cpp_007c1984,0x92,0,iVar6,&DAT_007a4ccc);
  if (iVar8 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar6,0,0x7c1984,0x92);
  return;
}

