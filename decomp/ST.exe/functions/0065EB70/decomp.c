#include "../../pseudocode_runtime.h"


int __thiscall
FUN_0065eb70(void *this,uint param_1,int param_2,uint *param_3,uint param_4,uint param_5,
            byte *param_6,undefined4 param_7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint *local_c;
  int local_8;

  iVar5 = param_2;
  iVar3 = 0;
  local_8 = 0;
  local_c = nullptr;
  if (((g_allPlayers_007FA174 != nullptr) && (param_3 != nullptr)) && (0 < param_2)
     ) {
    if (((int)param_1 < 0) || (8 < (int)param_1)) {
      param_1 = STField<uint>(this,0x97);
    }
    if (param_1 == 8) {
      param_1 = (uint)DAT_0080874d;
    }
    if (param_1 != 0xff) {
      cVar6 = (char)param_1;
      uVar1 = thunk_FUN_0043e460(cVar6);
      if (uVar1 == 0) {
        local_8 = 0;
      }
      else {
        local_c = Library::DKW::LIB::MemAllocClear((uint)uVar1 * 0x2c);
        DAT_00811900 = 0;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((char)param_7 == '\b') {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_7 = STReplaceLowByte((uint32_t)(param_7), (uint8_t)(cVar6));
        }
        else if (((char)param_7 < '\0') || ('\b' < (char)param_7)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_7 = STReplaceLowByte((uint32_t)(param_7), (uint8_t)(0xff));
        }
        _EnumPlObj(param_1,param_4,param_5,param_6,(char)param_7,0,0,0,-1,-1,-1,thunk_FUN_0065e860,
                   local_c,nullptr);
        if (DAT_00811900 == 0) {
          local_8 = 0;
        }
        else if (iVar5 < DAT_00811900) {
          if (0 < iVar5) {
            do {
              iVar2 = thunk_FUN_00423220((void *)((int)this + 0x1c),(int *)local_c,DAT_00811900);
              if (local_c[iVar2 * 0xb + 3] != 0) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                STPiece<0,2>(param_2) = CONCAT11(1,cVar6);
                /* ST_PSEUDO[stack_slot_reuse,packed_or_unaligned_piece]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; expected named packed member, bit extract/compose, or unaligned load */
                param_2 = CONCAT22((short)local_c[iVar2 * 0xb + 4],(undefined2)param_2);
                Library::DKW::TBL::DArrayAppend((DArrayTy *)param_3,&param_2);
                local_8 = local_8 + 1;
              }
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else {
          iVar4 = 0;
          iVar5 = DAT_00811900;
          if (0 < DAT_00811900) {
            do {
              if (*(int *)(iVar3 + 0xc + (int)local_c) != 0) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                STPiece<0,2>(param_2) = CONCAT11(1,cVar6);
                /* ST_PSEUDO[stack_slot_reuse,packed_or_unaligned_piece]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; expected named packed member, bit extract/compose, or unaligned load */
                param_2 = CONCAT22(*(undefined2 *)(iVar3 + 0x10 + (int)local_c),(undefined2)param_2);
                Library::DKW::TBL::DArrayAppend((DArrayTy *)param_3,&param_2);
                local_8 = local_8 + 1;
                iVar5 = DAT_00811900;
              }
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + 0x2c;
            } while (iVar4 < iVar5);
          }
        }
      }
      if (local_c != nullptr) {
        FreeAndNull(&local_c);
      }
      return local_8;
    }
  }
  return -1;
}

