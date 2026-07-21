
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E60E0 returns STGroupBoatC::sub_006E60E0 this @ 006E60F8 */

STGroupBoatC * __thiscall sub_006E60E0(void *this)

{
  sub_006E5FB0(this);
  *(VTable_0079E1B0 **)this = &VTable_0079E1B0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return this;
}

