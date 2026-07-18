
void FUN_004f2350(int param_1,ushort param_2,ushort param_3,uint param_4,uint param_5)

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
  undefined4 *local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_2 != 0xffff) || (param_3 != 0xffff)) {
      FUN_00710a90(param_1,0,0x5c,0x50,0x3c,10);
      iVar7 = -1;
      iVar6 = -1;
      uVar5 = 5;
      iVar4 = -1;
      iVar2 = -1;
      puVar3 = (uint *)FUN_006b0140(0x36b3,DAT_00807618);
      FUN_00711b70(puVar3,iVar2,iVar4,uVar5,iVar6,iVar7);
    }
    if (param_2 != 0xffff) {
      wsprintfA((LPSTR)(local_8 + 0x1e1),&DAT_007c1ae4,param_2);
      FUN_00710a90(param_1,0,0x7d,0x5a,0x18,0xf);
      FUN_00711b70((uint *)(local_8 + 0x1e1),-3,-1,param_4 & 0xffff,-1,-1);
    }
    if (param_3 != 0xffff) {
      wsprintfA((LPSTR)(local_8 + 0x1e1),&DAT_007c1ae4,param_3);
      FUN_00710a90(param_1,0,0x5f,0x5a,0x18,0xf);
      FUN_00711b70((uint *)(local_8 + 0x1e1),-3,-1,param_5 & 0xffff,-1,-1);
    }
    DAT_00858df8 = local_4c;
    return;
  }
  DAT_00858df8 = local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0xd9,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c1a4c,0xd9);
  return;
}

