#include "../../pseudocode_runtime.h"


void __thiscall FUN_004cf640(void *this,int *param_1)

{
  bool bVar1;
  byte bVar2;
  DArrayTy *pDVar3;
  int uVar3;
  int *piVar5;
  int iVar6;
  int iVar5;
  int iVar7;
  int *piVar8;
  uint index;
  int local_fc [40];
  int local_5c [2];
  char local_54;
  byte local_53;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  uint local_4a [7];
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int *local_14;
  undefined *local_10;
  undefined *local_c;
  int local_8;
  int *piVar4;

  local_20 = 0;
  local_18 = 0;
  local_1c = 0;
  local_24 = 0;
  local_8 = 4;
  piVar4 = param_1;
  do {
    if (*piVar4 == 0) {
      pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x30,5);
      *piVar4 = (int)pDVar3;
    }
    iVar7 = *piVar4;
    piVar4 = piVar4 + 1;
    *(undefined4 *)(iVar7 + 0xc) = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if ((STField<int>(this,0x5ac) == 0x32) || (STField<int>(this,0x5ac) == 0x5c)) {
    /* ST_CALLSITE[004CF6A7]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    uVar3 = LookupRecordByte(STField<char>(this,0x24));
    uVar3 = (int)(byte)uVar3;
    local_10 = (undefined *)(uVar3 + -1);
    memset(local_fc, 0, 0xa0); /* compiler bulk-zero initialization */
    if (((STField<int>(this,0x5ac) == 0x5c) &&
        (pDVar3 = g_packedRecords_A62x8[STField<int>(this,0x24)].field1970_0x9de,
        pDVar3 != nullptr)) && (index = 0, 0 < (int)pDVar3->count)) {
      do {
        DArrayGetElement(pDVar3,index,&local_28);
        piVar5 = local_fc;
        piVar8 = (int *)(local_28 + 0x4e0);
        iVar7 = 0x28;
        do {
          iVar6 = *piVar8;
          piVar8 = piVar8 + 1;
          *piVar5 = *piVar5 + iVar6;
          piVar5 = piVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        index = index + 1;
        pDVar3 = g_packedRecords_A62x8[STField<int>(this,0x24)].field1970_0x9de;
      } while ((int)index < (int)pDVar3->count);
    }
    local_2c = (int)local_10 << 4;
    local_8 = 0;
    do {
      local_10 = &DAT_00801330 + local_2c;
      local_c = nullptr;
      switch(local_8) {
      case 0:
        local_c = &DAT_00801450;
        break;
      case 1:
        local_c = &DAT_00801480;
        break;
      case 2:
        local_c = &DAT_00800f10;
        break;
      case 3:
        local_10 = &DAT_008013f0 + local_2c;
        local_c = local_10;
      }
      local_14 = local_fc;
      iVar7 = 1;
      do {
        if ((local_10 == nullptr) || (iVar6 = FUN_006b0fd0((int)local_10), iVar6 != 0)) {
          iVar6 = FUN_006b0fd0((int)local_c);
          if ((iVar6 != 0) &&
             (iVar6 = thunk_FUN_004e6010(STField<int>(this,0x24),iVar7 + 0x41), iVar6 != 0)) {
            memset(local_5c, 0, 0x30); /* compiler bulk-zero initialization */
            local_5c[0] = iVar7;
            /* ST_CALLSITE[004CF80A]: CALL 0x00401b59; direct=00401B59 TLOBaseTy::sub_004C9370 */
            local_5c[1] = TLOBaseTy::sub_004C9370(this,1,iVar7,-1);
            if ((STField<int>(this,0x361) == 1) && (STField<int>(this,0x369) == iVar7)) {
              local_5c[1] = local_5c[1] + STField<int>(this,0x36d);
            }
            iVar5 = thunk_FUN_004e6a80(STField<byte *>(this,0x24),iVar7);
            if ((iVar5 == 0) ||
               (local_54 = '\x01', g_worldGrid.sizeZ + -1 <= STField<int>(this,0x5b8))) {
              local_54 = '\0';
            }
            thunk_FUN_004c7260(this,CASE_1,iVar7,&local_20,&local_18,&local_1c,&local_24);
            local_4e = (undefined2)local_20;
            local_52 = (undefined2)local_18;
            /* ST_CALLSITE[004CF890]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            bVar2 = LookupRecordByte(STField<char>(this,0x24));
            if (bVar2 == 3) {
              local_50 = (undefined2)local_24;
            }
            else {
              local_50 = (undefined2)local_1c;
            }
            local_4c = 0xffff;
            if (*local_14 != 0) {
              local_4c = (undefined2)*local_14;
            }
            /* ST_CALLSITE[004CF8C8]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            local_53 = LookupRecordByte(STField<char>(this,0x24));
            if (local_54 == '\0') {
              thunk_FUN_004e6b40(STField<byte *>(this,0x24),iVar7,local_4a);
            }
            Library::DKW::TBL::DArrayAppend((DArrayTy *)param_1[local_8],local_5c);
          }
        }
        local_14 = local_14 + 1;
        bVar1 = iVar7 < 0x28;
        iVar7 = iVar7 + 1;
      } while (bVar1);
      local_8 = local_8 + 1;
    } while (local_8 < 4);
  }
  return;
}

