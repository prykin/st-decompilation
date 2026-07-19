
/* Recovered from embedded debug metadata:
   E:\Ourlib\_slist.cpp
   ListClassTy::GetMessage */

int __thiscall ListClassTy::GetMessage(ListClassTy *this,int *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  ListClassTy *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  int *piVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  InternalExceptionFrame local_9c;
  int local_58 [8];
  int local_38;
  ListClassTy *local_34;
  int local_30;
  int local_2c [5];
  undefined1 *local_18;
  uint local_14;
  int local_c;
  undefined4 *local_8;
  
  local_c = 0;
  local_9c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_9c;
  local_34 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_9c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_34;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_9c.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib__slist_cpp_007f0ae4,0x239,0,iVar4,&DAT_007a4ccc,
                               s_ListClassTy__GetMessage_Error___007f0ac4);
    if (iVar4 != 0) {
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    RaiseInternalException(0xffff,0,s_E__Ourlib__slist_cpp_007f0ae4,0x23a);
    return 0xffff;
  }
  switch(param_1[4]) {
  case 2:
    puVar2 = (undefined4 *)param_1[5];
    local_8 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)&local_34->field_0x134 = puVar2[1];
      local_34->field_001C = *puVar2;
      local_34->field_0024 = puVar2[2];
      local_34->field_0028 = puVar2[3];
      local_34->field_002C = puVar2[4];
      local_34->field_0030 = puVar2[5];
      local_34->field_0204 = puVar2[6];
      local_34->field_0208 = puVar2[7];
      uVar13 = puVar2[0x134];
      local_34->field_01EC = uVar13;
      local_34->field_01F0 = uVar13;
      puVar8 = puVar2 + 8;
      puVar10 = (undefined4 *)&local_34->field_0x140;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      local_34->field_015C = local_34;
      puVar8 = puVar2 + 0x10;
      puVar10 = (undefined4 *)&local_34->field_0x160;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      local_34->field_019C = local_34;
      puVar8 = puVar2 + 0x18;
      puVar10 = (undefined4 *)&local_34->field_0x180;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      local_34->field_017C = local_34;
      puVar8 = puVar2 + 0x28;
      puVar10 = (undefined4 *)&local_34->field_0x3c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      local_34->field_0058 = local_34;
      puVar8 = puVar2 + 0x20;
      puVar10 = (undefined4 *)&local_34->field_0x1a0;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      local_34->field_01BC = local_34;
      puVar8 = puVar2 + 0x30;
      puVar10 = (undefined4 *)&local_34->field_0x1c0;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      local_34->field_01DC = local_34;
      puVar8 = puVar2 + 0x38;
      puVar10 = (undefined4 *)&local_34->field_00DC;
      for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      local_34->field_013C = 0;
      *(undefined4 *)&local_34->field_0x138 = 0;
      local_34->field_0034 = (uint)(puVar2[0x132] == 0);
      local_34->field_0038 = (uint)(puVar2[0x133] == 0);
      if (puVar2[0x4b] != 0) {
        puVar2[0x4c] = 0;
        puVar2[0x54] = local_34->field_0008;
        puVar2[0x55] = 2;
        puVar2[0x56] = 0x2f;
        iVar4 = (**(code **)(*(int *)local_34->field_000C + 8))
                          (puVar2[0x4b],&local_34->field_01E0,0,puVar2 + 0x4c,0);
        if (iVar4 != 0) goto cf_common_join_0071FE89;
      }
      if (puVar2[0xab] != 0) {
        puVar2[0xb4] = this_00->field_0008;
        puVar2[0xb5] = 2;
        puVar2[0xb6] = 0x30;
        iVar4 = (**(code **)(*(int *)this_00->field_000C + 8))
                          (puVar2[0xab],&this_00->field_01E4,0,puVar2 + 0xac,0);
        if (iVar4 != 0) goto cf_common_join_0071FE89;
      }
      if (puVar2[0x10b] != 0) {
        uVar13 = this_00->field_0008;
        puVar2[0x119] = 2;
        puVar2[0x118] = uVar13;
        puVar2[0x11a] = 0x2c;
        puVar2[0x12e] = this_00->field_0204;
        puVar2[0x12f] = *(undefined4 *)&this_00->field_0x138;
        iVar4 = (**(code **)(*(int *)this_00->field_000C + 8))
                          (puVar2[0x10b],&this_00->field_01E8,0,puVar2 + 0x10c,0);
        if (iVar4 != 0) goto cf_common_join_0071FE89;
      }
      if ((this_00->field_001C == 0) || (this_00->field_0204 == 0)) {
        local_2c[4] = 0x20;
        local_18 = (undefined1 *)0x0;
        (**(code **)this_00->field_0000)(local_2c);
      }
      break;
    }
    goto cf_common_join_0071FE89;
  case 3:
    if (local_34->field_01E0 != 0) {
      FUN_006e56b0((void *)local_34->field_000C,local_34->field_01E0);
    }
    if (this_00->field_01E4 != 0) {
      FUN_006e56b0((void *)this_00->field_000C,this_00->field_01E4);
    }
    if (this_00->field_01E8 != 0) {
      FUN_006e56b0((void *)this_00->field_000C,this_00->field_01E8);
    }
    break;
  case 8:
    if ((local_34->field_001C & 0x70000000) != 0) {
      local_18 = (undefined1 *)local_34->field_0008;
      local_14 = -(uint)(local_34->field_01EC != 0) & 2;
      local_2c[2] = 1;
      local_2c[3] = 3;
      local_2c[4] = 0x13;
      iVar4 = FUN_006e5fe0(local_34,local_2c);
      if (iVar4 != 0) goto cf_common_join_0071FE89;
      if ((((this_00->field_00DC & 8) != 0) && (*(int *)&this_00->field_0xe0 != 0)) ||
         (this_00->field_0xe0 != '\0')) {
        this_00->field_00F0 = this_00->field_0008;
        this_00->field_00F4 = 2;
        this_00->field_00F8 = 0x2d;
        local_2c[4] = 0x10;
        local_18 = &this_00->field_00DC;
        iVar4 = FUN_006e5fe0(this_00,local_2c);
        if (iVar4 != 0) goto cf_common_join_0071FE89;
        this_00->field_0128 = 1;
      }
      if (((this_00->field_001C & 0xffffff) == 1) && (this_00->field_01B0 != 0)) {
        this_00->field_01B4 = *(undefined4 *)&this_00->field_0x138;
        FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x1a0);
      }
    }
    break;
  case 9:
    if ((local_34->field_001C & 0x70000000) == 0) {
      local_18 = (undefined1 *)local_34->field_0008;
      local_14 = -(uint)(local_34->field_01EC != 0) & 2;
      local_2c[2] = 1;
      local_2c[3] = 3;
      local_2c[4] = 0x14;
      iVar4 = FUN_006e5fe0(local_34,local_2c);
      if (iVar4 != 0) goto cf_common_join_0071FE89;
      if ((((this_00->field_00DC & 8) != 0) && (*(int *)&this_00->field_0xe0 != 0)) ||
         (this_00->field_0xe0 != '\0')) {
        local_2c[4] = 0x11;
        local_18 = &this_00->field_00DC;
        iVar4 = FUN_006e5fe0(this_00,local_2c);
        if (iVar4 != 0) goto cf_common_join_0071FE89;
        this_00->field_0128 = 0;
      }
    }
    break;
  case 0x20:
    local_2c[4] = 0x20;
    local_18 = (undefined1 *)(local_34->field_001C & 0xff000000 | param_1[5]);
    local_34->field_001C = local_18;
    if (local_34->field_01E8 != 0) {
      FUN_006e6080(local_34,0x80000002,local_34->field_01E8,local_2c);
    }
    if ((this_00->field_001C & 0xffffff) == 0) {
      local_18 = (undefined1 *)0x0;
      if (this_00->field_01E0 != 0) {
        FUN_006e6080(this_00,0x80000002,this_00->field_01E0,local_2c);
      }
      iVar4 = this_00->field_01E4;
      if (iVar4 != 0) {
        piVar9 = local_2c;
        uVar13 = 0x80000002;
LAB_0071fe77:
        FUN_006e6080(this_00,uVar13,iVar4,piVar9);
      }
    }
    else {
      if (this_00->field_01E0 != 0) {
        local_18 = (undefined1 *)(uint)(*(int *)&this_00->field_0x138 != 0);
        FUN_006e6080(this_00,0x80000002,this_00->field_01E0,local_2c);
      }
      iVar4 = this_00->field_01E4;
      if (iVar4 != 0) {
        piVar9 = local_2c;
        local_18 = (undefined1 *)(uint)(*(int *)&this_00->field_0x138 < this_00->field_0204 + -1);
        uVar13 = 0x80000002;
        goto LAB_0071fe77;
      }
    }
    goto LAB_0071fe7e;
  case 0x22:
    iVar4 = param_1[5];
    if (iVar4 < (int)local_34->field_0204) {
      piVar9 = param_1;
      piVar12 = local_58;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar12 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar12 = piVar12 + 1;
      }
      *(int *)&this_00->field_0x138 = iVar4;
      if (this_00->field_01B0 != 0) {
        this_00->field_01B4 = iVar4;
        FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x1a0);
      }
      if (*(short *)((int)param_1 + 0x1a) != 0) {
        iVar6 = 0;
        iVar4 = 0;
        if (0 < (int)this_00->field_0204) {
          do {
            iVar11 = (**(code **)(this_00->field_0000 + 8))
                               (iVar4,iVar4 == *(int *)&this_00->field_0x138);
            if ((int)this_00->field_0030 < iVar11 + iVar6) break;
            iVar6 = iVar6 + this_00->field_0208 + iVar11;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)this_00->field_0204);
        }
        iVar6 = *(int *)&this_00->field_0x138 - iVar4 / 2;
        this_00->field_013C = iVar6;
        if ((int)this_00->field_0204 < iVar6 + iVar4) {
          this_00->field_013C = this_00->field_0204 - iVar4;
        }
        if ((int)this_00->field_013C < 0) {
          this_00->field_013C = 0;
        }
      }
      if (*(int *)&this_00->field_0x138 < (int)this_00->field_013C) {
        this_00->field_013C = *(int *)&this_00->field_0x138;
      }
      do {
        iVar4 = this_00->field_013C;
        iVar6 = *(int *)&this_00->field_0x138;
        iVar11 = 0;
        local_8 = (undefined4 *)0x0;
        if (iVar4 <= iVar6) {
          do {
            iVar5 = (**(code **)(this_00->field_0000 + 8))(iVar4,iVar4 == iVar6);
            if ((int)this_00->field_0030 < iVar5 + iVar11) {
              local_8 = (undefined4 *)0x1;
              this_00->field_013C = this_00->field_013C + 1;
              break;
            }
            iVar6 = *(int *)&this_00->field_0x138;
            iVar11 = iVar11 + this_00->field_0208 + iVar5;
            iVar4 = iVar4 + 1;
          } while (iVar4 <= iVar6);
        }
      } while (local_8 != (undefined4 *)0x0);
      if ((this_00->field_001C & 0xffffff) != 0) {
        if (this_00->field_01E0 != 0) {
          local_2c[4] = 0x20;
          local_18 = (undefined1 *)(uint)(*(int *)&this_00->field_0x138 != 0);
          FUN_006e6080(this_00,2,this_00->field_01E0,local_2c);
        }
        if (this_00->field_01E4 != 0) {
          local_18 = (undefined1 *)(uint)(*(int *)&this_00->field_0x138 < this_00->field_0204 + -1);
          local_2c[4] = 0x20;
          FUN_006e6080(this_00,2,this_00->field_01E4,local_2c);
        }
      }
      iVar4 = this_00->field_01E8;
      if (iVar4 != 0) {
        piVar9 = local_58;
        uVar13 = 2;
        goto LAB_0071fe77;
      }
      goto LAB_0071fe7e;
    }
    break;
  case 0x24:
    iVar4 = local_34->field_01E0;
    piVar9 = param_1;
    piVar12 = local_2c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar12 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar12 = piVar12 + 1;
    }
    if (iVar4 != 0) {
      FUN_006e6080(local_34,2,iVar4,local_2c);
    }
    if (this_00->field_01E4 != 0) {
      FUN_006e6080(this_00,2,this_00->field_01E4,local_2c);
    }
    if (this_00->field_01E8 != 0) {
      FUN_006e6080(this_00,2,this_00->field_01E8,local_2c);
    }
    break;
  case 0x26:
    param_1[5] = *(int *)&local_34->field_0x138;
    break;
  case 0x27:
    param_1[5] = local_34->field_013C;
    break;
  case 0x28:
    local_38 = local_34->field_0204;
    local_30 = local_34->field_013C;
    puVar2 = *(undefined4 **)&local_34->field_0x138;
    piVar9 = param_1;
    piVar12 = local_2c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar12 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar12 = piVar12 + 1;
    }
    local_34->field_0204 = param_1[5];
    *(undefined4 *)&local_34->field_0x138 = 0;
    local_34->field_013C = 0;
    local_8 = puVar2;
    if (local_34->field_01B0 != 0) {
      local_34->field_01B4 = 0;
      FUN_006e5fe0(local_34,(undefined4 *)&local_34->field_0x1a0);
    }
    if (this_00->field_01E8 != 0) {
      FUN_006e6080(this_00,2,this_00->field_01E8,local_2c);
    }
    iVar4 = this_00->field_0204;
    if (iVar4 == 0) {
      local_2c[4] = 0x20;
      local_18 = (undefined1 *)0x0;
      (**(code **)this_00->field_0000)(local_2c);
      iVar4 = (**(code **)(this_00->field_0000 + 4))();
    }
    else {
      if ((short)param_1[6] != 0) {
        if ((int)local_8 < 0) {
          *(undefined4 *)&this_00->field_0x138 = 0;
        }
        else if ((int)local_8 < iVar4) {
          *(undefined4 **)&this_00->field_0x138 = local_8;
        }
        else {
          *(int *)&this_00->field_0x138 = iVar4 + -1;
        }
        if (((local_30 < 0) || (iVar4 <= local_30)) || (local_8 == (undefined4 *)(local_38 + -1))) {
          this_00->field_013C = 0;
        }
        else {
          this_00->field_013C = local_30;
        }
        if (*(int *)&this_00->field_0x138 < (int)this_00->field_013C) {
          this_00->field_013C = *(int *)&this_00->field_0x138;
        }
        do {
          iVar4 = this_00->field_013C;
          iVar6 = *(int *)&this_00->field_0x138;
          iVar11 = 0;
          local_8 = (undefined4 *)0x0;
          if (iVar4 <= iVar6) {
            do {
              iVar5 = (**(code **)(this_00->field_0000 + 8))(iVar4,iVar4 == iVar6);
              if ((int)this_00->field_0030 < iVar5 + iVar11) {
                local_8 = (undefined4 *)0x1;
                this_00->field_013C = this_00->field_013C + 1;
                break;
              }
              iVar6 = *(int *)&this_00->field_0x138;
              iVar11 = iVar11 + this_00->field_0208 + iVar5;
              iVar4 = iVar4 + 1;
            } while (iVar4 <= iVar6);
          }
        } while (local_8 != (undefined4 *)0x0);
        piVar9 = local_2c;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar9 = 0;
          piVar9 = piVar9 + 1;
        }
        local_2c[4] = 0x22;
        local_18 = (undefined1 *)(uint)*(ushort *)&this_00->field_0x138;
        if (this_00->field_01E8 != 0) {
          FUN_006e6080(this_00,2,this_00->field_01E8,local_2c);
        }
        if (this_00->field_01B0 != 0) {
          this_00->field_01B4 = *(undefined4 *)&this_00->field_0x138;
          FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x1a0);
        }
      }
      if ((this_00->field_001C & 0xffffff) != 0) {
        if (this_00->field_01E8 != 0) {
          local_18 = (undefined1 *)(uint)(1 < (int)this_00->field_0204);
          local_2c[4] = 0x20;
          FUN_006e6080(this_00,0x80000002,this_00->field_01E8,local_2c);
        }
        if (this_00->field_01E0 != 0) {
          local_2c[4] = 0x20;
          local_18 = (undefined1 *)(uint)(*(int *)&this_00->field_0x138 != 0);
          FUN_006e6080(this_00,0x80000002,this_00->field_01E0,local_2c);
        }
        if (this_00->field_01E4 != 0) {
          local_18 = (undefined1 *)(uint)(*(int *)&this_00->field_0x138 < this_00->field_0204 + -1);
          local_2c[4] = 0x20;
          FUN_006e6080(this_00,0x80000002,this_00->field_01E4,local_2c);
        }
      }
      iVar4 = (**(code **)(this_00->field_0000 + 4))();
    }
    goto LAB_0071fe85;
  case 0x55:
    local_34->field_01F0 = 1;
    break;
  case 0x56:
    local_34->field_01F0 = 0;
    break;
  case 0x5a:
    local_34->field_00F8 = 0x2c;
    local_34->field_0110 = local_34->field_0008;
    local_34->field_00F0 = local_34->field_0008;
    local_34->field_0118 = 0x2e;
    local_34->field_0114 = 2;
    local_34->field_00F4 = 2;
    break;
  case 0x5c:
    uVar1 = *(ushort *)(param_1 + 5);
    local_34->field_013C = (uint)uVar1;
    if (*(int *)&local_34->field_0x138 < (int)(uint)uVar1) {
      local_34->field_013C = *(int *)&local_34->field_0x138;
    }
    do {
      iVar4 = this_00->field_013C;
      iVar6 = *(int *)&this_00->field_0x138;
      iVar11 = 0;
      local_8 = (undefined4 *)0x0;
      if (iVar4 <= iVar6) {
        do {
          iVar5 = (**(code **)(this_00->field_0000 + 8))(iVar4,iVar4 == iVar6);
          if ((int)this_00->field_0030 < iVar5 + iVar11) {
            local_8 = (undefined4 *)0x1;
            this_00->field_013C = this_00->field_013C + 1;
            break;
          }
          iVar6 = *(int *)&this_00->field_0x138;
          iVar11 = iVar11 + this_00->field_0208 + iVar5;
          iVar4 = iVar4 + 1;
        } while (iVar4 <= iVar6);
      }
    } while (local_8 != (undefined4 *)0x0);
