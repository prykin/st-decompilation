
void __thiscall
thunk_FUN_0053d920(void *this,int param_1,byte param_2,char *param_3,undefined4 param_4,UINT param_5
                  ,undefined *param_6)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar6;
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  int *piStack_18;
  int iStack_14;
  void *pvStack_10;
  int iStack_c;
  ushort *puStack_8;
  
  piStack_18 = *(int **)(param_1 + 0x18);
  puStack_8 = (ushort *)0x0;
  iStack_14 = *piStack_18 - *(int *)((int)this + 0x3c);
  if (*(int *)((int)this + 0x5c) == 0) {
    iStack_c = piStack_18[1] + *(int *)((int)this + 0x48);
  }
  else {
    iStack_c = piStack_18[1] - *(int *)((int)this + 0x44);
  }
  if (param_6 != (undefined *)0x0) {
    uStack_5c = DAT_00858df8;
    DAT_00858df8 = &uStack_5c;
    pvStack_10 = this;
    iVar3 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      puStack_8 = FUN_006f1ce0(param_2,param_3,(int *)0x0,1);
      iVar6 = iStack_c;
      pvVar2 = pvStack_10;
      iVar3 = iStack_14;
      thunk_FUN_00540760(*(undefined4 **)((int)pvStack_10 + 0x68),iStack_14,iStack_c,param_2,
                         (byte *)puStack_8);
      FUN_006f20e0((uint *)&puStack_8);
      FUN_00710a90(*(int *)((int)pvVar2 + 0x68),0,iVar3,iVar6,piStack_18[2],piStack_18[3]);
      uVar4 = (*(code *)param_6)(param_1);
      iVar6 = -1;
      iVar3 = -2;
      puVar5 = (uint *)FUN_006b0140(param_5,DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar6,uVar4);
      FUN_006b3640(DAT_008075a8,*(uint *)((int)pvVar2 + 0x60),0xffffffff,
                   *(uint *)((int)pvVar2 + 0x3c),*(uint *)((int)pvVar2 + 0x44));
      DAT_00858df8 = (undefined4 *)uStack_5c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_5c;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x3e,0,iVar3,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c7870,0x3e);
  }
  return;
}

