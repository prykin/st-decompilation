#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004b8c80(TLOBaseTy *param_1)

{
  undefined4 *puVar1;
  TLOBaseTy_field_0245State TVar2;
  AnonPointee_TLOBaseTy_01F5 *pAVar3;
  byte bVar4;
  int iVar5;
  int local_EAX_675;
  int local_EAX_852;
  int local_EAX_1028;
  int iVar6;
  int TVar6;
  int uVar4;
  TLOBaseTyVTable *pTVar7;
  uint uVar8;
  undefined2 arg_2;
  undefined4 local_2c [2];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  AnonShape_0060D340_D77FEBE7 *local_c;
  int local_8;

  TVar2 = param_1->field_0245;
  local_8 = 0;
  if (TVar2 == CASE_1) {
    if (param_1->field_05DF == 5) {
      if (param_1->field_04CC + 2 <= g_playSystem_00802A38->field_00E4) {
        param_1->field_04CC = g_playSystem_00802A38->field_00E4;
        iVar5 = param_1->field_04C8;
        iVar6 = iVar5 + 1;
        param_1->field_04C8 = iVar6;
        if (PTR_00806724->entryCount + -1 <= iVar6) {
          local_18 = param_1->field_0008;
          local_24 = param_1->field_000C->systemId;
          local_20 = 0;
          local_1c = 10;
          sub_006E60A0(param_1,local_2c);
          return 0;
        }
        STT3DSprC::sub_004ACE30
                  ((STT3DSprC *)&param_1->field_01D5,PTR_00806724[1].entries[iVar5 + -0xc],
                   (int)PTR_00806724->field_002C);
        return 0;
      }
    }
    else {
      puVar1 = &param_1->field_01D5;
      iVar5 = thunk_FUN_004ac910(puVar1,'\x04');
      if ((*(int *)&param_1->field_01F5->field_0xa4 <= iVar5) &&
         (iVar5 = thunk_FUN_004ac910(puVar1,'\x05'),
         *(int *)&param_1->field_01F5->field_0xc8 <= iVar5)) {
        local_18 = param_1->field_0008;
        local_24 = param_1->field_000C->systemId;
        local_20 = 0;
        local_1c = 10;
        sub_006E60A0(param_1,local_2c);
        return 0;
      }
      param_1->vfunc_D8();
      iVar5 = thunk_FUN_004ac910(puVar1,'\x04');
      if (iVar5 == *(int *)(&DAT_007cdf52 + *(int *)(&DAT_0079125c + param_1->field_0235 * 4) * 0x32
                           )) {
        STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
        STT3DSprC::StopShow((STT3DSprC *)puVar1,0xd);
        STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
        STT3DSprC::StopShow((STT3DSprC *)puVar1,9);
        STT3DSprC::StopShow((STT3DSprC *)puVar1,8);
        STT3DSprC::StopShow((STT3DSprC *)puVar1,7);
        STT3DSprC::StopShow((STT3DSprC *)puVar1,0x10);
        if (*(int *)(&DAT_00791a10 + param_1->field_0235 * 4) != 0) {
          thunk_FUN_004cbf70(param_1);
        }
        uVar8 = (uint)(param_1->field_024D == 4);
        uVar4 = LookupRecordByte(*(char *)&param_1->field_0024);
        uVar4 = (int)(byte)uVar4;
        thunk_FUN_0062b830((int)param_1->field_0041,(int)param_1->field_0043,
                           (int)param_1->field_0045,param_1->field_05AC,(int *)param_1,0xffffffff,
                           0xffffffff,uVar4,uVar8);
        return 0;
      }
      iVar5 = *(int *)(&DAT_0079125c + param_1->field_0235 * 4);
      iVar6 = thunk_FUN_004ac910(puVar1,'\x04');
      if (iVar6 == *(int *)(&DAT_007cdf5a + iVar5 * 0x32)) {
        iVar5 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)puVar1,5,PTR_00806764,"expl_bbt0" + iVar5 * 0x32,
                           0x1d);
        if (iVar5 != 0) {
          return 0xffff;
        }
        STT3DSprC::StartShow((STT3DSprC *)puVar1,5,g_playSystem_00802A38->field_00E4);
      }
    }
    return 0;
  }
  if (TVar2 == CASE_5) {
    if (((param_1->field_0299 != 0) &&
        (iVar5 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e'),
        param_1->field_01F5->field_0208 + *(int *)&param_1->field_0x2a1 <= iVar5)) &&
       (*(int *)&param_1->field_0x29d == 0)) {
      TLOBaseTy::sub_004C4550(param_1,nullptr);
    }
  }
  else if (TVar2 == CASE_6) {
    if (param_1->field_04BC != 4) {
      bVar4 = LookupRecordByte(*(char *)&param_1->field_023D);
      if (bVar4 == 3) {
        local_EAX_852 = LookupRecordByte(*(char *)&param_1->field_023D);
        if (g_playSystem_00802A38->field_00E4 <
            *(int *)(&DAT_007e3dc0 + ((uint)(byte)local_EAX_852 + param_1->field_0235 * 3) * 4) / 3
            + param_1->field_04B8) goto cf_common_exit_004B9130;
      }
      else {
        iVar5 = thunk_FUN_004ac910(&param_1->field_01D5,'\x05');
        if (iVar5 != *(int *)&param_1->field_01F5->field_0xc8) goto cf_common_exit_004B9130;
        iVar5 = param_1->field_04BC;
        if (iVar5 == 1) {
          param_1->field_04BC = 2;
          TLOBaseTy::LoadImages(param_1);
          param_1->vfunc_D8();
          return 0;
        }
        if (iVar5 == 2) {
          local_EAX_1028 = LookupRecordByte(*(char *)&param_1->field_023D);
          if (*(int *)(&DAT_007e3dc0 + ((uint)(byte)local_EAX_1028 + param_1->field_0235 * 3) * 4) /
              3 + param_1->field_04B8 <= g_playSystem_00802A38->field_00E4) {
            param_1->vfunc_90(3,0x361);
            param_1->field_04BC = 3;
            TLOBaseTy::LoadImages(param_1);
            param_1->vfunc_90(3,0x361);
            param_1->vfunc_D8();
            return 0;
          }
          goto cf_common_exit_004B9130;
        }
        if (iVar5 != 3) goto cf_common_exit_004B9130;
      }
      param_1->field_04BC = 4;
      TLOBaseTy::LoadImages(param_1);
      param_1->vfunc_90(3,0x362);
cf_common_exit_004B9130:
      param_1->vfunc_D8();
      return 0;
    }
    puVar1 = &param_1->field_01D5;
    iVar5 = thunk_FUN_004ac910(puVar1,'\x04');
    if (iVar5 == 0x15) {
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xd);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,9);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,8);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,7);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0x10);
      if (*(int *)(&DAT_00791a10 + param_1->field_0235 * 4) != 0) {
        thunk_FUN_004cbf70(param_1);
      }
      TLOBaseTy::sub_004CC900(param_1);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,5);
      iVar5 = param_1->vfunc_08();
      if (iVar5 != 0) {
        param_1->SetActivity(0);
        param_1->vfunc_D8();
        return 0;
      }
      goto cf_common_exit_004B9130;
    }
    iVar5 = thunk_FUN_004ac910(puVar1,'\x04');
    if (iVar5 != *(int *)&param_1->field_01F5->field_0xa4) goto cf_common_exit_004B9130;
    if (*(int *)(&DAT_007e1c50 + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      thunk_FUN_004d88f0(*(char *)&param_1->field_0024,
                         (param_1->field_05D7 *
                          *(int *)(&DAT_007e1c50 +
                                  (param_1->field_0235 * 3 + param_1->field_0239) * 4) * 0x3c) /
                         10000);
    }
    if (*(int *)(&DAT_007e24fc + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      thunk_FUN_004d8a30(*(char *)&param_1->field_0024,
                         (param_1->field_05D7 *
                          *(int *)(&DAT_007e24fc +
                                  (param_1->field_0235 * 3 + param_1->field_0239) * 4) * 0x3c) /
                         10000);
    }
    if (*(int *)(&DAT_008545ac + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      thunk_FUN_004d87b0(*(char *)&param_1->field_0024,
                         (param_1->field_05D7 *
                          *(int *)(&DAT_008545ac +
                                  (param_1->field_0235 * 3 + param_1->field_0239) * 4) * 0x3c) /
                         10000);
    }
    if (*(int *)(&DAT_007e3160 + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      thunk_FUN_004e4380((int)param_1->field_0024,
                         (param_1->field_05D7 *
                          *(int *)(&DAT_007e3160 +
                                  (param_1->field_0235 * 3 + param_1->field_0239) * 4) * 0x3c) /
                         10000);
    }
    thunk_FUN_004d78e0(*(char *)&param_1->field_0024);
    if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
      thunk_FUN_004d8b70((char)param_1->field_0024);
    }
    if (param_1->field_0024 != (byte *)(uint)(byte)param_1->field_0010->field_112D)
    goto cf_common_exit_004B8F5A;
    thunk_FUN_0052af50(0,(float)param_1->field_01F9,(float)param_1->field_01FD);
    local_EAX_675 = LookupRecordByte(*(char *)&param_1->field_0024);
    local_EAX_675 = (int)(byte)local_EAX_675;
    if (local_EAX_675 == 1) {
      pTVar7 = param_1->vtable;
      arg_2 = 0x68;
    }
    else {
      if (local_EAX_675 == 2) {
        param_1->vfunc_90(6,0x69);
        goto cf_common_exit_004B8F5A;
      }
      if (local_EAX_675 != 3) goto cf_common_exit_004B8F5A;
      pTVar7 = param_1->vtable;
      arg_2 = 0x6a;
    }
    (*pTVar7->vfunc_90)(param_1,6,arg_2);
cf_common_exit_004B8F5A:
    param_1->field_0241 = 0;
    param_1->field_05D7 = 0;
    param_1->field_05DF = 1;
    TLOBaseTy::SetState(param_1,1,0);
    local_18 = param_1->field_0008;
    local_24 = param_1->field_000C->systemId;
    local_20 = 0;
    local_1c = 10;
    sub_006E60A0(param_1,local_2c);
    param_1->vfunc_D8();
    return 0;
  }
  if (((param_1->field_0255 == 0) || (param_1->field_0245 != CASE_0)) || (param_1->field_0249 != 2))
  {
    if (param_1->field_0245 != CASE_4) {
      iVar5 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
      if (((iVar5 == param_1->field_01F5->field_020C) &&
          (local_8 = 1, param_1->field_05AC == CASE_65)) &&
         ((param_1->field_0408 != 0 &&
          ((param_1->field_040C != nullptr &&
           (iVar5 = STPlaySystemC::sub_006E62D0
                              (g_playSystem_00802A38,param_1->field_040C,(int *)&local_c),
           iVar5 == 0)))))) {
        thunk_FUN_0060d340(local_c);
        param_1->vfunc_90(3,0x3d9);
      }
      if (*(int *)(&DAT_00791a10 + param_1->field_0235 * 4) != 0) {
        local_8 = thunk_FUN_004cc130((AnonShape_004CC130_08293212 *)param_1);
      }
      goto cf_common_join_004B92EE;
    }
    if (param_1->field_03DC != 0) goto cf_common_join_004B92EE;
  }
  else {
    if (g_playSystem_00802A38->field_00E4 <
        *(int *)(&DAT_00792040 + param_1->field_0235 * 4) + param_1->field_0285)
    goto cf_common_join_004B92EE;
    param_1->field_0285 = g_playSystem_00802A38->field_00E4;
    iVar5 = param_1->field_0259 / 0xf;
    if (*(int *)(&DAT_007be8c8 + iVar5 * 0x60) != 0) {
      iVar5 = (((*(int *)(&DAT_007be8c8 + iVar5 * 0x60) < 1) - 1 & 2) - 1) + iVar5;
      if (iVar5 < 0x18) {
        if (iVar5 < 0) {
          iVar5 = 0x17;
        }
        TLOBaseTy::sub_004B98E0(param_1,iVar5 * 0xf);
      }
      else {
        TLOBaseTy::sub_004B98E0(param_1,0);
      }
      goto cf_common_join_004B92EE;
    }
  }
  local_8 = 1;
cf_common_join_004B92EE:
  puVar1 = &param_1->field_01D5;
  iVar5 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\x0e');
  iVar6 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
  if (((iVar6 < iVar5) && (iVar5 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r'), 1 < iVar5)) &&
     (iVar5 = thunk_FUN_004cba10(), iVar5 == 2)) {
    pAVar3 = param_1->field_01F5;
    iVar5 = pAVar3->field_0208;
    if (iVar5 < (int)pAVar3->field_020C) {
      iVar5 = pAVar3->field_0210 - iVar5;
    }
    else {
      iVar5 = iVar5 - pAVar3->field_0210;
    }
    local_c = (AnonShape_0060D340_D77FEBE7 *)STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\x0e');
    iVar6 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
    if (((int)local_c + (-1 - iVar6) <= iVar5) && ((param_1->field_01F1 & 0x2000) == 0)) {
      TLOBaseTy::sub_004CA7B0(param_1,(uint *)0xd,0);
    }
  }
  if ((local_8 != 0) &&
     (TVar6 = thunk_FUN_004b8c00((AnonShape_004B8C00_93076312 *)param_1),
     TVar6 != param_1->field_0245)) {
    TLOBaseTy::SetState(param_1,TVar6,1);
  }
  if ((param_1->field_05DF != 0) && (param_1->field_04CC + 2 <= g_playSystem_00802A38->field_00E4))
  {
    param_1->field_04CC = g_playSystem_00802A38->field_00E4;
    iVar5 = param_1->field_04C8;
    iVar6 = iVar5 + -1;
    param_1->field_04C8 = iVar6;
    if (iVar6 == 0) {
      iVar6 = 0;
      param_1->field_05DF = 0;
      uVar8 = 0;
    }
    else {
      iVar6 = (int)PTR_00806724->field_002C;
      uVar8 = PTR_00806724->entries[iVar5 + -1];
    }
    STT3DSprC::sub_004ACE30((STT3DSprC *)&param_1->field_01D5,uVar8,iVar6);
  }
  param_1->vfunc_D8();
  return 0;
}

