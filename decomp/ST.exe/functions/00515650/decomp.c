
void FUN_00515650(int *param_1,int param_2,byte param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  int local_14;
  int local_10;
  int local_c;
  byte *local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (DAT_007fa174 != 0) {
      *param_1 = *param_1 + 2;
      local_8 = (byte *)thunk_FUN_0044c130((uint)param_3,param_2);
      if (local_8 != (byte *)0x0) {
        local_14 = *(int *)(local_8 + 4);
        local_c = *(int *)(local_8 + 8);
        iVar2 = (0x19c - local_14) / 2;
        FUN_006b55f0(*(undefined4 **)(local_10 + 0x218),0,iVar2,*param_1,*(int *)(local_10 + 0x21c),
                     0,(*(int *)(*(int *)(local_10 + 0x21c) + 4) - local_14) / 2,
                     (*(int *)(*(int *)(local_10 + 0x21c) + 8) - local_c) / 2,local_14,local_c);
        FUN_006b5440(*(int *)(local_10 + 0x218),0,iVar2,*param_1,(int)local_8,0,0xff);
        FUN_006b5ee0(*(int *)(local_10 + 0x218),0,iVar2 + -2,*param_1 + -2,local_14 + 4,local_c + 4,
                     0x6f,0xd);
        *param_1 = *param_1 + local_c + 10;
        FUN_006ab060(&local_8);
      }
    }
    if (param_4 != 0) {
      uVar3 = thunk_FUN_00526ba0(param_2,param_3);
      local_8 = (byte *)FUN_0070b3a0(param_4,uVar3);
      if (local_8 != (byte *)0x0) {
        iVar2 = (0x19c - *(int *)(local_8 + 4)) / 2;
        thunk_FUN_00540760(*(undefined4 **)(local_10 + 0x218),iVar2,*param_1,'\x01',local_8);
        pbVar4 = (byte *)FUN_0070b3a0(*(int *)(local_10 + 0x248),4);
        thunk_FUN_00540760(*(undefined4 **)(local_10 + 0x218),iVar2 + -2,*param_1 + -2,'\x06',pbVar4
                          );
        iVar2 = FUN_0070b3a0(*(int *)(local_10 + 0x248),4);
        *param_1 = *param_1 + *(int *)(iVar2 + 8);
      }
    }
    DAT_00858df8 = (undefined4 *)local_58;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x3f3,0,iVar2,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c383c,0x3f3);
  return;
}

