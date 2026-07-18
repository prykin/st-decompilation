
/* WARNING: Type propagation algorithm not settling */

void FUN_0068f360(int param_1)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  void *this;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_5c;
  undefined4 local_58 [16];
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  void *local_8;
  
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar6 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  this = local_8;
  if (iVar6 != 0) {
    DAT_00858df8 = (undefined4 *)local_5c;
    iVar10 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x276,0,iVar6,&DAT_007a4ccc);
    if (iVar10 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_006a5e40(iVar6,0,0x7d56e0,0x277);
    return;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    local_c = thunk_FUN_0068e480(local_8,1);
    local_10 = thunk_FUN_0068e480(this,2);
    local_14 = thunk_FUN_0068e480(this,4);
    local_18 = thunk_FUN_0068e480(this,0x10);
    uVar3 = *(uint *)(param_1 + 0xc);
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      if (uVar3 < *(uint *)(param_1 + 0xc)) {
        puVar7 = (undefined2 *)(*(int *)(param_1 + 8) * uVar3 + *(int *)(param_1 + 0x1c));
      }
      else {
        puVar7 = (undefined2 *)0x0;
      }
      uVar8 = CONCAT22((short)((uint)puVar7 >> 0x10),*puVar7);
      if (DAT_007fa174 == 0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(uVar8 >> 8),
                                                    *(undefined1 *)((int)this + 0x24)),uVar8,1);
      }
      this = local_8;
      if (piVar9 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar9 + 0x2c))();
        if ((iVar6 == 0x78) && (-1 < (int)local_c)) {
          iVar6 = *(int *)((int)local_8 + 0xa5);
          if ((iVar6 == 0) || ((int)*(uint *)(iVar6 + 0xc) <= (int)local_c)) {
            iVar10 = 0;
          }
          else {
            iVar10 = iRam00000004;
            if (local_c < *(uint *)(iVar6 + 0xc)) {
              iVar10 = *(int *)(*(int *)(iVar6 + 8) * local_c + *(int *)(iVar6 + 0x1c) + 4);
            }
          }
          uVar1 = *(ushort *)(iVar10 + 0x7d);
          iVar6 = (**(code **)(*piVar9 + 0x2c))();
          if (iVar6 == 0x78) {
            *(uint *)((int)piVar9 + 0x269) = (uint)uVar1;
          }
          FUN_006b0c70(param_1,uVar3);
          this = local_8;
        }
        else {
          if ((iVar6 < 0x32) || (0x73 < iVar6)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          uVar8 = local_c;
          if ((!bVar5) && (iVar6 != 0x78)) {
            sVar2 = *(short *)((int)local_8 + 0x39);
            if (sVar2 == 1) {
              iVar10 = 8;
            }
            else if (sVar2 == 2) {
              iVar10 = 0x14;
            }
            else if (sVar2 == 3) {
              iVar10 = 0x1a;
            }
            else {
              iVar10 = 0;
            }
            uVar11 = local_10;
            if (iVar6 != iVar10) {
              if (sVar2 == 1) {
                iVar10 = 0xc;
              }
              else if (sVar2 == 2) {
                iVar10 = 0x18;
              }
              else if (sVar2 == 3) {
                iVar10 = 0x19;
              }
              else {
                iVar10 = 0;
              }
              uVar11 = local_18;
              uVar8 = local_14;
              if (iVar6 == iVar10) goto joined_r0x0068f50b;
            }
            uVar8 = uVar11;
          }
joined_r0x0068f50b:
          this = local_8;
          if (-1 < (int)uVar8) {
            thunk_FUN_0065d760(piVar9,0);
            FUN_006b0c70(param_1,uVar3);
            this = local_8;
          }
        }
      }
    }
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  return;
}

