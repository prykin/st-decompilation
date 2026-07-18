
void __thiscall FUN_005a3540(void *this,int param_1,int *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  byte *pbVar10;
  void *unaff_EDI;
  undefined4 *puVar11;
  byte *pbVar12;
  bool bVar13;
  uint *puVar14;
  undefined4 local_2bc [11];
  byte local_290 [560];
  undefined4 local_60;
  undefined4 local_5c [16];
  char local_1c [8];
  undefined1 local_14;
  void *local_10;
  undefined4 *local_c;
  uint local_8;
  
  if ((*(char *)((int)this + 0x1a5f) == '\b') && (*(int *)((int)this + 0x1ebe) != 0)) {
    local_60 = DAT_00858df8;
    DAT_00858df8 = &local_60;
    local_10 = this;
    iVar5 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
    pvVar4 = DAT_00802a30;
    if (iVar5 == 0) {
      if (DAT_00802a30 != (void *)0x0) {
        uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
        uVar2 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
        *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
        *(undefined2 *)((int)pvVar4 + 0x494) = 0xffff;
        thunk_FUN_0054bf40(0,uVar2,uVar6);
        thunk_FUN_00543c90(pvVar4,*(int *)((int)pvVar4 + 0xc5),*(int *)((int)pvVar4 + 0xc9));
        *(undefined1 *)((int)pvVar4 + 0xd2) = 0;
        *(undefined4 *)((int)pvVar4 + 0x4df) = 0xffffffff;
      }
      pvVar4 = local_10;
      *(undefined4 *)((int)local_10 + 0x2d) = 0x26;
      FUN_006e6080(local_10,2,*(undefined4 *)((int)local_10 + 0x1b20),
                   (undefined4 *)((int)local_10 + 0x1d));
      iVar5 = *(int *)((int)pvVar4 + 0x1ebe);
      if ((uint)*(ushort *)((int)pvVar4 + 0x31) < *(uint *)(iVar5 + 0xc)) {
        local_c = (undefined4 *)
                  (*(int *)(iVar5 + 8) * (uint)*(ushort *)((int)pvVar4 + 0x31) +
                  *(int *)(iVar5 + 0x1c));
      }
      else {
        local_c = (undefined4 *)0x0;
      }
      if (local_c != (undefined4 *)0x0) {
        puVar9 = local_c;
        puVar11 = local_2bc;
        for (iVar7 = 0x97; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
      }
      *(undefined4 *)(iVar5 + 0xc) = 0;
      do {
        if (param_1 == 0) {
          FUN_006b5f80(DAT_008075a8,0x13,0x5e,0x174,0x175);
          thunk_FUN_00540620(0x13,0x5e,0,0,0x174,(byte *)0x175,'\x01',
                             *(BITMAPINFO **)((int)pvVar4 + 0x1e9a));
          *(undefined4 *)((int)pvVar4 + 0x2d) = 0x28;
          *(undefined4 *)((int)pvVar4 + 0x31) =
               *(undefined4 *)(*(int *)((int)pvVar4 + 0x1ebe) + 0xc);
          *(undefined2 *)((int)pvVar4 + 0x35) = 1;
          FUN_006e6080(pvVar4,2,*(undefined4 *)((int)pvVar4 + 0x1b20),
                       (undefined4 *)((int)pvVar4 + 0x1d));
          *(undefined4 *)((int)pvVar4 + 0x2d) = 0x20;
          if ((*(int *)(*(int *)((int)pvVar4 + 0x1ebe) + 0xc) == 0) ||
             (*(int *)((int)pvVar4 + 0x1a6b) == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          *(undefined4 *)((int)pvVar4 + 0x31) = uVar6;
          FUN_006e6080(pvVar4,2,*(undefined4 *)((int)pvVar4 + 0x1b20),
                       (undefined4 *)((int)pvVar4 + 0x1d));
          if (local_c != (undefined4 *)0x0) {
            uVar8 = 0;
            local_8 = *(uint *)(*(int *)((int)pvVar4 + 0x1ebe) + 0xc);
            if (local_8 != 0) {
              if (local_8 == 0) {
                iVar5 = 0;
                goto LAB_005a37da;
              }
              do {
                iVar5 = *(int *)(*(int *)((int)pvVar4 + 0x1ebe) + 8) * uVar8 +
                        *(int *)(*(int *)((int)pvVar4 + 0x1ebe) + 0x1c);
LAB_005a37da:
                if (iVar5 != 0) {
                  pbVar12 = local_290;
                  pbVar10 = (byte *)(iVar5 + 0x2c);
                  do {
                    bVar1 = *pbVar10;
                    bVar13 = bVar1 < *pbVar12;
                    if (bVar1 != *pbVar12) {
LAB_005a380b:
                      iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                      goto LAB_005a3810;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar10[1];
                    bVar13 = bVar1 < pbVar12[1];
                    if (bVar1 != pbVar12[1]) goto LAB_005a380b;
                    pbVar10 = pbVar10 + 2;
                    pbVar12 = pbVar12 + 2;
                  } while (bVar1 != 0);
                  iVar5 = 0;
LAB_005a3810:
                  if (iVar5 == 0) {
                    *(short *)((int)pvVar4 + 0x31) = (short)uVar8;
                    *(undefined2 *)((int)pvVar4 + 0x37) = 1;
                    *(undefined2 *)((int)pvVar4 + 0x35) = 1;
                    *(undefined4 *)((int)pvVar4 + 0x2d) = 0x22;
                    FUN_006e6080(pvVar4,2,*(undefined4 *)((int)pvVar4 + 0x1b20),
                                 (undefined4 *)((int)pvVar4 + 0x1d));
                    DAT_00858df8 = (undefined4 *)local_60;
                    return;
                  }
                }
                uVar8 = uVar8 + 1;
                if (local_8 <= uVar8) {
                  DAT_00858df8 = (undefined4 *)local_60;
                  return;
                }
              } while( true );
            }
          }
          DAT_00858df8 = (undefined4 *)local_60;
          return;
        }
        iVar5 = *(int *)((int)pvVar4 + 0x1ec2);
        if (iVar5 == 0) {
          if (*param_2 == 4) {
            puVar14 = *(uint **)((int)pvVar4 + 0x1ebe);
            goto LAB_005a36e9;
          }
        }
        else if ((param_2[2] == iVar5) && (*param_2 == 4)) {
          if (iVar5 == 0x100) {
            if (*(int *)((int)pvVar4 + 0x1ec6) != -1) {
              if ((char)param_2[0x1f] != '\0') {
                _strncpy(local_1c,(char *)((int)param_2 + 0x7f),8);
                local_14 = 0;
                FUN_0072ee80(local_1c,&DAT_007cc584);
                if (local_8 == *(int *)((int)pvVar4 + 0x1ec6)) {
                  puVar14 = *(uint **)((int)pvVar4 + 0x1ebe);
                  goto LAB_005a36e9;
                }
              }
              goto LAB_005a36ee;
            }
            puVar14 = *(uint **)((int)pvVar4 + 0x1ebe);
          }
          else {
            puVar14 = *(uint **)((int)pvVar4 + 0x1ebe);
          }
LAB_005a36e9:
          FUN_006ae1c0(puVar14,param_2);
        }
LAB_005a36ee:
        param_2 = param_2 + 0x97;
        param_1 = param_1 + -1;
      } while( true );
    }
    DAT_00858df8 = (undefined4 *)local_60;
    iVar7 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xaf6,0,iVar5,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7cbf70,0xaf6);
  }
  return;
}

