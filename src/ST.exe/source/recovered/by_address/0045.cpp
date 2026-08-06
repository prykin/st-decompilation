#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0045.cpp

// 0045F980 FUN_0045f980
#line 4 "decomp/ST.exe/functions/0045F980/decomp.c"
undefined4 __fastcall st::fn_0045F980(STBoatC *param_1)

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
    st::fn_0040314D((AnonShape_00417830_9254190A *)param_1);
    return 0;
  }
  local_EAX_34 = st::fn_00403A44((STJellyGunC *)param_1);
  if (local_EAX_34 == 1) {
    return 0;
  }
  if (local_EAX_34 == 2) {
    st::fn_00405736(param_1,local_8,local_c,local_10);
    iVar3 = param_1->vfunc_18(local_8[0],local_c[0],local_10[0]);
    if (iVar3 != 1) {
      if (param_1->field_008F == -1) {
        param_1->field_008F = 0;
      }
      param_1->field_00FA = param_1->field_00FA + 1;
      if ((short)param_1->field_00FA <= param_1->field_00F8) {
        return 0;
      }
      param_1->field_00D7 = (int)local_8[0];
      param_1->field_00DB = (int)local_c[0];
      param_1->field_00DF = (int)local_10[0];
      st::fn_00405952(param_1);
      param_1->field_00FC = param_1->field_00FC + '\x01';
      return 2;
    }
    st::fn_0040464C(param_1);
    param_1->field_00FA = 0;
    param_1->field_00FC = 0;
    iVar3 = st::fn_00404EC1(param_1->field_005B,param_1->field_005D,param_1->field_005F,
                               param_1->field_008E,(AnonShape_00495FF0_59081BDD *)param_1);
    if ((iVar3 == 0) &&
       (iVar3 = st::fn_00401325
                          (local_8[0],local_c[0],local_10[0],param_1->field_008E,
                           (RecoveredRecord_DumpClassC_00495EC0 *)param_1), iVar3 == 0)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_004023A1
                ((TLOEmbryoTy *)param_1,*(undefined **)((int)param_1->field_06CB + 0x3f));
      st::fn_00401352((int)param_1);
      return 0;
    }
  }
  else {
    if (local_EAX_34 == 3) {
      uVar1 = param_1->field_0097[param_1->field_00D3 * 4 + 3];
      if (((uVar1 & 0xfff) != 0xffe) && (uVar1 != param_1->field_006C)) {
        st::fn_004021E9(param_1,param_1->field_006C,uVar1);
      }
      if (param_1->field_008F == -1) {
        param_1->field_008F = 0;
      }
      st::fn_00401352((int)param_1);
      return 0;
    }
    if (local_EAX_34 == 0) {
      st::fn_00405952(param_1);
      this = st::fn_00405CF9(*(char *)&param_1->field_0024,param_1->field_0030);
      if (this != nullptr) {
        iVar2 = st::fn_0040230B((AnonShape_0040D540_1BB7A4CF *)this,
                                   (uint)(ushort)param_1->field_0032);
        switch(iVar2) {
        case 0:
          if (param_1->field_008F == -1) {
            param_1->field_008F = 0;
          }
          param_1->field_00FD = 1;
          st::fn_00404FF2(this,(uint)(ushort)param_1->field_0032);
          return 1;
        case 1:
          param_1->field_00FA = 0;
          st::fn_00403927(param_1);
          break;
        case -6:
        case 2:
          if (param_1->field_008F == -1) {
            param_1->field_008F = 0;
          }
          param_1->field_00FA = param_1->field_00FA + 1;
          if (param_1->field_00F8 < (short)param_1->field_00FA) {
            param_1->field_00FC = param_1->field_00FC + '\x01';
            param_1->field_00FA = 0;
            param_1->field_00FD = 1;
            st::fn_00404FF2(this,(uint)(ushort)param_1->field_0032);
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

// 0045FF10 FUN_0045ff10
#line 4 "decomp/ST.exe/functions/0045FF10/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0049D750 -> 0045FF10 @ 0049D988 */

undefined4 __fastcall st::fn_0045FF10(STGameObjC *objPtr)

{
  return objPtr->field_045D;
}

// 0045FF30 FUN_0045ff30
#line 4 "decomp/ST.exe/functions/0045FF30/decomp.c"
undefined4 __fastcall st::fn_0045FF30(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0x459);
}

