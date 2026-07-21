
/* [STPrototypeApplier] Propagated return.
   Evidence: 0055C050 returns used as parameter 4 of DibPut @ 005A8830 */

byte * __thiscall FUN_0055c050(void *this,int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;

  if (*(int *)((int)this + 0x40) == 0) {
    thunk_FUN_0055bf20(this,*(undefined4 *)((int)this + 0x3c));
    if (*(int *)((int)this + 0x40) == 0) {
      return (byte *)0x0;
    }
  }
  iVar4 = 0xe;
  iVar3 = 0x1c;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = CFsgsConnection::GetUserIconIndex
                    (this,(char *)(param_1 + 0x10),*(ulong *)(param_1 + 0x25));
  pbVar2 = (byte *)Library::DKW::WGR::FUN_006b55f0
                             ((AnonShape_006B5B10_E0D06CF1 *)0x0,0,0,0,*(byte **)((int)this + 0x40),
                              0,0,iVar1 * 0xe,iVar3,iVar4);
  return pbVar2;
}

