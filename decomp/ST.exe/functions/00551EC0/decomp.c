
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::PaintIndicators */

void __thiscall TradePanelTy::PaintIndicators(TradePanelTy *this)

{
  TradePanelTy *pTVar1;
  TradePanelTy TVar2;
  ushort uVar3;
  code *pcVar4;
  TradePanelTy *pTVar5;
  int iVar6;
  byte *pbVar7;
  ushort *puVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *local_54;
  undefined4 local_50 [16];
  TradePanelTy *local_10;
  int local_c;
  int local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  local_10 = this;
  iVar6 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  pTVar5 = local_10;
  if (iVar6 == 0) {
    pTVar1 = local_10 + 0x18d;
    wsprintfA((LPSTR)pTVar1,&DAT_007c28fc,
              (uint)*(ushort *)(local_10 + (uint)(byte)local_10[0x1d0] * 2 + 0x1bc));
    ccFntTy::SetSurf(*(ccFntTy **)(pTVar5 + 0x1dd),*(int *)(pTVar5 + 0x68),0,0x67,0x36,0x23,0xc);
    ccFntTy::WrStr(*(ccFntTy **)(pTVar5 + 0x1dd),(uint *)pTVar1,-1,-1,
                   -(uint)(pTVar5[0x1d0] != (TradePanelTy)0x0) & 2);
    if (pTVar5[0x1bb] == (TradePanelTy)0x0) {
      local_8 = 0;
      iVar6 = 0xb4;
      local_c = 2;
      do {
        puVar13 = (undefined4 *)0x0;
        iVar12 = 0;
        iVar11 = 1;
        bVar10 = 0;
        uVar9 = 0xffffffff;
        pbVar7 = (byte *)thunk_FUN_00571240(s_BKG_AMOUNTRC_007c874c,0);
        puVar8 = FUN_00709af0(DAT_00806794,1,pbVar7,uVar9,bVar10,iVar11,iVar12,puVar13);
        thunk_FUN_00540760(*(undefined4 **)(pTVar5 + 0x68),iVar6 + -3,0x45,'\x01',(byte *)puVar8);
        TVar2 = pTVar5[0x1d0];
        uVar3 = *(ushort *)(pTVar5 + (local_8 + (uint)(byte)TVar2 * 2) * 4 + 0x1ad);
        if (uVar3 == 0) {
          iVar11 = 0;
        }
        else if ((DAT_0080874e == '\x03') && (TVar2 == (TradePanelTy)0x0)) {
          iVar11 = (uint)*(ushort *)(pTVar5 + 0x1bc) * (uint)uVar3;
        }
        else {
          iVar11 = (int)((ulonglong)*(ushort *)(pTVar5 + (uint)(byte)TVar2 * 2 + 0x1bc) /
                        (ulonglong)(longlong)(int)(uint)uVar3);
        }
        wsprintfA((LPSTR)pTVar1,&DAT_007c28fc,iVar11);
        ccFntTy::SetSurf(*(ccFntTy **)(pTVar5 + 0x1dd),*(int *)(pTVar5 + 0x68),0,iVar6,0x48,0x23,0xc
                        );
        ccFntTy::WrStr(*(ccFntTy **)(pTVar5 + 0x1dd),(uint *)pTVar1,-1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5);
        local_8 = local_8 + 1;
        iVar6 = iVar6 + 0x39;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    DAT_00858df8 = local_54;
    return;
  }
  DAT_00858df8 = local_54;
  iVar11 = FUN_006ad4d0(s_E____titans_Andrey_tradecen_cpp_007c8624,0x111,0,iVar6,&DAT_007a4ccc);
  if (iVar11 != 0) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_006a5e40(iVar6,0,0x7c8624,0x111);
  return;
}

