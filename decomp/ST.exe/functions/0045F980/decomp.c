#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0045f980(STBoatC *param_1)

{
  ushort uVar1;
  int local_EAX_34;
  int iVar3;
  STGroupBoatC *this;
  int iVar2;
  short local_10 [2];
  short local_c [2];
  short local_8 [2];

  if (param_1->field_00E8 == 1) {
    thunk_FUN_00417830((AnonShape_00417830_9254190A *)param_1);
    return 0;
  }
  local_EAX_34 = thunk_FUN_00416400((STJellyGunC *)param_1);
  if (local_EAX_34 == 1) {
    return 0;
  }
  if (local_EAX_34 == 2) {
    thunk_FUN_00416840(param_1,local_8,local_c,local_10);
    iVar3 = param_1->vfunc_18(local_8[0],local_c[0],local_10[0]);
    if (iVar3 != 1) {
      if (param_1->field_008F == -1) {
        param_1->field_008F = 0;
      }
      param_1->field_00FA = param_1->field_00FA + 1;
      if (param_1->field_00FA <= param_1->field_00F8) {
        return 0;
      }
      param_1->field_00D7 = (int)local_8[0];
      param_1->field_00DB = (int)local_c[0];
      param_1->field_00DF = (int)local_10[0];
      sub_004167A0(param_1);
      param_1->field_00FC = param_1->field_00FC + '\x01';
      return 2;
    }
    sub_0041C5A0(param_1);
    param_1->field_00FA = 0;
    param_1->field_00FC = 0;
    iVar3 = thunk_FUN_00495ff0(param_1->field_005B,param_1->field_005D,param_1->field_005F,
                               param_1->field_008E,(AnonShape_00495FF0_59081BDD *)param_1);
    if ((iVar3 == 0) &&
       (iVar3 = DumpClassC::WritePtr
                          (local_8[0],local_c[0],local_10[0],param_1->field_008E,
                           (RecoveredRecord_DumpClassC_00495EC0 *)param_1), iVar3 == 0)) {
      TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)param_1,(undefined *)param_1->field_070A);
      thunk_FUN_004168b0((int)param_1);
      return 0;
    }
  }
  else {
    if (local_EAX_34 == 3) {
      uVar1 = param_1->field_0097[param_1->field_00D3 * 4 + 3];
      if (((uVar1 & 0xfff) != 0xffe) && (uVar1 != param_1->field_006C)) {
        thunk_FUN_00417740(param_1,param_1->field_006C,uVar1);
      }
      if (param_1->field_008F == -1) {
        param_1->field_008F = 0;
      }
      thunk_FUN_004168b0((int)param_1);
      return 0;
    }
    if (local_EAX_34 == 0) {
      sub_004167A0(param_1);
      this = thunk_FUN_0042b760(*(char *)&param_1->field_0024,param_1->field_0030);
      if (this != nullptr) {
        iVar2 = thunk_FUN_0040d540((AnonShape_0040D540_1BB7A4CF *)this,
                                   (uint)(ushort)param_1->field_0032);
        switch(iVar2) {
        case 0:
          if (param_1->field_008F == -1) {
            param_1->field_008F = 0;
          }
          param_1->field_00FD = 1;
          thunk_FUN_0040cdb0(this,(uint)(ushort)param_1->field_0032);
          return 1;
        case 1:
          param_1->field_00FA = 0;
          STBoatC::sub_0045F6C0(param_1);
          break;
        case -6:
        case 2:
          if (param_1->field_008F == -1) {
            param_1->field_008F = 0;
          }
          param_1->field_00FA = param_1->field_00FA + 1;
          if (param_1->field_00F8 < param_1->field_00FA) {
            param_1->field_00FC = param_1->field_00FC + '\x01';
            param_1->field_00FA = 0;
            param_1->field_00FD = 1;
            thunk_FUN_0040cdb0(this,(uint)(ushort)param_1->field_0032);
            return 2;
          }
          break;
        default:
          goto switchD_0045fb89_caseD_fffffffb;
        }
        return 0;
      }
    }
  }
switchD_0045fb89_caseD_fffffffb:
  return 0xffffffff;
}

