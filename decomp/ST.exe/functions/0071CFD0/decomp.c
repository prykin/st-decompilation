
/* Recovered from embedded debug metadata:
   E:\Ourlib\_sbutton.cpp
   ButtonClassTy::GetMessage */

int __thiscall ButtonClassTy::GetMessage(ButtonClassTy *this,int *param_1)

{
  int iVar1;
  code *pcVar2;
  ButtonClassTy *this_00;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  InternalExceptionFrame local_74;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  ButtonClassTy *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_8 = 0;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib__sbutton_cpp_007f0a30,0x1aa,0,iVar4,&DAT_007a4ccc,
                               s_ButtonClassTy__GetMessage_Error___007f0a0c);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    RaiseInternalException(0xffff,0,s_E__Ourlib__sbutton_cpp_007f0a30,0x1ab);
    return 0xffff;
  }
  switch(param_1[4]) {
  case 2:
    local_c = (undefined4 *)param_1[5];
    if (local_c != (undefined4 *)0x0) {
      local_10->field_0020 = local_c[1];
      local_10->field_001C = *local_c;
      local_10->field_0024 = local_c[2];
      local_10->field_0028 = local_c[3];
      local_10->field_002C = local_c[4];
      local_10->field_0030 = local_c[5];
      puVar9 = local_c + 6;
      puVar10 = (undefined4 *)&local_10->field_0x134;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      local_10->field_0150 = local_10;
      puVar9 = local_c + 0xe;
      puVar10 = (undefined4 *)&local_10->field_0x154;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      local_10->field_0170 = local_10;
      puVar9 = local_c + 0x16;
      puVar10 = (undefined4 *)&local_10->field_0x178;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      local_10->field_0194 = local_10;
      puVar9 = local_c + 0x1e;
      puVar10 = (undefined4 *)&local_10->field_0x3c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      local_10->field_0058 = local_10;
      puVar9 = local_c + 0x27;
      puVar10 = (undefined4 *)&local_10->field_0x60;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      local_10->field_007C = local_10;
      local_10->field_005C = local_c[0x26];
      local_10->field_0088 = local_c[0x2f];
      puVar9 = local_c + 0x30;
      puVar10 = (undefined4 *)&local_10->field_0x8c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      local_10->field_00A8 = local_10;
      puVar9 = local_c + 0x39;
      puVar10 = (undefined4 *)&local_10->field_0xb0;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      local_10->field_00CC = local_10;
      local_10->field_00AC = local_c[0x38];
      local_10->field_00D8 = local_c[0x41];
      local_10->field_012C = local_c[0x49];
      local_10->field_0130 = local_c[0x4a];
      local_10->field_0034 = (uint)(local_c[0x42] == 0);
      local_10->field_0038 = (uint)(local_c[0x43] == 0);
      local_10->field_01E0 = local_c[0x5e];
      switch(local_10->field_0020) {
      case 2:
        local_10->field_01A4 = local_c[0x44];
        local_10->field_01A8 = local_c[0x45];
        break;
      case 3:
        local_10->field_01D8 = local_c[0x44];
        local_10->field_01DC = local_c[0x45];
        break;
      case 4:
      case 5:
      case 7:
        local_10->field_01B0 = local_c[0x44];
        local_10->field_01B4 = local_c[0x45];
        local_10->field_01B8 = local_c[0x46];
        local_10->field_01BC = local_c[0x47];
        local_10->field_01A8 = local_c[0x48];
      }
      local_10->field_01E8 = 0;
      uVar5 = FUN_006e51b0(local_10->field_0010);
      this_00->field_01C0 = uVar5;
      this_00->field_01E4 = 0;
      puVar9 = local_c + 0x4b;
      puVar10 = (undefined4 *)&this_00->field_00DC;
      for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      this_00->field_0198 = 0;
      this_00->field_019C = 0;
      this_00->field_01C4 = 0;
      this_00->field_01C8 = 0;
      this_00->field_01CC = 0;
      this_00->field_01D0 = 0;
      break;
    }
    local_8 = 0xffff;
    goto LAB_0071d51b;
  case 6:
    if ((local_10->field_012C != 0) && ((*(byte *)(param_1 + 6) & 1) == 0)) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 8:
    if ((local_10->field_001C & 0x70000000) != 0) {
      local_1c = (undefined1 *)local_10->field_0008;
      local_20 = 0x13;
      local_18 = 0;
      iVar4 = FUN_006e6000(local_10,3,1,local_30);
      if (iVar4 == 0) {
        if ((((this_00->field_00DC & 8) != 0) && (*(int *)&this_00->field_0xe0 != 0)) ||
           (this_00->field_0xe0 != '\0')) {
          this_00->field_0110 = this_00->field_0008;
          this_00->field_00F0 = this_00->field_0008;
          this_00->field_0114 = 2;
          this_00->field_00F4 = 2;
          this_00->field_00F8 = 0x2c;
          this_00->field_0118 = 0x2e;
          local_20 = 0x10;
          local_1c = &this_00->field_00DC;
          local_8 = FUN_006e6000(this_00,3,1,local_30);
          if (local_8 != 0) break;
          this_00->field_0128 = 1;
        }
        this_00->field_01E8 = 0;
        if (this_00->field_012C != 0) {
          this_00->field_001C = this_00->field_001C & 0x8fffffff;
          (**(code **)(this_00->field_0000 + 4))();
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else {
        local_8 = 0xffff;
      }
    }
    break;
  case 9:
    if ((local_10->field_001C & 0x70000000) == 0) {
      local_1c = &local_10->field_00DC;
      if ((((local_10->field_00DC & 8) != 0) && (*(int *)&local_10->field_0xe0 != 0)) ||
         (local_10->field_0xe0 != '\0')) {
        local_20 = 0x11;
        FUN_006e6000(local_10,3,1,local_30);
        this_00->field_0128 = 0;
      }
      local_1c = (undefined1 *)this_00->field_0008;
      local_20 = 0x14;
      FUN_006e6000(this_00,3,1,local_30);
    }
    break;
  case 0x20:
    uVar6 = param_1[5];
    local_10->field_001C = local_10->field_001C & 0xff000000 | uVar6;
    if ((uVar6 & 0xffffff) == 0) {
      if (*(int *)&local_10->field_0x80 != 0) {
        if (*(int *)&local_10->field_0x70 != 0) {
          FUN_006e5fe0(local_10,(undefined4 *)&local_10->field_0x60);
        }
        *(undefined4 *)&this_00->field_0x80 = 0;
      }
      if (*(int *)&this_00->field_0x84 != 0) {
        *(undefined4 *)&this_00->field_0x84 = 0;
      }
    }
    this_00->field_0198 = 0;
    this_00->field_019C = 0;
    this_00->field_01E8 = 0;
    iVar4 = (**(code **)(this_00->field_0000 + 4))();
    if (iVar4 != 0) {
      local_8 = 0xffff;
    }
    break;
  case 0x2b:
    *(undefined2 *)(param_1 + 5) = *(undefined2 *)&local_10->field_01C8;
    break;
  case 0x52:
    local_10->field_002C = (uint)*(ushort *)(param_1 + 5);
    local_10->field_0030 = (uint)*(ushort *)((int)param_1 + 0x16);
    break;
  case 0x5a:
    local_10->field_0114 = 2;
    local_10->field_0110 = local_10->field_0008;
    local_10->field_00F0 = local_10->field_0008;
    local_10->field_00F4 = 2;
    local_10->field_00F8 = 0x2c;
    local_10->field_0118 = 0x2e;
    break;
  case 0x60:
    uVar6 = (uint)*(ushort *)(param_1 + 6);
    uVar8 = (uint)*(ushort *)((int)param_1 + 0x1a);
    iVar4 = local_10->field_0024;
    if ((((((int)uVar6 < iVar4) || (local_10->field_002C + iVar4 <= (int)uVar6)) ||
         (iVar7 = local_10->field_0028, (int)uVar8 < iVar7)) ||
        (local_10->field_0030 + iVar7 <= (int)uVar8)) ||
       (((iVar1 = local_10->field_012C, iVar1 != 0 && (iVar1 != -1)) &&
        (bVar3 = FUN_006b55c0(iVar1,local_10->field_0130,uVar6 - iVar4,uVar8 - iVar7),
        CONCAT31(extraout_var,bVar3) == 0)))) {
      this_00->field_01C8 = 0;
    }
    else {
      this_00->field_01C8 = 1;
    }
  }
LAB_0071d51b:
  uVar6 = this_00->field_001C;
  if ((uVar6 == 0) || ((uVar6 & 0xf0000000) != 0)) goto cf_common_exit_0071DDC0;
  switch(param_1[4]) {
  case 0:
    switch(this_00->field_0020) {
    case 2:
      if (this_00->field_0198 == 0) break;
      iVar4 = FUN_006e51b0(this_00->field_0010);
      if (*(int *)&this_00->field_0x1ac == 0) {
        if ((uint)(iVar4 - this_00->field_01C0) < (uint)this_00->field_01A8) break;
        this_00->field_01E4 = this_00->field_01E4 + 1;
        if (*(int *)&this_00->field_0x174 != 0) {
          *(undefined4 *)&this_00->field_0x168 = this_00->field_001C;
          if (this_00->field_01E0 != 0) {
            *(undefined2 *)&this_00->field_0x16c = *(undefined2 *)&this_00->field_01E4;
          }
          goto LAB_0071dc9d;
        }
        *(undefined4 *)&this_00->field_0x148 = this_00->field_001C;
        if (this_00->field_01E0 != 0) {
          *(undefined2 *)&this_00->field_0x14c = *(undefined2 *)&this_00->field_01E4;
        }
        iVar7 = FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x134);
        if (iVar7 != 0) {
          local_8 = 0xffff;
          break;
        }
      }
      else {
        if ((uint)(iVar4 - this_00->field_01C0) < (uint)this_00->field_01A4) break;
        *(undefined4 *)&this_00->field_0x1ac = 0;
        this_00->field_01E4 = this_00->field_01E4 + 1;
        if (*(int *)&this_00->field_0x174 == 0) {
          *(undefined4 *)&this_00->field_0x148 = this_00->field_001C;
          if (this_00->field_01E0 != 0) {
            *(undefined2 *)&this_00->field_0x14c = *(undefined2 *)&this_00->field_01E4;
          }
          iVar7 = FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x134);
          if (iVar7 != 0) {
            local_8 = 0xffff;
            break;
          }
        }
        else {
          *(undefined4 *)&this_00->field_0x168 = this_00->field_001C;
          if (this_00->field_01E0 != 0) {
            *(undefined2 *)&this_00->field_0x16c = *(undefined2 *)&this_00->field_01E4;
          }
LAB_0071dc9d:
          iVar7 = FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x154);
          if (iVar7 != 0) {
            local_8 = 0xffff;
            break;
          }
        }
      }
      goto LAB_0071ddba;
    default:
      break;
    case 4:
      goto switchD_0071db77_caseD_4;
    case 5:
    case 7:
      if (this_00->field_01C4 == 0) break;
      if ((&this_00->field_01B0)[uVar6] + -1 <= (int)this_00->field_01E8) {
        this_00->field_01E8 = 0;
        this_00->field_01C4 = 0;
        *(undefined4 *)&this_00->field_0x174 = 0;
        if (this_00->field_001C == 1) {
          if (this_00->field_01C8 == 0) {
            this_00->field_01CC = 0;
            goto LAB_0071dd4e;
          }
        }
        else if ((this_00->field_001C == 3) && (this_00->field_01C8 == 0)) {
          this_00->field_001C = 1;
LAB_0071dd4e:
          this_00->field_019C = 0;
        }
        iVar4 = (**(code **)(this_00->field_0000 + 4))();
        if (iVar4 != 0) {
          local_8 = 0xffff;
        }
        break;
      }
switchD_0071db77_caseD_4:
      if ((1 < (int)(&this_00->field_01B0)[uVar6]) &&
         (iVar4 = FUN_006e51b0(this_00->field_0010),
         (uint)this_00->field_01A8 < (uint)(iVar4 - this_00->field_01C0))) {
        if ((int)this_00->field_01E8 < (&this_00->field_01B0)[this_00->field_001C] + -1) {
          iVar7 = this_00->field_01E8 + 1;
        }
        else {
          iVar7 = 0;
        }
        this_00->field_01E8 = iVar7;
        iVar7 = (**(code **)(this_00->field_0000 + 4))();
        if (iVar7 == 0) {
LAB_0071ddba:
          this_00->field_01C0 = iVar4;
        }
        else {
          local_8 = 0xffff;
        }
      }
    }
  default:
    goto cf_common_exit_0071DDC0;
  case 0x2c:
    goto switchD_0071d549_caseD_2c;
  case 0x2e:
    goto switchD_0071d549_caseD_2e;
  case 0x60:
    if (this_00->field_01D0 != 0) goto cf_common_exit_0071DDC0;
    iVar4 = this_00->field_0024;
    uVar6 = (uint)*(ushort *)(param_1 + 6);
    uVar8 = (uint)*(ushort *)((int)param_1 + 0x1a);
    if (((iVar4 <= (int)uVar6) && ((int)uVar6 < this_00->field_002C + iVar4)) &&
       (((iVar7 = this_00->field_0028, iVar7 <= (int)uVar8 &&
         ((int)uVar8 < this_00->field_0030 + iVar7)) &&
        (((iVar1 = this_00->field_012C, iVar1 == 0 || (iVar1 == -1)) ||
         (bVar3 = FUN_006b55c0(iVar1,this_00->field_0130,uVar6 - iVar4,uVar8 - iVar7),
         CONCAT31(extraout_var_00,bVar3) != 0)))))) {
      switch(this_00->field_0020) {
      case 1:
      case 4:
switchD_0071d5d0_caseD_1:
        if (this_00->field_019C == 0) {
          this_00->field_001C = 3;
          this_00->field_01E8 = 0;
          iVar4 = (**(code **)(this_00->field_0000 + 4))();
          if (iVar4 == 0) {
            this_00->field_019C = 1;
            this_00->field_01C4 = 1;
          }
          else {
            local_8 = 0xffff;
          }
        }
        break;
      case 5:
      case 7:
        if (this_00->field_01CC == 0) goto switchD_0071d5d0_caseD_1;
      }
      this_00->field_01C8 = 1;
      if (this_00->field_0198 == 0) {
        *(undefined4 *)&this_00->field_0x1a0 = this_00->field_001C;
      }
      goto cf_common_exit_0071DDC0;
    }
    if (((this_00->field_0198 == 0) && (this_00->field_019C == 0)) && (this_00->field_01C8 == 0))
    goto cf_common_exit_0071DDC0;
    switch(this_00->field_0020) {
    case 3:
      this_00->field_001C = *(undefined4 *)&this_00->field_0x1a0;
      goto LAB_0071d6f7;
    default:
switchD_0071d677_caseD_4:
      this_00->field_001C = 1;
      this_00->field_01E8 = 0;
LAB_0071d6f7:
      this_00->field_019C = 0;
      break;
    case 5:
    case 7:
      this_00->field_01CC = 0;
      if (this_00->field_01C4 == 0) {
        this_00->field_001C = 1;
        this_00->field_019C = 0;
        this_00->field_01E8 = 0;
      }
      break;
    case 6:
      if (*(int *)&this_00->field_0x174 == 0) {
        puVar9 = (undefined4 *)&this_00->field_0x134;
        *(undefined4 *)&this_00->field_0x148 = 1;
      }
      else {
        puVar9 = (undefined4 *)&this_00->field_0x154;
        *(undefined4 *)&this_00->field_0x168 = 1;
      }
      iVar4 = FUN_006e6020(this_00,puVar9);
      if (iVar4 == 0) goto switchD_0071d677_caseD_4;
      local_8 = 0xffff;
    }
    iVar4 = (**(code **)(this_00->field_0000 + 4))();
    if (iVar4 == 0) {
      this_00->field_0198 = 0;
      this_00->field_01C8 = 0;
      *(undefined4 *)&this_00->field_0x174 = 0;
    }
    else {
      local_8 = 0xffff;
    }
    goto cf_common_exit_0071DDC0;
  case 0x61:
    goto switchD_0071d549_caseD_61;
  case 0x62:
    break;
  case 99:
    goto switchD_0071d549_caseD_63;
  case 100:
    uVar6 = (uint)*(ushort *)(param_1 + 6);
    uVar8 = (uint)*(ushort *)((int)param_1 + 0x1a);
    if (*(int *)&this_00->field_0x164 == 0) goto cf_common_exit_0071DDC0;
    iVar4 = this_00->field_0024;
    *(undefined4 *)&this_00->field_0x174 = 0;
    if (((((iVar4 <= (int)uVar6) && ((int)uVar6 <= this_00->field_002C + iVar4)) &&
         (iVar7 = this_00->field_0028, iVar7 <= (int)uVar8)) &&
        ((int)uVar8 <= this_00->field_0030 + iVar7)) &&
       (((iVar1 = this_00->field_012C, iVar1 == 0 || (iVar1 == -1)) ||
        (bVar3 = FUN_006b55c0(iVar1,this_00->field_0130,uVar6 - iVar4,uVar8 - iVar7),
        CONCAT31(extraout_var_03,bVar3) != 0)))) {
      *(undefined4 *)&this_00->field_0x174 = 1;
    }
  }
  iVar4 = this_00->field_0024;
  uVar6 = (uint)*(ushort *)(param_1 + 6);
  uVar8 = (uint)*(ushort *)((int)param_1 + 0x1a);
  if ((((iVar4 <= (int)uVar6) && ((int)uVar6 <= this_00->field_002C + iVar4)) &&
      ((iVar7 = this_00->field_0028, iVar7 <= (int)uVar8 &&
       ((int)uVar8 <= this_00->field_0030 + iVar7)))) &&
     (((iVar1 = this_00->field_012C, iVar1 == 0 || (iVar1 == -1)) ||
      (bVar3 = FUN_006b55c0(iVar1,this_00->field_0130,uVar6 - iVar4,uVar8 - iVar7),
      CONCAT31(extraout_var_04,bVar3) != 0)))) {
switchD_0071d549_caseD_2e:
    if (this_00->field_0198 != 0) {
      if (this_00->field_0020 == 1) {
        this_00->field_001C = (-(uint)(this_00->field_01C8 != 0) & 2) + 1;
      }
      else if (this_00->field_0020 == 3) {
        if ((*(int *)&this_00->field_0x1a0 == 3) && (this_00->field_01D8 != 0)) {
          this_00->field_001C = 3;
        }
        else {
          this_00->field_001C = (-(uint)(*(int *)&this_00->field_0x1a0 != 3) & 2) + 1;
        }
      }
      else {
        this_00->field_001C = 1;
      }
      this_00->field_01E8 = 0;
      this_00->field_01C4 = 1;
      iVar4 = (**(code **)(this_00->field_0000 + 4))();
      if (iVar4 == 0) {
        if (this_00->field_0020 == 2) {
          FUN_006e51b0(this_00->field_0010);
        }
        else if (this_00->field_0020 != 7) {
          if (*(int *)&this_00->field_0x174 == 0) {
            puVar9 = (undefined4 *)&this_00->field_0x134;
            *(undefined4 *)&this_00->field_0x148 = this_00->field_001C;
          }
          else {
            puVar9 = (undefined4 *)&this_00->field_0x154;
            *(undefined4 *)&this_00->field_0x168 = this_00->field_001C;
          }
          iVar4 = FUN_006e6020(this_00,puVar9);
          if (iVar4 != 0) {
            local_8 = 0xffff;
          }
        }
        this_00->field_0198 = 0;
        this_00->field_01CC = 1;
        this_00->field_01D0 = 0;
        *(undefined4 *)&this_00->field_0x174 = 0;
      }
      else {
        local_8 = 0xffff;
      }
    }
  }
  goto cf_common_exit_0071DDC0;
