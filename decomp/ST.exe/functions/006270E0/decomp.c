
void __thiscall FUN_006270e0(void *this,int param_1,undefined1 *param_2)

{
  if (param_2 != (undefined1 *)0x0) {
    if (param_1 == 0x15) {
      *(undefined1 *)((int)this + 0x35e) = *param_2;
      *(undefined1 *)((int)this + 0x359) = 1;
      *(undefined4 *)((int)this + 0x35a) = 0x15;
    }
    else if ((param_1 == 0x2a) && (*(char *)((int)this + 0x2ad) == '\x02')) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (**(byte **)(param_2 + 0x17) == 0xff) {
        *(undefined4 *)((int)this + 0x342) = 0;
        return;
      }
      *(uint *)((int)this + 0x342) =
           *(uint *)((int)this + 0x342) ^ 1 << (**(byte **)(param_2 + 0x17) & 0x1f);
      return;
    }
  }
  return;
}

