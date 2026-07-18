
void thunk_FUN_004f1f60(int param_1,int param_2,int param_3,uint param_4,UINT param_5)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  puStack_4c = DAT_00858df8;
  DAT_00858df8 = &puStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    FUN_00710a90(param_1,0,param_2,param_3,0x30,10);
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 5;
    iVar4 = -1;
    iVar2 = 0;
    puVar3 = (uint *)FUN_006b0140(param_5,DAT_00807618);
    FUN_00711b70(puVar3,iVar2,iVar4,uVar5,iVar6,iVar7);
    wsprintfA((LPSTR)(iStack_8 + 0x1e1),&DAT_007c1aa4,param_4 & 0xff);
    FUN_00710a90(param_1,0,param_2 + 0xc,param_3 + 10,0x14,0xf);
    FUN_00711b70((uint *)(iStack_8 + 0x1e1),-3,-1,1,-1,-1);
    FUN_00710a90(param_1,0,param_2 + 0x22,param_3 + 0xd,10,10);
    iVar7 = -1;
    iVar6 = -1;
    uVar5 = 5;
    iVar4 = -1;
    iVar2 = -1;
    puVar3 = (uint *)FUN_006b0140(0x36b2,DAT_00807618);
    FUN_00711b70(puVar3,iVar2,iVar4,uVar5,iVar6,iVar7);
    DAT_00858df8 = puStack_4c;
    return;
  }
  DAT_00858df8 = puStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0xa3,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c1a4c,0xa3);
  return;
}

