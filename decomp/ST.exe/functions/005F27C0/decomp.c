
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_BheShell.cpp
   STBHEShellC::GetMessage */

undefined4 __thiscall STBHEShellC::GetMessage(STBHEShellC *this,int param_1)

{
  code *pcVar1;
  short sVar2;
  void *pvVar3;
  STBHEShellC *this_00;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  uint uVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  bool bVar11;
  undefined1 *puVar12;
  InternalExceptionFrame local_6c;
  int local_28;
  int local_24;
  byte *local_20;
  uint local_1c;
  int local_18;
  STBHEShellC *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_14 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_nick_to_BheShell_cpp_007ce694,0x163,0,iVar4,
                               &DAT_007a4ccc,s_STBHEShellC__GetMessage_007ce6bc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    RaiseInternalException(iVar4,0,s_E____titans_nick_to_BheShell_cpp_007ce694,0x165);
    return 0xffff;
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar9) {
    if (uVar9 == 0x112) {
      uVar9 = local_14->field_008F;
      if ((int)uVar9 < 0) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      if ((local_14->field_0104 != 0) && (local_14->field_0104 != 2)) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      puVar12 = (undefined1 *)0x0;
    }
    else {
      if (uVar9 != 0x113) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      uVar9 = local_14->field_008F;
      if ((int)uVar9 < 0) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      if ((local_14->field_0104 != 0) && (local_14->field_0104 != 2)) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      puVar12 = &LAB_00403170;
    }
    FUN_006e9520(DAT_00807598,uVar9,0,(uint)puVar12,(uint)local_14);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  if (uVar9 == 0x10f) {
    local_20 = (byte *)thunk_FUN_005f5a90(local_14,(int *)&local_1c);
    STPlaySystemC::SaveObjData(DAT_00802a38,this_00->field_0018,local_20,local_1c);
    FUN_006ab060(&local_20);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  if (uVar9 != 0) {
    if (uVar9 != 2) {
      if (uVar9 != 3) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      thunk_FUN_005f3b00((int)local_14);
      thunk_FUN_005f53a0((int)this_00);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    puVar8 = *(undefined4 **)(param_1 + 0x14);
    if (puVar8[3] != 2) {
      puVar10 = (undefined4 *)&local_14->field_0x4d;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined2 *)puVar10 = *(undefined2 *)puVar8;
      iVar4 = local_14->field_006D;
      uVar9 = iVar4 - local_14->field_0061;
      if (((int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) < 4) &&
         (uVar7 = local_14->field_0071 - local_14->field_0065,
         (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) < 4)) {
        iVar5 = local_14->field_0071;
        if (iVar5 == local_14->field_0065) {
          if (iVar4 == local_14->field_0061) {
            local_14->field_006D = iVar4 + 4;
          }
          else if ((int)uVar9 < 1) {
            local_14->field_006D = iVar4 + (uint)(uVar9 != 0) * -4;
          }
          else {
            local_14->field_006D = iVar4 + 4;
          }
        }
        else if ((int)uVar7 < 1) {
          local_14->field_0071 = iVar5 + (uint)(uVar7 != 0) * -4;
        }
        else {
          local_14->field_0071 = iVar5 + 4;
        }
      }
      local_14->field_001C = DAT_00808754;
      thunk_FUN_005f34b0((int)local_14);
      this_00->field_0104 = 0;
      thunk_FUN_005f3bf0(this_00,this_00->field_006D,this_00->field_0071,this_00->field_0075,'\0');
      thunk_FUN_005f5c40(this_00,this_00->field_0061,this_00->field_0065,0x489);
      iVar4 = thunk_FUN_005f3940(this_00->field_0061,this_00->field_0065,this_00->field_0069);
      this_00->field_0103 = (char)iVar4;
      if ((char)iVar4 != '\0') {
        thunk_FUN_005f35f0(this_00->field_0087);
      }
      this_00->field_007D = DAT_007e66d4;
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    thunk_FUN_005f5b80(local_14,puVar8);
    puVar8 = (undefined4 *)&this_00->field_0x20;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined1 *)puVar8 = 0;
    this_00->field_001C = this_00->field_016D;
    if (this_00->field_0103 == '\0') {
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    thunk_FUN_005f35f0(this_00->field_0087);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  switch(local_14->field_0104) {
  case 0:
    uVar9 = thunk_FUN_005f4370(local_14,&local_8,&local_10,&local_c,0);
    uVar7 = thunk_FUN_00601500(&this_00->field_0x20,local_8,local_10,local_c,this_00->field_0093,
                               this_00->field_0097,this_00->field_009B,this_00->field_0051,0x1e,
                               this_00->field_0081,this_00->field_0085,0xb5,0,0);
    if (0 < (int)uVar7) {
      if (uVar7 == 5) {
        thunk_FUN_005f3470(this_00);
        goto switchD_005f29cb_default;
      }
LAB_005f2b3a:
      thunk_FUN_005f5d10(this_00,uVar7);
      goto switchD_005f29cb_default;
    }
    if (uVar9 == 0xffffffff) goto LAB_005f3027;
    if (uVar9 != 0) {
      if (uVar9 == 1) {
        this_00->field_009F = this_00->field_0093;
        this_00->field_00A3 = this_00->field_0097;
        this_00->field_00A7 = this_00->field_009B;
        this_00->field_0093 = local_8;
        this_00->field_0097 = local_10;
        this_00->field_009B = local_c;
        iVar4 = thunk_FUN_005f3bf0(this_00,this_00->field_006D,this_00->field_0071,
                                   this_00->field_0075,'\x01');
        this_00->field_0104 = (-(uint)(iVar4 != 0) & 0xfffffffc) + 5;
      }
      goto switchD_005f29cb_default;
    }
    break;
  case 1:
    uVar9 = thunk_FUN_005f4370(local_14,&local_8,&local_10,&local_c,1);
    uVar7 = thunk_FUN_00601500(&this_00->field_0x20,local_8,local_10,local_c,this_00->field_0093,
                               this_00->field_0097,this_00->field_009B,this_00->field_0051,0x1e,
                               this_00->field_0081,this_00->field_0085,0xb5,0,0);
    if (0 < (int)uVar7) {
      if (uVar7 != 5) goto LAB_005f2b3a;
      goto switchD_005f29cb_caseD_5;
    }
    if (uVar9 == 0xffffffff) goto LAB_005f3027;
    if (uVar9 != 0) {
      if (uVar9 == 1) {
        this_00->field_009F = this_00->field_0093;
        this_00->field_00A3 = this_00->field_0097;
        this_00->field_00A7 = this_00->field_009B;
        this_00->field_0093 = local_8;
        this_00->field_0097 = local_10;
        this_00->field_009B = local_c;
        iVar4 = thunk_FUN_005f3bf0(this_00,this_00->field_006D,this_00->field_0071,
                                   this_00->field_0075,'\x02');
        this_00->field_0104 = (-(uint)(iVar4 != 0) & 0xfffffffd) + 5;
      }
      goto switchD_005f29cb_default;
    }
    break;
  case 2:
    uVar9 = thunk_FUN_005f4370(local_14,&local_8,&local_10,&local_c,2);
    if (uVar9 == 0xffffffff) {
LAB_005f3027:
      this_00->field_0104 = 5;
      goto switchD_005f29cb_default;
    }
    if (uVar9 != 0) {
      if (uVar9 == 1) {
        thunk_FUN_005f5e30(this_00,local_8,local_10,local_c);
        this_00->field_0104 = 3;
        iVar4 = thunk_FUN_005f4c50(this_00,(float)this_00->field_0093,this_00->field_0097,
                                   this_00->field_009B,4,0x1e,3);
        if (iVar4 != 0) {
          this_00->field_0108 = 1;
        }
      }
      goto switchD_005f29cb_default;
    }
    break;
  case 3:
    if ((int)local_14->field_008F < 0) {
      local_14->field_0104 = 5 - (uint)(local_14->field_0108 != '\0');
      goto switchD_005f29cb_default;
    }
    if (0x10 < (int)local_14->field_00AB) {
      if (local_14->field_00AB == 0x11) {
        FUN_006e9cb0(DAT_00807598,(uint *)local_14->field_008F,2);
      }
      FUN_006ea270(DAT_00807598,this_00->field_008F,2,this_00->field_00C0);
      if ((int)this_00->field_00C0 < (int)this_00->field_00BC) {
        this_00->field_00C0 = this_00->field_00C0 + 1;
      }
    }
    if (this_00->field_00BB != '\0') {
      if (this_00->field_00B7 == this_00->field_00B3) {
        this_00->field_00BB = 0;
        FUN_006e9d40(DAT_00807598,(uint *)this_00->field_008F,1);
      }
      else {
        FUN_006ea270(DAT_00807598,this_00->field_008F,1,this_00->field_00B7);
        this_00->field_00B7 = this_00->field_00B7 + 1;
      }
    }
    uVar9 = this_00->field_00AB;
    if ((int)uVar9 < (int)this_00->field_00AF) {
      FUN_006ea270(DAT_00807598,this_00->field_008F,0,uVar9);
LAB_005f2d8b:
      this_00->field_00AB = this_00->field_00AB + 1;
    }
    else if (uVar9 == this_00->field_00AF) {
      if (-1 < (int)this_00->field_008F) {
        FUN_006e9d40(DAT_00807598,(uint *)this_00->field_008F,0);
      }
      goto LAB_005f2d8b;
    }
    FUN_006ea960(DAT_00807598,this_00->field_008F,
                 (float)this_00->field_0093 * _DAT_007904f8 * _DAT_007904f0,
                 (float)this_00->field_0097 * _DAT_007904f8 * _DAT_007904f0,
                 (float)this_00->field_009B * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (this_00->field_00C0 == this_00->field_00BC) {
      if (-1 < (int)this_00->field_008F) {
        FUN_006eab60(DAT_00807598,this_00->field_008F);
      }
      this_00->field_0104 = 4;
    }
    pvVar3 = DAT_00802a88;
    if (DAT_00802a88 != (void *)0x0) {
      iVar4 = this_00->field_009B;
      sVar2 = (short)(iVar4 >> 0x1f);
      if (iVar4 < 0) {
        local_18 = (short)(((short)(iVar4 / 200) + sVar2) -
                          (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        local_18 = (int)(short)(((short)(iVar4 / 200) + sVar2) -
                               (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
      }
      iVar4 = this_00->field_0097;
      sVar2 = (short)(iVar4 >> 0x1f);
      if (iVar4 < 0) {
        iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) -
                       (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                            (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
      }
      iVar5 = this_00->field_0093;
      sVar2 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) -
                       (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
      }
      if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
          (thunk_FUN_00558c00(DAT_00802a88,
                              *(Global_sub_00558C00_param_1Enum *)((int)DAT_00802a88 + 0x10c),iVar5,
                              iVar4,&local_24,&local_28), local_18 < 0)) || (4 < local_18)) {
        bVar11 = true;
      }
      else {
        if (((local_24 < 0) || (*(int *)((int)pvVar3 + 0x30) <= local_24)) ||
           (((&DAT_0079aed0)[local_18] + local_28 < 0 ||
            (*(int *)((int)pvVar3 + 0x34) <= (&DAT_0079aed0)[local_18] + local_28)))) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((bVar11) && (*(int *)((int)pvVar3 + 0x4c) != 0)) {
          bVar11 = *(char *)(((&DAT_0079aed0)[local_18] + local_28) * *(int *)((int)pvVar3 + 0x30) +
                             *(int *)((int)pvVar3 + 0x4c) + local_24) != '\0';
        }
        else {
          bVar11 = true;
        }
      }
      if (bVar11) {
        if (this_00->field_00C4 == '\0') {
          FUN_006eaaa0(DAT_00807598,this_00->field_008F,0);
          this_00->field_00C4 = 1;
        }
      }
      else if (this_00->field_00C4 != '\0') {
        FUN_006eab60(DAT_00807598,this_00->field_008F);
        this_00->field_00C4 = 0;
      }
    }
    if (this_00->field_0108 != '\0') {
      thunk_FUN_005f4fa0(this_00);
      thunk_FUN_005f5440((int)this_00);
    }
    goto switchD_005f29cb_default;
  case 4:
    if (local_14->field_0108 != '\0') {
      iVar4 = thunk_FUN_005f4fa0(local_14);
      if (iVar4 != 0) {
        if (this_00->field_0103 != '\0') {
          thunk_FUN_005f5440((int)this_00);
        }
        goto switchD_005f29cb_default;
      }
      goto LAB_005f3027;
    }
    goto LAB_005f2b30;
  case 5:
switchD_005f29cb_caseD_5:
LAB_005f2b30:
    thunk_FUN_005f3470(this_00);
  default:
    goto switchD_005f29cb_default;
  }
  this_00->field_009F = this_00->field_0093;
  this_00->field_00A3 = this_00->field_0097;
  this_00->field_00A7 = this_00->field_009B;
  this_00->field_0093 = local_8;
  this_00->field_0097 = local_10;
  this_00->field_009B = local_c;
switchD_005f29cb_default:
  if (this_00->field_0103 == '\0') {
    iVar4 = thunk_FUN_005f3940(this_00->field_0093,this_00->field_0097,this_00->field_009B);
    this_00->field_0103 = (char)iVar4;
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  iVar4 = this_00->field_0104;
  if (((iVar4 != 5) && (iVar4 != 3)) && (iVar4 != 4)) {
    thunk_FUN_005f4680((int)this_00);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

