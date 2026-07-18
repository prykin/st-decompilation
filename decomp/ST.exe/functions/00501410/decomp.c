
void FUN_00501410(int param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  uint local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    FUN_006b4170(*(int *)(local_c + 0x18c),0,param_1 + 0x35,0x70,7,0x21,0);
    bVar1 = *(byte *)(local_c + 0xbc8);
    cVar6 = (char)(((uint)bVar1 * 0x21) / 100);
    local_8 = CONCAT31(local_8._1_3_,cVar6);
    if ((bVar1 != 0) && (cVar6 == '\0')) {
      local_8 = CONCAT31(local_8._1_3_,1);
    }
    if (bVar1 < 0x46) {
      iVar3 = (-(uint)(bVar1 < 0x14) & 5) + 5;
    }
    else {
      iVar3 = 0;
    }
    uVar4 = local_8 & 0xff;
    FUN_006b55f0(*(undefined4 **)(local_c + 0x18c),0,param_1 + 0x36,0x91 - uVar4,
                 *(int *)(local_c + 0x28a),0,iVar3,*(int *)(*(int *)(local_c + 0x28a) + 8) - uVar4,5
                 ,uVar4);
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x40,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c2524,0x40);
  return;
}

