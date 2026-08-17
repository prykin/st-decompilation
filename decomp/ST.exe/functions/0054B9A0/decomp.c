#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 005449B0 -> 0054B9A0 @ 005450D6 | 005449B0 -> 0054B9A0 @ 005450FB | 005449B0 ->
   0054B9A0 @ 0054511E | 005449B0 -> 0054B9A0 @ 0054515B */

undefined4 __thiscall
FUN_0054b9a0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = param_1 + 0xb;
  iVar2 = param_1 + -0xc + param_3;
  iVar1 = param_2 + 5;
  iVar3 = param_2 + -6 + param_4;
  if ((((param_5 <= iVar4) || (iVar2 <= param_5)) || (param_6 <= iVar1)) || (iVar3 <= param_6)) {
    if (((DAT_00808784 == 0) && (DAT_00808788 == 0)) && ((DAT_0080878c == 0 && (DAT_00808790 == 0)))
       ) {
      if (param_5 <= iVar4) {
        if (param_6 <= iVar1) {
          /* ST_CALLSITE[0054BA61]: CALL 0x004017e4; direct=004017E4 OpticClassC::sub_004AB070 */
          iVar4 = OpticClassC::sub_004AB070
                            (g_opticClass_007FB2A0,CASE_5,1.4013e-45,
                             (uint)STField<byte>(this,0xd1),0);
          if (param_7 != 0) {
            /* ST_CALLSITE[0054BA84]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
            CursorClassTy::SetGCType
                      (this,(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_40,STField<int>(this,0x34),
                       STField<int>(this,0x38));
          }
          STField<undefined1>(this,0xd1) = 0;
          return 1;
        }
        if (iVar3 <= param_6) {
          /* ST_CALLSITE[0054BAB5]: CALL 0x004017e4; direct=004017E4 OpticClassC::sub_004AB070 */
          iVar4 = OpticClassC::sub_004AB070
                            (g_opticClass_007FB2A0,CASE_6,1.4013e-45,
                             (uint)STField<byte>(this,0xd1),0);
          if (param_7 != 0) {
            /* ST_CALLSITE[0054BAD8]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
            CursorClassTy::SetGCType
                      (this,(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_42,STField<int>(this,0x34),
                       STField<int>(this,0x38));
          }
          STField<undefined1>(this,0xd1) = 0;
          return 1;
        }
      }
      if (iVar2 <= param_5) {
        if (param_6 <= iVar1) {
          /* ST_CALLSITE[0054BB12]: CALL 0x004017e4; direct=004017E4 OpticClassC::sub_004AB070 */
          iVar4 = OpticClassC::sub_004AB070
                            (g_opticClass_007FB2A0,CASE_7,1.4013e-45,
                             (uint)STField<byte>(this,0xd1),0);
          if (param_7 != 0) {
            /* ST_CALLSITE[0054BB35]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
            CursorClassTy::SetGCType
                      (this,(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_41,STField<int>(this,0x34),
                       STField<int>(this,0x38));
          }
          STField<undefined1>(this,0xd1) = 0;
          return 1;
        }
        if (iVar3 <= param_6) {
          /* ST_CALLSITE[0054BB66]: CALL 0x004017e4; direct=004017E4 OpticClassC::sub_004AB070 */
          iVar4 = OpticClassC::sub_004AB070
                            (g_opticClass_007FB2A0,CASE_8,1.4013e-45,
                             (uint)STField<byte>(this,0xd1),0);
          if (param_7 != 0) {
            /* ST_CALLSITE[0054BB89]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
            CursorClassTy::SetGCType
                      (this,(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_43,STField<int>(this,0x34),
                       STField<int>(this,0x38));
          }
          STField<undefined1>(this,0xd1) = 0;
          return 1;
        }
      }
      if (param_5 <= iVar4) {
        /* ST_CALLSITE[0054BBBA]: CALL 0x004017e4; direct=004017E4 OpticClassC::sub_004AB070 */
        iVar4 = OpticClassC::sub_004AB070
                          (g_opticClass_007FB2A0,CASE_1,1.4013e-45,(uint)STField<byte>(this,0xd1)
                           ,0);
        if (param_7 != 0) {
          /* ST_CALLSITE[0054BBDD]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
          CursorClassTy::SetGCType
                    (this,(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_3F,STField<int>(this,0x34),
                     STField<int>(this,0x38));
        }
        STField<undefined1>(this,0xd1) = 0;
        return 1;
      }
      if (iVar2 <= param_5) {
        /* ST_CALLSITE[0054BC0F]: CALL 0x004017e4; direct=004017E4 OpticClassC::sub_004AB070 */
        iVar4 = OpticClassC::sub_004AB070
                          (g_opticClass_007FB2A0,CASE_2,1.4013e-45,(uint)STField<byte>(this,0xd1)
                           ,0);
        if (param_7 != 0) {
          /* ST_CALLSITE[0054BC32]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
          CursorClassTy::SetGCType
                    (this,(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_3E,STField<int>(this,0x34),
                     STField<int>(this,0x38));
        }
        STField<undefined1>(this,0xd1) = 0;
        return 1;
      }
      if (param_6 <= iVar1) {
        /* ST_CALLSITE[0054BC63]: CALL 0x004017e4; direct=004017E4 OpticClassC::sub_004AB070 */
        iVar4 = OpticClassC::sub_004AB070
                          (g_opticClass_007FB2A0,CASE_3,1.4013e-45,(uint)STField<byte>(this,0xd1)
                           ,0);
        if (param_7 != 0) {
          /* ST_CALLSITE[0054BC86]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
          CursorClassTy::SetGCType
                    (this,(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_3C,STField<int>(this,0x34),
                     STField<int>(this,0x38));
        }
        STField<undefined1>(this,0xd1) = 0;
        return 1;
      }
      if (iVar3 <= param_6) {
        /* ST_CALLSITE[0054BCB7]: CALL 0x004017e4; direct=004017E4 OpticClassC::sub_004AB070 */
        iVar4 = OpticClassC::sub_004AB070
                          (g_opticClass_007FB2A0,CASE_4,1.4013e-45,(uint)STField<byte>(this,0xd1)
                           ,0);
        if (param_7 != 0) {
          /* ST_CALLSITE[0054BCDA]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
          CursorClassTy::SetGCType
                    (this,(-(ushort)(iVar4 != -2) & 0xfff6) + CASE_3D,STField<int>(this,0x34),
                     STField<int>(this,0x38));
        }
        STField<undefined1>(this,0xd1) = 0;
        return 1;
      }
      STField<undefined1>(this,0xd1) = 1;
      return 1;
    }
    goto cf_common_exit_0054BA0C;
  }
  if (STField<int>(this,0x496) != 0) {
    if (STField<char>(this,0xde) == '\0') goto cf_common_exit_0054BA0C;
    iVar4 = FUN_00405687((int)this);
    if (iVar4 != 0) goto cf_common_exit_0054BA0C;
  }
  /* ST_CALLSITE[0054BA07]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
  CursorClassTy::SetGCType(this,CASE_0,STField<int>(this,0x34),STField<int>(this,0x38));
cf_common_exit_0054BA0C:
  STField<undefined1>(this,0xd1) = 1;
  return 0;
}

