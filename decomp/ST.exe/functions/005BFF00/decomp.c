
void FUN_005bff00(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *local_50;
  undefined4 local_4c [16];
  int local_c;
  uint local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (param_1 != -1) {
      cVar1 = *(char *)((int)&DAT_0080c83a + *(byte *)(local_c + 0x69) + 3);
      local_8 = CONCAT31(local_8._1_3_,cVar1);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28fc,param_1);
      FUN_00710a90(*(int *)(local_c + 0x73),0,param_3 + 8,param_4 + 5,0x36,0x14);
      if (cVar1 == -1) {
        uVar4 = 8;
      }
      else {
        uVar4 = local_8 & 0xff;
      }
      FUN_007119c0(&DAT_0080f33a,-1,-1,uVar4);
    }
    cVar1 = DAT_0080c846;
    local_8 = CONCAT31(local_8._1_3_,DAT_0080c846);
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c28fc,param_2);
    FUN_00710a90(*(int *)(local_c + 0x73),0,param_3 + 0x4c,param_4 + 5,0x36,0x14);
    if (cVar1 == -1) {
      uVar4 = 8;
    }
    else {
      uVar4 = local_8 & 0xff;
    }
    FUN_007119c0(&DAT_0080f33a,-1,-1,uVar4);
    DAT_00858df8 = local_50;
    return;
  }
  DAT_00858df8 = local_50;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x21c,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7ccec8,0x21c);
  return;
}

