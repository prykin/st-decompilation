#include "../../pseudocode_runtime.h"


undefined4 __thiscall
sub_00415B30(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6,byte param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_007901a0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  STField<short>(this,0x34) = param_1;
  STField<short>(this,0x36) = param_2;
  STField<short>(this,0x38) = param_3;
  STField<short>(this,0x3a) = param_4;
  STField<short>(this,0x3c) = param_5;
  STField<short>(this,0x3e) = param_6;
  STField<short>(this,0x41) = param_1;
  STField<short>(this,0x43) = param_2;
  STField<short>(this,0x45) = param_3;
  iVar7 = (int)param_1;
  STField<short>(this,0x47) = param_1 / 0xc9;
  iVar3 = (int)param_2;
  STField<short>(this,0x49) = param_2 / 0xc9;
  iVar4 = (int)param_3;
  STField<short>(this,0x4b) = param_3 / 200;
  iVar2 = (int)(short)((param_1 / 0xc9) * 0xc9 + 100);
  if ((((iVar2 + -0x1e < iVar7) && (iVar7 < iVar2 + 0x1e)) &&
      (iVar2 = (int)(short)((param_2 / 0xc9) * 0xc9 + 100), iVar2 + -0x1e < iVar3)) &&
     (((iVar3 < iVar2 + 0x1e &&
       (iVar2 = (int)(short)((param_3 / 200) * 200 + 100), iVar2 + -0x1d < iVar4)) &&
      (iVar4 < iVar2 + 0x1d)))) {
    STField<undefined1>(this,0x4d) = 0;
  }
  else {
    STField<undefined1>(this,0x4d) = 1;
  }
  STField<undefined1>(this,0x40) = STField<undefined1>(this,0x4d);
  STField<byte>(this,99) = param_7;
  STField<undefined4>(this,0x68) = 0;
  iVar2 = FUN_006acf0d(iVar7,iVar3,iVar4,(int)param_4,(int)param_5,(int)param_6);
  STField<int>(this,100) = iVar2 / (int)(uint)param_7;
  if (iVar2 / (int)(uint)param_7 < 1) {
    STField<undefined4>(this,100) = 1;
  }
  iVar2 = STField<int>(this,100);
  sVar6 = param_1 + (short)((param_4 - iVar7) / iVar2);
  STField<short>(this,0x4e) = sVar6;
  sVar1 = (short)((param_5 - iVar3) / iVar2) + param_2;
  STField<short>(this,0x50) = sVar1;
  sVar5 = param_3 + (short)((param_6 - iVar4) / iVar2);
  STField<short>(this,0x52) = sVar5;
  STField<short>(this,0x54) = sVar6 / 0xc9;
  STField<short>(this,0x56) = sVar1 / 0xc9;
  STField<short>(this,0x58) = sVar5 / 200;
  iVar2 = (int)(short)((sVar6 / 0xc9) * 0xc9 + 100);
  if (((iVar2 + -0x1e < (int)sVar6) && ((int)sVar6 < iVar2 + 0x1e)) &&
     ((iVar2 = (int)(short)((sVar1 / 0xc9) * 0xc9 + 100), iVar2 + -0x1e < (int)sVar1 &&
      ((((int)sVar1 < iVar2 + 0x1e &&
        (iVar2 = (int)(short)((sVar5 / 200) * 200 + 100), iVar2 + -0x1d < (int)sVar5)) &&
       ((int)sVar5 < iVar2 + 0x1d)))))) {
    STField<undefined1>(this,0x5a) = 0;
  }
  else {
    STField<undefined1>(this,0x5a) = 1;
  }
  if ((STField<char>(this,0x4d) == '\0') && (STField<char>(this,0x5a) == '\x01')) {
    STField<undefined4>(this,0x7a) = 1;
  }
  else {
    STField<undefined4>(this,0x7a) = 0;
  }
  STField<undefined4>(this,0x7e) = 1;
  ExceptionList = local_14;
  return 0;
}

