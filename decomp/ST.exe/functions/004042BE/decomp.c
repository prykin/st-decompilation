
void __thiscall thunk_FUN_004ee350(void *this,int param_1,char *param_2,uint param_3)

{
  code *pcVar1;
  void *pvVar2;
  int *piVar3;
  LPSTR pCVar4;
  void *unaff_ESI;
  int iVar5;
  undefined4 uVar6;
  undefined4 auStack_54 [16];
  void *pvStack_14;
  int iStack_10;
  int iStack_c;
  ushort *puStack_8;
  
  uVar6 = DAT_00858df8;
  puStack_8 = (ushort *)0x0;
  piVar3 = *(int **)(param_1 + 0x18);
  iStack_10 = *piVar3 - *(int *)((int)this + 0x3c);
  if (*(int *)((int)this + 0x5c) == 0) {
    iStack_c = piVar3[1] - DAT_00806734;
  }
  else {
    iStack_c = piVar3[1] - *(int *)((int)this + 0x44);
  }
  DAT_00858df8 = &stack0xffffffa8;
  pvStack_14 = this;
  piVar3 = (int *)__setjmp3(auStack_54,0,unaff_ESI,uVar6);
  if (piVar3 == (int *)0x0) {
    iVar5 = 1;
    pCVar4 = FUN_006f2c00(param_2,1,param_3 & 0xff);
    puStack_8 = FUN_006f1ce0(1,pCVar4,piVar3,iVar5);
    pvVar2 = pvStack_14;
    thunk_FUN_00540760(*(undefined4 **)((int)pvStack_14 + 0x68),iStack_10,iStack_c,'\x01',
                       (byte *)puStack_8);
    FUN_006f20e0((uint *)&puStack_8);
    FUN_006b3640(DAT_008075a8,*(uint *)((int)pvVar2 + 0x60),0xffffffff,*(uint *)((int)pvVar2 + 0x3c)
                 ,*(uint *)((int)pvVar2 + 0x44));
    DAT_00858df8 = (undefined1 *)uVar6;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar6;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_behpanel_cpp_007c1694,0xc5,0,(int)piVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40((int)piVar3,0,0x7c1694,0xc5);
  return;
}

