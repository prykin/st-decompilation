#include "../../pseudocode_runtime.h"


int __fastcall FUN_0065dc00(AiFltClassTy *param_1,undefined4 param_2,uint param_3,char param_4)

{
  char cVar1;
  DArrayTy *array;
  dword dVar2;
  ushort *puVar3;
  STGameObjC *this;
  int iVar4;
  IMAGE_DOS_HEADER *pIVar5;
  uint uVar6;
  int local_8;

  local_8 = 0;
  /* ST_CALLSITE[0065DC13]: CALL 0x004018cf; direct=004018CF AiFltClassTy::sub_0065DA10 */
  array = (DArrayTy *)AiFltClassTy::sub_0065DA10(param_1,param_2);
  if (array != nullptr) {
    cVar1 = param_1->field_0081;
    if ((cVar1 < '\0') || ('\a' < cVar1)) {
      cVar1 = (char)param_1->field_0024;
    }
    if ((param_4 != '\b') && ((param_4 < '\0' || (cVar1 = param_4, '\b' < param_4)))) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = -1;
      cVar1 = param_4;
    }
    param_4 = cVar1;
    dVar2 = array->count;
    uVar6 = 0;
    if (0 < (int)dVar2) {
      do {
        if (uVar6 < dVar2) {
          puVar3 = DArrayAt<ushort>(array, uVar6);
        }
        else {
          puVar3 = nullptr;
        }
        /* ST_CALLSITE[0065DC81]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        this = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,*(char *)&param_1->field_0024,*puVar3,CASE_1);
        /* ST_CALLSITE[0065DC90]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        if (((this != nullptr) && (iVar4 = (*this->vtable[1].vfunc_24)(this), iVar4 != 0))
           /* ST_CALLSITE[0065DCA5]: CALL dword ptr [EAX + 0x6c] */
           && ((param_4 < '\0' || (iVar4 = this->vfunc_6C(), param_4 == iVar4)))) {
          /* ST_CALLSITE[0065DCB4]: CALL dword ptr [EDX + 0x2c] */
          iVar4 = this->vfunc_2C();
          pIVar5 = thunk_FUN_00674fb0(iVar4);
          if ((param_3 & (uint)pIVar5) != 0) {
            local_8 = local_8 + 1;
          }
        }
        dVar2 = array->count;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)dVar2);
    }
    DArrayDestroy(array);
    return local_8;
  }
  return 0;
}

