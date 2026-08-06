#include "../../pseudocode_runtime.h"


int __thiscall STBoatC::FUN_004803d0(STBoatC *this,AnonShape_004803D0_350EB461 *param_1)

{
  int local_EAX_141;
  int local_EAX_344;
  int iVar1;
  int iVar2;

  if ((param_1 == nullptr) ||
     (param_1 == (AnonShape_004803D0_350EB461 *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    if (this->field_07CA != nullptr) {
      return 0;
    }
    *(undefined2 *)&this->field_0x3ba = *(undefined2 *)&this->field_0x44b;
    *(undefined2 *)&this->field_0x3be = *(undefined2 *)&this->field_0x44f;
    *(undefined2 *)&this->field_0x3bc = *(undefined2 *)&this->field_0x44d;
    *(undefined4 *)&this->field_0x3c0 = *(undefined4 *)&this->field_0x451;
    *(undefined4 *)(this->field_06CB + 4) = *(undefined4 *)&this->field_0x451;
    *(undefined4 *)((int)this->field_06CB + 0x24) = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)((int)this->field_06CB + 0x24);
  if (iVar2 == 0) {
    local_EAX_141 = LoadObj(this,(AnonShape_005EFAE0_B406B78B *)param_1);
    if (local_EAX_141 == -1) {
      return -1;
    }
    if (local_EAX_141 != 0) {
      return local_EAX_141;
    }
    if (this->field_07CA == nullptr) {
      return 0;
    }
    *(undefined4 *)((int)this->field_06CB + 0x24) = 1;
    this->field_07CE = 1;
  }
  else if (iVar2 == 1) {
    iVar2 = this->vfunc_D8();
    if (iVar2 != 0) {
      return -1;
    }
    if (g_playSystem_00802A38->field_00E4 % 0x25 == 0) {
      iVar2 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_07CA,(int *)&param_1);
      if (iVar2 == -4) {
        return 0;
      }
      if (param_1->field_0716 == param_1->field_0712) {
        this->field_03D2 = 0xffff;
        this->field_03D0 = 0xffff;
        this->field_03CE = 0xffff;
        *(undefined4 *)((int)this->field_06CB + 0x24) = 2;
        local_EAX_344 = UnLoadObj(this,1);
        return local_EAX_344;
      }
    }
  }
  else if (iVar2 == 2) {
    iVar1 = UnLoadObj(this,2);
    return iVar1;
  }
  return 2;
}

