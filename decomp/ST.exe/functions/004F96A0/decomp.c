
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PlayBrief */

void __thiscall CPanelTy::PlayBrief(CPanelTy *this,int param_1)

{
  CPanelTy *pCVar1;
  code *pcVar2;
  CPanelTy *pCVar3;
  int iVar4;
  uint *puVar5;
  cTypingTy *this_00;
  byte *pbVar6;
  char *pcVar7;
  short *psVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined1 *puVar12;
  byte bVar13;
  byte bVar14;
  size_t _Count;
  undefined4 local_54;
  undefined4 local_50 [16];
  CPanelTy *local_10;
  char *local_c;
  uint *local_8;
  
  if ((DAT_0080c4f7 == 1) && (*(int *)(this + 0x24b) != 0)) {
    local_54 = DAT_00858df8;
    DAT_00858df8 = &local_54;
    local_10 = this;
    iVar4 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
    pCVar3 = local_10;
    if (iVar4 == 0) {
      iVar4 = *(int *)(local_10 + 0x24b);
      uVar11 = *(uint *)(iVar4 + 0xc);
      if (*(uint *)(local_10 + 0x24f) < uVar11) {
        do {
          if (*(uint *)(pCVar3 + 0x24f) < uVar11) {
            puVar12 = (undefined1 *)
                      (*(int *)(iVar4 + 8) * *(uint *)(pCVar3 + 0x24f) + *(int *)(iVar4 + 0x1c));
          }
          else {
            puVar12 = (undefined1 *)0x0;
          }
          if ((uint)(*(int *)(pCVar3 + 0x253) - *(int *)(pCVar3 + 599)) < *(uint *)(puVar12 + 1)) {
            DAT_00858df8 = (undefined4 *)local_54;
            return;
          }
          switch(*puVar12) {
          case 1:
            thunk_FUN_00568dd0(&DAT_00807658,0xc,puVar12 + 9,*(int *)(puVar12 + 5),(int *)0x0,0);
            break;
          case 2:
            if (*(int **)(pCVar3 + 0x1d8) != (int *)0x0) {
              FUN_00714060(*(int **)(pCVar3 + 0x1d8));
              FUN_0072e2b0(*(undefined4 **)(pCVar3 + 0x1d8));
              *(undefined4 *)(pCVar3 + 0x1d8) = 0;
            }
            FUN_006b4170(*(int *)(pCVar3 + 0x1b4),0,100,5,0x226,0x55,0);
            local_8 = FUN_006b54f0((uint *)0x0,10,10);
            if (*(int *)(puVar12 + 10) < 1) {
              local_c = *(char **)(DAT_0080c4c7 + 8);
            }
            else {
              local_c = (char *)(*(int *)(puVar12 + 6) + *(int *)(puVar12 + 10));
            }
            iVar4 = *(int *)(puVar12 + 6);
            if (iVar4 < (int)local_c) {
              do {
                if (iVar4 < *(int *)(DAT_0080c4c7 + 8)) {
                  pcVar7 = *(char **)(*(int *)(DAT_0080c4c7 + 0x14) + iVar4 * 4);
                }
                else {
                  pcVar7 = (char *)0x0;
                }
                thunk_FUN_005411a0((int)local_8,pcVar7,&DAT_007c2260);
                iVar4 = iVar4 + 1;
              } while (iVar4 < (int)local_c);
            }
            puVar5 = ccFntTy::FormIndentSarr
                               (*(ccFntTy **)(pCVar3 + 0x1d4),(int)local_8,
                                (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,0x226,0,
                                0xffffffff,(char *)0x0,1);
            if (local_8 != (uint *)0x0) {
              FUN_006b5570((byte *)local_8);
            }
            if (puVar5 == (uint *)0x0) {
              puVar5 = FUN_006b54f0((uint *)0x0,1,1);
            }
            local_8 = puVar5;
            if (puVar12[5] == '\0') {
              pbVar6 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(pCVar3 + 0x1d4),
                                                   *(int *)(pCVar3 + 0x1b4),0,100,5,0x226,0x55,0);
              if (pbVar6 != (byte *)0x0) {
                ccFntTy::WrSarr(*(ccFntTy **)(pCVar3 + 0x1d4),(int)local_8,0,-1,0,0,0);
                thunk_FUN_00540760(*(undefined4 **)(pCVar3 + 0x1b4),100,5,'\x01',pbVar6);
                ccFntTy::EraseSufr(*(ccFntTy **)(pCVar3 + 0x1d4));
                if (puVar12[0xe] != '\0') {
                  thunk_FUN_005252c0(0x1e);
                }
              }
              FUN_006b5570((byte *)local_8);
            }
            else {
              ccFntTy::SetSurf(*(ccFntTy **)(pCVar3 + 0x1d4),*(int *)(pCVar3 + 0x1b4),0,100,5,0x226,
                               0x55);
              this_00 = (cTypingTy *)FUN_0072e530(0xb4);
              if (this_00 == (cTypingTy *)0x0) {
                this_00 = (cTypingTy *)0x0;
              }
              else {
                *(undefined4 *)(this_00 + 0x58) = 0;
                *(undefined4 *)(this_00 + 0x88) = 0;
              }
              *(cTypingTy **)(pCVar3 + 0x1d8) = this_00;
              iVar4 = cTypingTy::TypingInitSarr
                                (this_00,(int)local_8,*(void **)(pCVar3 + 0x1d4),0,0,0,0x226,0x55,0,
                                 0,0,1,2,0xff);
              *(int *)(pCVar3 + 0x1dc) = iVar4;
              pCVar3[0x1e0] = *(CPanelTy *)(puVar12 + 0xe);
              FUN_006b5570((byte *)local_8);
            }
            break;
          case 3:
            pCVar1 = pCVar3 + 0x25b;
            if (*(int *)(pCVar3 + 0x25b) != 0) {
              FUN_0070b600((int *)pCVar1);
            }
            if (DAT_0080731a == 0) {
              local_c = puVar12 + 10;
              if (puVar12[10] == '\0') {
                iVar4 = 1;
                bVar13 = 0;
                bVar14 = 6;
                pcVar7 = (char *)thunk_FUN_005260b0(*(int *)(puVar12 + 5),puVar12[9],0);
                uVar9 = DAT_00806790;
LAB_004f9a8a:
                psVar8 = FUN_0070b430(uVar9,pcVar7,bVar14,bVar13,iVar4);
                *(short **)pCVar1 = psVar8;
              }
              else {
                psVar8 = FUN_0070b430(DAT_00806758,local_c,6,0,0);
                *(short **)pCVar1 = psVar8;
                if (psVar8 == (short *)0x0) {
                  bVar14 = 6;
                  bVar13 = 0;
                  iVar4 = 0;
                  uVar9 = DAT_00806798;
                  pcVar7 = local_c;
                  goto LAB_004f9a8a;
                }
              }
              if (*(int *)pCVar1 == 0) {
                iVar4 = 1;
                bVar14 = 0;
                bVar13 = 6;
                pcVar7 = (char *)thunk_FUN_005260b0(0,0,0);
                psVar8 = FUN_0070b430(DAT_00806790,pcVar7,bVar13,bVar14,iVar4);
                *(short **)pCVar1 = psVar8;
              }
              pCVar3[0x25f] = (CPanelTy)0x0;
              thunk_FUN_004f1950((int)pCVar3);
            }
            else {
              iVar4 = 1;
              bVar14 = 0;
              bVar13 = 6;
              pcVar7 = (char *)thunk_FUN_005260b0(0,0,1);
              psVar8 = FUN_0070b430(DAT_00806790,pcVar7,bVar13,bVar14,iVar4);
              *(short **)pCVar1 = psVar8;
              pCVar3[0x260] = (CPanelTy)0x5;
              pCVar3[0x25f] = (CPanelTy)0x0;
              _Count = 0x1f;
              if (puVar12[10] == '\0') {
                pcVar7 = (char *)thunk_FUN_005260b0(*(int *)(puVar12 + 5),puVar12[9],0);
                _strncpy((char *)(pCVar3 + 0x265),pcVar7,_Count);
                pCVar3[0x285] = (CPanelTy)0x1;
              }
              else {
                _strncpy((char *)(pCVar3 + 0x265),puVar12 + 10,0x1f);
                pCVar3[0x285] = (CPanelTy)0x0;
              }
              pCVar3[0x284] = (CPanelTy)0x0;
              thunk_FUN_005252c0(0xb3);
            }
            break;
          case 4:
            *(undefined4 *)(pCVar3 + 0x28) = 0x5dc6;
            *(undefined **)(pCVar3 + 0x2c) = &DAT_0080c4d7;
            if (DAT_008117bc != (undefined4 *)0x0) {
              (**(code **)*DAT_008117bc)(pCVar3 + 0x18);
            }
            pCVar3[0x260] = (CPanelTy)0x4;
            DAT_0080c4f7 = 4;
          }
          iVar10 = *(int *)(pCVar3 + 0x24f);
          iVar4 = *(int *)(pCVar3 + 0x24b);
          *(uint *)(pCVar3 + 0x24f) = iVar10 + 1U;
          uVar11 = *(uint *)(iVar4 + 0xc);
        } while (iVar10 + 1U < uVar11);
      }
      DAT_00858df8 = (undefined4 *)local_54;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_54;
    iVar10 = FUN_006ad4d0(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x3b0,0,iVar4,&DAT_007a4ccc);
    if (iVar10 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c1bd8,0x3b0);
  }
  return;
}

