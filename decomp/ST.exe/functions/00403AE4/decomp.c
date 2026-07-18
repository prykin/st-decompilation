
void __thiscall FSGSTy::DelPlayer(FSGSTy *this,byte *param_1)

{
  byte bVar1;
  code *pcVar2;
  FSGSTy *this_00;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  byte *pbVar9;
  void *unaff_EDI;
  byte *pbVar10;
  bool bVar11;
  undefined4 uStack_84;
  undefined4 auStack_80 [16];
  byte abStack_40 [48];
  FSGSTy *pFStack_10;
  uint uStack_c;
  undefined4 *puStack_8;
  
  if ((this[0x1a5f] == (FSGSTy)0x6) && (this[0x1a60] == (FSGSTy)0x0)) {
    uStack_84 = DAT_00858df8;
    DAT_00858df8 = &uStack_84;
    pFStack_10 = this;
    iVar3 = __setjmp3(auStack_80,0,unaff_EDI,unaff_ESI);
    this_00 = pFStack_10;
    if (iVar3 == 0) {
      *(undefined4 *)(pFStack_10 + 0x2d) = 0x26;
      FUN_006e6080(pFStack_10,2,*(undefined4 *)(pFStack_10 + 0x1b20),
                   (undefined4 *)(pFStack_10 + 0x1d));
      iVar3 = *(int *)(this_00 + 0x1ea6);
      uVar7 = *(uint *)(iVar3 + 0xc);
      if (*(ushort *)(this_00 + 0x31) < uVar7) {
        puStack_8 = (undefined4 *)
                    (*(int *)(iVar3 + 8) * (uint)*(ushort *)(this_00 + 0x31) +
                    *(int *)(iVar3 + 0x1c));
      }
      else {
        puStack_8 = (undefined4 *)0x0;
      }
      uStack_c = uVar7;
      if (puStack_8 != (undefined4 *)0x0) {
        puVar8 = puStack_8;
        pbVar9 = abStack_40;
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pbVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          pbVar9 = pbVar9 + 4;
        }
        *(undefined2 *)pbVar9 = *(undefined2 *)puVar8;
      }
      uVar6 = 0;
      if (uVar7 != 0) {
        if (uVar7 == 0) {
          pbVar9 = (byte *)0x0;
          goto LAB_005a278f;
        }
        do {
          pbVar9 = (byte *)(*(int *)(*(int *)(this_00 + 0x1ea6) + 8) * uVar6 +
                           *(int *)(*(int *)(this_00 + 0x1ea6) + 0x1c));
LAB_005a278f:
          pbVar10 = param_1;
          if (pbVar9 != (byte *)0x0) {
            do {
              bVar1 = *pbVar9;
              bVar11 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_005a27ba:
                iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_005a27bf;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar9[1];
              bVar11 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_005a27ba;
              pbVar9 = pbVar9 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_005a27bf:
            uVar7 = uStack_c;
            if (iVar3 == 0) {
              FUN_006b0c70(*(int *)(this_00 + 0x1ea6),uVar6);
              break;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0xf3);
      thunk_FUN_00540620(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',*(BITMAPINFO **)(this_00 + 0x1e9a)
                        );
      *(undefined4 *)(this_00 + 0x2d) = 0x28;
      *(undefined4 *)(this_00 + 0x31) = *(undefined4 *)(*(int *)(this_00 + 0x1ea6) + 0xc);
      *(undefined2 *)(this_00 + 0x35) = 1;
      FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1b20),(undefined4 *)(this_00 + 0x1d));
      *(undefined4 *)(this_00 + 0x2d) = 0x20;
      if ((*(int *)(*(int *)(this_00 + 0x1ea6) + 0xc) == 0) || (*(int *)(this_00 + 0x1a6b) == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined4 *)(this_00 + 0x31) = uVar4;
      FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1b20),(undefined4 *)(this_00 + 0x1d));
      if (puStack_8 != (undefined4 *)0x0) {
        uVar7 = 0;
        uStack_c = *(uint *)(*(int *)(this_00 + 0x1ea6) + 0xc);
        if (uStack_c != 0) {
          if (uStack_c == 0) {
            pbVar9 = (byte *)0x0;
            goto LAB_005a28be;
          }
          do {
            pbVar9 = (byte *)(*(int *)(*(int *)(this_00 + 0x1ea6) + 8) * uVar7 +
                             *(int *)(*(int *)(this_00 + 0x1ea6) + 0x1c));
LAB_005a28be:
            if (pbVar9 != (byte *)0x0) {
              pbVar10 = abStack_40;
              do {
                bVar1 = *pbVar9;
                bVar11 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_005a28e9:
                  iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_005a28ee;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar9[1];
                bVar11 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_005a28e9;
                pbVar9 = pbVar9 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_005a28ee:
              if (iVar3 == 0) {
                *(short *)(this_00 + 0x31) = (short)uVar7;
                *(undefined2 *)(this_00 + 0x37) = 1;
                *(undefined2 *)(this_00 + 0x35) = 1;
                *(undefined4 *)(this_00 + 0x2d) = 0x22;
                FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1b20),
                             (undefined4 *)(this_00 + 0x1d));
                DAT_00858df8 = (undefined4 *)uStack_84;
                return;
              }
            }
            uVar7 = uVar7 + 1;
            if (uStack_c <= uVar7) {
              DAT_00858df8 = (undefined4 *)uStack_84;
              return;
            }
          } while( true );
        }
      }
      DAT_00858df8 = (undefined4 *)uStack_84;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_84;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa3c,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cbf70,0xa3c);
  }
  return;
}

