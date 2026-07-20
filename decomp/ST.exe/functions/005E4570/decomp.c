
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::GetMessage */

undefined4 __thiscall MTaskTy::GetMessage(MTaskTy *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  ccFntTy *pcVar3;
  code *pcVar4;
  MTaskTy *this_00;
  byte bVar5;
  DWORD DVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 extraout_ECX;
  uint uVar12;
  undefined3 uVar15;
  UINT UVar13;
  uint uVar14;
  undefined4 extraout_EDX;
  undefined3 uVar16;
  undefined4 unaff_ESI;
  char *pcVar17;
  SpriteClassTy *this_01;
  void *unaff_EDI;
  char *pcVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  InternalExceptionFrame local_68;
  undefined4 *local_24;
  int local_20;
  undefined4 *local_1c;
  MTaskTy *local_18;
  uint *local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  
  local_18 = this;
  DVar6 = FUN_006e51b0(this->field_0010);
  this->field_0065 = DVar6;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar7 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_18;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar20 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x5b5,0,iVar7,
                                &DAT_007a4ccc,s_MTaskTy__GetMessage_007cdca4);
    if (iVar20 != 0) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return uVar11;
    }
    RaiseInternalException(iVar7,0,s_E____titans_Start_task_obj_cpp_007cd994,0x5b5);
    return 0xffff;
  }
  uVar14 = *(uint *)(param_1 + 0x10);
  uVar16 = (undefined3)((uint)extraout_EDX >> 8);
  if (uVar14 < 0x6214) {
    if (uVar14 == 0x6213) {
      PaintBut(local_18,(int *)&local_18->field_0x65f,0x24bc,4,1,*(short *)(param_1 + 0x14));
      FUN_006b35d0(DAT_008075a8,this_00->field_02A9);
      goto cf_common_exit_005E525B;
    }
    if (uVar14 < 0x6201) {
      if (uVar14 == 0x6200) {
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        if (DAT_0080fb6e == 0) {
          thunk_FUN_005b66e0(this_00);
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = 0x6102;
        }
        else {
          this_00->field_004D = 0x7102;
          this_00->field_0049 = 1;
          FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x3d);
        }
        goto cf_common_exit_005E525B;
      }
      switch(uVar14) {
      case 0:
        NoneMTask(local_18);
        break;
      case 2:
        InitMTask(local_18,*(char *)(*(int *)(param_1 + 0x14) + 0x14),
                  *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x18));
        break;
      case 3:
        DoneMTask(local_18);
        break;
      case 5:
        PaintMTask(local_18);
        break;
      case 0x62:
        if (DAT_0080fb6e == 0) {
          if (local_18->field_006D == '\x01') {
            thunk_FUN_005b66e0(local_18);
            uVar14 = 0xffffffff;
            pcVar17 = &DAT_0080ed16;
            do {
              pcVar18 = pcVar17;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar18 = pcVar17 + 1;
              cVar1 = *pcVar17;
              pcVar17 = pcVar18;
            } while (cVar1 != '\0');
            uVar14 = ~uVar14;
            pcVar17 = pcVar18 + -uVar14;
            pcVar18 = (char *)&DAT_0080ee1a;
            for (uVar12 = uVar14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
              pcVar17 = pcVar17 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar18 = *pcVar17;
              pcVar17 = pcVar17 + 1;
              pcVar18 = pcVar18 + 1;
            }
            this_00->field_004D = 0x60ff;
            this_00->field_0049 = 1;
          }
        }
        else {
          local_18->field_004D = 0x7102;
          local_18->field_0049 = 1;
          FUN_006e6020(local_18,(undefined4 *)&local_18->field_0x3d);
        }
        break;
      case 100:
        iVar7 = 1;
        if (local_18->field_006D != '\x01') {
          local_18->field_006D = 5;
          PlayScript(local_18);
          iVar20 = 0x1f;
          do {
            thunk_FUN_00568bc0(&g_sound,iVar7);
            iVar7 = iVar7 + 1;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
          break;
        }
        if (DAT_0080fb6e != 0) {
          local_18->field_004D = 0x7102;
          local_18->field_0049 = 1;
          FUN_006e6020(local_18,(undefined4 *)&local_18->field_0x3d);
          break;
        }
        thunk_FUN_005b66e0(local_18);
        this_00->field_0045 = 0x200;
        this_00->field_0049 = 0;
        this_00->field_004D = (-(uint)(this_00->field_006F != '\x02') & 0x1f) + 0x6103;
        bVar5 = this_00->field_006F;
        if (bVar5 == 2) {
          this_00->field_0051 = 1;
          break;
        }
        goto LAB_005e470e;
      }
    }
    else {
      switch(uVar14) {
      case 0x6201:
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        if (DAT_0080fb6e != 0) {
          this_00->field_004D = 0x7102;
          this_00->field_0049 = 1;
          FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x3d);
          break;
        }
        thunk_FUN_005b66e0(this_00);
        this_00->field_0045 = 0x200;
        this_00->field_0049 = 0;
        this_00->field_004D = (-(uint)(this_00->field_006F != '\x02') & 0x1f) + 0x6103;
        bVar5 = this_00->field_006F;
        if (bVar5 == 2) {
          this_00->field_0051 = 1;
          break;
        }
LAB_005e470e:
        this_00->field_0051 = (uint)bVar5;
        break;
      case 0x6202:
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        if (DAT_0080fb6e == 0) {
          this_00->field_0049 = 1;
          if (this_00->field_006E == '\x01') {
            this_00->field_004D = 0x6108;
            thunk_FUN_005b66e0(this_00);
          }
          else {
            uVar14 = 0xffffffff;
            pcVar17 = &DAT_0080ed16;
            do {
              pcVar18 = pcVar17;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar18 = pcVar17 + 1;
              cVar1 = *pcVar17;
              pcVar17 = pcVar18;
            } while (cVar1 != '\0');
            uVar14 = ~uVar14;
            pcVar17 = pcVar18 + -uVar14;
            pcVar18 = (char *)&DAT_0080ee1a;
            for (uVar12 = uVar14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
              pcVar17 = pcVar17 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar18 = *pcVar17;
              pcVar17 = pcVar17 + 1;
              pcVar18 = pcVar18 + 1;
            }
            this_00->field_004D = 0x60ff;
            thunk_FUN_005b66e0(this_00);
          }
        }
        else {
          this_00->field_004D = 0x7102;
          this_00->field_0049 = 1;
          FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x3d);
        }
        break;
      case 0x6203:
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        this_00->field_007C = 0;
        this_00->field_0061 = this_00->field_0069;
        DarkScreen(DAT_0080759c,1,0);
        iVar7 = this_00->field_064F;
        if (iVar7 != 0) {
          uVar14 = 0;
          if (*(int *)(iVar7 + 0xc) != 0) {
            if (*(int *)(iVar7 + 0xc) == 0) {
              puVar10 = (uint *)0x0;
              goto LAB_005e48f3;
            }
            do {
              puVar10 = (uint *)(*(int *)(iVar7 + 8) * uVar14 + *(int *)(iVar7 + 0x1c));
LAB_005e48f3:
              TTaskItemClose(this_00,puVar10);
              iVar7 = this_00->field_064F;
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(uint *)(iVar7 + 0xc));
          }
        }
        iVar7 = this_00->field_0647;
        if (iVar7 != 0) {
          uVar14 = 0;
          if (*(int *)(iVar7 + 0xc) != 0) {
            if (*(int *)(iVar7 + 0xc) == 0) {
              puVar10 = (uint *)0x0;
              goto LAB_005e492f;
            }
            do {
              puVar10 = (uint *)(*(int *)(iVar7 + 8) * uVar14 + *(int *)(iVar7 + 0x1c));
LAB_005e492f:
              TTaskItemClose(this_00,puVar10);
              iVar7 = this_00->field_0647;
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(uint *)(iVar7 + 0xc));
          }
        }
        iVar7 = this_00->field_064B;
        if (iVar7 != 0) {
          uVar14 = 0;
          if (*(int *)(iVar7 + 0xc) != 0) {
            if (*(int *)(iVar7 + 0xc) == 0) {
              this_01 = (SpriteClassTy *)0x0;
              goto LAB_005e496b;
            }
            do {
              this_01 = (SpriteClassTy *)(*(int *)(iVar7 + 8) * uVar14 + *(int *)(iVar7 + 0x1c));
LAB_005e496b:
              SpriteClassTy::CloseSprite(this_01);
              if (*(int *)((int)&this_01[1].field_0008 + 1) != 0) {
                FUN_006ab060((LPVOID *)((int)&this_01[1].field_0008 + 1));
              }
              iVar7 = this_00->field_064B;
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(uint *)(iVar7 + 0xc));
          }
        }
        if (this_00->field_02CD != 0) {
          StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02CD);
          this_00->field_02CD = 0;
        }
        FUN_006b3af0(DAT_008075a8,this_00->field_0484);
        if (this_00->field_02D5 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_0319,this_00->field_02D5);
        }
        if (this_00->field_0366 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_03AA,this_00->field_0366);
        }
        if (this_00->field_03F7 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_043B,this_00->field_03F7);
        }
        puVar10 = &this_00->field_02BD;
        iVar7 = 4;
        do {
          FUN_006b3af0(DAT_008075a8,*puVar10);
          puVar10 = puVar10 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (this_00->field_02B9 != 0) {
          StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02B9);
          this_00->field_02B9 = 0;
        }
        puVar10 = &this_00->field_0291;
        iVar7 = 5;
        do {
          FUN_006b3af0(DAT_008075a8,puVar10[5]);
          if (*puVar10 != 0) {
            StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar10);
            *puVar10 = 0;
          }
          puVar10 = puVar10 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        PaintMTask(this_00);
        this_00->field_006D = 3;
        Library::DKW::TBL::FUN_006afe40(&this_00->field_0074,(uint *)this_00->field_0078);
        PlayScript(this_00);
        thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,this_00->field_005D,10,2);
        break;
      case 0x6204:
        if (local_18->field_006D != '\x01') {
          local_18->field_006D = 5;
          PlayScript(local_18);
          iVar7 = 1;
          iVar20 = 0x1f;
          do {
            thunk_FUN_00568bc0(&g_sound,iVar7);
            iVar7 = iVar7 + 1;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
        }
        break;
      case 0x6205:
        pcVar17 = *(char **)(param_1 + 0x14);
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        DAT_00807340 = *pcVar17 + -1;
        DAT_00807341 = DAT_00807340 == '\x03';
        break;
      case 0x6212:
        PaintBut(local_18,&local_18->field_0653,0x26ac,4,1,*(short *)(param_1 + 0x14));
        FUN_006b35d0(DAT_008075a8,this_00->field_02A5);
      }
    }
    goto cf_common_exit_005E525B;
  }
  uVar15 = (undefined3)((uint)extraout_ECX >> 8);
  if (uVar14 < 0x6335) {
    if (uVar14 == 0x6334) {
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)local_18,(int)&local_18->field_0362,param_1,
                 CONCAT31(uVar16,local_18->field_06CA == '\x01'));
    }
    else if (uVar14 < 0x6218) {
      if (uVar14 == 0x6217) {
        local_c = *(int **)(param_1 + 0x14);
        local_24 = (undefined4 *)0x1f52;
        local_1c = (undefined4 *)(&local_18->field_0x683 + *local_c * 0xc);
        puVar2 = (undefined4 *)*local_1c;
        local_8 = puVar2[2];
        local_20 = CONCAT31(local_20._1_3_,
                            (-(*(char *)((int)local_1c + 10) != '\x01') & 0xecU) + 0x2c);
        if (local_c[1] == 3) {
          local_14 = (uint *)CONCAT31(local_14._1_3_,
                                      (-(*(char *)(local_1c + 2) != '\x01') & 0xfeU) + 3);
        }
        else {
          local_14 = (uint *)(CONCAT31(local_14._1_3_,(*(char *)(local_1c + 2) != '\x01') + -1) &
                             0xffffff02);
        }
        local_10 = puVar2[5];
        if (local_10 == 0) {
          local_10 = ((uint)*(ushort *)((int)puVar2 + 0xe) * puVar2[1] + 0x1f >> 3 & 0x1ffffffc) *
                     local_8;
        }
        puVar8 = (undefined4 *)FUN_006b4fa0((int)puVar2);
        for (uVar14 = local_10 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
        for (uVar14 = local_10 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar8 = 0xff;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        FUN_006c7610((int)puVar2,0,0,0,0x16,local_8,2,0);
        if ((local_c[1] == 1) || ((local_c[1] == 3 && (local_c[2] != 0)))) {
          pbVar9 = (byte *)FUN_0070b3a0(this_00->field_0081,
                                        (uint)(*(char *)((int)local_1c + 0xb) == '\x01'));
          DibPut(puVar2,2,(int)(local_8 - 0x10) / 2,'\x06',pbVar9);
        }
        FUN_006c7570((int)puVar2,0,0,0,(undefined4 *)0x16,local_8,2,(byte)local_20);
        iVar7 = *local_c;
        if (iVar7 == 1) {
          puVar8 = (undefined4 *)0x1f47;
        }
        else if (iVar7 == 2) {
          puVar8 = (undefined4 *)0x1f48;
        }
        else {
          puVar8 = local_24;
          if (iVar7 == 3) {
            puVar8 = (undefined4 *)0x1f49;
          }
        }
        ccFntTy::SetSurf(this_00->field_008D,(int)puVar2,0,0x1b,0,puVar2[1] + -0x1b,local_8);
        uVar14 = (uint)local_14 & 0xff;
        iVar20 = -1;
        iVar7 = 0;
        puVar10 = (uint *)FUN_006b0140((UINT)puVar8,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_008D,puVar10,iVar7,iVar20,uVar14);
        FUN_006b35d0(DAT_008075a8,(&this_00->field_02B9)[*local_c]);
      }
      else if (uVar14 == 0x6214) {
        if (local_18->field_006E == '\0') {
          UVar13 = 0x2343;
        }
        else {
          UVar13 = (-(uint)(DAT_0080c632 != '\0') & 0x2b) + 0x232c;
        }
        PaintBut(local_18,(int *)&local_18->field_0x66b,UVar13,4,1,*(short *)(param_1 + 0x14));
        FUN_006b35d0(DAT_008075a8,this_00->field_02AD);
      }
      else if (uVar14 == 0x6215) {
        PaintBut(local_18,(int *)&local_18->field_0x677,0x2358,4,1,*(short *)(param_1 + 0x14));
        FUN_006b35d0(DAT_008075a8,this_00->field_02B1);
      }
      else if (uVar14 == 0x6216) {
        PaintBut(local_18,(int *)&local_18->field_0x683,0x235e,4,1,*(short *)(param_1 + 0x14));
        FUN_006b35d0(DAT_008075a8,this_00->field_02B5);
      }
    }
    else if (uVar14 == 0x6332) {
      if (((-1 < (int)local_18->field_0484) && (param_1 != 0)) &&
         (local_8 = *(uint *)(param_1 + 0x1c), local_8 != 0)) {
        pcVar3 = local_18->field_008D;
        if (pcVar3->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar3);
        }
        local_20 = *(int *)&pcVar3->field_0x8a;
        iVar7 = this_00->field_06BF;
        if (iVar7 != 0) {
          local_14 = *(uint **)(iVar7 + 0x14);
          local_24 = *(undefined4 **)(iVar7 + 4);
          local_10 = *(uint *)(iVar7 + 8);
          if (local_14 == (uint *)0x0) {
            local_14 = (uint *)(((uint)*(ushort *)(iVar7 + 0xe) * (int)local_24 + 0x1f >> 3 &
                                0x1ffffffc) * local_10);
          }
          puVar8 = (undefined4 *)FUN_006b4fa0(iVar7);
          puVar2 = local_24;
          for (uVar14 = (uint)local_14 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar8 = 0xffffffff;
            puVar8 = puVar8 + 1;
          }
          for (uVar14 = (uint)local_14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined1 *)puVar8 = 0xff;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          FUN_006c7610(iVar7,0,0,0,(uint)local_24,local_10,2,0);
          FUN_006c7570(iVar7,0,0,0,puVar2,local_10,2,
                       (-(this_00->field_06C9 != '\x01') & 0xecU) + 0x2c);
          uVar12 = (uint)*(ushort *)(param_1 + 0x16);
          uVar14 = uVar12;
          if ((int)uVar12 < (int)(uVar12 + *(int *)(local_8 + 0x1e0))) {
            do {
              if ((int)uVar14 < *(int *)(*(int *)(DAT_0081176c + 0x548) + 8)) {
                local_14 = *(uint **)(*(int *)(*(int *)(DAT_0081176c + 0x548) + 0x14) + uVar14 * 4);
              }
              else {
                local_14 = (uint *)0x0;
              }
              if (local_14 != (uint *)0x0) {
                ccFntTy::SetSurf(this_00->field_008D,iVar7,0,0xf,(uVar14 - uVar12) * local_20 + 0xf,
                                 *(int *)(local_8 + 0x2c),local_20);
                ccFntTy::WrStr(this_00->field_008D,local_14,0,-1,
                               (-(uint)(this_00->field_06C7 != '\x01') & 0xfffffffe) + 2);
              }
              uVar14 = uVar14 + 1;
              uVar12 = (uint)*(ushort *)(param_1 + 0x16);
            } while ((int)uVar14 < (int)(uVar12 + *(int *)(local_8 + 0x1e0)));
          }
          FUN_006b35d0(DAT_008075a8,this_00->field_0484);
        }
      }
    }
    else if (uVar14 == 0x6333) {
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)local_18,(int)&local_18->field_02D1,param_1,
                 CONCAT31(uVar15,local_18->field_06CA == '\x01'));
    }
    goto cf_common_exit_005E525B;
  }
  switch(uVar14) {
  case 0x6335:
    local_18->field_0413 =
         *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
    uVar14 = local_18->field_03F7;
    if (uVar14 == 0xffffffff) break;
    uVar12 = local_18->field_0413;
    uVar21 = local_18->field_040F;
    uVar19 = local_18->field_03FB;
    puVar10 = (uint *)local_18->field_043B;
    goto LAB_005e5255;
  case 0x6336:
    if (((-1 < (int)local_18->field_0484) && (param_1 != 0)) &&
       ((local_8 = *(uint *)(param_1 + 0x1c), local_8 != 0 &&
        (iVar7 = local_18->field_06CB, iVar7 != 0)))) {
      local_24 = *(undefined4 **)(iVar7 + 4);
      pcVar3 = local_18->field_008D;
      local_10 = *(uint *)(iVar7 + 8);
      if (pcVar3->field_00A0 != 0) {
        FUN_00710790((uint *)pcVar3);
      }
      local_14 = *(uint **)(iVar7 + 0x14);
      local_20 = *(int *)&pcVar3->field_0x8a;
      if (local_14 == (uint *)0x0) {
        local_14 = (uint *)(((uint)*(ushort *)(iVar7 + 0xe) * *(int *)(iVar7 + 4) + 0x1f >> 3 &
                            0x1ffffffc) * *(int *)(iVar7 + 8));
      }
      puVar8 = (undefined4 *)FUN_006b4fa0(iVar7);
      puVar2 = local_24;
      for (uVar14 = (uint)local_14 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      for (uVar14 = (uint)local_14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_006c7610(iVar7,0,0,0,(uint)local_24,local_10,2,0);
      FUN_006c7570(iVar7,0,0,0,puVar2,local_10,2,(-(this_00->field_06D5 != '\x01') & 0xecU) + 0x2c);
      uVar12 = (uint)*(ushort *)(param_1 + 0x16);
      uVar14 = uVar12;
      if ((int)uVar12 < (int)(uVar12 + *(int *)(local_8 + 0x1e0))) {
        do {
          if ((int)uVar14 < *(int *)(this_00->field_0643 + 8)) {
            local_14 = *(uint **)(*(int *)(this_00->field_0643 + 0x14) + uVar14 * 4);
          }
          else {
            local_14 = (uint *)0x0;
          }
          if (local_14 != (uint *)0x0) {
            ccFntTy::SetSurf(this_00->field_0089,iVar7,0,0xf,(uVar14 - uVar12) * local_20 + 0xf,
                             *(int *)(local_8 + 0x2c),local_20);
            ccFntTy::WrStr(this_00->field_0089,local_14,0,-1,
                           (-(uint)(this_00->field_06D3 != '\x01') & 0xfffffffe) + 2);
          }
          uVar14 = uVar14 + 1;
          uVar12 = (uint)*(ushort *)(param_1 + 0x16);
        } while ((int)uVar14 < (int)(uVar12 + *(int *)(local_8 + 0x1e0)));
      }
      FUN_006b35d0(DAT_008075a8,this_00->field_063F);
    }
    break;
  case 0x6337:
    MMMObjTy::PaintSlBut
              ((MMMObjTy *)local_18,(int)&local_18->field_048C,param_1,
               CONCAT31(uVar16,local_18->field_06D6 == '\x01'));
    break;
  case 0x6338:
    MMMObjTy::PaintSlBut
              ((MMMObjTy *)local_18,(int)&local_18->field_051D,param_1,
               CONCAT31(uVar15,local_18->field_06D6 == '\x01'));
    break;
  case 0x6339:
    local_18->field_05CE =
         *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
    uVar14 = local_18->field_05B2;
    if (uVar14 == 0xffffffff) break;
    uVar12 = local_18->field_05CE;
    uVar21 = local_18->field_05CA;
    uVar19 = local_18->field_05B6;
    puVar10 = (uint *)local_18->field_05F6;
LAB_005e5255:
    Library::DKW::DDX::FUN_006b3730(puVar10,uVar14,uVar19,uVar21,uVar12);
  }
cf_common_exit_005E525B:
  g_currentExceptionFrame = local_68.previous;
  uVar11 = FUN_006e5fd0();
  return uVar11;
}