LAB_0071fe7e:
    iVar4 = (**(code **)(this_00->field_0000 + 4))();
LAB_0071fe85:
    if (iVar4 != 0) {
cf_common_join_0071FE89:
      local_c = 0xffff;
    }
  }
  if (this_00->field_001C != 1) goto switchD_0071feee_caseD_2e;
  switch(param_1[4]) {
  case 0x2b:
    *(undefined2 *)(param_1 + 5) = 0;
    if (this_00->field_01F4 != 0) {
      *(short *)(param_1 + 5) = (short)this_00->field_01F4;
      break;
    }
    local_2c[3] = 2;
    local_2c[4] = 0x2b;
    if (this_00->field_01E0 == 0) {
LAB_00720766:
      if (this_00->field_01E4 != 0) {
        local_2c[2] = this_00->field_01E4;
        FUN_006e6060(this_00,local_2c);
        if ((short)local_18 != 0) goto LAB_007207a4;
      }
      if (this_00->field_01E8 == 0) break;
      local_2c[2] = this_00->field_01E8;
      FUN_006e6060(this_00,local_2c);
      if ((short)local_18 == 0) break;
    }
    else {
      local_2c[2] = this_00->field_01E0;
      FUN_006e6060(this_00,local_2c);
      if ((short)local_18 == 0) goto LAB_00720766;
    }
LAB_007207a4:
    *(undefined2 *)(param_1 + 5) = 1;
    break;
  case 0x2c:
    iVar4 = param_1[5];
    *(int *)&this_00->field_0x138 = iVar4;
    if (this_00->field_01B0 != 0) {
      this_00->field_01B4 = iVar4;
      FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x1a0);
    }
    if (this_00->field_01E0 != 0) {
      local_2c[4] = 0x20;
      local_18 = (undefined1 *)(uint)(*(int *)&this_00->field_0x138 != 0);
      FUN_006e6080(this_00,2,this_00->field_01E0,local_2c);
    }
    if (this_00->field_01E4 != 0) {
      local_18 = (undefined1 *)(uint)(*(int *)&this_00->field_0x138 < this_00->field_0204 + -1);
      local_2c[4] = 0x20;
      FUN_006e6080(this_00,2,this_00->field_01E4,local_2c);
    }
    if (*(int *)&this_00->field_0x138 < (int)this_00->field_013C) {
      this_00->field_013C = *(int *)&this_00->field_0x138;
    }
    do {
      iVar4 = this_00->field_013C;
      iVar6 = *(int *)&this_00->field_0x138;
      iVar11 = 0;
      local_8 = (undefined4 *)0x0;
      if (iVar4 <= iVar6) {
        do {
          iVar5 = (**(code **)(this_00->field_0000 + 8))(iVar4,iVar4 == iVar6);
          if ((int)this_00->field_0030 < iVar5 + iVar11) {
            local_8 = (undefined4 *)0x1;
            this_00->field_013C = this_00->field_013C + 1;
            break;
          }
          iVar6 = *(int *)&this_00->field_0x138;
          iVar11 = iVar11 + this_00->field_0208 + iVar5;
          iVar4 = iVar4 + 1;
        } while (iVar4 <= iVar6);
      }
    } while (local_8 != (undefined4 *)0x0);
    goto LAB_00720240;
  case 0x2d:
    this_00->field_0194 = *(undefined4 *)&this_00->field_0x138;
    iVar4 = FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x180);
    if (iVar4 != 0) {
      local_c = 0xffff;
    }
    break;
  case 0x30:
    goto switchD_0071feee_caseD_30;
  case 0x60:
    local_8 = (undefined4 *)(uint)*(ushort *)((int)param_1 + 0x1a);
    if ((((int)(uint)*(ushort *)(param_1 + 6) < (int)this_00->field_0024) ||
        ((int)(this_00->field_002C + this_00->field_0024) <= (int)(uint)*(ushort *)(param_1 + 6)))
       || (((int)local_8 < (int)this_00->field_0028 ||
           ((int)(this_00->field_0030 + this_00->field_0028) <= (int)local_8)))) {
      this_00->field_01F4 = 0;
    }
    else if ((((this_00->field_0x134 & 1) != 0) && (this_00->field_01F8 != 0)) &&
            ((*(byte *)(param_1 + 5) & 1) != 0)) {
      iVar4 = this_00->field_013C;
      iVar6 = 0;
      if (iVar4 < (int)this_00->field_0204) {
        do {
          iVar11 = (**(code **)(this_00->field_0000 + 8))
                             (iVar4,iVar4 == *(int *)&this_00->field_0x138);
          iVar11 = iVar11 + this_00->field_0208;
          if ((this_00->field_0028 + iVar6 <= (int)local_8) &&
             ((int)local_8 <= this_00->field_0028 + iVar11 + iVar6)) {
            iVar6 = *(int *)&this_00->field_0x138;
            if ((this_00->field_01FC == iVar6) &&
               (uVar7 = iVar4 - iVar6 >> 0x1f, (iVar4 - iVar6 ^ uVar7) - uVar7 == 1)) {
              this_00->field_0200 = 1;
              this_00->field_01D4 = (short)iVar4;
              this_00->field_01D6 = (short)iVar6;
              FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x1c0);
              this_00->field_01FC = iVar4;
              *(int *)&this_00->field_0x138 = iVar4;
              if (this_00->field_01B0 != 0) {
                this_00->field_01B4 = iVar4;
                FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x1a0);
              }
              if (this_00->field_01E0 != 0) {
                local_2c[4] = 0x20;
                local_18 = (undefined1 *)(uint)(*(int *)&this_00->field_0x138 != 0);
                FUN_006e6080(this_00,2,this_00->field_01E0,local_2c);
              }
              if (this_00->field_01E4 != 0) {
                local_18 = (undefined1 *)
                           (uint)(*(int *)&this_00->field_0x138 < this_00->field_0204 + -1);
                local_2c[4] = 0x20;
                FUN_006e6080(this_00,2,this_00->field_01E4,local_2c);
              }
              if (this_00->field_01E8 != 0) {
                local_18 = *(undefined1 **)&this_00->field_0x138;
                local_2c[4] = 0x22;
                FUN_006e6080(this_00,2,this_00->field_01E8,local_2c);
              }
              iVar4 = (**(code **)(this_00->field_0000 + 4))();
              if (iVar4 != 0) {
                local_c = 0xffff;
              }
            }
            break;
          }
          iVar6 = iVar6 + iVar11;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)this_00->field_0204);
      }
    }
    break;
  case 0x61:
    local_8 = (undefined4 *)(uint)*(ushort *)((int)param_1 + 0x1a);
    if (((((int)this_00->field_0024 <= (int)(uint)*(ushort *)(param_1 + 6)) &&
         ((int)(uint)*(ushort *)(param_1 + 6) < (int)(this_00->field_002C + this_00->field_0024)))
        && ((int)this_00->field_0028 <= (int)local_8)) &&
       ((int)local_8 < (int)(this_00->field_0030 + this_00->field_0028))) {
      iVar4 = this_00->field_013C;
      iVar6 = 0;
      if (iVar4 < (int)this_00->field_0204) {
        do {
          iVar11 = (**(code **)(this_00->field_0000 + 8))
                             (iVar4,iVar4 == *(int *)&this_00->field_0x138);
          iVar11 = iVar11 + this_00->field_0208;
          if ((this_00->field_0028 + iVar6 <= (int)local_8) &&
             ((int)local_8 <= this_00->field_0028 + iVar11 + iVar6)) {
            this_00->field_01FC = iVar4;
            this_00->field_01F8 = 1;
            this_00->field_0200 = 0;
            break;
          }
          iVar6 = iVar6 + iVar11;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)this_00->field_0204);
      }
    }
    break;
  case 0x62:
    local_8 = (undefined4 *)(uint)*(ushort *)((int)param_1 + 0x1a);
    if ((((((int)this_00->field_0024 <= (int)(uint)*(ushort *)(param_1 + 6)) &&
          ((int)(uint)*(ushort *)(param_1 + 6) < (int)(this_00->field_002C + this_00->field_0024)))
         && ((int)this_00->field_0028 <= (int)local_8)) &&
        (((int)local_8 < (int)(this_00->field_0030 + this_00->field_0028) &&
         (this_00->field_01F8 != 0)))) && (this_00->field_0200 == 0)) {
      iVar4 = this_00->field_013C;
      iVar6 = 0;
      if (iVar4 < (int)this_00->field_0204) {
        do {
          iVar11 = (**(code **)(this_00->field_0000 + 8))
                             (iVar4,iVar4 == *(int *)&this_00->field_0x138);
          iVar11 = iVar11 + this_00->field_0208;
          if ((this_00->field_0028 + iVar6 <= (int)local_8) &&
             ((int)local_8 <= this_00->field_0028 + iVar11 + iVar6)) {
            if (iVar4 != this_00->field_01FC) goto LAB_007204f7;
            if (iVar4 == *(int *)&this_00->field_0x138) {
              this_00->field_0194 = *(int *)&this_00->field_0x138;
              iVar4 = FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x180);
              if (iVar4 == 0) goto LAB_007204e5;
            }
            else {
              *(int *)&this_00->field_0x138 = iVar4;
              if (this_00->field_01B0 != 0) {
                this_00->field_01B4 = iVar4;
                FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x1a0);
              }
              if (this_00->field_01E0 != 0) {
                local_2c[4] = 0x20;
                local_18 = (undefined1 *)(uint)(*(int *)&this_00->field_0x138 != 0);
                FUN_006e6080(this_00,2,this_00->field_01E0,local_2c);
              }
              if (this_00->field_01E4 != 0) {
                local_18 = (undefined1 *)
                           (uint)(*(int *)&this_00->field_0x138 < this_00->field_0204 + -1);
                local_2c[4] = 0x20;
                FUN_006e6080(this_00,2,this_00->field_01E4,local_2c);
              }
              if (this_00->field_01E8 != 0) {
                local_18 = *(undefined1 **)&this_00->field_0x138;
                local_2c[4] = 0x22;
                FUN_006e6080(this_00,2,this_00->field_01E8,local_2c);
              }
              if ((this_00->field_0x134 & 3) != 0) {
                this_00->field_0194 = *(undefined4 *)&this_00->field_0x138;
                iVar4 = FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x180);
                if (iVar4 != 0) goto LAB_007204f0;
              }
LAB_007204e5:
              iVar4 = (**(code **)(this_00->field_0000 + 4))();
              if (iVar4 == 0) goto LAB_007204f7;
            }
LAB_007204f0:
            local_c = 0xffff;
            goto LAB_007204f7;
          }
          iVar6 = iVar6 + iVar11;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)this_00->field_0204);
        this_00->field_01F8 = 0;
        break;
      }
    }