switchD_0071d549_caseD_63:
  if (*(int *)&this_00->field_0x164 == 0) goto cf_common_exit_0071DDC0;
  uVar6 = (uint)*(ushort *)(param_1 + 6);
  uVar8 = (uint)*(ushort *)((int)param_1 + 0x1a);
  iVar4 = this_00->field_0024;
  *(undefined4 *)&this_00->field_0x174 = 0;
  if (((iVar4 <= (int)uVar6) && ((int)uVar6 < this_00->field_002C + iVar4)) &&
     (((iVar7 = this_00->field_0028, iVar7 <= (int)uVar8 &&
       ((int)uVar8 < this_00->field_0030 + iVar7)) &&
      (((iVar1 = this_00->field_012C, iVar1 == 0 || (iVar1 == -1)) ||
       (bVar3 = FUN_006b55c0(iVar1,this_00->field_0130,uVar6 - iVar4,uVar8 - iVar7),
       CONCAT31(extraout_var_01,bVar3) != 0)))))) {
    *(undefined4 *)&this_00->field_0x174 = 1;
    this_00->field_01C8 = 1;
  }
switchD_0071d549_caseD_61:
  iVar4 = this_00->field_0024;
  uVar6 = (uint)*(ushort *)(param_1 + 6);
  uVar8 = (uint)*(ushort *)((int)param_1 + 0x1a);
  if (((((iVar4 <= (int)uVar6) && ((int)uVar6 < this_00->field_002C + iVar4)) &&
       (iVar7 = this_00->field_0028, iVar7 <= (int)uVar8)) &&
      ((int)uVar8 < this_00->field_0030 + iVar7)) &&
     (((iVar1 = this_00->field_012C, iVar1 == 0 || (iVar1 == -1)) ||
      (bVar3 = FUN_006b55c0(iVar1,this_00->field_0130,uVar6 - iVar4,uVar8 - iVar7),
      CONCAT31(extraout_var_02,bVar3) != 0)))) {
    this_00->field_01C8 = 1;
switchD_0071d549_caseD_2c:
    if (this_00->field_0198 == 0) {
      this_00->field_01D0 = (uint)(this_00->field_01C8 == 0);
      switch(this_00->field_0020) {
      case 2:
        *(undefined4 *)&this_00->field_0x1ac = 1;
        uVar5 = FUN_006e51b0(this_00->field_0010);
        this_00->field_01C0 = uVar5;
        this_00->field_01E4 = 0;
        if (*(int *)&this_00->field_0x174 == 0) {
          *(undefined4 *)&this_00->field_0x148 = 2;
          if (this_00->field_01E0 != 0) {
            *(undefined2 *)&this_00->field_0x14c = *(undefined2 *)&this_00->field_01E4;
          }
          iVar4 = FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x134);
          if (iVar4 != 0) {
            local_8 = 0xffff;
          }
        }
        else {
          *(undefined4 *)&this_00->field_0x168 = 2;
          if (this_00->field_01E0 != 0) {
            *(undefined2 *)&this_00->field_0x16c = *(undefined2 *)&this_00->field_01E4;
          }
          iVar4 = FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x154);
          if (iVar4 != 0) {
            local_8 = 0xffff;
          }
        }
        break;
      case 3:
        if ((this_00->field_01DC != 0) && (this_00->field_001C == 3)) goto cf_common_exit_0071DDC0;
        *(undefined4 *)&this_00->field_0x1a0 = this_00->field_001C;
        break;
      case 6:
      case 7:
        if (*(int *)&this_00->field_0x174 == 0) {
          puVar9 = (undefined4 *)&this_00->field_0x134;
          *(undefined4 *)&this_00->field_0x148 = 2;
        }
        else {
          puVar9 = (undefined4 *)&this_00->field_0x154;
          *(undefined4 *)&this_00->field_0x168 = 2;
        }
        iVar4 = FUN_006e6020(this_00,puVar9);
        if (iVar4 == 0) {
          *(undefined4 *)&this_00->field_0x174 = 0;
        }
        else {
          local_8 = 0xffff;
        }
      }
      this_00->field_001C = 2;
      this_00->field_01E8 = 0;
      this_00->field_01C4 = 1;
      iVar4 = (**(code **)(this_00->field_0000 + 4))();
      if (iVar4 == 0) {
        this_00->field_0198 = 1;
      }
      else {
        local_8 = 0xffff;
      }
    }
  }
cf_common_exit_0071DDC0:
  if (local_8 != 0) {
    RaiseInternalException(local_8,DAT_007ed77c,s_E__Ourlib__sbutton_cpp_007f0a30,0x1a6);
  }
  iVar4 = ControlClassTy::GetMessage((ControlClassTy *)this_00,param_1);
  if (iVar4 != 0) {
    local_8 = iVar4;
    RaiseInternalException(iVar4,DAT_007ed77c,s_E__Ourlib__sbutton_cpp_007f0a30,0x1a8);
  }
  g_currentExceptionFrame = local_74.previous;
  return iVar4;
}

