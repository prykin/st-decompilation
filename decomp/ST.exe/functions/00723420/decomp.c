
/* Recovered from embedded debug metadata:
   E:\Ourlib\_stab.cpp
   TabClassTy::GetMessage */

int __thiscall TabClassTy::GetMessage(TabClassTy *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  TabClassTy *this_00;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar7;
  int iVar8;
  undefined3 extraout_var_01;
  DWORD DVar9;
  undefined3 extraout_var_02;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 unaff_ESI;
  uint uVar12;
  void *unaff_EDI;
  InternalExceptionFrame local_bc;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  TabClassTy *local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  int local_18;
  uint local_10;
  undefined4 *local_c;
  int local_8;
  
  local_8 = 0;
  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  local_38 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_38;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_bc.previous;
    iVar5 = ReportDebugMessage(s_E__Ourlib__stab_cpp_007f0bac,0x163,0,iVar5,&DAT_007a4ccc,
                               s_TabClassTy__GetMessage_Error___007f0b8c);
    if (iVar5 == 0) {
      RaiseInternalException(0xffff,0,s_E__Ourlib__stab_cpp_007f0bac,0x164);
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
cf_common_join_00723D89:
      local_8 = 0xffff;
    }
    else {
      local_38->field_0074 = *local_c;
      iVar5 = 0;
      puVar10 = local_c + 2;
      puVar6 = (undefined4 *)&local_38->field_0x24;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar6 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar6 = puVar6 + 1;
      }
      local_38->field_0040 = local_38;
      puVar10 = local_c + 10;
      puVar6 = (undefined4 *)&local_38->field_0x44;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar6 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar6 = puVar6 + 1;
      }
      local_38->field_0060 = local_38;
      piVar7 = (int *)local_c[0x12];
      iVar8 = *piVar7;
      while (iVar8 != 0) {
        piVar1 = piVar7 + 0x1c;
        piVar7 = piVar7 + 0x1c;
        iVar5 = iVar5 + 1;
        iVar8 = *piVar1;
      }
      uVar12 = (iVar5 + 1) * 0x70;
      puVar6 = Library::DKW::LIB::FUN_006aac10(uVar12);
      this_00->field_0064 = puVar6;
      puVar10 = (undefined4 *)local_c[0x12];
      for (uVar12 = uVar12 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar6 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      this_00->field_0068 = local_c[0x13];
      this_00->field_0070 = local_c[1];
      iVar5 = FUN_007233f0((int)this_00);
      if (-1 < iVar5) {
        *(undefined4 *)(iVar5 * 0x70 + 4 + this_00->field_0064) = 1;
      }
      piVar7 = (int *)this_00->field_0064;
      if (*piVar7 != 0) {
        iVar5 = 0;
        do {
          piVar7[0x11] = 0;
          *(undefined4 *)(this_00->field_0064 + 0x4c + iVar5) = 0;
          iVar5 = iVar5 + 0x70;
          piVar7 = (int *)(this_00->field_0064 + iVar5);
        } while (*piVar7 != 0);
      }
      this_00->field_001C = (uint)(local_c[0x14] == 0);
      this_00->field_0020 = (uint)(local_c[0x15] == 0);
      this_00->field_0074 = this_00->field_0074 | 0x70000000;
      iVar5 = FUN_006e4d40((void *)this_00->field_0010,this_00->field_000C);
      if (iVar5 == 1) {
        local_28 = this_00->field_0008;
        local_24 = 2;
        local_20 = 8;
        local_8 = (**(code **)this_00->field_0000)(&local_30);
      }
    }
    break;
  case 3:
    iVar5 = FUN_006e4d40((void *)local_38->field_0010,local_38->field_000C);
    if (iVar5 == 1) {
      local_28 = this_00->field_0008;
      local_24 = 2;
      local_20 = 9;
      (**(code **)this_00->field_0000)(&local_30);
    }
    if (this_00->field_0064 != 0) {
      FUN_006ab060(&this_00->field_0064);
    }
    break;
  case 5:
    if (((local_38->field_0074 & 0xf0000000) == 0) &&
       (piVar7 = (int *)local_38->field_0064, *piVar7 != 0)) {
      iVar5 = 0;
      do {
        iVar8 = (**(code **)(this_00->field_0000 + 4))((int)piVar7 + iVar5);
        if (iVar8 != 0) goto cf_common_join_00723D89;
        piVar7 = (int *)this_00->field_0064;
        iVar5 = iVar5 + 0x70;
      } while (*(int *)((int)piVar7 + iVar5) != 0);
    }
    break;
  case 6:
    if (((*param_1 != local_38->field_0008) || (param_1[1] != 2)) && (local_38->field_0020 != 0)) {
      piVar7 = (int *)local_38->field_0064;
      piVar1 = (int *)param_1[5];
      if (*piVar7 != 0) {
        iVar5 = 0;
LAB_00723833:
        if ((*(int *)((int)piVar7 + iVar5 + 0x1c) != 0) ||
           (bVar4 = FUN_00753090(*(int *)((int)piVar7 + iVar5 + 0xc),
                                 *(int *)((int)piVar7 + iVar5 + 0x10),
                                 *(int *)((int)piVar7 + iVar5 + 0x14),
                                 *(int *)((int)piVar7 + iVar5 + 0x18),*piVar1,piVar1[1],piVar1[2],
                                 piVar1[3]), CONCAT31(extraout_var,bVar4) == 0)) goto LAB_00723867;
        piVar7 = (int *)this_00->field_0064;
        this_00->field_0074 = this_00->field_0074 | 0x80000000;
        this_00->field_0018 = this_00->field_0018 + 1;
        iVar5 = 0;
        if (*piVar7 != 0) {
          iVar8 = 0;
          do {
            if (*(int *)((int)piVar7 + iVar8 + 0x44) != 0) {
              *(undefined4 *)((int)piVar7 + iVar8 + 0x44) = 0;
              if (*(int *)(this_00->field_0064 + 0x60 + iVar8) != 0) {
                local_8 = FUN_006e5fe0(this_00,(undefined4 *)(this_00->field_0064 + iVar8 + 0x50));
              }
            }
            piVar7 = (int *)this_00->field_0064;
            iVar8 = iVar8 + 0x70;
            iVar5 = iVar5 + 1;
          } while (*(int *)((int)piVar7 + iVar8) != 0);
        }
        *(undefined4 *)(iVar5 * 0x70 + 0x4c + this_00->field_0064) = 0;
        break;
      }
    }
    break;
  case 7:
    if (((local_38->field_0074 & 0x80000000) != 0) &&
       ((*param_1 != local_38->field_0008 || (param_1[1] != 2)))) {
      piVar7 = (int *)local_38->field_0064;
      piVar1 = (int *)param_1[5];
      if (*piVar7 != 0) {
        iVar5 = 0;
        do {
          if (((*(int *)((int)piVar7 + iVar5 + 0x1c) == 0) &&
              (bVar4 = FUN_00753090(*(int *)((int)piVar7 + iVar5 + 0xc),
                                    *(int *)((int)piVar7 + iVar5 + 0x10),
                                    *(int *)((int)piVar7 + iVar5 + 0x14),
                                    *(int *)((int)piVar7 + iVar5 + 0x18),*piVar1,piVar1[1],piVar1[2]
                                    ,piVar1[3]), CONCAT31(extraout_var_00,bVar4) != 0)) &&
             (this_00->field_0018 != 0)) {
            iVar5 = this_00->field_0018 + -1;
            this_00->field_0018 = iVar5;
            if (iVar5 == 0) {
              piVar7 = (int *)this_00->field_0064;
              this_00->field_0074 = this_00->field_0074 & 0x7fffffff;
              if (*piVar7 != 0) {
                iVar5 = 0;
                goto LAB_00723991;
              }
            }
            break;
          }
          piVar7 = (int *)this_00->field_0064;
          iVar5 = iVar5 + 0x70;
        } while (*(int *)((int)piVar7 + iVar5) != 0);
      }
    }
    break;
  case 8:
    if ((local_38->field_0074 & 0x70000000) != 0) {
      local_38->field_0074 = local_38->field_0074 & 0x8fffffff;
      if ((local_38->field_001C != 0) && (piVar7 = (int *)local_38->field_0064, *piVar7 != 0)) {
        iVar5 = 0;
        do {
          if (*(int *)((int)piVar7 + iVar5 + 0x1c) == 0) {
            local_48 = *(undefined4 *)((int)piVar7 + iVar5 + 0xc);
            local_44 = *(undefined4 *)((int)piVar7 + iVar5 + 0x10);
            local_40 = *(undefined4 *)((int)piVar7 + iVar5 + 0x14);
            local_3c = *(undefined4 *)((int)piVar7 + iVar5 + 0x18);
            local_1c = &local_48;
            local_24 = 0xf;
            local_20 = 6;
            local_8 = FUN_006e5fe0(this_00,&local_30);
          }
          piVar7 = (int *)this_00->field_0064;
          iVar5 = iVar5 + 0x70;
        } while (*(int *)((int)piVar7 + iVar5) != 0);
      }
      local_1c = (undefined4 *)this_00->field_0008;
      local_20 = 0x13;
      local_18 = 0;
      iVar5 = FUN_006e6000(this_00,3,1,&local_30);
      if (iVar5 != 0) goto cf_common_join_00723D89;
      if (((this_00->field_0074 & 0xf0000000) == 0) &&
         (piVar7 = (int *)this_00->field_0064, *piVar7 != 0)) {
        iVar5 = 0;
        do {
          iVar8 = (**(code **)(this_00->field_0000 + 4))((int)piVar7 + iVar5);
          if (iVar8 != 0) goto cf_common_join_00723D89;
          piVar7 = (int *)this_00->field_0064;
          iVar5 = iVar5 + 0x70;
        } while (*(int *)((int)piVar7 + iVar5) != 0);
      }
    }
    break;
  case 9:
    if ((local_38->field_0074 & 0x70000000) == 0) {
      piVar7 = (int *)local_38->field_0064;
      if (*piVar7 != 0) {
        iVar5 = 0;
        do {
          if (*(int *)((int)piVar7 + iVar5 + 0x1c) == 0) {
            local_68 = *(undefined4 *)((int)piVar7 + iVar5 + 0xc);
            local_64 = *(undefined4 *)((int)piVar7 + iVar5 + 0x10);
            local_60 = *(undefined4 *)((int)piVar7 + iVar5 + 0x14);
            local_5c = *(undefined4 *)((int)piVar7 + iVar5 + 0x18);
            local_30 = this_00->field_0008;
            local_1c = &local_68;
            local_2c = 2;
            local_24 = 0xf;
            local_20 = 7;
            local_8 = FUN_006e5fe0(this_00,&local_30);
          }
          piVar7 = (int *)this_00->field_0064;
          iVar5 = iVar5 + 0x70;
        } while (*(int *)((int)piVar7 + iVar5) != 0);
      }
      piVar7 = (int *)this_00->field_0064;
      if (*piVar7 != 0) {
        iVar5 = 0;
        do {
          if (*(int *)((int)piVar7 + iVar5 + 0x44) != 0) {
            *(undefined4 *)((int)piVar7 + iVar5 + 0x44) = 0;
            iVar8 = this_00->field_0064 + iVar5;
            if (*(int *)(iVar8 + 0x60) != 0) {
              local_8 = FUN_006e5fe0(this_00,(undefined4 *)(iVar8 + 0x50));
            }
          }
          iVar5 = iVar5 + 0x70;
          *(undefined4 *)(this_00->field_0064 + -0x24 + iVar5) = 0;
          piVar7 = (int *)this_00->field_0064;
        } while (*(int *)((int)piVar7 + iVar5) != 0);
      }
      local_1c = (undefined4 *)this_00->field_0008;
      local_20 = 0x14;
      FUN_006e6000(this_00,3,1,&local_30);
      this_00->field_0074 = this_00->field_0074 | 0x70000000;
    }
    break;
  case 0x20:
    uVar12 = param_1[5];
    local_38->field_0074 = local_38->field_0074 & 0xff000000 | uVar12;
    if (((uVar12 & 0xffffff) == 0) && (piVar7 = (int *)local_38->field_0064, *piVar7 != 0)) {
      iVar5 = 0;
      do {
        if (*(int *)((int)piVar7 + iVar5 + 0x44) != 0) {
          *(undefined4 *)((int)piVar7 + iVar5 + 0x44) = 0;
          iVar8 = this_00->field_0064 + iVar5;
          if (*(int *)(iVar8 + 0x60) != 0) {
            local_8 = FUN_006e5fe0(this_00,(undefined4 *)(iVar8 + 0x50));
          }
        }
        piVar7 = (int *)this_00->field_0064;
        iVar5 = iVar5 + 0x70;
      } while (*(int *)((int)piVar7 + iVar5) != 0);
    }
    break;
  case 0x21:
    param_1[5] = local_38->field_0074;
    break;
  case 0x22:
    iVar5 = FUN_007233f0((int)local_38);
    if (-1 < iVar5) {
      *(undefined4 *)(this_00->field_0064 + 4 + iVar5 * 0x70) = 0;
      iVar5 = (**(code **)(this_00->field_0000 + 4))(this_00->field_0064 + iVar5 * 0x70);
      if (iVar5 != 0) goto cf_common_join_00723D89;
    }
    this_00->field_0068 = param_1[5];
    iVar5 = FUN_007233f0((int)this_00);
    if (-1 < iVar5) {
      iVar5 = iVar5 * 0x70;
      *(undefined4 *)(this_00->field_0064 + 4 + iVar5) = 1;
      iVar8 = (**(code **)(this_00->field_0000 + 4))(this_00->field_0064 + iVar5);
      if (iVar8 != 0) goto cf_common_join_00723D89;
      if ((short)param_1[6] == 0) {
        *(int *)&this_00->field_0x38 = this_00->field_0064 + iVar5;
        iVar5 = FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x24);
        goto joined_r0x00723c77;
      }
    }
    break;
  case 0x23:
    puVar11 = (uint *)local_38->field_0064;
    iVar5 = 0;
    uVar12 = *puVar11;
    if (uVar12 != 0) {
      do {
        if (uVar12 == *(ushort *)(param_1 + 5)) {
          iVar5 = iVar5 * 0x70;
          *(uint *)(local_38->field_0064 + 4 + iVar5) = (uint)*(ushort *)((int)param_1 + 0x16);
          iVar8 = local_38->field_0064 + iVar5;
          if ((*(int *)(iVar8 + 4) == 2) && (*(int *)(iVar8 + 0x44) != 0)) {
            *(undefined4 *)(iVar8 + 0x44) = 0;
            if (*(int *)(local_38->field_0064 + 0x60 + iVar5) != 0) {
              local_8 = FUN_006e5fe0(local_38,(undefined4 *)(local_38->field_0064 + iVar5 + 0x50));
            }
          }
          iVar5 = (**(code **)(this_00->field_0000 + 4))(this_00->field_0064 + iVar5);
          goto joined_r0x00723c77;
        }
        uVar12 = puVar11[0x1c];
        puVar11 = puVar11 + 0x1c;
        iVar5 = iVar5 + 1;
      } while (uVar12 != 0);
    }
    break;
  case 0x24:
    uVar12 = local_38->field_0074;
    if ((uVar12 & 0x80000000) == 0) {
      if (((uVar12 & 0x70000000) == 0) && (piVar7 = (int *)local_38->field_0064, *piVar7 != 0)) {
        iVar5 = 0;
        do {
          if (*(int *)((int)piVar7 + iVar5 + 0x1c) == 0) {
            local_78 = *(undefined4 *)((int)piVar7 + iVar5 + 0xc);
            local_74 = *(undefined4 *)((int)piVar7 + iVar5 + 0x10);
            local_70 = *(undefined4 *)((int)piVar7 + iVar5 + 0x14);
            local_6c = *(undefined4 *)((int)piVar7 + iVar5 + 0x18);
            local_30 = this_00->field_0008;
            local_1c = &local_78;
            local_2c = 2;
            local_24 = 0xf;
            local_20 = 7;
            FUN_006e5fe0(this_00,&local_30);
          }
          piVar7 = (int *)this_00->field_0064;
          iVar5 = iVar5 + 0x70;
        } while (*(int *)((int)piVar7 + iVar5) != 0);
      }
    }
    else {
      local_38->field_0018 = 0;
      local_38->field_0074 = uVar12 & 0x7fffffff;
    }
    piVar7 = (int *)this_00->field_0064;
    if (*piVar7 != 0) {
      iVar5 = 0;
      do {
        piVar7[3] = piVar7[3] + (int)(short)param_1[5];
        piVar7 = (int *)(this_00->field_0064 + 0x10 + iVar5);
        piVar1 = (int *)(this_00->field_0064 + 0x10 + iVar5);
        iVar5 = iVar5 + 0x70;
        *piVar1 = *piVar7 + (int)*(short *)((int)param_1 + 0x16);
        piVar7 = (int *)(this_00->field_0064 + iVar5);
      } while (*piVar7 != 0);
    }
    if ((((this_00->field_0074 & 0x70000000) == 0) && (this_00->field_001C != 0)) &&
       (piVar7 = (int *)this_00->field_0064, *piVar7 != 0)) {
      iVar5 = 0;
      do {
        if (*(int *)((int)piVar7 + iVar5 + 0x1c) == 0) {
          local_58 = *(undefined4 *)((int)piVar7 + iVar5 + 0xc);
          local_54 = *(undefined4 *)((int)piVar7 + iVar5 + 0x10);
          local_50 = *(undefined4 *)((int)piVar7 + iVar5 + 0x14);
          local_4c = *(undefined4 *)((int)piVar7 + iVar5 + 0x18);
          local_1c = &local_58;
          local_24 = 0xf;
          local_20 = 6;
          local_8 = FUN_006e5fe0(this_00,&local_30);
        }
        piVar7 = (int *)this_00->field_0064;
        iVar5 = iVar5 + 0x70;
      } while (*(int *)((int)piVar7 + iVar5) != 0);
    }
    piVar7 = (int *)this_00->field_0064;
    if (*piVar7 != 0) {
      iVar5 = 0;
      do {
        if (*(int *)((int)piVar7 + iVar5 + 0x44) != 0) {
          *(undefined4 *)((int)piVar7 + iVar5 + 0x44) = 0;
          if (*(int *)(this_00->field_0064 + 0x60 + iVar5) != 0) {
            local_8 = FUN_006e5fe0(this_00,(undefined4 *)(this_00->field_0064 + iVar5 + 0x50));
          }
        }
        iVar5 = iVar5 + 0x70;
        *(undefined4 *)(this_00->field_0064 + -0x24 + iVar5) = 0;
        piVar7 = (int *)this_00->field_0064;
      } while (*(int *)((int)piVar7 + iVar5) != 0);
    }
    local_28 = 1;
    local_24 = 3;
    local_20 = 0x15;
    local_18 = FUN_006e5fe0(this_00,&local_30);
    if (local_18 == 0) {
      local_20 = 0x60;
      (**(code **)this_00->field_0000)(&local_30);
    }
    g_currentExceptionFrame = local_bc.previous;
    return 0;
  case 0x25:
    param_1[5] = local_38->field_0068;
    break;
  case 0x2d:
    iVar5 = FUN_007233f0((int)local_38);
    if (-1 < iVar5) {
      *(undefined4 *)(this_00->field_0064 + 4 + iVar5 * 0x70) = 0;
      iVar5 = (**(code **)(this_00->field_0000 + 4))(this_00->field_0064 + iVar5 * 0x70);
      if (iVar5 != 0) goto cf_common_join_00723D89;
    }
    this_00->field_0068 = param_1[5];
    iVar5 = FUN_007233f0((int)this_00);
    if (-1 < iVar5) {
      *(undefined4 *)(this_00->field_0064 + 4 + iVar5 * 0x70) = 1;
      iVar5 = (**(code **)(this_00->field_0000 + 4))(this_00->field_0064 + iVar5 * 0x70);
joined_r0x00723c77:
      if (iVar5 != 0) goto cf_common_join_00723D89;
    }
  }
  goto switchD_00723488_caseD_4;
