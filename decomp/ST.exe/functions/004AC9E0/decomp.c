#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004ac9e0(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar4;
  int local_EAX_370;
  int iVar3;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_28;
  uint local_20;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_00790798;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_8 = 0;
  if (STField<int>(this,0x18) == -1) {
    return 0xffffffff;
  }
  local_20 = 1;
  local_28 = 0;
  ExceptionList = &local_14;
cf_continue_loop_004ACA23:
  do {
    if (STField<int>(this,0x14) <= (int)local_28) {
      ExceptionList = local_14;
      return 0;
    }
    if ((STField<uint>(this,0x1c) & local_20) != 0) {
      iVar6 = local_28 * 0x24;
      iVar4 = STField<int>(this,0x20) + iVar6;
      if ((((byte *)iVar4)[0xe] & 1) == 0) {
        uVar7 = param_1 - STField<int>(iVar4,0x1C);
        STField<int>(iVar4,0x1C) = param_1;
        bVar2 = false;
        iVar4 = STField<int>(this,0x20) + iVar6;
        piVar5 = (int *)(STField<int>(iVar4,0x4) + STField<int>(iVar4,0x18) * 4);
        iVar8 = *piVar5;
        iVar1 = STField<int>(iVar4,0x20);
        if (uVar7 < (uint)(iVar8 + iVar1)) {
          if (iVar8 < (int)uVar7) {
            STField<uint>(iVar4,0x20) = (iVar1 - uVar7) + iVar8;
            iVar6 = iVar6 + STField<int>(this,0x20);
            *(undefined4 *)(STField<int>(iVar6,0x4) + STField<int>(iVar6,0x18) * 4) = 0;
            local_28 = local_28 + 1;
            local_20 = local_20 << 1;
          }
          else {
            *piVar5 = iVar8 - uVar7;
            local_28 = local_28 + 1;
            local_20 = local_20 << 1;
          }
          goto cf_continue_loop_004ACA23;
        }
        if (iVar1 != 0) {
          STField<undefined4>(iVar4,0x20) = 0;
          ST3DSMAPContext::sub_006E9CB0
                    (STField<ST3DSMAPContext *>(this,0x3c),STField<uint *>(this,0x18),local_28);
        }
        piVar5 = (int *)(STField<int>(this,0x20) + iVar6);
        *(undefined4 *)(piVar5[1] + piVar5[6] * 4) = *(undefined4 *)(piVar5[6] * 4 + 0x31 + *piVar5);
        iVar4 = STField<int>(this,0x20) + iVar6;
        if (STField<int>(iVar4,0x18) == STField<int>(iVar4,0x14)) {
          if (((char *)iVar4)[0xd] == '\x02') {
            /* ST_CALLSITE[004ACB1D]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            STT3DSprC::StopShow(this,(byte)local_28);
            local_28 = local_28 + 1;
            local_20 = local_20 << 1;
            goto cf_continue_loop_004ACA23;
          }
          if (((char *)iVar4)[0xd] == '\x01') goto LAB_004acbdc;
        }
        iVar8 = uVar7 - iVar8;
        if ((iVar8 == 0) || ((((byte *)iVar4)[0xe] & 4) == 0)) {
          iVar3 = thunk_FUN_004ac950(this,local_28);
          *(int *)(STField<int>(this,0x20) + 0x18 + iVar6) = iVar3;
          if (local_28 == (int)STField<char>(this,0x13)) {
            STField<undefined4>(this,0x30) =
                 *(undefined4 *)(STField<int>(this,0x20) + 0x18 + iVar6);
          }
        }
        else {
          do {
            if (iVar8 < 0) goto LAB_004acb87;
            local_EAX_370 = thunk_FUN_004ac950(this,local_28);
            *(int *)(STField<int>(this,0x20) + 0x18 + iVar6) = local_EAX_370;
            piVar5 = (int *)(STField<int>(this,0x20) + iVar6);
            iVar8 = iVar8 - *(int *)(*piVar5 + 0x31 + piVar5[6] * 4);
          } while ((piVar5[6] != piVar5[5]) ||
                  ((STField<char>(piVar5,0xd) != '\x02' &&
                   (STField<char>(piVar5,0xd) != '\x01'))));
          bVar2 = true;
LAB_004acb87:
          if (!bVar2) {
            iVar4 = STField<int>(this,0x20) + iVar6;
            *(int *)(STField<int>(iVar4,0x4) + STField<int>(iVar4,0x18) * 4) = -iVar8;
          }
        }
        ST3DSMAPContext::sub_006EA270
                  (STField<ST3DSMAPContext *>(this,0x3c),STField<uint>(this,0x18),local_28,
                   *(uint *)(STField<int>(this,0x20) + 0x18 + iVar6));
      }
    }
LAB_004acbdc:
    local_28 = local_28 + 1;
    local_20 = local_20 << 1;
  } while( true );
}

