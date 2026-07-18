
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawObj */

void __thiscall
HelpPanelTy::DrawObj(HelpPanelTy *this,int *param_1,int param_2,byte param_3,int param_4)

{
  code *pcVar1;
  HelpPanelTy *pHVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  int local_14;
  HelpPanelTy *local_10;
  int local_c;
  byte *local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  local_10 = this;
  iVar3 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  pHVar2 = local_10;
  if (iVar3 == 0) {
    if (DAT_007fa174 != 0) {
      *param_1 = *param_1 + 2;
      local_8 = (byte *)thunk_FUN_0044c130((uint)param_3,param_2);
      if (local_8 != (byte *)0x0) {
        local_14 = *(int *)(local_8 + 4);
        local_c = *(int *)(local_8 + 8);
        iVar3 = (0x19c - local_14) / 2;
        FUN_006b55f0(*(undefined4 **)(pHVar2 + 0x218),0,iVar3,*param_1,*(int *)(pHVar2 + 0x21c),0,
                     (*(int *)(*(int *)(pHVar2 + 0x21c) + 4) - local_14) / 2,
                     (*(int *)(*(int *)(pHVar2 + 0x21c) + 8) - local_c) / 2,local_14,local_c);
        FUN_006b5440(*(int *)(pHVar2 + 0x218),0,iVar3,*param_1,(int)local_8,0,0xff);
        FUN_006b5ee0(*(int *)(pHVar2 + 0x218),0,iVar3 + -2,*param_1 + -2,local_14 + 4,local_c + 4,
                     0x6f,0xd);
        *param_1 = *param_1 + local_c + 10;
        FUN_006ab060(&local_8);
      }
    }
    if (param_4 != 0) {
      uVar4 = thunk_FUN_00526ba0(param_2,param_3);
      local_8 = (byte *)FUN_0070b3a0(param_4,uVar4);
      if (local_8 != (byte *)0x0) {
        iVar3 = (0x19c - *(int *)(local_8 + 4)) / 2;
        thunk_FUN_00540760(*(undefined4 **)(pHVar2 + 0x218),iVar3,*param_1,'\x01',local_8);
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pHVar2 + 0x248),4);
        thunk_FUN_00540760(*(undefined4 **)(pHVar2 + 0x218),iVar3 + -2,*param_1 + -2,'\x06',pbVar5);
        iVar3 = FUN_0070b3a0(*(int *)(pHVar2 + 0x248),4);
        *param_1 = *param_1 + *(int *)(iVar3 + 8);
      }
    }
    DAT_00858df8 = (undefined4 *)local_58;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x3f3,0,iVar3,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c383c,0x3f3);
  return;
}

