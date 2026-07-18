
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PaintVolume */

void __thiscall OptPanelTy::PaintVolume(OptPanelTy *this,byte param_1,byte param_2)

{
  code *pcVar1;
  OptPanelTy *pOVar2;
  uint3 uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar6;
  undefined4 local_5c;
  undefined4 local_58 [16];
  OptPanelTy *local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_14 = (-(uint)(param_1 != 0) & 0xfffffffc) + 4;
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  local_18 = this;
  iVar4 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  pOVar2 = local_18;
  if (iVar4 == 0) {
    uVar3 = local_8._1_3_;
    local_8 = (uint)local_8._1_3_ << 8;
    if (param_2 != 0) {
      local_c = local_14 + (uint)param_1 * 0xd + 0x5f;
      iVar4 = 0x80;
      local_10 = (uint)param_2;
      local_8 = CONCAT31(uVar3,param_2);
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pOVar2 + 0x198),6);
        thunk_FUN_00540760(*(undefined4 **)(pOVar2 + 0x68),iVar4,local_c,'\x01',pbVar5);
        iVar4 = iVar4 + 4;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
    if ((byte)local_8 < 0x1e) {
      local_c = local_14 + (uint)param_1 * 0xd + 0x5f;
      iVar6 = 0x1e - (local_8 & 0xff);
      iVar4 = (local_8 & 0xff) * 4 + 0x80;
      do {
        pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pOVar2 + 0x198),0);
        thunk_FUN_00540760(*(undefined4 **)(pOVar2 + 0x68),iVar4,local_c,'\x01',pbVar5);
        iVar4 = iVar4 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    DAT_00858df8 = (undefined4 *)local_5c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0xac,0,iVar4,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7c70a0,0xac);
  return;
}

