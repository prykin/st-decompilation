#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00417a20(void *this,short param_1,short param_2,short param_3,int param_4)

{
  uint uVar1;
  int iVar2;

  if (STField<int>(this,0x2c) == 0) {
    if (param_4 == 1) {

      thunk_FUN_00495ff0(STField<short>(this,0x5b),STField<short>(this,0x5d),
                         STField<short>(this,0x5f),STField<byte>(this,0x8e),this);
    }
    STField<short>(this,0x47) = param_1;
    STField<short>(this,0x4b) = param_3;
    STField<short>(this,0x41) = param_1 * 0xc9 + 100;
    STField<short>(this,0x49) = param_2;
    STField<short>(this,0x43) = param_2 * 0xc9 + 100;
    STField<short>(this,0x45) = param_3 * 200 + 100;
    if (param_4 == 1) {
      /* ST_CALLSITE[00417AC1]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
      uVar1 = DumpClassC::WritePtr(param_1,param_2,param_3,STField<byte>(this,0x8e),this);
      return uVar1;
    }
  }
  else {
    if (param_4 == 1) {

      thunk_FUN_00495ff0(STField<short>(this,0x5b),STField<short>(this,0x5d),
                         STField<short>(this,0x5f),STField<byte>(this,0x8e),this);

      thunk_FUN_00495ff0(STField<short>(this,0x5b) + 1,STField<short>(this,0x5d),
                         STField<short>(this,0x5f),STField<byte>(this,0x8e),this);

      thunk_FUN_00495ff0(STField<short>(this,0x5b),STField<short>(this,0x5d) + 1,
                         STField<short>(this,0x5f),STField<byte>(this,0x8e),this);

      thunk_FUN_00495ff0(STField<short>(this,0x5b) + 1,STField<short>(this,0x5d) + 1,
                         STField<short>(this,0x5f),STField<byte>(this,0x8e),this);
    }
    STField<short>(this,0x47) = param_1;
    STField<short>(this,0x4b) = param_3;
    STField<short>(this,0x41) = param_1 * 0xc9 + 100;
    STField<short>(this,0x49) = param_2;
    STField<short>(this,0x43) = param_2 * 0xc9 + 100;
    STField<short>(this,0x45) = param_3 * 200 + 100;
    if (param_4 == 1) {
      /* ST_CALLSITE[00417BD6]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
      iVar2 = DumpClassC::WritePtr(param_1,param_2,param_3,STField<byte>(this,0x8e),this);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[00417C0C]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
      iVar2 = DumpClassC::WritePtr
                        (STField<short>(this,0x47) + 1,STField<short>(this,0x49),
                         STField<short>(this,0x4b),STField<byte>(this,0x8e),this);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[00417C42]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
      iVar2 = DumpClassC::WritePtr
                        (STField<short>(this,0x47),STField<short>(this,0x49) + 1,
                         STField<short>(this,0x4b),STField<byte>(this,0x8e),this);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[00417C7A]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
      uVar1 = DumpClassC::WritePtr
                        (STField<short>(this,0x47) + 1,STField<short>(this,0x49) + 1,
                         STField<short>(this,0x4b),STField<byte>(this,0x8e),this);
      return uVar1;
    }
  }
  return 0;
}

