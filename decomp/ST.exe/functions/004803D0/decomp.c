#include "../../pseudocode_runtime.h"


int __thiscall STBoatC::FUN_004803d0(STBoatC *this,int param_1)

{
  int iVar1;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    if (this->field_07CA != (AnonShape_005EFAE0_B406B78B *)0x0) {
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
  iVar1 = *(int *)((int)this->field_06CB + 0x24);
  if (iVar1 == 0) {
    iVar1 = LoadObj(this,(AnonShape_005EFAE0_B406B78B *)param_1);
    if (iVar1 == -1) {
      return -1;
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (this->field_07CA == (AnonShape_005EFAE0_B406B78B *)0x0) {
      return 0;
    }
    *(undefined4 *)((int)this->field_06CB + 0x24) = 1;
    this->field_07CE = 1;
  }
  else if (iVar1 == 1) {
    iVar1 = this->vfunc_D8();
    if (iVar1 != 0) {
      return -1;
    }
    if (g_playSystem_00802A38->field_00E4 % 0x25 == 0) {
      iVar1 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_07CA,&param_1);
      if (iVar1 == -4) {
        return 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1 + 0x716) == *(int *)(param_1 + 0x712)) {
        this->field_03D2 = 0xffff;
        this->field_03D0 = 0xffff;
        this->field_03CE = 0xffff;
        *(undefined4 *)((int)this->field_06CB + 0x24) = 2;
        iVar1 = UnLoadObj(this,1);
        return iVar1;
      }
    }
  }
  else if (iVar1 == 2) {
    iVar1 = UnLoadObj(this,2);
    return iVar1;
  }
  return 2;
}

