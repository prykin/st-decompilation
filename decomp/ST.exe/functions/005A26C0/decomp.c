
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DelPlayer */

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
  InternalExceptionFrame local_84;
  byte local_40 [48];
  FSGSTy *local_10;
  uint local_c;
  undefined4 *local_8;
  
  if ((this->field_1A5F == '\x06') && (this->field_1A60 == '\0')) {
    local_84.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_84;
    local_10 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_10;
    if (iVar3 == 0) {
      local_10->field_002D = 0x26;
      FUN_006e6080(local_10,2,local_10->field_1B20,(undefined4 *)&local_10->field_0x1d);
      iVar3 = this_00->field_1EA6;
      uVar7 = *(uint *)(iVar3 + 0xc);
      if (*(ushort *)&this_00->field_0x31 < uVar7) {
        local_8 = (undefined4 *)
                  (*(int *)(iVar3 + 8) * (uint)*(ushort *)&this_00->field_0x31 +
                  *(int *)(iVar3 + 0x1c));
      }
      else {
        local_8 = (undefined4 *)0x0;
      }
      local_c = uVar7;
      if (local_8 != (undefined4 *)0x0) {
        puVar8 = local_8;
        pbVar9 = local_40;
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
          pbVar9 = (byte *)(*(int *)(this_00->field_1EA6 + 8) * uVar6 +
                           *(int *)(this_00->field_1EA6 + 0x1c));
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
            uVar7 = local_c;
            if (iVar3 == 0) {
              FUN_006b0c70(this_00->field_1EA6,uVar6);
              break;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0xf3);
      PutDDXClip(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',(BITMAPINFO *)this_00->field_1E9A);
      this_00->field_002D = 0x28;
      *(undefined4 *)&this_00->field_0x31 = *(undefined4 *)(this_00->field_1EA6 + 0xc);
      *(undefined2 *)&this_00->field_0x35 = 1;
      FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      this_00->field_002D = 0x20;
      if ((*(int *)(this_00->field_1EA6 + 0xc) == 0) || (this_00->field_1A6B == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined4 *)&this_00->field_0x31 = uVar4;
      FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      if (local_8 != (undefined4 *)0x0) {
        uVar7 = 0;
        local_c = *(uint *)(this_00->field_1EA6 + 0xc);
        if (local_c != 0) {
          if (local_c == 0) {
            pbVar9 = (byte *)0x0;
            goto LAB_005a28be;
          }
          do {
            pbVar9 = (byte *)(*(int *)(this_00->field_1EA6 + 8) * uVar7 +
                             *(int *)(this_00->field_1EA6 + 0x1c));
LAB_005a28be:
            if (pbVar9 != (byte *)0x0) {
              pbVar10 = local_40;
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
                *(short *)&this_00->field_0x31 = (short)uVar7;
                *(undefined2 *)&this_00->field_0x37 = 1;
                *(undefined2 *)&this_00->field_0x35 = 1;
                this_00->field_002D = 0x22;
                FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
                g_currentExceptionFrame = local_84.previous;
                return;
              }
            }
            uVar7 = uVar7 + 1;
            if (local_c <= uVar7) {
              g_currentExceptionFrame = local_84.previous;
              return;
            }
          } while( true );
        }
      }
      g_currentExceptionFrame = local_84.previous;
      return;
    }
    g_currentExceptionFrame = local_84.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa3c,0,iVar3,&DAT_007a4ccc
                               ,s_FSGSTy__DelPlayer_007cc4cc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa3c);
  }
  return;
}

