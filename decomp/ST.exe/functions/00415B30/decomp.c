#include "../../pseudocode_runtime.h"


undefined4 __thiscall
sub_00415B30(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6,byte param_7)

{
  short sVar1;
  int iVar3;
  int iVar2;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
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
  iVar8 = (int)param_1;
  STField<short>(this,0x47) = param_1 / 0xc9;
  iVar4 = (int)param_2;
  STField<short>(this,0x49) = param_2 / 0xc9;
  iVar5 = (int)param_3;
  STField<short>(this,0x4b) = param_3 / 200;
  iVar3 = (int)(short)((param_1 / 0xc9) * 0xc9 + 100);
  if ((((iVar3 + -0x1e < iVar8) && (iVar8 < iVar3 + 0x1e)) &&
      (iVar3 = (int)(short)((param_2 / 0xc9) * 0xc9 + 100), iVar3 + -0x1e < iVar4)) &&
     (((iVar4 < iVar3 + 0x1e &&
       (iVar3 = (int)(short)((param_3 / 200) * 200 + 100), iVar3 + -0x1d < iVar5)) &&
      (iVar5 < iVar3 + 0x1d)))) {
    STField<undefined1>(this,0x4d) = 0;
  }
  else {
    STField<undefined1>(this,0x4d) = 1;
  }
  STField<undefined1>(this,0x40) = STField<undefined1>(this,0x4d);
  STField<byte>(this,99) = param_7;
  STField<undefined4>(this,0x68) = 0;
  iVar2 = FUN_006acf0d(iVar8,iVar4,iVar5,(int)param_4,(int)param_5,(int)param_6);
  STField<int>(this,100) = iVar2 / (int)(uint)param_7;
  if (iVar2 / (int)(uint)param_7 < 1) {
    STField<undefined4>(this,100) = 1;
  }
  iVar3 = STField<int>(this,100);
  sVar7 = param_1 + (short)((param_4 - iVar8) / iVar3);
  STField<short>(this,0x4e) = sVar7;
  sVar1 = (short)((param_5 - iVar4) / iVar3) + param_2;
  STField<short>(this,0x50) = sVar1;
  sVar6 = param_3 + (short)((param_6 - iVar5) / iVar3);
  STField<short>(this,0x52) = sVar6;
  STField<short>(this,0x54) = sVar7 / 0xc9;
  STField<short>(this,0x56) = sVar1 / 0xc9;
  STField<short>(this,0x58) = sVar6 / 200;
  iVar3 = (int)(short)((sVar7 / 0xc9) * 0xc9 + 100);
  if (((iVar3 + -0x1e < (int)sVar7) && ((int)sVar7 < iVar3 + 0x1e)) &&
     ((iVar3 = (int)(short)((sVar1 / 0xc9) * 0xc9 + 100), iVar3 + -0x1e < (int)sVar1 &&
      ((((int)sVar1 < iVar3 + 0x1e &&
        (iVar3 = (int)(short)((sVar6 / 200) * 200 + 100), iVar3 + -0x1d < (int)sVar6)) &&
       ((int)sVar6 < iVar3 + 0x1d)))))) {
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