LAB_007204f7:
    this_00->field_01F8 = 0;
    break;
  case 0x67:
    if ((this_00->field_01EC == 0) || (this_00->field_01F0 == 0)) break;
  case 0x2f:
    if ((*(int *)&this_00->field_0x138 == this_00->field_0204 + -1) && (this_00->field_01E4 != 0)) {
      local_2c[4] = 0x20;
      local_18 = (undefined1 *)0x1;
      FUN_006e6080(this_00,2,this_00->field_01E4,local_2c);
    }
    if (0 < *(int *)&this_00->field_0x138) {
      *(int *)&this_00->field_0x138 = *(int *)&this_00->field_0x138 + -1;
    }
    if (this_00->field_01B0 != 0) {
      this_00->field_01B4 = *(undefined4 *)&this_00->field_0x138;
      FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x1a0);
    }
    if ((*(int *)&this_00->field_0x138 == 0) && (this_00->field_01E0 != 0)) {
      local_2c[4] = 0x20;
      local_18 = (undefined1 *)0x0;
      FUN_006e6080(this_00,2,this_00->field_01E0,local_2c);
    }
    if (this_00->field_01E8 != 0) {
      local_18 = *(undefined1 **)&this_00->field_0x138;
      local_2c[4] = 0x22;
      FUN_006e6080(this_00,2,this_00->field_01E8,local_2c);
    }
    if (*(int *)&this_00->field_0x138 < (int)this_00->field_013C) {
      this_00->field_013C = *(int *)&this_00->field_0x138;
    }
