
void FUN_005bfd30(int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *local_54;
  undefined4 local_50 [16];
  int local_10;
  int local_c;
  uint local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_2 != 0) && (uVar3 = (uint)(param_1 * 0x28) / param_2, uVar3 != 0)) {
      iVar2 = 0x177;
      local_10 = param_3 * 0x26 + 0x38;
      local_8 = uVar3;
      do {
        thunk_FUN_00540760(*(undefined4 **)(local_c + 0x73),iVar2,local_10,'\x06',
                           *(byte **)(local_c + 0x6f));
        iVar2 = iVar2 + 6;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007cd004,param_1);
    iVar2 = param_3 * 0x26 + 0x30;
    FUN_006b4170(*(int *)(local_c + 0x73),0,0x280,iVar2,0x50,0x1c,0);
    FUN_006b5ee0(*(int *)(local_c + 0x73),0,0x280,iVar2,0x50,0x1c,0x18,0xd);
    FUN_00710a90(*(int *)(local_c + 0x73),0,0x280,iVar2,0x50,0x1c);
    FUN_007119c0(&DAT_0080f33a,-1,-1,8);
    DAT_00858df8 = local_54;
    return;
  }
  DAT_00858df8 = local_54;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x208,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7ccec8,0x208);
  return;
}

