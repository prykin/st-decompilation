
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
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  byte bStack_14;
  undefined3 uStack_13;
  CPanelTy *pCStack_10;
  undefined4 *puStack_c;
  CPanelTy CStack_5;
  
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
      uStack_58 = DAT_00858df8;
      DAT_00858df8 = &uStack_58;
      pCStack_10 = this;
      iVar5 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
      pCVar4 = pCStack_10;
      if (iVar5 == 0) {
        puVar11 = (undefined4 *)(uint)param_1;
        CVar1 = *(CPanelTy *)((int)(puVar11 + 0xaa) + (int)pCStack_10);
        puStack_c = puVar11;
        if (CVar1 != (CPanelTy)0xff) {
          if (DAT_0080874e == '\x03') {
            if (param_1 == 0) {
              uVar7 = (uint)(byte)pCStack_10[0x2a8];
              if (pCStack_10[uVar7 + 0xb8d] == (CPanelTy)0x0) {
                uVar7 = uVar7 + 5;
              }
              uVar9 = (uint)(byte)pCStack_10[0x2a8];
              pbVar6 = (byte *)FUN_0070b3a0(*(int *)(pCStack_10 + 0x2a2),uVar7);
              iVar5 = (5 - uVar9) * 0xb;
              puVar11 = *(undefined4 **)(pCVar4 + 0x18c);
            }
            else {
              uVar7 = (uint)(byte)CVar1;
              if (pCStack_10[uVar7 + 0xc7b] == (CPanelTy)0x0) {
                iVar5 = uVar7 + 0x14;
              }
              else {
                iVar5 = uVar7 + 0x19;
              }
              uVar9 = (uint)(byte)*(CPanelTy *)((int)(puVar11 + 0xaa) + (int)pCStack_10);
              pbVar6 = (byte *)FUN_0070b3a0(*(int *)(pCStack_10 + 0x2a2),iVar5);
              puVar11 = *(undefined4 **)(pCVar4 + 0x194);
              iVar5 = uVar9 * 0xb + 0x87;
            }
            thunk_FUN_00540760(puVar11,iVar5,uVar9 * 0xb + 0xb,'\x06',pbVar6);
            bVar10 = (-(param_1 != 0) & 2U) + 3;
            _bStack_14 = CONCAT31(uStack_13,bVar10);
            puVar11 = puStack_c;
            if (bVar10 < 0xb) {
              uVar7 = (uint)bVar10;
              if (-1 < (int)*(uint *)(pCVar4 + uVar7 * 4 + 0x148)) {
                FUN_006b3640(DAT_008075a8,*(uint *)(pCVar4 + uVar7 * 4 + 0x148),0xffffffff,
                             *(uint *)(pCVar4 + uVar7 * 4 + 0x3c),
                             *(uint *)(pCVar4 + uVar7 * 4 + 0x94));
                puVar11 = puStack_c;
              }
            }
          }
          else {
            if (param_1 == 0) {
              CVar1 = pCStack_10[(byte)pCStack_10[0x2a8] + 0xb8d];
              puStack_c = *(undefined4 **)(pCStack_10 + 0x188);
            }
            else {
              CVar1 = pCStack_10[(byte)CVar1 + 0xc7b];
              puStack_c = *(undefined4 **)(pCStack_10 + 0x198);
            }
            pbVar6 = (byte *)FUN_0070b3a0(*(int *)(pCStack_10 + 0x2a2),
                                          (-(uint)(CVar1 != (CPanelTy)0x0) & 0xfffffffe) + 2);
            thunk_FUN_00540760(puStack_c,7,
                               (uint)(byte)*(CPanelTy *)((int)(puVar11 + 0xaa) + (int)pCVar4) * 0x1d
                               + 6,'\x01',pbVar6);
            bVar10 = (-(param_1 != 0) & 4U) + 2;
            _bStack_14 = CONCAT31(uStack_13,bVar10);
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
        CStack_5 = param_2;
        thunk_FUN_0054edf0((undefined4 *)0x15,(undefined4 *)&CStack_5,0,0xffffffff);
        DAT_00858df8 = (undefined4 *)uStack_58;
        return;
      }
      DAT_00858df8 = (undefined4 *)uStack_58;
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

