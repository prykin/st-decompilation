
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::SetNewDeep */

void __thiscall CPanelTy::SetNewDeep(CPanelTy *this,byte param_1,CPanelTy param_2)

{
  CPanelTy CVar1;
  code *pcVar2;
  bool bVar3;
  CPanelTy *pCVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar11;
  undefined4 local_58;
  undefined4 local_54 [16];
  byte local_14;
  undefined3 uStack_13;
  CPanelTy *local_10;
  undefined4 *local_c;
  CPanelTy local_5;
  
  if (DAT_00808784 == 0) {
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      if (param_1 == 0) {
        if (this[0xb80] == (CPanelTy)0x0) {
          return;
        }
        if (this[0xb63] == (CPanelTy)0x0) {
          return;
        }
        if (this[0xb63] == (CPanelTy)0x3) {
          return;
        }
      }
      else {
        if (this[0xc6e] == (CPanelTy)0x0) {
          return;
        }
        CVar1 = this[0xc51];
        if (CVar1 == (CPanelTy)0x0) {
          return;
        }
        if (CVar1 == (CPanelTy)0x3) {
          return;
        }
        if (CVar1 == (CPanelTy)0x4) {
          return;
        }
      }
      local_58 = DAT_00858df8;
      DAT_00858df8 = &local_58;
      local_10 = this;
      iVar5 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
      pCVar4 = local_10;
      if (iVar5 == 0) {
        puVar11 = (undefined4 *)(uint)param_1;
        CVar1 = *(CPanelTy *)((int)(puVar11 + 0xaa) + (int)local_10);
        local_c = puVar11;
        if (CVar1 != (CPanelTy)0xff) {
          if (DAT_0080874e == '\x03') {
            if (param_1 == 0) {
              uVar7 = (uint)(byte)local_10[0x2a8];
              if (local_10[uVar7 + 0xb8d] == (CPanelTy)0x0) {
                uVar7 = uVar7 + 5;
              }
              uVar9 = (uint)(byte)local_10[0x2a8];
              pbVar6 = (byte *)FUN_0070b3a0(*(int *)(local_10 + 0x2a2),uVar7);
              iVar5 = (5 - uVar9) * 0xb;
              puVar11 = *(undefined4 **)(pCVar4 + 0x18c);
            }
            else {
              uVar7 = (uint)(byte)CVar1;
              if (local_10[uVar7 + 0xc7b] == (CPanelTy)0x0) {
                iVar5 = uVar7 + 0x14;
              }
              else {
                iVar5 = uVar7 + 0x19;
              }
              uVar9 = (uint)(byte)*(CPanelTy *)((int)(puVar11 + 0xaa) + (int)local_10);
              pbVar6 = (byte *)FUN_0070b3a0(*(int *)(local_10 + 0x2a2),iVar5);
              puVar11 = *(undefined4 **)(pCVar4 + 0x194);
              iVar5 = uVar9 * 0xb + 0x87;
            }
            thunk_FUN_00540760(puVar11,iVar5,uVar9 * 0xb + 0xb,'\x06',pbVar6);
            bVar10 = (-(param_1 != 0) & 2U) + 3;
            _local_14 = CONCAT31(uStack_13,bVar10);
            puVar11 = local_c;
            if (bVar10 < 0xb) {
              uVar7 = (uint)bVar10;
              if (-1 < (int)*(uint *)(pCVar4 + uVar7 * 4 + 0x148)) {
                FUN_006b3640(DAT_008075a8,*(uint *)(pCVar4 + uVar7 * 4 + 0x148),0xffffffff,
                             *(uint *)(pCVar4 + uVar7 * 4 + 0x3c),
                             *(uint *)(pCVar4 + uVar7 * 4 + 0x94));
                puVar11 = local_c;
              }
            }
          }
          else {
            if (param_1 == 0) {
              CVar1 = local_10[(byte)local_10[0x2a8] + 0xb8d];
              local_c = *(undefined4 **)(local_10 + 0x188);
            }
            else {
              CVar1 = local_10[(byte)CVar1 + 0xc7b];
              local_c = *(undefined4 **)(local_10 + 0x198);
            }
            pbVar6 = (byte *)FUN_0070b3a0(*(int *)(local_10 + 0x2a2),
                                          (-(uint)(CVar1 != (CPanelTy)0x0) & 0xfffffffe) + 2);
            thunk_FUN_00540760(local_c,7,
                               (uint)(byte)*(CPanelTy *)((int)(puVar11 + 0xaa) + (int)pCVar4) * 0x1d
                               + 6,'\x01',pbVar6);
            bVar10 = (-(param_1 != 0) & 4U) + 2;
            _local_14 = CONCAT31(uStack_13,bVar10);
            if (bVar10 < 0xb) {
              uVar7 = (uint)bVar10;
              if (-1 < (int)*(uint *)(pCVar4 + uVar7 * 4 + 0x148)) {
                FUN_006b3640(DAT_008075a8,*(uint *)(pCVar4 + uVar7 * 4 + 0x148),0xffffffff,
                             *(uint *)(pCVar4 + uVar7 * 4 + 0x3c),
                             *(uint *)(pCVar4 + uVar7 * 4 + 0x94));
              }
            }
          }
        }
        pCVar4[(int)puVar11 + 0x2a6] = (CPanelTy)0x0;
        *(CPanelTy *)((int)(puVar11 + 0xaa) + (int)pCVar4) = param_2;
        *(undefined4 *)(pCVar4 + (int)puVar11 * 4 + 0x2aa) = 0;
        thunk_FUN_005252c0(0xb4);
        local_5 = param_2;
        thunk_FUN_0054edf0((undefined4 *)0x15,(undefined4 *)&local_5,0,0xffffffff);
        DAT_00858df8 = (undefined4 *)local_58;
        return;
      }
      DAT_00858df8 = (undefined4 *)local_58;
      iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1fb,0,iVar5,&DAT_007a4ccc);
      if (iVar8 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_006a5e40(iVar5,0,0x7c23cc,0x1fb);
    }
  }
  return;
}

