
void __thiscall thunk_FUN_0053c820(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  int iStack_18;
  int iStack_14;
  void *pvStack_10;
  uint uStack_c;
  undefined4 *puStack_8;
  
  piVar2 = *(int **)(param_1 + 0x18);
  iStack_18 = *piVar2 - *(int *)((int)this + 0x3c);
  if (*(int *)((int)this + 0x5c) == 0) {
    iStack_14 = piVar2[1] - DAT_00806734;
  }
  else {
    iStack_14 = piVar2[1] - *(int *)((int)this + 0x44);
  }
  uVar1 = *(int *)((int)this + 0x199) + -0xc0af + *(int *)(param_1 + 0x10);
  iVar5 = *(int *)((int)this + (uint)*(byte *)((int)this + 0x278) * 4 + 0x27a);
  if ((iVar5 == 0) || (*(uint *)(iVar5 + 0xc) <= uVar1)) {
    puStack_8 = (undefined4 *)0x0;
  }
  else {
    puStack_8 = (undefined4 *)(*(int *)(iVar5 + 8) * uVar1 + *(int *)(iVar5 + 0x1c));
  }
  pvStack_10 = this;
  if ((*(short *)(param_1 + 0x14) == 0) || (puStack_8 == (undefined4 *)0x0)) {
    uStack_c = (int)*(short *)(*(int *)((int)this + 0x188) + 0x23) - ((DAT_0080874e != '\x03') + 1);
  }
  else {
    uStack_c = thunk_FUN_005276e0(*(undefined1 *)puStack_8,(byte)((uint)*puStack_8 >> 0x10));
  }
  uStack_5c = DAT_00858df8;
  DAT_00858df8 = &uStack_5c;
  iVar5 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
  pvVar4 = pvStack_10;
  if (iVar5 == 0) {
    if ((puStack_8 == (undefined4 *)0x0) || (*(char *)(puStack_8 + 2) == '\0')) {
      iVar5 = *(int *)((int)pvStack_10 + 0x18c);
    }
    else {
      iVar5 = *(int *)((int)pvStack_10 + 0x188);
    }
    pbVar6 = (byte *)FUN_0070b3a0(iVar5,uStack_c);
    iVar7 = iStack_14;
    iVar5 = iStack_18;
    thunk_FUN_00540760(*(undefined4 **)((int)pvVar4 + 0x68),iStack_18,iStack_14,'\x01',pbVar6);
    if ((*(short *)(param_1 + 0x14) == 3) && (puStack_8 != (undefined4 *)0x0)) {
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)((int)pvVar4 + 400),
                                    7 - (uint)(*(char *)(puStack_8 + 2) != '\0'));
      thunk_FUN_00540760(*(undefined4 **)((int)pvVar4 + 0x68),iVar5,iVar7,'\x06',pbVar6);
    }
    FUN_006b3640(DAT_008075a8,*(uint *)((int)pvVar4 + 0x60),0xffffffff,*(uint *)((int)pvVar4 + 0x3c)
                 ,*(uint *)((int)pvVar4 + 0x44));
    DAT_00858df8 = (undefined4 *)uStack_5c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_5c;
  iVar7 = FUN_006ad4d0(s_E____titans_Andrey_research_cpp_007c76c8,0x88,0,iVar5,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_006a5e40(iVar5,0,0x7c76c8,0x88);
  return;
}

