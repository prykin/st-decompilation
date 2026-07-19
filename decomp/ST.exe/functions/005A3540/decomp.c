
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetGameList */

void __thiscall FSGSTy::SetGameList(FSGSTy *this,int param_1,int *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  byte *pbVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  byte *pbVar11;
  bool bVar12;
  uint *puVar13;
  undefined4 local_2bc [11];
  byte local_290 [560];
  InternalExceptionFrame local_60;
  char local_1c [8];
  undefined1 local_14;
  FSGSTy *local_10;
  undefined4 *local_c;
  uint local_8;
  
  if ((this[0x1a5f] == (FSGSTy)0x8) && (*(int *)(this + 0x1ebe) != 0)) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_10 = this;
    iVar4 = __setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = DAT_00802a30;
    if (iVar4 == 0) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar5 = *(undefined4 *)(DAT_00802a30 + 0xc9);
        uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
        DAT_00802a30[0x493] = (CursorClassTy)0x1;
        *(undefined2 *)(this_00 + 0x494) = 0xffff;
        CursorClassTy::SetGCType(this_00,0,uVar2,uVar5);
        CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
        this_00[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
      }
      this_01 = local_10;
      *(undefined4 *)(local_10 + 0x2d) = 0x26;
      FUN_006e6080(local_10,2,*(undefined4 *)(local_10 + 0x1b20),(undefined4 *)(local_10 + 0x1d));
      iVar4 = *(int *)(this_01 + 0x1ebe);
      if ((uint)*(ushort *)(this_01 + 0x31) < *(uint *)(iVar4 + 0xc)) {
        local_c = (undefined4 *)
                  (*(int *)(iVar4 + 8) * (uint)*(ushort *)(this_01 + 0x31) + *(int *)(iVar4 + 0x1c))
        ;
      }
      else {
        local_c = (undefined4 *)0x0;
      }
      if (local_c != (undefined4 *)0x0) {
        puVar8 = local_c;
        puVar10 = local_2bc;
        for (iVar6 = 0x97; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      *(undefined4 *)(iVar4 + 0xc) = 0;
      do {
        if (param_1 == 0) {
          FUN_006b5f80(DAT_008075a8,0x13,0x5e,0x174,0x175);
          thunk_FUN_00540620(0x13,0x5e,0,0,0x174,(byte *)0x175,'\x01',
                             *(BITMAPINFO **)(this_01 + 0x1e9a));
          *(undefined4 *)(this_01 + 0x2d) = 0x28;
          *(undefined4 *)(this_01 + 0x31) = *(undefined4 *)(*(int *)(this_01 + 0x1ebe) + 0xc);
          *(undefined2 *)(this_01 + 0x35) = 1;
          FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b20),(undefined4 *)(this_01 + 0x1d));
          *(undefined4 *)(this_01 + 0x2d) = 0x20;
          if ((*(int *)(*(int *)(this_01 + 0x1ebe) + 0xc) == 0) || (*(int *)(this_01 + 0x1a6b) == 0)
             ) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
          *(undefined4 *)(this_01 + 0x31) = uVar5;
          FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b20),(undefined4 *)(this_01 + 0x1d));
          if (local_c != (undefined4 *)0x0) {
            uVar7 = 0;
            local_8 = *(uint *)(*(int *)(this_01 + 0x1ebe) + 0xc);
            if (local_8 != 0) {
              if (local_8 == 0) {
                iVar4 = 0;
                goto LAB_005a37da;
              }
              do {
                iVar4 = *(int *)(*(int *)(this_01 + 0x1ebe) + 8) * uVar7 +
                        *(int *)(*(int *)(this_01 + 0x1ebe) + 0x1c);
LAB_005a37da:
                if (iVar4 != 0) {
                  pbVar11 = local_290;
                  pbVar9 = (byte *)(iVar4 + 0x2c);
                  do {
                    bVar1 = *pbVar9;
                    bVar12 = bVar1 < *pbVar11;
                    if (bVar1 != *pbVar11) {
LAB_005a380b:
                      iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                      goto LAB_005a3810;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar9[1];
                    bVar12 = bVar1 < pbVar11[1];
                    if (bVar1 != pbVar11[1]) goto LAB_005a380b;
                    pbVar9 = pbVar9 + 2;
                    pbVar11 = pbVar11 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_005a3810:
                  if (iVar4 == 0) {
                    *(short *)(this_01 + 0x31) = (short)uVar7;
                    *(undefined2 *)(this_01 + 0x37) = 1;
                    *(undefined2 *)(this_01 + 0x35) = 1;
                    *(undefined4 *)(this_01 + 0x2d) = 0x22;
                    FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b20),
                                 (undefined4 *)(this_01 + 0x1d));
                    g_currentExceptionFrame = local_60.previous;
                    return;
                  }
                }
                uVar7 = uVar7 + 1;
                if (local_8 <= uVar7) {
                  g_currentExceptionFrame = local_60.previous;
                  return;
                }
              } while( true );
            }
          }
          g_currentExceptionFrame = local_60.previous;
          return;
        }
        iVar4 = *(int *)(this_01 + 0x1ec2);
        if (iVar4 == 0) {
          if (*param_2 == 4) {
            puVar13 = *(uint **)(this_01 + 0x1ebe);
            goto LAB_005a36e9;
          }
        }
        else if ((param_2[2] == iVar4) && (*param_2 == 4)) {
          if (iVar4 == 0x100) {
            if (*(int *)(this_01 + 0x1ec6) != -1) {
              if ((char)param_2[0x1f] != '\0') {
                _strncpy(local_1c,(char *)((int)param_2 + 0x7f),8);
                local_14 = 0;
                FUN_0072ee80(local_1c,&DAT_007cc584);
                if (local_8 == *(int *)(this_01 + 0x1ec6)) {
                  puVar13 = *(uint **)(this_01 + 0x1ebe);
                  goto LAB_005a36e9;
                }
              }
              goto LAB_005a36ee;
            }
            puVar13 = *(uint **)(this_01 + 0x1ebe);
          }
          else {
            puVar13 = *(uint **)(this_01 + 0x1ebe);
          }
LAB_005a36e9:
          FUN_006ae1c0(puVar13,param_2);
        }
LAB_005a36ee:
        param_2 = param_2 + 0x97;
        param_1 = param_1 + -1;
      } while( true );
    }
    g_currentExceptionFrame = local_60.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xaf6,0,iVar4,&DAT_007a4ccc
                               ,s_FSGSTy__SetGameList_007cc56c);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xaf6);
  }
  return;
}

