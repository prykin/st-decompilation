
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::PaintBinDesc */

void __thiscall StartSystemTy::PaintBinDesc(StartSystemTy *this,int param_1)

{
  code *pcVar1;
  StartSystemTy *pSVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  void *unaff_EDI;
  undefined4 local_54;
  undefined4 local_50 [16];
  StartSystemTy *local_10;
  int local_c;
  int local_8;
  
  if ((((*(int *)(this + 0x544) != 0) && (*(int *)(this + 0x548) != 0)) &&
      (-1 < *(int *)(this + 0x540))) &&
     ((param_1 != 0 && (local_c = *(int *)(param_1 + 0x1c), local_c != 0)))) {
    iVar3 = *(int *)(this + 0x34);
    local_10 = this;
    if (*(int *)(iVar3 + 0xa0) != 0) {
      FUN_00710790(iVar3);
    }
    local_8 = *(int *)(iVar3 + 0x8a);
    local_54 = DAT_00858df8;
    DAT_00858df8 = &local_54;
    iVar3 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
    pSVar2 = local_10;
    if (iVar3 == 0) {
      iVar3 = *(int *)(local_10 + 0x544);
      FUN_006b4170(iVar3,0,0,0,*(int *)(iVar3 + 4),*(int *)(iVar3 + 8),0xff);
      uVar4 = (uint)*(ushort *)(param_1 + 0x16);
      uVar7 = uVar4;
      if ((int)uVar4 < (int)(*(int *)(local_c + 0x1e0) + uVar4)) {
        do {
          if ((int)uVar7 < *(int *)(*(int *)(pSVar2 + 0x548) + 8)) {
            puVar6 = *(uint **)(*(int *)(*(int *)(pSVar2 + 0x548) + 0x14) + uVar7 * 4);
          }
          else {
            puVar6 = (uint *)0x0;
          }
          if (puVar6 != (uint *)0x0) {
            ccFntTy::SetSurf(*(ccFntTy **)(pSVar2 + 0x34),*(int *)(pSVar2 + 0x544),0,0,
                             (uVar7 - uVar4) * local_8,*(int *)(*(int *)(pSVar2 + 0x544) + 4),
                             local_8);
            ccFntTy::WrStr(*(ccFntTy **)(pSVar2 + 0x34),puVar6,0,-1,0);
          }
          uVar7 = uVar7 + 1;
          uVar4 = (uint)*(ushort *)(param_1 + 0x16);
        } while ((int)uVar7 < (int)(*(int *)(local_c + 0x1e0) + uVar4));
      }
      FUN_006b35d0(DAT_008075a8,*(uint *)(pSVar2 + 0x540));
      DAT_00858df8 = (undefined4 *)local_54;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_54;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x3cb,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cd718,0x3cb);
  }
  return;
}

