
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::AddPlayer */

void __thiscall FSGSTy::AddPlayer(FSGSTy *this,undefined4 *param_1)

{
  byte bVar1;
  uint *puVar2;
  code *pcVar3;
  FSGSTy *this_00;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  byte *pbVar9;
  void *unaff_EDI;
  byte *pbVar10;
  bool bVar11;
  byte local_b0 [48];
  undefined4 local_80;
  undefined4 local_7c [16];
  undefined4 local_3c [11];
  undefined1 local_f;
  FSGSTy *local_c;
  undefined4 *local_8;
  
  if ((this[0x1a5f] == (FSGSTy)0x6) && (this[0x1a60] == (FSGSTy)0x0)) {
    local_80 = DAT_00858df8;
    DAT_00858df8 = &local_80;
    local_c = this;
    iVar4 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
    this_00 = local_c;
    if (iVar4 == 0) {
      *(undefined4 *)(local_c + 0x2d) = 0x26;
      FUN_006e6080(local_c,2,*(undefined4 *)(local_c + 0x1b20),(undefined4 *)(local_c + 0x1d));
      puVar2 = *(uint **)(this_00 + 0x1ea6);
      if ((uint)*(ushort *)(this_00 + 0x31) < puVar2[3]) {
        local_8 = (undefined4 *)(puVar2[2] * (uint)*(ushort *)(this_00 + 0x31) + puVar2[7]);
      }
      else {
        local_8 = (undefined4 *)0x0;
      }
      if (local_8 != (undefined4 *)0x0) {
        puVar8 = local_8;
        pbVar9 = local_b0;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pbVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          pbVar9 = pbVar9 + 4;
        }
        *(undefined2 *)pbVar9 = *(undefined2 *)puVar8;
      }
      puVar8 = local_3c;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *param_1;
        param_1 = param_1 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined1 *)puVar8 = *(undefined1 *)param_1;
      local_f = 0;
      FUN_006ae1c0(puVar2,local_3c);
      FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0xf3);
      thunk_FUN_00540620(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',*(BITMAPINFO **)(this_00 + 0x1e9a)
                        );
      *(undefined4 *)(this_00 + 0x2d) = 0x28;
      *(undefined4 *)(this_00 + 0x31) = *(undefined4 *)(*(int *)(this_00 + 0x1ea6) + 0xc);
      *(undefined2 *)(this_00 + 0x35) = 1;
      FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1b20),(undefined4 *)(this_00 + 0x1d));
      *(undefined4 *)(this_00 + 0x2d) = 0x20;
      if ((*(int *)(*(int *)(this_00 + 0x1ea6) + 0xc) == 0) || (*(int *)(this_00 + 0x1a6b) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined4 *)(this_00 + 0x31) = uVar5;
      FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1b20),(undefined4 *)(this_00 + 0x1d));
      if (local_8 != (undefined4 *)0x0) {
        uVar7 = 0;
        local_8 = *(undefined4 **)(*(int *)(this_00 + 0x1ea6) + 0xc);
        if (local_8 != (undefined4 *)0x0) {
          if (local_8 == (undefined4 *)0x0) {
            pbVar9 = (byte *)0x0;
            goto LAB_005a252f;
          }
          do {
            pbVar9 = (byte *)(*(int *)(*(int *)(this_00 + 0x1ea6) + 8) * uVar7 +
                             *(int *)(*(int *)(this_00 + 0x1ea6) + 0x1c));
LAB_005a252f:
            if (pbVar9 != (byte *)0x0) {
              pbVar10 = local_b0;
              do {
                bVar1 = *pbVar9;
                bVar11 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_005a255d:
                  iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_005a2562;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar9[1];
                bVar11 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_005a255d;
                pbVar9 = pbVar9 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_005a2562:
              if (iVar4 == 0) {
                *(short *)(this_00 + 0x31) = (short)uVar7;
                *(undefined2 *)(this_00 + 0x37) = 1;
                *(undefined2 *)(this_00 + 0x35) = 1;
                *(undefined4 *)(this_00 + 0x2d) = 0x22;
                FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1b20),
                             (undefined4 *)(this_00 + 0x1d));
                DAT_00858df8 = (undefined4 *)local_80;
                return;
              }
            }
            uVar7 = uVar7 + 1;
            if (local_8 <= uVar7) {
              DAT_00858df8 = (undefined4 *)local_80;
              return;
            }
          } while( true );
        }
      }
      DAT_00858df8 = (undefined4 *)local_80;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_80;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa12,0,iVar4,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7cbf70,0xa12);
  }
  return;
}

