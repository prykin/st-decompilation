
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::SetObjectives */

void __thiscall
StartSystemTy::SetObjectives(StartSystemTy *this,int param_1,char *param_2,int param_3)

{
  StartSystemTy *pSVar1;
  code *pcVar2;
  StartSystemTy *pSVar3;
  int iVar4;
  uint *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *local_70;
  undefined4 local_6c [16];
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  uint *local_c;
  StartSystemTy *local_8;
  
  local_70 = DAT_00858df8;
  DAT_00858df8 = &local_70;
  local_8 = this;
  iVar4 = __setjmp3(local_6c,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = local_70;
    iVar10 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x26b,0,iVar4,&DAT_007a4ccc);
    if (iVar10 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7cd718,0x26b);
    return;
  }
  if (param_1 != 0) {
    if (DAT_0080c4c7 != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4c7);
    }
    DAT_0080c4c7 = FUN_0071aa10(param_1,PTR_s_DESCRIPTION_0079c1d0,0);
    if (DAT_0080c4c7 == (uint *)0x0) {
      DAT_0080c4c7 = FUN_006b54f0((uint *)0x0,10,10);
    }
    if (DAT_0080c4cb != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4cb);
    }
    if (param_2 != (char *)0x0) {
      DAT_0080c4cb = FUN_0071aa10(param_1,param_2,0);
    }
    if (DAT_0080c4cb == (uint *)0x0) {
      DAT_0080c4cb = FUN_006b54f0((uint *)0x0,10,10);
    }
    pSVar3 = local_8;
    if (*(byte **)(local_8 + 0x548) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(local_8 + 0x548));
    }
    puVar5 = FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(pSVar3 + 0x548) = puVar5;
    iVar4 = 0;
    if (0 < (int)DAT_0080c4cb[2]) {
      if ((int)DAT_0080c4cb[2] < 1) {
        pcVar9 = (char *)0x0;
        goto LAB_005dc828;
      }
      do {
        pcVar9 = *(char **)(DAT_0080c4cb[5] + iVar4 * 4);
LAB_005dc828:
        thunk_FUN_005411a0(*(int *)(pSVar3 + 0x548),pcVar9,s_____s_007c72b4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)DAT_0080c4cb[2]);
    }
    iVar4 = *(int *)(pSVar3 + 0x34);
    *(undefined4 *)(iVar4 + 0x7e) = 1;
    puVar6 = (undefined2 *)(iVar4 + 0x9e);
    *puVar6 = 0;
    *(undefined1 *)puVar6 = DAT_007cc854;
    local_c = ccFntTy::FormIndentSarr
                        (*(ccFntTy **)(pSVar3 + 0x34),*(int *)(pSVar3 + 0x548),
                         (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,
                         *(int *)(*(int *)(pSVar3 + 0x544) + 4) + -0x14,0,0xffffffff,(char *)0x0,1);
    if (*(byte **)(pSVar3 + 0x548) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pSVar3 + 0x548));
    }
    puVar5 = FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(pSVar3 + 0x548) = puVar5;
    pSVar1 = pSVar3 + 0x3c;
    uVar7 = FUN_006b0140(0x2347,DAT_00807618);
    wsprintfA((LPSTR)pSVar1,s__2__s__007cd800,uVar7);
    FUN_006b5aa0(*(int *)(pSVar3 + 0x548),(char *)pSVar1);
    wsprintfA((LPSTR)pSVar1,s__0__s_007cd7f8,&DAT_0080c3c3);
    FUN_006b5aa0(*(int *)(pSVar3 + 0x548),(char *)pSVar1);
    FUN_006b5aa0(*(int *)(pSVar3 + 0x548),&DAT_007c3b5c);
    uVar8 = DAT_008087c4 & 0xffff;
    uVar11 = (uint)DAT_008087c2;
    uVar7 = FUN_006b0140(0x2344,DAT_00807618);
    wsprintfA((LPSTR)pSVar1,s__2__s___0_d_2x_0_d_007cd7e0,uVar7,uVar11,uVar8);
    FUN_006b5aa0(*(int *)(pSVar3 + 0x548),(char *)pSVar1);
    uVar8 = DAT_008087c4 >> 0x10 & 0xff;
    uVar7 = FUN_006b0140(0x2345,DAT_00807618);
    wsprintfA((LPSTR)pSVar1,s__2__s___0_d_007cd7d0,uVar7,uVar8);
    FUN_006b5aa0(*(int *)(pSVar3 + 0x548),(char *)pSVar1);
    FUN_006b5aa0(*(int *)(pSVar3 + 0x548),&DAT_007c3b5c);
    uVar7 = FUN_006b0140(0x2346,DAT_00807618);
    wsprintfA((LPSTR)pSVar1,s__2__s__007cd800,uVar7);
    FUN_006b5aa0(*(int *)(pSVar3 + 0x548),(char *)pSVar1);
    FUN_006b5aa0(*(int *)(pSVar3 + 0x548),&DAT_007c3b5c);
    puVar5 = local_c;
    if (local_c != (uint *)0x0) {
      if (local_c[2] != 0) {
        ccFntTy::SepColorStrInSarr(*(ccFntTy **)(pSVar3 + 0x34),local_c,local_c);
      }
      iVar4 = 0;
      if (0 < (int)puVar5[2]) {
        if ((int)puVar5[2] < 1) {
          pcVar9 = (char *)0x0;
          goto LAB_005dca07;
        }
        do {
          pcVar9 = *(char **)(puVar5[5] + iVar4 * 4);
LAB_005dca07:
          FUN_006b5aa0(*(int *)(pSVar3 + 0x548),pcVar9);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)puVar5[2]);
      }
      FUN_006b5570((byte *)puVar5);
    }
    local_1c = 0x28;
    local_18 = CONCAT22(*(undefined2 *)(*(int *)(pSVar3 + 0x548) + 8),1);
    if (*(int *)(pSVar3 + 0x389) != 0) {
      FUN_006e5970(2,*(int *)(pSVar3 + 0x389),(int)local_2c);
    }
    local_1c = 0x22;
    local_18 = 0;
    if (*(int *)(pSVar3 + 0x389) != 0) {
      FUN_006e5970(2,*(int *)(pSVar3 + 0x389),(int)local_2c);
    }
    local_1c = 0x20;
    local_18 = (uint)(param_3 != 0);
    if (*(int *)(pSVar3 + 0x389) != 0) {
      FUN_006e5970(2,*(int *)(pSVar3 + 0x389),(int)local_2c);
    }
  }
  DAT_00858df8 = local_70;
  return;
}

