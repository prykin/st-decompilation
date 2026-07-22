#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_base.cpp
   TLOBaseTy::SetState

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_4=4;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_36=54;CASE_39=57;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_70=112;CASE_72=114
    */

int __thiscall TLOBaseTy::SetState(TLOBaseTy *this,int param_1,int param_2)

{
  undefined4 *this_00;
  short sVar1;
  TLOBaseTy_field_0245State TVar2;
  TLOBaseTyVTable *pTVar3;
  TLOBaseTy_field_05ACState TVar4;
  code *pcVar5;
  bool bVar6;
  TLOBaseTy *this_01;
  short sVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  TLOBaseTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar8 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_01 = local_c;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_base.cpp",0xe1,0,iVar8,
                                "TLOBaseTy::SetState error _state == %i",param_1);
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar8,0,"E:\\__titans\\Artem\\TLO_base.cpp",0xe2);
    return iVar8;
  }
  if ((param_2 == 0) || (iVar8 = sub_004B7F90(local_c,param_1), iVar8 != 0)) {
    this_01->field_0249 = 0xffffffff;
    this_01->field_024D = this_01->field_0245;
    this_01->field_0245 = param_1;
    if (((param_1 == 0) || (param_1 == 5)) || (param_1 == 6)) {
      thunk_FUN_004cc7f0((int)this_01);
    }
    else {
      thunk_FUN_004cc810((AnonShape_004CC900_31EE9CAA *)this_01);
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    LoadImages(this_01,unaff_EDI);
    if (*(int *)(&DAT_00791a10 + this_01->field_0235 * 4) != 0) {
      AddSprInit(this_01);
    }
    if (param_2 != 0) {
      TVar2 = this_01->field_0245;
      if (TVar2 == CASE_1) {
        uVar9 = GetPlayerRaceId(*(char *)&this_01->field_023D);
        if (*(int *)(&DAT_007955d0 + ((uVar9 & 0xff) + this_01->field_0235 * 3) * 4) != 0) {
          pTVar3 = this_01->vtable;
          uVar9 = GetPlayerRaceId(*(char *)&this_01->field_023D);
          (*pTVar3->vfunc_90)(3,*(undefined4 *)
                                 (&DAT_007955d0 + ((uVar9 & 0xff) + this_01->field_0235 * 3) * 4));
        }
      }
      else if (TVar2 == 2) {
        (*this_01->vtable->vfunc_90)(3,*(undefined4 *)(&DAT_007958ec + this_01->field_0235 * 4));
      }
      else if (TVar2 == 3) {
        (*this_01->vtable->vfunc_90)(3,*(undefined4 *)(&DAT_007959f4 + this_01->field_0235 * 4));
      }
    }
    switch(this_01->field_0245) {
    case CASE_0:
      if (*(int *)(&DAT_00792778 + this_01->field_0235 * 4) != 0) {
        this_01->field_0275 = 1;
        *(uint *)&this_01->field_0x2b5 = g_playSystem_00802A38->field_00E4;
        if (*(int *)&this_01->field_0x361 == 0) {
          this_01->field_0261 = 1;
        }
      }
      sVar7 = *(short *)&this_01->field_05B0;
      sVar1 = *(short *)&this_01->field_05B8;
      sVar12 = *(short *)&this_01->field_05B4;
      if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar12 < 0)) ||
          ((g_worldGrid.sizeY <= sVar12 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) {
        sVar7 = -1;
      }
      else {
        sVar7 = g_pathingGrid.cells
                [(int)g_pathingGrid.sizeX * (int)sVar12 +
                 (int)g_pathingGrid.planeStride * (int)sVar1 + (int)sVar7];
      }
      if (sVar7 == 0) {
        local_8 = this_01->field_05B4;
        iVar8 = 2 - (uint)(*(int *)(&DAT_00791e30 + this_01->field_0235 * 4) != 1);
        if (local_8 < local_8 + iVar8) {
          do {
            iVar11 = this_01->field_05B0;
            if (iVar11 < iVar11 + iVar8) {
              do {
                iVar10 = thunk_FUN_004960d0((short)iVar11,(short)local_8,
                                            *(short *)&this_01->field_05B8);
                if (iVar10 != 0) {
                  RaiseInternalException
                            (-5,g_overwriteContext_007ED77C,
                             "E:\\__titans\\Artem\\TLO_base.cpp",0x6a);
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < iVar8 + this_01->field_05B0);
            }
            local_8 = local_8 + 1;
          } while (local_8 < this_01->field_05B4 + iVar8);
        }
        this_01->field_0251 = 1;
      }
      break;
    case CASE_1:
      iVar8 = (*this_01->vtable->vfunc_08)();
      if (iVar8 != 0) {
        (*this_01->vtable->SetActivity)(this_01,0);
      }
      sVar7 = *(short *)&this_01->field_05B0;
      sVar1 = *(short *)&this_01->field_05B8;
      sVar12 = *(short *)&this_01->field_05B4;
      if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
         (((sVar12 < 0 || ((g_worldGrid.sizeY <= sVar12 || (sVar1 < 0)))) ||
          (g_worldGrid.sizeZ <= sVar1)))) {
        sVar7 = -1;
      }
      else {
        sVar7 = g_pathingGrid.cells
                [(int)g_pathingGrid.sizeX * (int)sVar12 +
                 (int)g_pathingGrid.planeStride * (int)sVar1 + (int)sVar7];
      }
      if (sVar7 != 0) {
        local_8 = this_01->field_05B4;
        iVar8 = 2 - (uint)(*(int *)(&DAT_00791e30 + this_01->field_0235 * 4) != 1);
        if (local_8 < local_8 + iVar8) {
          do {
            iVar11 = this_01->field_05B0;
            if (iVar11 < iVar11 + iVar8) {
              do {
                iVar10 = thunk_FUN_00496140((short)iVar11,(short)local_8,
                                            *(short *)&this_01->field_05B8);
                if (iVar10 != 0) {
                  RaiseInternalException
                            (-5,g_overwriteContext_007ED77C,
                             "E:\\__titans\\Artem\\TLO_base.cpp",0x87);
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < iVar8 + this_01->field_05B0);
            }
            local_8 = local_8 + 1;
          } while (local_8 < this_01->field_05B4 + iVar8);
        }
        this_01->field_0251 = 0;
      }
      TVar4 = this_01->field_05AC;
      if (TVar4 - CASE_32 < 0x42) {
        switch(TVar4) {
        case CASE_32:
        case CASE_40:
        case CASE_49:
        case CASE_5C:
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
        case CASE_39:
        case CASE_3B:
        case CASE_4F:
        case CASE_52:
        case CASE_5E:
        case CASE_5F:
        case CASE_60:
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
          thunk_FUN_004b6d70((int)this_01,(uint)*(byte *)((int)&PTR_caseD_50_004b88dc + TVar4 + 2));
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
        case CASE_68:
          thunk_FUN_004dc220();
          break;
        case CASE_69:
          thunk_FUN_004dcc80((int)this_01);
          break;
        case CASE_6A:
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
        case CASE_70:
          thunk_FUN_004d8d40((int)this_01);
        }
      }
      if (*(int *)(&DAT_00794d94 + this_01->field_0235 * 4) != 0) {
        thunk_FUN_004c3000((int)this_01);
      }
      thunk_FUN_004e9c20((AnonShape_004E9C20_50FC91C6 *)this_01);
      sub_004DC150(this_01);
      this_00 = &this_01->field_01D5;
      STT3DSprC::StopShow((STT3DSprC *)this_00,0xf);
      STT3DSprC::StopShow((STT3DSprC *)this_00,0);
      STT3DSprC::StopShow((STT3DSprC *)this_00,1);
    default:
      if (*(int *)(&DAT_00792778 + this_01->field_0235 * 4) != 0) {
        this_01->field_0275 = 0;
        this_01->field_0261 = 0;
      }
      break;
    case CASE_4:
      sVar7 = *(short *)&this_01->field_05B0;
      sVar1 = *(short *)&this_01->field_05B8;
      sVar12 = *(short *)&this_01->field_05B4;
      if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
         ((sVar12 < 0 ||
          (((g_worldGrid.sizeY <= sVar12 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))))) {
        sVar12 = -1;
      }
      else {
        sVar12 = g_pathingGrid.cells
                 [(int)g_pathingGrid.sizeX * (int)sVar12 +
                  (int)g_pathingGrid.planeStride * (int)sVar1 + (int)sVar7];
      }
      if (sVar12 != 0) {
        iVar8 = thunk_FUN_00496140(sVar7,*(short *)&this_01->field_05B4,sVar1);
        if (iVar8 != 0) {
          RaiseInternalException
                    (-5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_base.cpp",0x73);
        }
        this_01->field_0251 = 0;
      }
      if (*(int *)(&DAT_00792778 + this_01->field_0235 * 4) != 0) {
        this_01->field_0275 = 0;
        this_01->field_0261 = 0;
      }
      break;
    case CASE_6:
      this_01->field_0458 = 0xfe;
    }
    switch(this_01->field_05AC) {
    case CASE_36:
    case CASE_3D:
    case CASE_5D:
      thunk_FUN_004e4b60((AnonShape_004E4B60_EABE8E44 *)this_01);
      break;
    case CASE_45:
      thunk_FUN_004ea7e0((AnonShape_004D9BD0_B3B50583 *)this_01);
      break;
    case CASE_4E:
      thunk_FUN_004d9bd0((AnonShape_004D9BD0_B3B50583 *)this_01);
      break;
    case CASE_68:
      thunk_FUN_004dc470((AnonShape_004DC470_71C75079 *)this_01);
      break;
    case CASE_6A:
      thunk_FUN_004c6070((int *)this_01);
      break;
    case CASE_70:
      thunk_FUN_004d8db0((AnonShape_004D8DB0_597A2A4F *)this_01);
      break;
    case CASE_72:
      thunk_FUN_004ecdf0((AnonShape_004D9BD0_B3B50583 *)this_01);
    }
    if (*(int *)(&DAT_00794d94 + this_01->field_0235 * 4) != 0) {
      thunk_FUN_004c2e60((int)this_01);
    }
    thunk_FUN_004ea6c0((int)this_01);
    RotateSpr(this_01,1);
  }
  else {
    uVar9 = this_01->field_046C;
    if ((uVar9 == 0) || ((uVar9 == 1 || (uVar9 == 2)))) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      if (((this_01->field_0245 == (CASE_4|CASE_1)) && (param_1 == 2)) &&
         (iVar8 = sub_004B7F90(this_01,0), iVar8 != 0)) {
        SetState(this_01,0,1);
      }
      TVar2 = this_01->field_0245;
      if ((TVar2 == CASE_4) && (param_1 == 3)) {
        this_01->field_0249 = 0xffffffff;
      }
      else {
        this_01->field_0249 = param_1;
      }
      if (((this_01->field_0255 != 0) && (TVar2 == CASE_0)) &&
         ((this_01->field_0249 == 2 && (*(int *)(&DAT_00792778 + this_01->field_0235 * 4) != 0)))) {
        this_01->field_0275 = 0;
      }
      if (((TVar2 == CASE_4) && (this_01->field_03DC != 0)) &&
         (iVar8 = sub_004EA620(this_01), iVar8 != 0)) {
        this_01->field_03FC = 1;
        this_01->field_0400 = 0;
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