LAB_00720240:
    iVar4 = (**(code **)(this_00->field_0000 + 4))();
    if (iVar4 != 0) {
      local_c = 0xffff;
    }
    break;
  case 0x68:
    if ((this_00->field_01EC == 0) || (this_00->field_01F0 == 0)) break;
    goto switchD_0071feee_caseD_30;
  }
switchD_0071feee_caseD_2e:
  if (local_c != 0) {
    RaiseInternalException(local_c,DAT_007ed77c,s_E__Ourlib__slist_cpp_007f0ae4,0x235);
  }
  iVar4 = ControlClassTy::GetMessage((ControlClassTy *)this_00,param_1);
  if (iVar4 != 0) {
    local_c = iVar4;
    RaiseInternalException(iVar4,DAT_007ed77c,s_E__Ourlib__slist_cpp_007f0ae4,0x237);
  }
  g_currentExceptionFrame = local_9c.previous;
  return iVar4;
switchD_0071feee_caseD_30:
  if ((*(int *)&this_00->field_0x138 == 0) && (this_00->field_01E0 != 0)) {
    local_2c[4] = 0x20;
    local_18 = (undefined1 *)0x1;
    FUN_006e6080(this_00,2,this_00->field_01E0,local_2c);
  }
  if (*(int *)&this_00->field_0x138 < this_00->field_0204 + -1) {
    *(int *)&this_00->field_0x138 = *(int *)&this_00->field_0x138 + 1;
  }
  if (this_00->field_01B0 != 0) {
    this_00->field_01B4 = *(undefined4 *)&this_00->field_0x138;
    FUN_006e5fe0(this_00,(undefined4 *)&this_00->field_0x1a0);
  }
  if ((*(int *)&this_00->field_0x138 == this_00->field_0204 + -1) && (this_00->field_01E4 != 0)) {
    local_2c[4] = 0x20;
    local_18 = (undefined1 *)0x0;
    FUN_006e6080(this_00,2,this_00->field_01E4,local_2c);
  }
  if (this_00->field_01E8 != 0) {
    local_18 = *(undefined1 **)&this_00->field_0x138;
    local_2c[4] = 0x22;
    FUN_006e6080(this_00,2,this_00->field_01E8,local_2c);
  }
  do {
    iVar4 = this_00->field_013C;
    iVar6 = *(int *)&this_00->field_0x138;
    iVar11 = 0;
    local_8 = (undefined4 *)0x0;
    if (iVar4 <= iVar6) {
      do {
        iVar5 = (**(code **)(this_00->field_0000 + 8))(iVar4,iVar4 == iVar6);
        if ((int)this_00->field_0030 < iVar5 + iVar11) {
          local_8 = (undefined4 *)0x1;
          this_00->field_013C = this_00->field_013C + 1;
          break;
        }
        iVar6 = *(int *)&this_00->field_0x138;
        iVar11 = iVar11 + this_00->field_0208 + iVar5;
        iVar4 = iVar4 + 1;
      } while (iVar4 <= iVar6);
    }
  } while (local_8 != (undefined4 *)0x0);
  goto LAB_00720240;
}

