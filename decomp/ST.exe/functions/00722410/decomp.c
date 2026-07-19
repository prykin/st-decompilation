
/* Recovered from embedded debug metadata:
   E:\Ourlib\_sedit.cpp
   EditorClassTy::GetMessage */

int __thiscall EditorClassTy::GetMessage(EditorClassTy *this,int *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  EditorClassTy *this_00;
  int iVar5;
  BOOL BVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  undefined4 *puVar12;
  void *unaff_EDI;
  undefined4 *puVar13;
  char *pcVar14;
  InternalExceptionFrame local_74;
  undefined4 local_30 [2];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  EditorClassTy *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_8 = 0;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar5 = ReportDebugMessage(s_E__Ourlib__sedit_cpp_007f0b08,0x356,0,iVar5,&DAT_007a4ccc,
                               s_EditorClassTy__GetMessage_Error___007f0b68);
    if (iVar5 == 0) {
      RaiseInternalException(0xffff,0,s_E__Ourlib__sedit_cpp_007f0b08,0x357);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  switch(param_1[4]) {
  case 2:
    local_c = (undefined4 *)param_1[5];
    if (local_c == (undefined4 *)0x0) {
LAB_00722da6:
      local_8 = 0xffff;
    }
    else {
      local_10->field_001C = *local_c;
      *(undefined4 *)&local_10->field_0x20 = local_c[1];
      local_10->field_0214 = (ccFntTy *)local_c[2];
      local_10->field_0024 = local_c[3];
      local_10->field_0028 = local_c[4];
      local_10->field_002C = local_c[5];
      local_10->field_0030 = local_c[6];
      local_10->field_0134 = local_c[7];
      local_10->field_0138 = local_c[8];
      local_10->field_01D0 = local_c[0x222];
      uVar10 = local_c[0x219];
      local_10->field_01CC = uVar10;
      if (uVar10 < 0xff) {
        local_10->field_01CC = 0xff;
      }
      puVar12 = local_c + 0x11;
      puVar13 = (undefined4 *)&local_10->field_0x14c;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      local_10->field_0188 = local_10;
      puVar12 = local_c + 9;
      puVar13 = (undefined4 *)&local_10->field_0x16c;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      local_10->field_0168 = local_10;
      puVar12 = local_c + 0x19;
      puVar13 = (undefined4 *)&local_10->field_0x3c;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      local_10->field_0058 = local_10;
      puVar12 = local_c + 0x21;
      puVar13 = (undefined4 *)&local_10->field_0x18c;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      local_10->field_01A8 = local_10;
      puVar12 = local_c + 0x21a;
      puVar13 = (undefined4 *)&local_10->field_0x1ac;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      local_10->field_01C8 = local_10;
      *(undefined4 *)&local_10->field_0x210 = 0;
      *(undefined4 *)&local_10->field_0x20c = 0;
      local_10->field_0208 = 0;
      local_10->field_0204 = 0;
      local_10->field_0148 = 0;
      local_10->field_0144 = 0;
      local_10->field_0140 = 0;
      local_10->field_013C = 0;
      local_10->field_01D7 = 0;
      local_10->field_01D8 = 0;
      local_10->field_0034 = (uint)(local_c[0x217] == 0);
      local_10->field_0038 = (uint)(local_c[0x218] == 0);
      if (local_c[0x29] != 0) {
        uVar2 = local_10->field_0008;
        local_c[0x115] = 2;
        local_c[0x114] = uVar2;
        local_c[0x116] = 0x2c;
        local_c[0x11a] = 1;
        local_c[0x11b] = *(undefined4 *)&local_10->field_0x20c;
        (**(code **)(*(int *)local_10->field_000C + 8))
                  (local_c[0x29],&local_10->field_01FC,0,local_c + 0x2a,0);
      }
      puVar12 = local_c;
      if (local_c[0x120] != 0) {
        local_c[0x20b] = this_00->field_0008;
        local_c[0x20c] = 2;
        local_c[0x20d] = 0x2d;
        iVar5 = FUN_007219a0((int)this_00);
        puVar12[0x211] = iVar5;
        puVar12[0x212] = *(undefined4 *)&this_00->field_0x210;
        (**(code **)(*(int *)this_00->field_000C + 8))
                  (puVar12[0x120],&this_00->field_0200,0,puVar12 + 0x121,0);
      }
LAB_00722674:
      iVar5 = 1;
LAB_00722e81:
      FUN_00721a20(this_00,iVar5);
    }
    break;
  case 3:
    if (local_10->field_01FC != 0) {
      FUN_006e56b0((void *)local_10->field_000C,local_10->field_01FC);
      this_00->field_01FC = 0;
    }
    if (this_00->field_0200 != 0) {
      FUN_006e56b0((void *)this_00->field_000C,this_00->field_0200);
      this_00->field_0200 = 0;
    }
    break;
  case 8:
    if ((local_10->field_001C & 0x70000000) != 0) {
      iVar5 = FUN_006e4290(0x102,0x34,2,local_10->field_0008);
      if (iVar5 != 0) goto LAB_00722da6;
      if ((this_00->field_001C & 0xffffff) == 1) {
        FUN_00722070(this_00,0);
      }
      local_1c = this_00->field_0008;
      local_20 = 0x13;
      local_18 = 0;
      iVar5 = FUN_006e6000(this_00,3,1,local_30);
      goto LAB_00722d9e;
    }
    break;
  case 9:
    if ((local_10->field_001C & 0x70000000) == 0) {
      FUN_006e4340((void *)local_10->field_0010,0x102,0x34,2,local_10->field_0008);
      if ((this_00->field_001C & 0xffffff) == 1) {
        FUN_00721cd0(this_00,0);
      }
      local_1c = this_00->field_0008;
      local_20 = 0x14;
      FUN_006e6000(this_00,3,1,local_30);
    }
    break;
  case 0x20:
    uVar10 = local_10->field_001C & 0xff000000 | param_1[5];
    if (local_10->field_001C != uVar10) {
      local_10->field_001C = uVar10;
      local_10->field_0180 = uVar10;
      if ((local_10->field_017C != 0) &&
         (iVar5 = FUN_006e6020(local_10,(undefined4 *)&local_10->field_0x16c), iVar5 != 0))
      goto LAB_00722da6;
      if ((this_00->field_001C & 0xff000000) == 0) {
        uVar10 = this_00->field_001C & 0xffffff;
        if (uVar10 == 1) {
          FUN_00722070(this_00,0);
          iVar5 = (**(code **)(this_00->field_0000 + 4))();
        }
        else {
          if (uVar10 == 0) {
            FUN_00721cd0(this_00,0);
          }
          iVar5 = (**(code **)(this_00->field_0000 + 4))();
        }
        goto LAB_00722d9e;
      }
    }
    break;
  case 0x22:
    if ((local_10->field_0138 != 0) && (*(int *)(local_10->field_0138 + 8) != 0)) {
      if ((local_10->field_0x20 & 4) == 0) {
        uVar10 = (uint)*(ushort *)((int)param_1 + 0x16);
        uVar11 = (uint)*(ushort *)(param_1 + 5);
        goto LAB_00722e29;
      }
      uVar1 = *(ushort *)((int)param_1 + 0x16);
      local_10->field_0144 = (uint)uVar1;
      *(uint *)&local_10->field_0x20c = (uint)uVar1;
      uVar1 = *(ushort *)(param_1 + 5);
      local_10->field_0148 = (uint)uVar1;
      *(uint *)&local_10->field_0x210 = (uint)uVar1;
      goto LAB_00722e31;
    }
    break;
  case 0x26:
    *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)&local_10->field_0x20c;
    *(undefined2 *)(param_1 + 5) = *(undefined2 *)&local_10->field_0x210;
    break;
  case 0x29:
    uVar10 = *(uint *)&local_10->field_0x20;
    uVar11 = param_1[5];
    *(uint *)&local_10->field_0x20 = uVar11;
    if (((uVar11 ^ uVar10) & 1) != 0) {
      *(undefined4 *)&local_10->field_0x210 = 0;
      *(undefined4 *)&local_10->field_0x20c = 0;
      local_10->field_0208 = 0;
      local_10->field_0204 = 0;
      local_10->field_0148 = 0;
      local_10->field_0144 = 0;
      local_10->field_0140 = 0;
      local_10->field_013C = 0;
      FUN_00721a20(local_10,0);
    }
    this_00->field_01D7 = 0;
    this_00->field_01D8 = 0;
    if ((this_00->field_0x20 & 1) != 0) {
      FUN_00721080(this_00,0xfff,*(uint *)&this_00->field_0x20c);
    }
    iVar5 = (**(code **)(this_00->field_0000 + 4))();
LAB_00722d9e:
    if (iVar5 != 0) goto LAB_00722da6;
    break;
  case 0x2c:
    if ((local_10->field_0138 != 0) && (*(int *)(local_10->field_0138 + 8) != 0)) {
      if (local_10->field_001C == 0) {
        if ((local_10->field_0x20 & 0x10) != 0) break;
        local_20 = 0x20;
        local_1c = 1;
        (**(code **)local_10->field_0000)(local_30);
      }
      if ((this_00->field_0x20 & 4) == 0) {
        uVar10 = param_1[5] - this_00->field_0144;
      }
      else {
        this_00->field_0144 = param_1[5];
        uVar10 = 0;
      }
      FUN_00721080(this_00,*(int *)&this_00->field_0x210,uVar10);
      iVar5 = (**(code **)(this_00->field_0000 + 4))();
      goto LAB_00722e38;
    }
    break;
  case 0x2d:
    if ((local_10->field_0138 != 0) && (*(int *)(local_10->field_0138 + 8) != 0)) {
      if (local_10->field_001C == 0) {
        if ((local_10->field_0x20 & 0x10) != 0) break;
        local_20 = 0x20;
        local_1c = 1;
        (**(code **)local_10->field_0000)(local_30);
      }
      if ((this_00->field_0x20 & 4) == 0) {
        uVar10 = *(uint *)&this_00->field_0x20c;
        uVar11 = param_1[5] - this_00->field_0148;
        goto LAB_00722e29;
      }
      this_00->field_0148 = param_1[5];
      iVar5 = (**(code **)(this_00->field_0000 + 4))();
      if (iVar5 == 0) goto LAB_00722e7f;
      local_8 = 0xffff;
    }
    break;
  case 0x32:
    param_1[5] = local_10->field_0138;
    break;
  case 0x33:
    local_10->field_0138 = param_1[5];
    *(undefined4 *)&local_10->field_0x210 = 0;
    *(undefined4 *)&local_10->field_0x20c = 0;
    local_10->field_0208 = 0;
    local_10->field_0204 = 0;
    local_10->field_0148 = 0;
    local_10->field_0144 = 0;
    local_10->field_0140 = 0;
    local_10->field_013C = 0;
    local_10->field_01D7 = 0;
    local_10->field_01D8 = 0;
    if ((local_10->field_0x20 & 1) != 0) {
      FUN_00721080(local_10,0xfff,0);
    }
    iVar5 = (**(code **)(this_00->field_0000 + 4))();
    if (iVar5 == 0) goto LAB_00722674;
    local_8 = 0xffff;
    break;
  case 0x38:
    uVar10 = *(uint *)&local_10->field_0x20;
    if ((uVar10 & 2) == 0) {
      *(uint *)&local_10->field_0x20 = uVar10 | 2;
    }
    else {
      *(uint *)&local_10->field_0x20 = uVar10 & 0xfffffffd;
    }
    break;
  case 0x42:
    local_10->field_01E0 = *(undefined4 *)&local_10->field_0x210;
    local_10->field_01DC = *(undefined4 *)&local_10->field_0x20c;
    local_10->field_01E4 = local_10->field_0144;
    local_10->field_01E8 = local_10->field_0148;
    local_10->field_01EC = *(undefined4 *)(local_10->field_0138 + 8);
    iVar5 = FUN_00720d30((int)local_10);
    this_00->field_01F8 = iVar5;
    if ((this_00->field_0x20 & 4) == 0) {
      this_00->field_01F0 = (uint)(this_00->field_01EC + -1 <= (int)this_00->field_01DC);
    }
    else {
      this_00->field_01F0 = (uint)(this_00->field_01EC - 1 <= (uint)(this_00->field_01E4 + iVar5));
    }
    iVar5 = this_00->field_01E4 + this_00->field_01DC;
    if (iVar5 < *(int *)(this_00->field_0138 + 8)) {
      pcVar14 = *(char **)(*(int *)(this_00->field_0138 + 0x14) + iVar5 * 4);
    }
    else {
      pcVar14 = (char *)0x0;
    }
    if (pcVar14 == (char *)0x0) {
      this_00->field_01F4 = 0;
    }
    else {
      uVar10 = 0xffffffff;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar9 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar9 != '\0');
      this_00->field_01F4 = (uint)(~uVar10 - 1 <= (uint)(this_00->field_01E0 + this_00->field_01E8))
      ;
    }
    break;
  case 0x43:
    iVar5 = param_1[5];
    local_10->field_0138 = iVar5;
    if ((*(uint *)&local_10->field_0x20 & 1) == 0) {
      if ((*(uint *)&local_10->field_0x20 & 4) == 0) {
        if (local_10->field_01F0 == 0) {
          uVar10 = *(uint *)&local_10->field_0x20c;
        }
        else {
          uVar10 = *(int *)(iVar5 + 8) - 1;
        }
        iVar5 = 0xfff;
        if (local_10->field_01F4 == 0) {
          iVar5 = *(int *)&local_10->field_0x210;
        }
      }
      else {
        if (local_10->field_01F0 != 0) {
          local_10->field_0144 = *(int *)(iVar5 + 8) - local_10->field_01F8;
        }
        iVar5 = 0xfff;
        if (local_10->field_01F4 == 0) {
          iVar5 = *(int *)&local_10->field_0x210;
        }
        uVar10 = 0;
      }
    }
    else {
      iVar5 = 0xfff;
      if (local_10->field_01F4 == 0) {
        iVar5 = *(int *)&local_10->field_0x210;
      }
      uVar10 = *(uint *)&local_10->field_0x20c;
    }
    FUN_00721080(local_10,iVar5,uVar10);
    this_00->field_01D7 = 0;
    this_00->field_01D8 = 0;
    iVar5 = (**(code **)(this_00->field_0000 + 4))();
    if (iVar5 == 0) goto LAB_00722674;
    local_8 = 0xffff;
    break;
  case 0x52:
    local_10->field_002C = (uint)*(ushort *)(param_1 + 5);
    local_10->field_0030 = (uint)*(ushort *)((int)param_1 + 0x16);
    *(undefined4 *)&local_10->field_0x210 = 0;
    *(undefined4 *)&local_10->field_0x20c = 0;
    local_10->field_0208 = 0;
    local_10->field_0204 = 0;
    local_10->field_0148 = 0;
    local_10->field_0144 = 0;
    local_10->field_0140 = 0;
    local_10->field_013C = 0;
    local_10->field_01D7 = 0;
    local_10->field_01D8 = 0;
    if ((local_10->field_0x20 & 1) != 0) {
      FUN_00721080(local_10,0xfff,0);
    }
    break;
  case 0x57:
    iVar5 = param_1[5];
    if (iVar5 < 0) {
      iVar5 = FUN_00720d30((int)local_10);
    }
    FUN_00721080(this_00,*(int *)&this_00->field_0x210,*(int *)&this_00->field_0x20c + iVar5);
    iVar5 = (**(code **)(this_00->field_0000 + 4))();
    if (iVar5 == 0) goto LAB_00722e7f;
    local_8 = 0xffff;
    break;
  case 0x58:
    iVar5 = param_1[5];
    if (iVar5 < 0) {
      iVar5 = FUN_00720d30((int)local_10);
    }
    uVar11 = *(uint *)&this_00->field_0x210;
    uVar10 = *(int *)&this_00->field_0x20c - iVar5;
LAB_00722e29:
    FUN_00721080(this_00,uVar11,uVar10);
LAB_00722e31:
    iVar5 = (**(code **)(this_00->field_0000 + 4))();
LAB_00722e38:
    if (iVar5 == 0) {
LAB_00722e7f:
      iVar5 = 0;
      goto LAB_00722e81;
    }
    local_8 = 0xffff;
    break;
  case 0x59:
    iVar5 = FUN_00720d30((int)local_10);
    uVar10 = *(uint *)(this_00->field_0138 + 8);
    if ((uint)(iVar5 + this_00->field_0144) < uVar10) {
      this_00->field_0144 = uVar10 - iVar5;
      iVar5 = (**(code **)(this_00->field_0000 + 4))();
      if (iVar5 == 0) goto LAB_00722e7f;
      local_8 = 0xffff;
    }
    break;
  case 0x61:
    uVar11 = (uint)*(ushort *)(param_1 + 6);
    uVar10 = (uint)*(ushort *)((int)param_1 + 0x1a);
    if ((local_10->field_001C != 0) || ((local_10->field_0x20 & 0x10) == 0)) {
      if (((int)local_10->field_0024 < (int)uVar11) &&
         (((((int)uVar11 < (int)(local_10->field_002C + local_10->field_0024) &&
            ((int)local_10->field_0028 < (int)uVar10)) &&
           ((int)uVar10 < (int)(local_10->field_0030 + local_10->field_0028))) &&
          (local_10->field_0138 != 0)))) {
        if (local_10->field_001C == 0) {
          FUN_00722070(local_10,1);
        }
        FUN_00720e70(this_00,uVar11 - this_00->field_0024,uVar10 - this_00->field_0028);
      }
      else {
        bVar4 = false;
        local_24 = 2;
        local_20 = 0x2b;
        if (local_10->field_01FC != 0) {
          local_28 = local_10->field_01FC;
          FUN_006e6060(local_10,local_30);
          if ((short)local_1c != 0) {
            bVar4 = true;
          }
        }
        if (this_00->field_0200 != 0) {
          local_28 = this_00->field_0200;
          FUN_006e6060(this_00,local_30);
          if ((short)local_1c != 0) {
            bVar4 = true;
          }
        }
        if (this_00->field_001C != 1) goto cf_switch_join_007231FD;
        if (bVar4) break;
        FUN_00721cd0(this_00,1);
      }
      iVar5 = (**(code **)(this_00->field_0000 + 4))();
      goto LAB_00722d9e;
    }
  }
  if ((this_00->field_001C != 1) || (this_00->field_0138 == 0)) goto cf_switch_join_007231FD;
  switch(param_1[4]) {
  case 0x34:
    if (((this_00->field_0x20 & 4) != 0) ||
       (uVar10 = Library::MSVCRT::FUN_007348d0(param_1[5]), uVar10 != 0))
    goto cf_switch_join_007231FD;
    (&this_00->field_01D4)[(char)this_00->field_01D7] = (char)param_1[5];
    cVar9 = this_00->field_01D7 + '\x01';
    this_00->field_01D7 = cVar9;
    (&this_00->field_01D4)[cVar9] = 0;
    if (this_00->field_01D8 == 0) {
      BVar6 = IsDBCSLeadByte((BYTE)param_1[5]);
      if (BVar6 != 0) {
        this_00->field_01D8 = 1;
        goto cf_switch_join_007231FD;
      }
    }
    else {
      this_00->field_01D8 = 0;
    }
    iVar5 = FUN_00721830(this_00,&this_00->field_01D4);
    if (iVar5 == 0) {
      this_00->field_01D7 = 0;
      this_00->field_01D4 = 0;
      iVar5 = (**(code **)(this_00->field_0000 + 4))();
      goto LAB_0072301d;
    }
    goto LAB_007231f1;
  case 0x35:
    FUN_00721cd0(this_00,1);
    iVar5 = (**(code **)(this_00->field_0000 + 4))();
    goto LAB_007231ed;
  case 0x36:
    if ((this_00->field_0x20 & 4) == 0) {
      uVar10 = *(uint *)&this_00->field_0x20c;
      iVar5 = *(int *)&this_00->field_0x210 + -1;
LAB_0072300e:
      FUN_00721520(this_00,iVar5,uVar10);
      iVar5 = (**(code **)(this_00->field_0000 + 4))();
LAB_0072301d:
      if (iVar5 != 0) {
        local_8 = 0xffff;
        goto cf_switch_join_007231FD;
      }
    }
    goto LAB_00722fb6;
  case 0x37:
    if ((this_00->field_0x20 & 4) == 0) {
      uVar10 = *(uint *)&this_00->field_0x20c;
      iVar5 = *(int *)&this_00->field_0x210;
      goto LAB_0072300e;
    }
LAB_00722fb6:
    FUN_00721a20(this_00,1);
  default:
    goto cf_switch_join_007231FD;
  case 0x39:
    uVar10 = *(uint *)&this_00->field_0x20;
    if ((uVar10 & 4) != 0) goto cf_switch_join_007231FD;
    if ((uVar10 & 1) == 0) {
      if (((uVar10 & 2) != 0) || (uVar10 = FUN_00721340((int)this_00), uVar10 == 0)) {
        FUN_00721080(this_00,0xffe,*(int *)&this_00->field_0x20c + 1);
        iVar5 = (**(code **)(this_00->field_0000 + 4))();
        if (iVar5 == 0) goto LAB_00722fb6;
      }
      goto LAB_007231f1;
    }
    if (this_00->field_019C == 0) goto cf_switch_join_007231FD;
    iVar5 = FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x18c);
    goto LAB_007231ed;
  case 0x3a:
    if ((this_00->field_0x20 & 4) == 0) {
      FUN_00721080(this_00,*(int *)&this_00->field_0x210,*(int *)&this_00->field_0x20c - 1);
    }
    else if (this_00->field_0144 != 0) {
      this_00->field_0144 = this_00->field_0144 + -1;
    }
    iVar5 = (**(code **)(this_00->field_0000 + 4))();
    break;
  case 0x3b:
    if ((this_00->field_0x20 & 4) == 0) {
      FUN_00721080(this_00,*(int *)&this_00->field_0x210,*(int *)&this_00->field_0x20c + 1);
    }
    else {
      iVar5 = this_00->field_0144;
      iVar7 = FUN_00720d30((int)this_00);
      if (iVar5 < *(int *)(this_00->field_0138 + 8) - iVar7) {
        this_00->field_0144 = iVar5 + 1;
      }
    }
    iVar5 = (**(code **)(this_00->field_0000 + 4))();
    if (iVar5 != 0) {
      local_8 = 0xffff;
      goto cf_switch_join_007231FD;
    }
    goto LAB_0072306b;
  case 0x3c:
    if ((this_00->field_0x20 & 4) == 0) {
      FUN_00721080(this_00,*(int *)&this_00->field_0x210 + 1,*(uint *)&this_00->field_0x20c);
      iVar5 = (**(code **)(this_00->field_0000 + 4))();
    }
    else {
      iVar5 = this_00->field_0148;
      iVar7 = FUN_00720de0((int)this_00);
      iVar8 = FUN_007219a0((int)this_00);
      if (iVar5 < iVar8 - iVar7) {
        this_00->field_0148 = iVar5 + 1;
      }
      iVar5 = (**(code **)(this_00->field_0000 + 4))();
    }
    break;
  case 0x3d:
    if ((this_00->field_0x20 & 4) == 0) {
      FUN_00721080(this_00,*(int *)&this_00->field_0x210 + -1,*(uint *)&this_00->field_0x20c);
    }
    else if (this_00->field_0148 != 0) {
      this_00->field_0148 = this_00->field_0148 + -1;
      iVar5 = (**(code **)(this_00->field_0000 + 4))();
      break;
    }
    iVar5 = (**(code **)(this_00->field_0000 + 4))();
    break;
  case 0x3e:
    FUN_00721080(this_00,0xffe,*(uint *)&this_00->field_0x20c);
    iVar5 = (**(code **)(this_00->field_0000 + 4))();
    break;
  case 0x3f:
    FUN_00721080(this_00,0xfff,*(uint *)&this_00->field_0x20c);
    iVar5 = (**(code **)(this_00->field_0000 + 4))();
    break;
  case 0x40:
    iVar5 = this_00->field_01BC;
    this_00->field_01C0 = 0;
    goto joined_r0x007231dd;
  case 0x41:
    iVar5 = this_00->field_01BC;
    this_00->field_01C0 = 1;
joined_r0x007231dd:
    if (iVar5 == 0) goto cf_switch_join_007231FD;
    iVar5 = FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x1ac);
LAB_007231ed:
    if (iVar5 == 0) goto cf_switch_join_007231FD;
    goto LAB_007231f1;
  }
  if (iVar5 == 0) {
LAB_0072306b:
    FUN_00721a20(this_00,0);
  }
  else {
LAB_007231f1:
    local_8 = 0xffff;
  }
cf_switch_join_007231FD:
  if (local_8 != 0) {
    RaiseInternalException(local_8,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x34e);
  }
  iVar5 = ControlClassTy::GetMessage((ControlClassTy *)this_00,param_1);
  local_8 = iVar5;
  if (iVar5 != 0) {
    RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x350);
  }
  if (param_1[4] == 0x24) {
    SendToSliders(this_00,param_1);
  }
  g_currentExceptionFrame = local_74.previous;
  return iVar5;
}