LAB_00723867:
  piVar7 = (int *)this_00->field_0064;
  iVar5 = iVar5 + 0x70;
  if (*(int *)((int)piVar7 + iVar5) == 0) goto switchD_00723488_caseD_4;
  goto LAB_00723833;
cf_break_loop_00724056:
  local_8 = 0xffff;
  goto switchD_00723db1_caseD_1;
  while( true ) {
    piVar7 = (int *)this_00->field_0064;
    iVar5 = iVar5 + 0x70;
    if (*(int *)((int)piVar7 + iVar5) == 0) break;
LAB_00723991:
    iVar8 = (**(code **)(this_00->field_0000 + 4))((int)piVar7 + iVar5);
    if (iVar8 != 0) goto cf_common_join_00723D89;
  }
switchD_00723488_caseD_4:
  if (this_00->field_0074 == 1) {
    switch(param_1[4]) {
    case 0:
      piVar7 = (int *)this_00->field_0064;
      if (*piVar7 != 0) {
        iVar5 = 0;
        do {
          if ((*(int *)(iVar5 + 0x48 + (int)piVar7) != 0) &&
             (*(int *)(iVar5 + 0x4c + (int)piVar7) != 0)) {
            iVar8 = iVar5 + this_00->field_0064;
            DVar9 = timeGetTime();
            if (((uint)(*(int *)(iVar8 + 0x4c) + *(int *)(iVar8 + 0x48)) <= DVar9) &&
               (*(int *)(iVar8 + 0x44) == 0)) {
              *(undefined4 *)(iVar8 + 0x44) = 1;
              if (*(int *)(iVar5 + 0x34 + this_00->field_0064) != 0) {
                local_8 = FUN_006e5fe0(this_00,(undefined4 *)(iVar5 + this_00->field_0064 + 0x24));
              }
            }
          }
          piVar7 = (int *)this_00->field_0064;
          iVar5 = iVar5 + 0x70;
        } while (*(int *)(iVar5 + (int)piVar7) != 0);
      }
      break;
    case 0x2b:
      *(undefined2 *)(param_1 + 5) = *(undefined2 *)&this_00->field_0x6c;
      break;
    case 0x60:
      puVar10 = (undefined4 *)(uint)*(ushort *)(param_1 + 6);
      local_10 = (uint)*(ushort *)((int)param_1 + 0x1a);
      piVar7 = (int *)this_00->field_0064;
      *(undefined4 *)&this_00->field_0x6c = 0;
      local_c = puVar10;
      if (*piVar7 != 0) {
        iVar5 = 0;
        do {
          iVar8 = *(int *)((int)piVar7 + iVar5 + 0xc);
          if ((((((int)puVar10 < iVar8) ||
                (*(int *)((int)piVar7 + iVar5 + 0x14) + iVar8 <= (int)puVar10)) ||
               (iVar8 = *(int *)((int)piVar7 + iVar5 + 0x10), (int)local_10 < iVar8)) ||
              (*(int *)((int)piVar7 + iVar5 + 0x18) + iVar8 <= (int)local_10)) ||
             (((iVar2 = *(int *)((int)piVar7 + iVar5 + 0x1c), iVar2 != 0 && (iVar2 != -1)) &&
              (bVar4 = FUN_006b55c0(iVar2,*(int *)((int)piVar7 + iVar5 + 0x20),
                                    (int)local_c - *(int *)((int)piVar7 + iVar5 + 0xc),
                                    local_10 - iVar8), puVar10 = local_c,
              CONCAT31(extraout_var_01,bVar4) == 0)))) {
            if (*(int *)(this_00->field_0064 + 0x44 + iVar5) != 0) {
              *(undefined4 *)(this_00->field_0064 + 0x44 + iVar5) = 0;
              iVar8 = this_00->field_0064 + iVar5;
              if (*(int *)(iVar8 + 0x60) != 0) {
                local_8 = FUN_006e5fe0(this_00,(undefined4 *)(iVar8 + 0x50));
              }
            }
            *(undefined4 *)(this_00->field_0064 + 0x4c + iVar5) = 0;
            if ((this_00->field_0070 != 0) &&
               (piVar7 = (int *)(this_00->field_0064 + iVar5),
               *(int *)(this_00->field_0064 + 4 + iVar5) == 3)) {
              piVar7[1] = (uint)(*piVar7 == this_00->field_0068);
              iVar8 = (**(code **)(this_00->field_0000 + 4))(this_00->field_0064 + iVar5);
joined_r0x00723f55:
              if (iVar8 != 0) goto cf_break_loop_00724056;
            }
          }
          else {
            *(undefined4 *)&this_00->field_0x6c = 1;
            iVar8 = this_00->field_0064 + iVar5;
            if (*(int *)(this_00->field_0064 + 4 + iVar5) != 2) {
              if (*(int *)(iVar8 + 0x34) != 0) {
                if (*(int *)(iVar8 + 0x48) == 0) {
                  *(undefined4 *)(iVar8 + 0x44) = 1;
                  local_8 = FUN_006e5fe0(this_00,(undefined4 *)(this_00->field_0064 + 0x24 + iVar5))
                  ;
                }
                else {
                  if (*(int *)(iVar8 + 0x4c) == 0) {
                    *(undefined4 *)(iVar8 + 0x44) = 0;
                  }
                  DVar9 = timeGetTime();
                  *(DWORD *)(this_00->field_0064 + 0x4c + iVar5) = DVar9;
                }
              }
              if (this_00->field_0070 != 0) {
                *(uint *)(this_00->field_0064 + iVar5 + 8) =
                     (uint)(*(int *)(this_00->field_0064 + iVar5) == this_00->field_0068);
                *(undefined4 *)(this_00->field_0064 + 4 + iVar5) = 3;
                iVar8 = (**(code **)(this_00->field_0000 + 4))(this_00->field_0064 + iVar5);
                goto joined_r0x00723f55;
              }
            }
          }
          piVar7 = (int *)this_00->field_0064;
          iVar5 = iVar5 + 0x70;
        } while (*(int *)((int)piVar7 + iVar5) != 0);
      }
      break;
    case 0x61:
      local_34 = 0;
      puVar10 = (undefined4 *)(uint)*(ushort *)(param_1 + 6);
      local_10 = (uint)*(ushort *)((int)param_1 + 0x1a);
      piVar7 = (int *)this_00->field_0064;
      local_c = puVar10;
      if (*piVar7 != 0) {
        iVar5 = 0;
        do {
          iVar8 = *(int *)(iVar5 + 0xc + (int)piVar7);
          if (((((iVar8 <= (int)puVar10) &&
                ((int)puVar10 < *(int *)(iVar5 + 0x14 + (int)piVar7) + iVar8)) &&
               (iVar8 = *(int *)(iVar5 + 0x10 + (int)piVar7), iVar8 <= (int)local_10)) &&
              ((int)local_10 < *(int *)(iVar5 + 0x18 + (int)piVar7) + iVar8)) &&
             ((((iVar2 = *(int *)(iVar5 + 0x1c + (int)piVar7), iVar2 == 0 || (iVar2 == -1)) ||
               (bVar4 = FUN_006b55c0(iVar2,*(int *)(iVar5 + 0x20 + (int)piVar7),
                                     (int)local_c - *(int *)(iVar5 + 0xc + (int)piVar7),
                                     local_10 - iVar8), puVar10 = local_c,
               CONCAT31(extraout_var_02,bVar4) != 0)) &&
              ((this_00->field_0068 != *(int *)(this_00->field_0064 + iVar5) &&
               (*(int *)(this_00->field_0064 + iVar5 + 4) != 2)))))) {
            iVar5 = FUN_007233f0((int)this_00);
            if (-1 < iVar5) {
              *(undefined4 *)(iVar5 * 0x70 + 4 + this_00->field_0064) = 0;
              iVar5 = (**(code **)(this_00->field_0000 + 4))(iVar5 * 0x70 + this_00->field_0064);
              if (iVar5 != 0) goto cf_break_loop_00724056;
              iVar8 = local_34 * 0x70;
              puVar10 = (undefined4 *)(this_00->field_0064 + iVar8);
              this_00->field_0068 = *puVar10;
              puVar10[1] = 1;
              iVar5 = (**(code **)(this_00->field_0000 + 4))(this_00->field_0064 + iVar8);
              if (iVar5 == 0) {
                *(int *)&this_00->field_0x38 = this_00->field_0064 + iVar8;
                iVar5 = FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x24);
                if (iVar5 != 0) {
                  local_8 = 0xffff;
                }
              }
              else {
                local_8 = 0xffff;
              }
            }
            break;
          }
          iVar5 = iVar5 + 0x70;
          local_34 = local_34 + 1;
          piVar7 = (int *)this_00->field_0064;
        } while (*(int *)(iVar5 + (int)piVar7) != 0);
      }
    }
  }
switchD_00723db1_caseD_1:
  if (local_8 != 0) {
    RaiseInternalException(local_8,DAT_007ed77c,s_E__Ourlib__stab_cpp_007f0bac,0x15f);
  }
  iVar5 = FUN_006e5fd0();
  if (iVar5 != 0) {
    local_8 = iVar5;
    RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib__stab_cpp_007f0bac,0x161);
  }
  g_currentExceptionFrame = local_bc.previous;
  return iVar5;
}

