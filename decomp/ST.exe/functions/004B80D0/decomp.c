
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_base.cpp
   TLOBaseTy::SetState */

int __thiscall TLOBaseTy::SetState(TLOBaseTy *this,int param_1,int param_2)

{
  undefined4 *this_00;
  short sVar1;
  TLOBaseTyVTable *pTVar2;
  code *pcVar3;
  bool bVar4;
  TLOBaseTy *this_01;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  TLOBaseTy *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Artem_TLO_base_cpp_007ac820,0xe1,0,iVar6,
                               s_TLOBaseTy__SetState_error__state_007ac7f0,param_1);
    if (iVar9 != 0) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Artem_TLO_base_cpp_007ac820,0xe2);
    return iVar6;
  }
  if ((param_2 == 0) || (iVar6 = thunk_FUN_004b7f90(local_c,param_1), iVar6 != 0)) {
    this_01->field_0249 = 0xffffffff;
    this_01->field_024D = this_01->field_0245;
    this_01->field_0245 = param_1;
    if (((param_1 == 0) || (param_1 == 5)) || (param_1 == 6)) {
      thunk_FUN_004cc7f0((int)this_01);
    }
    else {
      thunk_FUN_004cc810((int)this_01);
    }
    LoadImages(this_01,unaff_EDI);
    if (*(int *)(&DAT_00791a10 + this_01->field_0235 * 4) != 0) {
      AddSprInit(this_01);
    }
    if (param_2 != 0) {
      iVar6 = this_01->field_0245;
      if (iVar6 == 1) {
        uVar7 = thunk_FUN_004406c0(this_01->field_023D);
        if (*(int *)(&DAT_007955d0 + ((uVar7 & 0xff) + this_01->field_0235 * 3) * 4) != 0) {
          pTVar2 = this_01->vtable;
          uVar7 = thunk_FUN_004406c0(this_01->field_023D);
          (*pTVar2->slot_90)(3,*(undefined4 *)
                                (&DAT_007955d0 + ((uVar7 & 0xff) + this_01->field_0235 * 3) * 4));
        }
      }
      else if (iVar6 == 2) {
        (*this_01->vtable->slot_90)(3,*(undefined4 *)(&DAT_007958ec + this_01->field_0235 * 4));
      }
      else if (iVar6 == 3) {
        (*this_01->vtable->slot_90)(3,*(undefined4 *)(&DAT_007959f4 + this_01->field_0235 * 4));
      }
    }
    switch(this_01->field_0245) {
    case 0:
      if (*(int *)(&DAT_00792778 + this_01->field_0235 * 4) != 0) {
        this_01->field_0275 = 1;
        this_01->field_02B5 = *(undefined4 *)(DAT_00802a38 + 0xe4);
        if (this_01->field_0361 == 0) {
          *(undefined4 *)&this_01->field_0x261 = 1;
        }
      }
      sVar5 = *(short *)&this_01->field_0x5b0;
      sVar1 = *(short *)&this_01->field_0x5b8;
      sVar10 = *(short *)&this_01->field_0x5b4;
      if (((((sVar5 < 0) || (SHORT_007fb240 <= sVar5)) || (sVar10 < 0)) ||
          ((SHORT_007fb242 <= sVar10 || (sVar1 < 0)))) || (SHORT_007fb244 <= sVar1)) {
        sVar5 = -1;
      }
      else {
        sVar5 = *(short *)(DAT_007fb280 +
                          ((int)SHORT_007fb278 * (int)sVar10 + (int)SHORT_007fb27e * (int)sVar1 +
                          (int)sVar5) * 2);
      }
      if (sVar5 == 0) {
        local_8 = *(int *)&this_01->field_0x5b4;
        iVar6 = 2 - (uint)(*(int *)(&DAT_00791e30 + this_01->field_0235 * 4) != 1);
        if (local_8 < local_8 + iVar6) {
          do {
            iVar9 = *(int *)&this_01->field_0x5b0;
            if (iVar9 < iVar9 + iVar6) {
              do {
                iVar8 = thunk_FUN_004960d0((short)iVar9,(short)local_8,
                                           *(short *)&this_01->field_0x5b8);
                if (iVar8 != 0) {
                  RaiseInternalException
                            (-5,g_overwriteContext_007ED77C,
                             s_E____titans_Artem_TLO_base_cpp_007ac820,0x6a);
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar6 + *(int *)&this_01->field_0x5b0);
            }
            local_8 = local_8 + 1;
          } while (local_8 < *(int *)&this_01->field_0x5b4 + iVar6);
        }
        this_01->field_0251 = 1;
      }
      break;
    case 1:
      iVar6 = (*this_01->vtable->slot_08)();
      if (iVar6 != 0) {
        (*this_01->vtable->SetActivity)(this_01,0);
      }
      sVar5 = *(short *)&this_01->field_0x5b0;
      sVar1 = *(short *)&this_01->field_0x5b8;
      sVar10 = *(short *)&this_01->field_0x5b4;
      if (((sVar5 < 0) || (SHORT_007fb240 <= sVar5)) ||
         (((sVar10 < 0 || ((SHORT_007fb242 <= sVar10 || (sVar1 < 0)))) || (SHORT_007fb244 <= sVar1))
         )) {
        sVar5 = -1;
      }
      else {
        sVar5 = *(short *)(DAT_007fb280 +
                          ((int)SHORT_007fb278 * (int)sVar10 + (int)SHORT_007fb27e * (int)sVar1 +
                          (int)sVar5) * 2);
      }
      if (sVar5 != 0) {
        local_8 = *(int *)&this_01->field_0x5b4;
        iVar6 = 2 - (uint)(*(int *)(&DAT_00791e30 + this_01->field_0235 * 4) != 1);
        if (local_8 < local_8 + iVar6) {
          do {
            iVar9 = *(int *)&this_01->field_0x5b0;
            if (iVar9 < iVar9 + iVar6) {
              do {
                iVar8 = thunk_FUN_00496140((short)iVar9,(short)local_8,
                                           *(short *)&this_01->field_0x5b8);
                if (iVar8 != 0) {
                  RaiseInternalException
                            (-5,g_overwriteContext_007ED77C,
                             s_E____titans_Artem_TLO_base_cpp_007ac820,0x87);
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar6 + *(int *)&this_01->field_0x5b0);
            }
            local_8 = local_8 + 1;
          } while (local_8 < *(int *)&this_01->field_0x5b4 + iVar6);
        }
        this_01->field_0251 = 0;
      }
      iVar6 = this_01->field_05AC;
      if (iVar6 - 0x32U < 0x42) {
        switch(iVar6) {
        case 0x32:
        case 0x40:
        case 0x49:
        case 0x5c:
          thunk_FUN_004ce720((int)this_01);
          break;
        case 0x34:
        case 0x5b:
          thunk_FUN_004de000((int)this_01);
          break;
        case 0x37:
        case 0x6c:
          thunk_FUN_004e8f90((int)this_01);
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
          thunk_FUN_004e03e0((int)this_01);
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
          thunk_FUN_004b6d70((int)this_01,(uint)*(byte *)((int)&PTR_caseD_50_004b88dc + iVar6 + 2));
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
          thunk_FUN_004ce670((int)this_01);
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
      if (*(int *)(&DAT_00794d94 + this_01->field_0235 * 4) != 0) {
        thunk_FUN_004c3000((int)this_01);
      }
      thunk_FUN_004e9c20(this_01);
      thunk_FUN_004dc150(this_01);
      this_00 = &this_01->field_01D5;
      STT3DSprC::StopShow((STT3DSprC *)this_00,0xf);
      STT3DSprC::StopShow((STT3DSprC *)this_00,0);
      STT3DSprC::StopShow((STT3DSprC *)this_00,1);
    default:
      if (*(int *)(&DAT_00792778 + this_01->field_0235 * 4) != 0) {
        this_01->field_0275 = 0;
        *(undefined4 *)&this_01->field_0x261 = 0;
      }
      break;
    case 4:
      sVar5 = *(short *)&this_01->field_0x5b0;
      sVar1 = *(short *)&this_01->field_0x5b8;
      sVar10 = *(short *)&this_01->field_0x5b4;
      if (((sVar5 < 0) || (SHORT_007fb240 <= sVar5)) ||
         ((sVar10 < 0 || (((SHORT_007fb242 <= sVar10 || (sVar1 < 0)) || (SHORT_007fb244 <= sVar1))))
         )) {
        sVar10 = -1;
      }
      else {
        sVar10 = *(short *)(DAT_007fb280 +
                           ((int)SHORT_007fb278 * (int)sVar10 + (int)SHORT_007fb27e * (int)sVar1 +
                           (int)sVar5) * 2);
      }
      if (sVar10 != 0) {
        iVar6 = thunk_FUN_00496140(sVar5,*(short *)&this_01->field_0x5b4,sVar1);
        if (iVar6 != 0) {
          RaiseInternalException
                    (-5,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_base_cpp_007ac820,0x73);
        }
        this_01->field_0251 = 0;
      }
      if (*(int *)(&DAT_00792778 + this_01->field_0235 * 4) != 0) {
        this_01->field_0275 = 0;
        *(undefined4 *)&this_01->field_0x261 = 0;
      }
      break;
    case 6:
      this_01->field_0458 = 0xfe;
    }
    switch(this_01->field_05AC) {
    case 0x36:
    case 0x3d:
    case 0x5d:
      thunk_FUN_004e4b60((int *)this_01);
      break;
    case 0x45:
      thunk_FUN_004ea7e0((int)this_01);
      break;
    case 0x4e:
      thunk_FUN_004d9bd0((int)this_01);
      break;
    case 0x68:
      thunk_FUN_004dc470((int)this_01);
      break;
    case 0x6a:
      thunk_FUN_004c6070((int *)this_01);
      break;
    case 0x70:
      thunk_FUN_004d8db0((int)this_01);
      break;
    case 0x72:
      thunk_FUN_004ecdf0((int)this_01);
    }
    if (*(int *)(&DAT_00794d94 + this_01->field_0235 * 4) != 0) {
      thunk_FUN_004c2e60((int)this_01);
    }
    thunk_FUN_004ea6c0((int)this_01);
    RotateSpr(this_01,1);
  }
  else {
    iVar6 = this_01->field_046C;
    if ((iVar6 == 0) || ((iVar6 == 1 || (iVar6 == 2)))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if (((this_01->field_0245 == 5) && (param_1 == 2)) &&
         (iVar6 = thunk_FUN_004b7f90(this_01,0), iVar6 != 0)) {
        SetState(this_01,0,1);
      }
      iVar6 = this_01->field_0245;
      if ((iVar6 == 4) && (param_1 == 3)) {
        this_01->field_0249 = 0xffffffff;
      }
      else {
        this_01->field_0249 = param_1;
      }
      if (((this_01->field_0255 != 0) && (iVar6 == 0)) &&
         ((this_01->field_0249 == 2 && (*(int *)(&DAT_00792778 + this_01->field_0235 * 4) != 0)))) {
        this_01->field_0275 = 0;
      }
      if (((iVar6 == 4) && (this_01->field_03DC != 0)) &&
         (iVar6 = thunk_FUN_004ea620((int)this_01), iVar6 != 0)) {
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

