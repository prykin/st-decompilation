
void FUN_00520b50(ushort param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if ((*(char *)(local_8 + 0x3d4) == -1) && (param_1 == 0xffff)) {
      wsprintfA((LPSTR)(local_8 + 0x18d),s_______d_007c3fc0,param_2 & 0xffff);
    }
    else {
      wsprintfA((LPSTR)(local_8 + 0x18d),s__d__d_007c3fb8,param_1,param_2 & 0xffff);
    }
    if (DAT_0080874e == '\x03') {
      cVar2 = 's';
    }
    else {
      cVar2 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
    }
    FUN_006b4170(*(int *)(local_8 + 0x68),0,param_3,param_4,0x2d,0xc,cVar2);
    FUN_00710a90(*(int *)(local_8 + 0x68),0,param_3,param_4,0x2d,0xc);
    FUN_007119c0((uint *)(local_8 + 0x18d),-1,-1,(DAT_0080874e != '\x03') - 1 & 5);
    DAT_00858df8 = local_4c;
    return;
  }
  DAT_00858df8 = local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_infocen_cpp_007c3eb0,0xa9,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c3eb0,0xa9);
  return;
}

