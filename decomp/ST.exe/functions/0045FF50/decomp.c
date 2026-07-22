
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=4; incoming_this_accesses=5;
   incoming_edx_uses=0 */

undefined4 __thiscall STBoatC::sub_0045FF50(STBoatC *this,int param_1)

{
  STGroupBoatC *this_00;
  int iVar1;
  undefined4 uVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;

  if (param_1 == 0) {
    this_00 = thunk_FUN_0042b760(*(char *)&this->field_0024,(uint)(ushort)this->field_0030);
    if (this_00 != (STGroupBoatC *)0x0) {
      thunk_FUN_0040ae40(this_00,(uint)(ushort)this->field_0032,'\0');
      iVar1 = thunk_FUN_0040d540((AnonShape_0040D540_1BB7A4CF *)this_00,
                                 (uint)(ushort)this->field_0032);
      switch(iVar1) {
      case 0:
        this->field_00FD = 1;
        thunk_FUN_0040cdb0(this_00,(uint)(ushort)this->field_0032);
        break;
      case 1:
        this->field_00FA = 0;
        sub_0045F6C0(this);
        return 2;
      case -6:
      case 2:
        this->field_00FA = this->field_00FA + 1;
        return 2;
      default:
        return 2;
      }
switchD_00460024_caseD_1:
      return 0;
    }
  }
  else {
    uVar2 = (*this->vtable->vfunc_1C)();
    iVar1 = (*this->vtable->vfunc_D8)();
    if (iVar1 == 0) {
      switch(uVar2) {
      case 0:
        if ((this->field_06F7 != CASE_B) && (this->field_06F7 != CASE_23)) {
          return 2;
        }
        if (this->field_021D != 1) {
          return 2;
        }
        if (this->field_0024 != (uint)DAT_0080874d) {
          return 2;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        FUN_006e6780(this->field_0211,
                     CONCAT22(CONCAT11(2,(char)(this->field_0018 >> 0x10)),(short)this->field_0018))
        ;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        FUN_006e6710(this->field_0211,(float)(int)this->field_0041 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                     (uint)((float)this->field_010D * _DAT_007904f8 + _DAT_007904f4),0x28,
                     CONCAT22(CONCAT11(2,(char)(this->field_0018 >> 0x10)),(short)this->field_0018))
        ;
        return 2;
      case 1:
        goto switchD_00460024_caseD_1;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      case 2:
        (*this->vtable->StopMove)(this,unaff_EDI);
        return 3;
      }
    }
  }
  return 0xffffffff;
}

