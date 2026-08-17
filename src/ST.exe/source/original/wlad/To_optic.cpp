#include "st/generated.hpp"
// Generated translation unit: source/original/wlad/To_optic.cpp

// 004A8920 OpticClassC::GetMessage
#line 4 "decomp/ST.exe/functions/004A8920/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_optic.cpp
   OpticClassC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004022CA|004A8920; family_names=OpticClassC::GetMessage; ret4=5;
   direct_offsets={10:1,14:0,18:2,1c:0} */

int __thiscall st::fn_004A8920(OpticClassC *this,STMessage *message)

{
  STMessageId SVar1;
  int local_EAX_36;
  uint uVar3;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  InternalExceptionFrame local_6c;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  OpticClassC *local_8;

  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_8 = this;
  local_EAX_36 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  if (local_EAX_36 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\To_optic.cpp"),0xa9,0,-1,st::mutable_c_string("%s"));
    if (iVar3 == 0) {
      st::fn_006A5E40(-1,0,st::mutable_c_string("E:\\__titans\\wlad\\To_optic.cpp"),0xaa);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006E5FD0(local_8,message);
  SVar1 = message->id;
  if (SVar1 < 0x105) {
    if (SVar1 != MESS_OPTICCLASSC_0104) {
      if (SVar1 < 4) {
        if (SVar1 == MESS_SHARED_0003) {
          /* ST_CALLSITE[004A8A99]: CALL 0x00404011; direct=00404011 CursorClassTy::DelOpticAcc */
          st::fn_00404011(g_cursorClass_00802A30);
          g_currentExceptionFrame = local_6c.previous;
          return 0;
        }
        if (SVar1 == MESS_ID_NONE) {
          if (DAT_008073e0 == 1) {
            st::fn_00401186();
          }
          if (DAT_0080674c != 2) {
            g_currentExceptionFrame = local_6c.previous;
            return 0;
          }
          if (1 < DAT_0080673c) {
            g_currentExceptionFrame = local_6c.previous;
            return 0;
          }
          if (DAT_0080745d == 0) {
            st::fn_006DDBE0(g_sT3DSMAPContext_00807598);
            st::fn_006E1050(g_sT3DSMAPContext_00807598);
          }
          else {
            st::fn_006E1460
                      (g_sT3DSMAPContext_00807598,(double)DAT_008073d0,(double)_DAT_008073d4);
            DAT_008073d0 = (float)g_sT3DSMAPContext_00807598->field_0098;
            _DAT_008073d4 = (float)g_sT3DSMAPContext_00807598->field_00A0;
            lVar6 = st::fn_0072E288();
            DAT_008073d8 = (int)lVar6;
            lVar6 = st::fn_0072E288();
            DAT_008073dc = (int)lVar6;
          }
          DAT_0080674c = 1;
          DAT_0080745d = DAT_0080745d + 1;
          g_currentExceptionFrame = local_6c.previous;
          return 0;
        }
        if (SVar1 != MESS_ID_CREATE) {
          g_currentExceptionFrame = local_6c.previous;
          return 0;
        }
        /* ST_CALLSITE[004A899C]: CALL 0x0040255e; direct=0040255E OpticClassC::InitOptic */
        st::fn_0040255E(g_opticClass_007FB2A0);
        /* ST_CALLSITE[004A89A7]: CALL 0x004039bd; direct=004039BD CursorClassTy::AddOpticAcc */
        st::fn_004039BD(g_cursorClass_00802A30);
        goto LAB_004a8b47;
      }
      if (SVar1 == MESS_OPTICCLASSC_0100) {
        st::fn_00403C47(0);
        uVar3 = DAT_0080743c & 0xff;
        goto LAB_004a8c6a;
      }
      if (SVar1 != MESS_OPTICCLASSC_0101) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      st::fn_00403C47(1);
      goto LAB_004a8c49;
    }
    if (DAT_008073fc == 0) {
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    DAT_008073fc = 0;
    st::fn_00405547(1);
    DAT_0080674c = 2;
    DAT_0080745d = 0;
    local_1c = 0xf;
    local_18 = 0x108;
    local_14 = 0;
    /* ST_CALLSITE[004A8B44]: CALL dword ptr [EAX + 0x18] */
    (*g_playSystem_00802A38->vtable->SendMessage)
              ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_28);
LAB_004a8b47:
    uVar3 = DAT_0080743c & 0xff;
  }
  else {
    switch(SVar1) {
    case 0x105:
      uVar5 = 1;
      if (DAT_008073fc == 1) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      DAT_008073fc = 1;
      break;
    case MESS_OPTICCLASSC_0104|MESS_ID_CREATE:
      uVar5 = 2;
      if (DAT_008073fc == 2) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      DAT_008073fc = 2;
      st::fn_00405547(1);
      goto LAB_004a8c23;
    case MESS_OPTICCLASSC_0104|MESS_SHARED_0003:
      uVar5 = 3;
      if (DAT_008073fc == 3) {
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      DAT_008073fc = 3;
      break;
    default:
      goto switchD_004a8b81_caseD_108;
    case MESS_SHARED_010F:
      /* ST_CALLSITE[004A8B9F]: CALL 0x00401078; direct=00401078 STPlaySystemC::SaveObjData */
      st::fn_00401078
                (g_playSystem_00802A38,st::mutable_c_string("opticsave"),(byte *)&DAT_008073d0,399,0xc);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    st::fn_00405547(1);
LAB_004a8c23:
    DAT_0080674c = 2;
    DAT_0080745d = 0;
    local_1c = 0xf;
    local_18 = 0x108;
    local_14 = uVar5;
    /* ST_CALLSITE[004A8C46]: CALL dword ptr [EDX + 0x18] */
    (*g_playSystem_00802A38->vtable->SendMessage)
              ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_28);
LAB_004a8c49:
    uVar3 = DAT_0080743c & 0xff;
  }
LAB_004a8c6a:
  st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,uVar3);
switchD_004a8b81_caseD_108:
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

// 004A8FC0 OpticClassC::InitOptic
#line 4 "decomp/ST.exe/functions/004A8FC0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_optic.cpp
   OpticClassC::InitOptic */

void __thiscall st::fn_004A8FC0(OpticClassC *this)

{
  double dVar1;
  int iVar3;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  float10 fVar8;
  float10 fVar9;
  longlong lVar10;
  InternalExceptionFrame local_5c;
  float local_18;
  float local_14;
  OpticClassC *local_10;
  ushort *local_c;
  float local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\To_optic.cpp"),0x107,0,iVar3,st::mutable_c_string("%s"),
                               "OpticClassC::InitOptic");
    if (iVar4 == 0) {
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\To_optic.cpp"),0x108);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (g_cMf32_00806754 != nullptr) {
    local_c = st::fn_006F2D90(g_cMf32_00806754,st::mutable_c_string("opticsave"),0,0);
  }
  if (local_c == nullptr) {
    DAT_00807400 = DAT_00807568;
    DAT_00807404 = DAT_0080756c;
    DAT_00807408 = DAT_00807570;
    DAT_00807420 = ((float)(int)DAT_00807568 * _DAT_007ac580) / (float)(int)DAT_00807568;
    DAT_0080740c = DAT_00807574;
    DAT_00807410 = DAT_00807568;
    DAT_00807414 = DAT_0080756c;
    DAT_00807418 = DAT_00807570;
    DAT_0080741c = DAT_00807574;
    DAT_0080745d = 0;
    DAT_008073d0 = 0x40a00000;
    _DAT_008073d4 = 0x40a00000;
    DAT_008073d8 = 0;
    DAT_008073dc = 0;
    _DAT_00807430 = 0x40200000;
    _DAT_00807434 = 0x3f800000;
    _DAT_00807438 = 0x3f800000;
    STPiece<0,1>(DAT_0080743c) = 0;
    dVar1 = (double)(_DAT_007904f8 / (_DAT_007ac580 / (float)DAT_00807570) + (float)_DAT_007901c0);
    fVar8 = st::fn_0072E150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    _DAT_00807428 = DAT_00807420;
    st_image_0080743D = 0;
    _DAT_00807441 = 0;
    _DAT_00807445 = 0;
    _DAT_00807449 = 0;
    _DAT_0080744d = 0;
    _DAT_00807451 = 0;
    _DAT_00807455 = 0;
    _DAT_00807459 = 0;
    fVar9 = ((float10)_DAT_00790580 / fVar8) * (float10)DAT_00807574;
    DAT_00807424 = (float)fVar9;
    _DAT_0080742c = (float)fVar9;
    st::fn_0072E150(0xc0000000,0x403ccccc);
    lVar10 = st::fn_0072E288();
    st::fn_006DC050
              (g_sT3DSMAPContext_00807598,g_dDXContext_0080759C,DAT_00807568,DAT_0080756c,
               DAT_00807570,DAT_00807574,(double)(_DAT_00807428 * _DAT_00790780),
               (double)(_DAT_00807428 * _DAT_00790784),(double)(_DAT_0080742c * _DAT_00790780),
               (double)(_DAT_0080742c * _DAT_00790784),10.0,9.965999793052674,(int)lVar10);
    st::fn_006DD530(g_sT3DSMAPContext_00807598,&local_18,&local_14,&local_8);
    st::fn_006DD790
              (g_sT3DSMAPContext_00807598,
               ((local_8 - _DAT_0079077c) * (float)_DAT_00790770 - _DAT_0080742c * _DAT_00790784) -
               _DAT_0080742c * _DAT_0079070c);
    st::fn_006DD800
              (g_sT3DSMAPContext_00807598,
               _DAT_0080742c * _DAT_00790784 + local_8 * (float)_DAT_00790770 + (float)_DAT_00790760
              );
    iVar5 = 0;
    pbVar3 = &g_bulkInitializedRecords_008087C7[0].field_0022;
    do {
      if (*pbVar3 == DAT_0080874d) {
        st::fn_00402720((uint *)g_bulkInitializedRecords_008087C7[iVar5].field_0024,
                           g_bulkInitializedRecords_008087C7[iVar5].field_0028);
        g_currentExceptionFrame = local_5c.previous;
        return;
      }
      pbVar3 = pbVar3 + 0x51;
      iVar5 = iVar5 + 1;
    } while ((int)pbVar3 < 0x808a71);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  puVar6 = local_c;
  puVar7 = (ushort *)&DAT_008073d0;
  for (iVar5 = 99; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
    puVar6 = puVar6 + 2;
    puVar7 = puVar7 + 2;
  }
  *puVar7 = *puVar6;
  ((char *)puVar7)[1] = (char)puVar6[1];
  st::fn_0072E150(0xc0000000,0x403ccccc);
  lVar10 = st::fn_0072E288();
  st::fn_006DC050
            (g_sT3DSMAPContext_00807598,g_dDXContext_0080759C,DAT_00807568,DAT_0080756c,DAT_00807570
             ,DAT_00807574,(double)(DAT_00807420 * _DAT_00790780),
             (double)(DAT_00807420 * _DAT_00790784),(double)(DAT_00807424 * _DAT_00790780),
             (double)(DAT_00807424 * _DAT_00790784),10.0,9.965999793052674,(int)lVar10);
  st::fn_00401B6D(DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c);
  st::fn_00405547(1);
  DAT_0080674c = 2;
  DAT_0080745d = 0;
  st::fn_006F20E0(g_cMf32_00806754,(uint *)&local_c);
  g_currentExceptionFrame = local_5c.previous;
  return;
}

// 004A9540 OpticClassC::ReInitOptic
#line 4 "decomp/ST.exe/functions/004A9540/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_optic.cpp
   OpticClassC::ReInitOptic */

void __thiscall st::fn_004A9540(OpticClassC *this,int param_1)

{
  double dVar1;
  int errorCode;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  InternalExceptionFrame local_5c;
  OpticClassC *local_18;
  int local_14;
  float local_10;
  float local_c;
  float local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  errorCode = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\To_optic.cpp"),0x13c,0,errorCode,
                               st::mutable_c_string("%s"));
    if (iVar3 == 0) {
      st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\wlad\\To_optic.cpp"),0x13d);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  DAT_0080745d = 0;
  _DAT_00807430 = 0x40200000;
  DAT_00807408 = (&DAT_00807570)[param_1 * 4];
  DAT_0080740c = (&DAT_00807574)[param_1 * 4];
  DAT_00807400 = (&DAT_00807568)[param_1 * 4];
  DAT_00807404 = (&DAT_0080756c)[param_1 * 4];
  DAT_00807420 = ((float)DAT_00807408 * _DAT_007ac580) / (float)DAT_00807570;
  uVar4 = DAT_0080743c & 0xff;
  _DAT_00807434 = 0x3f800000;
  _DAT_00807438 = 0x3f800000;
  DAT_0080743c = DAT_0080743c & 0xffffff00;
  dVar1 = (double)(_DAT_007904f8 / (_DAT_007ac580 / (float)DAT_00807570) + (float)_DAT_007901c0);
  DAT_00807410 = DAT_00807400;
  DAT_00807414 = DAT_00807404;
  DAT_00807418 = DAT_00807408;
  DAT_0080741c = DAT_0080740c;
  local_14 = DAT_00807408;
  fVar5 = st::fn_0072E150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  local_14 = (&DAT_00807574)[param_1 * 4];
  _DAT_00807428 = DAT_00807420;
  DAT_0080743c = DAT_0080743c & 0xff;
  st_image_00807440 = 0;
  _DAT_00807441 = 0;
  _DAT_00807445 = 0;
  _DAT_00807449 = 0;
  _DAT_0080744d = 0;
  _DAT_00807451 = 0;
  _DAT_00807455 = 0;
  _DAT_00807459 = 0;
  DAT_00807424 = (float)((float10)local_14 * ((float10)_DAT_00790580 / fVar5));
  _DAT_0080742c = DAT_00807424;
  st::fn_006DBD20
            (g_sT3DSMAPContext_00807598,g_dDXContext_0080759C,(&DAT_00807568)[param_1 * 4],
             (&DAT_0080756c)[param_1 * 4],(&DAT_00807570)[param_1 * 4],local_14,
             (double)(DAT_00807420 * _DAT_00790780),(double)(DAT_00807420 * _DAT_00790784),
             (double)(DAT_00807424 * _DAT_00790780),(double)(DAT_00807424 * _DAT_00790784));
  st::fn_006DD530(g_sT3DSMAPContext_00807598,&local_10,&local_c,&local_8);
  st::fn_006DD790
            (g_sT3DSMAPContext_00807598,
             ((local_8 - _DAT_0079077c) * (float)_DAT_00790770 - _DAT_0080742c * _DAT_00790784) -
             _DAT_0080742c * _DAT_0079070c);
  st::fn_006DD800
            (g_sT3DSMAPContext_00807598,
             _DAT_0080742c * _DAT_00790784 + local_8 * (float)_DAT_00790770 + (float)_DAT_00790760);
  st::fn_00401B6D(DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c);
  st::fn_00405547(1);
  DAT_0080674c = 2;
  DAT_0080745d = 0;
  if (uVar4 == 1) {
    st::fn_00403C47(1);
  }
  else {
    if (uVar4 != 2) {
      DAT_0080674c = 2;
      DAT_0080745d = 0;
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    st::fn_00403C47(1);
    st::fn_00403C47(1);
  }
  st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
  g_currentExceptionFrame = local_5c.previous;
  return;
}

