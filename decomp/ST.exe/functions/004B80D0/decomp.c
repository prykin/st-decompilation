
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_base.cpp
   TLOBaseTy::SetState
   
   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_4=4;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115
   
   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115
    */

int __thiscall TLOBaseTy::SetState(TLOBaseTy *this,int param_1,int param_2)

{
  undefined1 *this_00;
  short sVar1;
  code *pcVar2;
  bool bVar3;
  AnonShape_004DC150_D7EBDFDF *this_01;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  AnonShape_004DC150_D7EBDFDF *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = (AnonShape_004DC150_D7EBDFDF *)this;
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Artem_TLO_base_cpp_007ac820,0xe1,0,iVar5,
                               s_TLOBaseTy__SetState_error__state_007ac7f0,param_1);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Artem_TLO_base_cpp_007ac820,0xe2);
    return iVar5;
  }
  if ((param_2 == 0) || (iVar5 = thunk_FUN_004b7f90(local_c,param_1), iVar5 != 0)) {
    *(undefined4 *)&this_01->field_0x249 = 0xffffffff;
    *(undefined4 *)&this_01->field_0x24d = *(undefined4 *)&this_01->field_0x245;
    *(int *)&this_01->field_0x245 = param_1;
    if (((param_1 == 0) || (param_1 == 5)) || (param_1 == 6)) {
      thunk_FUN_004cc7f0((int)this_01);
    }
    else {
      thunk_FUN_004cc810((AnonShape_004CC900_31EE9CAA *)this_01);
    }
    LoadImages((TLOBaseTy *)this_01,unaff_EDI);
    if (*(int *)(&DAT_00791a10 + *(int *)&this_01->field_0x235 * 4) != 0) {
      AddSprInit((TLOBaseTy *)this_01);
    }
    if (param_2 != 0) {
      iVar5 = *(int *)&this_01->field_0x245;
      if (iVar5 == 1) {
        uVar6 = GetPlayerRaceId(this_01->field_0x23d);
        if (*(int *)(&DAT_007955d0 + ((uVar6 & 0xff) + *(int *)&this_01->field_0x235 * 3) * 4) != 0)
        {
          iVar5 = *(int *)this_01;
          uVar6 = GetPlayerRaceId(this_01->field_0x23d);
          (**(code **)(iVar5 + 0x90))
                    (3,*(undefined4 *)
                        (&DAT_007955d0 + ((uVar6 & 0xff) + *(int *)&this_01->field_0x235 * 3) * 4));
        }
      }
      else if (iVar5 == 2) {
        (**(code **)(*(int *)this_01 + 0x90))
                  (3,*(undefined4 *)(&DAT_007958ec + *(int *)&this_01->field_0x235 * 4));
      }
      else if (iVar5 == 3) {
        (**(code **)(*(int *)this_01 + 0x90))
                  (3,*(undefined4 *)(&DAT_007959f4 + *(int *)&this_01->field_0x235 * 4));
      }
    }
    switch(*(undefined4 *)&this_01->field_0x245) {
    case 0:
      if (*(int *)(&DAT_00792778 + *(int *)&this_01->field_0x235 * 4) != 0) {
        *(undefined4 *)&this_01->field_0x275 = 1;
        *(undefined4 *)&this_01->field_0x2b5 = PTR_00802a38->field_00E4;
        if (*(int *)&this_01->field_0x361 == 0) {
          *(undefined4 *)&this_01->field_0x261 = 1;
        }
      }
      sVar4 = *(short *)&this_01->field_0x5b0;
      sVar1 = *(short *)&this_01->field_0x5b8;
      sVar9 = *(short *)&this_01->field_0x5b4;
      if (((((sVar4 < 0) || (g_worldGrid.sizeX <= sVar4)) || (sVar9 < 0)) ||
          ((g_worldGrid.sizeY <= sVar9 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) {
        sVar4 = -1;
      }
      else {
        sVar4 = g_pathingGrid.cells
                [(int)g_pathingGrid.sizeX * (int)sVar9 + (int)g_pathingGrid.planeStride * (int)sVar1
                 + (int)sVar4];
      }
      if (sVar4 == 0) {
        local_8 = *(int *)&this_01->field_0x5b4;
        iVar5 = 2 - (uint)(*(int *)(&DAT_00791e30 + *(int *)&this_01->field_0x235 * 4) != 1);
        if (local_8 < local_8 + iVar5) {
          do {
            iVar8 = *(int *)&this_01->field_0x5b0;
            if (iVar8 < iVar8 + iVar5) {
              do {
                iVar7 = thunk_FUN_004960d0((short)iVar8,(short)local_8,
                                           *(short *)&this_01->field_0x5b8);
                if (iVar7 != 0) {
                  RaiseInternalException
                            (-5,g_overwriteContext_007ED77C,
                             s_E____titans_Artem_TLO_base_cpp_007ac820,0x6a);
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar5 + *(int *)&this_01->field_0x5b0);
            }
            local_8 = local_8 + 1;
          } while (local_8 < *(int *)&this_01->field_0x5b4 + iVar5);
        }
        *(undefined4 *)&this_01->field_0x251 = 1;
      }
      break;
    case 1:
      iVar5 = (**(code **)(*(int *)this_01 + 8))();
      if (iVar5 != 0) {
        (**(code **)(*(int *)this_01 + 0xe8))(0);
      }
      sVar4 = *(short *)&this_01->field_0x5b0;
      sVar1 = *(short *)&this_01->field_0x5b8;
      sVar9 = *(short *)&this_01->field_0x5b4;
      if (((sVar4 < 0) || (g_worldGrid.sizeX <= sVar4)) ||
         (((sVar9 < 0 || ((g_worldGrid.sizeY <= sVar9 || (sVar1 < 0)))) ||
          (g_worldGrid.sizeZ <= sVar1)))) {
        sVar4 = -1;
      }
      else {
        sVar4 = g_pathingGrid.cells
                [(int)g_pathingGrid.sizeX * (int)sVar9 + (int)g_pathingGrid.planeStride * (int)sVar1
                 + (int)sVar4];
      }
      if (sVar4 != 0) {
        local_8 = *(int *)&this_01->field_0x5b4;
        iVar5 = 2 - (uint)(*(int *)(&DAT_00791e30 + *(int *)&this_01->field_0x235 * 4) != 1);
        if (local_8 < local_8 + iVar5) {
          do {
            iVar8 = *(int *)&this_01->field_0x5b0;
            if (iVar8 < iVar8 + iVar5) {
              do {
                iVar7 = thunk_FUN_00496140((short)iVar8,(short)local_8,
                                           *(short *)&this_01->field_0x5b8);
                if (iVar7 != 0) {
                  RaiseInternalException
                            (-5,g_overwriteContext_007ED77C,
                             s_E____titans_Artem_TLO_base_cpp_007ac820,0x87);
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar5 + *(int *)&this_01->field_0x5b0);
            }
            local_8 = local_8 + 1;
          } while (local_8 < *(int *)&this_01->field_0x5b4 + iVar5);
        }
        *(undefined4 *)&this_01->field_0x251 = 0;
      }
      iVar5 = *(int *)&this_01->field_0x5ac;
      if (iVar5 - 0x32U < 0x42) {
        switch(iVar5) {
        case 0x32:
        case 0x40:
        case 0x49:
        case 0x5c:
          thunk_FUN_004ce720((AnonShape_004CE720_8639BE44 *)this_01);
          break;
        case 0x34:
        case 0x5b:
          thunk_FUN_004de000((int)this_01);
          break;
        case 0x37:
        case 0x6c:
          thunk_FUN_004e8f90((AnonShape_004E8F90_6386CD4A *)this_01);
          break;
        case 0x38:
        case 0x39:
        case 0x3b:
        case 0x4f:
        case 0x52:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
          thunk_FUN_004e03e0((AnonShape_004E03E0_57EF73A1 *)this_01);
          break;
        case 0x41:
          thunk_FUN_004e4070();
          break;
        case 0x48:
          thunk_FUN_004df8f0();
          break;
        case 0x4c:
          thunk_FUN_004dc700((int)this_01);
          break;
        case 0x50:
          thunk_FUN_004b6d70((int)this_01,(uint)*(byte *)((int)&PTR_caseD_50_004b88dc + iVar5 + 2));
          break;
        case 0x53:
          thunk_FUN_004cd6f0((int)this_01);
          break;
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
          thunk_FUN_004ce670((AnonShape_004CE670_5D83C685 *)this_01);
        case 0x35:
          thunk_FUN_004e2ab0((int)this_01);
          break;
        case 99:
          thunk_FUN_004b7a80();
          break;
        case 100:
          thunk_FUN_004e48d0();
          break;
        case 0x68:
          thunk_FUN_004dc220();
          break;
        case 0x69:
          thunk_FUN_004dcc80((int)this_01);
          break;
        case 0x6a:
          thunk_FUN_004c5e60((int)this_01);
          break;
        case 0x6d:
          thunk_FUN_004dba70((int)this_01);
          break;
        case 0x6e:
          thunk_FUN_004dd690((int)this_01);
          break;
        case 0x6f:
        case 0x73:
          thunk_FUN_004eccc0((int *)this_01);
          break;
        case 0x70:
          thunk_FUN_004d8d40((int)this_01);
        }
      }
      if (*(int *)(&DAT_00794d94 + *(int *)&this_01->field_0x235 * 4) != 0) {
        thunk_FUN_004c3000((int)this_01);
      }
      thunk_FUN_004e9c20((AnonShape_004E9C20_50FC91C6 *)this_01);
      thunk_FUN_004dc150(this_01);
      this_00 = &this_01->field_0x1d5;
      STT3DSprC::StopShow((STT3DSprC *)this_00,0xf);
      STT3DSprC::StopShow((STT3DSprC *)this_00,0);
      STT3DSprC::StopShow((STT3DSprC *)this_00,1);
    default:
      if (*(int *)(&DAT_00792778 + *(int *)&this_01->field_0x235 * 4) != 0) {
        *(undefined4 *)&this_01->field_0x275 = 0;
        *(undefined4 *)&this_01->field_0x261 = 0;
      }
      break;
    case 4:
      sVar4 = *(short *)&this_01->field_0x5b0;
      sVar1 = *(short *)&this_01->field_0x5b8;
      sVar9 = *(short *)&this_01->field_0x5b4;
      if (((sVar4 < 0) || (g_worldGrid.sizeX <= sVar4)) ||
         ((sVar9 < 0 ||
          (((g_worldGrid.sizeY <= sVar9 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))))) {
        sVar9 = -1;
      }
      else {
        sVar9 = g_pathingGrid.cells
                [(int)g_pathingGrid.sizeX * (int)sVar9 + (int)g_pathingGrid.planeStride * (int)sVar1
                 + (int)sVar4];
      }
      if (sVar9 != 0) {
        iVar5 = thunk_FUN_00496140(sVar4,*(short *)&this_01->field_0x5b4,sVar1);
        if (iVar5 != 0) {
          RaiseInternalException
                    (-5,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_base_cpp_007ac820,0x73);
        }
        *(undefined4 *)&this_01->field_0x251 = 0;
      }
      if (*(int *)(&DAT_00792778 + *(int *)&this_01->field_0x235 * 4) != 0) {
        *(undefined4 *)&this_01->field_0x275 = 0;
        *(undefined4 *)&this_01->field_0x261 = 0;
      }
      break;
    case 6:
      *(undefined4 *)&this_01->field_0x458 = 0xfe;
    }
    switch(*(undefined4 *)&this_01->field_0x5ac) {
    case 0x36:
    case 0x3d:
    case 0x5d:
      thunk_FUN_004e4b60((AnonShape_004E4B60_EABE8E44 *)this_01);
      break;
    case 0x45:
      thunk_FUN_004ea7e0((AnonShape_004D9BD0_B3B50583 *)this_01);
      break;
    case 0x4e:
      thunk_FUN_004d9bd0((AnonShape_004D9BD0_B3B50583 *)this_01);
      break;
    case 0x68:
      thunk_FUN_004dc470((AnonShape_004DC470_71C75079 *)this_01);
      break;
    case 0x6a:
      thunk_FUN_004c6070((int *)this_01);
      break;
    case 0x70:
      thunk_FUN_004d8db0((AnonShape_004D8DB0_597A2A4F *)this_01);
      break;
    case 0x72:
      thunk_FUN_004ecdf0((AnonShape_004D9BD0_B3B50583 *)this_01);
    }
    if (*(int *)(&DAT_00794d94 + *(int *)&this_01->field_0x235 * 4) != 0) {
      thunk_FUN_004c2e60((int)this_01);
    }
    thunk_FUN_004ea6c0((int)this_01);
    RotateSpr((TLOBaseTy *)this_01,1);
  }
  else {
    iVar5 = *(int *)&this_01->field_0x46c;
    if ((iVar5 == 0) || ((iVar5 == 1 || (iVar5 == 2)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      if (((*(int *)&this_01->field_0x245 == 5) && (param_1 == 2)) &&
         (iVar5 = thunk_FUN_004b7f90(this_01,0), iVar5 != 0)) {
        SetState((TLOBaseTy *)this_01,0,1);
      }
      iVar5 = *(int *)&this_01->field_0x245;
      if ((iVar5 == 4) && (param_1 == 3)) {
        *(undefined4 *)&this_01->field_0x249 = 0xffffffff;
      }
      else {
        *(int *)&this_01->field_0x249 = param_1;
      }
      if (((*(int *)&this_01->field_0x255 != 0) && (iVar5 == 0)) &&
         ((*(int *)&this_01->field_0x249 == 2 &&
          (*(int *)(&DAT_00792778 + *(int *)&this_01->field_0x235 * 4) != 0)))) {
        *(undefined4 *)&this_01->field_0x275 = 0;
      }
      if (((iVar5 == 4) && (*(int *)&this_01->field_0x3dc != 0)) &&
         (iVar5 = thunk_FUN_004ea620((AnonShape_004EA620_716C262B *)this_01), iVar5 != 0)) {
        *(undefined4 *)&this_01->field_0x3fc = 1;
        *(undefined4 *)&this_01->field_0x400 = 0;
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

