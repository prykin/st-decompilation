
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintArsenal */

void __thiscall CPanelTy::PaintArsenal(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  int iVar8;
  undefined4 *local_70;
  undefined4 local_6c [16];
  uint local_2c;
  CPanelTy *local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  CPanelTy *local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_70 = DAT_00858df8;
  DAT_00858df8 = &local_70;
  local_28 = this;
  iVar3 = __setjmp3(local_6c,0,unaff_EDI,unaff_ESI);
  pCVar2 = local_28;
  if (iVar3 != 0) {
    DAT_00858df8 = local_70;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x184,0,iVar3,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar3,0,0x7c2700,0x184);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006b4170(*(int *)(local_28 + 0x194),0,0x49,0x50,0x6f,0x37,0x3d);
  FUN_006b4170(*(int *)(pCVar2 + 0x194),0,0x4a,0x51,0x29,0x34,0x3f);
  FUN_006b4170(*(int *)(pCVar2 + 0x194),0,0x4b,0x52,0x27,0x32,0x3a);
  if (pCVar2[0x9d4] == (CPanelTy)0x1) {
    local_20 = CONCAT31(local_20._1_3_,4);
    bVar6 = 3;
  }
  else {
    local_20 = (uint)local_20._1_3_ << 8;
    bVar6 = 4;
  }
  local_10 = CONCAT31(local_10._1_3_,bVar6);
  if (bVar6 != 0) {
    local_14 = 0;
    local_2c = local_20 & 0xff;
    local_1c = 0x54;
    local_18 = pCVar2 + local_2c * 6 + 0xc11;
    local_24 = (uint)bVar6;
    do {
      if (*local_18 == (CPanelTy)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = ((uint)*(ushort *)(local_18 + 2) * 10) / (uint)*(ushort *)(local_18 + 4);
      }
      pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b2),5);
      thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),0x74,local_1c,'\x01',pbVar5);
      local_10 = local_10 & 0xffffff00;
      if (uVar4 != 0) {
        uVar7 = 0;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),1);
          thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),uVar7 * 4 + 0x76,local_1c + 2,'\x01',
                             pbVar5);
          bVar6 = (byte)local_10 + 1;
          local_10 = CONCAT31(local_10._1_3_,bVar6);
          uVar7 = (uint)bVar6;
        } while (uVar7 < uVar4);
      }
      if ((byte)local_10 < 10) {
        iVar8 = 10 - (local_10 & 0xff);
        iVar3 = (local_10 & 0xff) * 4 + 0x76;
        do {
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2b6),0);
          thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),iVar3,local_1c + 2,'\x01',pbVar5);
          iVar3 = iVar3 + 4;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      wsprintfA((LPSTR)(pCVar2 + 0x1e1),&DAT_007c1aa4,(uint)*(ushort *)(local_18 + 2));
      iVar3 = local_1c;
      ccFntTy::SetSurf(*(ccFntTy **)(pCVar2 + 0x1b8),*(int *)(pCVar2 + 0x194),0,0xa2,local_1c,0x15,
                       0xc);
      ccFntTy::WrStr(*(ccFntTy **)(pCVar2 + 0x1b8),(uint *)(pCVar2 + 0x1e1),-3,-1,5);
      if ((char)local_20 == '\0') {
        if (iVar3 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&PTR_DAT_00505cec)[local_14])();
          return;
        }
      }
      else if (iVar3 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00505b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&PTR_DAT_00505cdc)[local_14])();
        return;
      }
      if (*local_18 == (CPanelTy)0x0) {
        iVar8 = *(int *)(pCVar2 + 0x292);
      }
      else {
        iVar8 = *(int *)(pCVar2 + 0x28e);
      }
      pbVar5 = (byte *)FUN_0070b3a0(iVar8,(-(uint)(*local_18 != (CPanelTy)0x0) & 0x14) + 0xb +
                                          local_14 + local_2c);
      if (pbVar5 != (byte *)0x0) {
        thunk_FUN_00540760(*(undefined4 **)(pCVar2 + 0x194),local_c,local_8,'\x06',pbVar5);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 6;
      local_1c = iVar3 + 0xb;
      local_24 = local_24 - 1;
    } while (local_24 != 0);
  }
  DAT_00858df8 = local_70;
  return;
}

