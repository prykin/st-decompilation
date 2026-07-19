
/* Recovered from embedded debug metadata:
   E:\Ourlib\Scontrol.cpp
   ControlClassTy::GetMessage */

int __thiscall ControlClassTy::GetMessage(ControlClassTy *this,int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  ControlClassTy *this_00;
  bool bVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar7;
  undefined3 extraout_var_03;
  DWORD DVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar10;
  int iVar11;
  InternalExceptionFrame local_70;
  int local_2c [5];
  undefined4 *local_18;
  undefined2 local_14;
  ControlClassTy *local_c;
  int local_8;
  
  local_8 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_c = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar6 = ReportDebugMessage(s_E__Ourlib_Scontrol_cpp_007f10c0,0x10a,0,iVar6,&DAT_007a4ccc,
                               s_ControlClassTy__GetMessage_Error_007f109c);
    if (iVar6 == 0) {
      RaiseInternalException(0xffff,0,s_E__Ourlib_Scontrol_cpp_007f10c0,0x10b);
      return 0xffff;
    }
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  switch(param_1[4]) {
  case 0:
    iVar6 = local_8;
    if (((local_c->field_005C != 0) && (local_c->field_0084 != 0)) &&
       ((DVar8 = timeGetTime(), iVar6 = local_8,
        (uint)(this_00->field_005C + this_00->field_0084) <= DVar8 && (this_00->field_0080 == 0))))
    {
      iVar6 = FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x3c);
      local_8 = iVar6;
      if (iVar6 != 0) {
        RaiseInternalException(iVar6,DAT_007ed77c,s_E__Ourlib_Scontrol_cpp_007f10c0,0xd6);
      }
      this_00->field_0080 = 1;
    }
    if (this_00->field_00AC == 0) {
      g_currentExceptionFrame = local_70.previous;
      return iVar6;
    }
    if (this_00->field_00D4 == 0) {
      g_currentExceptionFrame = local_70.previous;
      return iVar6;
    }
    DVar8 = timeGetTime();
    if (DVar8 < (uint)(this_00->field_00AC + this_00->field_00D4)) {
      g_currentExceptionFrame = local_70.previous;
      return iVar6;
    }
    if (this_00->field_00D0 != 0) {
      g_currentExceptionFrame = local_70.previous;
      return iVar6;
    }
    iVar6 = FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x8c);
    if (iVar6 == 0) goto cf_common_exit_0072BE89;
    iVar11 = 0xda;
    goto LAB_0072be83;
  default:
    FUN_006e5fd0();
    break;
  case 2:
    local_c->field_001C = local_c->field_001C | 0x70000000;
    iVar6 = FUN_006e4d40((void *)local_c->field_0010,local_c->field_000C);
    if (iVar6 == 1) {
      local_2c[2] = this_00->field_0008;
      local_2c[3] = 2;
      local_2c[4] = 8;
      (**(code **)this_00->field_0000)(local_2c);
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    break;
  case 3:
    iVar6 = FUN_006e4d40((void *)local_c->field_0010,local_c->field_000C);
    if (iVar6 == 1) {
      local_2c[2] = this_00->field_0008;
      local_2c[3] = 2;
      local_2c[4] = 9;
      iVar6 = (**(code **)this_00->field_0000)(local_2c);
      g_currentExceptionFrame = local_70.previous;
      return iVar6;
    }
    break;
  case 5:
    if ((local_c->field_001C & 0xf0000000) != 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    iVar6 = local_c->field_0000;
    goto LAB_0072bcc4;
  case 6:
    if (((*param_1 != local_c->field_0008) || (param_1[1] != 2)) && (local_c->field_0038 != 0)) {
      piVar10 = (int *)param_1[5];
      bVar5 = FUN_00753090(local_c->field_0024,local_c->field_0028,local_c->field_002C,
                           local_c->field_0030,*piVar10,piVar10[1],piVar10[2],piVar10[3]);
      if (CONCAT31(extraout_var_01,bVar5) != 0) {
        this_00->field_001C = this_00->field_001C | 0x80000000;
        this_00->field_0018 = this_00->field_0018 + 1;
        if (this_00->field_0080 != 0) {
          if (this_00->field_0070 != 0) {
            FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x60);
          }
          this_00->field_0080 = 0;
        }
        this_00->field_0084 = 0;
        if (this_00->field_00D0 != 0) {
          if (this_00->field_00C0 != 0) {
            FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0xb0);
          }
          this_00->field_00D0 = 0;
        }
        this_00->field_00D4 = 0;
        g_currentExceptionFrame = local_70.previous;
        return local_8;
      }
    }
    break;
  case 7:
    if ((local_c->field_001C & 0x80000000) == 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    if ((*param_1 == local_c->field_0008) && (param_1[1] == 2)) {
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    piVar10 = (int *)param_1[5];
    bVar5 = FUN_00753090(local_c->field_0024,local_c->field_0028,local_c->field_002C,
                         local_c->field_0030,*piVar10,piVar10[1],piVar10[2],piVar10[3]);
    if (CONCAT31(extraout_var_02,bVar5) == 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    if (this_00->field_0018 == 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    iVar6 = this_00->field_0018 + -1;
    this_00->field_0018 = iVar6;
    if (iVar6 != 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    this_00->field_001C = this_00->field_001C & 0x7fffffff;
    iVar6 = this_00->field_0000;
LAB_0072bcc4:
    iVar6 = (**(code **)(iVar6 + 4))();
    if (iVar6 != 0) {
      g_currentExceptionFrame = local_70.previous;
      return 0xffff;
    }
    break;
  case 8:
    uVar7 = local_c->field_001C;
    if ((uVar7 & 0x70000000) != 0) {
      local_c->field_001C = uVar7 & 0x8fffffff;
      if (((uVar7 & 0x80000000) == 0) && (local_c->field_0034 != 0)) {
        local_18 = &local_c->field_0024;
        local_2c[3] = 0xf;
        local_2c[4] = 6;
        local_8 = FUN_006e5fe0(local_c,local_2c);
      }
      iVar6 = local_8;
      iVar11 = (**(code **)(this_00->field_0000 + 4))();
      local_8 = iVar6;
      if (iVar11 != 0) {
        g_currentExceptionFrame = local_70.previous;
        return 0xffff;
      }
    }
    break;
  case 9:
    if ((local_c->field_001C & 0x70000000) == 0) {
      local_18 = &local_c->field_0024;
      local_2c[3] = 0xf;
      local_2c[4] = 7;
      iVar6 = FUN_006e5fe0(local_c,local_2c);
      this_00->field_001C = this_00->field_001C | 0x70000000;
      local_8 = iVar6;
      if (this_00->field_0080 != 0) {
        if (this_00->field_0070 != 0) {
          FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x60);
        }
        this_00->field_0080 = 0;
      }
      this_00->field_0084 = 0;
      if (this_00->field_00D0 != 0) {
        if (this_00->field_00C0 != 0) {
          FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0xb0);
        }
        this_00->field_00D0 = 0;
      }
      this_00->field_00D4 = 0;
      g_currentExceptionFrame = local_70.previous;
      return iVar6;
    }
    break;
  case 0x21:
    param_1[5] = local_c->field_001C;
    g_currentExceptionFrame = local_70.previous;
    return local_8;
  case 0x24:
  case 0x53:
    uVar7 = local_c->field_001C;
    if ((uVar7 & 0x80000000) == 0) {
      if ((uVar7 & 0x70000000) == 0) {
        local_18 = &local_c->field_0024;
        local_2c[3] = 0xf;
        local_2c[4] = 7;
        FUN_006e5fe0(local_c,local_2c);
      }
    }
    else {
      local_c->field_0018 = 0;
      local_c->field_001C = uVar7 & 0x7fffffff;
    }
    if (param_1[4] == 0x24) {
      this_00->field_0024 = this_00->field_0024 + (int)(short)param_1[5];
      this_00->field_0028 = this_00->field_0028 + (int)*(short *)((int)param_1 + 0x16);
    }
    else if (param_1[4] == 0x53) {
      puVar3 = (undefined4 *)param_1[5];
      this_00->field_0024 = *puVar3;
      this_00->field_0028 = puVar3[1];
      this_00->field_002C = puVar3[2];
      this_00->field_0030 = puVar3[3];
    }
    if (((this_00->field_001C & 0x70000000) == 0) && (this_00->field_0034 != 0)) {
      local_18 = &this_00->field_0024;
      local_2c[3] = 0xf;
      local_2c[4] = 6;
      FUN_006e5fe0(this_00,local_2c);
    }
    piVar10 = local_2c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar10 = 0;
      piVar10 = piVar10 + 1;
    }
    local_2c[2] = 1;
    local_2c[3] = 3;
    local_2c[4] = 0x15;
    local_18 = (undefined4 *)FUN_006e5fe0(this_00,local_2c);
    if (local_18 == (undefined4 *)0x0) {
      local_2c[4] = 0x60;
      (**(code **)this_00->field_0000)(local_2c);
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    break;
  case 0x2a:
    param_1[5] = (int)&local_c->field_0024;
    g_currentExceptionFrame = local_70.previous;
    return local_8;
  case 0x50:
    piVar10 = (int *)param_1[5];
    puVar1 = &local_c->field_0xdc;
    if (((((local_c->field_0xdc & 8) != 0) && (*(int *)&local_c->field_0xe0 != 0)) ||
        (local_c->field_0xe0 != '\0')) &&
       ((local_c->field_0128 != 0 &&
        (((short)param_1[6] != 0 ||
         (bVar5 = FUN_00753090(local_c->field_0024,local_c->field_0028,local_c->field_002C,
                               local_c->field_0030,*piVar10,piVar10[1],piVar10[2],piVar10[3]),
         CONCAT31(extraout_var,bVar5) != 0)))))) {
      local_2c[4] = 0x11;
      local_18 = (undefined4 *)puVar1;
      FUN_006e6000(this_00,3,1,local_2c);
      this_00->field_0128 = 0;
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    break;
  case 0x51:
    piVar10 = (int *)param_1[5];
    puVar1 = &local_c->field_0xdc;
    if ((((((local_c->field_0xdc & 8) != 0) && (*(int *)&local_c->field_0xe0 != 0)) ||
         (local_c->field_0xe0 != '\0')) && (local_c->field_0128 == 0)) &&
       (((short)param_1[6] != 0 ||
        (bVar5 = FUN_00753090(local_c->field_0024,local_c->field_0028,local_c->field_002C,
                              local_c->field_0030,*piVar10,piVar10[1],piVar10[2],piVar10[3]),
        CONCAT31(extraout_var_00,bVar5) != 0)))) {
      local_2c[4] = 0x10;
      local_18 = (undefined4 *)puVar1;
      FUN_006e6000(this_00,3,1,local_2c);
      this_00->field_0128 = 1;
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    break;
  case 0x5a:
    iVar6 = local_c->field_0128;
    if (iVar6 != 0) {
      local_2c[4] = 0x50;
      local_18 = (undefined4 *)0x0;
      local_14 = 1;
      (**(code **)local_c->field_0000)(local_2c);
    }
    *(undefined4 *)&this_00->field_0xdc = *(undefined4 *)param_1[5];
    *(undefined4 *)&this_00->field_0xe0 = *(undefined4 *)(param_1[5] + 4);
    if (iVar6 != 0) {
      local_2c[4] = 0x51;
      local_18 = (undefined4 *)0x0;
      local_14 = 1;
      (**(code **)this_00->field_0000)(local_2c);
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    break;
  case 0x60:
    if ((local_c->field_001C & 0xf0000000) != 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    uVar7 = (uint)*(ushort *)(param_1 + 6);
    uVar9 = (uint)*(ushort *)((int)param_1 + 0x1a);
    if ((((((local_c->field_001C & 0xffffff) == 0) && (local_c->field_0088 == 0)) &&
         (local_c->field_00D8 == 0)) ||
        (((iVar6 = local_c->field_0024, (int)uVar7 < iVar6 ||
          (local_c->field_002C + iVar6 <= (int)uVar7)) ||
         ((iVar11 = local_c->field_0028, (int)uVar9 < iVar11 ||
          (local_c->field_0030 + iVar11 <= (int)uVar9)))))) ||
       ((((iVar2 = local_c->field_012C, iVar2 != 0 && (iVar2 != -1)) &&
         (bVar5 = FUN_006b55c0(iVar2,local_c->field_0130,uVar7 - iVar6,uVar9 - iVar11),
         CONCAT31(extraout_var_03,bVar5) == 0)) ||
        ((this_00->field_004C == 0 && (this_00->field_009C == 0)))))) {
      iVar6 = local_8;
      if (this_00->field_0080 != 0) {
        if ((this_00->field_0070 == 0) ||
           (iVar6 = FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x60), local_8 = iVar6,
           iVar6 == 0)) {
          this_00->field_0080 = 0;
          iVar6 = local_8;
        }
        else {
          RaiseInternalException(iVar6,DAT_007ed77c,s_E__Ourlib_Scontrol_cpp_007f10c0,0xc6);
          this_00->field_0080 = 0;
        }
      }
      this_00->field_0084 = 0;
      if (this_00->field_00D0 != 0) {
        if ((this_00->field_00C0 != 0) &&
           (iVar6 = FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0xb0), iVar6 != 0)) {
          local_8 = iVar6;
          RaiseInternalException(iVar6,DAT_007ed77c,s_E__Ourlib_Scontrol_cpp_007f10c0,0xcc);
        }
        this_00->field_00D0 = 0;
      }
      this_00->field_00D4 = 0;
      g_currentExceptionFrame = local_70.previous;
      return iVar6;
    }
    iVar6 = local_8;
    if (this_00->field_004C != 0) {
      if (this_00->field_005C == 0) {
        if (this_00->field_0080 == 0) {
          iVar6 = FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x3c);
          local_8 = iVar6;
          if (iVar6 != 0) {
            RaiseInternalException(iVar6,DAT_007ed77c,s_E__Ourlib_Scontrol_cpp_007f10c0,0xb2);
          }
          this_00->field_0080 = 1;
        }
      }
      else {
        if (this_00->field_0084 == 0) {
          this_00->field_0080 = 0;
        }
        DVar8 = timeGetTime();
        this_00->field_0084 = DVar8;
        iVar6 = local_8;
      }
    }
    if (this_00->field_009C == 0) {
      g_currentExceptionFrame = local_70.previous;
      return iVar6;
    }
    if (this_00->field_00AC != 0) {
      if (this_00->field_00D4 == 0) {
        this_00->field_00D0 = 0;
      }
      DVar8 = timeGetTime();
      this_00->field_00D4 = DVar8;
      g_currentExceptionFrame = local_70.previous;
      return iVar6;
    }
    if (this_00->field_00D0 != 0) {
      g_currentExceptionFrame = local_70.previous;
      return iVar6;
    }
    iVar6 = FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x8c);
    if (iVar6 == 0) goto cf_common_exit_0072BE89;
    iVar11 = 0xbf;
LAB_0072be83:
    local_8 = iVar6;
    RaiseInternalException(iVar6,DAT_007ed77c,s_E__Ourlib_Scontrol_cpp_007f10c0,iVar11);
cf_common_exit_0072BE89:
    this_00->field_00D0 = 1;
    g_currentExceptionFrame = local_70.previous;
    return iVar6;
  }
  g_currentExceptionFrame = local_70.previous;
  return local_8;
}

