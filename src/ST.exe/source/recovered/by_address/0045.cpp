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

    st::fn_0040314D(reinterpret_cast<RecoveredRecordView_00417830_39C1D071 *>(param_1));
    return 0;
  }

  local_EAX_34 = st::fn_00403A44(reinterpret_cast<STJellyGunC *>(param_1));
  if (local_EAX_34 == 1) {
    return 0;
  }
  if (local_EAX_34 == 2) {
    st::fn_00405736(param_1,reinterpret_cast<undefined2 *>(local_8),reinterpret_cast<undefined2 *>(local_c),reinterpret_cast<undefined2 *>(local_10));
    /* ST_CALLSITE[0045F9E1]: CALL dword ptr [EAX + 0x18] */
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
      /* ST_CALLSITE[0045FAC8]: CALL 0x00405952; direct=00405952 sub_004167A0 */
      st::fn_00405952(param_1);
      param_1->field_00FC = param_1->field_00FC + '\x01';
      return 2;
    }
    /* ST_CALLSITE[0045F9EF]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
    st::fn_0040464C(param_1);
    param_1->field_00FA = 0;
    param_1->field_00FC = 0;

    iVar3 = st::fn_00404EC1(param_1->field_005B,param_1->field_005D,param_1->field_005F,
                               param_1->field_008E,reinterpret_cast<RecoveredRecordView_00495FF0_A2A90B23 *>(param_1));
    if ((iVar3 == 0) &&
       /* ST_CALLSITE[0045FA4F]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
       (iVar3 = st::fn_00401325
                          (local_8[0],local_c[0],local_10[0],param_1->field_008E,
                           reinterpret_cast<RecoveredRecord_DumpClassC_00495EC0 *>(param_1)), iVar3 == 0)) {
      /* ST_CALLSITE[0045FA65]: CALL 0x004023a1; direct=004023A1 TLOEmbryoTy::sub_0041C3F0 */
      st::fn_004023A1(reinterpret_cast<TLOEmbryoTy *>(param_1),(undefined *)param_1->field_070A);
      st::fn_00401352(reinterpret_cast<RecoveredRecord_004168B0_1FFF2915 *>(param_1));
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
      st::fn_00401352(reinterpret_cast<RecoveredRecord_004168B0_1FFF2915 *>(param_1));
      return 0;
    }
    if (local_EAX_34 == 0) {
      /* ST_CALLSITE[0045FB4D]: CALL 0x00405952; direct=00405952 sub_004167A0 */
      st::fn_00405952(param_1);
      /* ST_CALLSITE[0045FB61]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_0040D540_1BB7A4CF; source view only; no Ghidra override */
      this = st::fn_00405CF9((char)param_1->field_0024,param_1->field_0030);
      if (this != nullptr) {

        iVar2 = st::fn_0040230B(reinterpret_cast<AnonShape_0040D540_1BB7A4CF *>(this),
                                   (uint)(ushort)param_1->field_0032);
        switch(iVar2) {
        case 0:
          if (param_1->field_008F == -1) {
            param_1->field_008F = 0;
          }
          param_1->field_00FD = 1;
          /* ST_CALLSITE[0045FC28]: CALL 0x00404ff2; direct=00404FF2 STGroupBoatC::sub_0040CDB0 */
          st::fn_00404FF2(this,(uint)(ushort)param_1->field_0032);
          return 1;
        case 1:
          param_1->field_00FA = 0;
          /* ST_CALLSITE[0045FB99]: CALL 0x00403927; direct=00403927 STBoatC::sub_0045F6C0 */
          st::fn_00403927(param_1);
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
            /* ST_CALLSITE[0045FBF5]: CALL 0x00404ff2; direct=00404FF2 STGroupBoatC::sub_0040CDB0 */
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

// 0045FF30 FUN_0045ff30
#line 4 "decomp/ST.exe/functions/0045FF30/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0049A620 @ 0049A7EE -> read as EAX on
   every CFG path | 0049B4C0 @ 0049B67D -> read as EAX on every CFG path */

int __fastcall st::fn_0045FF30(RecoveredRecord_0045FF30_A86BE482 *param_1)

{
  return param_1->field_0459;
}
