#include "../../pseudocode_runtime.h"


uint __fastcall FUN_0044ce40(STAllPlayersC *param_1)

{
  DArrayTy *array;
  dword dVar1;
  byte bVar2;
  STGameObjC *this;
  undefined4 uVar3;
  uint uVar4;
  short sVar5;
  uint index;
  undefined1 local_c [4];
  STAllPlayersC *local_8;

  uVar4 = 0;
  index = 0;
  array = (DArrayTy *)g_packedRecords_A62x8[DAT_0080874d].field102_0x16d;
  dVar1 = array->count;
  local_8 = param_1;
  if (0 < (int)dVar1) {
    do {
      DArrayGetElement(array,index,local_c);
      if ((STPiece<0,2>(local_c) != 0xffff) &&
         /* ST_CALLSITE[0044CEA0]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
         (this = STAllPlayersC::GetObjPtr(local_8,DAT_0080874d,STPiece<0,2>(local_c),CASE_1),
         this != nullptr)) {
        /* ST_CALLSITE[0044CEB1]: CALL dword ptr [EDX + 0x2c] */
        uVar3 = this->vfunc_2C();
        switch(uVar3) {
        case 1:
        case 2:
        case 3:
        case 10:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x26:
        case 0x27:
          uVar4 = uVar4 | 0x2000;
          break;
        case 4:
          uVar4 = uVar4 | 0x40;
          break;
        case 5:
          uVar4 = uVar4 | 2;
          break;
        case 6:
        case 0x12:
          uVar4 = uVar4 | 1;
          break;
        case 7:
        case 0x13:
          uVar4 = uVar4 | 0x400;
          break;
        case 8:
        case 0x14:
          uVar4 = uVar4 | 0x200;
          break;
        case 9:
          uVar4 = uVar4 | 0x80;
          break;
        case 0xb:
          uVar4 = uVar4 | 4;
          break;
        case 0xc:
        case 0x18:
          uVar4 = uVar4 | 0x800;
          break;
        case 0x11:
          uVar4 = uVar4 | 8;
          break;
        case 0x15:
          uVar4 = uVar4 | 0x100;
          break;
        case 0x16:
          uVar4 = uVar4 | 0x28;
          break;
        case 0x17:
          uVar4 = uVar4 | 0x10;
          break;
        case 0x19:
          uVar4 = uVar4 | 0x40000;
          break;
        case 0x1a:
          uVar4 = uVar4 | 0x20000;
          break;
        case 0x1b:
          uVar4 = uVar4 | 0x200000;
          break;
        case 0x1c:
          uVar4 = uVar4 | 0x80000;
          break;
        case 0x1d:
          uVar4 = uVar4 | 0x100000;
          break;
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x28:
          uVar4 = uVar4 | 0x2000000;
          break;
        case 0x21:
          uVar4 = uVar4 | 0x400000;
          break;
        case 0x22:
          uVar4 = uVar4 | 0x10000;
          break;
        case 0x23:
          uVar4 = uVar4 | 0x800000;
          break;
        case 0x24:
          uVar4 = uVar4 | 0x1000000;
          break;
        case 0x25:
          uVar4 = uVar4 | 0x1000;
        }
      }
      index = index + 1;
    } while ((int)index < (int)dVar1);
    if (uVar4 != 0) {
      sVar5 = (short)(uVar4 >> 0x10);
      if (sVar5 == 0) {
        /* ST_CALLSITE[0044CFE1]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        if (((short)uVar4 != 0) && (bVar2 = LookupRecordByte(DAT_0080874d), bVar2 == 3)) {
          return 0x2000000;
        }
      }
      else if ((short)uVar4 != 0) {
        /* ST_CALLSITE[0044CFB4]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar2 = LookupRecordByte(DAT_0080874d);
        return (-(uint)(bVar2 != 3) & 0xfe002000) + 0x2000000;
      }
      /* ST_CALLSITE[0044D007]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      if ((sVar5 != 0) && (bVar2 = LookupRecordByte(DAT_0080874d), bVar2 != 3)) {
        return 0x2000;
      }
      /* ST_CALLSITE[0044D024]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar2 = LookupRecordByte(DAT_0080874d);
      if (bVar2 == 3) {
        if (uVar4 < 0x100001) {
          if (uVar4 != 0x100000) {
            if (uVar4 < 0x40001) {
              if (((uVar4 != 0x40000) && (uVar4 != 0x10000)) && (uVar4 != 0x20000)) {
                return 0x2000000;
              }
            }
            else if (uVar4 != 0x80000) {
              return 0x2000000;
            }
          }
        }
        else if (uVar4 < 0x800001) {
          if (((uVar4 != 0x800000) && (uVar4 != 0x200000)) && (uVar4 != 0x400000)) {
            return 0x2000000;
          }
        }
        else if (uVar4 != 0x1000000) {
          return 0x2000000;
        }
      }
      else if (uVar4 < 0x81) {
        if (uVar4 != 0x80) {
          if (0x3f < uVar4 - 1) {
            return 0x2000;
          }
                    /* WARNING: Could not recover jumptable at 0x0044d04b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          uVar4 = (*(code *)(&switchD_0044d04b::switchdataD_0044d1d0)
                            [*(byte *)((int)&PTR_caseD_3_0044d1d4 + uVar4 + 3)])();
          return uVar4;
        }
      }
      else if (uVar4 < 0x401) {
        if (((uVar4 != 0x400) && (uVar4 != 0x100)) && (uVar4 != 0x200)) {
          return 0x2000;
        }
      }
      else if ((uVar4 != 0x800) && (uVar4 != 0x1000)) {
        return 0x2000;
      }
      return uVar4;
    }
  }
  return 0;
}

