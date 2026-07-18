
void FUN_005e6640(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,DWORD param_6,
                 DWORD param_7,int param_8)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  uint local_8;
  
  local_c = param_8;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x1c,0,iVar3,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar3,0,0x7cdd5c,0x1c);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((local_c != 0) && (*(BITMAPINFO **)(local_c + 0x1aec) != (BITMAPINFO *)0x0)) {
    bVar2 = 0;
    local_8 = local_8 & 0xffffff00;
    do {
      bVar5 = bVar2;
      if (*(int *)(local_c + 0x1a94 + (local_8 & 0xff) * 4) == param_2) break;
      bVar2 = bVar2 + 1;
      local_8 = CONCAT31(local_8._1_3_,bVar2);
      bVar5 = 0xff;
    } while (bVar2 < 0x16);
    if (bVar5 != 0xff) {
      FUN_006b4680(param_1,param_4,param_5,*(BITMAPINFO **)(local_c + 0x1aec),(uint *)0x0,0,
                   param_5 + -0x3f,param_6,param_7,0);
    }
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}

