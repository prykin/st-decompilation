
void __thiscall thunk_FUN_004ef320(void *this,int param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puStack_60;
  undefined4 auStack_5c [16];
  int iStack_1c;
  void *pvStack_18;
  int *piStack_14;
  byte *pbStack_10;
  int iStack_c;
  undefined4 *puStack_8;
  
  piStack_14 = *(int **)(param_1 + 0x18);
  iStack_1c = *piStack_14 - *(int *)((int)this + 0x3c);
  if (*(int *)((int)this + 0x5c) == 0) {
    iStack_c = piStack_14[1] - DAT_00806734;
  }
  else {
    iStack_c = piStack_14[1] - *(int *)((int)this + 0x44);
  }
  uVar4 = *(int *)((int)this + 0x199) + -0xc0af + *(int *)(param_1 + 0x10);
  iVar7 = *(int *)((int)this + (uint)*(byte *)((int)this + 0x278) * 4 + 0x27a);
  if ((iVar7 == 0) || (*(uint *)(iVar7 + 0xc) <= uVar4)) {
    puStack_8 = (undefined4 *)0x0;
  }
  else {
    puStack_8 = (undefined4 *)(*(int *)(iVar7 + 8) * uVar4 + *(int *)(iVar7 + 0x1c));
  }
  pvStack_18 = this;
  if ((*(short *)(param_1 + 0x14) == 0) || (puStack_8 == (undefined4 *)0x0)) {
    pbStack_10 = *(byte **)((int)this + 0x28e);
  }
  else {
    if (*(char *)(puStack_8 + 2) == '\0') {
      iVar7 = *(int *)((int)this + 0x18c);
    }
    else {
      iVar7 = *(int *)((int)this + 0x188);
    }
    uVar4 = thunk_FUN_00526ba0(*puStack_8,*(char *)((int)puStack_8 + 9));
    pbStack_10 = (byte *)FUN_0070b3a0(iVar7,uVar4);
  }
  puStack_60 = DAT_00858df8;
  DAT_00858df8 = &puStack_60;
  iVar5 = __setjmp3(auStack_5c,0,unaff_EDI,unaff_ESI);
  iVar3 = iStack_c;
  pvVar2 = pvStack_18;
  iVar7 = iStack_1c;
  if (iVar5 != 0) {
    DAT_00858df8 = puStack_60;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_bldboat_cpp_007c17b4,0x9e,0,iVar5,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c17b4,0x9e);
    return;
  }
  FUN_006b4170(*(int *)((int)pvStack_18 + 0x68),0,iStack_1c,iStack_c,piStack_14[2],piStack_14[3],0);
  thunk_FUN_00540760(*(undefined4 **)((int)pvVar2 + 0x68),iVar7 + 1,iVar3 + 1,'\x01',pbStack_10);
  if (*(short *)(param_1 + 0x14) == 3) {
    if (puStack_8 == (undefined4 *)0x0) goto LAB_004ef4e9;
    iVar5 = (-(uint)(*(char *)(puStack_8 + 2) != '\0') & 2) + 3;
  }
  else {
    iVar5 = 4;
  }
  pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)pvVar2 + 400),iVar5);
  thunk_FUN_00540760(*(undefined4 **)((int)pvVar2 + 0x68),iVar7,iVar3,'\x06',pbVar6);
  if ((((puStack_8 != (undefined4 *)0x0) && (puStack_8[1] != 0)) &&
      (*(char *)(puStack_8 + 2) != '\0')) && (*(short *)(param_1 + 0x14) != 0)) {
    wsprintfA((LPSTR)((int)pvVar2 + 0x6c),&DAT_007c1890,puStack_8[1]);
    FUN_00710a90(*(int *)((int)pvVar2 + 0x68),0,iVar7,iVar3,piStack_14[2],piStack_14[3]);
    FUN_007119c0((uint *)((int)pvVar2 + 0x6c),-2,-1,0);
  }
LAB_004ef4e9:
  FUN_006b3640(DAT_008075a8,*(uint *)((int)pvVar2 + 0x60),0xffffffff,*(uint *)((int)pvVar2 + 0x3c),
               *(uint *)((int)pvVar2 + 0x44));
  DAT_00858df8 = puStack_60;
  return;
}

